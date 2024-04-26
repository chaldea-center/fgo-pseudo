void __fastcall TitleInfoEventRaidDayComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  struct TitleInfoEventRaidDayComponent_StaticFields *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_43560F2 & 1) == 0 )
  {
    sub_B70694(&TitleInfoEventRaidDayComponent_TypeInfo);
    sub_B70694(&StringLiteral_18836/*"event_raid_num_"*/);
    byte_43560F2 = 1;
  }
  TitleInfoEventRaidDayComponent_TypeInfo->static_fields->DEPTH_FRONT = 3;
  TitleInfoEventRaidDayComponent_TypeInfo->static_fields->DEPTH_BACK = 1;
  static_fields = TitleInfoEventRaidDayComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18836/*"event_raid_num_"*/;
  static_fields->NUM_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_18836/*"event_raid_num_"*/;
  sub_B70630((BattleServantConfConponent_o *)&static_fields->NUM_SPNAME_PREFIX, v8, v1, v2, v3, v4, v5, v6);
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
    sub_B7076C(dayStrSp, *(_QWORD *)&depth);
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
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  v20 = dispDayNum;
  if ( (byte_43560F1 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B70694(&EventRaidMaster_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&TitleInfoEventRaidDayComponent_TypeInfo);
    byte_43560F1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v10 = EventRaidMaster_TypeInfo;
  if ( (BYTE3(EventRaidMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidMaster_TypeInfo->_2.cctor_finished )
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
    goto LABEL_44;
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
                  goto LABEL_38;
                goto LABEL_32;
              }
            }
          }
        }
      }
    }
LABEL_44:
    sub_B7076C(Instance, v9);
  }
  Instance = (DataManager_o *)this->fields.dayLastSp;
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.dayNumSp;
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.dayStrSp;
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  dayNumSp = this->fields.dayNumSp;
  v14 = TitleInfoEventRaidDayComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidDayComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo);
    v14 = TitleInfoEventRaidDayComponent_TypeInfo;
  }
  NUM_SPNAME_PREFIX = v14->static_fields->NUM_SPNAME_PREFIX;
  v16 = System_Int32__ToString((int32_t)&v20, 0LL);
  Instance = (DataManager_o *)System_String__Concat_44758168(NUM_SPNAME_PREFIX, v16, 0LL);
  if ( !dayNumSp )
    goto LABEL_44;
  UISprite__set_spriteName(dayNumSp, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.dayNumSp;
  if ( !Instance )
    goto LABEL_44;
  ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
    Instance,
    Instance->klass[2]._1.interopData);
  if ( !dispDayType )
  {
LABEL_38:
    v19 = TitleInfoEventRaidDayComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidDayComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo);
      v19 = TitleInfoEventRaidDayComponent_TypeInfo;
    }
    DEPTH_BACK = v19->static_fields->DEPTH_BACK;
    goto LABEL_42;
  }
LABEL_32:
  if ( dispDayType == 2 )
    goto LABEL_38;
  if ( dispDayType != 1 )
    return;
  v17 = TitleInfoEventRaidDayComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidDayComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo);
    v17 = TitleInfoEventRaidDayComponent_TypeInfo;
  }
  DEPTH_BACK = v17->static_fields->DEPTH_FRONT;
LABEL_42:
  TitleInfoEventRaidDayComponent__SetDepth(this, DEPTH_BACK, v12);
}