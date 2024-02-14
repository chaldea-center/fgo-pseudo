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

  if ( (byte_4216E3C & 1) == 0 )
  {
    sub_B0D8A4(&EventBannerWindowScrollItem_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_16654/*"banner_loading"*/, v8);
    byte_4216E3C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventBannerWindowScrollItem_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_16654/*"banner_loading"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16654/*"banner_loading"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventBannerWindowScrollItem___ctor(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall EventBannerWindowScrollItem__IsGrayOut(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  EventBannerWindowScrollItem_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct TitleInfoControl_EventEndTimeInfo_o *mEventEndTimeInfo; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  struct TitleInfoControl_EventEndTimeInfo_o *v11; // x8
  struct TitleInfoControl_EventEndTimeInfo_o *v12; // x8
  EventEntity_o *v13; // x19
  EventDetailEntity_o *Entity; // x20
  int64_t Time; // x21
  bool result; // w0

  v2 = this;
  if ( (byte_4216E3B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    this = (EventBannerWindowScrollItem_o *)sub_B0D8A4(&TitleInfoControl_TypeInfo, v8);
    byte_4216E3B = 1;
  }
  mEventEndTimeInfo = v2->fields.mEventEndTimeInfo;
  if ( !mEventEndTimeInfo )
    goto LABEL_27;
  if ( !mEventEndTimeInfo->fields.is_reward && mEventEndTimeInfo->fields.is_shop_closed )
    return 1;
  this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)this,
                                                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___),
        (v11 = v2->fields.mEventEndTimeInfo) == 0LL)
    || !this
    || (this = (EventBannerWindowScrollItem_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                  v11->fields.event_id,
                                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        (v12 = v2->fields.mEventEndTimeInfo) == 0LL)
    || !MasterData_WarQuestSelectionMaster )
  {
LABEL_27:
    sub_B0D97C(this);
  }
  v13 = (EventEntity_o *)this;
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    v12->fields.event_id,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  result = 1;
  if ( v13 && Entity )
  {
    if ( EventEntity__isPurchaseEventOpen(v13, 0LL) )
      return 0;
    if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    }
    return !TitleInfoControl__IsEnableEventShopButton_17568528(Entity, 0LL) || Time >= v13->fields.finishedAt;
  }
  return result;
}


void __fastcall EventBannerWindowScrollItem__OnClickItem(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  EventBannerWindowScrollItem_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct TitleInfoControl_EventEndTimeInfo_o *mEventEndTimeInfo; // x8
  struct TitleInfoControl_EventEndTimeInfo_o *v12; // x8
  WarEntity_o *Entity; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  CommonUI_o *v16; // x19
  System_String_o *coordinates; // x20
  System_String_o *Empty; // x21
  void *mBannerSp; // x8
  System_Action_o *v20; // x22
  Il2CppObject *v21; // x23
  struct EventBannerWindowScrollItem___c_StaticFields *static_fields; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int32_t event_id; // w19

  v2 = this;
  if ( (byte_4216E3A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&string_TypeInfo, v7);
    sub_B0D8A4(&TitleInfoControl_TypeInfo, v8);
    sub_B0D8A4(&Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__, v9);
    this = (EventBannerWindowScrollItem_o *)sub_B0D8A4(&EventBannerWindowScrollItem___c_TypeInfo, v10);
    byte_4216E3A = 1;
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
    this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v12 = v2->fields.mEventEndTimeInfo;
      if ( v12 )
      {
        if ( this )
        {
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                     v12->fields.event_id,
                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Entity )
          {
            v16 = (CommonUI_o *)this;
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
            v20 = (System_Action_o *)*((_QWORD *)mBannerSp + 1);
            if ( !v20 )
            {
              if ( (BYTE3(this[3].fields.mNoticeNumber) & 4) != 0 && !LODWORD(this[2].fields.mNoticeNumber) )
              {
                j_il2cpp_runtime_class_init_0(this);
                mBannerSp = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
              }
              v21 = *(Il2CppObject **)mBannerSp;
              v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
              System_Action___ctor(v20, v21, Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__, 0LL);
              static_fields = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
              static_fields->__9__9_0 = v20;
              sub_B0D840(
                (BattleServantConfConponent_o *)&static_fields->__9__9_0,
                (System_Int32_array **)v20,
                v23,
                v24,
                v25,
                v26,
                v27,
                v28);
            }
            if ( v16 )
            {
              CommonUI__OpenNotificationDialog(v16, Empty, coordinates, v20, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_27:
    sub_B0D97C(this);
  }
LABEL_23:
  event_id = mEventEndTimeInfo->fields.event_id;
  if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
  }
  TitleInfoControl__OnClickEventBtn_17566500(event_id, 0LL);
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
  UILabel_o *IsGrayOut; // x0
  int v25; // s0
  System_String_o *Empty; // x23
  const MethodInfo *v30; // x1
  struct TitleInfoControl_EventEndTimeInfo_o *v31; // x8
  UISprite_o *v32; // x22
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x21
  UnityEngine_Object_o *mNoticeNumber; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *noticeNumberPrefab; // x22
  System_Int32_array **v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4216E39 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, ev_end_time_inf);
    sub_B0D8A4(&EventBannerWindowScrollItem_TypeInfo, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&string_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_5727/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, v15);
    sub_B0D8A4(&StringLiteral_5730/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, v16);
    byte_4216E39 = 1;
  }
  this->fields.mEventEndTimeInfo = ev_end_time_inf;
  p_mEventEndTimeInfo = &this->fields.mEventEndTimeInfo;
  sub_B0D840(
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
    *(UnityEngine_Color_o *)&v25 = UnityEngine_Color__get_gray(0LL);
    if ( !v21 )
      goto LABEL_50;
  }
  else
  {
    *(UnityEngine_Color_o *)&v25 = UnityEngine_Color__get_white(0LL);
    if ( !v21 )
      goto LABEL_50;
  }
  UIWidget__set_color(v21, *(UnityEngine_Color_o *)&v25, 0LL);
  Empty = string_TypeInfo->static_fields->Empty;
  IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem__IsGrayOut(this, v30);
  if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
  {
    v31 = *p_mEventEndTimeInfo;
    if ( !*p_mEventEndTimeInfo )
      goto LABEL_50;
    if ( !v31->fields.is_reward && v31->fields.is_shop_closed )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsGrayOut = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5727/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, 0LL);
      v31 = *p_mEventEndTimeInfo;
      if ( !*p_mEventEndTimeInfo )
        goto LABEL_50;
      Empty = (System_String_o *)IsGrayOut;
    }
    if ( !v31->fields.is_shop_closed )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Empty = LocalizationManager__Get((System_String_o *)StringLiteral_5730/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, 0LL);
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
  if ( !v22 )
  {
LABEL_28:
    IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
    if ( !IsGrayOut )
      goto LABEL_50;
    UISprite__set_atlas((UISprite_o *)IsGrayOut, this->fields.mCommonAtlas, 0LL);
    v32 = this->fields.mBannerSp;
    IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem_TypeInfo;
    if ( (BYTE3(EventBannerWindowScrollItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventBannerWindowScrollItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBannerWindowScrollItem_TypeInfo);
    }
    if ( !v32 )
      goto LABEL_50;
    UISprite__set_spriteName(v32, EventBannerWindowScrollItem_TypeInfo->static_fields->DEFAULT_SP_NAME, 0LL);
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
      v36 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     noticeNumberPrefab,
                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      *p_mNoticeNumber = (struct NoticeNumberComponent_o *)v36;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.mNoticeNumber, v36, v37, v38, v39, v40, v41, v42);
      IsGrayOut = (UILabel_o *)*p_mNoticeNumber;
      if ( !*p_mNoticeNumber )
        goto LABEL_50;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsGrayOut, 0LL);
      GameObjectExtensions__SafeSetParent_31184716(gameObject, this->fields.noticeNumberRoot, 0LL);
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
    sub_B0D97C(IsGrayOut);
  }
}


void __fastcall EventBannerWindowScrollItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventBannerWindowScrollItem___c_StaticFields *static_fields; // x0

  if ( (byte_4211B13 & 1) == 0 )
  {
    sub_B0D8A4(&EventBannerWindowScrollItem___c_TypeInfo, v1);
    byte_4211B13 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventBannerWindowScrollItem___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventBannerWindowScrollItem___c_o *)v3;
  sub_B0D840(static_fields, v3);
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