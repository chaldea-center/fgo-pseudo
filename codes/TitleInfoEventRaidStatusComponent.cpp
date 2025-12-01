void TitleInfoEventRaidStatusComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int32_t v63; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v71; // x0
  int32_t v72; // w1
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  TitleInfoEventRaidStatusComponent_c *v79; // x8
  struct TitleInfoEventRaidStatusComponent_StaticFields *v80; // x9
  struct TitleInfoEventRaidStatusComponent_StaticFields *v81; // x9
  struct TitleInfoEventRaidStatusComponent_StaticFields *v82; // x9
  struct TitleInfoEventRaidStatusComponent_StaticFields *v83; // x9

  if ( (byte_4CC5D12 & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_23050/*"raid_boss_status_battle_"*/);
    sub_1C713B0(&StringLiteral_23052/*"raid_boss_status_lose_"*/);
    sub_1C713B0(&StringLiteral_19308/*"event_raid_status_02"*/);
    sub_1C713B0(&StringLiteral_19309/*"event_raid_sub_group_back"*/);
    sub_1C713B0(&StringLiteral_23051/*"raid_boss_status_last_"*/);
    sub_1C713B0(&StringLiteral_19311/*"event_raid_sub_group_front"*/);
    sub_1C713B0(&StringLiteral_19310/*"event_raid_sub_group_battle_{0:00}"*/);
    sub_1C713B0(&StringLiteral_19307/*"event_raid_status_01"*/);
    sub_1C713B0(&StringLiteral_23053/*"raid_boss_status_win_"*/);
    sub_1C713B0(&StringLiteral_19312/*"event_raid_sub_group_partition"*/);
    byte_4CC5D12 = 1;
  }
  TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE = (struct System_String_o *)StringLiteral_23050/*"raid_boss_status_battle_"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)TitleInfoEventRaidStatusComponent_TypeInfo->static_fields,
    StringLiteral_23050/*"raid_boss_status_battle_"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_23053/*"raid_boss_status_win_"*/;
  static_fields = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_WIN = (struct System_String_o *)StringLiteral_23053/*"raid_boss_status_win_"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_WIN,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_23052/*"raid_boss_status_lose_"*/;
  v16 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v16->RAIDBOSS_ICON_SPNAME_PREFIX_LOSE = (struct System_String_o *)StringLiteral_23052/*"raid_boss_status_lose_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v16->RAIDBOSS_ICON_SPNAME_PREFIX_LOSE, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_23051/*"raid_boss_status_last_"*/;
  v24 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v24->RAIDBOSS_ICON_SPNAME_PREFIX_LAST = (struct System_String_o *)StringLiteral_23051/*"raid_boss_status_last_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v24->RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_19311/*"event_raid_sub_group_front"*/;
  v32 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v32->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT = (struct System_String_o *)StringLiteral_19311/*"event_raid_sub_group_front"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v32->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT,
    v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = StringLiteral_19309/*"event_raid_sub_group_back"*/;
  v40 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v40->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK = (struct System_String_o *)StringLiteral_19309/*"event_raid_sub_group_back"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v40->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK,
    v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = StringLiteral_19312/*"event_raid_sub_group_partition"*/;
  v48 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v48->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION = (struct System_String_o *)StringLiteral_19312/*"event_raid_sub_group_partition"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v48->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION,
    v47,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = StringLiteral_19310/*"event_raid_sub_group_battle_{0:00}"*/;
  v56 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v56->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID = (struct System_String_o *)StringLiteral_19310/*"event_raid_sub_group_battle_{0:00}"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v56->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID,
    v55,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = StringLiteral_19307/*"event_raid_status_01"*/;
  v64 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v64->RAIDBOSS_ICON_SPNAME_STATUS_01 = (struct System_String_o *)StringLiteral_19307/*"event_raid_status_01"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v64->RAIDBOSS_ICON_SPNAME_STATUS_01, v63, v65, v66, v67, v68, v69, v70);
  v71 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v72 = StringLiteral_19308/*"event_raid_status_02"*/;
  v71->RAIDBOSS_ICON_SPNAME_STATUS_02 = (struct System_String_o *)StringLiteral_19308/*"event_raid_status_02"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v71->RAIDBOSS_ICON_SPNAME_STATUS_02, v72, v73, v74, v75, v76, v77, v78);
  v79 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v80 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&v80->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  v80->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  v81 = v79->static_fields;
  *(_QWORD *)&v81->FRAME_ANIM_OUT_POS_JUMBLE.fields.x = 3281387520LL;
  v81->FRAME_ANIM_OUT_POS_JUMBLE.fields.z = 0.0;
  v82 = v79->static_fields;
  *(_OWORD *)&v82->FRAME_ANIM_DURATION = xmmword_CEF430;
  *(_QWORD *)&v82->ICON_MASK_COLOR.fields.b = 0x3F8000003F000000LL;
  v83 = v79->static_fields;
  *(_QWORD *)&v83->JUMBLE_TERMINAL_REFRESH_TIME_OFFSET = 0x500000003LL;
  v83->RAIDBOSS_OUTLINE_COLOR_BATTLE = (struct UnityEngine_Color_o)xmmword_CEFD90;
  v83->TITLE_LABEL_BASE_WIDTH = 120;
  v79->static_fields->RAIDBOSS_OUTLINE_COLOR_WIN = (struct UnityEngine_Color_o)xmmword_CEEE10;
  v79->static_fields->RAIDBOSS_OUTLINE_COLOR_LAST = (struct UnityEngine_Color_o)xmmword_CEEC80;
}


void TitleInfoEventRaidStatusComponent___ctor(TitleInfoEventRaidStatusComponent_o *this, const MethodInfo *method)
{
  this->fields.lastMinute = -1;
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0);
}


void TitleInfoEventRaidStatusComponent__AnimFrameOutEnd(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventRaidEntity_o *eventRaidEntity; // x0
  struct System_Action_o *clearAnimCallBack; // x8
  struct EventRaidEntity_o *v6; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX_WIN; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  System_String_o *v12; // x1

  if ( (byte_4CC5D0B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_18028/*"clearAnimFinised"*/);
    byte_4CC5D0B = 1;
  }
  if ( this->fields.isJumbleRaid )
  {
    eventRaidEntity = this->fields.eventRaidEntity;
    if ( eventRaidEntity )
    {
      if ( EventRaidEntity__IsJumbleSingleRaid(eventRaidEntity, 0) )
        goto LABEL_9;
      eventRaidEntity = (EventRaidEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( eventRaidEntity )
      {
        eventRaidEntity = (EventRaidEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)eventRaidEntity,
                                                 (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( eventRaidEntity )
        {
          EventRaidMaster__GetNextSubGroupEntity((EventRaidMaster_o *)eventRaidEntity, this->fields.eventRaidEntity, 0);
LABEL_9:
          clearAnimCallBack = this->fields.clearAnimCallBack;
          if ( clearAnimCallBack )
            ((void (__fastcall *)(intptr_t, intptr_t))clearAnimCallBack->fields.invoke_impl)(
              clearAnimCallBack->fields.method_code,
              clearAnimCallBack->fields.method);
          return;
        }
      }
    }
LABEL_19:
    sub_1C71608(eventRaidEntity, method);
  }
  TitleInfoEventRaidStatusComponent__SetOutlineWinColor(this, this->fields.raidBossHp, v2);
  eventRaidEntity = (EventRaidEntity_o *)TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
  v6 = this->fields.eventRaidEntity;
  if ( !v6 )
    goto LABEL_19;
  RAIDBOSS_ICON_SPNAME_PREFIX_WIN = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_WIN;
  v8 = System_Int32__ToString((int)v6 + 64, 0);
  v9 = System_String__Concat_64031724(RAIDBOSS_ICON_SPNAME_PREFIX_WIN, v8, 0);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v9, v10);
  if ( this->fields.clearAnimCallBack )
    v12 = (System_String_o *)StringLiteral_18028/*"clearAnimFinised"*/;
  else
    v12 = 0;
  TitleInfoEventRaidStatusComponent__FrameIn(this, v12, v11);
}


void TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        UnityEngine_GameObject_o *gameObj,
        float from,
        float to,
        int32_t tweenMethod,
        const MethodInfo *method)
{
  TitleInfoEventRaidStatusComponent_c *v10; // x0
  Il2CppObject *v11; // x0
  __int64 v12; // x1

  if ( (byte_4CC5D0E & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1C713B0(&Method_UITweener_Begin_TweenAlpha___);
    byte_4CC5D0E = 1;
  }
  v10 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v10 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  v11 = UITweener__Begin_object_(
          gameObj,
          v10->static_fields->FRAME_ANIM_DURATION,
          (const MethodInfo_32209B8 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v11 )
    sub_1C71608(0, v12);
  LODWORD(v11[2].klass) = tweenMethod;
  *(float *)&v11[8].klass = from;
  *((float *)&v11[8].klass + 1) = to;
}


void TitleInfoEventRaidStatusComponent__Destroy(TitleInfoEventRaidStatusComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventRaidStatusComponent__EntryAnim(TitleInfoEventRaidStatusComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TitleInfoEventRaidStatusComponent__FrameIn(this, 0, v2);
}


void TitleInfoEventRaidStatusComponent__FrameIn(
        TitleInfoEventRaidStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  char *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *raidBossName; // x21
  TitleInfoEventRaidStatusComponent_o *v8; // x0
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *raidBossHpHead; // x21
  TitleInfoEventRaidStatusComponent_o *v11; // x0
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *v13; // x0
  TitleInfoEventRaidStatusComponent_c *v14; // x8
  UnityEngine_GameObject_o *v15; // x21
  char *v16; // x21
  float z; // w8
  __int64 v18; // x9
  UnityEngine_GameObject_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  TitleInfoEventRaidStatusComponent_o *v32; // x0
  const MethodInfo *v33; // x3
  TitleInfoEventRaidStatusComponent_o *v34; // x0
  const MethodInfo *v35; // x3
  __int64 v36; // [xsp+0h] [xbp-40h]

  if ( (byte_4CC5D0C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1C713B0(&Method_UITweener_Begin_TweenPosition___);
    byte_4CC5D0C = 1;
  }
  if ( this->fields.isJumbleRaid )
  {
    gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    raidBossName = (UnityEngine_Object_o *)this->fields.raidBossName;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raidBossName, 0, 0) )
    {
      gameObject = (char *)this->fields.raidBossName;
      if ( !gameObject )
        goto LABEL_23;
      v8 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)gameObject,
                                                    0);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v8, (UnityEngine_GameObject_o *)v8, 0.0, 1.0, 6, v9);
    }
    raidBossHpHead = (UnityEngine_Object_o *)this->fields.raidBossHpHead;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raidBossHpHead, 0, 0) )
    {
      gameObject = (char *)this->fields.raidBossHpHead;
      if ( !gameObject )
        goto LABEL_23;
      v11 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v11, (UnityEngine_GameObject_o *)v11, 0.0, 1.0, 6, v12);
    }
  }
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v14 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v15 = v13;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v14 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  gameObject = (char *)UITweener__Begin_object_(
                         v15,
                         v14->static_fields->FRAME_ANIM_DURATION,
                         (const MethodInfo_32209B8 *)Method_UITweener_Begin_TweenPosition___);
  v36 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !gameObject )
    goto LABEL_23;
  v16 = gameObject;
  *((_DWORD *)gameObject + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)gameObject + 16) = v36;
  z = this->fields.inPos.fields.z;
  v18 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)gameObject + 8) = 6;
  *((float *)gameObject + 37) = z;
  *(_QWORD *)(gameObject + 140) = v18;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v16 + 10) = v19;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 80), (int32_t)v19, v20, v21, v22, v23, v24, v25);
  *((_QWORD *)v16 + 11) = callFinished;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 88), (int32_t)callFinished, v26, v27, v28, v29, v30, v31);
  gameObject = (char *)this->fields.raidBossIconSp;
  if ( !gameObject )
LABEL_23:
    sub_1C71608(gameObject, v6);
  v32 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0);
  TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v32, (UnityEngine_GameObject_o *)v32, 0.0, 1.0, 6, v33);
  if ( this->fields.isRaidDefeatCount )
  {
    gameObject = (char *)this->fields.raidBossHp;
    if ( gameObject )
    {
      v34 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v34, (UnityEngine_GameObject_o *)v34, 0.0, 1.0, 6, v35);
      return;
    }
    goto LABEL_23;
  }
}


void TitleInfoEventRaidStatusComponent__FrameOut(
        TitleInfoEventRaidStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventRaidStatusComponent_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x21
  char *raidBossIconSp; // x0
  __int64 v9; // x1
  char *v10; // x21
  float z; // w8
  __int64 v12; // x9
  UnityEngine_GameObject_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  TitleInfoEventRaidStatusComponent_o *v26; // x0
  const MethodInfo *v27; // x3
  TitleInfoEventRaidStatusComponent_o *v28; // x0
  const MethodInfo *v29; // x3
  UnityEngine_Object_o *raidBossName; // x20
  TitleInfoEventRaidStatusComponent_o *v31; // x0
  const MethodInfo *v32; // x3
  UnityEngine_Object_o *raidBossHpHead; // x20
  TitleInfoEventRaidStatusComponent_o *v34; // x0
  const MethodInfo *v35; // x3
  __int64 v36; // [xsp+0h] [xbp-40h]

  if ( (byte_4CC5D0D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1C713B0(&Method_UITweener_Begin_TweenPosition___);
    byte_4CC5D0D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v7 = gameObject;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  raidBossIconSp = (char *)UITweener__Begin_object_(
                             v7,
                             v6->static_fields->FRAME_ANIM_DURATION,
                             (const MethodInfo_32209B8 *)Method_UITweener_Begin_TweenPosition___);
  v36 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !raidBossIconSp )
    goto LABEL_22;
  v10 = raidBossIconSp;
  *((_DWORD *)raidBossIconSp + 34) = LODWORD(this->fields.inPos.fields.z);
  *((_QWORD *)raidBossIconSp + 16) = v36;
  z = this->fields.outPos.fields.z;
  v12 = *(_QWORD *)&this->fields.outPos.fields.x;
  *((_DWORD *)raidBossIconSp + 8) = 2;
  *((float *)raidBossIconSp + 37) = z;
  *(_QWORD *)(raidBossIconSp + 140) = v12;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v10 + 10) = v13;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v10 + 80), (int32_t)v13, v14, v15, v16, v17, v18, v19);
  *((_QWORD *)v10 + 11) = callFinished;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v10 + 88), (int32_t)callFinished, v20, v21, v22, v23, v24, v25);
  raidBossIconSp = (char *)this->fields.raidBossIconSp;
  if ( !raidBossIconSp )
    goto LABEL_22;
  v26 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)raidBossIconSp,
                                                 0);
  TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v26, (UnityEngine_GameObject_o *)v26, 1.0, 0.0, 2, v27);
  if ( this->fields.isRaidDefeatCount )
  {
    raidBossIconSp = (char *)this->fields.raidBossHp;
    if ( !raidBossIconSp )
      goto LABEL_22;
    v28 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)raidBossIconSp,
                                                   0);
    TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v28, (UnityEngine_GameObject_o *)v28, 1.0, 0.0, 2, v29);
  }
  if ( this->fields.isJumbleRaid )
  {
    raidBossName = (UnityEngine_Object_o *)this->fields.raidBossName;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raidBossName, 0, 0) )
    {
      raidBossIconSp = (char *)this->fields.raidBossName;
      if ( !raidBossIconSp )
        goto LABEL_22;
      v31 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)raidBossIconSp,
                                                     0);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v31, (UnityEngine_GameObject_o *)v31, 1.0, 0.0, 2, v32);
    }
    raidBossHpHead = (UnityEngine_Object_o *)this->fields.raidBossHpHead;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raidBossHpHead, 0, 0) )
    {
      raidBossIconSp = (char *)this->fields.raidBossHpHead;
      if ( raidBossIconSp )
      {
        v34 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)raidBossIconSp,
                                                       0);
        TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v34, (UnityEngine_GameObject_o *)v34, 1.0, 0.0, 2, v35);
        return;
      }
