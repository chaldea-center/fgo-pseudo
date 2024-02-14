// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v19; // x1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v20; // x0
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v28; // x0
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v36; // x0
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v44; // x0
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v52; // x0
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v60; // x0
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v68; // x0
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v76; // x0
  System_Int32_array **v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v84; // x0
  System_Int32_array **v85; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  TitleInfoEventRaidStatusComponent_c *v92; // x8
  struct TitleInfoEventRaidStatusComponent_StaticFields *v93; // x9
  struct TitleInfoEventRaidStatusComponent_StaticFields *v94; // x9
  __int64 v95; // d0 OVERLAPPED
  float v96; // s1
  float v97; // s2
  float v98; // s4
  float v99; // s5
  float v100; // s6
  TitleInfoEventRaidStatusComponent_c *v101; // x8
  float v102; // s4
  float v103; // s5
  float v104; // s6
  float v105; // s7
  float v106; // s4
  float v107; // s5
  float v108; // s6
  float v109; // s7
  float v110; // s4
  float v111; // s5
  float v112; // s6
  float v113; // s7
  struct UnityEngine_Color_o v114; // [xsp+0h] [xbp-60h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421885A & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventRaidStatusComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_21750/*"raid_boss_status_battle_"*/, v8);
    sub_B0D8A4(&StringLiteral_21752/*"raid_boss_status_lose_"*/, v9);
    sub_B0D8A4(&StringLiteral_18617/*"event_raid_status_02"*/, v10);
    sub_B0D8A4(&StringLiteral_18618/*"event_raid_sub_group_back"*/, v11);
    sub_B0D8A4(&StringLiteral_21751/*"raid_boss_status_last_"*/, v12);
    sub_B0D8A4(&StringLiteral_18620/*"event_raid_sub_group_front"*/, v13);
    sub_B0D8A4(&StringLiteral_18619/*"event_raid_sub_group_battle_{0:00}"*/, v14);
    sub_B0D8A4(&StringLiteral_18616/*"event_raid_status_01"*/, v15);
    sub_B0D8A4(&StringLiteral_21753/*"raid_boss_status_win_"*/, v16);
    sub_B0D8A4(&StringLiteral_18621/*"event_raid_sub_group_partition"*/, v17);
    byte_421885A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_21750/*"raid_boss_status_battle_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21750/*"raid_boss_status_battle_"*/;
  sub_B0D840(static_fields, v19, v2, v3, v4, v5, v6, v7);
  v20 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_21753/*"raid_boss_status_win_"*/;
  v20->RAIDBOSS_ICON_SPNAME_PREFIX_WIN = (struct System_String_o *)StringLiteral_21753/*"raid_boss_status_win_"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v20->RAIDBOSS_ICON_SPNAME_PREFIX_WIN, v21, v22, v23, v24, v25, v26, v27);
  v28 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v29 = (System_Int32_array **)StringLiteral_21752/*"raid_boss_status_lose_"*/;
  v28->RAIDBOSS_ICON_SPNAME_PREFIX_LOSE = (struct System_String_o *)StringLiteral_21752/*"raid_boss_status_lose_"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v28->RAIDBOSS_ICON_SPNAME_PREFIX_LOSE, v29, v30, v31, v32, v33, v34, v35);
  v36 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v37 = (System_Int32_array **)StringLiteral_21751/*"raid_boss_status_last_"*/;
  v36->RAIDBOSS_ICON_SPNAME_PREFIX_LAST = (struct System_String_o *)StringLiteral_21751/*"raid_boss_status_last_"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v36->RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v37, v38, v39, v40, v41, v42, v43);
  v44 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v45 = (System_Int32_array **)StringLiteral_18620/*"event_raid_sub_group_front"*/;
  v44->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT = (struct System_String_o *)StringLiteral_18620/*"event_raid_sub_group_front"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v44->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v53 = (System_Int32_array **)StringLiteral_18618/*"event_raid_sub_group_back"*/;
  v52->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK = (struct System_String_o *)StringLiteral_18618/*"event_raid_sub_group_back"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v52->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v61 = (System_Int32_array **)StringLiteral_18621/*"event_raid_sub_group_partition"*/;
  v60->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION = (struct System_String_o *)StringLiteral_18621/*"event_raid_sub_group_partition"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v60->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v69 = (System_Int32_array **)StringLiteral_18619/*"event_raid_sub_group_battle_{0:00}"*/;
  v68->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID = (struct System_String_o *)StringLiteral_18619/*"event_raid_sub_group_battle_{0:00}"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v68->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v77 = (System_Int32_array **)StringLiteral_18616/*"event_raid_status_01"*/;
  v76->RAIDBOSS_ICON_SPNAME_STATUS_01 = (struct System_String_o *)StringLiteral_18616/*"event_raid_status_01"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v76->RAIDBOSS_ICON_SPNAME_STATUS_01, v77, v78, v79, v80, v81, v82, v83);
  v84 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v85 = (System_Int32_array **)StringLiteral_18617/*"event_raid_status_02"*/;
  v84->RAIDBOSS_ICON_SPNAME_STATUS_02 = (struct System_String_o *)StringLiteral_18617/*"event_raid_status_02"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v84->RAIDBOSS_ICON_SPNAME_STATUS_02, v85, v86, v87, v88, v89, v90, v91);
  v92 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v93 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&v93->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  v93->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  v94 = v92->static_fields;
  *(_QWORD *)&v94->FRAME_ANIM_OUT_POS_JUMBLE.fields.x = 3281387520LL;
  v94->FRAME_ANIM_OUT_POS_JUMBLE.fields.z = 0.0;
  v95 = COERCE_UNSIGNED_INT(0.5);
  v96 = 0.5;
  v97 = 0.5;
  v92->static_fields->FRAME_ANIM_DURATION = 0.3;
  v92->static_fields->ENTRY_ANIM_DELAY = 0.5;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  UnityEngine_Color___ctor_40757524(
    *(UnityEngine_Color_o *)&v95,
    v98,
    v99,
    v100,
    (const MethodInfo *)&methoda.return_type);
  v101 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v116.fields.a = 1.0;
  TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->ICON_MASK_COLOR = *(struct UnityEngine_Color_o *)&methoda.return_type;
  v101->static_fields->JUMBLE_TERMINAL_REFRESH_TIME_OFFSET = 3;
  v101->static_fields->RAIDBOSS_SUB_GROUP_PARTITION_INDEX = 5;
  v116.fields.b = 0.20392;
  v101->static_fields->TITLE_LABEL_BASE_WIDTH = 120;
  v116.fields.g = 0.035294;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  v116.fields.r = 0.37647;
  UnityEngine_Color___ctor(v116, v102, v103, v104, v105, (const MethodInfo *)&methoda.name);
  v117.fields.b = 0.8;
  v117.fields.g = 0.37647;
  v117.fields.a = 1.0;
  TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_OUTLINE_COLOR_BATTLE = *(struct UnityEngine_Color_o *)&methoda.name;
  v117.fields.r = 0.16471;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor(v117, v106, v107, v108, v109, &methoda);
  v118.fields.g = 0.21961;
  v118.fields.b = 0.086275;
  TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_OUTLINE_COLOR_WIN = *(struct UnityEngine_Color_o *)&methoda.methodPointer;
  v118.fields.r = 0.29804;
  v118.fields.a = 1.0;
  v114 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v118, v110, v111, v112, v113, (const MethodInfo *)&v114);
  TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_OUTLINE_COLOR_LAST = v114;
}


void __fastcall TitleInfoEventRaidStatusComponent___ctor(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  LODWORD(this[1].klass) = -1;
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
  EventRaidEntity_o *eventBossStatusUiEntity; // x0
  System_Action_o *v8; // x0
  struct EventBossStatusUiEntity_o *v9; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX_WIN; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  System_String_o *v15; // x1

  if ( (byte_4218853 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaidMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&TitleInfoEventRaidStatusComponent_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_17517/*"clearAnimFinised"*/, v6);
    byte_4218853 = 1;
  }
  if ( BYTE5(this->fields.clickCallBack) )
  {
    eventBossStatusUiEntity = (EventRaidEntity_o *)this->fields.eventBossStatusUiEntity;
    if ( eventBossStatusUiEntity )
    {
      if ( EventRaidEntity__IsJumbleSingleRaid(eventBossStatusUiEntity, 0LL) )
        goto LABEL_9;
      eventBossStatusUiEntity = (EventRaidEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( eventBossStatusUiEntity )
      {
        eventBossStatusUiEntity = (EventRaidEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)eventBossStatusUiEntity,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( eventBossStatusUiEntity )
        {
          EventRaidMaster__GetNextSubGroupEntity(
            (EventRaidMaster_o *)eventBossStatusUiEntity,
            (EventRaidEntity_o *)this->fields.eventBossStatusUiEntity,
            0LL);
LABEL_9:
          v8 = *(System_Action_o **)&this->fields.warId;
          if ( v8 )
            System_Action__Invoke(v8, 0LL);
          return;
        }
      }
    }
LABEL_20:
    sub_B0D97C(eventBossStatusUiEntity);
  }
  TitleInfoEventRaidStatusComponent__SetOutlineWinColor(this, this->fields.raidBossName, v2);
  eventBossStatusUiEntity = (EventRaidEntity_o *)TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
  }
  v9 = this->fields.eventBossStatusUiEntity;
  if ( !v9 )
    goto LABEL_20;
  RAIDBOSS_ICON_SPNAME_PREFIX_WIN = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_WIN;
  v11 = System_Int32__ToString((int)v9 + 48, 0LL);
  v12 = System_String__Concat_43849904(RAIDBOSS_ICON_SPNAME_PREFIX_WIN, v11, 0LL);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v12, v13);
  if ( *(_QWORD *)&this->fields.warId )
    v15 = (System_String_o *)StringLiteral_17517/*"clearAnimFinised"*/;
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
  TweenWidth_o *v12; // x0

  if ( (byte_4218856 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventRaidStatusComponent_TypeInfo, gameObj);
    sub_B0D8A4(&Method_UITweener_Begin_TweenAlpha___, v10);
    byte_4218856 = 1;
  }
  v11 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v11 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  v12 = UITweener__Begin_TweenWidth_(
          gameObj,
          v11->static_fields->FRAME_ANIM_DURATION,
          (const MethodInfo_205679C *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v12 )
    sub_B0D97C(0LL);
  *(float *)&v12->fields.from = from;
  *(float *)&v12->fields.to = to;
  v12->fields.style = tweenMethod;
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
  UnityEngine_Object_o *raidBossHpHead; // x21
  UnityEngine_GameObject_o *v9; // x0
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *raidBossStatus; // x21
  UnityEngine_GameObject_o *v12; // x0
  const MethodInfo *v13; // x3
  UnityEngine_GameObject_o *v14; // x21
  TitleInfoEventRaidStatusComponent_c *v15; // x8
  int clickCallBack; // w9
  char *v17; // x21
  __int64 v18; // x8
  float y; // w9
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_GameObject_o *v33; // x0
  const MethodInfo *v34; // x3
  UnityEngine_GameObject_o *v35; // x0
  const MethodInfo *v36; // x3

  if ( (byte_4218854 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, callFinished);
    sub_B0D8A4(&TitleInfoEventRaidStatusComponent_TypeInfo, v5);
    sub_B0D8A4(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_4218854 = 1;
  }
  if ( BYTE5(this->fields.clickCallBack) )
  {
    gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    raidBossHpHead = (UnityEngine_Object_o *)this->fields.raidBossHpHead;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(raidBossHpHead, 0LL, 0LL) )
    {
      gameObject = (char *)this->fields.raidBossHpHead;
      if ( !gameObject )
        goto LABEL_26;
      v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
        (TitleInfoEventRaidStatusComponent_o *)v9,
        v9,
        0.0,
        1.0,
        6,
        v10);
    }
    raidBossStatus = (UnityEngine_Object_o *)this->fields.raidBossStatus;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(raidBossStatus, 0LL, 0LL) )
    {
      gameObject = (char *)this->fields.raidBossStatus;
      if ( !gameObject )
        goto LABEL_26;
      v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
        (TitleInfoEventRaidStatusComponent_o *)v12,
        v12,
        0.0,
        1.0,
        6,
        v13);
    }
  }
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v15 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  gameObject = (char *)UITweener__Begin_TweenWidth_(
                         v14,
                         v15->static_fields->FRAME_ANIM_DURATION,
                         (const MethodInfo_205679C *)Method_UITweener_Begin_TweenPosition___);
  if ( !gameObject )
    goto LABEL_26;
  clickCallBack = (int)this->fields.clickCallBack;
  v17 = gameObject;
  *((_QWORD *)gameObject + 15) = *(_QWORD *)&this->fields.outPos.fields.z;
  *((_DWORD *)gameObject + 32) = clickCallBack;
  v18 = *(_QWORD *)&this->fields.inPos.fields.z;
  y = this->fields.outPos.fields.y;
  *((_DWORD *)gameObject + 6) = 6;
  *(_QWORD *)(gameObject + 132) = v18;
  *((float *)gameObject + 35) = y;
  v20 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v17 + 9) = v20;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 72), v20, v21, v22, v23, v24, v25, v26);
  *((_QWORD *)v17 + 10) = callFinished;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v17 + 80),
    (System_Int32_array **)callFinished,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  gameObject = (char *)this->fields.raidBossHp;
  if ( !gameObject )
