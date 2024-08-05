void __fastcall TitleInfoEventRaidStatusComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  struct TitleInfoEventRaidStatusComponent_StaticFields *v46; // x0
  int32_t v47; // w1
  int32_t v48; // w2
  int32_t v49; // w3
  TitleInfoEventRaidStatusComponent_c *v50; // x8
  struct TitleInfoEventRaidStatusComponent_StaticFields *v51; // x9
  struct TitleInfoEventRaidStatusComponent_StaticFields *v52; // x9
  struct TitleInfoEventRaidStatusComponent_StaticFields *v53; // x9
  struct TitleInfoEventRaidStatusComponent_StaticFields *v54; // x9

  if ( (byte_49FC631 & 1) == 0 )
  {
    sub_1B64870(&TitleInfoEventRaidStatusComponent_TypeInfo, v1);
    sub_1B64870(&StringLiteral_22672/*"raid_boss_status_battle_"*/, v4);
    sub_1B64870(&StringLiteral_22674/*"raid_boss_status_lose_"*/, v5);
    sub_1B64870(&StringLiteral_19152/*"event_raid_status_02"*/, v6);
    sub_1B64870(&StringLiteral_19153/*"event_raid_sub_group_back"*/, v7);
    sub_1B64870(&StringLiteral_22673/*"raid_boss_status_last_"*/, v8);
    sub_1B64870(&StringLiteral_19155/*"event_raid_sub_group_front"*/, v9);
    sub_1B64870(&StringLiteral_19154/*"event_raid_sub_group_battle_{0:00}"*/, v10);
    sub_1B64870(&StringLiteral_19151/*"event_raid_status_01"*/, v11);
    sub_1B64870(&StringLiteral_22675/*"raid_boss_status_win_"*/, v12);
    sub_1B64870(&StringLiteral_19156/*"event_raid_sub_group_partition"*/, v13);
    byte_49FC631 = 1;
  }
  TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE = (struct System_String_o *)StringLiteral_22672/*"raid_boss_status_battle_"*/;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)TitleInfoEventRaidStatusComponent_TypeInfo->static_fields,
    StringLiteral_22672/*"raid_boss_status_battle_"*/,
    v2,
    v3);
  v14 = StringLiteral_22675/*"raid_boss_status_win_"*/;
  static_fields = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_WIN = (struct System_String_o *)StringLiteral_22675/*"raid_boss_status_win_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_WIN, v14, v16, v17);
  v18 = StringLiteral_22674/*"raid_boss_status_lose_"*/;
  v19 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v19->RAIDBOSS_ICON_SPNAME_PREFIX_LOSE = (struct System_String_o *)StringLiteral_22674/*"raid_boss_status_lose_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v19->RAIDBOSS_ICON_SPNAME_PREFIX_LOSE, v18, v20, v21);
  v22 = StringLiteral_22673/*"raid_boss_status_last_"*/;
  v23 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v23->RAIDBOSS_ICON_SPNAME_PREFIX_LAST = (struct System_String_o *)StringLiteral_22673/*"raid_boss_status_last_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v23->RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v22, v24, v25);
  v26 = StringLiteral_19155/*"event_raid_sub_group_front"*/;
  v27 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v27->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT = (struct System_String_o *)StringLiteral_19155/*"event_raid_sub_group_front"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v27->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT, v26, v28, v29);
  v30 = StringLiteral_19153/*"event_raid_sub_group_back"*/;
  v31 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v31->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK = (struct System_String_o *)StringLiteral_19153/*"event_raid_sub_group_back"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v31->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK, v30, v32, v33);
  v34 = StringLiteral_19156/*"event_raid_sub_group_partition"*/;
  v35 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v35->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION = (struct System_String_o *)StringLiteral_19156/*"event_raid_sub_group_partition"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v35->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION, v34, v36, v37);
  v38 = StringLiteral_19154/*"event_raid_sub_group_battle_{0:00}"*/;
  v39 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v39->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID = (struct System_String_o *)StringLiteral_19154/*"event_raid_sub_group_battle_{0:00}"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v39->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID, v38, v40, v41);
  v42 = StringLiteral_19151/*"event_raid_status_01"*/;
  v43 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v43->RAIDBOSS_ICON_SPNAME_STATUS_01 = (struct System_String_o *)StringLiteral_19151/*"event_raid_status_01"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v43->RAIDBOSS_ICON_SPNAME_STATUS_01, v42, v44, v45);
  v46 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v47 = StringLiteral_19152/*"event_raid_status_02"*/;
  v46->RAIDBOSS_ICON_SPNAME_STATUS_02 = (struct System_String_o *)StringLiteral_19152/*"event_raid_status_02"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v46->RAIDBOSS_ICON_SPNAME_STATUS_02, v47, v48, v49);
  v50 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v51 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&v51->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  v51->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  v52 = v50->static_fields;
  *(_QWORD *)&v52->FRAME_ANIM_OUT_POS_JUMBLE.fields.x = 3281387520LL;
  v52->FRAME_ANIM_OUT_POS_JUMBLE.fields.z = 0.0;
  v53 = v50->static_fields;
  *(_OWORD *)&v53->FRAME_ANIM_DURATION = xmmword_BA3680;
  *(_QWORD *)&v53->ICON_MASK_COLOR.fields.b = 0x3F8000003F000000LL;
  v54 = v50->static_fields;
  *(_QWORD *)&v54->JUMBLE_TERMINAL_REFRESH_TIME_OFFSET = 0x500000003LL;
  v54->RAIDBOSS_OUTLINE_COLOR_BATTLE = (struct UnityEngine_Color_o)xmmword_BA3FB0;
  v54->TITLE_LABEL_BASE_WIDTH = 120;
  v50->static_fields->RAIDBOSS_OUTLINE_COLOR_WIN = (struct UnityEngine_Color_o)xmmword_BA3080;
  v50->static_fields->RAIDBOSS_OUTLINE_COLOR_LAST = (struct UnityEngine_Color_o)xmmword_BA2F30;
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
  __int64 v5; // x1
  __int64 v6; // x1
  EventRaidEntity_o *eventRaidEntity; // x0
  struct System_Action_o *clearAnimCallBack; // x8
  struct EventRaidEntity_o *v9; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX_WIN; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  System_String_o *v15; // x1

  if ( (byte_49FC62A & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_EventRaidMaster___, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B64870(&TitleInfoEventRaidStatusComponent_TypeInfo, v5);
    sub_1B64870(&StringLiteral_17936/*"clearAnimFinised"*/, v6);
    byte_49FC62A = 1;
  }
  if ( this->fields.isJumbleRaid )
  {
    eventRaidEntity = this->fields.eventRaidEntity;
    if ( eventRaidEntity )
    {
      if ( EventRaidEntity__IsJumbleSingleRaid(eventRaidEntity, 0LL) )
        goto LABEL_9;
      eventRaidEntity = (EventRaidEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( eventRaidEntity )
      {
        eventRaidEntity = (EventRaidEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)eventRaidEntity,
                                                 (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
    sub_1B64ACC(eventRaidEntity, method);
  }
  TitleInfoEventRaidStatusComponent__SetOutlineWinColor(this, this->fields.raidBossHp, v2);
  eventRaidEntity = (EventRaidEntity_o *)TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
  v9 = this->fields.eventRaidEntity;
  if ( !v9 )
    goto LABEL_19;
  RAIDBOSS_ICON_SPNAME_PREFIX_WIN = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_WIN;
  v11 = System_Int32__ToString((int)v9 + 48, 0LL);
  v12 = System_String__Concat_61383576(RAIDBOSS_ICON_SPNAME_PREFIX_WIN, v11, 0LL);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v12, v13);
  if ( this->fields.clearAnimCallBack )
    v15 = (System_String_o *)StringLiteral_17936/*"clearAnimFinised"*/;
  else
    v15 = 0LL;
  TitleInfoEventRaidStatusComponent__FrameIn(this, v15, v14);
}


void __fastcall TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        UnityEngine_GameObject_o *gameObj,
        float from,
        float to,
        int32_t tweenMethod,
        const MethodInfo *method)
{
  __int64 v10; // x1
  TitleInfoEventRaidStatusComponent_c *v11; // x0
  Il2CppObject *v12; // x0
  __int64 v13; // x1

  if ( (byte_49FC62D & 1) == 0 )
  {
    sub_1B64870(&TitleInfoEventRaidStatusComponent_TypeInfo, gameObj);
    sub_1B64870(&Method_UITweener_Begin_TweenAlpha___, v10);
    byte_49FC62D = 1;
  }
  v11 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v11 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  v12 = UITweener__Begin_object_(
          gameObj,
          v11->static_fields->FRAME_ANIM_DURATION,
          (const MethodInfo_2EED0A8 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v12 )
    sub_1B64ACC(0LL, v13);
  LODWORD(v12[2].klass) = tweenMethod;
  *(float *)&v12[8].klass = from;
  *((float *)&v12[8].klass + 1) = to;
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
  __int64 v6; // x1
  char *gameObject; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *raidBossName; // x21
  TitleInfoEventRaidStatusComponent_o *v10; // x0
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *raidBossHpHead; // x21
  TitleInfoEventRaidStatusComponent_o *v13; // x0
  const MethodInfo *v14; // x3
  UnityEngine_GameObject_o *v15; // x0
  TitleInfoEventRaidStatusComponent_c *v16; // x8
  UnityEngine_GameObject_o *v17; // x21
  char *v18; // x21
  float z; // w8
  __int64 v20; // x9
  UnityEngine_GameObject_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  TitleInfoEventRaidStatusComponent_o *v26; // x0
  const MethodInfo *v27; // x3
  TitleInfoEventRaidStatusComponent_o *v28; // x0
  const MethodInfo *v29; // x3
  __int64 v30; // [xsp+0h] [xbp-40h]

  if ( (byte_49FC62B & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, callFinished);
    sub_1B64870(&TitleInfoEventRaidStatusComponent_TypeInfo, v5);
    sub_1B64870(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_49FC62B = 1;
  }
  if ( this->fields.isJumbleRaid )
  {
    gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    raidBossName = (UnityEngine_Object_o *)this->fields.raidBossName;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raidBossName, 0LL, 0LL) )
    {
      gameObject = (char *)this->fields.raidBossName;
      if ( !gameObject )
        goto LABEL_23;
      v10 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v10, (UnityEngine_GameObject_o *)v10, 0.0, 1.0, 6, v11);
    }
    raidBossHpHead = (UnityEngine_Object_o *)this->fields.raidBossHpHead;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raidBossHpHead, 0LL, 0LL) )
    {
      gameObject = (char *)this->fields.raidBossHpHead;
      if ( !gameObject )
        goto LABEL_23;
      v13 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v13, (UnityEngine_GameObject_o *)v13, 0.0, 1.0, 6, v14);
    }
  }
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v17 = v15;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v16 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  gameObject = (char *)UITweener__Begin_object_(
                         v17,
                         v16->static_fields->FRAME_ANIM_DURATION,
                         (const MethodInfo_2EED0A8 *)Method_UITweener_Begin_TweenPosition___);
  v30 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !gameObject )
    goto LABEL_23;
  v18 = gameObject;
  *((_DWORD *)gameObject + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)gameObject + 16) = v30;
  z = this->fields.inPos.fields.z;
  v20 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)gameObject + 8) = 6;
  *((float *)gameObject + 37) = z;
  *(_QWORD *)(gameObject + 140) = v20;
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v18 + 10) = v21;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v18 + 80), (int32_t)v21, v22, v23);
  *((_QWORD *)v18 + 11) = callFinished;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v18 + 88), (int32_t)callFinished, v24, v25);
  gameObject = (char *)this->fields.raidBossIconSp;
  if ( !gameObject )
