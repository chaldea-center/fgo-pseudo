void __fastcall TitleInfoEventRaidStatusComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  struct TitleInfoEventRaidStatusComponent_StaticFields *v35; // x0
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  TitleInfoEventRaidStatusComponent_c *v39; // x8
  struct TitleInfoEventRaidStatusComponent_StaticFields *v40; // x9
  struct TitleInfoEventRaidStatusComponent_StaticFields *v41; // x9
  struct TitleInfoEventRaidStatusComponent_StaticFields *v42; // x9
  struct TitleInfoEventRaidStatusComponent_StaticFields *v43; // x9

  if ( (byte_4A590C8 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_22762/*"raid_boss_status_battle_"*/);
    sub_1B885B0(&StringLiteral_22764/*"raid_boss_status_lose_"*/);
    sub_1B885B0(&StringLiteral_19227/*"event_raid_status_02"*/);
    sub_1B885B0(&StringLiteral_19228/*"event_raid_sub_group_back"*/);
    sub_1B885B0(&StringLiteral_22763/*"raid_boss_status_last_"*/);
    sub_1B885B0(&StringLiteral_19230/*"event_raid_sub_group_front"*/);
    sub_1B885B0(&StringLiteral_19229/*"event_raid_sub_group_battle_{0:00}"*/);
    sub_1B885B0(&StringLiteral_19226/*"event_raid_status_01"*/);
    sub_1B885B0(&StringLiteral_22765/*"raid_boss_status_win_"*/);
    sub_1B885B0(&StringLiteral_19231/*"event_raid_sub_group_partition"*/);
    byte_4A590C8 = 1;
  }
  TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE = (struct System_String_o *)StringLiteral_22762/*"raid_boss_status_battle_"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TitleInfoEventRaidStatusComponent_TypeInfo->static_fields,
    StringLiteral_22762/*"raid_boss_status_battle_"*/,
    v1,
    v2);
  v3 = StringLiteral_22765/*"raid_boss_status_win_"*/;
  static_fields = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_WIN = (struct System_String_o *)StringLiteral_22765/*"raid_boss_status_win_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_WIN, v3, v5, v6);
  v7 = StringLiteral_22764/*"raid_boss_status_lose_"*/;
  v8 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v8->RAIDBOSS_ICON_SPNAME_PREFIX_LOSE = (struct System_String_o *)StringLiteral_22764/*"raid_boss_status_lose_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->RAIDBOSS_ICON_SPNAME_PREFIX_LOSE, v7, v9, v10);
  v11 = StringLiteral_22763/*"raid_boss_status_last_"*/;
  v12 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v12->RAIDBOSS_ICON_SPNAME_PREFIX_LAST = (struct System_String_o *)StringLiteral_22763/*"raid_boss_status_last_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v11, v13, v14);
  v15 = StringLiteral_19230/*"event_raid_sub_group_front"*/;
  v16 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v16->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT = (struct System_String_o *)StringLiteral_19230/*"event_raid_sub_group_front"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT, v15, v17, v18);
  v19 = StringLiteral_19228/*"event_raid_sub_group_back"*/;
  v20 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v20->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK = (struct System_String_o *)StringLiteral_19228/*"event_raid_sub_group_back"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK, v19, v21, v22);
  v23 = StringLiteral_19231/*"event_raid_sub_group_partition"*/;
  v24 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v24->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION = (struct System_String_o *)StringLiteral_19231/*"event_raid_sub_group_partition"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION, v23, v25, v26);
  v27 = StringLiteral_19229/*"event_raid_sub_group_battle_{0:00}"*/;
  v28 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v28->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID = (struct System_String_o *)StringLiteral_19229/*"event_raid_sub_group_battle_{0:00}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID, v27, v29, v30);
  v31 = StringLiteral_19226/*"event_raid_status_01"*/;
  v32 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v32->RAIDBOSS_ICON_SPNAME_STATUS_01 = (struct System_String_o *)StringLiteral_19226/*"event_raid_status_01"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->RAIDBOSS_ICON_SPNAME_STATUS_01, v31, v33, v34);
  v35 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v36 = StringLiteral_19227/*"event_raid_status_02"*/;
  v35->RAIDBOSS_ICON_SPNAME_STATUS_02 = (struct System_String_o *)StringLiteral_19227/*"event_raid_status_02"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v35->RAIDBOSS_ICON_SPNAME_STATUS_02, v36, v37, v38);
  v39 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v40 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&v40->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  v40->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  v41 = v39->static_fields;
  *(_QWORD *)&v41->FRAME_ANIM_OUT_POS_JUMBLE.fields.x = 3281387520LL;
  v41->FRAME_ANIM_OUT_POS_JUMBLE.fields.z = 0.0;
  v42 = v39->static_fields;
  *(_OWORD *)&v42->FRAME_ANIM_DURATION = xmmword_BB4B00;
  *(_QWORD *)&v42->ICON_MASK_COLOR.fields.b = 0x3F8000003F000000LL;
  v43 = v39->static_fields;
  *(_QWORD *)&v43->JUMBLE_TERMINAL_REFRESH_TIME_OFFSET = 0x500000003LL;
  v43->RAIDBOSS_OUTLINE_COLOR_BATTLE = (struct UnityEngine_Color_o)xmmword_BB5430;
  v43->TITLE_LABEL_BASE_WIDTH = 120;
  v39->static_fields->RAIDBOSS_OUTLINE_COLOR_WIN = (struct UnityEngine_Color_o)xmmword_BB4510;
  v39->static_fields->RAIDBOSS_OUTLINE_COLOR_LAST = (struct UnityEngine_Color_o)xmmword_BB43C0;
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
  EventRaidEntity_o *eventRaidEntity; // x0
  struct System_Action_o *clearAnimCallBack; // x8
  struct EventRaidEntity_o *v6; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX_WIN; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  System_String_o *v12; // x1

  if ( (byte_4A590C1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_18004/*"clearAnimFinised"*/);
    byte_4A590C1 = 1;
  }
  if ( this->fields.isJumbleRaid )
  {
    eventRaidEntity = this->fields.eventRaidEntity;
    if ( eventRaidEntity )
    {
      if ( EventRaidEntity__IsJumbleSingleRaid(eventRaidEntity, 0LL) )
        goto LABEL_9;
      eventRaidEntity = (EventRaidEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( eventRaidEntity )
      {
        eventRaidEntity = (EventRaidEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)eventRaidEntity,
                                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
    sub_1B8880C(eventRaidEntity, method);
  }
  TitleInfoEventRaidStatusComponent__SetOutlineWinColor(this, this->fields.raidBossHp, v2);
  eventRaidEntity = (EventRaidEntity_o *)TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
  v6 = this->fields.eventRaidEntity;
  if ( !v6 )
    goto LABEL_19;
  RAIDBOSS_ICON_SPNAME_PREFIX_WIN = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_WIN;
  v8 = System_Int32__ToString((int)v6 + 48, 0LL);
  v9 = System_String__Concat_61707032(RAIDBOSS_ICON_SPNAME_PREFIX_WIN, v8, 0LL);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v9, v10);
  if ( this->fields.clearAnimCallBack )
    v12 = (System_String_o *)StringLiteral_18004/*"clearAnimFinised"*/;
  else
    v12 = 0LL;
  TitleInfoEventRaidStatusComponent__FrameIn(this, v12, v11);
}


void __fastcall TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
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

  if ( (byte_4A590C4 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1B885B0(&Method_UITweener_Begin_TweenAlpha___);
    byte_4A590C4 = 1;
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
          (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v11 )
    sub_1B8880C(0LL, v12);
  LODWORD(v11[2].klass) = tweenMethod;
  *(float *)&v11[8].klass = from;
  *((float *)&v11[8].klass + 1) = to;
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
  int32_t v22; // w2
  int32_t v23; // w3
  TitleInfoEventRaidStatusComponent_o *v24; // x0
  const MethodInfo *v25; // x3
  TitleInfoEventRaidStatusComponent_o *v26; // x0
  const MethodInfo *v27; // x3
  __int64 v28; // [xsp+0h] [xbp-40h]

  if ( (byte_4A590C2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1B885B0(&Method_UITweener_Begin_TweenPosition___);
    byte_4A590C2 = 1;
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
      v8 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)gameObject,
                                                    0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v8, (UnityEngine_GameObject_o *)v8, 0.0, 1.0, 6, v9);
    }
    raidBossHpHead = (UnityEngine_Object_o *)this->fields.raidBossHpHead;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raidBossHpHead, 0LL, 0LL) )
    {
      gameObject = (char *)this->fields.raidBossHpHead;
      if ( !gameObject )
        goto LABEL_23;
      v11 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v11, (UnityEngine_GameObject_o *)v11, 0.0, 1.0, 6, v12);
    }
  }
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
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
                         (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenPosition___);
  v28 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !gameObject )
    goto LABEL_23;
  v16 = gameObject;
  *((_DWORD *)gameObject + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)gameObject + 16) = v28;
  z = this->fields.inPos.fields.z;
  v18 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)gameObject + 8) = 6;
  *((float *)gameObject + 37) = z;
  *(_QWORD *)(gameObject + 140) = v18;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v16 + 10) = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 80), (int32_t)v19, v20, v21);
  *((_QWORD *)v16 + 11) = callFinished;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 88), (int32_t)callFinished, v22, v23);
  gameObject = (char *)this->fields.raidBossIconSp;
  if ( !gameObject )
