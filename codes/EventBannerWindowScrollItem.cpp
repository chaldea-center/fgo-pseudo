void __fastcall EventBannerWindowScrollItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4A2AB62 & 1) == 0 )
  {
    sub_1B761C0(&EventBannerWindowScrollItem_TypeInfo, v1);
    sub_1B761C0(&StringLiteral_17059/*"banner_loading"*/, v4);
    byte_4A2AB62 = 1;
  }
  EventBannerWindowScrollItem_TypeInfo->static_fields->DEFAULT_SP_NAME = (struct System_String_o *)StringLiteral_17059/*"banner_loading"*/;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)EventBannerWindowScrollItem_TypeInfo->static_fields,
    StringLiteral_17059/*"banner_loading"*/,
    v2,
    v3);
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
  Il2CppObject *MasterData_object; // x20
  struct TitleInfoControl_EventEndTimeInfo_o *v11; // x8
  struct TitleInfoControl_EventEndTimeInfo_o *v12; // x8
  EventEntity_o *v13; // x19
  Il2CppObject *Entity; // x20
  int64_t Time; // x21
  bool result; // w0

  v2 = this;
  if ( (byte_4A2AB61 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B761C0(&Method_DataManager_GetMasterData_EventMaster___, v3);
    sub_1B761C0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B761C0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1B761C0(&NetworkManager_TypeInfo, v6);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    this = (EventBannerWindowScrollItem_o *)sub_1B761C0(&TitleInfoControl_TypeInfo, v8);
    byte_4A2AB61 = 1;
  }
  mEventEndTimeInfo = v2->fields.mEventEndTimeInfo;
  if ( !mEventEndTimeInfo )
    goto LABEL_24;
  if ( !mEventEndTimeInfo->fields.is_reward && mEventEndTimeInfo->fields.is_shop_closed )
    return 1;
  this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventMaster___),
        (v11 = v2->fields.mEventEndTimeInfo) == 0LL)
    || !this
    || (this = (EventBannerWindowScrollItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  v11->fields.event_id,
                                                  (const MethodInfo_30FF780 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        (v12 = v2->fields.mEventEndTimeInfo) == 0LL)
    || !MasterData_object )
  {
LABEL_24:
    sub_1B7641C(this, method);
  }
  v13 = (EventEntity_o *)this;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             v12->fields.event_id,
             (const MethodInfo_30FF780 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  result = 1;
  if ( v13 && Entity )
  {
    if ( EventEntity__isPurchaseEventOpen(v13, 0LL) )
      return 0;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    return !TitleInfoControl__IsEnableEventShopButton_37074968((EventDetailEntity_o *)Entity, 0LL)
        || Time >= v13->fields.finishedAt;
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
  Il2CppObject *Entity; // x20
  CommonUI_o *v14; // x19
  System_String_o *klass; // x20
  System_String_o *Empty; // x21
  System_Action_o *v17; // x22
  Il2CppObject *v18; // x23
  struct EventBannerWindowScrollItem___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t event_id; // w19

  v2 = this;
  if ( (byte_4A2AB60 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_DataManager_GetMasterData_EventDetailMaster___, v3);
    sub_1B761C0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B761C0(&string_TypeInfo, v7);
    sub_1B761C0(&TitleInfoControl_TypeInfo, v8);
    sub_1B761C0(&Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__, v9);
    this = (EventBannerWindowScrollItem_o *)sub_1B761C0(&EventBannerWindowScrollItem___c_TypeInfo, v10);
    byte_4A2AB60 = 1;
  }
  mEventEndTimeInfo = v2->fields.mEventEndTimeInfo;
  if ( !mEventEndTimeInfo )
    goto LABEL_24;
  if ( mEventEndTimeInfo->fields.is_reward )
  {
    if ( mEventEndTimeInfo->fields.is_shop_closed )
      return;
    goto LABEL_21;
  }
  if ( mEventEndTimeInfo->fields.is_shop_closed )
  {
    this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v12 = v2->fields.mEventEndTimeInfo;
      if ( v12 )
      {
        if ( this )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     v12->fields.event_id,
                     (const MethodInfo_30FF780 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Entity )
          {
            v14 = (CommonUI_o *)this;
            klass = (System_String_o *)Entity[7].klass;
            this = (EventBannerWindowScrollItem_o *)EventBannerWindowScrollItem___c_TypeInfo;
            Empty = string_TypeInfo->static_fields->Empty;
            if ( !EventBannerWindowScrollItem___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventBannerWindowScrollItem___c_TypeInfo);
              this = (EventBannerWindowScrollItem_o *)EventBannerWindowScrollItem___c_TypeInfo;
            }
            v17 = (System_Action_o *)*((_QWORD *)this[2].monitor + 1);
            if ( !v17 )
            {
              if ( !LODWORD(this[2].fields.condMessageLabel) )
              {
                j_il2cpp_runtime_class_init_0(this);
                this = (EventBannerWindowScrollItem_o *)EventBannerWindowScrollItem___c_TypeInfo;
              }
              v18 = *(Il2CppObject **)this[2].monitor;
              v17 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
              System_Action___ctor(v17, v18, Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__, 0LL);
              static_fields = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
              static_fields->__9__9_0 = v17;
              sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_0, (int32_t)v17, v20, v21);
            }
            if ( v14 )
            {
              CommonUI__OpenNotificationDialog(v14, Empty, klass, v17, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1B7641C(this, method);
  }
LABEL_21:
  event_id = mEventEndTimeInfo->fields.event_id;
  if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
  TitleInfoControl__OnClickEventBtn_37073080(event_id, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBannerWindowScrollItem__Setup(
        EventBannerWindowScrollItem_o *this,
        TitleInfoControl_EventEndTimeInfo_o *ev_end_time_inf,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct TitleInfoControl_EventEndTimeInfo_o **p_mEventEndTimeInfo; // x21
  __int64 v14; // x1
  UISprite_o *mBannerSp; // x22
  int32_t event_id; // w23
  bool v17; // w0
  UIWidget_o *v18; // x23
  bool v19; // w22
  const MethodInfo *v20; // x1
  UILabel_o *IsGrayOut; // x0
  float v22; // s0
  float v23; // s3
  float v24; // s1
  float v25; // s2
  System_String_o *Empty; // x23
  const MethodInfo *v27; // x1
  struct TitleInfoControl_EventEndTimeInfo_o *v28; // x8
  UISprite_o *v29; // x22
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x21
  UnityEngine_Object_o *mNoticeNumber; // x22
  Il2CppObject *noticeNumberPrefab; // x22
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4A2AB5F & 1) == 0 )
  {
    sub_1B761C0(&AtlasManager_TypeInfo, ev_end_time_inf);
    sub_1B761C0(&EventBannerWindowScrollItem_TypeInfo, v6);
    sub_1B761C0(&LocalizationManager_TypeInfo, v7);
    sub_1B761C0(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___, v8);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v9);
    sub_1B761C0(&string_TypeInfo, v10);
    sub_1B761C0(&StringLiteral_5703/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, v11);
    sub_1B761C0(&StringLiteral_5706/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, v12);
    byte_4A2AB5F = 1;
  }
  this->fields.mEventEndTimeInfo = ev_end_time_inf;
  p_mEventEndTimeInfo = &this->fields.mEventEndTimeInfo;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.mEventEndTimeInfo,
    (int32_t)ev_end_time_inf,
    (int32_t)method,
    v3);
  if ( !this->fields.mEventEndTimeInfo )
    goto LABEL_24;
  mBannerSp = this->fields.mBannerSp;
  event_id = this->fields.mEventEndTimeInfo->fields.event_id;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v17 = AtlasManager__SetShopBanner(mBannerSp, event_id, 0LL);
  v18 = (UIWidget_o *)this->fields.mBannerSp;
  v19 = v17;
  IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem__IsGrayOut(this, v20);
  v22 = 1.0;
  if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
    v22 = 0.5;
  if ( !v18 )
    goto LABEL_43;
  v23 = 1.0;
  v24 = v22;
  v25 = v22;
  UIWidget__set_color(v18, *(UnityEngine_Color_o *)&v22, 0LL);
  Empty = string_TypeInfo->static_fields->Empty;
  IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem__IsGrayOut(this, v27);
  if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
  {
    v28 = *p_mEventEndTimeInfo;
    if ( !*p_mEventEndTimeInfo )
      goto LABEL_43;
    if ( !v28->fields.is_reward && v28->fields.is_shop_closed )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsGrayOut = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5703/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, 0LL);
      v28 = *p_mEventEndTimeInfo;
      if ( !*p_mEventEndTimeInfo )
        goto LABEL_43;
      Empty = (System_String_o *)IsGrayOut;
    }
    if ( !v28->fields.is_shop_closed )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Empty = LocalizationManager__Get((System_String_o *)StringLiteral_5706/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, 0LL);
    }
  }
  IsGrayOut = this->fields.condMessageLabel;
  if ( !IsGrayOut )
    goto LABEL_43;
  UILabel__set_text(IsGrayOut, Empty, 0LL);
  IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
  if ( !IsGrayOut )
    goto LABEL_43;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer, float))IsGrayOut->klass->vtable._8_set_alpha.method)(
    IsGrayOut,
    IsGrayOut->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  if ( !v19 )
  {
LABEL_24:
    IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
    if ( !IsGrayOut )
      goto LABEL_43;
    UISprite__set_atlas((UISprite_o *)IsGrayOut, this->fields.mCommonAtlas, 0LL);
    IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem_TypeInfo;
    v29 = this->fields.mBannerSp;
    if ( !EventBannerWindowScrollItem_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventBannerWindowScrollItem_TypeInfo);
    if ( !v29 )
      goto LABEL_43;
    UISprite__set_spriteName(v29, EventBannerWindowScrollItem_TypeInfo->static_fields->DEFAULT_SP_NAME, 0LL);
    IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
    if ( !IsGrayOut )
      goto LABEL_43;
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer, float))IsGrayOut->klass->vtable._8_set_alpha.method)(
      IsGrayOut,
      IsGrayOut->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      0.0);
  }
  IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
  if ( !IsGrayOut )
    goto LABEL_43;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))IsGrayOut->klass->vtable._33_MakePixelPerfect.method)(
    IsGrayOut,
    IsGrayOut->klass->vtable._34_get_minWidth.methodPtr);
  if ( *p_mEventEndTimeInfo )
  {
    p_mNoticeNumber = &this->fields.mNoticeNumber;
    mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsGrayOut = (UILabel_o *)UnityEngine_Object__op_Equality(mNoticeNumber, 0LL, 0LL);
    if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
    {
      noticeNumberPrefab = (Il2CppObject *)this->fields.noticeNumberPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v33 = UnityEngine_Object__Instantiate_object_(
              noticeNumberPrefab,
              (const MethodInfo_2EE5790 *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      *p_mNoticeNumber = (struct NoticeNumberComponent_o *)v33;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.mNoticeNumber, (int32_t)v33, v34, v35);
      IsGrayOut = (UILabel_o *)*p_mNoticeNumber;
      if ( !*p_mNoticeNumber )
        goto LABEL_43;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsGrayOut, 0LL);
      GameObjectExtensions__SafeSetParent_33557996(gameObject, this->fields.noticeNumberRoot, 0LL);
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
LABEL_43:
    sub_1B7641C(IsGrayOut, v14);
  }
}


void __fastcall EventBannerWindowScrollItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A2AB63 & 1) == 0 )
  {
    sub_1B761C0(&EventBannerWindowScrollItem___c_TypeInfo, v1);
    byte_4A2AB63 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(EventBannerWindowScrollItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventBannerWindowScrollItem___c_TypeInfo->static_fields->__9 = (struct EventBannerWindowScrollItem___c_o *)v2;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)EventBannerWindowScrollItem___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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