LABEL_23:
    sub_1B64ACC(gameObject, v8);
  v26 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0LL);
  TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v26, (UnityEngine_GameObject_o *)v26, 0.0, 1.0, 6, v27);
  if ( this->fields.isRaidDefeatCount )
  {
    gameObject = (char *)this->fields.raidBossHp;
    if ( gameObject )
    {
      v28 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v28, (UnityEngine_GameObject_o *)v28, 0.0, 1.0, 6, v29);
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
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventRaidStatusComponent_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x21
  char *raidBossIconSp; // x0
  __int64 v11; // x1
  char *v12; // x21
  float z; // w8
  __int64 v14; // x9
  UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  TitleInfoEventRaidStatusComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  TitleInfoEventRaidStatusComponent_o *v22; // x0
  const MethodInfo *v23; // x3
  UnityEngine_Object_o *raidBossName; // x20
  TitleInfoEventRaidStatusComponent_o *v25; // x0
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *raidBossHpHead; // x20
  TitleInfoEventRaidStatusComponent_o *v28; // x0
  const MethodInfo *v29; // x3
  __int64 v30; // [xsp+0h] [xbp-40h]

  if ( (byte_49FC62C & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, callFinished);
    sub_1B64870(&TitleInfoEventRaidStatusComponent_TypeInfo, v5);
    sub_1B64870(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_49FC62C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v9 = gameObject;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v8 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  raidBossIconSp = (char *)UITweener__Begin_object_(
                             v9,
                             v8->static_fields->FRAME_ANIM_DURATION,
                             (const MethodInfo_2EED0A8 *)Method_UITweener_Begin_TweenPosition___);
  v30 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !raidBossIconSp )
    goto LABEL_22;
  v12 = raidBossIconSp;
  *((_DWORD *)raidBossIconSp + 34) = LODWORD(this->fields.inPos.fields.z);
  *((_QWORD *)raidBossIconSp + 16) = v30;
  z = this->fields.outPos.fields.z;
  v14 = *(_QWORD *)&this->fields.outPos.fields.x;
  *((_DWORD *)raidBossIconSp + 8) = 2;
  *((float *)raidBossIconSp + 37) = z;
  *(_QWORD *)(raidBossIconSp + 140) = v14;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v12 + 10) = v15;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v12 + 80), (int32_t)v15, v16, v17);
  *((_QWORD *)v12 + 11) = callFinished;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v12 + 88), (int32_t)callFinished, v18, v19);
  raidBossIconSp = (char *)this->fields.raidBossIconSp;
  if ( !raidBossIconSp )
    goto LABEL_22;
  v20 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)raidBossIconSp,
                                                 0LL);
  TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v20, (UnityEngine_GameObject_o *)v20, 1.0, 0.0, 2, v21);
  if ( this->fields.isRaidDefeatCount )
  {
    raidBossIconSp = (char *)this->fields.raidBossHp;
    if ( !raidBossIconSp )
      goto LABEL_22;
    v22 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)raidBossIconSp,
                                                   0LL);
    TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v22, (UnityEngine_GameObject_o *)v22, 1.0, 0.0, 2, v23);
  }
  if ( this->fields.isJumbleRaid )
  {
    raidBossName = (UnityEngine_Object_o *)this->fields.raidBossName;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raidBossName, 0LL, 0LL) )
    {
      raidBossIconSp = (char *)this->fields.raidBossName;
      if ( !raidBossIconSp )
        goto LABEL_22;
      v25 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)raidBossIconSp,
                                                     0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v25, (UnityEngine_GameObject_o *)v25, 1.0, 0.0, 2, v26);
    }
    raidBossHpHead = (UnityEngine_Object_o *)this->fields.raidBossHpHead;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raidBossHpHead, 0LL, 0LL) )
    {
      raidBossIconSp = (char *)this->fields.raidBossHpHead;
      if ( raidBossIconSp )
      {
        v28 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)raidBossIconSp,
                                                       0LL);
        TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v28, (UnityEngine_GameObject_o *)v28, 1.0, 0.0, 2, v29);
        return;
      }
