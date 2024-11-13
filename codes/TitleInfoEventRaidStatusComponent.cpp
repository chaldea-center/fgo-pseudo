void __fastcall TitleInfoEventRaidStatusComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  int64_t v28; // x1
  struct TitleInfoEventRaidStatusComponent_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v92; // x0
  int64_t v93; // x1
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  TitleInfoEventRaidStatusComponent_c *v100; // x8
  struct TitleInfoEventRaidStatusComponent_StaticFields *v101; // x9
  struct TitleInfoEventRaidStatusComponent_StaticFields *v102; // x9
  struct TitleInfoEventRaidStatusComponent_StaticFields *v103; // x9
  struct TitleInfoEventRaidStatusComponent_StaticFields *v104; // x9

  if ( (byte_4B1454D & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaidStatusComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_23006/*"raid_boss_status_battle_"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_23008/*"raid_boss_status_lose_"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_19428/*"event_raid_status_02"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_19429/*"event_raid_sub_group_back"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_23007/*"raid_boss_status_last_"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_19431/*"event_raid_sub_group_front"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_19430/*"event_raid_sub_group_battle_{0:00}"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_19427/*"event_raid_status_01"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_23009/*"raid_boss_status_win_"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_19432/*"event_raid_sub_group_partition"*/, v26, v27);
    byte_4B1454D = 1;
  }
  TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE = (struct System_String_o *)StringLiteral_23006/*"raid_boss_status_battle_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoEventRaidStatusComponent_TypeInfo->static_fields,
    StringLiteral_23006/*"raid_boss_status_battle_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v28 = StringLiteral_23009/*"raid_boss_status_win_"*/;
  static_fields = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_WIN = (struct System_String_o *)StringLiteral_23009/*"raid_boss_status_win_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_WIN,
    v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = StringLiteral_23008/*"raid_boss_status_lose_"*/;
  v37 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v37->RAIDBOSS_ICON_SPNAME_PREFIX_LOSE = (struct System_String_o *)StringLiteral_23008/*"raid_boss_status_lose_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v37->RAIDBOSS_ICON_SPNAME_PREFIX_LOSE, v36, v38, v39, v40, v41, v42, v43);
  v44 = StringLiteral_23007/*"raid_boss_status_last_"*/;
  v45 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v45->RAIDBOSS_ICON_SPNAME_PREFIX_LAST = (struct System_String_o *)StringLiteral_23007/*"raid_boss_status_last_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v44, v46, v47, v48, v49, v50, v51);
  v52 = StringLiteral_19431/*"event_raid_sub_group_front"*/;
  v53 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v53->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT = (struct System_String_o *)StringLiteral_19431/*"event_raid_sub_group_front"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v53->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT,
    v52,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = StringLiteral_19429/*"event_raid_sub_group_back"*/;
  v61 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v61->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK = (struct System_String_o *)StringLiteral_19429/*"event_raid_sub_group_back"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v61->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK,
    v60,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = StringLiteral_19432/*"event_raid_sub_group_partition"*/;
  v69 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v69->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION = (struct System_String_o *)StringLiteral_19432/*"event_raid_sub_group_partition"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v69->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION,
    v68,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = StringLiteral_19430/*"event_raid_sub_group_battle_{0:00}"*/;
  v77 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v77->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID = (struct System_String_o *)StringLiteral_19430/*"event_raid_sub_group_battle_{0:00}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v77->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID,
    v76,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  v84 = StringLiteral_19427/*"event_raid_status_01"*/;
  v85 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v85->RAIDBOSS_ICON_SPNAME_STATUS_01 = (struct System_String_o *)StringLiteral_19427/*"event_raid_status_01"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v85->RAIDBOSS_ICON_SPNAME_STATUS_01, v84, v86, v87, v88, v89, v90, v91);
  v92 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v93 = StringLiteral_19428/*"event_raid_status_02"*/;
  v92->RAIDBOSS_ICON_SPNAME_STATUS_02 = (struct System_String_o *)StringLiteral_19428/*"event_raid_status_02"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v92->RAIDBOSS_ICON_SPNAME_STATUS_02, v93, v94, v95, v96, v97, v98, v99);
  v100 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v101 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&v101->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  v101->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  v102 = v100->static_fields;
  *(_QWORD *)&v102->FRAME_ANIM_OUT_POS_JUMBLE.fields.x = 3281387520LL;
  v102->FRAME_ANIM_OUT_POS_JUMBLE.fields.z = 0.0;
  v103 = v100->static_fields;
  *(_OWORD *)&v103->FRAME_ANIM_DURATION = xmmword_BD2CC0;
  *(_QWORD *)&v103->ICON_MASK_COLOR.fields.b = 0x3F8000003F000000LL;
  v104 = v100->static_fields;
  *(_QWORD *)&v104->JUMBLE_TERMINAL_REFRESH_TIME_OFFSET = 0x500000003LL;
  v104->RAIDBOSS_OUTLINE_COLOR_BATTLE = (struct UnityEngine_Color_o)xmmword_BD3600;
  v104->TITLE_LABEL_BASE_WIDTH = 120;
  v100->static_fields->RAIDBOSS_OUTLINE_COLOR_WIN = (struct UnityEngine_Color_o)xmmword_BD26E0;
  v100->static_fields->RAIDBOSS_OUTLINE_COLOR_LAST = (struct UnityEngine_Color_o)xmmword_BD2590;
}


void __fastcall TitleInfoEventRaidStatusComponent___ctor(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  this->fields.lastMinute = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventRaidStatusComponent__AnimFrameOutEnd(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  EventRaidEntity_o *eventRaidEntity; // x0
  struct System_Action_o *clearAnimCallBack; // x8
  struct EventRaidEntity_o *v12; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX_WIN; // x20
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  System_String_o *v18; // x1

  if ( (byte_4B14546 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&TitleInfoEventRaidStatusComponent_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_18186/*"clearAnimFinised"*/, v8, v9);
    byte_4B14546 = 1;
  }
  if ( this->fields.isJumbleRaid )
  {
    eventRaidEntity = this->fields.eventRaidEntity;
    if ( eventRaidEntity )
    {
      if ( EventRaidEntity__IsJumbleSingleRaid(eventRaidEntity, 0LL) )
        goto LABEL_9;
      eventRaidEntity = (EventRaidEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( eventRaidEntity )
      {
        eventRaidEntity = (EventRaidEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)eventRaidEntity,
                                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( eventRaidEntity )
        {
          EventRaidMaster__GetNextSubGroupEntity(
            (EventRaidMaster_o *)eventRaidEntity,
            this->fields.eventRaidEntity,
            0LL);
LABEL_9:
          clearAnimCallBack = this->fields.clearAnimCallBack;
          if ( clearAnimCallBack )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))clearAnimCallBack->fields.m_target)(
              clearAnimCallBack->fields.original_method_info,
              *(_QWORD *)&clearAnimCallBack->fields.extra_arg);
          return;
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(eventRaidEntity, method);
  }
  TitleInfoEventRaidStatusComponent__SetOutlineWinColor(this, this->fields.raidBossHp, v2);
  eventRaidEntity = (EventRaidEntity_o *)TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, method);
  v12 = this->fields.eventRaidEntity;
  if ( !v12 )
    goto LABEL_19;
  RAIDBOSS_ICON_SPNAME_PREFIX_WIN = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_WIN;
  v14 = System_Int32__ToString((int)v12 + 48, 0LL);
  v15 = System_String__Concat_62401220(RAIDBOSS_ICON_SPNAME_PREFIX_WIN, v14, 0LL);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v15, v16);
  if ( this->fields.clearAnimCallBack )
    v18 = (System_String_o *)StringLiteral_18186/*"clearAnimFinised"*/;
  else
    v18 = 0LL;
  TitleInfoEventRaidStatusComponent__FrameIn(this, v18, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        UnityEngine_GameObject_o *gameObj,
        float from,
        float to,
        int32_t tweenMethod,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  TitleInfoEventRaidStatusComponent_c *v12; // x0
  Il2CppObject *v13; // x0
  __int64 v14; // x1

  if ( (byte_4B14549 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaidStatusComponent_TypeInfo, gameObj, *(_QWORD *)&tweenMethod);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenAlpha___, v10, v11);
    byte_4B14549 = 1;
  }
  v12 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, gameObj);
    v12 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  v13 = UITweener__Begin_object_(
          gameObj,
          v12->static_fields->FRAME_ANIM_DURATION,
          (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v13 )
    sub_1BCAA3C(0LL, v14);
  LODWORD(v13[2].klass) = tweenMethod;
  *(float *)&v13[8].klass = from;
  *((float *)&v13[8].klass + 1) = to;
}