LABEL_22:
      sub_1C71608(raidBossIconSp, v9);
    }
  }
}


float TitleInfoEventRaidStatusComponent__GetCellHeight(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  struct UISprite_o *raidBossIconSp; // x8

  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity
    || (eventBossStatusUiEntity = (EventBossStatusUiEntity_o *)EventBossStatusUiEntity__GetStatusHeight(
                                                                 eventBossStatusUiEntity,
                                                                 0),
        (int)eventBossStatusUiEntity <= 0) )
  {
    raidBossIconSp = this->fields.raidBossIconSp;
    if ( !raidBossIconSp )
      sub_1C71608(eventBossStatusUiEntity, method);
    LODWORD(eventBossStatusUiEntity) = raidBossIconSp->fields.mHeight;
  }
  return (float)(int)eventBossStatusUiEntity;
}


System_String_o *TitleInfoEventRaidStatusComponent__GetRestCountText(
        TitleInfoEventRaidStatusComponent_o *this,
        int64_t totalHp,
        int64_t totalDamage,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  System_String_o *CountFormat; // x20
  Il2CppObject *NumberFormat_41551736; // x0
  System_String_o *v9; // x19
  int64_t v11; // [xsp+0h] [xbp-30h] BYREF
  int64_t v12; // [xsp+8h] [xbp-28h] BYREF

  v12 = totalHp;
  if ( (byte_4CC5D03 & 1) == 0 )
  {
    sub_1C713B0(&long_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_5592/*"EVENT_DEFEAT_COUNT_TXT"*/);
    byte_4CC5D03 = 1;
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity
    && (CountFormat = EventBossStatusUiEntity__GetCountFormat(eventBossStatusUiEntity, 0),
        !System_String__IsNullOrEmpty(CountFormat, 0)) )
  {
    v9 = System_Int64__ToString((int64_t)&v12, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    NumberFormat_41551736 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41551736(v9, 0);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    CountFormat = LocalizationManager__Get((System_String_o *)StringLiteral_5592/*"EVENT_DEFEAT_COUNT_TXT"*/, 0);
    v11 = totalDamage;
    NumberFormat_41551736 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v11);
  }
  return System_String__Format(CountFormat, NumberFormat_41551736, 0);
}


bool TitleInfoEventRaidStatusComponent__IsDispPossible(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool TitleInfoEventRaidStatusComponent__IsEventRaidBoss(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool TitleInfoEventRaidStatusComponent__IsTargetRaid(
        TitleInfoEventRaidStatusComponent_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  struct EventRaidEntity_o *eventRaidEntity; // x8

  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    sub_1C71608(this, eventId);
  return eventRaidEntity->fields.eventId == eventId && eventRaidEntity->fields.day == day;
}


void TitleInfoEventRaidStatusComponent__MoveUp(
        TitleInfoEventRaidStatusComponent_o *this,
        int32_t moveY,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  float x; // s10
  float y; // s8
  float z; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventRaidStatusComponent_c *v11; // x8
  UnityEngine_GameObject_o *v12; // x21
  Il2CppObject *v13; // x21
  UnityEngine_GameObject_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC5D10 & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1C713B0(&Method_UITweener_Begin_TweenPosition___);
    byte_4CC5D10 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v12 = gameObject;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v11 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  v13 = UITweener__Begin_object_(
          v12,
          v11->static_fields->FRAME_ANIM_DURATION,
          (const MethodInfo_32209B8 *)Method_UITweener_Begin_TweenPosition___);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (v22 = UnityEngine_Transform__get_localPosition(transform, 0), !v13) )
LABEL_9:
    sub_1C71608(transform, v6);
  *(UnityEngine_Vector3_o *)&v13[8].klass = v22;
  *((float *)&v13[8].monitor + 1) = x;
  *(float *)&v13[9].klass = y + (float)moveY;
  *((float *)&v13[9].klass + 1) = z;
  LODWORD(v13[2].klass) = 2;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v13[5].klass = (Il2CppClass *)v14;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v13[5], (int32_t)v14, v15, v16, v17, v18, v19, v20);
}


void TitleInfoEventRaidStatusComponent__OnDestroy(TitleInfoEventRaidStatusComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventRaidStatusComponent__RefreshTerminal(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CC5D0F & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC5D0F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC1B52 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC1B52 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 1;
  TopHomeRequest__clearExpirationDate(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void TitleInfoEventRaidStatusComponent__RefreshTimeStr(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x20
  int32_t v4; // w22
  UILabel_o *raidBossStatus; // x19
  unsigned __int64 v6; // x21
  System_String_o *v7; // x20
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x0
  TerminalSceneComponent_o *Instance; // x0
  __int64 v11; // x1
  TitleInfoEventRaidStatusComponent_c *v12; // x0
  TerminalSceneComponent_c *v13; // x0
  const MethodInfo *v14; // x2
  TitleInfoEventRaidStatusComponent_o *v15; // x0
  const MethodInfo *v16; // x1
  System_String_o *v17; // x20
  Il2CppObject *v18; // x0
  int32_t v19; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v20; // [xsp+8h] [xbp-38h] BYREF
  int v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC5CFF & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    sub_1C713B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_5666/*"EVENT_RAID_NEXT_TIME_1"*/);
    sub_1C713B0(&StringLiteral_5667/*"EVENT_RAID_NEXT_TIME_2"*/);
    byte_4CC5CFF = 1;
  }
  if ( this->fields.isJumbleRaid && this->fields.targetTime >= 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = this->fields.targetTime - NetworkManager__getTime(0);
    if ( v3 < 1 )
    {
      v12 = TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
        v12 = TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      if ( v3 + v12->static_fields->JUMBLE_TERMINAL_REFRESH_TIME_OFFSET <= 0 )
      {
        Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0) )
        {
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4CC12CE )
          {
            sub_1C713B0(&TerminalSceneComponent_TypeInfo);
            byte_4CC12CE = 1;
          }
          v13 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v13 = TerminalSceneComponent_TypeInfo;
          }
          Instance = v13->static_fields->mInstance;
          if ( !Instance )
LABEL_31:
            sub_1C71608(Instance, v11);
          if ( TerminalSceneComponent__IsMapTouchEnabled(Instance, 0) )
          {
            this->fields.targetTime = 0;
            TitleInfoEventRaidStatusComponent__FrameOut(this, 0, v14);
            TitleInfoEventRaidStatusComponent__RefreshTerminal(v15, v16);
          }
        }
      }
    }
    else
    {
      v4 = v3 / 0x3CuLL % 0x3C;
      if ( this->fields.lastMinute != v4 )
      {
        this->fields.lastMinute = v4;
        raidBossStatus = this->fields.raidBossStatus;
        v6 = v3 / 0xE10uLL;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( (int)v6 < 1 )
        {
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5667/*"EVENT_RAID_NEXT_TIME_2"*/, 0);
          v19 = v4;
          v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
          Instance = (TerminalSceneComponent_o *)System_String__Format(v17, v18, 0);
          if ( !raidBossStatus )
            goto LABEL_31;
        }
        else
        {
          v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5666/*"EVENT_RAID_NEXT_TIME_1"*/, 0);
          v21 = v6;
          v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
          v20 = v4;
          v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
          Instance = (TerminalSceneComponent_o *)System_String__Format_64073032(v7, v8, v9, 0);
          if ( !raidBossStatus )
            goto LABEL_31;
        }
        UILabel__set_text(raidBossStatus, (System_String_o *)Instance, 0);
      }
    }
  }
}


