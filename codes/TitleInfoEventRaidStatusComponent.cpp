void TitleInfoEventRaidStatusComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  int32_t v64; // w1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v72; // x0
  int32_t v73; // w1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  TitleInfoEventRaidStatusComponent_c *v80; // x8
  struct TitleInfoEventRaidStatusComponent_StaticFields *v81; // x9
  struct TitleInfoEventRaidStatusComponent_StaticFields *v82; // x9
  struct TitleInfoEventRaidStatusComponent_StaticFields *v83; // x10
  struct TitleInfoEventRaidStatusComponent_StaticFields *v84; // x9
  struct TitleInfoEventRaidStatusComponent_StaticFields *v85; // x10

  if ( (byte_596F0CB & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_24131/*"raid_boss_status_battle_"*/);
    sub_2213A60(&StringLiteral_24133/*"raid_boss_status_lose_"*/);
    sub_2213A60(&StringLiteral_20140/*"event_raid_status_02"*/);
    sub_2213A60(&StringLiteral_20141/*"event_raid_sub_group_back"*/);
    sub_2213A60(&StringLiteral_24132/*"raid_boss_status_last_"*/);
    sub_2213A60(&StringLiteral_20143/*"event_raid_sub_group_front"*/);
    sub_2213A60(&StringLiteral_20142/*"event_raid_sub_group_battle_{0:00}"*/);
    sub_2213A60(&StringLiteral_20139/*"event_raid_status_01"*/);
    sub_2213A60(&StringLiteral_24134/*"raid_boss_status_win_"*/);
    sub_2213A60(&StringLiteral_20144/*"event_raid_sub_group_partition"*/);
    byte_596F0CB = 1;
  }
  v7 = StringLiteral_24131/*"raid_boss_status_battle_"*/;
  TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE = (struct System_String_o *)StringLiteral_24131/*"raid_boss_status_battle_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TitleInfoEventRaidStatusComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_24134/*"raid_boss_status_win_"*/;
  static_fields = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_WIN = (struct System_String_o *)StringLiteral_24134/*"raid_boss_status_win_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_WIN,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_24133/*"raid_boss_status_lose_"*/;
  v17 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v17->RAIDBOSS_ICON_SPNAME_PREFIX_LOSE = (struct System_String_o *)StringLiteral_24133/*"raid_boss_status_lose_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v17->RAIDBOSS_ICON_SPNAME_PREFIX_LOSE,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_24132/*"raid_boss_status_last_"*/;
  v25 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v25->RAIDBOSS_ICON_SPNAME_PREFIX_LAST = (struct System_String_o *)StringLiteral_24132/*"raid_boss_status_last_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v25->RAIDBOSS_ICON_SPNAME_PREFIX_LAST,
    v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = StringLiteral_20143/*"event_raid_sub_group_front"*/;
  v33 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v33->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT = (struct System_String_o *)StringLiteral_20143/*"event_raid_sub_group_front"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v33->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT,
    v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = StringLiteral_20141/*"event_raid_sub_group_back"*/;
  v41 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v41->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK = (struct System_String_o *)StringLiteral_20141/*"event_raid_sub_group_back"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v41->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK,
    v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = StringLiteral_20144/*"event_raid_sub_group_partition"*/;
  v49 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v49->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION = (struct System_String_o *)StringLiteral_20144/*"event_raid_sub_group_partition"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v49->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION,
    v48,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v56 = StringLiteral_20142/*"event_raid_sub_group_battle_{0:00}"*/;
  v57 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v57->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID = (struct System_String_o *)StringLiteral_20142/*"event_raid_sub_group_battle_{0:00}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v57->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID,
    v56,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v64 = StringLiteral_20139/*"event_raid_status_01"*/;
  v65 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v65->RAIDBOSS_ICON_SPNAME_STATUS_01 = (struct System_String_o *)StringLiteral_20139/*"event_raid_status_01"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v65->RAIDBOSS_ICON_SPNAME_STATUS_01,
    v64,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v72 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v73 = StringLiteral_20140/*"event_raid_status_02"*/;
  v72->RAIDBOSS_ICON_SPNAME_STATUS_02 = (struct System_String_o *)StringLiteral_20140/*"event_raid_status_02"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v72->RAIDBOSS_ICON_SPNAME_STATUS_02,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  v80 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v81 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&v81->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  v81->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  v82 = v80->static_fields;
  *(_QWORD *)&v82->FRAME_ANIM_OUT_POS_JUMBLE.fields.x = 3281387520LL;
  v82->FRAME_ANIM_OUT_POS_JUMBLE.fields.z = 0.0;
  v83 = v80->static_fields;
  *(_OWORD *)&v83->FRAME_ANIM_DURATION = xmmword_E9BB50;
  *(_QWORD *)&v83->ICON_MASK_COLOR.fields.b = 0x3F8000003F000000LL;
  v84 = v80->static_fields;
  v84->RAIDBOSS_OUTLINE_COLOR_BATTLE = (struct UnityEngine_Color_o)xmmword_E9C390;
  *(_QWORD *)&v84->JUMBLE_TERMINAL_REFRESH_TIME_OFFSET = 0x500000003LL;
  v85 = v80->static_fields;
  v84->TITLE_LABEL_BASE_WIDTH = 120;
  v85->RAIDBOSS_OUTLINE_COLOR_WIN = (struct UnityEngine_Color_o)xmmword_E9DC70;
  v80->static_fields->RAIDBOSS_OUTLINE_COLOR_LAST = (struct UnityEngine_Color_o)xmmword_E9BB60;
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
  __int64 v6; // x2
  struct EventRaidEntity_o *v7; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX_WIN; // x20
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  System_String_o *v13; // x1

  if ( (byte_596F0C4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_18795/*"clearAnimFinised"*/);
    byte_596F0C4 = 1;
  }
  if ( this->fields.isJumbleRaid )
  {
    eventRaidEntity = this->fields.eventRaidEntity;
    if ( eventRaidEntity )
    {
      if ( EventRaidEntity__IsJumbleSingleRaid(eventRaidEntity, 0) )
        goto LABEL_9;
      eventRaidEntity = (EventRaidEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( eventRaidEntity )
      {
        eventRaidEntity = (EventRaidEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)eventRaidEntity,
                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
    sub_2213CDC(eventRaidEntity, method);
  }
  TitleInfoEventRaidStatusComponent__SetOutlineWinColor(this, this->fields.raidBossHp, v2);
  eventRaidEntity = (EventRaidEntity_o *)TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, method, v6);
  v7 = this->fields.eventRaidEntity;
  if ( !v7 )
    goto LABEL_19;
  RAIDBOSS_ICON_SPNAME_PREFIX_WIN = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_WIN;
  v9 = System_Int32__ToString((int)v7 + 72, 0);
  v10 = System_String__Concat_75651716(RAIDBOSS_ICON_SPNAME_PREFIX_WIN, v9, 0);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v10, v11);
  if ( this->fields.clearAnimCallBack )
    v13 = (System_String_o *)StringLiteral_18795/*"clearAnimFinised"*/;
  else
    v13 = 0;
  TitleInfoEventRaidStatusComponent__FrameIn(this, v13, v12);
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        UnityEngine_GameObject_o *gameObj,
        float from,
        float to,
        int32_t tweenMethod,
        bool isQuick,
        const MethodInfo *method)
{
  TitleInfoEventRaidStatusComponent_c *v12; // x0
  float FRAME_ANIM_DURATION; // s0
  Il2CppObject *v14; // x0
  __int64 v15; // x1

  if ( (byte_596F0C7 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenAlpha___);
    byte_596F0C7 = 1;
  }
  v12 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, gameObj, *(_QWORD *)&tweenMethod);
    v12 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  FRAME_ANIM_DURATION = 0.0;
  if ( !isQuick )
    FRAME_ANIM_DURATION = v12->static_fields->FRAME_ANIM_DURATION;
  v14 = UITweener__Begin_object_(
          gameObj,
          FRAME_ANIM_DURATION,
          (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v14 )
    sub_2213CDC(0, v15);
  LODWORD(v14[2].klass) = tweenMethod;
  *(float *)&v14[8].klass = from;
  *((float *)&v14[8].klass + 1) = to;
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
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *raidBossName; // x21
  __int64 v10; // x2
  TitleInfoEventRaidStatusComponent_o *v11; // x0
  const MethodInfo *v12; // x4
  UnityEngine_Object_o *raidBossHpHead; // x21
  TitleInfoEventRaidStatusComponent_o *v14; // x0
  const MethodInfo *v15; // x4
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  TitleInfoEventRaidStatusComponent_c *v19; // x8
  UnityEngine_GameObject_o *v20; // x21
  __int64 v21; // x9
  char *v22; // x21
  __int64 v23; // x9
  UnityEngine_GameObject_o *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  TitleInfoEventRaidStatusComponent_o *v37; // x0
  const MethodInfo *v38; // x4
  TitleInfoEventRaidStatusComponent_o *v39; // x0
  const MethodInfo *v40; // x4

  if ( (byte_596F0C5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    byte_596F0C5 = 1;
  }
  if ( this->fields.isJumbleRaid )
  {
    gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    raidBossName = (UnityEngine_Object_o *)this->fields.raidBossName;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( UnityEngine_Object__op_Inequality(raidBossName, 0, 0) )
    {
      gameObject = (char *)this->fields.raidBossName;
      if ( !gameObject )
        goto LABEL_23;
      v11 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v11, (UnityEngine_GameObject_o *)v11, 0.0, 1.0, 6, 0, v12);
    }
    raidBossHpHead = (UnityEngine_Object_o *)this->fields.raidBossHpHead;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v10);
    if ( UnityEngine_Object__op_Inequality(raidBossHpHead, 0, 0) )
    {
      gameObject = (char *)this->fields.raidBossHpHead;
      if ( !gameObject )
        goto LABEL_23;
      v14 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v14, (UnityEngine_GameObject_o *)v14, 0.0, 1.0, 6, 0, v15);
    }
  }
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v19 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v20 = v16;
  if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v17, v18);
    v19 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  gameObject = (char *)UITweener__Begin_object_(
                         v20,
                         v19->static_fields->FRAME_ANIM_DURATION,
                         (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
  if ( !gameObject )
    goto LABEL_23;
  v21 = *(_QWORD *)&this->fields.outPos.fields.x;
  v22 = gameObject;
  *((_DWORD *)gameObject + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)gameObject + 16) = v21;
  v23 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)gameObject + 37) = LODWORD(this->fields.inPos.fields.z);
  *(_QWORD *)(gameObject + 140) = v23;
  *((_DWORD *)gameObject + 8) = 6;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v22 + 10) = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 80), (int32_t)v24, v25, v26, v27, v28, v29, v30);
  *((_QWORD *)v22 + 11) = callFinished;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 88), (int32_t)callFinished, v31, v32, v33, v34, v35, v36);
  gameObject = (char *)this->fields.raidBossIconSp;
  if ( !gameObject )