void __fastcall TitleInfoEventRaidStatusComponent__Destroy(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventRaidStatusComponent__EntryAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TitleInfoEventRaidStatusComponent__FrameIn(this, 0LL, v2);
}


void __fastcall TitleInfoEventRaidStatusComponent__FrameIn(
        TitleInfoEventRaidStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  char *gameObject; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *raidBossName; // x21
  TitleInfoEventRaidStatusComponent_o *v13; // x0
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *raidBossHpHead; // x21
  TitleInfoEventRaidStatusComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // x1
  TitleInfoEventRaidStatusComponent_c *v20; // x8
  UnityEngine_GameObject_o *v21; // x21
  char *v22; // x21
  float z; // w8
  __int64 v24; // x9
  UnityEngine_GameObject_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  TitleInfoEventRaidStatusComponent_o *v38; // x0
  const MethodInfo *v39; // x3
  TitleInfoEventRaidStatusComponent_o *v40; // x0
  const MethodInfo *v41; // x3
  __int64 v42; // [xsp+0h] [xbp-40h]

  if ( (byte_4B14547 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, callFinished, method);
    sub_1BCA7E0(&TitleInfoEventRaidStatusComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v7, v8);
    byte_4B14547 = 1;
  }
  if ( this->fields.isJumbleRaid )
  {
    gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    raidBossName = (UnityEngine_Object_o *)this->fields.raidBossName;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(raidBossName, 0LL, 0LL) )
    {
      gameObject = (char *)this->fields.raidBossName;
      if ( !gameObject )
        goto LABEL_23;
      v13 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v13, (UnityEngine_GameObject_o *)v13, 0.0, 1.0, 6, v14);
    }
    raidBossHpHead = (UnityEngine_Object_o *)this->fields.raidBossHpHead;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(raidBossHpHead, 0LL, 0LL) )
    {
      gameObject = (char *)this->fields.raidBossHpHead;
      if ( !gameObject )
        goto LABEL_23;
      v16 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v16, (UnityEngine_GameObject_o *)v16, 0.0, 1.0, 6, v17);
    }
  }
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v20 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v21 = v18;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v19);
    v20 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  gameObject = (char *)UITweener__Begin_object_(
                         v21,
                         v20->static_fields->FRAME_ANIM_DURATION,
                         (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
  v42 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !gameObject )
    goto LABEL_23;
  v22 = gameObject;
  *((_DWORD *)gameObject + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)gameObject + 16) = v42;
  z = this->fields.inPos.fields.z;
  v24 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)gameObject + 8) = 6;
  *((float *)gameObject + 37) = z;
  *(_QWORD *)(gameObject + 140) = v24;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v22 + 10) = v25;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 80), (int64_t)v25, v26, v27, v28, v29, v30, v31);
  *((_QWORD *)v22 + 11) = callFinished;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 88), (int64_t)callFinished, v32, v33, v34, v35, v36, v37);
  gameObject = (char *)this->fields.raidBossIconSp;
  if ( !gameObject )
LABEL_23:
    sub_1BCAA3C(gameObject, v10);
  v38 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0LL);
  TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v38, (UnityEngine_GameObject_o *)v38, 0.0, 1.0, 6, v39);
  if ( this->fields.isRaidDefeatCount )
  {
    gameObject = (char *)this->fields.raidBossHp;
    if ( gameObject )
    {
      v40 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v40, (UnityEngine_GameObject_o *)v40, 0.0, 1.0, 6, v41);
      return;
    }
    goto LABEL_23;
  }
}


void __fastcall TitleInfoEventRaidStatusComponent__FrameOut(
        TitleInfoEventRaidStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  TitleInfoEventRaidStatusComponent_c *v11; // x8
  UnityEngine_GameObject_o *v12; // x21
  char *raidBossIconSp; // x0
  __int64 v14; // x1
  char *v15; // x21
  float z; // w8
  __int64 v17; // x9
  UnityEngine_GameObject_o *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  TitleInfoEventRaidStatusComponent_o *v31; // x0
  const MethodInfo *v32; // x3
  TitleInfoEventRaidStatusComponent_o *v33; // x0
  const MethodInfo *v34; // x3
  UnityEngine_Object_o *raidBossName; // x20
  TitleInfoEventRaidStatusComponent_o *v36; // x0
  const MethodInfo *v37; // x3
  UnityEngine_Object_o *raidBossHpHead; // x20
  TitleInfoEventRaidStatusComponent_o *v39; // x0
  const MethodInfo *v40; // x3
  __int64 v41; // [xsp+0h] [xbp-40h]

  if ( (byte_4B14548 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, callFinished, method);
    sub_1BCA7E0(&TitleInfoEventRaidStatusComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v7, v8);
    byte_4B14548 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v12 = gameObject;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v10);
    v11 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  raidBossIconSp = (char *)UITweener__Begin_object_(
                             v12,
                             v11->static_fields->FRAME_ANIM_DURATION,
                             (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
  v41 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !raidBossIconSp )
    goto LABEL_22;
  v15 = raidBossIconSp;
  *((_DWORD *)raidBossIconSp + 34) = LODWORD(this->fields.inPos.fields.z);
  *((_QWORD *)raidBossIconSp + 16) = v41;
  z = this->fields.outPos.fields.z;
  v17 = *(_QWORD *)&this->fields.outPos.fields.x;
  *((_DWORD *)raidBossIconSp + 8) = 2;
  *((float *)raidBossIconSp + 37) = z;
  *(_QWORD *)(raidBossIconSp + 140) = v17;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v15 + 10) = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 80), (int64_t)v18, v19, v20, v21, v22, v23, v24);
  *((_QWORD *)v15 + 11) = callFinished;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 88), (int64_t)callFinished, v25, v26, v27, v28, v29, v30);
  raidBossIconSp = (char *)this->fields.raidBossIconSp;
  if ( !raidBossIconSp )
    goto LABEL_22;
  v31 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)raidBossIconSp,
                                                 0LL);
  TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v31, (UnityEngine_GameObject_o *)v31, 1.0, 0.0, 2, v32);
  if ( this->fields.isRaidDefeatCount )
  {
    raidBossIconSp = (char *)this->fields.raidBossHp;
    if ( !raidBossIconSp )
      goto LABEL_22;
    v33 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)raidBossIconSp,
                                                   0LL);
    TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v33, (UnityEngine_GameObject_o *)v33, 1.0, 0.0, 2, v34);
  }
  if ( this->fields.isJumbleRaid )
  {
    raidBossName = (UnityEngine_Object_o *)this->fields.raidBossName;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( UnityEngine_Object__op_Inequality(raidBossName, 0LL, 0LL) )
    {
      raidBossIconSp = (char *)this->fields.raidBossName;
      if ( !raidBossIconSp )
        goto LABEL_22;
      v36 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)raidBossIconSp,
                                                     0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v36, (UnityEngine_GameObject_o *)v36, 1.0, 0.0, 2, v37);
    }
    raidBossHpHead = (UnityEngine_Object_o *)this->fields.raidBossHpHead;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( UnityEngine_Object__op_Inequality(raidBossHpHead, 0LL, 0LL) )
    {
      raidBossIconSp = (char *)this->fields.raidBossHpHead;
      if ( raidBossIconSp )
      {
        v39 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)raidBossIconSp,
                                                       0LL);
        TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v39, (UnityEngine_GameObject_o *)v39, 1.0, 0.0, 2, v40);
        return;
      }
