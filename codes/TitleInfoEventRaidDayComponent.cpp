void __fastcall TitleInfoEventRaidDayComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct TitleInfoEventRaidDayComponent_StaticFields *static_fields; // x0
  int32_t v4; // w1

  if ( (byte_4A590B1 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventRaidDayComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_19223/*"event_raid_num_"*/);
    byte_4A590B1 = 1;
  }
  static_fields = TitleInfoEventRaidDayComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEPTH_FRONT = 0x100000003LL;
  v4 = StringLiteral_19223/*"event_raid_num_"*/;
  static_fields->NUM_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19223/*"event_raid_num_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->NUM_SPNAME_PREFIX, v4, v1, v2);
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
    sub_1B8880C(dayStrSp, *(_QWORD *)&depth);
  }
  UIWidget__set_depth(dayStrSp, depth, 0LL);
}


void __fastcall TitleInfoEventRaidDayComponent__Setup(
        TitleInfoEventRaidDayComponent_o *this,
        int32_t eventId,
        int32_t dispDayNum,
        int32_t dispDayType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  EventRaidMaster_c *v10; // x0
  int32_t OLD_RAID_DAY_COUNT; // w8
  const MethodInfo *v12; // x2
  UISprite_o *dayNumSp; // x21
  TitleInfoEventRaidDayComponent_c *v14; // x0
  System_String_o *NUM_SPNAME_PREFIX; // x22
  System_String_o *v16; // x0
  TitleInfoEventRaidDayComponent_c *v17; // x0
  int32_t DEPTH_BACK; // w1
  TitleInfoEventRaidDayComponent_c *v19; // x0
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  v20 = dispDayNum;
  if ( (byte_4A590B0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&EventRaidMaster_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TitleInfoEventRaidDayComponent_TypeInfo);
    byte_4A590B0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v10 = EventRaidMaster_TypeInfo;
  if ( !EventRaidMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster_TypeInfo);
    v10 = EventRaidMaster_TypeInfo;
  }
  if ( dispDayNum < 1 || (OLD_RAID_DAY_COUNT = v10->static_fields->OLD_RAID_DAY_COUNT, OLD_RAID_DAY_COUNT < dispDayNum) )
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
    sub_1B8880C(Instance, v9);
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
  v14 = TitleInfoEventRaidDayComponent_TypeInfo;
  if ( !TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo);
    v14 = TitleInfoEventRaidDayComponent_TypeInfo;
  }
  NUM_SPNAME_PREFIX = v14->static_fields->NUM_SPNAME_PREFIX;
  v16 = System_Int32__ToString((int32_t)&v20, 0LL);
  Instance = (DataManager_o *)System_String__Concat_61707032(NUM_SPNAME_PREFIX, v16, 0LL);
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
    v19 = TitleInfoEventRaidDayComponent_TypeInfo;
    if ( !TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo);
      v19 = TitleInfoEventRaidDayComponent_TypeInfo;
    }
    DEPTH_BACK = v19->static_fields->DEPTH_BACK;
    goto LABEL_38;
  }
LABEL_30:
  if ( dispDayType == 2 )
    goto LABEL_35;
  if ( dispDayType != 1 )
    return;
  v17 = TitleInfoEventRaidDayComponent_TypeInfo;
  if ( !TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo);
    v17 = TitleInfoEventRaidDayComponent_TypeInfo;
  }
  DEPTH_BACK = v17->static_fields->DEPTH_FRONT;
LABEL_38:
  TitleInfoEventRaidDayComponent__SetDepth(this, DEPTH_BACK, v12);
}