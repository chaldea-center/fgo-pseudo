void __fastcall EventBannerWindowScrollItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49F9096 & 1) == 0 )
  {
    sub_1B640C8(&EventBannerWindowScrollItem_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_16997/*"banner_loading"*/, v4);
    byte_49F9096 = 1;
  }
  EventBannerWindowScrollItem_TypeInfo->static_fields->DEFAULT_SP_NAME = (struct System_String_o *)StringLiteral_16997/*"banner_loading"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventBannerWindowScrollItem_TypeInfo->static_fields,
    StringLiteral_16997/*"banner_loading"*/,
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
  if ( (byte_49F9095 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    this = (EventBannerWindowScrollItem_o *)sub_1B640C8(&TitleInfoControl_TypeInfo, v8);
    byte_49F9095 = 1;
  }
  mEventEndTimeInfo = v2->fields.mEventEndTimeInfo;
  if ( !mEventEndTimeInfo )
    goto LABEL_24;
  if ( !mEventEndTimeInfo->fields.is_reward && mEventEndTimeInfo->fields.is_shop_closed )
    return 1;
  this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___),
        (v11 = v2->fields.mEventEndTimeInfo) == 0LL)
    || !this
    || (this = (EventBannerWindowScrollItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  v11->fields.event_id,
                                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        (v12 = v2->fields.mEventEndTimeInfo) == 0LL)
    || !MasterData_object )
  {
LABEL_24:
    sub_1B64324(this);
  }
  v13 = (EventEntity_o *)this;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             v12->fields.event_id,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
    return !TitleInfoControl__IsEnableEventShopButton_36942772((EventDetailEntity_o *)Entity, 0LL)
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
  __int64 v14; // x1
  __int64 v15; // x2
  CommonUI_o *v16; // x19
  System_String_o *klass; // x20
  System_String_o *Empty; // x21
  System_Action_o *v19; // x22
  Il2CppObject *v20; // x23
  struct EventBannerWindowScrollItem___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t event_id; // w19

  v2 = this;
  if ( (byte_49F9094 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&string_TypeInfo, v7);
    sub_1B640C8(&TitleInfoControl_TypeInfo, v8);
    sub_1B640C8(&Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__, v9);
    this = (EventBannerWindowScrollItem_o *)sub_1B640C8(&EventBannerWindowScrollItem___c_TypeInfo, v10);
    byte_49F9094 = 1;
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
    this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v12 = v2->fields.mEventEndTimeInfo;
      if ( v12 )
      {
        if ( this )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     v12->fields.event_id,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Entity )
          {
            v16 = (CommonUI_o *)this;
            klass = (System_String_o *)Entity[7].klass;
            this = (EventBannerWindowScrollItem_o *)EventBannerWindowScrollItem___c_TypeInfo;
            Empty = string_TypeInfo->static_fields->Empty;
            if ( !EventBannerWindowScrollItem___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventBannerWindowScrollItem___c_TypeInfo);
              this = (EventBannerWindowScrollItem_o *)EventBannerWindowScrollItem___c_TypeInfo;
            }
            v19 = (System_Action_o *)*((_QWORD *)this[2].monitor + 1);
            if ( !v19 )
            {
              if ( !LODWORD(this[2].fields.condMessageLabel) )
              {
                j_il2cpp_runtime_class_init_0(this);
                this = (EventBannerWindowScrollItem_o *)EventBannerWindowScrollItem___c_TypeInfo;
              }
              v20 = *(Il2CppObject **)this[2].monitor;
              v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
              System_Action___ctor(v19, v20, Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__, 0LL);
              static_fields = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
              static_fields->__9__9_0 = v19;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_0, (int32_t)v19, v22, v23);
            }
            if ( v16 )
            {
              CommonUI__OpenNotificationDialog(v16, Empty, klass, v19, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1B64324(this);
  }
LABEL_21:
  event_id = mEventEndTimeInfo->fields.event_id;
  if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
  TitleInfoControl__OnClickEventBtn_36940848(event_id, 0LL);
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
  UISprite_o *mBannerSp; // x22
  int32_t event_id; // w23
  bool v16; // w0
  UIWidget_o *v17; // x23
  bool v18; // w22
  const MethodInfo *v19; // x1
  UILabel_o *IsGrayOut; // x0
  float v21; // s0
  float v22; // s3
  float v23; // s1
  float v24; // s2
  System_String_o *Empty; // x23
  const MethodInfo *v26; // x1
  struct TitleInfoControl_EventEndTimeInfo_o *v27; // x8
  UISprite_o *v28; // x22
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x21
  UnityEngine_Object_o *mNoticeNumber; // x22
  Il2CppObject *noticeNumberPrefab; // x22
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F9093 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, ev_end_time_inf);
    sub_1B640C8(&EventBannerWindowScrollItem_TypeInfo, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&string_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_5678/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, v11);
    sub_1B640C8(&StringLiteral_5681/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, v12);
    byte_49F9093 = 1;
  }
  this->fields.mEventEndTimeInfo = ev_end_time_inf;
  p_mEventEndTimeInfo = &this->fields.mEventEndTimeInfo;
  sub_1B6406C(
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
  v16 = AtlasManager__SetShopBanner(mBannerSp, event_id, 0LL);
  v17 = (UIWidget_o *)this->fields.mBannerSp;
  v18 = v16;
  IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem__IsGrayOut(this, v19);
  v21 = 1.0;
  if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
    v21 = 0.5;
  if ( !v17 )
    goto LABEL_43;
  v22 = 1.0;
  v23 = v21;
  v24 = v21;
  UIWidget__set_color(v17, *(UnityEngine_Color_o *)&v21, 0LL);
  Empty = string_TypeInfo->static_fields->Empty;
  IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem__IsGrayOut(this, v26);
  if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
  {
    v27 = *p_mEventEndTimeInfo;
    if ( !*p_mEventEndTimeInfo )
      goto LABEL_43;
    if ( !v27->fields.is_reward && v27->fields.is_shop_closed )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsGrayOut = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5678/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, 0LL);
      v27 = *p_mEventEndTimeInfo;
      if ( !*p_mEventEndTimeInfo )
        goto LABEL_43;
      Empty = (System_String_o *)IsGrayOut;
    }
    if ( !v27->fields.is_shop_closed )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Empty = LocalizationManager__Get((System_String_o *)StringLiteral_5681/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, 0LL);
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
  if ( !v18 )
  {
LABEL_24:
    IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
    if ( !IsGrayOut )
      goto LABEL_43;
    UISprite__set_atlas((UISprite_o *)IsGrayOut, this->fields.mCommonAtlas, 0LL);
    IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem_TypeInfo;
    v28 = this->fields.mBannerSp;
    if ( !EventBannerWindowScrollItem_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventBannerWindowScrollItem_TypeInfo);
    if ( !v28 )
      goto LABEL_43;
    UISprite__set_spriteName(v28, EventBannerWindowScrollItem_TypeInfo->static_fields->DEFAULT_SP_NAME, 0LL);
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
      v32 = UnityEngine_Object__Instantiate_object_(
              noticeNumberPrefab,
              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      *p_mNoticeNumber = (struct NoticeNumberComponent_o *)v32;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mNoticeNumber, (int32_t)v32, v33, v34);
      IsGrayOut = (UILabel_o *)*p_mNoticeNumber;
      if ( !*p_mNoticeNumber )
        goto LABEL_43;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsGrayOut, 0LL);
      GameObjectExtensions__SafeSetParent_33381252(gameObject, this->fields.noticeNumberRoot, 0LL);
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
    sub_1B64324(IsGrayOut);
  }
}


void __fastcall EventBannerWindowScrollItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F9097 & 1) == 0 )
  {
    sub_1B640C8(&EventBannerWindowScrollItem___c_TypeInfo, v1);
    byte_49F9097 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventBannerWindowScrollItem___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventBannerWindowScrollItem___c_TypeInfo->static_fields->__9 = (struct EventBannerWindowScrollItem___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventBannerWindowScrollItem___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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