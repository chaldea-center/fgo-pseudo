// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidStatusComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct TitleInfoEventRaidStatusComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v41; // x0
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v49; // x0
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v57; // x0
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v65; // x0
  System_Int32_array **v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct TitleInfoEventRaidStatusComponent_StaticFields *v73; // x0
  System_Int32_array **v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  TitleInfoEventRaidStatusComponent_c *v81; // x8
  struct TitleInfoEventRaidStatusComponent_StaticFields *v82; // x9
  struct TitleInfoEventRaidStatusComponent_StaticFields *v83; // x9
  __int64 v84; // d0 OVERLAPPED
  float v85; // s1
  float v86; // s2
  float v87; // s4
  float v88; // s5
  float v89; // s6
  TitleInfoEventRaidStatusComponent_c *v90; // x8
  float v91; // s4
  float v92; // s5
  float v93; // s6
  float v94; // s7
  float v95; // s4
  float v96; // s5
  float v97; // s6
  float v98; // s7
  float v99; // s4
  float v100; // s5
  float v101; // s6
  float v102; // s7
  struct UnityEngine_Color_o v103; // [xsp+0h] [xbp-60h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Color_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B4471 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_B52984(&StringLiteral_21860/*"raid_boss_status_battle_"*/);
    sub_B52984(&StringLiteral_21862/*"raid_boss_status_lose_"*/);
    sub_B52984(&StringLiteral_18695/*"event_raid_status_02"*/);
    sub_B52984(&StringLiteral_18696/*"event_raid_sub_group_back"*/);
    sub_B52984(&StringLiteral_21861/*"raid_boss_status_last_"*/);
    sub_B52984(&StringLiteral_18698/*"event_raid_sub_group_front"*/);
    sub_B52984(&StringLiteral_18697/*"event_raid_sub_group_battle_{0:00}"*/);
    sub_B52984(&StringLiteral_18694/*"event_raid_status_01"*/);
    sub_B52984(&StringLiteral_21863/*"raid_boss_status_win_"*/);
    sub_B52984(&StringLiteral_18699/*"event_raid_sub_group_partition"*/);
    byte_42B4471 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_21860/*"raid_boss_status_battle_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21860/*"raid_boss_status_battle_"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_21863/*"raid_boss_status_win_"*/;
  v9->RAIDBOSS_ICON_SPNAME_PREFIX_WIN = (struct System_String_o *)StringLiteral_21863/*"raid_boss_status_win_"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->RAIDBOSS_ICON_SPNAME_PREFIX_WIN, v10, v11, v12, v13, v14, v15, v16);
  v17 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_21862/*"raid_boss_status_lose_"*/;
  v17->RAIDBOSS_ICON_SPNAME_PREFIX_LOSE = (struct System_String_o *)StringLiteral_21862/*"raid_boss_status_lose_"*/;
  sub_B52920((BattleServantConfConponent_o *)&v17->RAIDBOSS_ICON_SPNAME_PREFIX_LOSE, v18, v19, v20, v21, v22, v23, v24);
  v25 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_21861/*"raid_boss_status_last_"*/;
  v25->RAIDBOSS_ICON_SPNAME_PREFIX_LAST = (struct System_String_o *)StringLiteral_21861/*"raid_boss_status_last_"*/;
  sub_B52920((BattleServantConfConponent_o *)&v25->RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v26, v27, v28, v29, v30, v31, v32);
  v33 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_18698/*"event_raid_sub_group_front"*/;
  v33->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT = (struct System_String_o *)StringLiteral_18698/*"event_raid_sub_group_front"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&v33->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_18696/*"event_raid_sub_group_back"*/;
  v41->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK = (struct System_String_o *)StringLiteral_18696/*"event_raid_sub_group_back"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&v41->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BACK,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v50 = (System_Int32_array **)StringLiteral_18699/*"event_raid_sub_group_partition"*/;
  v49->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION = (struct System_String_o *)StringLiteral_18699/*"event_raid_sub_group_partition"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&v49->RAIDBOSS_ICON_SPNAME_SUB_GROUP_PARTITION,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v57 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v58 = (System_Int32_array **)StringLiteral_18697/*"event_raid_sub_group_battle_{0:00}"*/;
  v57->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID = (struct System_String_o *)StringLiteral_18697/*"event_raid_sub_group_battle_{0:00}"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&v57->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v65 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v66 = (System_Int32_array **)StringLiteral_18694/*"event_raid_status_01"*/;
  v65->RAIDBOSS_ICON_SPNAME_STATUS_01 = (struct System_String_o *)StringLiteral_18694/*"event_raid_status_01"*/;
  sub_B52920((BattleServantConfConponent_o *)&v65->RAIDBOSS_ICON_SPNAME_STATUS_01, v66, v67, v68, v69, v70, v71, v72);
  v73 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  v74 = (System_Int32_array **)StringLiteral_18695/*"event_raid_status_02"*/;
  v73->RAIDBOSS_ICON_SPNAME_STATUS_02 = (struct System_String_o *)StringLiteral_18695/*"event_raid_status_02"*/;
  sub_B52920((BattleServantConfConponent_o *)&v73->RAIDBOSS_ICON_SPNAME_STATUS_02, v74, v75, v76, v77, v78, v79, v80);
  v81 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v82 = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&v82->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  v82->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  v83 = v81->static_fields;
  *(_QWORD *)&v83->FRAME_ANIM_OUT_POS_JUMBLE.fields.x = 3281387520LL;
  v83->FRAME_ANIM_OUT_POS_JUMBLE.fields.z = 0.0;
  v84 = COERCE_UNSIGNED_INT(0.5);
  v85 = 0.5;
  v86 = 0.5;
  v81->static_fields->FRAME_ANIM_DURATION = 0.3;
  v81->static_fields->ENTRY_ANIM_DELAY = 0.5;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  UnityEngine_Color___ctor_41463668(
    *(UnityEngine_Color_o *)&v84,
    v87,
    v88,
    v89,
    (const MethodInfo *)&methoda.return_type);
  v90 = TitleInfoEventRaidStatusComponent_TypeInfo;
  v105.fields.a = 1.0;
  TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->ICON_MASK_COLOR = *(struct UnityEngine_Color_o *)&methoda.return_type;
  v90->static_fields->JUMBLE_TERMINAL_REFRESH_TIME_OFFSET = 3;
  v90->static_fields->RAIDBOSS_SUB_GROUP_PARTITION_INDEX = 5;
  v105.fields.b = 0.20392;
  v90->static_fields->TITLE_LABEL_BASE_WIDTH = 120;
  v105.fields.g = 0.035294;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  v105.fields.r = 0.37647;
  UnityEngine_Color___ctor(v105, v91, v92, v93, v94, (const MethodInfo *)&methoda.name);
  v106.fields.b = 0.8;
  v106.fields.g = 0.37647;
  v106.fields.a = 1.0;
  TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_OUTLINE_COLOR_BATTLE = *(struct UnityEngine_Color_o *)&methoda.name;
  v106.fields.r = 0.16471;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor(v106, v95, v96, v97, v98, &methoda);
  v107.fields.g = 0.21961;
  v107.fields.b = 0.086275;
  TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_OUTLINE_COLOR_WIN = *(struct UnityEngine_Color_o *)&methoda.methodPointer;
  v107.fields.r = 0.29804;
  v107.fields.a = 1.0;
  v103 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v107, v99, v100, v101, v102, (const MethodInfo *)&v103);
  TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_OUTLINE_COLOR_LAST = v103;
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
  EventRaidEntity_o *eventBossStatusUiEntity; // x0
  System_Action_o *v5; // x0
  struct EventBossStatusUiEntity_o *v6; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX_WIN; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  System_String_o *v12; // x1

  if ( (byte_42B446A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_B52984(&StringLiteral_17586/*"clearAnimFinised"*/);
    byte_42B446A = 1;
  }
  if ( BYTE5(this->fields.clickCallBack) )
  {
    eventBossStatusUiEntity = (EventRaidEntity_o *)this->fields.eventBossStatusUiEntity;
    if ( eventBossStatusUiEntity )
    {
      if ( EventRaidEntity__IsJumbleSingleRaid(eventBossStatusUiEntity, 0LL) )
        goto LABEL_9;
      eventBossStatusUiEntity = (EventRaidEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( eventBossStatusUiEntity )
      {
        eventBossStatusUiEntity = (EventRaidEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)eventBossStatusUiEntity,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( eventBossStatusUiEntity )
        {
          EventRaidMaster__GetNextSubGroupEntity(
            (EventRaidMaster_o *)eventBossStatusUiEntity,
            (EventRaidEntity_o *)this->fields.eventBossStatusUiEntity,
            0LL);
LABEL_9:
          v5 = *(System_Action_o **)&this->fields.warId;
          if ( v5 )
            System_Action__Invoke(v5, 0LL);
          return;
        }
      }
    }
LABEL_20:
    sub_B52A5C(eventBossStatusUiEntity, method);
  }
  TitleInfoEventRaidStatusComponent__SetOutlineWinColor(this, this->fields.raidBossName, v2);
  eventBossStatusUiEntity = (EventRaidEntity_o *)TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
  }
  v6 = this->fields.eventBossStatusUiEntity;
  if ( !v6 )
    goto LABEL_20;
  RAIDBOSS_ICON_SPNAME_PREFIX_WIN = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_WIN;
  v8 = System_Int32__ToString((int)v6 + 48, 0LL);
  v9 = System_String__Concat_44568316(RAIDBOSS_ICON_SPNAME_PREFIX_WIN, v8, 0LL);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v9, v10);
  if ( *(_QWORD *)&this->fields.warId )
    v12 = (System_String_o *)StringLiteral_17586/*"clearAnimFinised"*/;
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
  TweenWidth_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_42B446D & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_B52984(&Method_UITweener_Begin_TweenAlpha___);
    byte_42B446D = 1;
  }
  v10 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v10 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  v11 = UITweener__Begin_TweenWidth_(
          gameObj,
          v10->static_fields->FRAME_ANIM_DURATION,
          (const MethodInfo_1F7CFF8 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v11 )
    sub_B52A5C(0LL, v12);
  *(float *)&v11->fields.from = from;
  *(float *)&v11->fields.to = to;
  v11->fields.style = tweenMethod;
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
  UnityEngine_Object_o *raidBossHpHead; // x21
  UnityEngine_GameObject_o *v8; // x0
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *raidBossStatus; // x21
  UnityEngine_GameObject_o *v11; // x0
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *v13; // x21
  TitleInfoEventRaidStatusComponent_c *v14; // x8
  int clickCallBack; // w9
  char *v16; // x21
  __int64 v17; // x8
  float y; // w9
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_GameObject_o *v32; // x0
  const MethodInfo *v33; // x3
  UnityEngine_GameObject_o *v34; // x0
  const MethodInfo *v35; // x3

  if ( (byte_42B446B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_B52984(&Method_UITweener_Begin_TweenPosition___);
    byte_42B446B = 1;
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
      v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
        (TitleInfoEventRaidStatusComponent_o *)v8,
        v8,
        0.0,
        1.0,
        6,
        v9);
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
      v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
        (TitleInfoEventRaidStatusComponent_o *)v11,
        v11,
        0.0,
        1.0,
        6,
        v12);
    }
  }
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v14 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  gameObject = (char *)UITweener__Begin_TweenWidth_(
                         v13,
                         v14->static_fields->FRAME_ANIM_DURATION,
                         (const MethodInfo_1F7CFF8 *)Method_UITweener_Begin_TweenPosition___);
  if ( !gameObject )
    goto LABEL_26;
  clickCallBack = (int)this->fields.clickCallBack;
  v16 = gameObject;
  *((_QWORD *)gameObject + 15) = *(_QWORD *)&this->fields.outPos.fields.z;
  *((_DWORD *)gameObject + 32) = clickCallBack;
  v17 = *(_QWORD *)&this->fields.inPos.fields.z;
  y = this->fields.outPos.fields.y;
  *((_DWORD *)gameObject + 6) = 6;
  *(_QWORD *)(gameObject + 132) = v17;
  *((float *)gameObject + 35) = y;
  v19 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v16 + 9) = v19;
  sub_B52920((BattleServantConfConponent_o *)(v16 + 72), v19, v20, v21, v22, v23, v24, v25);
  *((_QWORD *)v16 + 10) = callFinished;
  sub_B52920(
    (BattleServantConfConponent_o *)(v16 + 80),
    (System_Int32_array **)callFinished,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  gameObject = (char *)this->fields.raidBossHp;
  if ( !gameObject )
LABEL_26:
    sub_B52A5C(gameObject, v6);
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
    (TitleInfoEventRaidStatusComponent_o *)v32,
    v32,
    0.0,
    1.0,
    6,
    v33);
  if ( BYTE4(this->fields.clickCallBack) )
  {
    gameObject = (char *)this->fields.raidBossName;
    if ( gameObject )
    {
      v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
        (TitleInfoEventRaidStatusComponent_o *)v34,
        v34,
        0.0,
        1.0,
        6,
        v35);
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
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoEventRaidStatusComponent_c *v6; // x8
  char *raidBossHp; // x0
  __int64 v8; // x1
  float y; // w9
  char *v10; // x21
  __int64 v11; // x8
  int clickCallBack; // w9
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_GameObject_o *v26; // x0
  const MethodInfo *v27; // x3
  UnityEngine_GameObject_o *v28; // x0
  const MethodInfo *v29; // x3
  UnityEngine_Object_o *raidBossHpHead; // x20
  UnityEngine_GameObject_o *v31; // x0
  const MethodInfo *v32; // x3
  UnityEngine_Object_o *raidBossStatus; // x20
  UnityEngine_GameObject_o *v34; // x0
  const MethodInfo *v35; // x3

  if ( (byte_42B446C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_B52984(&Method_UITweener_Begin_TweenPosition___);
    byte_42B446C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
    v6 = TitleInfoEventRaidStatusComponent_TypeInfo;
  }
  raidBossHp = (char *)UITweener__Begin_TweenWidth_(
                         gameObject,
                         v6->static_fields->FRAME_ANIM_DURATION,
                         (const MethodInfo_1F7CFF8 *)Method_UITweener_Begin_TweenPosition___);
  if ( !raidBossHp )
    goto LABEL_25;
  y = this->fields.outPos.fields.y;
  v10 = raidBossHp;
  *((_QWORD *)raidBossHp + 15) = *(_QWORD *)&this->fields.inPos.fields.z;
  *((float *)raidBossHp + 32) = y;
  v11 = *(_QWORD *)&this->fields.outPos.fields.z;
  clickCallBack = (int)this->fields.clickCallBack;
  *((_DWORD *)raidBossHp + 6) = 2;
  *(_QWORD *)(raidBossHp + 132) = v11;
  *((_DWORD *)raidBossHp + 35) = clickCallBack;
  v13 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v10 + 9) = v13;
  sub_B52920((BattleServantConfConponent_o *)(v10 + 72), v13, v14, v15, v16, v17, v18, v19);
  *((_QWORD *)v10 + 10) = callFinished;
  sub_B52920(
    (BattleServantConfConponent_o *)(v10 + 80),
    (System_Int32_array **)callFinished,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  raidBossHp = (char *)this->fields.raidBossHp;
  if ( !raidBossHp )
    goto LABEL_25;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)raidBossHp, 0LL);
  TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
    (TitleInfoEventRaidStatusComponent_o *)v26,
    v26,
    1.0,
    0.0,
    2,
    v27);
  if ( BYTE4(this->fields.clickCallBack) )
  {
    raidBossHp = (char *)this->fields.raidBossName;
    if ( !raidBossHp )
      goto LABEL_25;
    v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)raidBossHp, 0LL);
    TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
      (TitleInfoEventRaidStatusComponent_o *)v28,
      v28,
      1.0,
      0.0,
      2,
      v29);
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
      v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)raidBossHp, 0LL);
      TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
        (TitleInfoEventRaidStatusComponent_o *)v31,
        v31,
        1.0,
        0.0,
        2,
        v32);
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
        v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)raidBossHp, 0LL);
        TitleInfoEventRaidStatusComponent__BeginTweenAlphaAnim(
          (TitleInfoEventRaidStatusComponent_o *)v34,
          v34,
          1.0,
          0.0,
          2,
          v35);
        return;
      }