LABEL_23:
    sub_2213CDC(gameObject, v6);
  v37 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0);
  TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v37, (UnityEngine_GameObject_o *)v37, 0.0, 1.0, 6, 0, v38);
  if ( this->fields.isRaidDefeatCount )
  {
    gameObject = (char *)this->fields.raidBossHp;
    if ( gameObject )
    {
      v39 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(v39, (UnityEngine_GameObject_o *)v39, 0.0, 1.0, 6, 0, v40);
      return;
    }
    goto LABEL_23;
  }
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventRaidStatusComponent__FrameOut(
        TitleInfoEventRaidStatusComponent_o *this,
        System_String_o *callFinished,
        bool isQuick,
        const MethodInfo *method)
{
  TitleInfoEventRaidStatusComponent_c *v7; // x0
  float FRAME_ANIM_DURATION; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  char *raidBossIconSp; // x0
  __int64 v11; // x1
  __int64 v12; // x9
  char *v13; // x22
  __int64 v14; // x9
  UnityEngine_GameObject_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  TitleInfoEventRaidStatusComponent_o *v28; // x0
  const MethodInfo *v29; // x4
  __int64 v30; // x2
  TitleInfoEventRaidStatusComponent_o *v31; // x0
  const MethodInfo *v32; // x4
  UnityEngine_Object_o *raidBossName; // x21
  __int64 v34; // x2
  TitleInfoEventRaidStatusComponent_o *v35; // x0
  const MethodInfo *v36; // x4
  UnityEngine_Object_o *raidBossHpHead; // x21
  TitleInfoEventRaidStatusComponent_o *v38; // x0
  const MethodInfo *v39; // x4

  if ( (byte_596F0C6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    byte_596F0C6 = 1;
  }
  v7 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, callFinished, isQuick);
    v7 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  if ( isQuick )
    FRAME_ANIM_DURATION = 0.0;
  else
    FRAME_ANIM_DURATION = v7->static_fields->FRAME_ANIM_DURATION;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  raidBossIconSp = (char *)UITweener__Begin_object_(
                             gameObject,
                             FRAME_ANIM_DURATION,
                             (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
  if ( !raidBossIconSp )
    goto LABEL_25;
  v12 = *(_QWORD *)&this->fields.inPos.fields.x;
  v13 = raidBossIconSp;
  *((_DWORD *)raidBossIconSp + 34) = LODWORD(this->fields.inPos.fields.z);
  *((_QWORD *)raidBossIconSp + 16) = v12;
  v14 = *(_QWORD *)&this->fields.outPos.fields.x;
  *((_DWORD *)raidBossIconSp + 37) = LODWORD(this->fields.outPos.fields.z);
  *(_QWORD *)(raidBossIconSp + 140) = v14;
  *((_DWORD *)raidBossIconSp + 8) = 2;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v13 + 10) = v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 80), (int32_t)v15, v16, v17, v18, v19, v20, v21);
  *((_QWORD *)v13 + 11) = callFinished;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 88), (int32_t)callFinished, v22, v23, v24, v25, v26, v27);
  raidBossIconSp = (char *)this->fields.raidBossIconSp;
  if ( !raidBossIconSp )
    goto LABEL_25;
  v28 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)raidBossIconSp,
                                                 0);
  TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
    v28,
    (UnityEngine_GameObject_o *)v28,
    1.0,
    0.0,
    2,
    isQuick,
    v29);
  if ( this->fields.isRaidDefeatCount )
  {
    raidBossIconSp = (char *)this->fields.raidBossHp;
    if ( !raidBossIconSp )
      goto LABEL_25;
    v31 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)raidBossIconSp,
                                                   0);
    TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
      v31,
      (UnityEngine_GameObject_o *)v31,
      1.0,
      0.0,
      2,
      isQuick,
      v32);
  }
  if ( this->fields.isJumbleRaid )
  {
    raidBossName = (UnityEngine_Object_o *)this->fields.raidBossName;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v30);
    if ( UnityEngine_Object__op_Inequality(raidBossName, 0, 0) )
    {
      raidBossIconSp = (char *)this->fields.raidBossName;
      if ( !raidBossIconSp )
        goto LABEL_25;
      v35 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)raidBossIconSp,
                                                     0);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
        v35,
        (UnityEngine_GameObject_o *)v35,
        1.0,
        0.0,
        2,
        isQuick,
        v36);
    }
    raidBossHpHead = (UnityEngine_Object_o *)this->fields.raidBossHpHead;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v34);
    if ( UnityEngine_Object__op_Inequality(raidBossHpHead, 0, 0) )
    {
      raidBossIconSp = (char *)this->fields.raidBossHpHead;
      if ( raidBossIconSp )
      {
        v38 = (TitleInfoEventRaidStatusComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)raidBossIconSp,
                                                       0);
        TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
          v38,
          (UnityEngine_GameObject_o *)v38,
          1.0,
          0.0,
          2,
          isQuick,
          v39);
        return;
      }
