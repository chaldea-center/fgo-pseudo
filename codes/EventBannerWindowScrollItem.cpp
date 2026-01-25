void EventBannerWindowScrollItem___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4CEAE75 & 1) == 0 )
  {
    sub_1C7BAE8(&EventBannerWindowScrollItem_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17110/*"banner_loading"*/);
    byte_4CEAE75 = 1;
  }
  EventBannerWindowScrollItem_TypeInfo->static_fields->DEFAULT_SP_NAME = (struct System_String_o *)StringLiteral_17110/*"banner_loading"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)EventBannerWindowScrollItem_TypeInfo->static_fields,
    StringLiteral_17110/*"banner_loading"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void EventBannerWindowScrollItem___ctor(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool EventBannerWindowScrollItem__IsGrayOut(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  EventBannerWindowScrollItem_o *v2; // x19
  struct TitleInfoControl_EventEndTimeInfo_o *mEventEndTimeInfo; // x8
  Il2CppObject *MasterData_object; // x20
  struct TitleInfoControl_EventEndTimeInfo_o *v5; // x8
  struct TitleInfoControl_EventEndTimeInfo_o *v6; // x8
  EventEntity_o *v7; // x19
  Il2CppObject *Entity; // x20
  int64_t Time; // x21
  bool result; // w0

  v2 = this;
  if ( (byte_4CEAE74 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (EventBannerWindowScrollItem_o *)sub_1C7BAE8(&TitleInfoControl_TypeInfo);
    byte_4CEAE74 = 1;
  }
  mEventEndTimeInfo = v2->fields.mEventEndTimeInfo;
  if ( !mEventEndTimeInfo )
    goto LABEL_24;
  if ( !mEventEndTimeInfo->fields.is_reward && mEventEndTimeInfo->fields.is_shop_closed )
    return 1;
  this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMaster___),
        (v5 = v2->fields.mEventEndTimeInfo) == 0)
    || !this
    || (this = (EventBannerWindowScrollItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  v5->fields.event_id,
                                                  (const MethodInfo_342E2FC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        (v6 = v2->fields.mEventEndTimeInfo) == 0)
    || !MasterData_object )
  {
LABEL_24:
    sub_1C7BD40(this, method);
  }
  v7 = (EventEntity_o *)this;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             v6->fields.event_id,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  result = 1;
  if ( v7 && Entity )
  {
    if ( EventEntity__isPurchaseEventOpen(v7, 0) )
      return 0;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    return !TitleInfoControl__IsEnableEventShopButton_40550396((EventDetailEntity_o *)Entity, 0)
        || Time >= v7->fields.finishedAt;
  }
  return result;
}


void EventBannerWindowScrollItem__OnClickItem(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  EventBannerWindowScrollItem_o *v2; // x19
  struct TitleInfoControl_EventEndTimeInfo_o *mEventEndTimeInfo; // x8
  struct TitleInfoControl_EventEndTimeInfo_o *v4; // x8
  Il2CppObject *Entity; // x20
  CommonUI_o *v6; // x19
  System_String_o *klass; // x20
  System_String_o *Empty; // x21
  System_Action_o *v9; // x22
  Il2CppObject *v10; // x23
  struct EventBannerWindowScrollItem___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t event_id; // w19

  v2 = this;
  if ( (byte_4CEAE73 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&string_TypeInfo);
    sub_1C7BAE8(&TitleInfoControl_TypeInfo);
    sub_1C7BAE8(&Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__);
    this = (EventBannerWindowScrollItem_o *)sub_1C7BAE8(&EventBannerWindowScrollItem___c_TypeInfo);
    byte_4CEAE73 = 1;
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
    this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v4 = v2->fields.mEventEndTimeInfo;
      if ( v4 )
      {
        if ( this )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     v4->fields.event_id,
                     (const MethodInfo_342E2FC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Entity )
          {
            v6 = (CommonUI_o *)this;
            klass = (System_String_o *)Entity[7].klass;
            this = (EventBannerWindowScrollItem_o *)EventBannerWindowScrollItem___c_TypeInfo;
            Empty = string_TypeInfo->static_fields->Empty;
            if ( !EventBannerWindowScrollItem___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventBannerWindowScrollItem___c_TypeInfo);
              this = (EventBannerWindowScrollItem_o *)EventBannerWindowScrollItem___c_TypeInfo;
            }
            v9 = (System_Action_o *)*((_QWORD *)this[2].monitor + 1);
            if ( !v9 )
            {
              if ( !LODWORD(this[2].fields.condMessageLabel) )
              {
                j_il2cpp_runtime_class_init_0(this);
                this = (EventBannerWindowScrollItem_o *)EventBannerWindowScrollItem___c_TypeInfo;
              }
              v10 = *(Il2CppObject **)this[2].monitor;
              v9 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
              System_Action___ctor(v9, v10, Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__, 0);
              static_fields = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
              static_fields->__9__9_0 = v9;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)&static_fields->__9__9_0,
                (int32_t)v9,
                v12,
                v13,
                v14,
                v15,
                v16,
                v17);
            }
            if ( v6 )
            {
              CommonUI__OpenNotificationDialog(v6, Empty, klass, v9, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1C7BD40(this, method);
  }
LABEL_21:
  event_id = mEventEndTimeInfo->fields.event_id;
  if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
  TitleInfoControl__OnClickEventBtn_40548496(event_id, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventBannerWindowScrollItem__Setup(
        EventBannerWindowScrollItem_o *this,
        TitleInfoControl_EventEndTimeInfo_o *ev_end_time_inf,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct TitleInfoControl_EventEndTimeInfo_o **p_mEventEndTimeInfo; // x21
  __int64 v11; // x1
  UISprite_o *mBannerSp; // x22
  int32_t event_id; // w23
  bool v14; // w0
  UIWidget_o *v15; // x23
  bool v16; // w22
  const MethodInfo *v17; // x1
  UILabel_o *IsGrayOut; // x0
  float v19; // s0 OVERLAPPED
  float v20; // s3
  float v21; // s1
  float v22; // s2
  System_String_o *Empty; // x23
  const MethodInfo *v24; // x1
  struct TitleInfoControl_EventEndTimeInfo_o *v25; // x8
  UISprite_o *v26; // x22
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x21
  UnityEngine_Object_o *mNoticeNumber; // x22
  Il2CppObject *noticeNumberPrefab; // x22
  Il2CppObject *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4CEAE72 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&EventBannerWindowScrollItem_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5717/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/);
    sub_1C7BAE8(&StringLiteral_5720/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/);
    byte_4CEAE72 = 1;
  }
  this->fields.mEventEndTimeInfo = ev_end_time_inf;
  p_mEventEndTimeInfo = &this->fields.mEventEndTimeInfo;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mEventEndTimeInfo,
    (int32_t)ev_end_time_inf,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.mEventEndTimeInfo )
    goto LABEL_24;
  mBannerSp = this->fields.mBannerSp;
  event_id = this->fields.mEventEndTimeInfo->fields.event_id;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v14 = AtlasManager__SetShopBanner(mBannerSp, event_id, 0);
  v15 = (UIWidget_o *)this->fields.mBannerSp;
  v16 = v14;
  IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem__IsGrayOut(this, v17);
  v19 = 1.0;
  if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
    v19 = 0.5;
  if ( !v15 )
    goto LABEL_43;
  v20 = 1.0;
  v21 = v19;
  v22 = v19;
  UIWidget__set_color(v15, *(UnityEngine_Color_o *)&v19, 0);
  Empty = string_TypeInfo->static_fields->Empty;
  IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem__IsGrayOut(this, v24);
  if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
  {
    v25 = *p_mEventEndTimeInfo;
    if ( !*p_mEventEndTimeInfo )
      goto LABEL_43;
    if ( !v25->fields.is_reward && v25->fields.is_shop_closed )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsGrayOut = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5717/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, 0);
      v25 = *p_mEventEndTimeInfo;
      if ( !*p_mEventEndTimeInfo )
        goto LABEL_43;
      Empty = (System_String_o *)IsGrayOut;
    }
    if ( !v25->fields.is_shop_closed )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Empty = LocalizationManager__Get((System_String_o *)StringLiteral_5720/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, 0);
    }
  }
  IsGrayOut = this->fields.condMessageLabel;
  if ( !IsGrayOut )
    goto LABEL_43;
  UILabel__set_text(IsGrayOut, Empty, 0);
  IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
  if ( !IsGrayOut )
    goto LABEL_43;
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *, float))IsGrayOut->klass->vtable._8_set_alpha.methodPtr)(
    IsGrayOut,
    IsGrayOut->klass->vtable._8_set_alpha.method,
    1.0);
  if ( !v16 )
  {
LABEL_24:
    IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
    if ( !IsGrayOut )
      goto LABEL_43;
    UISprite__set_atlas((UISprite_o *)IsGrayOut, this->fields.mCommonAtlas, 0);
    IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem_TypeInfo;
    v26 = this->fields.mBannerSp;
    if ( !EventBannerWindowScrollItem_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventBannerWindowScrollItem_TypeInfo);
    if ( !v26 )
      goto LABEL_43;
    UISprite__set_spriteName(v26, EventBannerWindowScrollItem_TypeInfo->static_fields->DEFAULT_SP_NAME, 0);
    IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
    if ( !IsGrayOut )
      goto LABEL_43;
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *, float))IsGrayOut->klass->vtable._8_set_alpha.methodPtr)(
      IsGrayOut,
      IsGrayOut->klass->vtable._8_set_alpha.method,
      0.0);
  }
  IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
  if ( !IsGrayOut )
    goto LABEL_43;
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))IsGrayOut->klass->vtable._33_MakePixelPerfect.methodPtr)(
    IsGrayOut,
    IsGrayOut->klass->vtable._33_MakePixelPerfect.method);
  if ( *p_mEventEndTimeInfo )
  {
    p_mNoticeNumber = &this->fields.mNoticeNumber;
    mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsGrayOut = (UILabel_o *)UnityEngine_Object__op_Equality(mNoticeNumber, 0, 0);
    if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
    {
      noticeNumberPrefab = (Il2CppObject *)this->fields.noticeNumberPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v30 = UnityEngine_Object__Instantiate_object_(
              noticeNumberPrefab,
              (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      *p_mNoticeNumber = (struct NoticeNumberComponent_o *)v30;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.mNoticeNumber,
        (int32_t)v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      IsGrayOut = (UILabel_o *)*p_mNoticeNumber;
      if ( !*p_mNoticeNumber )
        goto LABEL_43;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsGrayOut, 0);
      GameObjectExtensions__SafeSetParent_36529116(gameObject, this->fields.noticeNumberRoot, 0);
    }
    if ( ev_end_time_inf )
    {
      IsGrayOut = (UILabel_o *)*p_mNoticeNumber;
      if ( *p_mNoticeNumber )
      {
        NoticeNumberComponent__SetNumber(
          (NoticeNumberComponent_o *)IsGrayOut,
          ev_end_time_inf->fields.noticeNumberCount,
          0);
        return;
      }
    }
LABEL_43:
    sub_1C7BD40(IsGrayOut, v11);
  }
}


void EventBannerWindowScrollItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEAE76 & 1) == 0 )
  {
    sub_1C7BAE8(&EventBannerWindowScrollItem___c_TypeInfo);
    byte_4CEAE76 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(EventBannerWindowScrollItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventBannerWindowScrollItem___c_TypeInfo->static_fields->__9 = (struct EventBannerWindowScrollItem___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)EventBannerWindowScrollItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventBannerWindowScrollItem___c___ctor(EventBannerWindowScrollItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventBannerWindowScrollItem___c___OnClickItem_b__9_0(
        EventBannerWindowScrollItem___c_o *this,
        const MethodInfo *method)
{
  ;
}