LABEL_26:
    sub_B0D97C(gameObject);
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
    (TitleInfoEventRaidStatusComponent_o *)v33,
    v33,
    0.0,
    1.0,
    6,
    v34);
  if ( BYTE4(this->fields.clickCallBack) )
  {
    gameObject = (char *)this->fields.raidBossName;
    if ( gameObject )
    {
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
        (TitleInfoEventRaidStatusComponent_o *)v35,
        v35,
        0.0,
        1.0,
        6,
        v36);
      return;
    }
    goto LABEL_26;
  }
}


void __fastcall TitleInfoEventRaidStatusComponent__FrameOut(
        TitleInfoEventRaidStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoEventRaidStatusComponent_c *v8; // x8
  char *raidBossHp; // x0
  float y; // w9
  char *v11; // x21
  __int64 v12; // x8
  int clickCallBack; // w9
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_GameObject_o *v27; // x0
  const MethodInfo *v28; // x3
  UnityEngine_GameObject_o *v29; // x0
  const MethodInfo *v30; // x3
  UnityEngine_Object_o *raidBossHpHead; // x20
  UnityEngine_GameObject_o *v32; // x0
  const MethodInfo *v33; // x3
  UnityEngine_Object_o *raidBossStatus; // x20
  UnityEngine_GameObject_o *v35; // x0
  const MethodInfo *v36; // x3

  if ( (byte_4218855 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, callFinished);
    sub_B0D8A4(&TitleInfoEventRaidStatusComponent_TypeInfo, v5);
    sub_B0D8A4(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_4218855 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v8 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  raidBossHp = (char *)UITweener__Begin_TweenWidth_(
                         gameObject,
                         v8->static_fields->FRAME_ANIM_DURATION,
                         (const MethodInfo_205679C *)Method_UITweener_Begin_TweenPosition___);
  if ( !raidBossHp )
    goto LABEL_25;
  y = this->fields.outPos.fields.y;
  v11 = raidBossHp;
  *((_QWORD *)raidBossHp + 15) = *(_QWORD *)&this->fields.inPos.fields.z;
  *((float *)raidBossHp + 32) = y;
  v12 = *(_QWORD *)&this->fields.outPos.fields.z;
  clickCallBack = (int)this->fields.clickCallBack;
  *((_DWORD *)raidBossHp + 6) = 2;
  *(_QWORD *)(raidBossHp + 132) = v12;
  *((_DWORD *)raidBossHp + 35) = clickCallBack;
  v14 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v11 + 9) = v14;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 72), v14, v15, v16, v17, v18, v19, v20);
  *((_QWORD *)v11 + 10) = callFinished;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v11 + 80),
    (System_Int32_array **)callFinished,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  raidBossHp = (char *)this->fields.raidBossHp;
  if ( !raidBossHp )
    goto LABEL_25;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)raidBossHp, 0LL);
  TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
    (TitleInfoEventRaidStatusComponent_o *)v27,
    v27,
    1.0,
    0.0,
    2,
    v28);
  if ( BYTE4(this->fields.clickCallBack) )
  {
    raidBossHp = (char *)this->fields.raidBossName;
    if ( !raidBossHp )
      goto LABEL_25;
    v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)raidBossHp, 0LL);
    TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
      (TitleInfoEventRaidStatusComponent_o *)v29,
      v29,
      1.0,
      0.0,
      2,
      v30);
  }
  if ( BYTE5(this->fields.clickCallBack) )
  {
    raidBossHpHead = (UnityEngine_Object_o *)this->fields.raidBossHpHead;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(raidBossHpHead, 0LL, 0LL) )
    {
      raidBossHp = (char *)this->fields.raidBossHpHead;
      if ( !raidBossHp )
        goto LABEL_25;
      v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)raidBossHp, 0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
        (TitleInfoEventRaidStatusComponent_o *)v32,
        v32,
        1.0,
        0.0,
        2,
        v33);
    }
    raidBossStatus = (UnityEngine_Object_o *)this->fields.raidBossStatus;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(raidBossStatus, 0LL, 0LL) )
    {
      raidBossHp = (char *)this->fields.raidBossStatus;
      if ( raidBossHp )
      {
        v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)raidBossHp, 0LL);
        TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
          (TitleInfoEventRaidStatusComponent_o *)v35,
          v35,
          1.0,
          0.0,
          2,
          v36);
        return;
      }