LABEL_22:
      sub_1BCAA3C(raidBossIconSp, v14);
    }
  }
}


float __fastcall TitleInfoEventRaidStatusComponent__GetCellHeight(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  struct UISprite_o *raidBossIconSp; // x8

  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity
    || (eventBossStatusUiEntity = (EventBossStatusUiEntity_o *)EventBossStatusUiEntity__GetStatusHeight(
                                                                 eventBossStatusUiEntity,
                                                                 0LL),
        (int)eventBossStatusUiEntity <= 0) )
  {
    raidBossIconSp = this->fields.raidBossIconSp;
    if ( !raidBossIconSp )
      sub_1BCAA3C(eventBossStatusUiEntity, method);
    LODWORD(eventBossStatusUiEntity) = raidBossIconSp->fields.mHeight;
  }
  return (float)(int)eventBossStatusUiEntity;
}


System_String_o *__fastcall TitleInfoEventRaidStatusComponent__GetRestCountText(
        TitleInfoEventRaidStatusComponent_o *this,
        int64_t totalHp,
        int64_t totalDamage,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  System_String_o *CountFormat; // x20
  Il2CppObject *NumberFormat_39108640; // x0
  __int64 v13; // x1
  System_String_o *v14; // x19
  int64_t v16; // [xsp+0h] [xbp-30h] BYREF
  int64_t v17; // [xsp+8h] [xbp-28h] BYREF

  v17 = totalHp;
  if ( (byte_4B1453E & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, totalHp, totalDamage);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_5700/*"EVENT_DEFEAT_COUNT_TXT"*/, v8, v9);
    byte_4B1453E = 1;
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity
    && (CountFormat = EventBossStatusUiEntity__GetCountFormat(eventBossStatusUiEntity, 0LL),
        !System_String__IsNullOrEmpty(CountFormat, 0LL)) )
  {
    v14 = System_Int64__ToString((int64_t)&v17, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    NumberFormat_39108640 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39108640(v14, 0LL);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, totalHp);
    CountFormat = LocalizationManager__Get((System_String_o *)StringLiteral_5700/*"EVENT_DEFEAT_COUNT_TXT"*/, 0LL);
    v16 = totalDamage;
    NumberFormat_39108640 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16);
  }
  return System_String__Format(CountFormat, NumberFormat_39108640, 0LL);
}


bool __fastcall TitleInfoEventRaidStatusComponent__IsDispPossible(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall TitleInfoEventRaidStatusComponent__IsEventRaidBoss(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TitleInfoEventRaidStatusComponent__IsTargetRaid(
        TitleInfoEventRaidStatusComponent_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  struct EventRaidEntity_o *eventRaidEntity; // x8

  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    sub_1BCAA3C(this, *(_QWORD *)&eventId);
  return eventRaidEntity->fields.eventId == eventId && eventRaidEntity->fields.day == day;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__MoveUp(
        TitleInfoEventRaidStatusComponent_o *this,
        int32_t moveY,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  float x; // s10
  float y; // s8
  float z; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  TitleInfoEventRaidStatusComponent_c *v14; // x8
  UnityEngine_GameObject_o *v15; // x21
  Il2CppObject *v16; // x21
  int v17; // s0
  int v18; // s1
  int v19; // s2
  UnityEngine_GameObject_o *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1454B & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaidStatusComponent_TypeInfo, *(_QWORD *)&moveY, method);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v5, v6);
    byte_4B1454B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v15 = gameObject;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v13);
    v14 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  v16 = UITweener__Begin_object_(
          v15,
          v14->static_fields->FRAME_ANIM_DURATION,
          (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (*(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_localPosition(transform, 0LL), !v16) )
LABEL_9:
    sub_1BCAA3C(transform, v8);
  LODWORD(v16[8].klass) = v17;
  HIDWORD(v16[8].klass) = v18;
  LODWORD(v16[8].monitor) = v19;
  *((float *)&v16[8].monitor + 1) = x;
  *(float *)&v16[9].klass = y + (float)moveY;
  *((float *)&v16[9].klass + 1) = z;
  LODWORD(v16[2].klass) = 2;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16[5].klass = (Il2CppClass *)v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&v16[5], (int64_t)v20, v21, v22, v23, v24, v25, v26);
}


void __fastcall TitleInfoEventRaidStatusComponent__OnDestroy(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventRaidStatusComponent__RefreshTerminal(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1454A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v3, v4);
    byte_4B1454A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B11139 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoResume_k__BackingField = 1;
  TopHomeRequest__clearExpirationDate(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall TitleInfoEventRaidStatusComponent__RefreshTimeStr(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  int64_t v19; // x20
  int32_t v20; // w22
  UILabel_o *raidBossStatus; // x19
  unsigned __int64 v22; // x21
  System_String_o *v23; // x20
  Il2CppObject *v24; // x21
  Il2CppObject *v25; // x0
  TerminalSceneComponent_o *Instance; // x0
  __int64 v27; // x1
  TitleInfoEventRaidStatusComponent_c *v28; // x0
  __int64 v29; // x2
  TerminalSceneComponent_c *v30; // x0
  const MethodInfo *v31; // x2
  TitleInfoEventRaidStatusComponent_o *v32; // x0
  const MethodInfo *v33; // x1
  System_String_o *v34; // x20
  Il2CppObject *v35; // x0
  int32_t v36; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v37; // [xsp+8h] [xbp-38h] BYREF
  int v38; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1453A & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v10, v11);
    sub_1BCA7E0(&TitleInfoEventRaidStatusComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_5762/*"EVENT_RAID_NEXT_TIME_1"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5763/*"EVENT_RAID_NEXT_TIME_2"*/, v16, v17);
    byte_4B1453A = 1;
  }
  if ( this->fields.isJumbleRaid && this->fields.targetTime >= 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v19 = this->fields.targetTime - NetworkManager__getTime(0LL);
    if ( v19 < 1 )
    {
      v28 = TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v18);
        v28 = TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      if ( v19 + v28->static_fields->JUMBLE_TERMINAL_REFRESH_TIME_OFFSET <= 0 )
      {
        Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
        {
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v27);
          if ( !byte_4B10F83 )
          {
            sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v27, v29);
            byte_4B10F83 = 1;
          }
          v30 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v27);
            v30 = TerminalSceneComponent_TypeInfo;
          }
          Instance = v30->static_fields->mInstance;
          if ( !Instance )
LABEL_31:
            sub_1BCAA3C(Instance, v27);
          if ( TerminalSceneComponent__IsMapTouchEnabled(Instance, 0LL) )
          {
            this->fields.targetTime = 0LL;
            TitleInfoEventRaidStatusComponent__FrameOut(this, 0LL, v31);
            TitleInfoEventRaidStatusComponent__RefreshTerminal(v32, v33);
          }
        }
      }
    }
    else
    {
      v20 = v19 / 0x3CuLL % 0x3C;
      if ( this->fields.lastMinute != v20 )
      {
        this->fields.lastMinute = v20;
        raidBossStatus = this->fields.raidBossStatus;
        v22 = v19 / 0xE10uLL;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
        if ( (int)v22 < 1 )
        {
          v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5763/*"EVENT_RAID_NEXT_TIME_2"*/, 0LL);
          v36 = v20;
          v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
          Instance = (TerminalSceneComponent_o *)System_String__Format(v34, v35, 0LL);
          if ( !raidBossStatus )
            goto LABEL_31;
        }
        else
        {
          v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5762/*"EVENT_RAID_NEXT_TIME_1"*/, 0LL);
          v38 = v22;
          v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
          v37 = v20;
          v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
          Instance = (TerminalSceneComponent_o *)System_String__Format_62415592(v23, v24, v25, 0LL);
          if ( !raidBossStatus )
            goto LABEL_31;
        }
        UILabel__set_text(raidBossStatus, (System_String_o *)Instance, 0LL);
      }
    }
  }
}