LABEL_25:
      sub_2213CDC(raidBossIconSp, v11);
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
      sub_2213CDC(eventBossStatusUiEntity, method);
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
  Il2CppObject *NumberFormat_48247712; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x19
  int64_t v13; // [xsp+0h] [xbp-30h] BYREF
  int64_t v14; // [xsp+8h] [xbp-28h] BYREF

  v14 = totalHp;
  if ( (byte_596F0BC & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_5799/*"EVENT_DEFEAT_COUNT_TXT"*/);
    byte_596F0BC = 1;
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity
    && (CountFormat = EventBossStatusUiEntity__GetCountFormat(eventBossStatusUiEntity, 0),
        !System_String__IsNullOrEmpty(CountFormat, 0)) )
  {
    v11 = System_Int64__ToString((int64_t)&v14, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
    NumberFormat_48247712 = (Il2CppObject *)LocalizationManager__GetNumberFormat_48247712(v11, 0);
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, totalHp, totalDamage);
    CountFormat = LocalizationManager__Get((System_String_o *)StringLiteral_5799/*"EVENT_DEFEAT_COUNT_TXT"*/, 0);
    v13 = totalDamage;
    NumberFormat_48247712 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v13);
  }
  return System_String__Format(CountFormat, NumberFormat_48247712, 0);
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


// local variable allocation has failed, the output may be wrong!
bool TitleInfoEventRaidStatusComponent__IsTargetRaid(
        TitleInfoEventRaidStatusComponent_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  struct EventRaidEntity_o *eventRaidEntity; // x8

  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    sub_2213CDC(this, *(_QWORD *)&eventId);
  return eventRaidEntity->fields.eventId == eventId && eventRaidEntity->fields.day == day;
}