void TitleInfoEventRaidStatusComponent__SetBossIcon(
        TitleInfoEventRaidStatusComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  UISprite_o *raidBossIconSp; // x21
  struct UISprite_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4CC5D00 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    byte_4CC5D00 = 1;
  }
  raidBossIconSp = this->fields.raidBossIconSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v6 = (struct UISprite_o *)AtlasManager__SetEventUI(raidBossIconSp, spName, 0);
  if ( !raidBossIconSp )
    goto LABEL_11;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)raidBossIconSp, (unsigned __int8)v6 & 1, 0);
  v6 = this->fields.raidBossIconSp;
  if ( !v6 )
    goto LABEL_11;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0) )
  {
    v6 = this->fields.raidBossIconSp;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
        v6,
        v6->klass->vtable._33_MakePixelPerfect.method);
      return;
    }
LABEL_11:
    sub_1C71608(v6, v7);
  }
}


void TitleInfoEventRaidStatusComponent__SetClearAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *eventRaidEntity; // x0
  const MethodInfo *v4; // x1
  struct EventRaidEntity_o *v5; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX_LAST; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4CC5D09 & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_4CC5D09 = 1;
  }
  eventRaidEntity = (UnityEngine_GameObject_o *)this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_11;
  if ( !EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)eventRaidEntity, 0) )
  {
    eventRaidEntity = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !eventRaidEntity )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(eventRaidEntity, 1, 0);
  }
  TitleInfoEventRaidStatusComponent__SetOutlineLastColor_40047404(this, v4);
  eventRaidEntity = (UnityEngine_GameObject_o *)TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
  v5 = this->fields.eventRaidEntity;
  if ( !v5 )
LABEL_11:
    sub_1C71608(eventRaidEntity, method);
  RAIDBOSS_ICON_SPNAME_PREFIX_LAST = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
  v7 = System_Int32__ToString((int)v5 + 64, 0);
  v8 = System_String__Concat_64031724(RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v7, 0);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v8, v9);
}


void TitleInfoEventRaidStatusComponent__SetEntryAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  TitleInfoEventRaidStatusComponent_c *v5; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v7; // d0
  float v8; // s2
  float y; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC5D08 & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_6077/*"EntryAnim"*/);
    byte_4CC5D08 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = localPosition.fields.y;
  this->fields.inPos.fields.z = 0.0;
  v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    y = localPosition.fields.y;
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    localPosition.fields.y = y;
    v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v5->static_fields;
  v7.n64_u32[0] = 0;
  v7.n64_u32[1] = LODWORD(localPosition.fields.y);
  v8 = static_fields[11].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32(static_fields[10], v7);
  this->fields.outPos.fields.z = v8 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0),
        (transform = (UnityEngine_Transform_o *)this->fields.raidBossIconSp) == 0)
    || (((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, float))transform->klass[1]._1.this_arg.data)(
          transform,
          *(_QWORD *)&transform->klass[1]._1.this_arg.bits,
          0.0),
        (transform = (UnityEngine_Transform_o *)this->fields.raidBossHp) == 0) )
  {
LABEL_10:
    sub_1C71608(transform, v4);
  }
  ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, float))transform->klass[1]._1.this_arg.data)(
    transform,
    *(_QWORD *)&transform->klass[1]._1.this_arg.bits,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6077/*"EntryAnim"*/,
    TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->ENTRY_ANIM_DELAY
  + (float)(this->fields.inPos.fields.y / -500.0),
    0);
}


void TitleInfoEventRaidStatusComponent__SetEventIcon(
        TitleInfoEventRaidStatusComponent_o *this,
        UISprite_o *sprite,
        System_String_o *prefix,
        int32_t iconId,
        const MethodInfo *method)
{
  System_String_o *v8; // x0
  System_String_o *v9; // x21
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = iconId;
  if ( (byte_4CC5D01 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&StringLiteral_16109/*"_"*/);
    byte_4CC5D01 = 1;
  }
  if ( iconId < 0 )
    goto LABEL_12;
  v8 = System_Int32__ToString((int32_t)&v10, 0);
  v9 = System_String__Concat_64069988(prefix, (System_String_o *)StringLiteral_16109/*"_"*/, v8, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v9, 0) )
  {
LABEL_12:
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(sprite, prefix, 0);
  }
}


void TitleInfoEventRaidStatusComponent__SetHpBarPosition(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  __int64 v4; // x1
  UnityEngine_Component_o *raidBossHp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v7; // [xsp+0h] [xbp-30h] BYREF

  v7.fields.z = 0.0;
  *(_QWORD *)&v7.fields.x = 0;
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity && EventBossStatusUiEntity__TryGetHpBarPos(eventBossStatusUiEntity, &v7, 0) )
  {
    raidBossHp = (UnityEngine_Component_o *)this->fields.raidBossHp;
    if ( !raidBossHp )
      sub_1C71608(0, v4);
    gameObject = UnityEngine_Component__get_gameObject(raidBossHp, 0);
    GameObjectExtensions__SetLocalPosition(gameObject, v7, 0);
  }
}


void TitleInfoEventRaidStatusComponent__SetOutlineBattleColor(
        TitleInfoEventRaidStatusComponent_o *this,
        UILabel_o *label,
        const MethodInfo *method)
{
  TitleInfoEventRaidStatusComponent_c *v5; // x0
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x20
  uint32_t cctor_finished; // w8
  UnityEngine_Color_o StatusBattleColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC5D04 & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_4CC5D04 = 1;
  }
  v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  cctor_finished = TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished;
  if ( eventBossStatusUiEntity )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    StatusBattleColor = EventBossStatusUiEntity__GetStatusBattleColor(
                          eventBossStatusUiEntity,
                          v5->static_fields->RAIDBOSS_OUTLINE_COLOR_BATTLE,
                          0);
    if ( label )
      goto LABEL_7;
LABEL_11:
    sub_1C71608(v5, label);
  }
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  StatusBattleColor = v5->static_fields->RAIDBOSS_OUTLINE_COLOR_BATTLE;
  if ( !label )
    goto LABEL_11;
LABEL_7:
  UILabel__set_effectColor(label, StatusBattleColor, 0);
}


void TitleInfoEventRaidStatusComponent__SetOutlineBattleColor_40046580(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  TitleInfoEventRaidStatusComponent__SetOutlineBattleColor(this, this->fields.raidBossHp, v2);
  if ( this->fields.isJumbleRaid )
  {
    TitleInfoEventRaidStatusComponent__SetOutlineBattleColor(this, this->fields.raidBossHpHead, v4);
    TitleInfoEventRaidStatusComponent__SetOutlineBattleColor(this, this->fields.raidBossName, v5);
  }
}


void TitleInfoEventRaidStatusComponent__SetOutlineColor(
        TitleInfoEventRaidStatusComponent_o *this,
        UILabel_o *label,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity )
  {
    v7.fields.r = 0.0;
    v7.fields.g = 0.0;
    v7.fields.b = 0.0;
    v7.fields.a = 0.0;
    TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor(eventBossStatusUiEntity, v7, 0);
    if ( !label )
      sub_1C71608(v5, v6);
    UILabel__set_effectColor(label, TextEffectColor, 0);
  }
}