void __fastcall TitleInfoEventRaidStatusComponent__SetBossIcon(
        TitleInfoEventRaidStatusComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  UISprite_o *raidBossIconSp; // x21
  struct UISprite_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4B1453B & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, spName, method);
    byte_4B1453B = 1;
  }
  raidBossIconSp = this->fields.raidBossIconSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, spName);
  v6 = (struct UISprite_o *)AtlasManager__SetEventUI(raidBossIconSp, spName, 0LL);
  if ( !raidBossIconSp )
    goto LABEL_11;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)raidBossIconSp, (unsigned __int8)v6 & 1, 0LL);
  v6 = this->fields.raidBossIconSp;
  if ( !v6 )
    goto LABEL_11;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0LL) )
  {
    v6 = this->fields.raidBossIconSp;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
        v6,
        v6->klass->vtable._34_get_minWidth.methodPtr);
      return;
    }
LABEL_11:
    sub_1BCAA3C(v6, v7);
  }
}


void __fastcall TitleInfoEventRaidStatusComponent__SetClearAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *eventRaidEntity; // x0
  const MethodInfo *v5; // x1
  struct EventRaidEntity_o *v6; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX_LAST; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B14544 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaidStatusComponent_TypeInfo, method, v2);
    byte_4B14544 = 1;
  }
  eventRaidEntity = (UnityEngine_GameObject_o *)this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    goto LABEL_11;
  if ( !EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)eventRaidEntity, 0LL) )
  {
    eventRaidEntity = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !eventRaidEntity )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(eventRaidEntity, 1, 0LL);
  }
  TitleInfoEventRaidStatusComponent__SetOutlineLastColor_36966256(this, v5);
  eventRaidEntity = (UnityEngine_GameObject_o *)TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, method);
  v6 = this->fields.eventRaidEntity;
  if ( !v6 )
LABEL_11:
    sub_1BCAA3C(eventRaidEntity, method);
  RAIDBOSS_ICON_SPNAME_PREFIX_LAST = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
  v8 = System_Int32__ToString((int)v6 + 48, 0LL);
  v9 = System_String__Concat_62401220(RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v8, 0LL);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__SetEntryAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  float v9; // s1
  TitleInfoEventRaidStatusComponent_c *v10; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v12; // d0
  float v13; // s2
  float v14; // [xsp+0h] [xbp-30h]

  if ( (byte_4B14543 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaidStatusComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6160/*"EntryAnim"*/, v4, v5);
    byte_4B14543 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = v9;
  this->fields.inPos.fields.z = 0.0;
  v10 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v14 = v9;
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v8);
    v9 = v14;
    v10 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v10->static_fields;
  v12.n64_u32[0] = 0;
  v12.n64_f32[1] = v9;
  v13 = static_fields[11].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32(static_fields[10], v12);
  this->fields.outPos.fields.z = v13 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.raidBossIconSp) == 0LL)
    || ((*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
          transform,
          transform->klass[1]._1.element_class,
          0.0),
        (transform = (UnityEngine_Transform_o *)this->fields.raidBossHp) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(transform, v7);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
    transform,
    transform->klass[1]._1.element_class,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6160/*"EntryAnim"*/,
    TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->ENTRY_ANIM_DELAY
  + (float)(this->fields.inPos.fields.y / -500.0),
    0LL);
}


void __fastcall TitleInfoEventRaidStatusComponent__SetEventIcon(
        TitleInfoEventRaidStatusComponent_o *this,
        UISprite_o *sprite,
        System_String_o *prefix,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x21
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = iconId;
  if ( (byte_4B1453C & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, sprite, prefix);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v8, v9);
    byte_4B1453C = 1;
  }
  if ( (iconId & 0x80000000) != 0 )
    goto LABEL_12;
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  v12 = System_String__Concat_62412480(prefix, (System_String_o *)StringLiteral_16290/*"_"*/, v10, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11);
  if ( !AtlasManager__SetEventUI(sprite, v12, 0LL) )
  {
LABEL_12:
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
    AtlasManager__SetEventUI(sprite, prefix, 0LL);
  }
}


void __fastcall TitleInfoEventRaidStatusComponent__SetHpBarPosition(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *raidBossHp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v8; // [xsp+0h] [xbp-30h] BYREF

  v8.fields.z = 0.0;
  *(_QWORD *)&v8.fields.x = 0LL;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity && EventBossStatusUiEntity__TryGetHpBarPos(eventBossStatusUiEntity, &v8, 0LL) )
  {
    raidBossHp = (UnityEngine_Component_o *)this->fields.raidBossHp;
    if ( !raidBossHp )
      sub_1BCAA3C(0LL, v5);
    gameObject = UnityEngine_Component__get_gameObject(raidBossHp, 0LL);
    GameObjectExtensions__SetLocalPosition(gameObject, v8, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineBattleColor(
        TitleInfoEventRaidStatusComponent_o *this,
        UILabel_o *label,
        const MethodInfo *method)
{
  TitleInfoEventRaidStatusComponent_c *v5; // x0
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x20
  uint32_t cctor_finished; // w8
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct TitleInfoEventRaidStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_4B1453F & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaidStatusComponent_TypeInfo, label, method);
    byte_4B1453F = 1;
  }
  v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  cctor_finished = TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished;
  if ( eventBossStatusUiEntity )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, label);
      v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    *(UnityEngine_Color_o *)&r = EventBossStatusUiEntity__GetStatusBattleColor(
                                   eventBossStatusUiEntity,
                                   v5->static_fields->RAIDBOSS_OUTLINE_COLOR_BATTLE,
                                   0LL);
    if ( label )
      goto LABEL_7;
LABEL_11:
    sub_1BCAA3C(v5, label);
  }
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, label);
    v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  static_fields = v5->static_fields;
  r = static_fields->RAIDBOSS_OUTLINE_COLOR_BATTLE.fields.r;
  g = static_fields->RAIDBOSS_OUTLINE_COLOR_BATTLE.fields.g;
  b = static_fields->RAIDBOSS_OUTLINE_COLOR_BATTLE.fields.b;
  a = static_fields->RAIDBOSS_OUTLINE_COLOR_BATTLE.fields.a;
  if ( !label )
    goto LABEL_11;