LABEL_22:
      sub_1B64ACC(raidBossIconSp, v11);
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
      sub_1B64ACC(eventBossStatusUiEntity, method);
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
  __int64 v7; // x1
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  System_String_o *CountFormat; // x20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *NumberFormat_38084784; // x0
  System_String_o *v14; // x19
  int64_t v16; // [xsp+0h] [xbp-30h] BYREF
  int64_t v17; // [xsp+8h] [xbp-28h] BYREF

  v17 = totalHp;
  if ( (byte_49FC622 & 1) == 0 )
  {
    sub_1B64870(&long_TypeInfo, totalHp);
    sub_1B64870(&LocalizationManager_TypeInfo, v6);
    sub_1B64870(&StringLiteral_5590/*"EVENT_DEFEAT_COUNT_TXT"*/, v7);
    byte_49FC622 = 1;
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity
    && (CountFormat = EventBossStatusUiEntity__GetCountFormat(eventBossStatusUiEntity, 0LL),
        !System_String__IsNullOrEmpty(CountFormat, 0LL)) )
  {
    v14 = System_Int64__ToString((int64_t)&v17, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    NumberFormat_38084784 = (Il2CppObject *)LocalizationManager__GetNumberFormat_38084784(v14, 0LL);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    CountFormat = LocalizationManager__Get((System_String_o *)StringLiteral_5590/*"EVENT_DEFEAT_COUNT_TXT"*/, 0LL);
    v16 = totalDamage;
    NumberFormat_38084784 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16, v10, v11, v12);
  }
  return System_String__Format(CountFormat, NumberFormat_38084784, 0LL);
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