void TitleInfoEventRaidStatusComponent__SetOutlineColorAndDefault(
        TitleInfoEventRaidStatusComponent_o *this,
        UILabel_o *label,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0

  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity )
    defaultColor = EventBossStatusUiEntity__GetTextEffectColor(eventBossStatusUiEntity, defaultColor, 0);
  if ( !label )
    sub_1C71608(eventBossStatusUiEntity, label);
  UILabel__set_effectColor(label, defaultColor, 0);
}


void TitleInfoEventRaidStatusComponent__SetOutlineLastColor(
        TitleInfoEventRaidStatusComponent_o *this,
        UILabel_o *label,
        const MethodInfo *method)
{
  TitleInfoEventRaidStatusComponent_c *v5; // x0
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x20
  uint32_t cctor_finished; // w8
  UnityEngine_Color_o StatusLastColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC5D05 & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_4CC5D05 = 1;
  }
  v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  cctor_finished = TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished;
  if ( eventBossStatusUiEntity )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    StatusLastColor = EventBossStatusUiEntity__GetStatusLastColor(
                        eventBossStatusUiEntity,
                        v5->static_fields->RAIDBOSS_OUTLINE_COLOR_LAST,
                        0);
    if ( label )
      goto LABEL_7;
LABEL_11:
    sub_1C71608(v5, label);
  }
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  StatusLastColor = v5->static_fields->RAIDBOSS_OUTLINE_COLOR_LAST;
  if ( !label )
    goto LABEL_11;
LABEL_7:
  UILabel__set_effectColor(label, StatusLastColor, 0);
}


void TitleInfoEventRaidStatusComponent__SetOutlineLastColor_40047404(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  TitleInfoEventRaidStatusComponent__SetOutlineLastColor(this, this->fields.raidBossHp, v2);
  if ( this->fields.isJumbleRaid )
  {
    TitleInfoEventRaidStatusComponent__SetOutlineLastColor(this, this->fields.raidBossHpHead, v4);
    TitleInfoEventRaidStatusComponent__SetOutlineLastColor(this, this->fields.raidBossName, v5);
  }
}


void TitleInfoEventRaidStatusComponent__SetOutlineWinColor(
        TitleInfoEventRaidStatusComponent_o *this,
        UILabel_o *label,
        const MethodInfo *method)
{
  TitleInfoEventRaidStatusComponent_c *v5; // x0
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x20
  uint32_t cctor_finished; // w8
  UnityEngine_Color_o StatusWinColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC5D06 & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_4CC5D06 = 1;
  }
  v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  cctor_finished = TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished;
  if ( eventBossStatusUiEntity )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    StatusWinColor = EventBossStatusUiEntity__GetStatusWinColor(
                       eventBossStatusUiEntity,
                       v5->static_fields->RAIDBOSS_OUTLINE_COLOR_WIN,
                       0);
    if ( label )
      goto LABEL_7;
LABEL_11:
    sub_1C71608(v5, label);
  }
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  StatusWinColor = v5->static_fields->RAIDBOSS_OUTLINE_COLOR_WIN;
  if ( !label )
    goto LABEL_11;
LABEL_7:
  UILabel__set_effectColor(label, StatusWinColor, 0);
}


void TitleInfoEventRaidStatusComponent__SetOutlineWinColor_40047464(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  TitleInfoEventRaidStatusComponent__SetOutlineWinColor(this, this->fields.raidBossHp, v2);
  if ( this->fields.isJumbleRaid )
  {
    TitleInfoEventRaidStatusComponent__SetOutlineWinColor(this, this->fields.raidBossHpHead, v4);
    TitleInfoEventRaidStatusComponent__SetOutlineWinColor(this, this->fields.raidBossName, v5);
  }
}


bool TitleInfoEventRaidStatusComponent__SetSubGroupBattleIdIcon(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventRaidStatusComponent_c *v3; // x0
  UISprite_o *subGroupBattleId; // x20
  struct EventRaidEntity_o *eventRaidEntity; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID; // x21
  Il2CppObject *v7; // x0
  System_String_o *v8; // x21
  TitleInfoEventRaidStatusComponent_c *v10; // x0
  UISprite_o *v11; // x19
  System_String_o *v12; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  int v16; // [xsp+8h] [xbp-38h] BYREF
  int32_t subGroupIndex; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC5D11 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_4CC5D11 = 1;
  }
  v3 = TitleInfoEventRaidStatusComponent_TypeInfo;
  subGroupBattleId = this->fields.subGroupBattleId;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    sub_1C71608(v3, method);
  RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID;
  subGroupIndex = eventRaidEntity->fields.subGroupIndex;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &subGroupIndex);
  v8 = System_String__Format(RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID, v7, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventUI(subGroupBattleId, v8, 0) )
  {
    return 1;
  }
  else
  {
    v10 = TitleInfoEventRaidStatusComponent_TypeInfo;
    v11 = this->fields.subGroupBattleId;
    if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v10 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    v12 = v10->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID;
    v16 = 1;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v14 = System_String__Format(v12, v13, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    return AtlasManager__SetEventUI(v11, v14, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventRaidStatusComponent__Setup(
        TitleInfoEventRaidStatusComponent_o *this,
        EventRaidEntity_o *eventRaidEntity,
        int32_t warId,
        int32_t currentDay,
        bool isJumbleRaid,
        bool isReprintLastWarRaid,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  _BOOL4 v12; // w24
  bool v13; // w25
  struct EventRaidEntity_o **p_eventRaidEntity; // x20
  struct EventRaidEntity_o *v15; // x8
  UnityEngine_Object_o *gameObject; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x22
  System_String_o *v19; // x23
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  UnityEngine_Object_o *v22; // x21
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  char v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UISprite_o *subGroup; // x21
  TitleInfoEventRaidStatusComponent_c *v31; // x0
  System_String_o *RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT; // x22
  const MethodInfo *v33; // x4
  struct EventRaidEntity_o *v34; // x8
  bool v35; // w1
  int v36; // w21
  Il2CppObject *v37; // x20
  Il2CppObject *v38; // x20

  v12 = isJumbleRaid;
  v13 = isReprintLastWarRaid;
  if ( (byte_4CC5CFE & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_4CC5CFE = 1;
  }
  this->fields.eventRaidEntity = eventRaidEntity;
  p_eventRaidEntity = &this->fields.eventRaidEntity;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventRaidEntity,
    (int32_t)eventRaidEntity,
    warId,
    currentDay,
    (System_String_o *)isJumbleRaid,
    isReprintLastWarRaid,
    (int64_t)method,
    v7);
  v15 = this->fields.eventRaidEntity;
  this->fields.warId = warId;
  this->fields.isJumbleRaid = v12;
  this->fields.isReprintLastWarRaid = v13;
  if ( v15 )
  {
    this->fields.currentDay = currentDay;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_49;
    v18 = gameObject;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0);
    if ( !eventRaidEntity )
      goto LABEL_49;
    v19 = (System_String_o *)gameObject;
    v20 = System_Int32__ToString((int)eventRaidEntity + 20, 0);
    v21 = System_String__Concat_64031724(v19, v20, 0);
    UnityEngine_Object__set_name(v18, v21, 0);
    gameObject = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)gameObject,
                                           (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                           eventRaidEntity->fields.eventId,
                                           (const MethodInfo_3408E80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !gameObject )
      goto LABEL_49;
    v22 = gameObject;
    this->fields.isRaidDefeatCount = EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)gameObject, 0);
    gameObject = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)gameObject,
                                           (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    if ( !gameObject )
      goto LABEL_49;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  (EventBossStatusUiMaster_o *)gameObject,
                                  v22->fields.m_CachedPtr,
                                  this->fields.currentDay,
                                  0);
    this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.eventBossStatusUiEntity,
      (int32_t)EntityFromEventIdAndIndex,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    v12 = this->fields.isJumbleRaid;
  }
  if ( v12 )
  {
    subGroup = this->fields.subGroup;
    v31 = TitleInfoEventRaidStatusComponent_TypeInfo;
    if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v31 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT = v31->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(subGroup, RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT, 0);
    AtlasManager__SetEventUI(
      this->fields.subGroupBase,
      TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK,
      0);
    gameObject = (UnityEngine_Object_o *)AtlasManager__SetEventUI(
                                           this->fields.subGroupPartition,
                                           TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION,
                                           0);
    v34 = this->fields.eventRaidEntity;
    if ( !v34 )
      goto LABEL_49;
    TitleInfoEventRaidStatusComponent__SetEventIcon(
      (TitleInfoEventRaidStatusComponent_o *)gameObject,
      this->fields.raidBattle,
      TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_STATUS_01,
      v34->fields.iconId,
      v33);
    gameObject = (UnityEngine_Object_o *)this->fields.raidBossName;
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Object_o *)this->fields.raidBossHpHead;
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Object_o *)this->fields.raidBossHp;
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Object_o *)this->fields.raidBattle;
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Object_o *)this->fields.raidBossStatus;
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Object_o *)*p_eventRaidEntity;
    if ( !*p_eventRaidEntity )
      goto LABEL_49;
    if ( EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)gameObject, 0) )
    {
      gameObject = (UnityEngine_Object_o *)this->fields.subGroupGrid;
      if ( !gameObject )
        goto LABEL_49;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
      if ( !gameObject )
        goto LABEL_49;
      v35 = 0;
    }
    else
    {
      if ( this->fields.subGroupCount >= 1 )
      {
        v36 = 0;
        while ( 1 )
        {
          gameObject = (UnityEngine_Object_o *)this->fields.subGroupBase;
          if ( !gameObject )
            goto LABEL_49;
          v37 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v38 = UnityEngine_Object__Instantiate_object_(
                  v37,
                  (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v38, 0, 0) )
          {
            GameObjectExtensions__SafeSetParent(
              (UnityEngine_GameObject_o *)v38,
              (UnityEngine_Component_o *)this->fields.subGroupGrid,
              0);
            if ( ++v36 < this->fields.subGroupCount )
              continue;
          }
          break;
        }
      }
      gameObject = (UnityEngine_Object_o *)this->fields.subGroupGrid;
      if ( !gameObject )
        goto LABEL_49;
      ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))gameObject->klass[1]._1.element_class)(
        gameObject,
        gameObject->klass[1]._1.castClass);
      gameObject = (UnityEngine_Object_o *)this->fields.subGroupGrid;
      if ( !gameObject )
        goto LABEL_49;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
      if ( !gameObject )
        goto LABEL_49;
      v35 = 1;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v35, 0);
  }
  ((void (__fastcall *)(TitleInfoEventRaidStatusComponent_o *, const MethodInfo *))this->klass->vtable._5_UpdateDisp.methodPtr)(
    this,
    this->klass->vtable._5_UpdateDisp.method);
  if ( this->fields.isJumbleRaid )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      return;
    }