LABEL_7:
  UILabel__set_effectColor(label, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineBattleColor_36965432(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineColor(
        TitleInfoEventRaidStatusComponent_o *this,
        UILabel_o *label,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  int v7; // s0
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity )
  {
    v11.fields.r = 0.0;
    v11.fields.g = 0.0;
    v11.fields.b = 0.0;
    v11.fields.a = 0.0;
    *(UnityEngine_Color_o *)&v7 = EventBossStatusUiEntity__GetTextEffectColor(eventBossStatusUiEntity, v11, 0LL);
    if ( !label )
      sub_1BCAA3C(v5, v6);
    UILabel__set_effectColor(label, *(UnityEngine_Color_o *)&v7, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineColorAndDefault(
        TitleInfoEventRaidStatusComponent_o *this,
        UILabel_o *label,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0

  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity )
    defaultColor = EventBossStatusUiEntity__GetTextEffectColor(eventBossStatusUiEntity, defaultColor, 0LL);
  if ( !label )
    sub_1BCAA3C(eventBossStatusUiEntity, label);
  UILabel__set_effectColor(label, defaultColor, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineLastColor(
        TitleInfoEventRaidStatusComponent_o *this,
        UILabel_o *label,
        const MethodInfo *method)
{
  TitleInfoEventRaidStatusComponent_c *v5; // x0
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x20
  uint32_t cctor_finished; // w8
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct TitleInfoEventRaidStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_4B14540 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaidStatusComponent_TypeInfo, label, method);
    byte_4B14540 = 1;
  }
  v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  cctor_finished = TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished;
  if ( eventBossStatusUiEntity )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, label);
      v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    *(UnityEngine_Color_o *)&r = EventBossStatusUiEntity__GetStatusLastColor(
                                   eventBossStatusUiEntity,
                                   v5->static_fields->RAIDBOSS_OUTLINE_COLOR_LAST,
                                   0LL);
    if ( label )
      goto LABEL_7;
LABEL_11:
    sub_1BCAA3C(v5, label);
  }
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, label);
    v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  static_fields = v5->static_fields;
  r = static_fields->RAIDBOSS_OUTLINE_COLOR_LAST.fields.r;
  g = static_fields->RAIDBOSS_OUTLINE_COLOR_LAST.fields.g;
  b = static_fields->RAIDBOSS_OUTLINE_COLOR_LAST.fields.b;
  a = static_fields->RAIDBOSS_OUTLINE_COLOR_LAST.fields.a;
  if ( !label )
    goto LABEL_11;
LABEL_7:
  UILabel__set_effectColor(label, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineLastColor_36966256(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineWinColor(
        TitleInfoEventRaidStatusComponent_o *this,
        UILabel_o *label,
        const MethodInfo *method)
{
  TitleInfoEventRaidStatusComponent_c *v5; // x0
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x20
  uint32_t cctor_finished; // w8
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct TitleInfoEventRaidStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_4B14541 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaidStatusComponent_TypeInfo, label, method);
    byte_4B14541 = 1;
  }
  v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  cctor_finished = TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished;
  if ( eventBossStatusUiEntity )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, label);
      v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    *(UnityEngine_Color_o *)&r = EventBossStatusUiEntity__GetStatusWinColor(
                                   eventBossStatusUiEntity,
                                   v5->static_fields->RAIDBOSS_OUTLINE_COLOR_WIN,
                                   0LL);
    if ( label )
      goto LABEL_7;
LABEL_11:
    sub_1BCAA3C(v5, label);
  }
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, label);
    v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  static_fields = v5->static_fields;
  r = static_fields->RAIDBOSS_OUTLINE_COLOR_WIN.fields.r;
  g = static_fields->RAIDBOSS_OUTLINE_COLOR_WIN.fields.g;
  b = static_fields->RAIDBOSS_OUTLINE_COLOR_WIN.fields.b;
  a = static_fields->RAIDBOSS_OUTLINE_COLOR_WIN.fields.a;
  if ( !label )
    goto LABEL_11;
LABEL_7:
  UILabel__set_effectColor(label, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineWinColor_36966316(
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


bool __fastcall TitleInfoEventRaidStatusComponent__SetSubGroupBattleIdIcon(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  TitleInfoEventRaidStatusComponent_c *v8; // x0
  UISprite_o *subGroupBattleId; // x20
  struct EventRaidEntity_o *eventRaidEntity; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID; // x21
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x21
  __int64 v15; // x1
  TitleInfoEventRaidStatusComponent_c *v17; // x0
  UISprite_o *v18; // x19
  System_String_o *v19; // x20
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x20
  int v24; // [xsp+8h] [xbp-38h] BYREF
  int32_t subGroupIndex; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1454C & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&TitleInfoEventRaidStatusComponent_TypeInfo, v6, v7);
    byte_4B1454C = 1;
  }
  v8 = TitleInfoEventRaidStatusComponent_TypeInfo;
  subGroupBattleId = this->fields.subGroupBattleId;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, method);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    sub_1BCAA3C(v8, method);
  RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID;
  subGroupIndex = eventRaidEntity->fields.subGroupIndex;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &subGroupIndex);
  v14 = System_String__Format(RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID, v12, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
  if ( AtlasManager__SetEventUI(subGroupBattleId, v14, 0LL) )
  {
    return 1;
  }
  else
  {
    v17 = TitleInfoEventRaidStatusComponent_TypeInfo;
    v18 = this->fields.subGroupBattleId;
    if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v15);
      v17 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    v19 = v17->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID;
    v24 = 1;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v22 = System_String__Format(v19, v20, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21);
    return AtlasManager__SetEventUI(v18, v22, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__Setup(
        TitleInfoEventRaidStatusComponent_o *this,
        EventRaidEntity_o *eventRaidEntity,
        int32_t warId,
        int32_t currentDay,
        bool isJumbleRaid,
        bool isReprintLastWarRaid,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  _BOOL4 v12; // w24
  bool v13; // w25
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  struct EventRaidEntity_o **p_eventRaidEntity; // x20
  __int64 v29; // x1
  struct EventRaidEntity_o *v30; // x8
  UnityEngine_Object_o *gameObject; // x0
  __int64 v32; // x1
  UnityEngine_Object_o *v33; // x22
  System_String_o *v34; // x23
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  UnityEngine_Object_o *v37; // x21
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  UISprite_o *subGroup; // x21
  TitleInfoEventRaidStatusComponent_c *v46; // x0
  System_String_o *RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT; // x22
  const MethodInfo *v48; // x4
  struct EventRaidEntity_o *v49; // x8
  bool v50; // w1
  int v51; // w21
  __int64 v52; // x1
  Il2CppObject *v53; // x20
  Il2CppObject *v54; // x20

  v12 = isJumbleRaid;
  v13 = isReprintLastWarRaid;
  if ( (byte_4B14539 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, eventRaidEntity, *(_QWORD *)&warId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&TitleInfoEventRaidStatusComponent_TypeInfo, v26, v27);
    byte_4B14539 = 1;
  }
  this->fields.eventRaidEntity = eventRaidEntity;
  p_eventRaidEntity = &this->fields.eventRaidEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventRaidEntity,
    (int64_t)eventRaidEntity,
    *(int64_t *)&warId,
    currentDay,
    (System_String_o *)isJumbleRaid,
    (BattleSetupInfo_o *)isReprintLastWarRaid,
    (FollowerInfo_o *)method,
    v7);
  v30 = this->fields.eventRaidEntity;
  this->fields.warId = warId;
  this->fields.isJumbleRaid = v12;
  this->fields.isReprintLastWarRaid = v13;
  if ( v30 )
  {
    this->fields.currentDay = currentDay;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_49;
    v33 = gameObject;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0LL);
    if ( !eventRaidEntity )
      goto LABEL_49;
    v34 = (System_String_o *)gameObject;
    v35 = System_Int32__ToString((int)eventRaidEntity + 20, 0LL);
    v36 = System_String__Concat_62401220(v34, v35, 0LL);
    UnityEngine_Object__set_name(v33, v36, 0LL);
    gameObject = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)gameObject,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                           eventRaidEntity->fields.eventId,
                                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !gameObject )
      goto LABEL_49;
    v37 = gameObject;
    this->fields.isRaidDefeatCount = EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)gameObject,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    if ( !gameObject )
      goto LABEL_49;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  (EventBossStatusUiMaster_o *)gameObject,
                                  v37->fields.m_CachedPtr,
                                  this->fields.currentDay,
                                  0LL);
    this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventBossStatusUiEntity,
      (int64_t)EntityFromEventIdAndIndex,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    v12 = this->fields.isJumbleRaid;
  }
  if ( v12 )
  {
    subGroup = this->fields.subGroup;
    v46 = TitleInfoEventRaidStatusComponent_TypeInfo;
    if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v29);
      v46 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT = v46->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v29);
    AtlasManager__SetEventUI(subGroup, RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT, 0LL);
    AtlasManager__SetEventUI(
      this->fields.subGroupBase,
      TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK,
      0LL);
    gameObject = (UnityEngine_Object_o *)AtlasManager__SetEventUI(
                                           this->fields.subGroupPartition,
                                           TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION,
                                           0LL);
    v49 = this->fields.eventRaidEntity;
    if ( !v49 )
      goto LABEL_49;
    TitleInfoEventRaidStatusComponent__SetEventIcon(
      (TitleInfoEventRaidStatusComponent_o *)gameObject,
      this->fields.raidBattle,
      TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_STATUS_01,
      v49->fields.iconId,
      v48);
    gameObject = (UnityEngine_Object_o *)this->fields.raidBossName;
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
    if ( !gameObject )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Object_o *)this->fields.raidBossHpHead;
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
    if ( !gameObject )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Object_o *)this->fields.raidBossHp;
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
    if ( !gameObject )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Object_o *)this->fields.raidBattle;
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
    if ( !gameObject )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Object_o *)this->fields.raidBossStatus;
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
    if ( !gameObject )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Object_o *)*p_eventRaidEntity;
    if ( !*p_eventRaidEntity )
      goto LABEL_49;
    if ( EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)gameObject, 0LL) )
    {
      gameObject = (UnityEngine_Object_o *)this->fields.subGroupGrid;
      if ( !gameObject )
        goto LABEL_49;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
      if ( !gameObject )
        goto LABEL_49;
      v50 = 0;
    }
    else
    {
      if ( this->fields.subGroupCount >= 1 )
      {
        v51 = 0;
        while ( 1 )
        {
          gameObject = (UnityEngine_Object_o *)this->fields.subGroupBase;
          if ( !gameObject )
            goto LABEL_49;
          v53 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
          v54 = UnityEngine_Object__Instantiate_object_(
                  v53,
                  (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v54, 0LL, 0LL) )
          {
            GameObjectExtensions__SafeSetParent(
              (UnityEngine_GameObject_o *)v54,
              (UnityEngine_Component_o *)this->fields.subGroupGrid,
              0LL);
            if ( ++v51 < this->fields.subGroupCount )
              continue;
          }
          break;
        }
      }
      gameObject = (UnityEngine_Object_o *)this->fields.subGroupGrid;
      if ( !gameObject )
        goto LABEL_49;
      ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))gameObject->klass[1]._1.castClass)(
        gameObject,
        gameObject->klass[1]._1.declaringType);
      gameObject = (UnityEngine_Object_o *)this->fields.subGroupGrid;
      if ( !gameObject )
        goto LABEL_49;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
      if ( !gameObject )
        goto LABEL_49;
      v50 = 1;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v50, 0LL);
  }
  ((void (__fastcall *)(TitleInfoEventRaidStatusComponent_o *, Il2CppMethodPointer))this->klass->vtable._5_UpdateDisp.method)(
    this,
    this->klass->vtable._6_IsEventRaidBoss.methodPtr);
  if ( this->fields.isJumbleRaid )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      return;
    }