LABEL_23:
    sub_1B8880C(gameObject, v6);
  v24 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0LL);
  TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v24, (UnityEngine_GameObject_o *)v24, 0.0, 1.0, 6, v25);
  if ( this->fields.isRaidDefeatCount )
  {
    gameObject = (char *)this->fields.raidBossHp;
    if ( gameObject )
    {
      v26 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v26, (UnityEngine_GameObject_o *)v26, 0.0, 1.0, 6, v27);
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
  int32_t v16; // w2
  int32_t v17; // w3
  TitleInfoEventRaidStatusComponent_o *v18; // x0
  const MethodInfo *v19; // x3
  TitleInfoEventRaidStatusComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *raidBossName; // x20
  TitleInfoEventRaidStatusComponent_o *v23; // x0
  const MethodInfo *v24; // x3
  UnityEngine_Object_o *raidBossHpHead; // x20
  TitleInfoEventRaidStatusComponent_o *v26; // x0
  const MethodInfo *v27; // x3
  __int64 v28; // [xsp+0h] [xbp-40h]

  if ( (byte_4A590C3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1B885B0(&Method_UITweener_Begin_TweenPosition___);
    byte_4A590C3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
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
                             (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenPosition___);
  v28 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !raidBossIconSp )
    goto LABEL_22;
  v10 = raidBossIconSp;
  *((_DWORD *)raidBossIconSp + 34) = LODWORD(this->fields.inPos.fields.z);
  *((_QWORD *)raidBossIconSp + 16) = v28;
  z = this->fields.outPos.fields.z;
  v12 = *(_QWORD *)&this->fields.outPos.fields.x;
  *((_DWORD *)raidBossIconSp + 8) = 2;
  *((float *)raidBossIconSp + 37) = z;
  *(_QWORD *)(raidBossIconSp + 140) = v12;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v10 + 10) = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 80), (int32_t)v13, v14, v15);
  *((_QWORD *)v10 + 11) = callFinished;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 88), (int32_t)callFinished, v16, v17);
  raidBossIconSp = (char *)this->fields.raidBossIconSp;
  if ( !raidBossIconSp )
    goto LABEL_22;
  v18 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)raidBossIconSp,
                                                 0LL);
  TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v18, (UnityEngine_GameObject_o *)v18, 1.0, 0.0, 2, v19);
  if ( this->fields.isRaidDefeatCount )
  {
    raidBossIconSp = (char *)this->fields.raidBossHp;
    if ( !raidBossIconSp )
      goto LABEL_22;
    v20 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)raidBossIconSp,
                                                   0LL);
    TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v20, (UnityEngine_GameObject_o *)v20, 1.0, 0.0, 2, v21);
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
      v23 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)raidBossIconSp,
                                                     0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v23, (UnityEngine_GameObject_o *)v23, 1.0, 0.0, 2, v24);
    }
    raidBossHpHead = (UnityEngine_Object_o *)this->fields.raidBossHpHead;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raidBossHpHead, 0LL, 0LL) )
    {
      raidBossIconSp = (char *)this->fields.raidBossHpHead;
      if ( raidBossIconSp )
      {
        v26 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)raidBossIconSp,
                                                       0LL);
        TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v26, (UnityEngine_GameObject_o *)v26, 1.0, 0.0, 2, v27);
        return;
      }