LABEL_49:
    sub_1C71608(gameObject, v17);
  }
}


void TitleInfoEventRaidStatusComponent__StartClearAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  TitleInfoEventRaidStatusComponent_c *v13; // x0
  _BOOL4 isJumbleRaid; // w22
  float y; // s8
  struct TitleInfoEventRaidStatusComponent_StaticFields *static_fields; // x8
  __int64 v17; // x9
  __int64 v18; // x10
  float v19; // s0
  __int64 v20; // x10
  float v21; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC5D0A & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_2267/*"AnimFrameOutEnd"*/);
    byte_4CC5D0A = 1;
  }
  this->fields.clearAnimCallBack = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.clearAnimCallBack,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C71608(0, v11);
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = localPosition.fields.y;
  this->fields.inPos.fields.z = 0.0;
  v13 = TitleInfoEventRaidStatusComponent_TypeInfo;
  isJumbleRaid = this->fields.isJumbleRaid;
  y = localPosition.fields.y;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v13 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  static_fields = v13->static_fields;
  v17 = 100;
  if ( !isJumbleRaid )
    v17 = 88;
  v18 = 84;
  if ( isJumbleRaid )
    v18 = 96;
  v19 = *(float *)((char *)&static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE + v18);
  v20 = 80;
  if ( isJumbleRaid )
    v20 = 92;
  v21 = *(float *)((char *)&static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE + v17) + 0.0;
  this->fields.outPos.fields.x = *(float *)((char *)&static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE + v20) + 0.0;
  this->fields.outPos.fields.y = y + v19;
  this->fields.outPos.fields.z = v21;
  TitleInfoEventRaidStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_2267/*"AnimFrameOutEnd"*/, v12);
}


bool TitleInfoEventRaidStatusComponent__TryGetGridPosition(
        TitleInfoEventRaidStatusComponent_o *this,
        UnityEngine_Vector3_o *pos,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  __int64 v8; // x9
  UnityEngine_Vector3_o v10; // [xsp+0h] [xbp-30h] BYREF

  v10.fields.z = 0.0;
  *(_QWORD *)&v10.fields.x = 0;
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&pos->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  pos->fields.z = z;
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity )
  {
    if ( EventBossStatusUiEntity__TryGetGridPos(eventBossStatusUiEntity, &v10, 0) )
    {
      v8 = *(_QWORD *)&v10.fields.x;
      LOBYTE(eventBossStatusUiEntity) = 1;
      pos->fields.z = v10.fields.z;
      *(_QWORD *)&pos->fields.x = v8;
    }
    else
    {
      LOBYTE(eventBossStatusUiEntity) = 0;
    }
  }
  return (char)eventBossStatusUiEntity;
}


// attributes: thunk
void TitleInfoEventRaidStatusComponent__Update(TitleInfoEventRaidStatusComponent_o *this, const MethodInfo *method)
{
  TitleInfoEventRaidStatusComponent__RefreshTimeStr(this, method);
}