bool __fastcall TitleInfoEventRaidStatusComponent__IsTargetRaid(
        TitleInfoEventRaidStatusComponent_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  struct EventRaidEntity_o *eventRaidEntity; // x8

  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    sub_1B64ACC(this, eventId);
  return eventRaidEntity->fields.eventId == eventId && eventRaidEntity->fields.day == day;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__MoveUp(
        TitleInfoEventRaidStatusComponent_o *this,
        int32_t moveY,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  float x; // s10
  float y; // s8
  float z; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventRaidStatusComponent_c *v12; // x8
  UnityEngine_GameObject_o *v13; // x21
  Il2CppObject *v14; // x21
  int v15; // s0
  int v16; // s1
  int v17; // s2
  UnityEngine_GameObject_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FC62F & 1) == 0 )
  {
    sub_1B64870(&TitleInfoEventRaidStatusComponent_TypeInfo, *(_QWORD *)&moveY);
    sub_1B64870(&Method_UITweener_Begin_TweenPosition___, v5);
    byte_49FC62F = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v13 = gameObject;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v12 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  v14 = UITweener__Begin_object_(
          v13,
          v12->static_fields->FRAME_ANIM_DURATION,
          (const MethodInfo_2EED0A8 *)Method_UITweener_Begin_TweenPosition___);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (*(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_localPosition(transform, 0LL), !v14) )
LABEL_9:
    sub_1B64ACC(transform, v7);
  LODWORD(v14[8].klass) = v15;
  HIDWORD(v14[8].klass) = v16;
  LODWORD(v14[8].monitor) = v17;
  *((float *)&v14[8].monitor + 1) = x;
  *(float *)&v14[9].klass = y + (float)moveY;
  *((float *)&v14[9].klass + 1) = z;
  LODWORD(v14[2].klass) = 2;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[5].klass = (Il2CppClass *)v18;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v14[5], (int32_t)v18, v19, v20);
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
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_49FC62E & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v2);
    byte_49FC62E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9B2E )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, method);
    byte_49F9B2E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = 1;
  TopHomeRequest__clearExpirationDate(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v5);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall TitleInfoEventRaidStatusComponent__RefreshTimeStr(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t v10; // x20
  int32_t v11; // w22
  UILabel_o *raidBossStatus; // x19
  unsigned __int64 v13; // x21
  System_String_o *v14; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  TerminalSceneComponent_o *Instance; // x0
  __int64 v24; // x1
  TitleInfoEventRaidStatusComponent_c *v25; // x0
  TerminalSceneComponent_c *v26; // x0
  const MethodInfo *v27; // x2
  TitleInfoEventRaidStatusComponent_o *v28; // x0
  const MethodInfo *v29; // x1
  System_String_o *v30; // x20
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  int32_t v35; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v36; // [xsp+8h] [xbp-38h] BYREF
  int v37; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FC61E & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, method);
    sub_1B64870(&LocalizationManager_TypeInfo, v3);
    sub_1B64870(&NetworkManager_TypeInfo, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v6);
    sub_1B64870(&TitleInfoEventRaidStatusComponent_TypeInfo, v7);
    sub_1B64870(&StringLiteral_5652/*"EVENT_RAID_NEXT_TIME_1"*/, v8);
    sub_1B64870(&StringLiteral_5653/*"EVENT_RAID_NEXT_TIME_2"*/, v9);
    byte_49FC61E = 1;
  }
  if ( this->fields.isJumbleRaid && this->fields.targetTime >= 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = this->fields.targetTime - NetworkManager__getTime(0LL);
    if ( v10 < 1 )
    {
      v25 = TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
        v25 = TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      if ( v10 + v25->static_fields->JUMBLE_TERMINAL_REFRESH_TIME_OFFSET <= 0 )
      {
        Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
        {
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_49F97AD )
          {
            sub_1B64870(&TerminalSceneComponent_TypeInfo, v24);
            byte_49F97AD = 1;
          }
          v26 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v26 = TerminalSceneComponent_TypeInfo;
          }
          Instance = v26->static_fields->mInstance;
          if ( !Instance )
LABEL_31:
            sub_1B64ACC(Instance, v24);
          if ( TerminalSceneComponent__IsMapTouchEnabled(Instance, 0LL) )
          {
            this->fields.targetTime = 0LL;
            TitleInfoEventRaidStatusComponent__FrameOut(this, 0LL, v27);
            TitleInfoEventRaidStatusComponent__RefreshTerminal(v28, v29);
          }
        }
      }
    }
    else
    {
      v11 = v10 / 0x3CuLL % 0x3C;
      if ( this->fields.lastMinute != v11 )
      {
        this->fields.lastMinute = v11;
        raidBossStatus = this->fields.raidBossStatus;
        v13 = v10 / 0xE10uLL;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( (int)v13 < 1 )
        {
          v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5653/*"EVENT_RAID_NEXT_TIME_2"*/, 0LL);
          v35 = v11;
          v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v31, v32, v33);
          Instance = (TerminalSceneComponent_o *)System_String__Format(v30, v34, 0LL);
          if ( !raidBossStatus )
            goto LABEL_31;
        }
        else
        {
          v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5652/*"EVENT_RAID_NEXT_TIME_1"*/, 0LL);
          v37 = v13;
          v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v15, v16, v17);
          v36 = v11;
          v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v19, v20, v21);
          Instance = (TerminalSceneComponent_o *)System_String__Format_61397948(v14, v18, v22, 0LL);
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

  if ( (byte_49FC61F & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, spName);
    byte_49FC61F = 1;
  }
  raidBossIconSp = this->fields.raidBossIconSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
    sub_1B64ACC(v6, v7);
  }
}