LABEL_25:
      sub_B0D97C(raidBossHp);
    }
  }
}


float __fastcall TitleInfoEventRaidStatusComponent__GetCellHeight(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *StatusHeight; // x0
  struct UILabel_o *raidBossHp; // x8

  StatusHeight = *(EventBossStatusUiEntity_o **)&this->fields.currentDay;
  if ( !StatusHeight
    || (StatusHeight = (EventBossStatusUiEntity_o *)EventBossStatusUiEntity__GetStatusHeight(StatusHeight, 0LL),
        (int)StatusHeight <= 0) )
  {
    raidBossHp = this->fields.raidBossHp;
    if ( !raidBossHp )
      sub_B0D97C(StatusHeight);
    LODWORD(StatusHeight) = raidBossHp->fields.mHeight;
  }
  return (float)(int)StatusHeight;
}


System_String_o *__fastcall TitleInfoEventRaidStatusComponent__GetRestCountText(
        TitleInfoEventRaidStatusComponent_o *this,
        int64_t totalHp,
        int64_t totalDamage,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  EventBossStatusUiEntity_o *v8; // x0
  System_String_o *CountFormat; // x20
  Il2CppObject *NumberFormat_32897236; // x0
  System_String_o *v11; // x19
  int64_t v13; // [xsp+8h] [xbp-28h] BYREF
  int64_t v14; // [xsp+18h] [xbp-18h] BYREF

  v14 = totalHp;
  if ( (byte_421884B & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, totalHp);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_5640/*"EVENT_DEFEAT_COUNT_TXT"*/, v7);
    byte_421884B = 1;
  }
  v8 = *(EventBossStatusUiEntity_o **)&this->fields.currentDay;
  if ( v8
    && (CountFormat = EventBossStatusUiEntity__GetCountFormat(v8, 0LL), !System_String__IsNullOrEmpty(CountFormat, 0LL)) )
  {
    v11 = System_Int64__ToString((int64_t)&v14, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    NumberFormat_32897236 = (Il2CppObject *)LocalizationManager__GetNumberFormat_32897236(v11, 0LL);
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    CountFormat = LocalizationManager__Get((System_String_o *)StringLiteral_5640/*"EVENT_DEFEAT_COUNT_TXT"*/, 0LL);
    v13 = totalDamage;
    NumberFormat_32897236 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13);
  }
  return System_String__Format(CountFormat, NumberFormat_32897236, 0LL);
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
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8

  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    sub_B0D97C(this);
  return eventBossStatusUiEntity->fields.eventId == eventId && eventBossStatusUiEntity->fields.idx == day;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__MoveUp(
        TitleInfoEventRaidStatusComponent_o *this,
        int32_t moveY,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x0
  float x; // s10
  float y; // s8
  float z; // s9
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoEventRaidStatusComponent_c *v11; // x8
  TweenWidth_o *v12; // x21
  int32_t v13; // s0
  int32_t v14; // s1
  int v15; // s2
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4218858 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventRaidStatusComponent_TypeInfo, *(_QWORD *)&moveY);
    sub_B0D8A4(&Method_UITweener_Begin_TweenPosition___, v5);
    byte_4218858 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v11 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  v12 = UITweener__Begin_TweenWidth_(
          gameObject,
          v11->static_fields->FRAME_ANIM_DURATION,
          (const MethodInfo_205679C *)Method_UITweener_Begin_TweenPosition___);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (*(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localPosition(transform, 0LL), !v12) )
LABEL_10:
    sub_B0D97C(transform);
  v12->fields.from = v13;
  v12->fields.to = v14;
  *(_DWORD *)&v12->fields.updateTable = v15;
  *((float *)&v12->fields.updateTable + 1) = x;
  *(float *)&v12->fields.mWidget = y + (float)moveY;
  *((float *)&v12->fields.mWidget + 1) = z;
  v12->fields.style = 2;
  v16 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v16;
  sub_B0D840((BattleServantConfConponent_o *)&v12->fields.eventReceiver, v16, v17, v18, v19, v20, v21, v22);
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
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4218857 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v2);
    sub_B0D8A4(&TopHomeRequest_TypeInfo, v3);
    byte_4218857 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210848 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4210848 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate(0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
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
  unsigned __int64 v10; // x20
  int v11; // w22
  UILabel_o *raidBattle; // x19
  unsigned __int64 v13; // x21
  System_String_o *v14; // x20
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *Instance; // x0
  TitleInfoEventRaidStatusComponent_c *v18; // x0
  __int64 v19; // x1
  TerminalSceneComponent_c *v20; // x0
  const MethodInfo *v21; // x2
  TitleInfoEventRaidStatusComponent_o *v22; // x0
  const MethodInfo *v23; // x1
  System_String_o *v24; // x20
  Il2CppObject *v25; // x0
  int v26; // [xsp+Ch] [xbp-34h] BYREF
  int v27; // [xsp+18h] [xbp-28h] BYREF
  int v28; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4218847 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v6);
    sub_B0D8A4(&TitleInfoEventRaidStatusComponent_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_5701/*"EVENT_RAID_NEXT_TIME_1"*/, v8);
    sub_B0D8A4(&StringLiteral_5702/*"EVENT_RAID_NEXT_TIME_2"*/, v9);
    byte_4218847 = 1;
  }
  if ( BYTE5(this->fields.clickCallBack) && *(__int64 *)&this->fields.lastMinute >= 1 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v10 = *(_QWORD *)&this->fields.lastMinute - NetworkManager__getTime(0LL);
    if ( (__int64)v10 >= 1 )
    {
      v11 = v10 / 0x3C % 0x3C;
      if ( LODWORD(this[1].klass) == v11 )
        return;
      LODWORD(this[1].klass) = v11;
      raidBattle = (UILabel_o *)this->fields.raidBattle;
      v13 = v10 / 0xE10;
      if ( (int)(v10 / 0xE10) >= 1 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5701/*"EVENT_RAID_NEXT_TIME_1"*/, 0LL);
        v28 = v13;
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
        v27 = v11;
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
        Instance = System_String__Format_43845440(v14, v15, v16, 0LL);
        if ( !raidBattle )
          goto LABEL_39;
        goto LABEL_37;
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5702/*"EVENT_RAID_NEXT_TIME_2"*/, 0LL);
      v26 = v11;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
      Instance = System_String__Format(v24, v25, 0LL);
      if ( raidBattle )
      {
LABEL_37:
        UILabel__set_text(raidBattle, Instance, 0LL);
        return;
      }
LABEL_39:
      sub_B0D97C(Instance);
    }
    v18 = TitleInfoEventRaidStatusComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v18 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    if ( (__int64)(v10 + v18->static_fields->JUMBLE_TERMINAL_REFRESH_TIME_OFFSET) <= 0 )
    {
      Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_39;
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
      {
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_421083D )
        {
          sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v19);
          byte_421083D = 1;
        }
        v20 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v20 = TerminalSceneComponent_TypeInfo;
        }
        Instance = (System_String_o *)v20->static_fields->mInstance;
        if ( !Instance )
          goto LABEL_39;
        if ( TerminalSceneComponent__IsMapTouchEnabled((TerminalSceneComponent_o *)Instance, 0LL) )
        {
          *(_QWORD *)&this->fields.lastMinute = 0LL;
          TitleInfoEventRaidStatusComponent__FrameOut(this, 0LL, v21);
          TitleInfoEventRaidStatusComponent__RefreshTerminal(v22, v23);
        }
      }
    }
  }
}