void TitleInfoEventRaidStatusComponent__UpdateDisp(TitleInfoEventRaidStatusComponent_o *this, const MethodInfo *method)
{
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int32_t eventId; // w20
  int32_t day; // w21
  __int64 gameObject; // x0
  const MethodInfo *v7; // x1
  DataManager_o *v8; // x24
  struct EventRaidEntity_o *v9; // x8
  int64_t v10; // x23
  int64_t maxHp; // x28
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX_LAST; // x29
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  EventRaidMaster_o *v15; // x26
  struct EventRaidEntity_o *v16; // x8
  int32_t RaidGroupDeadQuestId; // w0
  int32_t v18; // w24
  struct EventRaidEntity_o *v19; // x8
  UILabel_o *raidBossName; // x25
  UnityEngine_Behaviour_o *subGroupBattleId; // x25
  const MethodInfo *v22; // x1
  UnityEngine_GameObject_o *v23; // x25
  struct EventRaidEntity_o *v24; // x8
  int64_t startedAt; // x22
  struct EventRaidEntity_o *v26; // x8
  UIWidget_o *raidBossIconSp; // x25
  bool v28; // w1
  struct EventRaidEntity_o *v29; // x8
  UnityEngine_Behaviour_o *v30; // x25
  int64_t endedAt; // x22
  UILabel_o *v32; // x25
  const MethodInfo *v33; // x3
  UILabel_o *raidBossHpHead; // x25
  UILabel_o *raidBossHp; // x27
  System_String_o *v36; // x25
  Il2CppObject *v37; // x0
  struct EventRaidEntity_o *v38; // x8
  int32_t SubGroupNow; // w27
  int32_t v40; // w26
  int v41; // w22
  System_Collections_Generic_List_object__o *v42; // x28
  int32_t v43; // w29
  UnityEngine_GameObject_o *v44; // x25
  UnityEngine_Object_o *Child; // x25
  UnityEngine_GameObject_o *v46; // x25
  TitleInfoEventRaidStatusComponent_c *v47; // x0
  const MethodInfo *v48; // x4
  UISprite_o *raidBattle; // x20
  struct EventRaidEntity_o *v50; // x8
  TitleInfoEventRaidStatusComponent_c *v51; // x0
  __int64 v52; // x8
  struct EventRaidEntity_o *v53; // x8
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  const MethodInfo *v56; // x2
  char v57; // [xsp+4h] [xbp-8Ch]
  System_String_o *v58; // [xsp+18h] [xbp-78h]
  int64_t v59; // [xsp+20h] [xbp-70h] BYREF
  TotalEventRaidEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4CC5D02 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C713B0(&long_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C713B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_5668/*"EVENT_RAID_REST_COUNT_AFTER"*/);
    sub_1C713B0(&StringLiteral_5669/*"EVENT_RAID_REST_COUNT_BEFORE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC5D02 = 1;
  }
  entity = 0;
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    return;
  eventId = eventRaidEntity->fields.eventId;
  day = eventRaidEntity->fields.day;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_136;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, day <= this->fields.currentDay, 0);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_136;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
    return;
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_136;
  v8 = (DataManager_o *)gameObject;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !gameObject )
    goto LABEL_136;
  gameObject = TotalEventRaidMaster__TryGetEntity((TotalEventRaidMaster_o *)gameObject, &entity, eventId, day, 0);
  v9 = this->fields.eventRaidEntity;
  if ( !v9 )
    goto LABEL_136;
  v10 = entity ? entity->fields.totalDamage : 0LL;
  gameObject = (__int64)this->fields.raidBossIconSp;
  if ( !gameObject )
    goto LABEL_136;
  maxHp = v9->fields.maxHp;
  RAIDBOSS_ICON_SPNAME_PREFIX_LAST = (System_String_o *)StringLiteral_1/*""*/;
  gameObject = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)gameObject,
                          (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !gameObject )
    goto LABEL_136;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 1, 0);
  TitleInfoEventRaidStatusComponent__SetOutlineBattleColor_40046580(this, v13);
  TitleInfoEventRaidStatusComponent__SetHpBarPosition(this, v14);
  if ( day == this->fields.currentDay )
  {
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            v8,
                            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventRaidMaster___);
    if ( !this->fields.eventRaidEntity )
      goto LABEL_136;
    v15 = (EventRaidMaster_o *)gameObject;
    gameObject = EventRaidEntity__IsJumbleSingleRaid(this->fields.eventRaidEntity, 0);
    if ( (gameObject & 1) != 0 )
    {
      v16 = this->fields.eventRaidEntity;
      if ( !v16 || !v15 )
        goto LABEL_136;
      RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(v15, eventId, v16->fields.groupIndex, 0);
    }
    else
    {
      if ( !v15 )
        goto LABEL_136;
      RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v15, eventId, day, 0);
    }
    v18 = RaidGroupDeadQuestId;
    if ( RaidGroupDeadQuestId < 1 )
    {
      gameObject = 0;
    }
    else
    {
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !gameObject )
        goto LABEL_136;
      gameObject = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)gameObject, v18, -1, 0, 0);
    }
    v57 = gameObject;
    if ( this->fields.isJumbleRaid )
    {
      v19 = this->fields.eventRaidEntity;
      if ( !v19 )
        goto LABEL_136;
      gameObject = (__int64)this->fields.raidBossName;
      if ( !gameObject )
        goto LABEL_136;
      UILabel__set_text((UILabel_o *)gameObject, v19->fields.name, 0);
      gameObject = (__int64)this->fields.raidBossName;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_136;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      raidBossName = this->fields.raidBossName;
      gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      if ( !raidBossName )
        goto LABEL_136;
      UILabel__SetCondensedScale(
        raidBossName,
        TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
        0,
        0);
      subGroupBattleId = (UnityEngine_Behaviour_o *)this->fields.subGroupBattleId;
      gameObject = TitleInfoEventRaidStatusComponent__SetSubGroupBattleIdIcon(this, v22);
      if ( !subGroupBattleId )
        goto LABEL_136;
      UnityEngine_Behaviour__set_enabled(subGroupBattleId, gameObject & 1, 0);
      gameObject = (__int64)this->fields.subGroupBattleId;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !this->fields.eventRaidEntity )
        goto LABEL_136;
      v23 = (UnityEngine_GameObject_o *)gameObject;
      gameObject = EventRaidEntity__IsJumbleSingleRaid(this->fields.eventRaidEntity, 0);
      if ( !v23 )
        goto LABEL_136;
      UnityEngine_GameObject__SetActive(v23, (gameObject & 1) == 0, 0);
      gameObject = (__int64)this->fields.subGroupBattleId;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
                     gameObject,
                     *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
      v24 = this->fields.eventRaidEntity;
      if ( !v24 )
        goto LABEL_136;
      startedAt = v24->fields.startedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      gameObject = NetworkManager__getTime(0);
      if ( startedAt <= gameObject )
      {
        raidBossHpHead = this->fields.raidBossHpHead;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5669/*"EVENT_RAID_REST_COUNT_BEFORE"*/, 0);
        if ( !raidBossHpHead )
          goto LABEL_136;
        UILabel__set_text(raidBossHpHead, (System_String_o *)gameObject, 0);
        gameObject = (__int64)this->fields.raidBossHpHead;
        if ( !gameObject )
          goto LABEL_136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        raidBossHp = this->fields.raidBossHp;
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5668/*"EVENT_RAID_REST_COUNT_AFTER"*/, 0);
        v59 = maxHp - v10;
        v37 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v59);
        gameObject = (__int64)System_String__Format(v36, v37, 0);
        if ( !raidBossHp )
          goto LABEL_136;
        UILabel__set_text(raidBossHp, (System_String_o *)gameObject, 0);
        gameObject = (__int64)this->fields.raidBossHp;
        if ( !gameObject )
          goto LABEL_136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = (__int64)this->fields.raidBattle;
        if ( !gameObject )
          goto LABEL_136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        v38 = this->fields.eventRaidEntity;
        if ( !v38 || !gameObject )
          goto LABEL_136;
        v28 = v38->fields.maxHp > v10;
      }
      else
      {
        v26 = this->fields.eventRaidEntity;
        if ( !v26 )
          goto LABEL_136;
        this->fields.targetTime = v26->fields.startedAt;
        TitleInfoEventRaidStatusComponent__RefreshTimeStr(this, v7);
        gameObject = (__int64)this->fields.raidBossStatus;
        if ( !gameObject )
          goto LABEL_136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
        raidBossIconSp = (UIWidget_o *)this->fields.raidBossIconSp;
        if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
          gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
        }
        if ( !raidBossIconSp )
          goto LABEL_136;
        UIWidget__set_color(raidBossIconSp, *(UnityEngine_Color_o *)(*(_QWORD *)(gameObject + 184) + 112LL), 0);
        gameObject = (__int64)this->fields.raidBattle;
        if ( !gameObject )
          goto LABEL_136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_136;
        v28 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v28, 0);
      v58 = RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
      SubGroupNow = EventRaidMaster__GetSubGroupNow(v15, this->fields.eventRaidEntity, 0);
      gameObject = EventRaidMaster__GetSubGroupMax(v15, this->fields.eventRaidEntity, 0);
      if ( !this->fields.subGroupGrid )
        goto LABEL_136;
      v40 = gameObject;
      gameObject = (__int64)UIGrid__GetChildList(this->fields.subGroupGrid, 0);
      if ( !gameObject )
        goto LABEL_136;
      v41 = *(_DWORD *)(gameObject + 24);
      v42 = (System_Collections_Generic_List_object__o *)gameObject;
      if ( v41 >= 1 )
      {
        v43 = 0;
        do
        {
          gameObject = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v42,
                                  v43,
                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_Transform__get_Item__);
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_136;
          v44 = (UnityEngine_GameObject_o *)gameObject;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v43 < v40, 0);
          Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(v44, 0, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          gameObject = UnityEngine_Object__op_Inequality(Child, 0, 0);
          if ( (gameObject & 1) != 0 )
          {
            if ( !Child )
              goto LABEL_136;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Child, 0);
            if ( !gameObject )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v43 >= SubGroupNow, 0);
          }
        }
        while ( v41 != ++v43 );
      }
      gameObject = (__int64)this->fields.subGroupPartition;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v58;
      v46 = (UnityEngine_GameObject_o *)gameObject;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      if ( !v46 )
        goto LABEL_136;
      UnityEngine_GameObject__SetActive(
        v46,
        v40 > TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_SUB_GROUP_PARTITION_INDEX,
        0);
    }
    else if ( this->fields.isRaidDefeatCount )
    {
      gameObject = (__int64)this->fields.raidBossHp;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_136;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v29 = this->fields.eventRaidEntity;
      if ( !v29 )
        goto LABEL_136;
      v30 = (UnityEngine_Behaviour_o *)this->fields.raidBossHp;
      endedAt = v29->fields.endedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      gameObject = NetworkManager__getTime(0);
      if ( !v30 )
        goto LABEL_136;
      UnityEngine_Behaviour__set_enabled(v30, endedAt > gameObject, 0);
      v32 = this->fields.raidBossHp;
      gameObject = (__int64)TitleInfoEventRaidStatusComponent__GetRestCountText(this, maxHp - v10, v10, v33);
      if ( !v32 )
        goto LABEL_136;
      UILabel__set_text(v32, (System_String_o *)gameObject, 0);
    }
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !gameObject )
      goto LABEL_136;
    if ( !clsQuestCheck__IsEncountRaidBoss((clsQuestCheck_o *)gameObject, eventId, day, 0)
      && !this->fields.isRaidDefeatCount )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_136;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      return;
    }
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !gameObject )
      goto LABEL_136;
    if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)gameObject, v18, 0, 0) )
    {
      if ( this->fields.isRaidDefeatCount )
      {
        if ( !this->fields.isJumbleRaid )
          goto LABEL_101;
        gameObject = (__int64)this->fields.eventRaidEntity;
        if ( !gameObject )
          goto LABEL_136;
        if ( EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)gameObject, 0) )
        {
LABEL_101:
          gameObject = (__int64)this->fields.eventRaidEntity;
          if ( (v57 & 1) != 0 )
          {
            if ( !gameObject )
              goto LABEL_136;
            goto LABEL_111;
          }
          if ( !gameObject )
            goto LABEL_136;
          if ( *(_QWORD *)(gameObject + 40) <= v10 )
          {
LABEL_111:
            if ( EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)gameObject, 0) )
            {
              gameObject = (__int64)this->fields.raidBattle;
              if ( !gameObject )
                goto LABEL_136;
              gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_136;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
              raidBattle = this->fields.raidBattle;
              gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
              if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
              v50 = this->fields.eventRaidEntity;
              if ( !v50 )
                goto LABEL_136;
              TitleInfoEventRaidStatusComponent__SetEventIcon(
                (TitleInfoEventRaidStatusComponent_o *)gameObject,
                raidBattle,
                TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_STATUS_02,
                v50->fields.iconId,
                v48);
            }
            v51 = TitleInfoEventRaidStatusComponent_TypeInfo;
            if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
              v51 = TitleInfoEventRaidStatusComponent_TypeInfo;
            }
            RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v51->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
            TitleInfoEventRaidStatusComponent__SetOutlineLastColor_40047404(this, v7);
            goto LABEL_121;
          }
        }
      }
      v47 = TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
        v47 = TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v47->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE;
    }
  }