LABEL_49:
    sub_1BCAA3C(gameObject, v32);
  }
}


void __fastcall TitleInfoEventRaidStatusComponent__StartClearAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  TitleInfoEventRaidStatusComponent_c *v16; // x0
  _BOOL4 isJumbleRaid; // w22
  float y; // s8
  struct TitleInfoEventRaidStatusComponent_StaticFields *static_fields; // x8
  __int64 v20; // x9
  __int64 v21; // x10
  float v22; // s0
  __int64 v23; // x10
  float v24; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14545 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaidStatusComponent_TypeInfo, callback, method);
    sub_1BCA7E0(&StringLiteral_2392/*"AnimFrameOutEnd"*/, v10, v11);
    byte_4B14545 = 1;
  }
  this->fields.clearAnimCallBack = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.clearAnimCallBack,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCAA3C(0LL, v13);
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = localPosition.fields.y;
  this->fields.inPos.fields.z = 0.0;
  v16 = TitleInfoEventRaidStatusComponent_TypeInfo;
  isJumbleRaid = this->fields.isJumbleRaid;
  y = localPosition.fields.y;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v14);
    v16 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  static_fields = v16->static_fields;
  v20 = 100LL;
  if ( !isJumbleRaid )
    v20 = 88LL;
  v21 = 84LL;
  if ( isJumbleRaid )
    v21 = 96LL;
  v22 = *(float *)((char *)&static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE + v21);
  v23 = 80LL;
  if ( isJumbleRaid )
    v23 = 92LL;
  v24 = *(float *)((char *)&static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE + v20) + 0.0;
  this->fields.outPos.fields.x = *(float *)((char *)&static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE + v23) + 0.0;
  this->fields.outPos.fields.y = y + v22;
  this->fields.outPos.fields.z = v24;
  TitleInfoEventRaidStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_2392/*"AnimFrameOutEnd"*/, v15);
}


