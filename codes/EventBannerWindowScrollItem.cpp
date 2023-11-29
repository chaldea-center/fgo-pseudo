void __fastcall EventBannerWindowScrollItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40FC527 & 1) == 0 )
  {
    sub_B16FFC(&EventBannerWindowScrollItem_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16541, v8);
    byte_40FC527 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventBannerWindowScrollItem_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_16541;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16541;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventBannerWindowScrollItem___ctor(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall EventBannerWindowScrollItem__IsGrayOut(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct TitleInfoControl_EventEndTimeInfo_o *mEventEndTimeInfo; // x8
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WebViewManager_o *v12; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x0
  struct TitleInfoControl_EventEndTimeInfo_o *v14; // x8
  WarEntity_o *Entity; // x0
  struct TitleInfoControl_EventEndTimeInfo_o *v16; // x8
  EventEntity_o *v17; // x19
  EventDetailEntity_o *v18; // x20
  int64_t Time; // x21
  bool result; // w0

  if ( (byte_40FC526 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&TitleInfoControl_TypeInfo, v8);
    byte_40FC526 = 1;
  }
  mEventEndTimeInfo = this->fields.mEventEndTimeInfo;
  if ( !mEventEndTimeInfo )
    goto LABEL_27;
  if ( !mEventEndTimeInfo->fields.is_reward && mEventEndTimeInfo->fields.is_shop_closed )
    return 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v12,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___),
        (v14 = this->fields.mEventEndTimeInfo) == 0LL)
    || !v13
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v13,
                   v14->fields.event_id,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        (v16 = this->fields.mEventEndTimeInfo) == 0LL)
    || !MasterData_WarQuestSelectionMaster )
  {
LABEL_27:
    sub_B170D4();
  }
  v17 = (EventEntity_o *)Entity;
  v18 = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 v16->fields.event_id,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  result = 1;
  if ( v17 && v18 )
  {
    if ( EventEntity__isPurchaseEventOpen(v17, 0LL) )
      return 0;
    if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    }
    return !TitleInfoControl__IsEnableEventShopButton_19677132(v18, 0LL) || Time >= v17->fields.finishedAt;
  }
  return result;
}