void __fastcall TitleInfoEventRaidStatusComponent__SetBossIcon(
        TitleInfoEventRaidStatusComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  struct UILabel_o *raidBossHp; // x21
  struct UILabel_o *v6; // x0

  if ( (byte_4218848 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, spName);
    byte_4218848 = 1;
  }
  raidBossHp = this->fields.raidBossHp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v6 = (struct UILabel_o *)AtlasManager__SetEventUI((UISprite_o *)raidBossHp, spName, 0LL);
  if ( !raidBossHp )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)raidBossHp, (unsigned __int8)v6 & 1, 0LL);
  v6 = this->fields.raidBossHp;
  if ( !v6 )
    goto LABEL_12;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0LL) )
  {
    v6 = this->fields.raidBossHp;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
        v6,
        v6->klass->vtable._34_get_minWidth.methodPtr);
      return;
    }
LABEL_12:
    sub_B0D97C(v6);
  }
}


void __fastcall TitleInfoEventRaidStatusComponent__SetClearAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *eventBossStatusUiEntity; // x0
  const MethodInfo *v4; // x1
  struct EventBossStatusUiEntity_o *v5; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX_LAST; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4218851 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventRaidStatusComponent_TypeInfo, method);
    byte_4218851 = 1;
  }
  eventBossStatusUiEntity = (UnityEngine_GameObject_o *)this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_12;
  if ( !EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)eventBossStatusUiEntity, 0LL) )
  {
    eventBossStatusUiEntity = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !eventBossStatusUiEntity )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive(eventBossStatusUiEntity, 1, 0LL);
  }
  TitleInfoEventRaidStatusComponent__SetOutlineLastColor_32247864(this, v4);
  eventBossStatusUiEntity = (UnityEngine_GameObject_o *)TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
  }
  v5 = this->fields.eventBossStatusUiEntity;
  if ( !v5 )
LABEL_12:
    sub_B0D97C(eventBossStatusUiEntity);
  RAIDBOSS_ICON_SPNAME_PREFIX_LAST = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
  v7 = System_Int32__ToString((int)v5 + 48, 0LL);
  v8 = System_String__Concat_43849904(RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v7, 0LL);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__SetEntryAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  float v5; // s1
  TitleInfoEventRaidStatusComponent_c *v6; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v8; // d0
  float v9; // s2
  float v10; // [xsp+0h] [xbp-20h]

  if ( (byte_4218850 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventRaidStatusComponent_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_6048/*"EntryAnim"*/, v3);
    byte_4218850 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_11;
  *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.z = 0.0;
  this->fields.outPos.fields.x = v5;
  this->fields.outPos.fields.y = 0.0;
  v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
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
  *(float32x2_t *)&this->fields.outPos.fields.z = vadd_f32(v8, static_fields[10]);
  *(float *)&this->fields.clickCallBack = v9 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(
          transform,
          *(UnityEngine_Vector3_o *)&this->fields.outPos.fields.z,
          0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.raidBossHp) == 0LL)
    || ((*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
          transform,
          transform->klass[1]._1.element_class,
          0.0),
        (transform = (UnityEngine_Transform_o *)this->fields.raidBossName) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(transform);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
    transform,
    transform->klass[1]._1.element_class,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6048/*"EntryAnim"*/,
    TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->ENTRY_ANIM_DELAY
  + (float)(this->fields.outPos.fields.x / -500.0),
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
  if ( (byte_4218849 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, sprite);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v8);
    byte_4218849 = 1;
  }
  if ( (iconId & 0x80000000) != 0 )
    goto LABEL_8;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_43852188(prefix, (System_String_o *)StringLiteral_15952/*"_"*/, v9, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v10, 0LL) )
  {
LABEL_8:
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(sprite, prefix, 0LL);
  }
}