void TitleInfoEventRaidStatusComponent__MoveUp(
        TitleInfoEventRaidStatusComponent_o *this,
        int32_t moveY,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  TitleInfoEventRaidStatusComponent_c *v10; // x8
  UnityEngine_GameObject_o *v11; // x21
  Il2CppObject *v12; // x21
  UnityEngine_GameObject_o *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v21; // 0:kr14_12.12

  if ( (byte_596F0C9 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    byte_596F0C9 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v10 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v11 = gameObject;
  if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v8, v9);
    v10 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  v12 = UITweener__Begin_object_(
          v11,
          v10->static_fields->FRAME_ANIM_DURATION,
          (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (v21 = UnityEngine_Transform__get_localPosition(transform, 0), !v12) )
LABEL_9:
    sub_2213CDC(transform, v6);
  *(UnityEngine_Vector3_o *)&v12[8].klass = v21;
  HIDWORD(v12[8].monitor) = LODWORD(localPosition.fields.x);
  LODWORD(v12[2].klass) = 2;
  *(float *)&v12[9].klass = localPosition.fields.y + (float)moveY;
  HIDWORD(v12[9].klass) = LODWORD(localPosition.fields.z);
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12[5].klass = (Il2CppClass *)v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[5], (int32_t)v13, v14, v15, v16, v17, v18, v19);
}


void TitleInfoEventRaidStatusComponent__OnDestroy(TitleInfoEventRaidStatusComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventRaidStatusComponent__RefreshTerminal(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596F0C8 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596F0C8 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596ABDE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596ABDE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = 1;
  TopHomeRequest__clearExpirationDate(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void TitleInfoEventRaidStatusComponent__RefreshTimeStr(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t v6; // x20
  int32_t v7; // w22
  unsigned __int64 v8; // kr00_8
  UILabel_o *raidBossStatus; // x20
  int v10; // w8
  System_String_o *v11; // x19
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  System_String_o *Instance; // x0
  __int64 v15; // x1
  TitleInfoEventRaidStatusComponent_c *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  long double v19; // q0
  const MethodInfo *v20; // x3
  TitleInfoEventRaidStatusComponent_o *v21; // x0
  const MethodInfo *v22; // x1
  System_String_o *v23; // x19
  Il2CppObject *v24; // x0
  int32_t v25; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v26; // [xsp+8h] [xbp-38h] BYREF
  int v27; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596F0B8 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_5904/*"EVENT_RAID_NEXT_TIME_1"*/);
    sub_2213A60(&StringLiteral_5905/*"EVENT_RAID_NEXT_TIME_2"*/);
    byte_596F0B8 = 1;
  }
  if ( this->fields.isJumbleRaid && this->fields.targetTime >= 1 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
    v6 = this->fields.targetTime - NetworkManager__getTime(0);
    if ( v6 >= 1 )
    {
      v7 = v6 / 0x3CuLL - 60 * ((unsigned __int64)((v6 / 0x3CuLL * (unsigned __int128)0x888888888888889uLL) >> 64) >> 1);
      if ( this->fields.lastMinute == v7 )
        return;
      v8 = v6;
      raidBossStatus = this->fields.raidBossStatus;
      this->fields.lastMinute = v7;
      v10 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( (int)(v8 / 0xE10) >= 1 )
      {
        if ( !v10 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5904/*"EVENT_RAID_NEXT_TIME_1"*/, 0);
        v27 = v8 / 0xE10;
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v27);
        v26 = v7;
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v26);
        Instance = System_String__Format_75697880(v11, v12, v13, 0);
        if ( !raidBossStatus )
          goto LABEL_29;
        goto LABEL_27;
      }
      if ( !v10 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5905/*"EVENT_RAID_NEXT_TIME_2"*/, 0);
      v25 = v7;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v25);
      Instance = System_String__Format(v23, v24, 0);
      if ( raidBossStatus )
      {
LABEL_27:
        UILabel__set_text(raidBossStatus, Instance, 0);
        return;
      }
LABEL_29:
      sub_2213CDC(Instance, v15);
    }
    v16 = TitleInfoEventRaidStatusComponent_TypeInfo;
    if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v4, v5);
      v16 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    if ( v6 + v16->static_fields->JUMBLE_TERMINAL_REFRESH_TIME_OFFSET <= 0 )
    {
      Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_29;
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0) )
      {
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          *(__n128 *)&v19 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v17, v18);
        Instance = (System_String_o *)sub_291C204(0, v19);
        if ( !Instance )
          goto LABEL_29;
        if ( TerminalSceneComponent__IsMapTouchEnabled((TerminalSceneComponent_o *)Instance, 0) )
        {
          this->fields.targetTime = 0;
          TitleInfoEventRaidStatusComponent__FrameOut(this, 0, 0, v20);
          TitleInfoEventRaidStatusComponent__RefreshTerminal(v21, v22);
        }
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

  if ( (byte_596F0B9 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_596F0B9 = 1;
  }
  raidBossIconSp = this->fields.raidBossIconSp;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, spName, method);
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
    sub_2213CDC(v6, v7);
  }
}


void TitleInfoEventRaidStatusComponent__SetClearAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *eventRaidEntity; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  struct EventRaidEntity_o *v6; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX_LAST; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_596F0C2 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_596F0C2 = 1;
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
  TitleInfoEventRaidStatusComponent__SetOutlineLastColor_46715908(this, v4);
  eventRaidEntity = (UnityEngine_GameObject_o *)TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, method, v5);
  v6 = this->fields.eventRaidEntity;
  if ( !v6 )
LABEL_11:
    sub_2213CDC(eventRaidEntity, method);
  RAIDBOSS_ICON_SPNAME_PREFIX_LAST = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
  v8 = System_Int32__ToString((int)v6 + 72, 0);
  v9 = System_String__Concat_75651716(RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v8, 0);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v9, v10);
}


