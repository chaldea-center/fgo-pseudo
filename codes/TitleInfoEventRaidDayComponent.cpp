void TitleInfoEventRaidDayComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct TitleInfoEventRaidDayComponent_StaticFields *static_fields; // x0

  if ( (byte_596F0B4 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventRaidDayComponent_TypeInfo);
    sub_2213A60(&StringLiteral_20136/*"event_raid_num_"*/);
    byte_596F0B4 = 1;
  }
  v7 = StringLiteral_20136/*"event_raid_num_"*/;
  static_fields = TitleInfoEventRaidDayComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEPTH_FRONT = 0x100000003LL;
  static_fields->NUM_SPNAME_PREFIX = (struct System_String_o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->NUM_SPNAME_PREFIX, v7, v1, v2, v3, v4, v5, v6);
}


void TitleInfoEventRaidDayComponent___ctor(TitleInfoEventRaidDayComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventRaidDayComponent__SetDepth(
        TitleInfoEventRaidDayComponent_o *this,
        int32_t depth,
        const MethodInfo *method)
{
  UIWidget_o *dayStrSp; // x0

  dayStrSp = (UIWidget_o *)this->fields.dayStrSp;
  if ( !dayStrSp
    || (UIWidget__set_depth(dayStrSp, depth, 0), (dayStrSp = (UIWidget_o *)this->fields.dayNumSp) == 0)
    || (UIWidget__set_depth(dayStrSp, depth, 0), (dayStrSp = (UIWidget_o *)this->fields.dayLastSp) == 0) )
  {
    sub_2213CDC(dayStrSp, *(_QWORD *)&depth);
  }
  UIWidget__set_depth(dayStrSp, depth, 0);
}


void TitleInfoEventRaidDayComponent__Setup(
        TitleInfoEventRaidDayComponent_o *this,
        int32_t eventId,
        int32_t dispDayNum,
        int32_t dispDayType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  EventRaidMaster_c *v11; // x0
  int32_t OLD_RAID_DAY_COUNT; // w8
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UISprite_o *dayNumSp; // x21
  TitleInfoEventRaidDayComponent_c *v18; // x0
  System_String_o *NUM_SPNAME_PREFIX; // x22
  System_String_o *v20; // x0
  TitleInfoEventRaidDayComponent_c *v21; // x0
  int32_t DEPTH_BACK; // w1
  TitleInfoEventRaidDayComponent_c *v23; // x0
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  v24 = dispDayNum;
  if ( (byte_596F0B3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_2213A60(&EventRaidMaster_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TitleInfoEventRaidDayComponent_TypeInfo);
    byte_596F0B3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v11 = EventRaidMaster_TypeInfo;
  if ( !*(&EventRaidMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster_TypeInfo, v9, v10);
    v11 = EventRaidMaster_TypeInfo;
  }
  if ( dispDayNum < 1 || (OLD_RAID_DAY_COUNT = v11->static_fields->OLD_RAID_DAY_COUNT, OLD_RAID_DAY_COUNT < dispDayNum) )
  {
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      return;
    }
    goto LABEL_40;
  }
  if ( OLD_RAID_DAY_COUNT == dispDayNum )
  {
    Instance = (DataManager_o *)this->fields.dayNumSp;
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
        Instance = (DataManager_o *)this->fields.dayStrSp;
        if ( Instance )
        {
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
            Instance = (DataManager_o *)this->fields.dayLastSp;
            if ( Instance )
            {
              Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
              if ( Instance )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
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
    sub_2213CDC(Instance, v9);
  }
  Instance = (DataManager_o *)this->fields.dayLastSp;
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.dayNumSp;
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (DataManager_o *)this->fields.dayStrSp;
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  dayNumSp = this->fields.dayNumSp;
  v18 = TitleInfoEventRaidDayComponent_TypeInfo;
  if ( !*(&TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo, v15, v16);
    v18 = TitleInfoEventRaidDayComponent_TypeInfo;
  }
  NUM_SPNAME_PREFIX = v18->static_fields->NUM_SPNAME_PREFIX;
  v20 = System_Int32__ToString((int32_t)&v24, 0);
  Instance = (DataManager_o *)System_String__Concat_75651716(NUM_SPNAME_PREFIX, v20, 0);
  if ( !dayNumSp )
    goto LABEL_40;
  UISprite__set_spriteName(dayNumSp, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.dayNumSp;
  if ( !Instance )
    goto LABEL_40;
  ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.parent)(
    Instance,
    Instance->klass[2]._1.generic_class);
  if ( !dispDayType )
  {
LABEL_35:
    v23 = TitleInfoEventRaidDayComponent_TypeInfo;
    if ( !*(&TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo, v13, v14);
      v23 = TitleInfoEventRaidDayComponent_TypeInfo;
    }
    DEPTH_BACK = v23->static_fields->DEPTH_BACK;
    goto LABEL_38;
  }
LABEL_30:
  if ( dispDayType == 2 )
    goto LABEL_35;
  if ( dispDayType != 1 )
    return;
  v21 = TitleInfoEventRaidDayComponent_TypeInfo;
  if ( !*(&TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo, v13, v14);
    v21 = TitleInfoEventRaidDayComponent_TypeInfo;
  }
  DEPTH_BACK = v21->static_fields->DEPTH_FRONT;
LABEL_38:
  TitleInfoEventRaidDayComponent__SetDepth(this, DEPTH_BACK, v14);
}