LABEL_25:
      sub_B52A5C(raidBossHp, v8);
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
      sub_B52A5C(StatusHeight, method);
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
  EventBossStatusUiEntity_o *v6; // x0
  System_String_o *CountFormat; // x20
  Il2CppObject *NumberFormat_34073440; // x0
  System_String_o *v9; // x19
  int64_t v11; // [xsp+8h] [xbp-28h] BYREF
  int64_t v12; // [xsp+18h] [xbp-18h] BYREF

  v12 = totalHp;
  if ( (byte_42B4462 & 1) == 0 )
  {
    sub_B52984(&long_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_5666/*"EVENT_DEFEAT_COUNT_TXT"*/);
    byte_42B4462 = 1;
  }
  v6 = *(EventBossStatusUiEntity_o **)&this->fields.currentDay;
  if ( v6
    && (CountFormat = EventBossStatusUiEntity__GetCountFormat(v6, 0LL), !System_String__IsNullOrEmpty(CountFormat, 0LL)) )
  {
    v9 = System_Int64__ToString((int64_t)&v12, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    NumberFormat_34073440 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34073440(v9, 0LL);
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    CountFormat = LocalizationManager__Get((System_String_o *)StringLiteral_5666/*"EVENT_DEFEAT_COUNT_TXT"*/, 0LL);
    v11 = totalDamage;
    NumberFormat_34073440 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v11);
  }
  return System_String__Format(CountFormat, NumberFormat_34073440, 0LL);
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
    sub_B52A5C(this, eventId);
  return eventBossStatusUiEntity->fields.eventId == eventId && eventBossStatusUiEntity->fields.idx == day;
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

  if ( (byte_42B446F & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_B52984(&Method_UITweener_Begin_TweenPosition___);
    byte_42B446F = 1;
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
          (const MethodInfo_1F7CFF8 *)Method_UITweener_Begin_TweenPosition___);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (*(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localPosition(transform, 0LL), !v12) )
LABEL_10:
    sub_B52A5C(transform, v6);
  v12->fields.from = v13;
  v12->fields.to = v14;
  *(_DWORD *)&v12->fields.updateTable = v15;
  *((float *)&v12->fields.updateTable + 1) = x;
  *(float *)&v12->fields.mWidget = y + (float)moveY;
  *((float *)&v12->fields.mWidget + 1) = z;
  v12->fields.style = 2;
  v16 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v16;
  sub_B52920((BattleServantConfConponent_o *)&v12->fields.eventReceiver, v16, v17, v18, v19, v20, v21, v22);
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
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B446E & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&TopHomeRequest_TypeInfo);
    byte_42B446E = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2AB )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2AB = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate(0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall TitleInfoEventRaidStatusComponent__RefreshTimeStr(
        TitleInfoEventRaidStatusComponent_o *this,
        const MethodInfo *method)
{
  unsigned __int64 v3; // x20
  int v4; // w22
  UILabel_o *raidBattle; // x19
  unsigned __int64 v6; // x21
  System_String_o *v7; // x20
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *Instance; // x0
  __int64 v11; // x1
  TitleInfoEventRaidStatusComponent_c *v12; // x0
  TerminalSceneComponent_c *v13; // x0
  const MethodInfo *v14; // x2
  TitleInfoEventRaidStatusComponent_o *v15; // x0
  const MethodInfo *v16; // x1
  System_String_o *v17; // x20
  Il2CppObject *v18; // x0
  int v19; // [xsp+Ch] [xbp-34h] BYREF
  int v20; // [xsp+18h] [xbp-28h] BYREF
  int v21; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42B445E & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_B52984(&StringLiteral_5727/*"EVENT_RAID_NEXT_TIME_1"*/);
    sub_B52984(&StringLiteral_5728/*"EVENT_RAID_NEXT_TIME_2"*/);
    byte_42B445E = 1;
  }
  if ( BYTE5(this->fields.clickCallBack) && *(__int64 *)&this->fields.lastMinute >= 1 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v3 = *(_QWORD *)&this->fields.lastMinute - NetworkManager__getTime(0LL);
    if ( (__int64)v3 >= 1 )
    {
      v4 = v3 / 0x3C % 0x3C;
      if ( LODWORD(this[1].klass) == v4 )
        return;
      LODWORD(this[1].klass) = v4;
      raidBattle = (UILabel_o *)this->fields.raidBattle;
      v6 = v3 / 0xE10;
      if ( (int)(v3 / 0xE10) >= 1 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5727/*"EVENT_RAID_NEXT_TIME_1"*/, 0LL);
        v21 = v6;
        v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
        v20 = v4;
        v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
        Instance = System_String__Format_44563852(v7, v8, v9, 0LL);
        if ( !raidBattle )
          goto LABEL_39;
        goto LABEL_37;
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_RAID_NEXT_TIME_2"*/, 0LL);
      v19 = v4;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
      Instance = System_String__Format(v17, v18, 0LL);
      if ( raidBattle )
      {
LABEL_37:
        UILabel__set_text(raidBattle, Instance, 0LL);
        return;
      }
LABEL_39:
      sub_B52A5C(Instance, v11);
    }
    v12 = TitleInfoEventRaidStatusComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v12 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    if ( (__int64)(v3 + v12->static_fields->JUMBLE_TERMINAL_REFRESH_TIME_OFFSET) <= 0 )
    {
      Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_39;
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
      {
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_42AC2A0 )
        {
          sub_B52984(&TerminalSceneComponent_TypeInfo);
          byte_42AC2A0 = 1;
        }
        v13 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v13 = TerminalSceneComponent_TypeInfo;
        }
        Instance = (System_String_o *)v13->static_fields->mInstance;
        if ( !Instance )
          goto LABEL_39;
        if ( TerminalSceneComponent__IsMapTouchEnabled((TerminalSceneComponent_o *)Instance, 0LL) )
        {
          *(_QWORD *)&this->fields.lastMinute = 0LL;
          TitleInfoEventRaidStatusComponent__FrameOut(this, 0LL, v14);
          TitleInfoEventRaidStatusComponent__RefreshTerminal(v15, v16);
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
  __int64 v7; // x1

  if ( (byte_42B445F & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    byte_42B445F = 1;
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
    sub_B52A5C(v6, v7);
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

  if ( (byte_42B4468 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_42B4468 = 1;
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
  TitleInfoEventRaidStatusComponent__SetOutlineLastColor_33393860(this, v4);
  eventBossStatusUiEntity = (UnityEngine_GameObject_o *)TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
  }
  v5 = this->fields.eventBossStatusUiEntity;
  if ( !v5 )
LABEL_12:
    sub_B52A5C(eventBossStatusUiEntity, method);
  RAIDBOSS_ICON_SPNAME_PREFIX_LAST = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
  v7 = System_Int32__ToString((int)v5 + 48, 0LL);
  v8 = System_String__Concat_44568316(RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v7, 0LL);
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
  float v10; // [xsp+0h] [xbp-20h]

  if ( (byte_42B4467 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_B52984(&StringLiteral_6074/*"EntryAnim"*/);
    byte_42B4467 = 1;
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
    sub_B52A5C(transform, v4);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
    transform,
    transform->klass[1]._1.element_class,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6074/*"EntryAnim"*/,
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
  System_String_o *v8; // x0
  System_String_o *v9; // x21
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = iconId;
  if ( (byte_42B4460 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&StringLiteral_16011/*"_"*/);
    byte_42B4460 = 1;
  }
  if ( (iconId & 0x80000000) != 0 )
    goto LABEL_8;
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  v9 = System_String__Concat_44570600(prefix, (System_String_o *)StringLiteral_16011/*"_"*/, v8, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v9, 0LL) )
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
  __int64 v4; // x1
  UnityEngine_Component_o *raidBossName; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v7; // [xsp+0h] [xbp-20h] BYREF

  v7.fields.z = 0.0;
  *(_QWORD *)&v7.fields.x = 0LL;
  UnityEngine_Vector3__get_zero(0LL);
  v3 = *(EventBossStatusUiEntity_o **)&this->fields.currentDay;
  if ( v3 && EventBossStatusUiEntity__TryGetHpBarPos(v3, &v7, 0LL) )
  {
    raidBossName = (UnityEngine_Component_o *)this->fields.raidBossName;
    if ( !raidBossName )
      sub_B52A5C(0LL, v4);
    gameObject = UnityEngine_Component__get_gameObject(raidBossName, 0LL);
    GameObjectExtensions__SetLocalPosition(gameObject, v7, 0LL);
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

  if ( (byte_42B4463 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_42B4463 = 1;
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
    sub_B52A5C(v6, label);
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


void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineBattleColor_33392964(
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
  __int64 v6; // x1
  int v7; // s0
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = *(EventBossStatusUiEntity_o **)&this->fields.currentDay;
  if ( v3 )
  {
    v11.fields.r = 0.0;
    v11.fields.g = 0.0;
    v11.fields.b = 0.0;
    v11.fields.a = 0.0;
    *(UnityEngine_Color_o *)&v7 = EventBossStatusUiEntity__GetTextEffectColor(v3, v11, 0LL);
    if ( !label )
      sub_B52A5C(v5, v6);
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
  EventBossStatusUiEntity_o *v4; // x0

  v4 = *(EventBossStatusUiEntity_o **)&this->fields.currentDay;
  if ( v4 )
    defaultColor = EventBossStatusUiEntity__GetTextEffectColor(v4, defaultColor, 0LL);
  if ( !label )
    sub_B52A5C(v4, label);
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

  if ( (byte_42B4464 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_42B4464 = 1;
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
    sub_B52A5C(v6, label);
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


void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineLastColor_33393860(
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

  if ( (byte_42B4465 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_42B4465 = 1;
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
    sub_B52A5C(v6, label);
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


void __fastcall TitleInfoEventRaidStatusComponent__SetOutlineWinColor_33393936(
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
  UISprite_o *v3; // x20
  TitleInfoEventRaidStatusComponent_c *v4; // x0
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  System_String_o *RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID; // x21
  Il2CppObject *v7; // x0
  System_String_o *v8; // x21
  TitleInfoEventRaidStatusComponent_c *v10; // x0
  UISprite_o *v11; // x19
  System_String_o *v12; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  int v16; // [xsp+8h] [xbp-38h] BYREF
  int script_high; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B4470 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_42B4470 = 1;
  }
  v3 = *(UISprite_o **)&this->fields.subGroupCount;
  v4 = TitleInfoEventRaidStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    sub_B52A5C(v4, method);
  RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID = TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID;
  script_high = HIDWORD(eventBossStatusUiEntity->fields.script);
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &script_high);
  v8 = System_String__Format(RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID, v7, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventUI(v3, v8, 0LL) )
  {
    return 1;
  }
  else
  {
    v10 = TitleInfoEventRaidStatusComponent_TypeInfo;
    v11 = *(UISprite_o **)&this->fields.subGroupCount;
    if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v10 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    v12 = v10->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_BATTLE_ID;
    v16 = 1;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v14 = System_String__Format(v12, v13, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    return AtlasManager__SetEventUI(v11, v14, 0LL);
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
  struct EventBossStatusUiEntity_o **p_eventBossStatusUiEntity; // x20
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x9
  int v16; // w8
  UnityEngine_Object_o *gameObject; // x0
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x22
  System_String_o *v20; // x23
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  UnityEngine_Object_o *v23; // x21
  System_Int32_array **EntityFromEventIdAndIndex; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UISprite_o *subGroupPartition; // x21
  TitleInfoEventRaidStatusComponent_c *v32; // x0
  System_String_o *RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT; // x22
  const MethodInfo *v34; // x4
  struct EventBossStatusUiEntity_o *v35; // x8
  bool v36; // w1
  int v37; // w21
  UnityEngine_GameObject_o *v38; // x20
  UnityEngine_GameObject_o *v39; // x20

  if ( (byte_42B445D & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TitleInfoEventRaidStatusComponent_TypeInfo);
    byte_42B445D = 1;
  }
  this->fields.eventBossStatusUiEntity = (struct EventBossStatusUiEntity_o *)eventRaidEntity;
  p_eventBossStatusUiEntity = &this->fields.eventBossStatusUiEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventBossStatusUiEntity,
    (System_Int32_array **)eventRaidEntity,
    *(System_String_array ***)&warId,
    *(System_String_array ***)&currentDay,
    (System_Boolean_array **)isJumbleRaid,
    (System_Int32_array **)isReprintLastWarRaid,
    (System_Int32_array *)method,
    v7);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  v16 = isJumbleRaid;
  LODWORD(this->fields.targetTime) = warId;
  BYTE5(this->fields.clickCallBack) = isJumbleRaid;
  BYTE6(this->fields.clickCallBack) = isReprintLastWarRaid;
  if ( eventBossStatusUiEntity )
  {
    LODWORD(this->fields.inPos.fields.y) = currentDay;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_52;
    v19 = gameObject;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0LL);
    if ( !eventRaidEntity )
      goto LABEL_52;
    v20 = (System_String_o *)gameObject;
    v21 = System_Int32__ToString((int)eventRaidEntity + 20, 0LL);
    v22 = System_String__Concat_44568316(v20, v21, 0LL);
    UnityEngine_Object__set_name(v19, v22, 0LL);
    gameObject = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Object_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)gameObject,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Object_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                           eventRaidEntity->fields.eventId,
                                           (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !gameObject )
      goto LABEL_52;
    v23 = gameObject;
    BYTE4(this->fields.clickCallBack) = EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Object_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)gameObject,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    if ( !gameObject )
      goto LABEL_52;
    EntityFromEventIdAndIndex = (System_Int32_array **)EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                                         (EventBossStatusUiMaster_o *)gameObject,
                                                         v23->fields.m_CachedPtr,
                                                         LODWORD(this->fields.inPos.fields.y),
                                                         0LL);
    *(_QWORD *)&this->fields.currentDay = EntityFromEventIdAndIndex;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.currentDay,
      EntityFromEventIdAndIndex,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v16 = BYTE5(this->fields.clickCallBack);
  }
  if ( v16 )
  {
    subGroupPartition = this->fields.subGroupPartition;
    v32 = TitleInfoEventRaidStatusComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      v32 = TitleInfoEventRaidStatusComponent_TypeInfo;
    }
    RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT = v32->static_fields->RAIDBOSS_ICON_SPNAME_SUB_GROUP_FRONT;
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
    v35 = this->fields.eventBossStatusUiEntity;
    if ( !v35 )
      goto LABEL_52;
    TitleInfoEventRaidStatusComponent__SetEventIcon(
      (TitleInfoEventRaidStatusComponent_o *)gameObject,
      this->fields.subGroupBattleId,
      TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_STATUS_01,
      v35[1].fields.eventId,
      v34);
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
      v36 = 0;
    }
    else
    {
      if ( SLODWORD(this->fields.subGroupGrid) >= 1 )
      {
        v37 = 0;
        while ( 1 )
        {
          gameObject = (UnityEngine_Object_o *)this->fields.subGroup;
          if ( !gameObject )
            goto LABEL_52;
          v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v39 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)v38,
                                              (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v39, 0LL, 0LL) )
          {
            GameObjectExtensions__SafeSetParent(v39, (UnityEngine_Component_o *)this->fields.subGroupBase, 0LL);
            if ( ++v37 < SLODWORD(this->fields.subGroupGrid) )
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
      v36 = 1;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v36, 0LL);
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
    sub_B52A5C(gameObject, v18);
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
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
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

  if ( (byte_42B4469 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_B52984(&StringLiteral_1994/*"AnimFrameOutEnd"*/);
    byte_42B4469 = 1;
  }
  *(_QWORD *)&this->fields.warId = callback;
  sub_B52920(
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
    sub_B52A5C(0LL, v11);
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
  TitleInfoEventRaidStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_1994/*"AnimFrameOutEnd"*/, v12);
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
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  int32_t eventId; // w20
  int32_t idx; // w21
  __int64 gameObject; // x0
  const MethodInfo *v7; // x1
  DataManager_o *v8; // x24
  struct EventBossStatusUiEntity_o *v9; // x8
  void *monitor; // x28
  int64_t v11; // x27
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX_LAST; // x25
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  EventRaidMaster_o *v15; // x26
  struct EventBossStatusUiEntity_o *v16; // x8
  int32_t RaidGroupDeadQuestId; // w0
  int32_t v18; // w24
  struct EventBossStatusUiEntity_o *v19; // x8
  UILabel_o *raidBossHpHead; // x25
  UnityEngine_Behaviour_o *v21; // x25
  const MethodInfo *v22; // x1
  UnityEngine_GameObject_o *v23; // x25
  struct EventBossStatusUiEntity_o *v24; // x8
  __int64 v25; // x22
  struct EventBossStatusUiEntity_o *v26; // x8
  UIWidget_o *raidBossHp; // x27
  bool v28; // w1
  System_String_o *v29; // x23
  struct EventBossStatusUiEntity_o *v30; // x8
  UnityEngine_Behaviour_o *v31; // x25
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x22
  UILabel_o *v33; // x25
  const MethodInfo *v34; // x3
  UILabel_o *raidBossStatus; // x25
  UILabel_o *raidBossName; // x27
  System_String_o *v37; // x25
  Il2CppObject *v38; // x0
  struct EventBossStatusUiEntity_o *v39; // x8
  int32_t SubGroupNow; // w27
  int32_t v41; // w26
  int v42; // w22
  __int64 v43; // x28
  __int64 v44; // x24
  unsigned int v45; // w8
  UnityEngine_GameObject_o *v46; // x25
  UnityEngine_Object_o *Child; // x25
  UnityEngine_GameObject_o *v48; // x25
  TitleInfoEventRaidStatusComponent_c *v49; // x0
  const MethodInfo *v50; // x4
  UISprite_o *subGroupBattleId; // x20
  struct EventBossStatusUiEntity_o *v52; // x8
  TitleInfoEventRaidStatusComponent_c *v53; // x0
  System_String_o **v54; // x8
  struct EventBossStatusUiEntity_o *v55; // x8
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  const MethodInfo *v58; // x2
  char v59; // [xsp+8h] [xbp-78h]
  int32_t v60; // [xsp+Ch] [xbp-74h]
  System_String_o *v61; // [xsp+10h] [xbp-70h]
  __int64 v62; // [xsp+18h] [xbp-68h]
  __int64 v63; // [xsp+20h] [xbp-60h] BYREF
  TotalEventRaidEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42B4461 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_B52984(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&TitleInfoEventRaidStatusComponent_TypeInfo);
    sub_B52984(&StringLiteral_5729/*"EVENT_RAID_REST_COUNT_AFTER"*/);
    sub_B52984(&StringLiteral_5730/*"EVENT_RAID_REST_COUNT_BEFORE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B4461 = 1;
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
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_160;
  v8 = (DataManager_o *)gameObject;
  gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !gameObject )
    goto LABEL_160;
  gameObject = TotalEventRaidMaster__TryGetEntity((TotalEventRaidMaster_o *)gameObject, &entity, eventId, idx, 0LL);
  v9 = this->fields.eventBossStatusUiEntity;
  if ( !v9 )
    goto LABEL_160;
  monitor = v9[1].monitor;
  v11 = entity ? entity->fields.totalDamage : 0LL;
  gameObject = (__int64)this->fields.raidBossHp;
  if ( !gameObject )
    goto LABEL_160;
  RAIDBOSS_ICON_SPNAME_PREFIX_LAST = (System_String_o *)StringLiteral_1/*""*/;
  gameObject = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                          (UnityEngine_Component_o *)gameObject,
                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !gameObject )
    goto LABEL_160;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 1, 0LL);
  TitleInfoEventRaidStatusComponent__SetOutlineBattleColor_33392964(this, v13);
  TitleInfoEventRaidStatusComponent__SetHpBarPosition(this, v14);
  if ( idx == LODWORD(this->fields.inPos.fields.y) )
  {
    gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            v8,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRaidMaster___);
    if ( !this->fields.eventBossStatusUiEntity )
      goto LABEL_160;
    v15 = (EventRaidMaster_o *)gameObject;
    gameObject = EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)this->fields.eventBossStatusUiEntity, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      v16 = this->fields.eventBossStatusUiEntity;
      if ( !v16 || !v15 )
        goto LABEL_160;
      RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(v15, eventId, (int32_t)v16->fields.script, 0LL);
    }
    else
    {
      if ( !v15 )
        goto LABEL_160;
      RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v15, eventId, idx, 0LL);
    }
    v18 = RaidGroupDeadQuestId;
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
      gameObject = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !gameObject )
        goto LABEL_160;
      gameObject = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)gameObject, v18, -1, 0, 0LL);
    }
    v59 = gameObject;
    if ( BYTE5(this->fields.clickCallBack) )
    {
      v19 = this->fields.eventBossStatusUiEntity;
      if ( !v19 )
        goto LABEL_160;
      gameObject = (__int64)this->fields.raidBossHpHead;
      if ( !gameObject )
        goto LABEL_160;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)v19[1].klass, 0LL);
      gameObject = (__int64)this->fields.raidBossHpHead;
      if ( !gameObject )
        goto LABEL_160;
      v61 = RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
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
      v21 = *(UnityEngine_Behaviour_o **)&this->fields.subGroupCount;
      gameObject = TitleInfoEventRaidStatusComponent__SetSubGroupBattleIdIcon(this, v22);
      if ( !v21 )
        goto LABEL_160;
      UnityEngine_Behaviour__set_enabled(v21, gameObject & 1, 0LL);
      gameObject = *(_QWORD *)&this->fields.subGroupCount;
      if ( !gameObject )
        goto LABEL_160;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !this->fields.eventBossStatusUiEntity )
        goto LABEL_160;
      v23 = (UnityEngine_GameObject_o *)gameObject;
      gameObject = EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)this->fields.eventBossStatusUiEntity, 0LL);
      if ( !v23 )
        goto LABEL_160;
      UnityEngine_GameObject__SetActive(v23, (gameObject & 1) == 0, 0LL);
      gameObject = *(_QWORD *)&this->fields.subGroupCount;
      if ( !gameObject )
        goto LABEL_160;
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
                     gameObject,
                     *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
      v24 = this->fields.eventBossStatusUiEntity;
      if ( !v24 )
        goto LABEL_160;
      v25 = *(_QWORD *)&v24[2].fields.eventId;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      gameObject = NetworkManager__getTime(0LL);
      v62 = v11;
      if ( v25 <= gameObject )
      {
        raidBossStatus = this->fields.raidBossStatus;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5730/*"EVENT_RAID_REST_COUNT_BEFORE"*/, 0LL);
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
        v37 = LocalizationManager__Get((System_String_o *)StringLiteral_5729/*"EVENT_RAID_REST_COUNT_AFTER"*/, 0LL);
        v63 = (__int64)monitor - v62;
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v63);
        gameObject = (__int64)System_String__Format(v37, v38, 0LL);
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
        v39 = this->fields.eventBossStatusUiEntity;
        if ( !v39 || !gameObject )
          goto LABEL_160;
        v28 = (__int64)v39[1].monitor > v62;
      }
      else
      {
        v26 = this->fields.eventBossStatusUiEntity;
        if ( !v26 )
          goto LABEL_160;
        *(_QWORD *)&this->fields.lastMinute = *(_QWORD *)&v26[2].fields.eventId;
        TitleInfoEventRaidStatusComponent__RefreshTimeStr(this, v7);
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
        v28 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v28, 0LL);
      v60 = v18;
      SubGroupNow = EventRaidMaster__GetSubGroupNow(v15, (EventRaidEntity_o *)this->fields.eventBossStatusUiEntity, 0LL);
      gameObject = EventRaidMaster__GetSubGroupMax(v15, (EventRaidEntity_o *)this->fields.eventBossStatusUiEntity, 0LL);
      if ( !this->fields.subGroupBase )
        goto LABEL_160;
      v41 = gameObject;
      gameObject = (__int64)UIGrid__GetChildList((UIGrid_o *)this->fields.subGroupBase, 0LL);
      if ( !gameObject )
        goto LABEL_160;
      v42 = *(_DWORD *)(gameObject + 24);
      v43 = gameObject;
      if ( v42 >= 1 )
      {
        v44 = 0LL;
        v45 = *(_DWORD *)(gameObject + 24);
        while ( 1 )
        {
          if ( v45 <= (unsigned int)v44 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          gameObject = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 8 * v44 + 32);
          if ( !gameObject )
            goto LABEL_160;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_160;
          v46 = (UnityEngine_GameObject_o *)gameObject;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (int)v44 < v41, 0LL);
          Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(v46, 0, 0LL);
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
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (int)v44 >= SubGroupNow, 0LL);
          }
          if ( (int)v44 + 1 >= v42 )
            break;
          v45 = *(_DWORD *)(v43 + 24);
          ++v44;
        }
      }
      gameObject = (__int64)this->fields.eventRaidEntity;
      if ( !gameObject )
        goto LABEL_160;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      v11 = v62;
      v18 = v60;
      v48 = (UnityEngine_GameObject_o *)gameObject;
      if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
      }
      if ( !v48 )
        goto LABEL_160;
      UnityEngine_GameObject__SetActive(
        v48,
        v41 > TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_SUB_GROUP_PARTITION_INDEX,
        0LL);
      RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v61;
    }
    else if ( BYTE4(this->fields.clickCallBack) )
    {
      gameObject = (__int64)this->fields.raidBossName;
      if ( !gameObject )
        goto LABEL_160;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_160;
      v29 = RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v30 = this->fields.eventBossStatusUiEntity;
      if ( !v30 )
        goto LABEL_160;
      v31 = (UnityEngine_Behaviour_o *)this->fields.raidBossName;
      script = v30[2].fields.script;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      gameObject = NetworkManager__getTime(0LL);
      if ( !v31 )
        goto LABEL_160;
      UnityEngine_Behaviour__set_enabled(v31, (__int64)script > gameObject, 0LL);
      v33 = this->fields.raidBossName;
      gameObject = (__int64)TitleInfoEventRaidStatusComponent__GetRestCountText(this, (int64_t)monitor - v11, v11, v34);
      if ( !v33 )
        goto LABEL_160;
      UILabel__set_text(v33, (System_String_o *)gameObject, 0LL);
      RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v29;
    }
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    gameObject = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    gameObject = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !gameObject )
      goto LABEL_160;
    if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)gameObject, v18, 0, 0LL) )
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
          if ( (v59 & 1) != 0 )
          {
            if ( !gameObject )
              goto LABEL_160;
            goto LABEL_131;
          }
          if ( !gameObject )
            goto LABEL_160;
          if ( *(_QWORD *)(gameObject + 40) <= v11 )
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
              v52 = this->fields.eventBossStatusUiEntity;
              if ( !v52 )
                goto LABEL_160;
              TitleInfoEventRaidStatusComponent__SetEventIcon(
                (TitleInfoEventRaidStatusComponent_o *)gameObject,
                subGroupBattleId,
                TitleInfoEventRaidStatusComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_STATUS_02,
                v52[1].fields.eventId,
                v50);
            }
            v53 = TitleInfoEventRaidStatusComponent_TypeInfo;
            if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
              v53 = TitleInfoEventRaidStatusComponent_TypeInfo;
            }
            RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v53->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_LAST;
            TitleInfoEventRaidStatusComponent__SetOutlineLastColor_33393860(this, v7);
            goto LABEL_143;
          }
        }
      }
      v49 = TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
        v49 = TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      RAIDBOSS_ICON_SPNAME_PREFIX_LAST = v49->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX_BATTLE;
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
        TitleInfoEventRaidStatusComponent__SetOutlineWinColor_33393936(this, v7);
      gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      if ( (BYTE3(TitleInfoEventRaidStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventRaidStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidStatusComponent_TypeInfo);
        gameObject = (__int64)TitleInfoEventRaidStatusComponent_TypeInfo;
      }
      v54 = (System_String_o **)(*(_QWORD *)(gameObject + 184) + 8LL);
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
      v54 = (System_String_o **)(*(_QWORD *)(gameObject + 184) + 16LL);
    }
    RAIDBOSS_ICON_SPNAME_PREFIX_LAST = *v54;
  }
  v55 = this->fields.eventBossStatusUiEntity;
  if ( !v55 )
LABEL_160:
    sub_B52A5C(gameObject, v7);
  v56 = System_Int32__ToString((int)v55 + 48, 0LL);
  v57 = System_String__Concat_44568316(RAIDBOSS_ICON_SPNAME_PREFIX_LAST, v56, 0LL);
  TitleInfoEventRaidStatusComponent__SetBossIcon(this, v57, v58);
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
  int32_t RaidDeadQuestId; // w20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8

  if ( (byte_42B4466 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B4466 = 1;
  }
  if ( this->fields.eventBossStatusUiEntity )
  {
    if ( BYTE6(this->fields.clickCallBack) )
      return;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
    Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    sub_B52A5C(Instance, v5);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.clearAnimCallBack,
    (System_Int32_array **)cb,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}