bool __fastcall TitleInfoEventRaidStatusComponent__TryGetGridPosition(
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
  *(_QWORD *)&v10.fields.x = 0LL;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, pos, method);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&pos->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  pos->fields.z = z;
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity )
  {
    if ( EventBossStatusUiEntity__TryGetGridPos(eventBossStatusUiEntity, &v10, 0LL) )
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
void __fastcall TitleInfoEventRaidStatusComponent__Update(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventRaidStatusComponent__RefreshTimeStr(this, method);
}


void __fastcall TitleInfoEventRaidStatusComponent__UpdateDisp(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int32_t eventId; // w20
  int32_t day; // w21
  __int64 gameObject; // x0
  const MethodInfo *v36; // x1
  DataManager_o *v37; // x24
  struct EventRaidEntity_o *v38; // x8
  int64_t v39; // x23
  int64_t maxHp; // x28
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX_LAST; // x29
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  EventRaidMaster_o *v44; // x26
  struct EventRaidEntity_o *v45; // x8
  int32_t RaidGroupDeadQuestId; // w0
  int32_t v47; // w24
  struct EventRaidEntity_o *v48; // x8
  UILabel_o *raidBossName; // x25
  UnityEngine_Behaviour_o *subGroupBattleId; // x25
  const MethodInfo *v51; // x1
  UnityEngine_GameObject_o *v52; // x25
  struct EventRaidEntity_o *v53; // x8
  __int64 startedAt; // x22
  struct EventRaidEntity_o *v55; // x8
  UIWidget_o *raidBossIconSp; // x25
  bool v57; // w1
  struct EventRaidEntity_o *v58; // x8
  UnityEngine_Behaviour_o *v59; // x25
  __int64 endedAt; // x22
  UILabel_o *v61; // x25
  const MethodInfo *v62; // x3
  UILabel_o *raidBossHpHead; // x25
  UILabel_o *raidBossHp; // x27
  System_String_o *v65; // x25
  Il2CppObject *v66; // x0
  struct EventRaidEntity_o *v67; // x8
  int32_t SubGroupNow; // w27
  int32_t v69; // w26
  int v70; // w22
  System_Collections_Generic_List_object__o *v71; // x28
  int32_t v72; // w29
  UnityEngine_GameObject_o *v73; // x25
  __int64 v74; // x1
  UnityEngine_Object_o *Child; // x25
  UnityEngine_GameObject_o *v76; // x25
  TitleInfoEventRaidStatusComponent_c *v77; // x0
  const MethodInfo *v78; // x4
  UISprite_o *raidBattle; // x20
  struct EventRaidEntity_o *v80; // x8
  TitleInfoEventRaidStatusComponent_c *v81; // x0
  __int64 v82; // x8
  struct EventRaidEntity_o *v83; // x8
  System_String_o *v84; // x0
  System_String_o *v85; // x0
  const MethodInfo *v86; // x2
  char v87; // [xsp+4h] [xbp-8Ch]
  System_String_o *v88; // [xsp+18h] [xbp-78h]
  int64_t v89; // [xsp+20h] [xbp-70h] BYREF
  TotalEventRaidEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B1453D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v6, v7);
    sub_1BCA7E0(&long_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Transform__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Transform__get_Item__, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v22, v23);
    sub_1BCA7E0(&TitleInfoEventRaidStatusComponent_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_5764/*"EVENT_RAID_REST_COUNT_AFTER"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_5765/*"EVENT_RAID_REST_COUNT_BEFORE"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v30, v31);
    byte_4B1453D = 1;
  }
  entity = 0LL;
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    return;
  eventId = eventRaidEntity->fields.eventId;
  day = eventRaidEntity->fields.day;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_136;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, day <= this->fields.currentDay, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_136;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    return;
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_136;
  v37 = (DataManager_o *)gameObject;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !gameObject )
    goto LABEL_136;
  gameObject = TotalEventRaidMaster__TryGetEntity((TotalEventRaidMaster_o *)gameObject, &entity, eventId, day, 0LL);
  v38 = this->fields.eventRaidEntity;
  if ( !v38 )
    goto LABEL_136;
  v39 = entity ? entity->fields.totalDamage : 0LL;
  gameObject = (__int64)this->fields.raidBossIconSp;
  if ( !gameObject )
    goto LABEL_136;
  maxHp = v38->fields.maxHp;
  RAIDBOSS_ICON_SPNAME_PREFIX_LAST = (System_String_o *)StringLiteral_1/*""*/;
  gameObject = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)gameObject,
                          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !gameObject )
    goto LABEL_136;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 1, 0LL);
  TitleInfoEventRaidStatusComponent__SetOutlineBattleColor_36965432(this, v42);
  TitleInfoEventRaidStatusComponent__SetHpBarPosition(this, v43);
  if ( day == this->fields.currentDay )
  {
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            v37,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
    if ( !this->fields.eventRaidEntity )
      goto LABEL_136;
    v44 = (EventRaidMaster_o *)gameObject;
    gameObject = EventRaidEntity__IsJumbleSingleRaid(this->fields.eventRaidEntity, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      v45 = this->fields.eventRaidEntity;
      if ( !v45 || !v44 )
        goto LABEL_136;
      RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(v44, eventId, v45->fields.groupIndex, 0LL);
    }
    else
    {
      if ( !v44 )
        goto LABEL_136;
      RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v44, eventId, day, 0LL);
    }
    v47 = RaidGroupDeadQuestId;
    if ( RaidGroupDeadQuestId < 1 )
    {
      gameObject = 0LL;
    }
    else
    {
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !gameObject )
        goto LABEL_136;
      gameObject = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)gameObject, v47, -1, 0, 0LL);
    }
    v87 = gameObject;
    if ( this->fields.isJumbleRaid )
    {
      v48 = this->fields.eventRaidEntity;
      if ( !v48 )
        goto LABEL_136;
      gameObject = (__int64)this->fields.raidBossName;
      if ( !gameObject )
        goto LABEL_136;
      UILabel__set_text((UILabel_o *)gameObject, v48->fields.name, 0LL);
      gameObject = (__int64)this->fields.raidBossName;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_136;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      raidBossName = this->fields.raidBossName;
      gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v36);
      if ( !raidBossName )
        goto LABEL_136;
      UILabel__SetCondensedScale(
        raidBossName,
        TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
        0LL);
      subGroupBattleId = (UnityEngine_Behaviour_o *)this->fields.subGroupBattleId;
      gameObject = TitleInfoEventRaidStatusComponent__SetSubGroupBattleIdIcon(this, v51);
      if ( !subGroupBattleId )
        goto LABEL_136;
      UnityEngine_Behaviour__set_enabled(subGroupBattleId, gameObject & 1, 0LL);
      gameObject = (__int64)this->fields.subGroupBattleId;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !this->fields.eventRaidEntity )
        goto LABEL_136;
      v52 = (UnityEngine_GameObject_o *)gameObject;
      gameObject = EventRaidEntity__IsJumbleSingleRaid(this->fields.eventRaidEntity, 0LL);
      if ( !v52 )
        goto LABEL_136;
      UnityEngine_GameObject__SetActive(v52, (gameObject & 1) == 0, 0LL);
      gameObject = (__int64)this->fields.subGroupBattleId;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
                     gameObject,
                     *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
      v53 = this->fields.eventRaidEntity;
      if ( !v53 )
        goto LABEL_136;
      startedAt = v53->fields.startedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v36);
      gameObject = NetworkManager__getTime(0LL);
      if ( startedAt <= gameObject )
      {
        raidBossHpHead = this->fields.raidBossHpHead;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5765/*"EVENT_RAID_REST_COUNT_BEFORE"*/, 0LL);
        if ( !raidBossHpHead )
          goto LABEL_136;
        UILabel__set_text(raidBossHpHead, (System_String_o *)gameObject, 0LL);
        gameObject = (__int64)this->fields.raidBossHpHead;
        if ( !gameObject )
          goto LABEL_136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        raidBossHp = this->fields.raidBossHp;
        v65 = LocalizationManager__Get((System_String_o *)StringLiteral_5764/*"EVENT_RAID_REST_COUNT_AFTER"*/, 0LL);
        v89 = maxHp - v39;
        v66 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v89);
        gameObject = (__int64)System_String__Format(v65, v66, 0LL);
        if ( !raidBossHp )
          goto LABEL_136;
        UILabel__set_text(raidBossHp, (System_String_o *)gameObject, 0LL);
        gameObject = (__int64)this->fields.raidBossHp;
        if ( !gameObject )
          goto LABEL_136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (__int64)this->fields.raidBattle;
        if ( !gameObject )
          goto LABEL_136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        v67 = this->fields.eventRaidEntity;
        if ( !v67 || !gameObject )
          goto LABEL_136;
        v57 = v67->fields.maxHp > v39;
      }
      else
      {
        v55 = this->fields.eventRaidEntity;
        if ( !v55 )
          goto LABEL_136;
        this->fields.targetTime = v55->fields.startedAt;
        TitleInfoEventRaidStatusComponent__RefreshTimeStr(this, v36);
        gameObject = (__int64)this->fields.raidBossStatus;
        if ( !gameObject )
          goto LABEL_136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
        raidBossIconSp = (UIWidget_o *)this->fields.raidBossIconSp;
        if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v36);
          gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
        }
        if ( !raidBossIconSp )
          goto LABEL_136;
        UIWidget__set_color(raidBossIconSp, *(UnityEngine_Color_o *)(*(_QWORD *)(gameObject + 184) + 112LL), 0LL);
        gameObject = (__int64)this->fields.raidBattle;
        if ( !gameObject )
          goto LABEL_136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_136;
        v57 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v57, 0LL);
      v88 = RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
      SubGroupNow = EventRaidMaster__GetSubGroupNow(v44, this->fields.eventRaidEntity, 0LL);
      gameObject = EventRaidMaster__GetSubGroupMax(v44, this->fields.eventRaidEntity, 0LL);
      if ( !this->fields.subGroupGrid )
        goto LABEL_136;
      v69 = gameObject;
      gameObject = (__int64)UIGrid__GetChildList(this->fields.subGroupGrid, 0LL);
      if ( !gameObject )
        goto LABEL_136;
      v70 = *(_DWORD *)(gameObject + 24);
      v71 = (System_Collections_Generic_List_object__o *)gameObject;
      if ( v70 >= 1 )
      {
        v72 = 0;
        do
        {
          gameObject = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v71,
                                  v72,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Transform__get_Item__);
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_136;
          v73 = (UnityEngine_GameObject_o *)gameObject;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v72 < v69, 0LL);
          Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(v73, 0, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v74);
          gameObject = UnityEngine_Object__op_Inequality(Child, 0LL, 0LL);
          if ( (gameObject & 1) != 0 )
          {
            if ( !Child )
              goto LABEL_136;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Child, 0LL);
            if ( !gameObject )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v72 >= SubGroupNow, 0LL);
          }
        }
        while ( v70 != ++v72 );
      }
      gameObject = (__int64)this->fields.subGroupPartition;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v88;
      v76 = (UnityEngine_GameObject_o *)gameObject;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v36);
      if ( !v76 )
        goto LABEL_136;
      UnityEngine_GameObject__SetActive(
        v76,
        v69 > TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_SUB_GROUP_PARTITION_INDEX,
        0LL);
    }
    else if ( this->fields.isRaidDefeatCount )
    {
      gameObject = (__int64)this->fields.raidBossHp;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_136;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v58 = this->fields.eventRaidEntity;
      if ( !v58 )
        goto LABEL_136;
      v59 = (UnityEngine_Behaviour_o *)this->fields.raidBossHp;
      endedAt = v58->fields.endedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v36);
      gameObject = NetworkManager__getTime(0LL);
      if ( !v59 )
        goto LABEL_136;
      UnityEngine_Behaviour__set_enabled(v59, endedAt > gameObject, 0LL);
      v61 = this->fields.raidBossHp;
      gameObject = (__int64)TitleInfoEventRaidStatusComponent__GetRestCountText(this, maxHp - v39, v39, v62);
      if ( !v61 )
        goto LABEL_136;
      UILabel__set_text(v61, (System_String_o *)gameObject, 0LL);
    }
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !gameObject )
      goto LABEL_136;
    if ( !clsQuestCheck__IsEncountRaidBoss((clsQuestCheck_o *)gameObject, eventId, day, 0LL)
      && !this->fields.isRaidDefeatCount )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_136;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      return;
    }
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !gameObject )
      goto LABEL_136;
    if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)gameObject, v47, 0, 0LL) )
    {
      if ( this->fields.isRaidDefeatCount )
      {
        if ( !this->fields.isJumbleRaid )
          goto LABEL_101;
        gameObject = (__int64)this->fields.eventRaidEntity;
        if ( !gameObject )
          goto LABEL_136;
        if ( EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)gameObject, 0LL) )
        {
LABEL_101:
          gameObject = (__int64)this->fields.eventRaidEntity;
          if ( (v87 & 1) != 0 )
          {
            if ( !gameObject )
              goto LABEL_136;
            goto LABEL_111;
          }
          if ( !gameObject )
            goto LABEL_136;
          if ( *(_QWORD *)(gameObject + 40) <= v39 )
          {
LABEL_111:
            if ( EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)gameObject, 0LL) )
            {
              gameObject = (__int64)this->fields.raidBattle;
              if ( !gameObject )
                goto LABEL_136;
              gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_136;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              raidBattle = this->fields.raidBattle;
              gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
              if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v36);
              v80 = this->fields.eventRaidEntity;
              if ( !v80 )
                goto LABEL_136;
              TitleInfoEventRaidStatusComponent__SetEventIcon(
                (TitleInfoEventRaidStatusComponent_o *)gameObject,
                raidBattle,
                TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_STATUS_02,
                v80->fields.iconId,
                v78);
            }
            v81 = TitleInfoEventRaidStatusComponent_TypeInfo;
            if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v36);
              v81 = TitleInfoEventRaidStatusComponent_TypeInfo;
            }
            RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v81->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
            TitleInfoEventRaidStatusComponent__SetOutlineLastColor_36966256(this, v36);
            goto LABEL_121;
          }
        }
      }
      v77 = TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v36);
        v77 = TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v77->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE;
    }
  }