void __fastcall TitleInfoEventRaidStatusComponent__SetHpBarPosition(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *v3; // x0
  UnityEngine_Component_o *raidBossName; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v6; // [xsp+0h] [xbp-20h] BYREF

  v6.fields.z = 0.0;
  *(_QWORD *)&v6.fields.x = 0LL;
  UnityEngine_Vector3__get_zero(0LL);
  v3 = *(EventBossStatusUiEntity_o **)&this->fields.currentDay;
  if ( v3 && EventBossStatusUiEntity__TryGetHpBarPos(v3, &v6, 0LL) )
  {
    raidBossName = (UnityEngine_Component_o *)this->fields.raidBossName;
    if ( !raidBossName )
      sub_B0D97C(0LL);
    gameObject = UnityEngine_Component__get_gameObject(raidBossName, 0LL);
    GameObjectExtensions__SetLocalPosition(gameObject, v6, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineBattleColor(
        TitleInfoEventRaidStatusComponent_o *this,
        UILabel_o *label,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *v5; // x20
  TitleInfoEventRaidStatusComponent_c *v6; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct TitleInfoEventRaidStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_421884C & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventRaidStatusComponent_TypeInfo, label);
    byte_421884C = 1;
  }
  v5 = *(EventBossStatusUiEntity_o **)&this->fields.currentDay;
  v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( v5 )
  {
    if ( (WORD1(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    *(UnityEngine_Color_o *)&r = EventBossStatusUiEntity__GetStatusBattleColor(
                                   v5,
                                   v6->static_fields->RAIDBOSS_OUTLINE_COLOR_BATTLE,
                                   0LL);
    if ( label )
      goto LABEL_8;
LABEL_13:
    sub_B0D97C(v6);
  }
  if ( (WORD1(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  static_fields = v6->static_fields;
  r = static_fields->RAIDBOSS_OUTLINE_COLOR_BATTLE.fields.r;
  g = static_fields->RAIDBOSS_OUTLINE_COLOR_BATTLE.fields.g;
  b = static_fields->RAIDBOSS_OUTLINE_COLOR_BATTLE.fields.b;
  a = static_fields->RAIDBOSS_OUTLINE_COLOR_BATTLE.fields.a;
  if ( !label )
    goto LABEL_13;
LABEL_8:
  UILabel__set_effectColor(label, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineBattleColor_32246968(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  TitleInfoEventRaidStatusComponent__SetOutlineBattleColor(this, this->fields.raidBossName, v2);
  if ( BYTE5(this->fields.clickCallBack) )
  {
    TitleInfoEventRaidStatusComponent__SetOutlineBattleColor(this, this->fields.raidBossStatus, v4);
    TitleInfoEventRaidStatusComponent__SetOutlineBattleColor(this, this->fields.raidBossHpHead, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineColor(
        TitleInfoEventRaidStatusComponent_o *this,
        UILabel_o *label,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *v3; // x0
  __int64 v5; // x0
  int v6; // s0
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = *(EventBossStatusUiEntity_o **)&this->fields.currentDay;
  if ( v3 )
  {
    v10.fields.r = 0.0;
    v10.fields.g = 0.0;
    v10.fields.b = 0.0;
    v10.fields.a = 0.0;
    *(UnityEngine_Color_o *)&v6 = EventBossStatusUiEntity__GetTextEffectColor(v3, v10, 0LL);
    if ( !label )
      sub_B0D97C(v5);
    UILabel__set_effectColor(label, *(UnityEngine_Color_o *)&v6, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineColorAndDefault(
        TitleInfoEventRaidStatusComponent_o *this,
        UILabel_o *label,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *v4; // x0

  v4 = *(EventBossStatusUiEntity_o **)&this->fields.currentDay;
  if ( v4 )
    defaultColor = EventBossStatusUiEntity__GetTextEffectColor(v4, defaultColor, 0LL);
  if ( !label )
    sub_B0D97C(v4);
  UILabel__set_effectColor(label, defaultColor, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineLastColor(
        TitleInfoEventRaidStatusComponent_o *this,
        UILabel_o *label,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *v5; // x20
  TitleInfoEventRaidStatusComponent_c *v6; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct TitleInfoEventRaidStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_421884D & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventRaidStatusComponent_TypeInfo, label);
    byte_421884D = 1;
  }
  v5 = *(EventBossStatusUiEntity_o **)&this->fields.currentDay;
  v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( v5 )
  {
    if ( (WORD1(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    *(UnityEngine_Color_o *)&r = EventBossStatusUiEntity__GetStatusLastColor(
                                   v5,
                                   v6->static_fields->RAIDBOSS_OUTLINE_COLOR_LAST,
                                   0LL);
    if ( label )
      goto LABEL_8;
LABEL_13:
    sub_B0D97C(v6);
  }
  if ( (WORD1(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  static_fields = v6->static_fields;
  r = static_fields->RAIDBOSS_OUTLINE_COLOR_LAST.fields.r;
  g = static_fields->RAIDBOSS_OUTLINE_COLOR_LAST.fields.g;
  b = static_fields->RAIDBOSS_OUTLINE_COLOR_LAST.fields.b;
  a = static_fields->RAIDBOSS_OUTLINE_COLOR_LAST.fields.a;
  if ( !label )
    goto LABEL_13;
LABEL_8:
  UILabel__set_effectColor(label, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineLastColor_32247864(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  TitleInfoEventRaidStatusComponent__SetOutlineLastColor(this, this->fields.raidBossName, v2);
  if ( BYTE5(this->fields.clickCallBack) )
  {
    TitleInfoEventRaidStatusComponent__SetOutlineLastColor(this, this->fields.raidBossStatus, v4);
    TitleInfoEventRaidStatusComponent__SetOutlineLastColor(this, this->fields.raidBossHpHead, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineWinColor(
        TitleInfoEventRaidStatusComponent_o *this,
        UILabel_o *label,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *v5; // x20
  TitleInfoEventRaidStatusComponent_c *v6; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct TitleInfoEventRaidStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_421884E & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventRaidStatusComponent_TypeInfo, label);
    byte_421884E = 1;
  }
  v5 = *(EventBossStatusUiEntity_o **)&this->fields.currentDay;
  v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( v5 )
  {
    if ( (WORD1(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    *(UnityEngine_Color_o *)&r = EventBossStatusUiEntity__GetStatusWinColor(
                                   v5,
                                   v6->static_fields->RAIDBOSS_OUTLINE_COLOR_WIN,
                                   0LL);
    if ( label )
      goto LABEL_8;
LABEL_13:
    sub_B0D97C(v6);
  }
  if ( (WORD1(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  static_fields = v6->static_fields;
  r = static_fields->RAIDBOSS_OUTLINE_COLOR_WIN.fields.r;
  g = static_fields->RAIDBOSS_OUTLINE_COLOR_WIN.fields.g;
  b = static_fields->RAIDBOSS_OUTLINE_COLOR_WIN.fields.b;
  a = static_fields->RAIDBOSS_OUTLINE_COLOR_WIN.fields.a;
  if ( !label )
    goto LABEL_13;
LABEL_8:
  UILabel__set_effectColor(label, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineWinColor_32247940(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  TitleInfoEventRaidStatusComponent__SetOutlineWinColor(this, this->fields.raidBossName, v2);
  if ( BYTE5(this->fields.clickCallBack) )
  {
    TitleInfoEventRaidStatusComponent__SetOutlineWinColor(this, this->fields.raidBossStatus, v4);
    TitleInfoEventRaidStatusComponent__SetOutlineWinColor(this, this->fields.raidBossHpHead, v5);
  }
}


bool __fastcall TitleInfoEventRaidStatusComponent__SetSubGroupBattleIdIcon(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UISprite_o *v5; // x20
  TitleInfoEventRaidStatusComponent_c *v6; // x0
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x21
  TitleInfoEventRaidStatusComponent_c *v12; // x0
  UISprite_o *v13; // x19
  System_String_o *v14; // x20
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  int v18; // [xsp+8h] [xbp-38h] BYREF
  int script_high; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4218859 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&int_TypeInfo, v3);
    sub_B0D8A4(&TitleInfoEventRaidStatusComponent_TypeInfo, v4);
    byte_4218859 = 1;
  }
  v5 = *(UISprite_o **)&this->fields.subGroupCount;
  v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    sub_B0D97C(v6);
  RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID;
  script_high = HIDWORD(eventBossStatusUiEntity->fields.script);
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &script_high);
  v10 = System_String__Format(RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID, v9, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventUI(v5, v10, 0LL) )
  {
    return 1;
  }
  else
  {
    v12 = TitleInfoEventRaidStatusComponent_TypeInfo;
    v13 = *(UISprite_o **)&this->fields.subGroupCount;
    if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v12 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    v14 = v12->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID;
    v18 = 1;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v16 = System_String__Format(v14, v15, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    return AtlasManager__SetEventUI(v13, v16, 0LL);
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
  System_Int32_array *v7; // x7
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  struct EventBossStatusUiEntity_o **p_eventBossStatusUiEntity; // x20
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x9
  int v23; // w8
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v25; // x22
  System_String_o *v26; // x23
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  UnityEngine_Object_o *v29; // x21
  System_Int32_array **EntityFromEventIdAndIndex; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UISprite_o *subGroupPartition; // x21
  TitleInfoEventRaidStatusComponent_c *v38; // x0
  System_String_o *RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT; // x22
  const MethodInfo *v40; // x4
  struct EventBossStatusUiEntity_o *v41; // x8
  bool v42; // w1
  int v43; // w21
  UnityEngine_GameObject_o *v44; // x20
  UnityEngine_GameObject_o *v45; // x20

  if ( (byte_4218846 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, eventRaidEntity);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v15);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v16);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B0D8A4(&TitleInfoEventRaidStatusComponent_TypeInfo, v20);
    byte_4218846 = 1;
  }
  this->fields.eventBossStatusUiEntity = (struct EventBossStatusUiEntity_o *)eventRaidEntity;
  p_eventBossStatusUiEntity = &this->fields.eventBossStatusUiEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventBossStatusUiEntity,
    (System_Int32_array **)eventRaidEntity,
    *(System_String_array ***)&warId,
    *(System_String_array ***)&currentDay,
    (System_Boolean_array **)isJumbleRaid,
    (System_Int32_array **)isReprintLastWarRaid,
    (System_Int32_array *)method,
    v7);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  v23 = isJumbleRaid;
  LODWORD(this->fields.targetTime) = warId;
  BYTE5(this->fields.clickCallBack) = isJumbleRaid;
  BYTE6(this->fields.clickCallBack) = isReprintLastWarRaid;
  if ( eventBossStatusUiEntity )
  {
    LODWORD(this->fields.inPos.fields.y) = currentDay;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_52;
    v25 = gameObject;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0LL);
    if ( !eventRaidEntity )
      goto LABEL_52;
    v26 = (System_String_o *)gameObject;
    v27 = System_Int32__ToString((int)eventRaidEntity + 20, 0LL);
    v28 = System_String__Concat_43849904(v26, v27, 0LL);
    UnityEngine_Object__set_name(v25, v28, 0LL);
    gameObject = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Object_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)gameObject,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Object_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                           eventRaidEntity->fields.eventId,
                                           (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !gameObject )
      goto LABEL_52;
    v29 = gameObject;
    BYTE4(this->fields.clickCallBack) = EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Object_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)gameObject,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    if ( !gameObject )
      goto LABEL_52;
    EntityFromEventIdAndIndex = (System_Int32_array **)EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                                         (EventBossStatusUiMaster_o *)gameObject,
                                                         v29->fields.m_CachedPtr,
                                                         LODWORD(this->fields.inPos.fields.y),
                                                         0LL);
    *(_QWORD *)&this->fields.currentDay = EntityFromEventIdAndIndex;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.currentDay,
      EntityFromEventIdAndIndex,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    v23 = BYTE5(this->fields.clickCallBack);
  }
  if ( v23 )
  {
    subGroupPartition = this->fields.subGroupPartition;
    v38 = TitleInfoEventRaidStatusComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v38 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT = v38->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(subGroupPartition, RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT, 0LL);
    AtlasManager__SetEventUI(
      this->fields.subGroup,
      TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK,
      0LL);
    gameObject = (UnityEngine_Object_o *)AtlasManager__SetEventUI(
                                           (UISprite_o *)this->fields.eventRaidEntity,
                                           TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION,
                                           0LL);
    v41 = this->fields.eventBossStatusUiEntity;
    if ( !v41 )
      goto LABEL_52;
    TitleInfoEventRaidStatusComponent__SetEventIcon(
      (TitleInfoEventRaidStatusComponent_o *)gameObject,
      this->fields.subGroupBattleId,
      TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_STATUS_01,
      v41[1].fields.eventId,
      v40);
    gameObject = (UnityEngine_Object_o *)this->fields.raidBossHpHead;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Object_o *)this->fields.raidBossStatus;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Object_o *)this->fields.raidBossName;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Object_o *)this->fields.subGroupBattleId;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Object_o *)this->fields.raidBattle;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Object_o *)*p_eventBossStatusUiEntity;
    if ( !*p_eventBossStatusUiEntity )
      goto LABEL_52;
    if ( EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)gameObject, 0LL) )
    {
      gameObject = (UnityEngine_Object_o *)this->fields.subGroupBase;
      if ( !gameObject )
        goto LABEL_52;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
      if ( !gameObject )
        goto LABEL_52;
      v42 = 0;
    }
    else
    {
      if ( SLODWORD(this->fields.subGroupGrid) >= 1 )
      {
        v43 = 0;
        while ( 1 )
        {
          gameObject = (UnityEngine_Object_o *)this->fields.subGroup;
          if ( !gameObject )
            goto LABEL_52;
          v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v45 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)v44,
                                              (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v45, 0LL, 0LL) )
          {
            GameObjectExtensions__SafeSetParent(v45, (UnityEngine_Component_o *)this->fields.subGroupBase, 0LL);
            if ( ++v43 < SLODWORD(this->fields.subGroupGrid) )
              continue;
          }
          break;
        }
      }
      gameObject = (UnityEngine_Object_o *)this->fields.subGroupBase;
      if ( !gameObject )
        goto LABEL_52;
      ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))gameObject->klass[1]._1.castClass)(
        gameObject,
        gameObject->klass[1]._1.declaringType);
      gameObject = (UnityEngine_Object_o *)this->fields.subGroupBase;
      if ( !gameObject )
        goto LABEL_52;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
      if ( !gameObject )
        goto LABEL_52;
      v42 = 1;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v42, 0LL);
  }
  ((void (__fastcall *)(TitleInfoEventRaidStatusComponent_o *, Il2CppMethodPointer))this->klass->vtable._5_UpdateDisp.method)(
    this,
    this->klass->vtable._6_IsEventRaidBoss.methodPtr);
  if ( BYTE5(this->fields.clickCallBack) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      return;
    }
LABEL_52:
    sub_B0D97C(gameObject);
  }
}


void __fastcall TitleInfoEventRaidStatusComponent__StartClearAnim(
        TitleInfoEventRaidStatusComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v12; // x2
  float y; // s8
  TitleInfoEventRaidStatusComponent_c *v14; // x0
  struct TitleInfoEventRaidStatusComponent_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct TitleInfoEventRaidStatusComponent_StaticFields *v19; // x10
  float v20; // s1
  float v21; // s2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4218852 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventRaidStatusComponent_TypeInfo, callback);
    sub_B0D8A4(&StringLiteral_1980/*"AnimFrameOutEnd"*/, v10);
    byte_4218852 = 1;
  }
  *(_QWORD *)&this->fields.warId = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.warId,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.z = 0.0;
  this->fields.outPos.fields.x = localPosition.fields.y;
  this->fields.outPos.fields.y = 0.0;
  y = localPosition.fields.y;
  v14 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( BYTE5(this->fields.clickCallBack) )
  {
    if ( (WORD1(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v14 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    static_fields = v14->static_fields;
    p_x = &static_fields->FRAME_ANIM_OUT_POS_JUMBLE.fields.x;
    p_y = &static_fields->FRAME_ANIM_OUT_POS_JUMBLE.fields.y;
    p_z = &static_fields->FRAME_ANIM_OUT_POS_JUMBLE.fields.z;
  }
  else
  {
    if ( (WORD1(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v14 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    v19 = v14->static_fields;
    p_x = &v19->FRAME_ANIM_OUT_POS_DELTA.fields.x;
    p_y = &v19->FRAME_ANIM_OUT_POS_DELTA.fields.y;
    p_z = &v19->FRAME_ANIM_OUT_POS_DELTA.fields.z;
  }
  v20 = y + *p_y;
  v21 = *p_z + 0.0;
  this->fields.outPos.fields.z = *p_x + 0.0;
  *(float *)&this->fields.isRaidDefeatCount = v20;
  *(float *)&this->fields.clickCallBack = v21;
  TitleInfoEventRaidStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_1980/*"AnimFrameOutEnd"*/, v12);
}


bool __fastcall TitleInfoEventRaidStatusComponent__TryGetGridPosition(
        TitleInfoEventRaidStatusComponent_o *this,
        UnityEngine_Vector3_o *pos,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *v5; // x0
  __int64 v6; // x9
  UnityEngine_Vector3_o v8; // [xsp+0h] [xbp-20h] BYREF

  v8.fields.z = 0.0;
  *(_QWORD *)&v8.fields.x = 0LL;
  *pos = UnityEngine_Vector3__get_zero(0LL);
  v5 = *(EventBossStatusUiEntity_o **)&this->fields.currentDay;
  if ( v5 )
  {
    if ( EventBossStatusUiEntity__TryGetGridPos(v5, &v8, 0LL) )
    {
      v6 = *(_QWORD *)&v8.fields.x;
      LOBYTE(v5) = 1;
      pos->fields.z = v8.fields.z;
      *(_QWORD *)&pos->fields.x = v6;
    }
    else
    {
      LOBYTE(v5) = 0;
    }
  }
  return (char)v5;
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
  __int64 v17; // x1
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  int32_t eventId; // w20
  int32_t idx; // w21
  __int64 gameObject; // x0
  DataManager_o *v22; // x24
  struct EventBossStatusUiEntity_o *v23; // x8
  void *monitor; // x28
  int64_t v25; // x27
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX_LAST; // x25
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  EventRaidMaster_o *v29; // x26
  struct EventBossStatusUiEntity_o *v30; // x8
  int32_t RaidGroupDeadQuestId; // w0
  int32_t v32; // w24
  struct EventBossStatusUiEntity_o *v33; // x8
  UILabel_o *raidBossHpHead; // x25
  UnityEngine_Behaviour_o *v35; // x25
  const MethodInfo *v36; // x1
  UnityEngine_GameObject_o *v37; // x25
  struct EventBossStatusUiEntity_o *v38; // x8
  __int64 v39; // x22
  const MethodInfo *v40; // x1
  struct EventBossStatusUiEntity_o *v41; // x8
  UIWidget_o *raidBossHp; // x27
  bool v43; // w1
  System_String_o *v44; // x23
  struct EventBossStatusUiEntity_o *v45; // x8
  UnityEngine_Behaviour_o *v46; // x25
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x22
  UILabel_o *v48; // x25
  const MethodInfo *v49; // x3
  UILabel_o *raidBossStatus; // x25
  UILabel_o *raidBossName; // x27
  System_String_o *v52; // x25
  Il2CppObject *v53; // x0
  struct EventBossStatusUiEntity_o *v54; // x8
  int32_t SubGroupNow; // w27
  int32_t v56; // w26
  int v57; // w22
  __int64 v58; // x28
  __int64 v59; // x24
  unsigned int v60; // w8
  UnityEngine_GameObject_o *v61; // x25
  UnityEngine_Object_o *Child; // x25
  UnityEngine_GameObject_o *v63; // x25
  TitleInfoEventRaidStatusComponent_c *v64; // x0
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x4
  UISprite_o *subGroupBattleId; // x20
  struct EventBossStatusUiEntity_o *v68; // x8
  TitleInfoEventRaidStatusComponent_c *v69; // x0
  const MethodInfo *v70; // x1
  System_String_o **v71; // x8
  struct EventBossStatusUiEntity_o *v72; // x8
  System_String_o *v73; // x0
  System_String_o *v74; // x0
  const MethodInfo *v75; // x2
  char v76; // [xsp+8h] [xbp-78h]
  int32_t v77; // [xsp+Ch] [xbp-74h]
  System_String_o *v78; // [xsp+10h] [xbp-70h]
  __int64 v79; // [xsp+18h] [xbp-68h]
  __int64 v80; // [xsp+20h] [xbp-60h] BYREF
  TotalEventRaidEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_421884A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaidMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v4);
    sub_B0D8A4(&long_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Transform__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Transform__get_Item__, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v12);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v13);
    sub_B0D8A4(&TitleInfoEventRaidStatusComponent_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_5703/*"EVENT_RAID_REST_COUNT_AFTER"*/, v15);
    sub_B0D8A4(&StringLiteral_5704/*"EVENT_RAID_REST_COUNT_BEFORE"*/, v16);
    sub_B0D8A4(&StringLiteral_1/*""*/, v17);
    byte_421884A = 1;
  }
  entity = 0LL;
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    return;
  eventId = eventBossStatusUiEntity->fields.eventId;
  idx = eventBossStatusUiEntity->fields.idx;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_160;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)gameObject,
    idx <= SLODWORD(this->fields.inPos.fields.y),
    0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_160;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    return;
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_160;
  v22 = (DataManager_o *)gameObject;
  gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !gameObject )
    goto LABEL_160;
  gameObject = TotalEventRaidMaster__TryGetEntity((TotalEventRaidMaster_o *)gameObject, &entity, eventId, idx, 0LL);
  v23 = this->fields.eventBossStatusUiEntity;
  if ( !v23 )
    goto LABEL_160;
  monitor = v23[1].monitor;
  v25 = entity ? entity->fields.totalDamage : 0LL;
  gameObject = (__int64)this->fields.raidBossHp;
  if ( !gameObject )
    goto LABEL_160;
  RAIDBOSS_ICON_SPNAME_PREFIX_LAST = (System_String_o *)StringLiteral_1/*""*/;
  gameObject = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                          (UnityEngine_Component_o *)gameObject,
                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !gameObject )
    goto LABEL_160;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 1, 0LL);
  TitleInfoEventRaidStatusComponent__SetOutlineBattleColor_32246968(this, v27);
  TitleInfoEventRaidStatusComponent__SetHpBarPosition(this, v28);
  if ( idx == LODWORD(this->fields.inPos.fields.y) )
  {
    gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            v22,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
    if ( !this->fields.eventBossStatusUiEntity )
      goto LABEL_160;
    v29 = (EventRaidMaster_o *)gameObject;
    gameObject = EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)this->fields.eventBossStatusUiEntity, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      v30 = this->fields.eventBossStatusUiEntity;
      if ( !v30 || !v29 )
        goto LABEL_160;
      RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(v29, eventId, (int32_t)v30->fields.script, 0LL);
    }
    else
    {
      if ( !v29 )
        goto LABEL_160;
      RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v29, eventId, idx, 0LL);
    }
    v32 = RaidGroupDeadQuestId;
    if ( RaidGroupDeadQuestId < 1 )
    {
      gameObject = 0LL;
    }
    else
    {
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      gameObject = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !gameObject )
        goto LABEL_160;
      gameObject = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)gameObject, v32, -1, 0, 0LL);
    }
    v76 = gameObject;
    if ( BYTE5(this->fields.clickCallBack) )
    {
      v33 = this->fields.eventBossStatusUiEntity;
      if ( !v33 )
        goto LABEL_160;
      gameObject = (__int64)this->fields.raidBossHpHead;
      if ( !gameObject )
        goto LABEL_160;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)v33[1].klass, 0LL);
      gameObject = (__int64)this->fields.raidBossHpHead;
      if ( !gameObject )
        goto LABEL_160;
      v78 = RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_160;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      raidBossHpHead = this->fields.raidBossHpHead;
      gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      }
      if ( !raidBossHpHead )
        goto LABEL_160;
      UILabel__SetCondensedScale(
        raidBossHpHead,
        TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
        0LL);
      v35 = *(UnityEngine_Behaviour_o **)&this->fields.subGroupCount;
      gameObject = TitleInfoEventRaidStatusComponent__SetSubGroupBattleIdIcon(this, v36);
      if ( !v35 )
        goto LABEL_160;
      UnityEngine_Behaviour__set_enabled(v35, gameObject & 1, 0LL);
      gameObject = *(_QWORD *)&this->fields.subGroupCount;
      if ( !gameObject )
        goto LABEL_160;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !this->fields.eventBossStatusUiEntity )
        goto LABEL_160;
      v37 = (UnityEngine_GameObject_o *)gameObject;
      gameObject = EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)this->fields.eventBossStatusUiEntity, 0LL);
      if ( !v37 )
        goto LABEL_160;
      UnityEngine_GameObject__SetActive(v37, (gameObject & 1) == 0, 0LL);
      gameObject = *(_QWORD *)&this->fields.subGroupCount;
      if ( !gameObject )
        goto LABEL_160;
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
                     gameObject,
                     *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
      v38 = this->fields.eventBossStatusUiEntity;
      if ( !v38 )
        goto LABEL_160;
      v39 = *(_QWORD *)&v38[2].fields.eventId;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      gameObject = NetworkManager__getTime(0LL);
      v79 = v25;
      if ( v39 <= gameObject )
      {
        raidBossStatus = this->fields.raidBossStatus;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5704/*"EVENT_RAID_REST_COUNT_BEFORE"*/, 0LL);
        if ( !raidBossStatus )
          goto LABEL_160;
        UILabel__set_text(raidBossStatus, (System_String_o *)gameObject, 0LL);
        gameObject = (__int64)this->fields.raidBossStatus;
        if ( !gameObject )
          goto LABEL_160;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_160;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        raidBossName = this->fields.raidBossName;
        v52 = LocalizationManager__Get((System_String_o *)StringLiteral_5703/*"EVENT_RAID_REST_COUNT_AFTER"*/, 0LL);
        v80 = (__int64)monitor - v79;
        v53 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v80);
        gameObject = (__int64)System_String__Format(v52, v53, 0LL);
        if ( !raidBossName )
          goto LABEL_160;
        UILabel__set_text(raidBossName, (System_String_o *)gameObject, 0LL);
        gameObject = (__int64)this->fields.raidBossName;
        if ( !gameObject )
          goto LABEL_160;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_160;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (__int64)this->fields.subGroupBattleId;
        if ( !gameObject )
          goto LABEL_160;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        v54 = this->fields.eventBossStatusUiEntity;
        if ( !v54 || !gameObject )
          goto LABEL_160;
        v43 = (__int64)v54[1].monitor > v79;
      }
      else
      {
        v41 = this->fields.eventBossStatusUiEntity;
        if ( !v41 )
          goto LABEL_160;
        *(_QWORD *)&this->fields.lastMinute = *(_QWORD *)&v41[2].fields.eventId;
        TitleInfoEventRaidStatusComponent__RefreshTimeStr(this, v40);
        gameObject = (__int64)this->fields.raidBattle;
        if ( !gameObject )
          goto LABEL_160;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_160;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
        raidBossHp = (UIWidget_o *)this->fields.raidBossHp;
        if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
          gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
        }
        if ( !raidBossHp )
          goto LABEL_160;
        UIWidget__set_color(raidBossHp, *(UnityEngine_Color_o *)(*(_QWORD *)(gameObject + 184) + 112LL), 0LL);
        gameObject = (__int64)this->fields.subGroupBattleId;
        if ( !gameObject )
          goto LABEL_160;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_160;
        v43 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v43, 0LL);
      v77 = v32;
      SubGroupNow = EventRaidMaster__GetSubGroupNow(v29, (EventRaidEntity_o *)this->fields.eventBossStatusUiEntity, 0LL);
      gameObject = EventRaidMaster__GetSubGroupMax(v29, (EventRaidEntity_o *)this->fields.eventBossStatusUiEntity, 0LL);
      if ( !this->fields.subGroupBase )
        goto LABEL_160;
      v56 = gameObject;
      gameObject = (__int64)UIGrid__GetChildList((UIGrid_o *)this->fields.subGroupBase, 0LL);
      if ( !gameObject )
        goto LABEL_160;
      v57 = *(_DWORD *)(gameObject + 24);
      v58 = gameObject;
      if ( v57 >= 1 )
      {
        v59 = 0LL;
        v60 = *(_DWORD *)(gameObject + 24);
        while ( 1 )
        {
          if ( v60 <= (unsigned int)v59 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          gameObject = *(_QWORD *)(*(_QWORD *)(v58 + 16) + 8 * v59 + 32);
          if ( !gameObject )
            goto LABEL_160;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_160;
          v61 = (UnityEngine_GameObject_o *)gameObject;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (int)v59 < v56, 0LL);
          Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(v61, 0, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          gameObject = UnityEngine_Object__op_Inequality(Child, 0LL, 0LL);
          if ( (gameObject & 1) != 0 )
          {
            if ( !Child )
              goto LABEL_160;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Child, 0LL);
            if ( !gameObject )
              goto LABEL_160;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (int)v59 >= SubGroupNow, 0LL);
          }
          if ( (int)v59 + 1 >= v57 )
            break;
          v60 = *(_DWORD *)(v58 + 24);
          ++v59;
        }
      }
      gameObject = (__int64)this->fields.eventRaidEntity;
      if ( !gameObject )
        goto LABEL_160;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      v25 = v79;
      v32 = v77;
      v63 = (UnityEngine_GameObject_o *)gameObject;
      if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      }
      if ( !v63 )
        goto LABEL_160;
      UnityEngine_GameObject__SetActive(
        v63,
        v56 > TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_SUB_GROUP_PARTITION_INDEX,
        0LL);
      RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v78;
    }
    else if ( BYTE4(this->fields.clickCallBack) )
    {
      gameObject = (__int64)this->fields.raidBossName;
      if ( !gameObject )
        goto LABEL_160;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_160;
      v44 = RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v45 = this->fields.eventBossStatusUiEntity;
      if ( !v45 )
        goto LABEL_160;
      v46 = (UnityEngine_Behaviour_o *)this->fields.raidBossName;
      script = v45[2].fields.script;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      gameObject = NetworkManager__getTime(0LL);
      if ( !v46 )
        goto LABEL_160;
      UnityEngine_Behaviour__set_enabled(v46, (__int64)script > gameObject, 0LL);
      v48 = this->fields.raidBossName;
      gameObject = (__int64)TitleInfoEventRaidStatusComponent__GetRestCountText(this, (int64_t)monitor - v25, v25, v49);
      if ( !v48 )
        goto LABEL_160;
      UILabel__set_text(v48, (System_String_o *)gameObject, 0LL);
      RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v44;
    }
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    gameObject = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !gameObject )
      goto LABEL_160;
    if ( !clsQuestCheck__IsEncountRaidBoss((clsQuestCheck_o *)gameObject, eventId, idx, 0LL)
      && !BYTE4(this->fields.clickCallBack) )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_160;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      return;
    }
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    gameObject = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !gameObject )
      goto LABEL_160;
    if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)gameObject, v32, 0, 0LL) )
    {
      if ( BYTE4(this->fields.clickCallBack) )
      {
        if ( !BYTE5(this->fields.clickCallBack) )
          goto LABEL_120;
        gameObject = (__int64)this->fields.eventBossStatusUiEntity;
        if ( !gameObject )
          goto LABEL_160;
        if ( EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)gameObject, 0LL) )
        {
LABEL_120:
          gameObject = (__int64)this->fields.eventBossStatusUiEntity;
          if ( (v76 & 1) != 0 )
          {
            if ( !gameObject )
              goto LABEL_160;
            goto LABEL_131;
          }
          if ( !gameObject )
            goto LABEL_160;
          if ( *(_QWORD *)(gameObject + 40) <= v25 )
          {
LABEL_131:
            if ( EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)gameObject, 0LL) )
            {
              gameObject = (__int64)this->fields.subGroupBattleId;
              if ( !gameObject )
                goto LABEL_160;
              gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_160;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              subGroupBattleId = this->fields.subGroupBattleId;
              gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
              if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
              }
              v68 = this->fields.eventBossStatusUiEntity;
              if ( !v68 )
                goto LABEL_160;
              TitleInfoEventRaidStatusComponent__SetEventIcon(
                (TitleInfoEventRaidStatusComponent_o *)gameObject,
                subGroupBattleId,
                TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_STATUS_02,
                v68[1].fields.eventId,
                v66);
            }
            v69 = TitleInfoEventRaidStatusComponent_TypeInfo;
            if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
              v69 = TitleInfoEventRaidStatusComponent_TypeInfo;
            }
            RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v69->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
            TitleInfoEventRaidStatusComponent__SetOutlineLastColor_32247864(this, v65);
            goto LABEL_143;
          }
        }
      }
      v64 = TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
        v64 = TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v64->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE;
    }
  }
