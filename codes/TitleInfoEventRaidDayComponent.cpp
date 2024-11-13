void __fastcall TitleInfoEventRaidDayComponent___cctor(const MethodInfo *method)
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
  struct TitleInfoEventRaidDayComponent_StaticFields *static_fields; // x0
  int64_t v11; // x1

  if ( (byte_4B14536 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaidDayComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_19424/*"event_raid_num_"*/, v8, v9);
    byte_4B14536 = 1;
  }
  static_fields = TitleInfoEventRaidDayComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEPTH_FRONT = 0x100000003LL;
  v11 = StringLiteral_19424/*"event_raid_num_"*/;
  static_fields->NUM_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19424/*"event_raid_num_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->NUM_SPNAME_PREFIX, v11, v2, v3, v4, v5, v6, v7);
}


void __fastcall TitleInfoEventRaidDayComponent___ctor(TitleInfoEventRaidDayComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidDayComponent__SetDepth(
        TitleInfoEventRaidDayComponent_o *this,
        int32_t depth,
        const MethodInfo *method)
{
  UIWidget_o *dayStrSp; // x0

  dayStrSp = (UIWidget_o *)this->fields.dayStrSp;
  if ( !dayStrSp
    || (UIWidget__set_depth(dayStrSp, depth, 0LL), (dayStrSp = (UIWidget_o *)this->fields.dayNumSp) == 0LL)
    || (UIWidget__set_depth(dayStrSp, depth, 0LL), (dayStrSp = (UIWidget_o *)this->fields.dayLastSp) == 0LL) )
  {
    sub_1BCAA3C(dayStrSp, *(_QWORD *)&depth);
  }
  UIWidget__set_depth(dayStrSp, depth, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidDayComponent__Setup(
        TitleInfoEventRaidDayComponent_o *this,
        int32_t eventId,
        int32_t dispDayNum,
        int32_t dispDayType,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  EventRaidMaster_c *v16; // x0
  int32_t OLD_RAID_DAY_COUNT; // w8
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  UISprite_o *dayNumSp; // x21
  TitleInfoEventRaidDayComponent_c *v22; // x0
  System_String_o *NUM_SPNAME_PREFIX; // x22
  System_String_o *v24; // x0
  TitleInfoEventRaidDayComponent_c *v25; // x0
  int32_t DEPTH_BACK; // w1
  TitleInfoEventRaidDayComponent_c *v27; // x0
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  v28 = dispDayNum;
  if ( (byte_4B14535 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId, *(_QWORD *)&dispDayNum);
    sub_1BCA7E0(&EventRaidMaster_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&TitleInfoEventRaidDayComponent_TypeInfo, v12, v13);
    byte_4B14535 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v16 = EventRaidMaster_TypeInfo;
  if ( !EventRaidMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster_TypeInfo, v15);
    v16 = EventRaidMaster_TypeInfo;
  }
  if ( dispDayNum < 1 || (OLD_RAID_DAY_COUNT = v16->static_fields->OLD_RAID_DAY_COUNT, OLD_RAID_DAY_COUNT < dispDayNum) )
  {
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      return;
    }
    goto LABEL_40;
  }
  if ( OLD_RAID_DAY_COUNT == dispDayNum )
  {
    Instance = (DataManager_o *)this->fields.dayNumSp;
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        Instance = (DataManager_o *)this->fields.dayStrSp;
        if ( Instance )
        {
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
            Instance = (DataManager_o *)this->fields.dayLastSp;
            if ( Instance )
            {
              Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)Instance,
                                            0LL);
              if ( Instance )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                if ( !dispDayType )
                  goto LABEL_35;
                goto LABEL_30;
              }
            }
          }
        }
      }
    }
LABEL_40:
    sub_1BCAA3C(Instance, v15);
  }
  Instance = (DataManager_o *)this->fields.dayLastSp;
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.dayNumSp;
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.dayStrSp;
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  dayNumSp = this->fields.dayNumSp;
  v22 = TitleInfoEventRaidDayComponent_TypeInfo;
  if ( !TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo, v20);
    v22 = TitleInfoEventRaidDayComponent_TypeInfo;
  }
  NUM_SPNAME_PREFIX = v22->static_fields->NUM_SPNAME_PREFIX;
  v24 = System_Int32__ToString((int32_t)&v28, 0LL);
  Instance = (DataManager_o *)System_String__Concat_62401220(NUM_SPNAME_PREFIX, v24, 0LL);
  if ( !dayNumSp )
    goto LABEL_40;
  UISprite__set_spriteName(dayNumSp, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.dayNumSp;
  if ( !Instance )
    goto LABEL_40;
  ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
    Instance,
    Instance->klass[2]._1.interopData);
  if ( !dispDayType )
  {
LABEL_35:
    v27 = TitleInfoEventRaidDayComponent_TypeInfo;
    if ( !TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo, v18);
      v27 = TitleInfoEventRaidDayComponent_TypeInfo;
    }
    DEPTH_BACK = v27->static_fields->DEPTH_BACK;
    goto LABEL_38;
  }
LABEL_30:
  if ( dispDayType == 2 )
    goto LABEL_35;
  if ( dispDayType != 1 )
    return;
  v25 = TitleInfoEventRaidDayComponent_TypeInfo;
  if ( !TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo, v18);
    v25 = TitleInfoEventRaidDayComponent_TypeInfo;
  }
  DEPTH_BACK = v25->static_fields->DEPTH_FRONT;
LABEL_38:
  TitleInfoEventRaidDayComponent__SetDepth(this, DEPTH_BACK, v19);
}