LABEL_121:
  gameObject = System_String__IsNullOrEmpty(RAIDBOSS_ICON_SPNAME_PREFIX_LAST, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.eventRaidEntity;
    if ( !gameObject )
      goto LABEL_136;
    if ( EventRaidEntity__isCleard((EventRaidEntity_o *)gameObject, 0LL) )
    {
      if ( this->fields.isRaidDefeatCount )
        TitleInfoEventRaidStatusComponent__SetOutlineWinColor_36966316(this, v36);
      gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v36);
        gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      v82 = 8LL;
    }
    else
    {
      gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v36);
        gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      v82 = 16LL;
    }
    RAIDBOSS_ICON_SPNAME_PREFIX_LAST = *(System_String_o **)(*(_QWORD *)(gameObject + 184) + v82);
  }
  v83 = this->fields.eventRaidEntity;
  if ( !v83 )
LABEL_136:
    sub_1BCAA3C(gameObject, v36);
  v84 = System_Int32__ToString((int)v83 + 48, 0LL);
  v85 = System_String__Concat_62401220(RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v84, 0LL);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v85, v86);
}


void __fastcall TitleInfoEventRaidStatusComponent__clearAnimFinised(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *clearAnimCallBack; // x0

  clearAnimCallBack = this->fields.clearAnimCallBack;
  if ( clearAnimCallBack )
    ActionExtensions__Call(clearAnimCallBack, 0LL);
}


UISprite_o *__fastcall TitleInfoEventRaidStatusComponent__getIconSprite(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.raidBossIconSp;
}


UISprite_o *__fastcall TitleInfoEventRaidStatusComponent__getSubGroupBase(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.subGroupBase;
}


void __fastcall TitleInfoEventRaidStatusComponent__onClick(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t RaidDeadQuestId; // w20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  if ( (byte_4B14542 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_TitleInfoEventRaidStatusComponent_onClick__, v8, v9);
    byte_4B14542 = 1;
  }
  if ( this->fields.eventRaidEntity )
  {
    if ( this->fields.isReprintLastWarRaid )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
    eventRaidEntity = this->fields.eventRaidEntity;
    if ( !eventRaidEntity || !Instance )
      goto LABEL_18;
    RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                        (EventRaidMaster_o *)Instance,
                        eventRaidEntity->fields.eventId,
                        eventRaidEntity->fields.day,
                        0LL);
  }
  else
  {
    RaidDeadQuestId = 0;
  }
  if ( this->fields.clickCallBack )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( Instance )
    {
      if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, RaidDeadQuestId, 0, 0LL) )
      {
        ActionExtensions__Call(this->fields.clickCallBack, 0LL);
        return;
      }
      goto LABEL_14;
    }
LABEL_18:
    sub_1BCAA3C(Instance, v12);
  }
LABEL_14:
  v14 = Method_TitleInfoEventRaidStatusComponent_onClick__;
  if ( (*((_BYTE *)Method_TitleInfoEventRaidStatusComponent_onClick__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1BCA7F8(Method_TitleInfoEventRaidStatusComponent_onClick__);
  v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0LL);
}


void __fastcall TitleInfoEventRaidStatusComponent__setClickCallBack(
        TitleInfoEventRaidStatusComponent_o *this,
        System_Action_o *cb,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.clickCallBack = cb;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.clickCallBack,
    (int64_t)cb,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}