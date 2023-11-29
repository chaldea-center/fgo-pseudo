void __fastcall TitleInfoEventRaidDayComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  struct TitleInfoEventRaidDayComponent_StaticFields *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40FE000 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventRaidDayComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18486, v8);
    byte_40FE000 = 1;
  }
  TitleInfoEventRaidDayComponent_TypeInfo->static_fields->DEPTH_FRONT = 3;
  TitleInfoEventRaidDayComponent_TypeInfo->static_fields->DEPTH_BACK = 1;
  static_fields = TitleInfoEventRaidDayComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18486;
  static_fields->NUM_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_18486;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->NUM_SPNAME_PREFIX, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall TitleInfoEventRaidDayComponent___ctor(TitleInfoEventRaidDayComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventRaidDayComponent__SetDepth(
        TitleInfoEventRaidDayComponent_o *this,
        int32_t depth,
        const MethodInfo *method)
{
  UIWidget_o *dayStrSp; // x0
  UIWidget_o *dayNumSp; // x0
  UIWidget_o *dayLastSp; // x0

  dayStrSp = (UIWidget_o *)this->fields.dayStrSp;
  if ( !dayStrSp
    || (UIWidget__set_depth(dayStrSp, depth, 0LL), (dayNumSp = (UIWidget_o *)this->fields.dayNumSp) == 0LL)
    || (UIWidget__set_depth(dayNumSp, depth, 0LL), (dayLastSp = (UIWidget_o *)this->fields.dayLastSp) == 0LL) )
  {
    sub_B170D4();
  }
  UIWidget__set_depth(dayLastSp, depth, 0LL);
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
  WebViewManager_o *Instance; // x0
  EventRaidMaster_c *v12; // x0
  int32_t OLD_RAID_DAY_COUNT; // w8
  UnityEngine_Component_o *dayNumSp; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Component_o *dayStrSp; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Component_o *dayLastSp; // x0
  UnityEngine_GameObject_o *v19; // x0
  const MethodInfo *v20; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UISprite_o *v28; // x21
  TitleInfoEventRaidDayComponent_c *v29; // x0
  System_String_o *NUM_SPNAME_PREFIX; // x22
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  struct UISprite_o *v33; // x0
  TitleInfoEventRaidDayComponent_c *v34; // x0
  int32_t DEPTH_BACK; // w1
  TitleInfoEventRaidDayComponent_c *v36; // x0
  int32_t v37; // [xsp+Ch] [xbp-24h] BYREF

  v37 = dispDayNum;
  if ( (byte_40FDFFF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&EventRaidMaster_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&TitleInfoEventRaidDayComponent_TypeInfo, v10);
    byte_40FDFFF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v12 = EventRaidMaster_TypeInfo;
  if ( (BYTE3(EventRaidMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster_TypeInfo);
    v12 = EventRaidMaster_TypeInfo;
  }
  if ( dispDayNum < 1 || (OLD_RAID_DAY_COUNT = v12->static_fields->OLD_RAID_DAY_COUNT, OLD_RAID_DAY_COUNT < dispDayNum) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      return;
    }
    goto LABEL_44;
  }
  if ( OLD_RAID_DAY_COUNT == dispDayNum )
  {
    dayNumSp = (UnityEngine_Component_o *)this->fields.dayNumSp;
    if ( dayNumSp )
    {
      v15 = UnityEngine_Component__get_gameObject(dayNumSp, 0LL);
      if ( v15 )
      {
        UnityEngine_GameObject__SetActive(v15, 0, 0LL);
        dayStrSp = (UnityEngine_Component_o *)this->fields.dayStrSp;
        if ( dayStrSp )
        {
          v17 = UnityEngine_Component__get_gameObject(dayStrSp, 0LL);
          if ( v17 )
          {
            UnityEngine_GameObject__SetActive(v17, 0, 0LL);
            dayLastSp = (UnityEngine_Component_o *)this->fields.dayLastSp;
            if ( dayLastSp )
            {
              v19 = UnityEngine_Component__get_gameObject(dayLastSp, 0LL);
              if ( v19 )
              {
                UnityEngine_GameObject__SetActive(v19, 1, 0LL);
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
    sub_B170D4();
  }
  v22 = (UnityEngine_Component_o *)this->fields.dayLastSp;
  if ( !v22 )
    goto LABEL_44;
  v23 = UnityEngine_Component__get_gameObject(v22, 0LL);
  if ( !v23 )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(v23, 0, 0LL);
  v24 = (UnityEngine_Component_o *)this->fields.dayNumSp;
  if ( !v24 )
    goto LABEL_44;
  v25 = UnityEngine_Component__get_gameObject(v24, 0LL);
  if ( !v25 )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(v25, 1, 0LL);
  v26 = (UnityEngine_Component_o *)this->fields.dayStrSp;
  if ( !v26 )
    goto LABEL_44;
  v27 = UnityEngine_Component__get_gameObject(v26, 0LL);
  if ( !v27 )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(v27, 1, 0LL);
  v28 = this->fields.dayNumSp;
  v29 = TitleInfoEventRaidDayComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidDayComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo);
    v29 = TitleInfoEventRaidDayComponent_TypeInfo;
  }
  NUM_SPNAME_PREFIX = v29->static_fields->NUM_SPNAME_PREFIX;
  v31 = System_Int32__ToString((int32_t)&v37, 0LL);
  v32 = System_String__Concat_43743732(NUM_SPNAME_PREFIX, v31, 0LL);
  if ( !v28 )
    goto LABEL_44;
  UISprite__set_spriteName(v28, v32, 0LL);
  v33 = this->fields.dayNumSp;
  if ( !v33 )
    goto LABEL_44;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v33->klass->vtable._33_MakePixelPerfect.method)(
    v33,
    v33->klass->vtable._34_get_minWidth.methodPtr);
  if ( !dispDayType )
  {
LABEL_38:
    v36 = TitleInfoEventRaidDayComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidDayComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo);
      v36 = TitleInfoEventRaidDayComponent_TypeInfo;
    }
    DEPTH_BACK = v36->static_fields->DEPTH_BACK;
    goto LABEL_42;
  }
LABEL_32:
  if ( dispDayType == 2 )
    goto LABEL_38;
  if ( dispDayType != 1 )
    return;
  v34 = TitleInfoEventRaidDayComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidDayComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidDayComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidDayComponent_TypeInfo);
    v34 = TitleInfoEventRaidDayComponent_TypeInfo;
  }
  DEPTH_BACK = v34->static_fields->DEPTH_FRONT;
LABEL_42:
  TitleInfoEventRaidDayComponent__SetDepth(this, DEPTH_BACK, v20);
}