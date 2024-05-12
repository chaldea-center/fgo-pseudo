void __fastcall EventBannerWindowScrollItem___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_438E80B & 1) == 0 )
  {
    sub_B775C4(&EventBannerWindowScrollItem_TypeInfo);
    sub_B775C4(&StringLiteral_16931/*"banner_loading"*/);
    byte_438E80B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventBannerWindowScrollItem_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_16931/*"banner_loading"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16931/*"banner_loading"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall EventBannerWindowScrollItem___ctor(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall EventBannerWindowScrollItem__IsGrayOut(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  EventBannerWindowScrollItem_o *v2; // x19
  struct TitleInfoControl_EventEndTimeInfo_o *mEventEndTimeInfo; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  struct TitleInfoControl_EventEndTimeInfo_o *v5; // x8
  struct TitleInfoControl_EventEndTimeInfo_o *v6; // x8
  EventEntity_o *v7; // x19
  EventDetailEntity_o *Entity; // x20
  int64_t Time; // x21
  bool result; // w0

  v2 = this;
  if ( (byte_438E80A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (EventBannerWindowScrollItem_o *)sub_B775C4(&TitleInfoControl_TypeInfo);
    byte_438E80A = 1;
  }
  mEventEndTimeInfo = v2->fields.mEventEndTimeInfo;
  if ( !mEventEndTimeInfo )
    goto LABEL_27;
  if ( !mEventEndTimeInfo->fields.is_reward && mEventEndTimeInfo->fields.is_shop_closed )
    return 1;
  this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)this,
                                                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___),
        (v5 = v2->fields.mEventEndTimeInfo) == 0LL)
    || !this
    || (this = (EventBannerWindowScrollItem_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                  v5->fields.event_id,
                                                  (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        (v6 = v2->fields.mEventEndTimeInfo) == 0LL)
    || !MasterData_WarQuestSelectionMaster )
  {
LABEL_27:
    sub_B7769C(this, method);
  }
  v7 = (EventEntity_o *)this;
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    v6->fields.event_id,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  result = 1;
  if ( v7 && Entity )
  {
    if ( EventEntity__isPurchaseEventOpen(v7, 0LL) )
      return 0;
    if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    }
    return !TitleInfoControl__IsEnableEventShopButton_18818336(Entity, 0LL) || Time >= v7->fields.finishedAt;
  }
  return result;
}


void __fastcall EventBannerWindowScrollItem__OnClickItem(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  EventBannerWindowScrollItem_o *v2; // x19
  struct TitleInfoControl_EventEndTimeInfo_o *mEventEndTimeInfo; // x8
  struct TitleInfoControl_EventEndTimeInfo_o *v4; // x8
  WarEntity_o *Entity; // x20
  CommonUI_o *v6; // x19
  System_String_o *coordinates; // x20
  System_String_o *Empty; // x21
  void *mBannerSp; // x8
  System_Action_o *v10; // x22
  Il2CppObject *v11; // x23
  struct EventBannerWindowScrollItem___c_StaticFields *static_fields; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t event_id; // w19

  v2 = this;
  if ( (byte_438E809 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&TitleInfoControl_TypeInfo);
    sub_B775C4(&Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__);
    this = (EventBannerWindowScrollItem_o *)sub_B775C4(&EventBannerWindowScrollItem___c_TypeInfo);
    byte_438E809 = 1;
  }
  mEventEndTimeInfo = v2->fields.mEventEndTimeInfo;
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
    this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v4 = v2->fields.mEventEndTimeInfo;
      if ( v4 )
      {
        if ( this )
        {
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                     v4->fields.event_id,
                     (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Entity )
          {
            v6 = (CommonUI_o *)this;
            coordinates = (System_String_o *)Entity->fields.coordinates;
            this = (EventBannerWindowScrollItem_o *)EventBannerWindowScrollItem___c_TypeInfo;
            Empty = string_TypeInfo->static_fields->Empty;
            if ( (BYTE3(EventBannerWindowScrollItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventBannerWindowScrollItem___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventBannerWindowScrollItem___c_TypeInfo);
              this = (EventBannerWindowScrollItem_o *)EventBannerWindowScrollItem___c_TypeInfo;
            }
            mBannerSp = this[2].fields.mBannerSp;
            v10 = (System_Action_o *)*((_QWORD *)mBannerSp + 1);
            if ( !v10 )
            {
              if ( (BYTE3(this[3].fields.mNoticeNumber) & 4) != 0 && !LODWORD(this[2].fields.mNoticeNumber) )
              {
                j_il2cpp_runtime_class_init_0(this);
                mBannerSp = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
              }
              v11 = *(Il2CppObject **)mBannerSp;
              v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
              System_Action___ctor(v10, v11, Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__, 0LL);
              static_fields = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
              static_fields->__9__9_0 = v10;
              sub_B77560(
                (BattleServantConfConponent_o *)&static_fields->__9__9_0,
                (System_Int32_array **)v10,
                v13,
                v14,
                v15,
                v16,
                v17,
                v18);
            }
            if ( v6 )
            {
              CommonUI__OpenNotificationDialog(v6, Empty, coordinates, v10, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_27:
    sub_B7769C(this, method);
  }
LABEL_23:
  event_id = mEventEndTimeInfo->fields.event_id;
  if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
  }
  TitleInfoControl__OnClickEventBtn_18816308(event_id, 0LL);
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
  struct TitleInfoControl_EventEndTimeInfo_o **p_mEventEndTimeInfo; // x21
  __int64 v11; // x1
  UISprite_o *mBannerSp; // x22
  int32_t event_id; // w23
  bool v14; // w0
  UIWidget_o *v15; // x23
  bool v16; // w22
  const MethodInfo *v17; // x1
  UILabel_o *IsGrayOut; // x0
  int v19; // s0
  System_String_o *Empty; // x23
  const MethodInfo *v24; // x1
  struct TitleInfoControl_EventEndTimeInfo_o *v25; // x8
  UISprite_o *v26; // x22
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x21
  UnityEngine_Object_o *mNoticeNumber; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *noticeNumberPrefab; // x22
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_438E808 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&EventBannerWindowScrollItem_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_5855/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/);
    sub_B775C4(&StringLiteral_5858/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/);
    byte_438E808 = 1;
  }
  this->fields.mEventEndTimeInfo = ev_end_time_inf;
  p_mEventEndTimeInfo = &this->fields.mEventEndTimeInfo;
  sub_B77560(
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
  v14 = AtlasManager__SetShopBanner(mBannerSp, event_id, 0LL);
  v15 = (UIWidget_o *)this->fields.mBannerSp;
  v16 = v14;
  if ( EventBannerWindowScrollItem__IsGrayOut(this, v17) )
  {
    *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_gray(0LL);
    if ( !v15 )
      goto LABEL_50;
  }
  else
  {
    *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_white(0LL);
    if ( !v15 )
      goto LABEL_50;
  }
  UIWidget__set_color(v15, *(UnityEngine_Color_o *)&v19, 0LL);
  Empty = string_TypeInfo->static_fields->Empty;
  IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem__IsGrayOut(this, v24);
  if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
  {
    v25 = *p_mEventEndTimeInfo;
    if ( !*p_mEventEndTimeInfo )
      goto LABEL_50;
    if ( !v25->fields.is_reward && v25->fields.is_shop_closed )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsGrayOut = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5855/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, 0LL);
      v25 = *p_mEventEndTimeInfo;
      if ( !*p_mEventEndTimeInfo )
        goto LABEL_50;
      Empty = (System_String_o *)IsGrayOut;
    }
    if ( !v25->fields.is_shop_closed )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Empty = LocalizationManager__Get((System_String_o *)StringLiteral_5858/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, 0LL);
    }
  }
  IsGrayOut = this->fields.condMessageLabel;
  if ( !IsGrayOut )
    goto LABEL_50;
  UILabel__set_text(IsGrayOut, Empty, 0LL);
  IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
  if ( !IsGrayOut )
    goto LABEL_50;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer, float))IsGrayOut->klass->vtable._8_set_alpha.method)(
    IsGrayOut,
    IsGrayOut->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  if ( !v16 )
  {
LABEL_28:
    IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
    if ( !IsGrayOut )
      goto LABEL_50;
    UISprite__set_atlas((UISprite_o *)IsGrayOut, this->fields.mCommonAtlas, 0LL);
    v26 = this->fields.mBannerSp;
    IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem_TypeInfo;
    if ( (BYTE3(EventBannerWindowScrollItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventBannerWindowScrollItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBannerWindowScrollItem_TypeInfo);
    }
    if ( !v26 )
      goto LABEL_50;
    UISprite__set_spriteName(v26, EventBannerWindowScrollItem_TypeInfo->static_fields->DEFAULT_SP_NAME, 0LL);
    IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
    if ( !IsGrayOut )
      goto LABEL_50;
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer, float))IsGrayOut->klass->vtable._8_set_alpha.method)(
      IsGrayOut,
      IsGrayOut->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      0.0);
  }
  IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
  if ( !IsGrayOut )
    goto LABEL_50;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))IsGrayOut->klass->vtable._33_MakePixelPerfect.method)(
    IsGrayOut,
    IsGrayOut->klass->vtable._34_get_minWidth.methodPtr);
  if ( *p_mEventEndTimeInfo )
  {
    p_mNoticeNumber = &this->fields.mNoticeNumber;
    mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    IsGrayOut = (UILabel_o *)UnityEngine_Object__op_Equality(mNoticeNumber, 0LL, 0LL);
    if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
    {
      noticeNumberPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.noticeNumberPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v30 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     noticeNumberPrefab,
                                     (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      *p_mNoticeNumber = (struct NoticeNumberComponent_o *)v30;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.mNoticeNumber, v30, v31, v32, v33, v34, v35, v36);
      IsGrayOut = (UILabel_o *)*p_mNoticeNumber;
      if ( !*p_mNoticeNumber )
        goto LABEL_50;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsGrayOut, 0LL);
      GameObjectExtensions__SafeSetParent_32813688(gameObject, this->fields.noticeNumberRoot, 0LL);
    }
    if ( ev_end_time_inf )
    {
      IsGrayOut = (UILabel_o *)*p_mNoticeNumber;
      if ( *p_mNoticeNumber )
      {
        NoticeNumberComponent__SetNumber(
          (NoticeNumberComponent_o *)IsGrayOut,
          ev_end_time_inf->fields.noticeNumberCount,
          0LL);
        return;
      }
    }
LABEL_50:
    sub_B7769C(IsGrayOut, v11);
  }
}


void __fastcall EventBannerWindowScrollItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventBannerWindowScrollItem___c_StaticFields *static_fields; // x0

  if ( (byte_4388613 & 1) == 0 )
  {
    sub_B775C4(&EventBannerWindowScrollItem___c_TypeInfo);
    byte_4388613 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventBannerWindowScrollItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventBannerWindowScrollItem___c_o *)v1;
  sub_B77560(static_fields);
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