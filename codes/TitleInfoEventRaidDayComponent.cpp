void __fastcall TitleInfoEventRaidDayComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  struct TitleInfoEventRaidDayComponent_StaticFields *static_fields; // x0
  int32_t v6; // w1

  if ( (byte_49B9885 & 1) == 0 )
  {
    sub_1B4CF90(&TitleInfoEventRaidDayComponent_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_18919/*"event_raid_num_"*/, v4);
    byte_49B9885 = 1;
  }
  static_fields = TitleInfoEventRaidDayComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEPTH_FRONT = 0x100000003LL;
  v6 = StringLiteral_18919/*"event_raid_num_"*/;
  static_fields->NUM_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_18919/*"event_raid_num_"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->NUM_SPNAME_PREFIX, v6, v2, v3);
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
    sub_1B4D1EC(dayStrSp, *(_QWORD *)&depth);
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
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  EventRaidMaster_c *v13; // x0
  int32_t OLD_RAID_DAY_COUNT; // w8
  const MethodInfo *v15; // x2
  UISprite_o *dayNumSp; // x21
  TitleInfoEventRaidDayComponent_c *v17; // x0
  System_String_o *NUM_SPNAME_PREFIX; // x22
  System_String_o *v19; // x0
  TitleInfoEventRaidDayComponent_c *v20; // x0
  int32_t DEPTH_BACK; // w1
  TitleInfoEventRaidDayComponent_c *v22; // x0
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  v23 = dispDayNum;
  if ( (byte_49B9884 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_1B4CF90(&EventRaidMaster_TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B4CF90(&TitleInfoEventRaidDayComponent_TypeInfo, v10);
    byte_49B9884 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v13 = EventRaidMaster_TypeInfo;
  if ( !EventRaidMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster_TypeInfo);
    v13 = EventRaidMaster_TypeInfo;
  }
  if ( dispDayNum < 1 || (OLD_RAID_DAY_COUNT = v13->static_fields->OLD_RAID_DAY_COUNT, OLD_RAID_DAY_COUNT < dispDayNum) )
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
    sub_1B4D1EC(Instance, v12);
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
  v17 = TitleInfoEventRaidDayComponent_TypeInfo;
  if ( !TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo);
    v17 = TitleInfoEventRaidDayComponent_TypeInfo;
  }
  NUM_SPNAME_PREFIX = v17->static_fields->NUM_SPNAME_PREFIX;
  v19 = System_Int32__ToString((int32_t)&v23, 0LL);
  Instance = (DataManager_o *)System_String__Concat_61093468(NUM_SPNAME_PREFIX, v19, 0LL);
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
    v22 = TitleInfoEventRaidDayComponent_TypeInfo;
    if ( !TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo);
      v22 = TitleInfoEventRaidDayComponent_TypeInfo;
    }
    DEPTH_BACK = v22->static_fields->DEPTH_BACK;
    goto LABEL_38;
  }
LABEL_30:
  if ( dispDayType == 2 )
    goto LABEL_35;
  if ( dispDayType != 1 )
    return;
  v20 = TitleInfoEventRaidDayComponent_TypeInfo;
  if ( !TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo);
    v20 = TitleInfoEventRaidDayComponent_TypeInfo;
  }
  DEPTH_BACK = v20->static_fields->DEPTH_FRONT;
LABEL_38:
  TitleInfoEventRaidDayComponent__SetDepth(this, DEPTH_BACK, v15);
}