void TitleInfoEventRaidStatusComponent__SetEntryAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  TitleInfoEventRaidStatusComponent_c *v5; // x0
  float32x2_t v6; // d0
  float32x2_t *static_fields; // x8
  float v8; // s3
  __int64 v9; // x1
  __int64 v10; // x2
  float y; // s1
  float v12; // [xsp+0h] [xbp-30h]

  if ( (byte_596F0C1 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_6342/*"EntryAnim"*/);
    byte_596F0C1 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_10;
  y = UnityEngine_Transform__get_localPosition(transform, 0).fields.y;
  v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = y;
  this->fields.inPos.fields.z = 0.0;
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    v12 = y;
    j_il2cpp_runtime_class_init_0(v5, v9, v10);
    y = v12;
    v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  v6.n64_u32[0] = 0;
  static_fields = (float32x2_t *)v5->static_fields;
  v8 = static_fields[11].n64_f32[0];
  v6.n64_f32[1] = y;
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32(v6, static_fields[10]);
  this->fields.outPos.fields.z = v8 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0),
        (transform = (UnityEngine_Transform_o *)this->fields.raidBossIconSp) == 0)
    || (((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, double))transform->klass[1]._1.this_arg.data)(
          transform,
          *(_QWORD *)&transform->klass[1]._1.this_arg.bits,
          0.0),
        (transform = (UnityEngine_Transform_o *)this->fields.raidBossHp) == 0) )
  {
LABEL_10:
    sub_2213CDC(transform, v4);
  }
  ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, double))transform->klass[1]._1.this_arg.data)(
    transform,
    *(_QWORD *)&transform->klass[1]._1.this_arg.bits,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6342/*"EntryAnim"*/,
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x21
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = iconId;
  if ( (byte_596F0BA & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_596F0BA = 1;
  }
  if ( iconId < 0 )
    goto LABEL_12;
  v8 = System_Int32__ToString((int32_t)&v12, 0);
  v11 = System_String__Concat_75694928(prefix, (System_String_o *)StringLiteral_16746/*"_"*/, v8, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v10);
  if ( !AtlasManager__SetEventUI(sprite, v11, 0) )
  {
LABEL_12:
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite, prefix);
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
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity && EventBossStatusUiEntity__TryGetHpBarPos(eventBossStatusUiEntity, &v7, 0) )
  {
    raidBossHp = (UnityEngine_Component_o *)this->fields.raidBossHp;
    if ( !raidBossHp )
      sub_2213CDC(0, v4);
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
  int v7; // w8
  UnityEngine_Color_o StatusBattleColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596F0BD & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_596F0BD = 1;
  }
  v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  v7 = *(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1);
  if ( eventBossStatusUiEntity )
  {
    if ( !v7 )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, label, method);
      v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    StatusBattleColor = EventBossStatusUiEntity__GetStatusBattleColor(
                          eventBossStatusUiEntity,
                          v5->static_fields->RAIDBOSS_OUTLINE_COLOR_BATTLE,
                          0);
    if ( label )
      goto LABEL_7;
LABEL_11:
    sub_2213CDC(v5, label);
  }
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, label, method);
    v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  StatusBattleColor = v5->static_fields->RAIDBOSS_OUTLINE_COLOR_BATTLE;
  if ( !label )
    goto LABEL_11;
LABEL_7:
  UILabel__set_effectColor(label, StatusBattleColor, 0);
}


void TitleInfoEventRaidStatusComponent__SetOutlineBattleColor_46715108(
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
      sub_2213CDC(v5, v6);
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
    sub_2213CDC(eventBossStatusUiEntity, label);
  UILabel__set_effectColor(label, defaultColor, 0);
}


void TitleInfoEventRaidStatusComponent__SetOutlineLastColor(
        TitleInfoEventRaidStatusComponent_o *this,
        UILabel_o *label,
        const MethodInfo *method)
{
  TitleInfoEventRaidStatusComponent_c *v5; // x0
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x20
  int v7; // w8
  UnityEngine_Color_o StatusLastColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596F0BE & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_596F0BE = 1;
  }
  v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  v7 = *(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1);
  if ( eventBossStatusUiEntity )
  {
    if ( !v7 )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, label, method);
      v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    StatusLastColor = EventBossStatusUiEntity__GetStatusLastColor(
                        eventBossStatusUiEntity,
                        v5->static_fields->RAIDBOSS_OUTLINE_COLOR_LAST,
                        0);
    if ( label )
      goto LABEL_7;
LABEL_11:
    sub_2213CDC(v5, label);
  }
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, label, method);
    v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  StatusLastColor = v5->static_fields->RAIDBOSS_OUTLINE_COLOR_LAST;
  if ( !label )
    goto LABEL_11;
LABEL_7:
  UILabel__set_effectColor(label, StatusLastColor, 0);
}


void TitleInfoEventRaidStatusComponent__SetOutlineLastColor_46715908(
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
  int v7; // w8
  UnityEngine_Color_o StatusWinColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596F0BF & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_596F0BF = 1;
  }
  v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  v7 = *(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1);
  if ( eventBossStatusUiEntity )
  {
    if ( !v7 )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, label, method);
      v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    StatusWinColor = EventBossStatusUiEntity__GetStatusWinColor(
                       eventBossStatusUiEntity,
                       v5->static_fields->RAIDBOSS_OUTLINE_COLOR_WIN,
                       0);
    if ( label )
      goto LABEL_7;
LABEL_11:
    sub_2213CDC(v5, label);
  }
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, label, method);
    v5 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  StatusWinColor = v5->static_fields->RAIDBOSS_OUTLINE_COLOR_WIN;
  if ( !label )
    goto LABEL_11;
LABEL_7:
  UILabel__set_effectColor(label, StatusWinColor, 0);
}