void __fastcall EventBannerWindowScrollItem__OnClickItem(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct TitleInfoControl_EventEndTimeInfo_o *mEventEndTimeInfo; // x8
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct TitleInfoControl_EventEndTimeInfo_o *v14; // x8
  WarEntity_o *Entity; // x20
  WebViewManager_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  CommonUI_o *v21; // x19
  System_String_o *coordinates; // x20
  EventBannerWindowScrollItem___c_c *v23; // x0
  System_String_o *Empty; // x21
  struct EventBannerWindowScrollItem___c_StaticFields *static_fields; // x8
  System_Action_o *_9__9_0; // x22
  Il2CppObject *v27; // x23
  struct EventBannerWindowScrollItem___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int32_t event_id; // w19

  if ( (byte_40FC525 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&string_TypeInfo, v7);
    sub_B16FFC(&TitleInfoControl_TypeInfo, v8);
    sub_B16FFC(&Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__, v9);
    sub_B16FFC(&EventBannerWindowScrollItem___c_TypeInfo, v10);
    byte_40FC525 = 1;
  }
  mEventEndTimeInfo = this->fields.mEventEndTimeInfo;
  if ( !mEventEndTimeInfo )
    goto LABEL_27;
  if ( mEventEndTimeInfo->fields.is_reward )
  {
    if ( mEventEndTimeInfo->fields.is_shop_closed )
      return;
    goto LABEL_23;
  }
  if ( mEventEndTimeInfo->fields.is_shop_closed )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v14 = this->fields.mEventEndTimeInfo;
      if ( v14 )
      {
        if ( MasterData_WarQuestSelectionMaster )
        {
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     v14->fields.event_id,
                     (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Entity )
          {
            v21 = (CommonUI_o *)v16;
            coordinates = (System_String_o *)Entity->fields.coordinates;
            v23 = EventBannerWindowScrollItem___c_TypeInfo;
            Empty = string_TypeInfo->static_fields->Empty;
            if ( (BYTE3(EventBannerWindowScrollItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventBannerWindowScrollItem___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventBannerWindowScrollItem___c_TypeInfo);
              v23 = EventBannerWindowScrollItem___c_TypeInfo;
            }
            static_fields = v23->static_fields;
            _9__9_0 = static_fields->__9__9_0;
            if ( !_9__9_0 )
            {
              if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v23);
                static_fields = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
              }
              v27 = (Il2CppObject *)static_fields->__9;
              _9__9_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
              System_Action___ctor(_9__9_0, v27, Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__, 0LL);
              v28 = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
              v28->__9__9_0 = _9__9_0;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v28->__9__9_0,
                (System_Int32_array **)_9__9_0,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
            }
            if ( v21 )
            {
              CommonUI__OpenNotificationDialog(v21, Empty, coordinates, _9__9_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_27:
    sub_B170D4();
  }
LABEL_23:
  event_id = mEventEndTimeInfo->fields.event_id;
  if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
  }
  TitleInfoControl__OnClickEventBtn_19675104(event_id, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBannerWindowScrollItem__Setup(
        EventBannerWindowScrollItem_o *this,
        TitleInfoControl_EventEndTimeInfo_o *ev_end_time_inf,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct TitleInfoControl_EventEndTimeInfo_o **p_mEventEndTimeInfo; // x21
  UISprite_o *mBannerSp; // x22
  int32_t event_id; // w23
  bool v20; // w0
  UIWidget_o *v21; // x23
  bool v22; // w22
  const MethodInfo *v23; // x1
  int v24; // s0
  System_String_o *Empty; // x23
  const MethodInfo *v29; // x1
  struct TitleInfoControl_EventEndTimeInfo_o *v30; // x8
  System_String_o *v31; // x0
  UILabel_o *condMessageLabel; // x0
  struct UISprite_o *v33; // x0
  UISprite_o *v34; // x0
  UISprite_o *v35; // x22
  struct UISprite_o *v36; // x0
  struct UISprite_o *v37; // x0
  UnityEngine_Component_o **p_mNoticeNumber; // x21
  UnityEngine_Object_o *mNoticeNumber; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *noticeNumberPrefab; // x22
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FC524 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, ev_end_time_inf);
    sub_B16FFC(&EventBannerWindowScrollItem_TypeInfo, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&string_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_5693, v15);
    sub_B16FFC(&StringLiteral_5696, v16);
    byte_40FC524 = 1;
  }
  this->fields.mEventEndTimeInfo = ev_end_time_inf;
  p_mEventEndTimeInfo = &this->fields.mEventEndTimeInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mEventEndTimeInfo,
    (System_Int32_array **)ev_end_time_inf,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.mEventEndTimeInfo )
    goto LABEL_28;
  mBannerSp = this->fields.mBannerSp;
  event_id = this->fields.mEventEndTimeInfo->fields.event_id;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v20 = AtlasManager__SetShopBanner(mBannerSp, event_id, 0LL);
  v21 = (UIWidget_o *)this->fields.mBannerSp;
  v22 = v20;
  if ( EventBannerWindowScrollItem__IsGrayOut(this, v23) )
  {
    *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_gray(0LL);
    if ( !v21 )
      goto LABEL_50;
  }
  else
  {
    *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
    if ( !v21 )
      goto LABEL_50;
  }
  UIWidget__set_color(v21, *(UnityEngine_Color_o *)&v24, 0LL);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( EventBannerWindowScrollItem__IsGrayOut(this, v29) )
  {
    v30 = *p_mEventEndTimeInfo;
    if ( !*p_mEventEndTimeInfo )
      goto LABEL_50;
    if ( !v30->fields.is_reward && v30->fields.is_shop_closed )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5693, 0LL);
      v30 = *p_mEventEndTimeInfo;
      if ( !*p_mEventEndTimeInfo )
        goto LABEL_50;
      Empty = v31;
    }
    if ( !v30->fields.is_shop_closed )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Empty = LocalizationManager__Get((System_String_o *)StringLiteral_5696, 0LL);
    }
  }
  condMessageLabel = this->fields.condMessageLabel;
  if ( !condMessageLabel )
    goto LABEL_50;
  UILabel__set_text(condMessageLabel, Empty, 0LL);
  v33 = this->fields.mBannerSp;
  if ( !v33 )
    goto LABEL_50;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v33->klass->vtable._8_set_alpha.method)(
    v33,
    v33->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  if ( !v22 )
  {
LABEL_28:
    v34 = this->fields.mBannerSp;
    if ( !v34 )
      goto LABEL_50;
    UISprite__set_atlas(v34, this->fields.mCommonAtlas, 0LL);
    v35 = this->fields.mBannerSp;
    if ( (BYTE3(EventBannerWindowScrollItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventBannerWindowScrollItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBannerWindowScrollItem_TypeInfo);
    }
    if ( !v35 )
      goto LABEL_50;
    UISprite__set_spriteName(v35, EventBannerWindowScrollItem_TypeInfo->static_fields->DEFAULT_SP_NAME, 0LL);
    v36 = this->fields.mBannerSp;
    if ( !v36 )
      goto LABEL_50;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v36->klass->vtable._8_set_alpha.method)(
      v36,
      v36->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      0.0);
  }
  v37 = this->fields.mBannerSp;
  if ( !v37 )
    goto LABEL_50;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v37->klass->vtable._33_MakePixelPerfect.method)(
    v37,
    v37->klass->vtable._34_get_minWidth.methodPtr);
  if ( *p_mEventEndTimeInfo )
  {
    p_mNoticeNumber = (UnityEngine_Component_o **)&this->fields.mNoticeNumber;
    mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0LL, 0LL) )
    {
      noticeNumberPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.noticeNumberPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v41 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     noticeNumberPrefab,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      *p_mNoticeNumber = (UnityEngine_Component_o *)v41;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.mNoticeNumber, v41, v42, v43, v44, v45, v46, v47);
      if ( !*p_mNoticeNumber )
        goto LABEL_50;
      gameObject = UnityEngine_Component__get_gameObject(*p_mNoticeNumber, 0LL);
      GameObjectExtensions__SafeSetParent_27425996(gameObject, this->fields.noticeNumberRoot, 0LL);
    }
    if ( ev_end_time_inf && *p_mNoticeNumber )
    {
      NoticeNumberComponent__SetNumber(
        (NoticeNumberComponent_o *)*p_mNoticeNumber,
        ev_end_time_inf->fields.noticeNumberCount,
        0LL);
      return;
    }
LABEL_50:
    sub_B170D4();
  }
}


void __fastcall EventBannerWindowScrollItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8B8F & 1) == 0 )
  {
    sub_B16FFC(&EventBannerWindowScrollItem___c_TypeInfo, v1);
    byte_40F8B8F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventBannerWindowScrollItem___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventBannerWindowScrollItem___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventBannerWindowScrollItem___c___ctor(
        EventBannerWindowScrollItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBannerWindowScrollItem___c___OnClickItem_b__9_0(
        EventBannerWindowScrollItem___c_o *this,
        const MethodInfo *method)
{
  ;
}