LABEL_143:
  gameObject = System_String__IsNullOrEmpty(RAIDBOSS_ICON_SPNAME_PREFIX_LAST, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.eventBossStatusUiEntity;
    if ( !gameObject )
      goto LABEL_160;
    if ( EventRaidEntity__isCleard((EventRaidEntity_o *)gameObject, 0LL) )
    {
      if ( BYTE4(this->fields.clickCallBack) )
        TitleInfoEventRaidStatusComponent__SetOutlineWinColor_32247940(this, v70);
      gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
        gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      v71 = (System_String_o **)(*(_QWORD *)(gameObject + 184) + 8LL);
    }
    else
    {
      gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
        gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      v71 = (System_String_o **)(*(_QWORD *)(gameObject + 184) + 16LL);
    }
    RAIDBOSS_ICON_SPNAME_PREFIX_LAST = *v71;
  }
  v72 = this->fields.eventBossStatusUiEntity;
  if ( !v72 )
LABEL_160:
    sub_B0D97C(gameObject);
  v73 = System_Int32__ToString((int)v72 + 48, 0LL);
  v74 = System_String__Concat_43849904(RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v73, 0LL);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v74, v75);
}


void __fastcall TitleInfoEventRaidStatusComponent__clearAnimFinised(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v2; // x0

  v2 = *(System_Action_o **)&this->fields.warId;
  if ( v2 )
    ActionExtensions__Call(v2, 0LL);
}