void TitleInfoEventRaidStatusComponent__SetOutlineWinColor_46715968(
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
  __int64 v2; // x2
  TitleInfoEventRaidStatusComponent_c *v4; // x0
  UISprite_o *subGroupBattleId; // x20
  struct EventRaidEntity_o *eventRaidEntity; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  TitleInfoEventRaidStatusComponent_c *v15; // x0
  UISprite_o *v16; // x19
  System_String_o *v17; // x20
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  System_String_o *v21; // x20
  int v23; // [xsp+8h] [xbp-38h] BYREF
  int32_t subGroupIndex; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596F0CA & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_596F0CA = 1;
  }
  v4 = TitleInfoEventRaidStatusComponent_TypeInfo;
  subGroupBattleId = this->fields.subGroupBattleId;
  if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, method, v2);
  eventRaidEntity = this->fields.eventRaidEntity;
  if ( !eventRaidEntity )
    sub_2213CDC(v4, method);
  RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID;
  subGroupIndex = eventRaidEntity->fields.subGroupIndex;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &subGroupIndex);
  v11 = System_String__Format(RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID, v8, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v10);
  if ( AtlasManager__SetEventUI(subGroupBattleId, v11, 0) )
  {
    return 1;
  }
  else
  {
    v15 = TitleInfoEventRaidStatusComponent_TypeInfo;
    v16 = this->fields.subGroupBattleId;
    if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v12, v13);
      v15 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    v17 = v15->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID;
    v23 = 1;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v23);
    v21 = System_String__Format(v17, v18, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19, v20);
    return AtlasManager__SetEventUI(v16, v21, 0);
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
  bool v7; // w7
  _BOOL4 v12; // w24
  bool v13; // w25
  struct EventRaidEntity_o **p_eventRaidEntity; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  struct EventRaidEntity_o *v17; // x8
  UnityEngine_Object_o *gameObject; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x22
  System_String_o *v21; // x23
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  UnityEngine_Object_o *v24; // x21
  bool isRaidDefeatCount; // w0
  const MethodInfo_47A29F8 *v26; // x8
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  char v30; // w4
  char v31; // w5
  bool v32; // w6
  bool v33; // w7
  TitleInfoEventRaidStatusComponent_c *v34; // x0
  UISprite_o *subGroup; // x21
  System_String_o *RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT; // x22
  const MethodInfo *v37; // x4
  struct EventRaidEntity_o *v38; // x8
  bool v39; // w1
  int v40; // w23
  __int64 v41; // x1
  __int64 v42; // x2
  Il2CppObject *v43; // x20
  Il2CppObject *v44; // x20

  v12 = isJumbleRaid;
  v13 = isReprintLastWarRaid;
  if ( (byte_596F0B7 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_596F0B7 = 1;
  }
  this->fields.eventRaidEntity = eventRaidEntity;
  p_eventRaidEntity = &this->fields.eventRaidEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventRaidEntity,
    (int32_t)eventRaidEntity,
    *(System_String_o **)&warId,
    *(System_String_o **)&currentDay,
    isJumbleRaid,
    isReprintLastWarRaid,
    (bool)method,
    v7);
  v17 = this->fields.eventRaidEntity;
  this->fields.warId = warId;
  this->fields.isJumbleRaid = v12;
  this->fields.isReprintLastWarRaid = v13;
  if ( v17 )
  {
    this->fields.currentDay = currentDay;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_49;
    v20 = gameObject;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0);
    if ( !eventRaidEntity )
      goto LABEL_49;
    v21 = (System_String_o *)gameObject;
    v22 = System_Int32__ToString((int)eventRaidEntity + 20, 0);
    v23 = System_String__Concat_75651716(v21, v22, 0);
    UnityEngine_Object__set_name(v20, v23, 0);
    gameObject = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)gameObject,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                           eventRaidEntity->fields.eventId,
                                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !gameObject )
      goto LABEL_49;
    v24 = gameObject;
    isRaidDefeatCount = EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)gameObject, 0);
    v26 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
    this->fields.isRaidDefeatCount = isRaidDefeatCount;
    gameObject = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance(v26);
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)gameObject,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    if ( !gameObject )
      goto LABEL_49;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  (EventBossStatusUiMaster_o *)gameObject,
                                  v24->fields.m_CachedPtr,
                                  this->fields.currentDay,
                                  0);
    this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventBossStatusUiEntity,
      (int32_t)EntityFromEventIdAndIndex,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    v12 = this->fields.isJumbleRaid;
  }
  if ( v12 )
  {
    v34 = TitleInfoEventRaidStatusComponent_TypeInfo;
    subGroup = this->fields.subGroup;
    if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v15, v16);
      v34 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT = v34->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15, v16);
    AtlasManager__SetEventUI(subGroup, RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT, 0);
    AtlasManager__SetEventUI(
      this->fields.subGroupBase,
      TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK,
      0);
    gameObject = (UnityEngine_Object_o *)AtlasManager__SetEventUI(
                                           this->fields.subGroupPartition,
                                           TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION,
                                           0);
    v38 = this->fields.eventRaidEntity;
    if ( !v38 )
      goto LABEL_49;
    TitleInfoEventRaidStatusComponent__SetEventIcon(
      (TitleInfoEventRaidStatusComponent_o *)gameObject,
      this->fields.raidBattle,
      TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_STATUS_01,
      v38->fields.iconId,
      v37);
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
      v39 = 0;
    }
    else
    {
      if ( this->fields.subGroupCount >= 1 )
      {
        v40 = 0;
        while ( 1 )
        {
          gameObject = (UnityEngine_Object_o *)this->fields.subGroupBase;
          if ( !gameObject )
            goto LABEL_49;
          v43 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41, v42);
          v44 = UnityEngine_Object__Instantiate_object_(
                  v43,
                  (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v44, 0, 0) )
          {
            GameObjectExtensions__SafeSetParent(
              (UnityEngine_GameObject_o *)v44,
              (UnityEngine_Component_o *)this->fields.subGroupGrid,
              0);
            if ( ++v40 < this->fields.subGroupCount )
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
      v39 = 1;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v39, 0);
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
    sub_2213CDC(gameObject, v19);
  }
}