LABEL_121:
  gameObject = System_String__IsNullOrEmpty(RAIDBOSS_ICON_SPNAME_PREFIX_LAST, 0);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.eventRaidEntity;
    if ( !gameObject )
      goto LABEL_136;
    if ( EventRaidEntity__isCleard((EventRaidEntity_o *)gameObject, 0) )
    {
      if ( this->fields.isRaidDefeatCount )
        TitleInfoEventRaidStatusComponent__SetOutlineWinColor_40047464(this, v7);
      gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
        gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      v52 = 8;
    }
    else
    {
      gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
        gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      v52 = 16;
    }
    RAIDBOSS_ICON_SPNAME_PREFIX_LAST = *(System_String_o **)(*(_QWORD *)(gameObject + 184) + v52);
  }
  v53 = this->fields.eventRaidEntity;
  if ( !v53 )
LABEL_136:
    sub_1C71608(gameObject, v7);
  v54 = System_Int32__ToString((int)v53 + 64, 0);
  v55 = System_String__Concat_64031724(RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v54, 0);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v55, v56);
}


void TitleInfoEventRaidStatusComponent__clearAnimFinised(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *clearAnimCallBack; // x0

  clearAnimCallBack = this->fields.clearAnimCallBack;
  if ( clearAnimCallBack )
    ActionExtensions__Call(clearAnimCallBack, 0);
}


UISprite_o *TitleInfoEventRaidStatusComponent__getIconSprite(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.raidBossIconSp;
}


UISprite_o *TitleInfoEventRaidStatusComponent__getSubGroupBase(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.subGroupBase;
}


void TitleInfoEventRaidStatusComponent__onClick(TitleInfoEventRaidStatusComponent_o *this, const MethodInfo *method)
{
  int32_t RaidDeadQuestId; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4CC5D07 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C713B0(&Method_TitleInfoEventRaidStatusComponent_onClick__);
    byte_4CC5D07 = 1;
  }
  if ( this->fields.eventRaidEntity )
  {
    if ( this->fields.isReprintLastWarRaid )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventRaidMaster___);
    eventRaidEntity = this->fields.eventRaidEntity;
    if ( !eventRaidEntity || !Instance )
      goto LABEL_18;
    RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                        (EventRaidMaster_o *)Instance,
                        eventRaidEntity->fields.eventId,
                        eventRaidEntity->fields.day,
                        0);
  }
  else
  {
    RaidDeadQuestId = 0;
  }
  if ( this->fields.clickCallBack )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( Instance )
    {
      if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, RaidDeadQuestId, 0, 0) )
      {
        ActionExtensions__Call(this->fields.clickCallBack, 0);
        return;
      }
      goto LABEL_14;
    }
LABEL_18:
    sub_1C71608(Instance, v5);
  }
LABEL_14:
  v7 = Method_TitleInfoEventRaidStatusComponent_onClick__;
  if ( (*((_BYTE *)Method_TitleInfoEventRaidStatusComponent_onClick__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C713C8(Method_TitleInfoEventRaidStatusComponent_onClick__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C71394(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
}


void TitleInfoEventRaidStatusComponent__setClickCallBack(
        TitleInfoEventRaidStatusComponent_o *this,
        System_Action_o *cb,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.clickCallBack = cb;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickCallBack,
    (int32_t)cb,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}