LABEL_22:
      sub_1B8880C(raidBossIconSp, v9);
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
      sub_1B8880C(eventBossStatusUiEntity, method);
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
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  System_String_o *CountFormat; // x20
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *NumberFormat_38394836; // x0
  System_String_o *v12; // x19
  int64_t v14; // [xsp+0h] [xbp-30h] BYREF
  int64_t v15; // [xsp+8h] [xbp-28h] BYREF

  v15 = totalHp;
  if ( (byte_4A590B9 & 1) == 0 )
  {
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5616/*"EVENT_DEFEAT_COUNT_TXT"*/);
    byte_4A590B9 = 1;
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity
    && (CountFormat = EventBossStatusUiEntity__GetCountFormat(eventBossStatusUiEntity, 0LL),
        !System_String__IsNullOrEmpty(CountFormat, 0LL)) )
  {
    v12 = System_Int64__ToString((int64_t)&v15, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    NumberFormat_38394836 = (Il2CppObject *)LocalizationManager__GetNumberFormat_38394836(v12, 0LL);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    CountFormat = LocalizationManager__Get((System_String_o *)StringLiteral_5616/*"EVENT_DEFEAT_COUNT_TXT"*/, 0LL);
    v14 = totalDamage;
    NumberFormat_38394836 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v14, v8, v9, v10);
  }
  return System_String__Format(CountFormat, NumberFormat_38394836, 0LL);
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
    sub_1B8880C(this, eventId);
  return eventRaidEntity->fields.eventId == eventId && eventRaidEntity->fields.day == day;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__MoveUp(
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
  int v14; // s0
  int v15; // s1
  int v16; // s2
  UnityEngine_GameObject_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A590C6 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1B885B0(&Method_UITweener_Begin_TweenPosition___);
    byte_4A590C6 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
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
          (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenPosition___);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (*(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_localPosition(transform, 0LL), !v13) )
LABEL_9:
    sub_1B8880C(transform, v6);
  LODWORD(v13[8].klass) = v14;
  HIDWORD(v13[8].klass) = v15;
  LODWORD(v13[8].monitor) = v16;
  *((float *)&v13[8].monitor + 1) = x;
  *(float *)&v13[9].klass = y + (float)moveY;
  *((float *)&v13[9].klass + 1) = z;
  LODWORD(v13[2].klass) = 2;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13[5].klass = (Il2CppClass *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v13[5], (int32_t)v17, v18, v19);
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
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A590C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A590C5 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5644B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5644B = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 1;
  TopHomeRequest__clearExpirationDate(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall TitleInfoEventRaidStatusComponent__RefreshTimeStr(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x20
  int32_t v4; // w22
  UILabel_o *raidBossStatus; // x19
  unsigned __int64 v6; // x21
  System_String_o *v7; // x20
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  TerminalSceneComponent_o *Instance; // x0
  __int64 v17; // x1
  TitleInfoEventRaidStatusComponent_c *v18; // x0
  TerminalSceneComponent_c *v19; // x0
  const MethodInfo *v20; // x2
  TitleInfoEventRaidStatusComponent_o *v21; // x0
  const MethodInfo *v22; // x1
  System_String_o *v23; // x20
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  int32_t v28; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v29; // [xsp+8h] [xbp-38h] BYREF
  int v30; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A590B5 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_5678/*"EVENT_RAID_NEXT_TIME_1"*/);
    sub_1B885B0(&StringLiteral_5679/*"EVENT_RAID_NEXT_TIME_2"*/);
    byte_4A590B5 = 1;
  }
  if ( this->fields.isJumbleRaid && this->fields.targetTime >= 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = this->fields.targetTime - NetworkManager__getTime(0LL);
    if ( v3 < 1 )
    {
      v18 = TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
        v18 = TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      if ( v3 + v18->static_fields->JUMBLE_TERMINAL_REFRESH_TIME_OFFSET <= 0 )
      {
        Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
        {
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4A5629D )
          {
            sub_1B885B0(&TerminalSceneComponent_TypeInfo);
            byte_4A5629D = 1;
          }
          v19 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v19 = TerminalSceneComponent_TypeInfo;
          }
          Instance = v19->static_fields->mInstance;
          if ( !Instance )
LABEL_31:
            sub_1B8880C(Instance, v17);
          if ( TerminalSceneComponent__IsMapTouchEnabled(Instance, 0LL) )
          {
            this->fields.targetTime = 0LL;
            TitleInfoEventRaidStatusComponent__FrameOut(this, 0LL, v20);
            TitleInfoEventRaidStatusComponent__RefreshTerminal(v21, v22);
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
          v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5679/*"EVENT_RAID_NEXT_TIME_2"*/, 0LL);
          v28 = v4;
          v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v24, v25, v26);
          Instance = (TerminalSceneComponent_o *)System_String__Format(v23, v27, 0LL);
          if ( !raidBossStatus )
            goto LABEL_31;
        }
        else
        {
          v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5678/*"EVENT_RAID_NEXT_TIME_1"*/, 0LL);
          v30 = v6;
          v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v8, v9, v10);
          v29 = v4;
          v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v12, v13, v14);
          Instance = (TerminalSceneComponent_o *)System_String__Format_61721404(v7, v11, v15, 0LL);
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

  if ( (byte_4A590B6 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    byte_4A590B6 = 1;
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
    sub_1B8880C(v6, v7);
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

  if ( (byte_4A590BF & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_4A590BF = 1;
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
  TitleInfoEventRaidStatusComponent__SetOutlineLastColor_35752352(this, v4);
  eventRaidEntity = (UnityEngine_GameObject_o *)TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
  v5 = this->fields.eventRaidEntity;
  if ( !v5 )
LABEL_11:
    sub_1B8880C(eventRaidEntity, method);
  RAIDBOSS_ICON_SPNAME_PREFIX_LAST = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
  v7 = System_Int32__ToString((int)v5 + 48, 0LL);
  v8 = System_String__Concat_61707032(RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v7, 0LL);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__SetEntryAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  float v5; // s1
  TitleInfoEventRaidStatusComponent_c *v6; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v8; // d0
  float v9; // s2
  float v10; // [xsp+0h] [xbp-30h]

  if ( (byte_4A590BE & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_6046/*"EntryAnim"*/);
    byte_4A590BE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = v5;
  this->fields.inPos.fields.z = 0.0;
  v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v10 = v5;
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v5 = v10;
    v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v6->static_fields;
  v8.n64_u32[0] = 0;
  v8.n64_f32[1] = v5;
  v9 = static_fields[11].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32(static_fields[10], v8);
  this->fields.outPos.fields.z = v9 + 0.0;
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
    sub_1B8880C(transform, v4);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
    transform,
    transform->klass[1]._1.element_class,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6046/*"EntryAnim"*/,
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
  System_String_o *v8; // x0
  System_String_o *v9; // x21
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = iconId;
  if ( (byte_4A590B7 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A590B7 = 1;
  }
  if ( (iconId & 0x80000000) != 0 )
    goto LABEL_12;
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  v9 = System_String__Concat_61718292(prefix, (System_String_o *)StringLiteral_16123/*"_"*/, v8, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v9, 0LL) )
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
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity && EventBossStatusUiEntity__TryGetHpBarPos(eventBossStatusUiEntity, &v7, 0LL) )
  {
    raidBossHp = (UnityEngine_Component_o *)this->fields.raidBossHp;
    if ( !raidBossHp )
      sub_1B8880C(0LL, v4);
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

  if ( (byte_4A590BA & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_4A590BA = 1;
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
    sub_1B8880C(v5, label);
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


void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineBattleColor_35751528(
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
      sub_1B8880C(v5, v6);
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
    sub_1B8880C(eventBossStatusUiEntity, label);
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

  if ( (byte_4A590BB & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_4A590BB = 1;
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
    sub_1B8880C(v5, label);
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


void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineLastColor_35752352(
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

  if ( (byte_4A590BC & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_4A590BC = 1;
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
    sub_1B8880C(v5, label);
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


void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineWinColor_35752412(
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
  TitleInfoEventRaidStatusComponent_c *v6; // x0
  UISprite_o *subGroupBattleId; // x20
  struct EventRaidEntity_o *eventRaidEntity; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  TitleInfoEventRaidStatusComponent_c *v16; // x0
  UISprite_o *v17; // x19
  System_String_o *v18; // x20
  Il2CppObject *v19; // x0
  System_String_o *v20; // x20
  int v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t subGroupIndex; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A590C7 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_4A590C7 = 1;
  }
  v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
  subGroupBattleId = this->fields.subGroupBattleId;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    sub_1B8880C(v6, method);
  RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID;
  subGroupIndex = eventRaidEntity->fields.subGroupIndex;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &subGroupIndex, v2, v3, v4);
  v11 = System_String__Format(RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID, v10, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventUI(subGroupBattleId, v11, 0LL) )
  {
    return 1;
  }
  else
  {
    v16 = TitleInfoEventRaidStatusComponent_TypeInfo;
    v17 = this->fields.subGroupBattleId;
    if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v16 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    v18 = v16->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID;
    v22 = 1;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v12, v13, v14);
    v20 = System_String__Format(v18, v19, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    return AtlasManager__SetEventUI(v17, v20, 0LL);
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
  struct EventRaidEntity_o **p_eventRaidEntity; // x20
  struct EventRaidEntity_o *v14; // x8
  UnityEngine_Object_o *gameObject; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *v17; // x22
  System_String_o *v18; // x23
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  UnityEngine_Object_o *v21; // x21
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  UISprite_o *subGroup; // x21
  TitleInfoEventRaidStatusComponent_c *v26; // x0
  System_String_o *RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT; // x22
  const MethodInfo *v28; // x4
  struct EventRaidEntity_o *v29; // x8
  bool v30; // w1
  int v31; // w21
  Il2CppObject *v32; // x20
  Il2CppObject *v33; // x20

  v11 = isJumbleRaid;
  v12 = isReprintLastWarRaid;
  if ( (byte_4A590B4 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_4A590B4 = 1;
  }
  this->fields.eventRaidEntity = eventRaidEntity;
  p_eventRaidEntity = &this->fields.eventRaidEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventRaidEntity,
    (int32_t)eventRaidEntity,
    warId,
    currentDay);
  v14 = this->fields.eventRaidEntity;
  this->fields.warId = warId;
  this->fields.isJumbleRaid = v11;
  this->fields.isReprintLastWarRaid = v12;
  if ( v14 )
  {
    this->fields.currentDay = currentDay;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_49;
    v17 = gameObject;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0LL);
    if ( !eventRaidEntity )
      goto LABEL_49;
    v18 = (System_String_o *)gameObject;
    v19 = System_Int32__ToString((int)eventRaidEntity + 20, 0LL);
    v20 = System_String__Concat_61707032(v18, v19, 0LL);
    UnityEngine_Object__set_name(v17, v20, 0LL);
    gameObject = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)gameObject,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                           eventRaidEntity->fields.eventId,
                                           (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !gameObject )
      goto LABEL_49;
    v21 = gameObject;
    this->fields.isRaidDefeatCount = EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)gameObject,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    if ( !gameObject )
      goto LABEL_49;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  (EventBossStatusUiMaster_o *)gameObject,
                                  v21->fields.m_CachedPtr,
                                  this->fields.currentDay,
                                  0LL);
    this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventBossStatusUiEntity,
      (int32_t)EntityFromEventIdAndIndex,
      v23,
      v24);
    v11 = this->fields.isJumbleRaid;
  }
  if ( v11 )
  {
    subGroup = this->fields.subGroup;
    v26 = TitleInfoEventRaidStatusComponent_TypeInfo;
    if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v26 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT = v26->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT;
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
    v29 = this->fields.eventRaidEntity;
    if ( !v29 )
      goto LABEL_49;
    TitleInfoEventRaidStatusComponent__SetEventIcon(
      (TitleInfoEventRaidStatusComponent_o *)gameObject,
      this->fields.raidBattle,
      TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_STATUS_01,
      v29->fields.iconId,
      v28);
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
      v30 = 0;
    }
    else
    {
      if ( this->fields.subGroupCount >= 1 )
      {
        v31 = 0;
        while ( 1 )
        {
          gameObject = (UnityEngine_Object_o *)this->fields.subGroupBase;
          if ( !gameObject )
            goto LABEL_49;
          v32 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v33 = UnityEngine_Object__Instantiate_object_(
                  v32,
                  (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v33, 0LL, 0LL) )
          {
            GameObjectExtensions__SafeSetParent(
              (UnityEngine_GameObject_o *)v33,
              (UnityEngine_Component_o *)this->fields.subGroupGrid,
              0LL);
            if ( ++v31 < this->fields.subGroupCount )
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
      v30 = 1;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v30, 0LL);
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
    sub_1B8880C(gameObject, v16);
  }
}


void __fastcall TitleInfoEventRaidStatusComponent__StartClearAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  TitleInfoEventRaidStatusComponent_c *v9; // x0
  _BOOL4 isJumbleRaid; // w22
  float y; // s8
  struct TitleInfoEventRaidStatusComponent_StaticFields *static_fields; // x8
  __int64 v13; // x9
  __int64 v14; // x10
  float v15; // s0
  __int64 v16; // x10
  float v17; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A590C0 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_2372/*"AnimFrameOutEnd"*/);
    byte_4A590C0 = 1;
  }
  this->fields.clearAnimCallBack = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.clearAnimCallBack,
    (int32_t)callback,
    (int32_t)method,
    v3);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B8880C(0LL, v7);
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = localPosition.fields.y;
  this->fields.inPos.fields.z = 0.0;
  v9 = TitleInfoEventRaidStatusComponent_TypeInfo;
  isJumbleRaid = this->fields.isJumbleRaid;
  y = localPosition.fields.y;
  if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v9 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  static_fields = v9->static_fields;
  v13 = 100LL;
  if ( !isJumbleRaid )
    v13 = 88LL;
  v14 = 84LL;
  if ( isJumbleRaid )
    v14 = 96LL;
  v15 = *(float *)((char *)&static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE + v14);
  v16 = 80LL;
  if ( isJumbleRaid )
    v16 = 92LL;
  v17 = *(float *)((char *)&static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE + v13) + 0.0;
  this->fields.outPos.fields.x = *(float *)((char *)&static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE + v16) + 0.0;
  this->fields.outPos.fields.y = y + v15;
  this->fields.outPos.fields.z = v17;
  TitleInfoEventRaidStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_2372/*"AnimFrameOutEnd"*/, v8);
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
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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
  __int64 startedAt; // x22
  struct EventRaidEntity_o *v26; // x8
  UIWidget_o *raidBossIconSp; // x25
  bool v28; // w1
  struct EventRaidEntity_o *v29; // x8
  UnityEngine_Behaviour_o *v30; // x25
  __int64 endedAt; // x22
  UILabel_o *v32; // x25
  const MethodInfo *v33; // x3
  UILabel_o *raidBossHpHead; // x25
  UILabel_o *raidBossHp; // x27
  System_String_o *v36; // x25
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  struct EventRaidEntity_o *v41; // x8
  int32_t SubGroupNow; // w27
  int32_t v43; // w26
  int v44; // w22
  System_Collections_Generic_List_object__o *v45; // x28
  int32_t v46; // w29
  UnityEngine_GameObject_o *v47; // x25
  UnityEngine_Object_o *Child; // x25
  UnityEngine_GameObject_o *v49; // x25
  TitleInfoEventRaidStatusComponent_c *v50; // x0
  const MethodInfo *v51; // x4
  UISprite_o *raidBattle; // x20
  struct EventRaidEntity_o *v53; // x8
  TitleInfoEventRaidStatusComponent_c *v54; // x0
  __int64 v55; // x8
  struct EventRaidEntity_o *v56; // x8
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  const MethodInfo *v59; // x2
  char v60; // [xsp+4h] [xbp-8Ch]
  System_String_o *v61; // [xsp+18h] [xbp-78h]
  int64_t v62; // [xsp+20h] [xbp-70h] BYREF
  TotalEventRaidEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A590B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_5680/*"EVENT_RAID_REST_COUNT_AFTER"*/);
    sub_1B885B0(&StringLiteral_5681/*"EVENT_RAID_REST_COUNT_BEFORE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A590B8 = 1;
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
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_136;
  v8 = (DataManager_o *)gameObject;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !gameObject )
    goto LABEL_136;
  gameObject = TotalEventRaidMaster__TryGetEntity((TotalEventRaidMaster_o *)gameObject, &entity, eventId, day, 0LL);
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
                          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !gameObject )
    goto LABEL_136;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 1, 0LL);
  TitleInfoEventRaidStatusComponent__SetOutlineBattleColor_35751528(this, v13);
  TitleInfoEventRaidStatusComponent__SetHpBarPosition(this, v14);
  if ( day == this->fields.currentDay )
  {
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            v8,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___);
    if ( !this->fields.eventRaidEntity )
      goto LABEL_136;
    v15 = (EventRaidMaster_o *)gameObject;
    gameObject = EventRaidEntity__IsJumbleSingleRaid(this->fields.eventRaidEntity, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      v16 = this->fields.eventRaidEntity;
      if ( !v16 || !v15 )
        goto LABEL_136;
      RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(v15, eventId, v16->fields.groupIndex, 0LL);
    }
    else
    {
      if ( !v15 )
        goto LABEL_136;
      RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v15, eventId, day, 0LL);
    }
    v18 = RaidGroupDeadQuestId;
    if ( RaidGroupDeadQuestId < 1 )
    {
      gameObject = 0LL;
    }
    else
    {
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !gameObject )
        goto LABEL_136;
      gameObject = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)gameObject, v18, -1, 0, 0LL);
    }
    v60 = gameObject;
    if ( this->fields.isJumbleRaid )
    {
      v19 = this->fields.eventRaidEntity;
      if ( !v19 )
        goto LABEL_136;
      gameObject = (__int64)this->fields.raidBossName;
      if ( !gameObject )
        goto LABEL_136;
      UILabel__set_text((UILabel_o *)gameObject, v19->fields.name, 0LL);
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
      gameObject = TitleInfoEventRaidStatusComponent__SetSubGroupBattleIdIcon(this, v22);
      if ( !subGroupBattleId )
        goto LABEL_136;
      UnityEngine_Behaviour__set_enabled(subGroupBattleId, gameObject & 1, 0LL);
      gameObject = (__int64)this->fields.subGroupBattleId;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !this->fields.eventRaidEntity )
        goto LABEL_136;
      v23 = (UnityEngine_GameObject_o *)gameObject;
      gameObject = EventRaidEntity__IsJumbleSingleRaid(this->fields.eventRaidEntity, 0LL);
      if ( !v23 )
        goto LABEL_136;
      UnityEngine_GameObject__SetActive(v23, (gameObject & 1) == 0, 0LL);
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
      gameObject = NetworkManager__getTime(0LL);
      if ( startedAt <= gameObject )
      {
        raidBossHpHead = this->fields.raidBossHpHead;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5681/*"EVENT_RAID_REST_COUNT_BEFORE"*/, 0LL);
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
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5680/*"EVENT_RAID_REST_COUNT_AFTER"*/, 0LL);
        v62 = maxHp - v10;
        v40 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v62, v37, v38, v39);
        gameObject = (__int64)System_String__Format(v36, v40, 0LL);
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
        v41 = this->fields.eventRaidEntity;
        if ( !v41 || !gameObject )
          goto LABEL_136;
        v28 = v41->fields.maxHp > v10;
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
        v28 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v28, 0LL);
      v61 = RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
      SubGroupNow = EventRaidMaster__GetSubGroupNow(v15, this->fields.eventRaidEntity, 0LL);
      gameObject = EventRaidMaster__GetSubGroupMax(v15, this->fields.eventRaidEntity, 0LL);
      if ( !this->fields.subGroupGrid )
        goto LABEL_136;
      v43 = gameObject;
      gameObject = (__int64)UIGrid__GetChildList(this->fields.subGroupGrid, 0LL);
      if ( !gameObject )
        goto LABEL_136;
      v44 = *(_DWORD *)(gameObject + 24);
      v45 = (System_Collections_Generic_List_object__o *)gameObject;
      if ( v44 >= 1 )
      {
        v46 = 0;
        do
        {
          gameObject = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v45,
                                  v46,
                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_Transform__get_Item__);
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_136;
          v47 = (UnityEngine_GameObject_o *)gameObject;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v46 < v43, 0LL);
          Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(v47, 0, 0LL);
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
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v46 >= SubGroupNow, 0LL);
          }
        }
        while ( v44 != ++v46 );
      }
      gameObject = (__int64)this->fields.subGroupPartition;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v61;
      v49 = (UnityEngine_GameObject_o *)gameObject;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      if ( !v49 )
        goto LABEL_136;
      UnityEngine_GameObject__SetActive(
        v49,
        v43 > TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_SUB_GROUP_PARTITION_INDEX,
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
      v29 = this->fields.eventRaidEntity;
      if ( !v29 )
        goto LABEL_136;
      v30 = (UnityEngine_Behaviour_o *)this->fields.raidBossHp;
      endedAt = v29->fields.endedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      gameObject = NetworkManager__getTime(0LL);
      if ( !v30 )
        goto LABEL_136;
      UnityEngine_Behaviour__set_enabled(v30, endedAt > gameObject, 0LL);
      v32 = this->fields.raidBossHp;
      gameObject = (__int64)TitleInfoEventRaidStatusComponent__GetRestCountText(this, maxHp - v10, v10, v33);
      if ( !v32 )
        goto LABEL_136;
      UILabel__set_text(v32, (System_String_o *)gameObject, 0LL);
    }
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !gameObject )
      goto LABEL_136;
    if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)gameObject, v18, 0, 0LL) )
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
          if ( (v60 & 1) != 0 )
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
              v53 = this->fields.eventRaidEntity;
              if ( !v53 )
                goto LABEL_136;
              TitleInfoEventRaidStatusComponent__SetEventIcon(
                (TitleInfoEventRaidStatusComponent_o *)gameObject,
                raidBattle,
                TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_STATUS_02,
                v53->fields.iconId,
                v51);
            }
            v54 = TitleInfoEventRaidStatusComponent_TypeInfo;
            if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
              v54 = TitleInfoEventRaidStatusComponent_TypeInfo;
            }
            RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v54->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
            TitleInfoEventRaidStatusComponent__SetOutlineLastColor_35752352(this, v7);
            goto LABEL_121;
          }
        }
      }
      v50 = TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
        v50 = TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v50->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE;
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
        TitleInfoEventRaidStatusComponent__SetOutlineWinColor_35752412(this, v7);
      gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
        gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      v55 = 8LL;
    }
    else
    {
      gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
        gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      v55 = 16LL;
    }
    RAIDBOSS_ICON_SPNAME_PREFIX_LAST = *(System_String_o **)(*(_QWORD *)(gameObject + 184) + v55);
  }
  v56 = this->fields.eventRaidEntity;
  if ( !v56 )
LABEL_136:
    sub_1B8880C(gameObject, v7);
  v57 = System_Int32__ToString((int)v56 + 48, 0LL);
  v58 = System_String__Concat_61707032(RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v57, 0LL);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v58, v59);
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
  int32_t RaidDeadQuestId; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4A590BD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&Method_TitleInfoEventRaidStatusComponent_onClick__);
    byte_4A590BD = 1;
  }
  if ( this->fields.eventRaidEntity )
  {
    if ( this->fields.isReprintLastWarRaid )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    sub_1B8880C(Instance, v5);
  }
LABEL_14:
  v7 = Method_TitleInfoEventRaidStatusComponent_onClick__;
  if ( (*((_BYTE *)Method_TitleInfoEventRaidStatusComponent_onClick__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B885C8(Method_TitleInfoEventRaidStatusComponent_onClick__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
}


void __fastcall TitleInfoEventRaidStatusComponent__setClickCallBack(
        TitleInfoEventRaidStatusComponent_o *this,
        System_Action_o *cb,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.clickCallBack = cb;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickCallBack, (int32_t)cb, (int32_t)method, v3);
}