void TitleInfoEventRaidStatusComponent__StartClearAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  float y; // s8
  TitleInfoEventRaidStatusComponent_c *v16; // x0
  _BOOL4 isJumbleRaid; // w9
  int v18; // w8
  struct TitleInfoEventRaidStatusComponent_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct TitleInfoEventRaidStatusComponent_StaticFields *v23; // x10
  System_String_o *v24; // x1
  float v25; // s2
  float v26; // s0

  if ( (byte_596F0C3 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_2378/*"AnimFrameOutEnd"*/);
    byte_596F0C3 = 1;
  }
  this->fields.clearAnimCallBack = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clearAnimCallBack,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v11);
  y = UnityEngine_Transform__get_localPosition(transform, 0).fields.y;
  v16 = TitleInfoEventRaidStatusComponent_TypeInfo;
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = y;
  isJumbleRaid = this->fields.isJumbleRaid;
  this->fields.inPos.fields.z = 0.0;
  v18 = *(&v16->_2.cctor_finished + 1);
  if ( isJumbleRaid )
  {
    if ( !v18 )
    {
      j_il2cpp_runtime_class_init_0(v16, v12, v13);
      v16 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    static_fields = v16->static_fields;
    p_x = &static_fields->FRAME_ANIM_OUT_POS_JUMBLE.fields.x;
    p_y = &static_fields->FRAME_ANIM_OUT_POS_JUMBLE.fields.y;
    p_z = &static_fields->FRAME_ANIM_OUT_POS_JUMBLE.fields.z;
  }
  else
  {
    if ( !v18 )
    {
      j_il2cpp_runtime_class_init_0(v16, v12, v13);
      v16 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    v23 = v16->static_fields;
    p_x = &v23->FRAME_ANIM_OUT_POS_DELTA.fields.x;
    p_y = &v23->FRAME_ANIM_OUT_POS_DELTA.fields.y;
    p_z = &v23->FRAME_ANIM_OUT_POS_DELTA.fields.z;
  }
  v24 = (System_String_o *)StringLiteral_2378/*"AnimFrameOutEnd"*/;
  v25 = y + *p_y;
  v26 = *p_z + 0.0;
  this->fields.outPos.fields.x = *p_x + 0.0;
  this->fields.outPos.fields.y = v25;
  this->fields.outPos.fields.z = v26;
  TitleInfoEventRaidStatusComponent__FrameOut(this, v24, 0, v14);
}


bool TitleInfoEventRaidStatusComponent__TryGetGridPosition(
        TitleInfoEventRaidStatusComponent_o *this,
        UnityEngine_Vector3_o *pos,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  float v8; // w9
  UnityEngine_Vector3_o v10; // [xsp+0h] [xbp-30h] BYREF

  v10.fields.z = 0.0;
  *(_QWORD *)&v10.fields.x = 0;
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
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
      v8 = v10.fields.z;
      *(_QWORD *)&pos->fields.x = *(_QWORD *)&v10.fields.x;
      pos->fields.z = v8;
      LOBYTE(eventBossStatusUiEntity) = 1;
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
  __int64 v20; // x2
  UILabel_o *raidBossName; // x25
  UnityEngine_Behaviour_o *subGroupBattleId; // x25
  const MethodInfo *v23; // x1
  UnityEngine_GameObject_o *v24; // x25
  __int64 v25; // x2
  struct EventRaidEntity_o *v26; // x8
  int64_t startedAt; // x22
  __int64 v28; // x2
  struct EventRaidEntity_o *v29; // x8
  __int64 v30; // x2
  UIWidget_o *raidBossIconSp; // x25
  bool v32; // w1
  __int64 v33; // x2
  struct EventRaidEntity_o *v34; // x8
  UnityEngine_Behaviour_o *v35; // x25
  int64_t endedAt; // x22
  UILabel_o *v37; // x25
  const MethodInfo *v38; // x3
  UILabel_o *raidBossHpHead; // x25
  UILabel_o *raidBossHp; // x27
  System_String_o *v41; // x25
  Il2CppObject *v42; // x0
  struct EventRaidEntity_o *v43; // x8
  int32_t SubGroupNow; // w27
  int32_t v45; // w26
  int v46; // w22
  System_Collections_Generic_List_object__o *v47; // x28
  int32_t v48; // w29
  UnityEngine_GameObject_o *v49; // x25
  __int64 v50; // x1
  __int64 v51; // x2
  UnityEngine_Object_o *Child; // x25
  __int64 v53; // x2
  UnityEngine_GameObject_o *v54; // x25
  __int64 v55; // x2
  TitleInfoEventRaidStatusComponent_c *v56; // x0
  __int64 v57; // x2
  __int64 v58; // x2
  const MethodInfo *v59; // x4
  UISprite_o *raidBattle; // x20
  struct EventRaidEntity_o *v61; // x8
  TitleInfoEventRaidStatusComponent_c *v62; // x0
  __int64 v63; // x2
  System_String_o **v64; // x8
  struct EventRaidEntity_o *v65; // x8
  System_String_o *v66; // x0
  System_String_o *v67; // x0
  const MethodInfo *v68; // x2
  char v69; // [xsp+4h] [xbp-8Ch]
  System_String_o *v70; // [xsp+18h] [xbp-78h]
  int64_t v71; // [xsp+20h] [xbp-70h] BYREF
  TotalEventRaidEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_596F0BB & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_5906/*"EVENT_RAID_REST_COUNT_AFTER"*/);
    sub_2213A60(&StringLiteral_5907/*"EVENT_RAID_REST_COUNT_BEFORE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F0BB = 1;
  }
  eventRaidEntity = this->fields.eventRaidEntity;
  entity = 0;
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
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_136;
  v8 = (DataManager_o *)gameObject;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
                          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !gameObject )
    goto LABEL_136;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 1, 0);
  TitleInfoEventRaidStatusComponent__SetOutlineBattleColor_46715108(this, v13);
  TitleInfoEventRaidStatusComponent__SetHpBarPosition(this, v14);
  if ( day == this->fields.currentDay )
  {
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            v8,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !gameObject )
        goto LABEL_136;
      gameObject = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)gameObject, v18, -1, 0, 0);
    }
    v69 = gameObject;
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
      if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v7, v20);
      if ( !raidBossName )
        goto LABEL_136;
      UILabel__SetCondensedScale(
        raidBossName,
        TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
        0,
        0);
      subGroupBattleId = (UnityEngine_Behaviour_o *)this->fields.subGroupBattleId;
      gameObject = TitleInfoEventRaidStatusComponent__SetSubGroupBattleIdIcon(this, v23);
      if ( !subGroupBattleId )
        goto LABEL_136;
      UnityEngine_Behaviour__set_enabled(subGroupBattleId, gameObject & 1, 0);
      gameObject = (__int64)this->fields.subGroupBattleId;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !this->fields.eventRaidEntity )
        goto LABEL_136;
      v24 = (UnityEngine_GameObject_o *)gameObject;
      gameObject = EventRaidEntity__IsJumbleSingleRaid(this->fields.eventRaidEntity, 0);
      if ( !v24 )
        goto LABEL_136;
      UnityEngine_GameObject__SetActive(v24, (gameObject & 1) == 0, 0);
      gameObject = (__int64)this->fields.subGroupBattleId;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
                     gameObject,
                     *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
      v26 = this->fields.eventRaidEntity;
      if ( !v26 )
        goto LABEL_136;
      startedAt = v26->fields.startedAt;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v25);
      gameObject = NetworkManager__getTime(0);
      if ( startedAt <= gameObject )
      {
        raidBossHpHead = this->fields.raidBossHpHead;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v28);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5907/*"EVENT_RAID_REST_COUNT_BEFORE"*/, 0);
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
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_5906/*"EVENT_RAID_REST_COUNT_AFTER"*/, 0);
        v71 = maxHp - v10;
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v71);
        gameObject = (__int64)System_String__Format(v41, v42, 0);
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
        v43 = this->fields.eventRaidEntity;
        if ( !v43 || !gameObject )
          goto LABEL_136;
        v32 = v43->fields.maxHp > v10;
      }
      else
      {
        v29 = this->fields.eventRaidEntity;
        if ( !v29 )
          goto LABEL_136;
        this->fields.targetTime = v29->fields.startedAt;
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
        if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v7, v30);
        if ( !raidBossIconSp )
          goto LABEL_136;
        UIWidget__set_color(
          raidBossIconSp,
          TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->ICON_MASK_COLOR,
          0);
        gameObject = (__int64)this->fields.raidBattle;
        if ( !gameObject )
          goto LABEL_136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_136;
        v32 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v32, 0);
      v70 = RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
      SubGroupNow = EventRaidMaster__GetSubGroupNow(v15, this->fields.eventRaidEntity, 0);
      gameObject = EventRaidMaster__GetSubGroupMax(v15, this->fields.eventRaidEntity, 0);
      if ( !this->fields.subGroupGrid )
        goto LABEL_136;
      v45 = gameObject;
      gameObject = (__int64)UIGrid__GetChildList(this->fields.subGroupGrid, 0);
      if ( !gameObject )
        goto LABEL_136;
      v46 = *(_DWORD *)(gameObject + 24);
      v47 = (System_Collections_Generic_List_object__o *)gameObject;
      if ( v46 >= 1 )
      {
        v48 = 0;
        do
        {
          gameObject = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v47,
                                  v48,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Transform__get_Item__);
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_136;
          v49 = (UnityEngine_GameObject_o *)gameObject;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v48 < v45, 0);
          Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(v49, 0, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50, v51);
          gameObject = UnityEngine_Object__op_Inequality(Child, 0, 0);
          if ( (gameObject & 1) != 0 )
          {
            if ( !Child )
              goto LABEL_136;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Child, 0);
            if ( !gameObject )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v48 >= SubGroupNow, 0);
          }
        }
        while ( v46 != ++v48 );
      }
      gameObject = (__int64)this->fields.subGroupPartition;
      if ( !gameObject )
        goto LABEL_136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      v54 = (UnityEngine_GameObject_o *)gameObject;
      RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v70;
      if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v7, v53);
      if ( !v54 )
        goto LABEL_136;
      UnityEngine_GameObject__SetActive(
        v54,
        v45 > TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_SUB_GROUP_PARTITION_INDEX,
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
      v34 = this->fields.eventRaidEntity;
      if ( !v34 )
        goto LABEL_136;
      v35 = (UnityEngine_Behaviour_o *)this->fields.raidBossHp;
      endedAt = v34->fields.endedAt;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v33);
      gameObject = NetworkManager__getTime(0);
      if ( !v35 )
        goto LABEL_136;
      UnityEngine_Behaviour__set_enabled(v35, endedAt > gameObject, 0);
      v37 = this->fields.raidBossHp;
      gameObject = (__int64)TitleInfoEventRaidStatusComponent__GetRestCountText(this, maxHp - v10, v10, v38);
      if ( !v37 )
        goto LABEL_136;
      UILabel__set_text(v37, (System_String_o *)gameObject, 0);
    }
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
          if ( (v69 & 1) != 0 )
          {
            if ( !gameObject )
              goto LABEL_136;
            goto LABEL_111;
          }
          if ( !gameObject )
            goto LABEL_136;
          if ( *(_QWORD *)(gameObject + 48) <= v10 )
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
              if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v7, v58);
              v61 = this->fields.eventRaidEntity;
              if ( !v61 )
                goto LABEL_136;
              TitleInfoEventRaidStatusComponent__SetEventIcon(
                (TitleInfoEventRaidStatusComponent_o *)gameObject,
                raidBattle,
                TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_STATUS_02,
                v61->fields.iconId,
                v59);
            }
            v62 = TitleInfoEventRaidStatusComponent_TypeInfo;
            if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v7, v57);
              v62 = TitleInfoEventRaidStatusComponent_TypeInfo;
            }
            RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v62->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
            TitleInfoEventRaidStatusComponent__SetOutlineLastColor_46715908(this, v7);
            goto LABEL_121;
          }
        }
      }
      v56 = TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v7, v55);
        v56 = TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v56->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE;
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
        TitleInfoEventRaidStatusComponent__SetOutlineWinColor_46715968(this, v7);
      gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v7, v63);
        gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      v64 = (System_String_o **)(*(_QWORD *)(gameObject + 184) + 8LL);
    }
    else
    {
      gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( !*(&TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo, v7, v63);
        gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      v64 = (System_String_o **)(*(_QWORD *)(gameObject + 184) + 16LL);
    }
    RAIDBOSS_ICON_SPNAME_PREFIX_LAST = *v64;
  }
  v65 = this->fields.eventRaidEntity;
  if ( !v65 )