void __fastcall TitleInfoEventRaidStatusComponent__SetClearAnim(
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

  if ( (byte_49FC628 & 1) == 0 )
  {
    sub_1B64870(&TitleInfoEventRaidStatusComponent_TypeInfo, method);
    byte_49FC628 = 1;
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
  TitleInfoEventRaidStatusComponent__SetOutlineLastColor_35619040(this, v4);
  eventRaidEntity = (UnityEngine_GameObject_o *)TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
  v5 = this->fields.eventRaidEntity;
  if ( !v5 )
LABEL_11:
    sub_1B64ACC(eventRaidEntity, method);
  RAIDBOSS_ICON_SPNAME_PREFIX_LAST = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
  v7 = System_Int32__ToString((int)v5 + 48, 0LL);
  v8 = System_String__Concat_61383576(RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v7, 0LL);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__SetEntryAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  float v6; // s1
  TitleInfoEventRaidStatusComponent_c *v7; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v9; // d0
  float v10; // s2
  float v11; // [xsp+0h] [xbp-30h]

  if ( (byte_49FC627 & 1) == 0 )
  {
    sub_1B64870(&TitleInfoEventRaidStatusComponent_TypeInfo, method);
    sub_1B64870(&StringLiteral_6019/*"EntryAnim"*/, v3);
    byte_49FC627 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(&v6 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = v6;
  this->fields.inPos.fields.z = 0.0;
  v7 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v11 = v6;
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v6 = v11;
    v7 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v7->static_fields;
  v9.n64_u32[0] = 0;
  v9.n64_f32[1] = v6;
  v10 = static_fields[11].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32(static_fields[10], v9);
  this->fields.outPos.fields.z = v10 + 0.0;
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
    sub_1B64ACC(transform, v5);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
    transform,
    transform->klass[1]._1.element_class,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6019/*"EntryAnim"*/,
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
  System_String_o *v9; // x0
  System_String_o *v10; // x21
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = iconId;
  if ( (byte_49FC620 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, sprite);
    sub_1B64870(&StringLiteral_16056/*"_"*/, v8);
    byte_49FC620 = 1;
  }
  if ( (iconId & 0x80000000) != 0 )
    goto LABEL_12;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_61394836(prefix, (System_String_o *)StringLiteral_16056/*"_"*/, v9, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v10, 0LL) )
  {
LABEL_12:
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(sprite, prefix, 0LL);
  }
}


void __fastcall TitleInfoEventRaidStatusComponent__SetHpBarPosition(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  __int64 v4; // x1
  UnityEngine_Component_o *raidBossHp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v7; // [xsp+0h] [xbp-30h] BYREF

  v7.fields.z = 0.0;
  *(_QWORD *)&v7.fields.x = 0LL;
  if ( !byte_49F9201 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F9201 = 1;
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity && EventBossStatusUiEntity__TryGetHpBarPos(eventBossStatusUiEntity, &v7, 0LL) )
  {
    raidBossHp = (UnityEngine_Component_o *)this->fields.raidBossHp;
    if ( !raidBossHp )
      sub_1B64ACC(0LL, v4);
    gameObject = UnityEngine_Component__get_gameObject(raidBossHp, 0LL);
    GameObjectExtensions__SetLocalPosition(gameObject, v7, 0LL);
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

  if ( (byte_49FC623 & 1) == 0 )
  {
    sub_1B64870(&TitleInfoEventRaidStatusComponent_TypeInfo, label);
    byte_49FC623 = 1;
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
    *(UnityEngine_Color_o *)&r = EventBossStatusUiEntity__GetStatusBattleColor(
                                   eventBossStatusUiEntity,
                                   v5->static_fields->RAIDBOSS_OUTLINE_COLOR_BATTLE,
                                   0LL);
    if ( label )
      goto LABEL_7;
LABEL_11:
    sub_1B64ACC(v5, label);
  }
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
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


void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineBattleColor_35618216(
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
      sub_1B64ACC(v5, v6);
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
    sub_1B64ACC(eventBossStatusUiEntity, label);
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

  if ( (byte_49FC624 & 1) == 0 )
  {
    sub_1B64870(&TitleInfoEventRaidStatusComponent_TypeInfo, label);
    byte_49FC624 = 1;
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
    *(UnityEngine_Color_o *)&r = EventBossStatusUiEntity__GetStatusLastColor(
                                   eventBossStatusUiEntity,
                                   v5->static_fields->RAIDBOSS_OUTLINE_COLOR_LAST,
                                   0LL);
    if ( label )
      goto LABEL_7;
LABEL_11:
    sub_1B64ACC(v5, label);
  }
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
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


void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineLastColor_35619040(
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

  if ( (byte_49FC625 & 1) == 0 )
  {
    sub_1B64870(&TitleInfoEventRaidStatusComponent_TypeInfo, label);
    byte_49FC625 = 1;
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
    *(UnityEngine_Color_o *)&r = EventBossStatusUiEntity__GetStatusWinColor(
                                   eventBossStatusUiEntity,
                                   v5->static_fields->RAIDBOSS_OUTLINE_COLOR_WIN,
                                   0LL);
    if ( label )
      goto LABEL_7;
LABEL_11:
    sub_1B64ACC(v5, label);
  }
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
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


void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineWinColor_35619100(
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  TitleInfoEventRaidStatusComponent_c *v8; // x0
  UISprite_o *subGroupBattleId; // x20
  struct EventRaidEntity_o *eventRaidEntity; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  TitleInfoEventRaidStatusComponent_c *v18; // x0
  UISprite_o *v19; // x19
  System_String_o *v20; // x20
  Il2CppObject *v21; // x0
  System_String_o *v22; // x20
  int v24; // [xsp+8h] [xbp-38h] BYREF
  int32_t subGroupIndex; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FC630 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, method);
    sub_1B64870(&int_TypeInfo, v6);
    sub_1B64870(&TitleInfoEventRaidStatusComponent_TypeInfo, v7);
    byte_49FC630 = 1;
  }
  v8 = TitleInfoEventRaidStatusComponent_TypeInfo;
  subGroupBattleId = this->fields.subGroupBattleId;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    sub_1B64ACC(v8, method);
  RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID;
  subGroupIndex = eventRaidEntity->fields.subGroupIndex;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &subGroupIndex, v2, v3, v4);
  v13 = System_String__Format(RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID, v12, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventUI(subGroupBattleId, v13, 0LL) )
  {
    return 1;
  }
  else
  {
    v18 = TitleInfoEventRaidStatusComponent_TypeInfo;
    v19 = this->fields.subGroupBattleId;
    if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v18 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    v20 = v18->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID;
    v24 = 1;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v14, v15, v16);
    v22 = System_String__Format(v20, v21, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    return AtlasManager__SetEventUI(v19, v22, 0LL);
  }
}


void __fastcall TitleInfoEventRaidStatusComponent__Setup(
        TitleInfoEventRaidStatusComponent_o *this,
        EventRaidEntity_o *eventRaidEntity,
        int32_t warId,
        int32_t currentDay,
        bool isJumbleRaid,
        bool isReprintLastWarRaid,
        const MethodInfo *method)
{
  _BOOL4 v11; // w24
  bool v12; // w25
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  struct EventRaidEntity_o **p_eventRaidEntity; // x20
  struct EventRaidEntity_o *v21; // x8
  UnityEngine_Object_o *gameObject; // x0
  __int64 v23; // x1
  UnityEngine_Object_o *v24; // x22
  System_String_o *v25; // x23
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  UnityEngine_Object_o *v28; // x21
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  UISprite_o *subGroup; // x21
  TitleInfoEventRaidStatusComponent_c *v33; // x0
  System_String_o *RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT; // x22
  const MethodInfo *v35; // x4
  struct EventRaidEntity_o *v36; // x8
  bool v37; // w1
  int v38; // w21
  Il2CppObject *v39; // x20
  Il2CppObject *v40; // x20

  v11 = isJumbleRaid;
  v12 = isReprintLastWarRaid;
  if ( (byte_49FC61D & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, eventRaidEntity);
    sub_1B64870(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, v13);
    sub_1B64870(&Method_DataManager_GetMasterData_EventDetailMaster___, v14);
    sub_1B64870(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v15);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v17);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B64870(&TitleInfoEventRaidStatusComponent_TypeInfo, v19);
    byte_49FC61D = 1;
  }
  this->fields.eventRaidEntity = eventRaidEntity;
  p_eventRaidEntity = &this->fields.eventRaidEntity;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventRaidEntity,
    (int32_t)eventRaidEntity,
    warId,
    currentDay);
  v21 = this->fields.eventRaidEntity;
  this->fields.warId = warId;
  this->fields.isJumbleRaid = v11;
  this->fields.isReprintLastWarRaid = v12;
  if ( v21 )
  {
    this->fields.currentDay = currentDay;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_49;
    v24 = gameObject;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0LL);
    if ( !eventRaidEntity )
      goto LABEL_49;
    v25 = (System_String_o *)gameObject;
    v26 = System_Int32__ToString((int)eventRaidEntity + 20, 0LL);
    v27 = System_String__Concat_61383576(v25, v26, 0LL);
    UnityEngine_Object__set_name(v24, v27, 0LL);
    gameObject = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)gameObject,
                                           (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                           eventRaidEntity->fields.eventId,
                                           (const MethodInfo_30D6180 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !gameObject )
      goto LABEL_49;
    v28 = gameObject;
    this->fields.isRaidDefeatCount = EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)gameObject,
                                           (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    if ( !gameObject )
      goto LABEL_49;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  (EventBossStatusUiMaster_o *)gameObject,
                                  v28->fields.m_CachedPtr,
                                  this->fields.currentDay,
                                  0LL);
    this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventBossStatusUiEntity,
      (int32_t)EntityFromEventIdAndIndex,
      v30,
      v31);
    v11 = this->fields.isJumbleRaid;
  }
  if ( v11 )
  {
    subGroup = this->fields.subGroup;
    v33 = TitleInfoEventRaidStatusComponent_TypeInfo;
    if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v33 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT = v33->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(subGroup, RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT, 0LL);
    AtlasManager__SetEventUI(
      this->fields.subGroupBase,
      TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK,
      0LL);
    gameObject = (UnityEngine_Object_o *)AtlasManager__SetEventUI(
                                           this->fields.subGroupPartition,
                                           TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION,
                                           0LL);
    v36 = this->fields.eventRaidEntity;
    if ( !v36 )
      goto LABEL_49;
    TitleInfoEventRaidStatusComponent__SetEventIcon(
      (TitleInfoEventRaidStatusComponent_o *)gameObject,
      this->fields.raidBattle,
      TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_STATUS_01,
      v36->fields.iconId,
      v35);
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
      v37 = 0;
    }
    else
    {
      if ( this->fields.subGroupCount >= 1 )
      {
        v38 = 0;
        while ( 1 )
        {
          gameObject = (UnityEngine_Object_o *)this->fields.subGroupBase;
          if ( !gameObject )
            goto LABEL_49;
          v39 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v40 = UnityEngine_Object__Instantiate_object_(
                  v39,
                  (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v40, 0LL, 0LL) )
          {
            GameObjectExtensions__SafeSetParent(
              (UnityEngine_GameObject_o *)v40,
              (UnityEngine_Component_o *)this->fields.subGroupGrid,
              0LL);
            if ( ++v38 < this->fields.subGroupCount )
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
      v37 = 1;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v37, 0LL);
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
    sub_1B64ACC(gameObject, v23);
  }
}


void __fastcall TitleInfoEventRaidStatusComponent__StartClearAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  TitleInfoEventRaidStatusComponent_c *v10; // x0
  _BOOL4 isJumbleRaid; // w22
  float y; // s8
  struct TitleInfoEventRaidStatusComponent_StaticFields *static_fields; // x8
  __int64 v14; // x9
  __int64 v15; // x10
  float v16; // s0
  __int64 v17; // x10
  float v18; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FC629 & 1) == 0 )
  {
    sub_1B64870(&TitleInfoEventRaidStatusComponent_TypeInfo, callback);
    sub_1B64870(&StringLiteral_2369/*"AnimFrameOutEnd"*/, v6);
    byte_49FC629 = 1;
  }
  this->fields.clearAnimCallBack = callback;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.clearAnimCallBack,
    (int32_t)callback,
    (int32_t)method,
    v3);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B64ACC(0LL, v8);
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = localPosition.fields.y;
  this->fields.inPos.fields.z = 0.0;
  v10 = TitleInfoEventRaidStatusComponent_TypeInfo;
  isJumbleRaid = this->fields.isJumbleRaid;
  y = localPosition.fields.y;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v10 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  static_fields = v10->static_fields;
  v14 = 100LL;
  if ( !isJumbleRaid )
    v14 = 88LL;
  v15 = 84LL;
  if ( isJumbleRaid )
    v15 = 96LL;
  v16 = *(float *)((char *)&static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE + v15);
  v17 = 80LL;
  if ( isJumbleRaid )
    v17 = 92LL;
  v18 = *(float *)((char *)&static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE + v14) + 0.0;
  this->fields.outPos.fields.x = *(float *)((char *)&static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE + v17) + 0.0;
  this->fields.outPos.fields.y = y + v16;
  this->fields.outPos.fields.z = v18;
  TitleInfoEventRaidStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_2369/*"AnimFrameOutEnd"*/, v9);
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
  if ( !byte_49F9201 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, pos);
    byte_49F9201 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  int32_t eventId; // w20
  int32_t day; // w21
  __int64 gameObject; // x0
  const MethodInfo *v21; // x1
  DataManager_o *v22; // x24
  struct EventRaidEntity_o *v23; // x8
  int64_t v24; // x23
  int64_t maxHp; // x28
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX_LAST; // x29
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  EventRaidMaster_o *v29; // x26
  struct EventRaidEntity_o *v30; // x8
  int32_t RaidGroupDeadQuestId; // w0
  int32_t v32; // w24
  struct EventRaidEntity_o *v33; // x8
  UILabel_o *raidBossName; // x25
  UnityEngine_Behaviour_o *subGroupBattleId; // x25
  const MethodInfo *v36; // x1
  UnityEngine_GameObject_o *v37; // x25
  struct EventRaidEntity_o *v38; // x8
  __int64 startedAt; // x22
  struct EventRaidEntity_o *v40; // x8
  UIWidget_o *raidBossIconSp; // x25
  bool v42; // w1
  struct EventRaidEntity_o *v43; // x8
  UnityEngine_Behaviour_o *v44; // x25
  __int64 endedAt; // x22
  UILabel_o *v46; // x25
  const MethodInfo *v47; // x3
  UILabel_o *raidBossHpHead; // x25
  UILabel_o *raidBossHp; // x27
  System_String_o *v50; // x25
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  struct EventRaidEntity_o *v55; // x8
  int32_t SubGroupNow; // w27
  int32_t v57; // w26
  int v58; // w22
  System_Collections_Generic_List_object__o *v59; // x28
  int32_t v60; // w29
  UnityEngine_GameObject_o *v61; // x25
  UnityEngine_Object_o *Child; // x25
  UnityEngine_GameObject_o *v63; // x25
  TitleInfoEventRaidStatusComponent_c *v64; // x0
  const MethodInfo *v65; // x4
  UISprite_o *raidBattle; // x20
  struct EventRaidEntity_o *v67; // x8
  TitleInfoEventRaidStatusComponent_c *v68; // x0
  __int64 v69; // x8
  struct EventRaidEntity_o *v70; // x8
  System_String_o *v71; // x0
  System_String_o *v72; // x0
  const MethodInfo *v73; // x2
  char v74; // [xsp+4h] [xbp-8Ch]
  System_String_o *v75; // [xsp+18h] [xbp-78h]
  int64_t v76; // [xsp+20h] [xbp-70h] BYREF
  TotalEventRaidEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_49FC621 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method);
    sub_1B64870(&Method_DataManager_GetMasterData_EventRaidMaster___, v3);
    sub_1B64870(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v4);
    sub_1B64870(&long_TypeInfo, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Transform__get_Count__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_Transform__get_Item__, v7);
    sub_1B64870(&LocalizationManager_TypeInfo, v8);
    sub_1B64870(&NetworkManager_TypeInfo, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B64870(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v12);
    sub_1B64870(&TitleInfoEventRaidStatusComponent_TypeInfo, v13);
    sub_1B64870(&StringLiteral_5654/*"EVENT_RAID_REST_COUNT_AFTER"*/, v14);
    sub_1B64870(&StringLiteral_5655/*"EVENT_RAID_REST_COUNT_BEFORE"*/, v15);
    sub_1B64870(&StringLiteral_1/*""*/, v16);
    byte_49FC621 = 1;
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
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_136;
  v22 = (DataManager_o *)gameObject;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !gameObject )
    goto LABEL_136;
  gameObject = TotalEventRaidMaster__TryGetEntity((TotalEventRaidMaster_o *)gameObject, &entity, eventId, day, 0LL);
  v23 = this->fields.eventRaidEntity;
  if ( !v23 )
    goto LABEL_136;
  v24 = entity ? entity->fields.totalDamage : 0LL;
  gameObject = (__int64)this->fields.raidBossIconSp;
  if ( !gameObject )
    goto LABEL_136;
  maxHp = v23->fields.maxHp;
  RAIDBOSS_ICON_SPNAME_PREFIX_LAST = (System_String_o *)StringLiteral_1/*""*/;
  gameObject = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)gameObject,
                          (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !gameObject )
    goto LABEL_136;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 1, 0LL);
  TitleInfoEventRaidStatusComponent__SetOutlineBattleColor_35618216(this, v27);
  TitleInfoEventRaidStatusComponent__SetHpBarPosition(this, v28);
  if ( day == this->fields.currentDay )
  {
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            v22,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
    if ( !this->fields.eventRaidEntity )
      goto LABEL_136;
    v29 = (EventRaidMaster_o *)gameObject;
    gameObject = EventRaidEntity__IsJumbleSingleRaid(this->fields.eventRaidEntity, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      v30 = this->fields.eventRaidEntity;
      if ( !v30 || !v29 )
        goto LABEL_136;
      RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(v29, eventId, v30->fields.groupIndex, 0LL);
    }
    else
    {
      if ( !v29 )
        goto LABEL_136;
      RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v29, eventId, day, 0LL);
    }
    v32 = RaidGroupDeadQuestId;
    if ( RaidGroupDeadQuestId < 1 )
    {
      gameObject = 0LL;
    }
    else
    {
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !gameObject )
        goto LABEL_136;
      gameObject = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)gameObject, v32, -1, 0, 0LL);
    }
    v74 = gameObject;
    if ( this->fields.isJumbleRaid )
    {
      v33 = this->fields.eventRaidEntity;
      if ( !v33 )
        goto LABEL_136;
      gameObject = (__int64)this->fields.raidBossName;
      if ( !gameObject )
        goto LABEL_136;
      UILabel__set_text((UILabel_o *)gameObject, v33->fields.name, 0LL);
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
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      if ( !raidBossName )
        goto LABEL_136;
      UILabel__SetCondensedScale(
        raidBossName,
        TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
        0LL);
      subGroupBattleId = (UnityEngine_Behaviour_o *)this->fields.subGroupBattleId;
      gameObject = TitleInfoEventRaidStatusComponent__SetSubGroupBattleIdIcon(this, v36);
      if ( !subGroupBattleId )
        goto LABEL_136;
      UnityEngine_Behaviour__set_enabled(subGroupBattleId, gameObject & 1, 0LL);
      gameObject = (__int64)this->fields.subGroupBattleId;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !this->fields.eventRaidEntity )
        goto LABEL_136;
      v37 = (UnityEngine_GameObject_o *)gameObject;
      gameObject = EventRaidEntity__IsJumbleSingleRaid(this->fields.eventRaidEntity, 0LL);
      if ( !v37 )
        goto LABEL_136;
      UnityEngine_GameObject__SetActive(v37, (gameObject & 1) == 0, 0LL);
      gameObject = (__int64)this->fields.subGroupBattleId;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
                     gameObject,
                     *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
      v38 = this->fields.eventRaidEntity;
      if ( !v38 )
        goto LABEL_136;
      startedAt = v38->fields.startedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      gameObject = NetworkManager__getTime(0LL);
      if ( startedAt <= gameObject )
      {
        raidBossHpHead = this->fields.raidBossHpHead;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5655/*"EVENT_RAID_REST_COUNT_BEFORE"*/, 0LL);
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
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_5654/*"EVENT_RAID_REST_COUNT_AFTER"*/, 0LL);
        v76 = maxHp - v24;
        v54 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v76, v51, v52, v53);
        gameObject = (__int64)System_String__Format(v50, v54, 0LL);
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
        v55 = this->fields.eventRaidEntity;
        if ( !v55 || !gameObject )
          goto LABEL_136;
        v42 = v55->fields.maxHp > v24;
      }
      else
      {
        v40 = this->fields.eventRaidEntity;
        if ( !v40 )
          goto LABEL_136;
        this->fields.targetTime = v40->fields.startedAt;
        TitleInfoEventRaidStatusComponent__RefreshTimeStr(this, v21);
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
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
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
        v42 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v42, 0LL);
      v75 = RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
      SubGroupNow = EventRaidMaster__GetSubGroupNow(v29, this->fields.eventRaidEntity, 0LL);
      gameObject = EventRaidMaster__GetSubGroupMax(v29, this->fields.eventRaidEntity, 0LL);
      if ( !this->fields.subGroupGrid )
        goto LABEL_136;
      v57 = gameObject;
      gameObject = (__int64)UIGrid__GetChildList(this->fields.subGroupGrid, 0LL);
      if ( !gameObject )
        goto LABEL_136;
      v58 = *(_DWORD *)(gameObject + 24);
      v59 = (System_Collections_Generic_List_object__o *)gameObject;
      if ( v58 >= 1 )
      {
        v60 = 0;
        do
        {
          gameObject = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v59,
                                  v60,
                                  (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_Transform__get_Item__);
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_136;
          v61 = (UnityEngine_GameObject_o *)gameObject;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v60 < v57, 0LL);
          Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(v61, 0, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          gameObject = UnityEngine_Object__op_Inequality(Child, 0LL, 0LL);
          if ( (gameObject & 1) != 0 )
          {
            if ( !Child )
              goto LABEL_136;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Child, 0LL);
            if ( !gameObject )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v60 >= SubGroupNow, 0LL);
          }
        }
        while ( v58 != ++v60 );
      }
      gameObject = (__int64)this->fields.subGroupPartition;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v75;
      v63 = (UnityEngine_GameObject_o *)gameObject;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      if ( !v63 )
        goto LABEL_136;
      UnityEngine_GameObject__SetActive(
        v63,
        v57 > TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_SUB_GROUP_PARTITION_INDEX,
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
      v43 = this->fields.eventRaidEntity;
      if ( !v43 )
        goto LABEL_136;
      v44 = (UnityEngine_Behaviour_o *)this->fields.raidBossHp;
      endedAt = v43->fields.endedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      gameObject = NetworkManager__getTime(0LL);
      if ( !v44 )
        goto LABEL_136;
      UnityEngine_Behaviour__set_enabled(v44, endedAt > gameObject, 0LL);
      v46 = this->fields.raidBossHp;
      gameObject = (__int64)TitleInfoEventRaidStatusComponent__GetRestCountText(this, maxHp - v24, v24, v47);
      if ( !v46 )
        goto LABEL_136;
      UILabel__set_text(v46, (System_String_o *)gameObject, 0LL);
    }
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !gameObject )
      goto LABEL_136;
    if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)gameObject, v32, 0, 0LL) )
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
          if ( (v74 & 1) != 0 )
          {
            if ( !gameObject )
              goto LABEL_136;
            goto LABEL_111;
          }
          if ( !gameObject )
            goto LABEL_136;
          if ( *(_QWORD *)(gameObject + 40) <= v24 )
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
                j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
              v67 = this->fields.eventRaidEntity;
              if ( !v67 )
                goto LABEL_136;
              TitleInfoEventRaidStatusComponent__SetEventIcon(
                (TitleInfoEventRaidStatusComponent_o *)gameObject,
                raidBattle,
                TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_STATUS_02,
                v67->fields.iconId,
                v65);
            }
            v68 = TitleInfoEventRaidStatusComponent_TypeInfo;
            if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
              v68 = TitleInfoEventRaidStatusComponent_TypeInfo;
            }
            RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v68->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
            TitleInfoEventRaidStatusComponent__SetOutlineLastColor_35619040(this, v21);
            goto LABEL_121;
          }
        }
      }
      v64 = TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
        v64 = TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v64->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE;
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
        TitleInfoEventRaidStatusComponent__SetOutlineWinColor_35619100(this, v21);
      gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
        gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      v69 = 8LL;
    }
    else
    {
      gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
        gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      v69 = 16LL;
    }
    RAIDBOSS_ICON_SPNAME_PREFIX_LAST = *(System_String_o **)(*(_QWORD *)(gameObject + 184) + v69);
  }
  v70 = this->fields.eventRaidEntity;
  if ( !v70 )
LABEL_136:
    sub_1B64ACC(gameObject, v21);
  v71 = System_Int32__ToString((int)v70 + 48, 0LL);
  v72 = System_String__Concat_61383576(RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v71, 0LL);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v72, v73);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t RaidDeadQuestId; // w20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_49FC626 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_EventRaidMaster___, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_1B64870(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    sub_1B64870(&Method_TitleInfoEventRaidStatusComponent_onClick__, v5);
    byte_49FC626 = 1;
  }
  if ( this->fields.eventRaidEntity )
  {
    if ( this->fields.isReprintLastWarRaid )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    sub_1B64ACC(Instance, v8);
  }
LABEL_14:
  v10 = Method_TitleInfoEventRaidStatusComponent_onClick__;
  if ( (*((_BYTE *)Method_TitleInfoEventRaidStatusComponent_onClick__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B64888(Method_TitleInfoEventRaidStatusComponent_onClick__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B64854(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0LL);
}


void __fastcall TitleInfoEventRaidStatusComponent__setClickCallBack(
        TitleInfoEventRaidStatusComponent_o *this,
        System_Action_o *cb,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.clickCallBack = cb;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.clickCallBack, (int32_t)cb, (int32_t)method, v3);
}