UISprite_o *__fastcall TitleInfoEventRaidStatusComponent__getIconSprite(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  return (UISprite_o *)this->fields.raidBossHp;
}


UISprite_o *__fastcall TitleInfoEventRaidStatusComponent__getSubGroupBase(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.subGroup;
}


void __fastcall TitleInfoEventRaidStatusComponent__onClick(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t RaidDeadQuestId; // w20
  DataManager_o *Instance; // x0
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8

  if ( (byte_421884F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaidMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_421884F = 1;
  }
  if ( this->fields.eventBossStatusUiEntity )
  {
    if ( BYTE6(this->fields.clickCallBack) )
      return;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
    eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
    if ( !eventBossStatusUiEntity || !Instance )
      goto LABEL_22;
    RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                        (EventRaidMaster_o *)Instance,
                        eventBossStatusUiEntity->fields.eventId,
                        eventBossStatusUiEntity->fields.idx,
                        0LL);
  }
  else
  {
    RaidDeadQuestId = 0;
  }
  if ( this->fields.clearAnimCallBack )
  {
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( Instance )
    {
      if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, RaidDeadQuestId, 0, 0LL) )
      {
        ActionExtensions__Call(this->fields.clearAnimCallBack, 0LL);
        return;
      }
      goto LABEL_17;
    }
LABEL_22:
    sub_B0D97C(Instance);
  }
LABEL_17:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
}


void __fastcall TitleInfoEventRaidStatusComponent__setClickCallBack(
        TitleInfoEventRaidStatusComponent_o *this,
        System_Action_o *cb,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.clearAnimCallBack = cb;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.clearAnimCallBack,
    (System_Int32_array **)cb,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}