LABEL_136:
    sub_2213CDC(gameObject, v7);
  v66 = System_Int32__ToString((int)v65 + 72, 0);
  v67 = System_String__Concat_75651716(RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v66, 0);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v67, v68);
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


int32_t TitleInfoEventRaidStatusComponent__get_CurrentDay(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.currentDay;
}


void TitleInfoEventRaidStatusComponent__onClick(TitleInfoEventRaidStatusComponent_o *this, const MethodInfo *method)
{
  int32_t RaidDeadQuestId; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct EventRaidEntity_o *eventRaidEntity; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_596F0C0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&Method_TitleInfoEventRaidStatusComponent_onClick__);
    byte_596F0C0 = 1;
  }
  if ( this->fields.eventRaidEntity )
  {
    if ( this->fields.isReprintLastWarRaid )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    sub_2213CDC(Instance, v5);
  }
LABEL_14:
  v7 = Method_TitleInfoEventRaidStatusComponent_onClick__;
  if ( (*((_BYTE *)Method_TitleInfoEventRaidStatusComponent_onClick__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_2213A78(Method_TitleInfoEventRaidStatusComponent_onClick__);
  v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
}


void TitleInfoEventRaidStatusComponent__setClickCallBack(
        TitleInfoEventRaidStatusComponent_o *this,
        System_Action_o *cb,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.clickCallBack = cb;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickCallBack,
    (int32_t)cb,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}