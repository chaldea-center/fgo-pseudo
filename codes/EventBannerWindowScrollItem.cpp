void EventBannerWindowScrollItem___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596CEF0 & 1) == 0 )
  {
    sub_2213A60(&EventBannerWindowScrollItem_TypeInfo);
    sub_2213A60(&StringLiteral_17755/*"banner_loading"*/);
    byte_596CEF0 = 1;
  }
  v7 = StringLiteral_17755/*"banner_loading"*/;
  EventBannerWindowScrollItem_TypeInfo->static_fields->DEFAULT_SP_NAME = (struct System_String_o *)StringLiteral_17755/*"banner_loading"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventBannerWindowScrollItem_TypeInfo->static_fields,
    v7,
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
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Entity; // x20
  int64_t Time; // x21
  bool result; // w0
  __int64 v13; // x1
  __int64 v14; // x2

  v2 = this;
  if ( (byte_596CEEF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (EventBannerWindowScrollItem_o *)sub_2213A60(&TitleInfoControl_TypeInfo);
    byte_596CEEF = 1;
  }
  mEventEndTimeInfo = v2->fields.mEventEndTimeInfo;
  if ( !mEventEndTimeInfo )
    goto LABEL_25;
  if ( !mEventEndTimeInfo->fields.is_reward && mEventEndTimeInfo->fields.is_shop_closed )
    return 1;
  this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___),
        (v5 = v2->fields.mEventEndTimeInfo) == 0)
    || !this
    || (this = (EventBannerWindowScrollItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  v5->fields.event_id,
                                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        (v6 = v2->fields.mEventEndTimeInfo) == 0)
    || !MasterData_object )
  {
LABEL_25:
    sub_2213CDC(this, method);
  }
  v7 = (EventEntity_o *)this;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             v6->fields.event_id,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Time = NetworkManager__getTime(0);
  result = 1;
  if ( v7 && Entity )
  {
    if ( EventEntity__isPurchaseEventOpen(v7, 0) )
      return 0;
    if ( !*(&TitleInfoControl_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v13, v14);
    return !TitleInfoControl__IsEnableEventShopButton_46934560((EventDetailEntity_o *)Entity, 0)
        || Time >= v7->fields.finishedAt;
  }
  return result;
}


void EventBannerWindowScrollItem__OnClickItem(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventBannerWindowScrollItem_o *v3; // x19
  struct TitleInfoControl_EventEndTimeInfo_o *mEventEndTimeInfo; // x8
  struct TitleInfoControl_EventEndTimeInfo_o *v5; // x8
  Il2CppObject *Entity; // x21
  __int64 v7; // x2
  CommonUI_o *v8; // x19
  System_String_o *klass; // x21
  System_String_o *v10; // x20
  void *monitor; // x8
  System_Action_o *v12; // x22
  Il2CppObject *v13; // x23
  struct EventBannerWindowScrollItem___c_StaticFields *static_fields; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t event_id; // w19

  v3 = this;
  if ( (byte_596CEEE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TitleInfoControl_TypeInfo);
    sub_2213A60(&Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__);
    this = (EventBannerWindowScrollItem_o *)sub_2213A60(&EventBannerWindowScrollItem___c_TypeInfo);
    byte_596CEEE = 1;
  }
  mEventEndTimeInfo = v3->fields.mEventEndTimeInfo;
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
    this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v5 = v3->fields.mEventEndTimeInfo;
      if ( v5 )
      {
        if ( this )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     v5->fields.event_id,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Entity )
          {
            v8 = (CommonUI_o *)this;
            klass = (System_String_o *)Entity[7].klass;
            this = (EventBannerWindowScrollItem_o *)EventBannerWindowScrollItem___c_TypeInfo;
            v10 = **(System_String_o ***)(qword_5984390 + 184);
            if ( !*(&EventBannerWindowScrollItem___c_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(EventBannerWindowScrollItem___c_TypeInfo, method, v7);
              this = (EventBannerWindowScrollItem_o *)EventBannerWindowScrollItem___c_TypeInfo;
            }
            monitor = this[2].monitor;
            v12 = (System_Action_o *)*((_QWORD *)monitor + 1);
            if ( !v12 )
            {
              if ( !HIDWORD(this[2].fields.condMessageLabel) )
              {
                j_il2cpp_runtime_class_init_0(this, method, v7);
                monitor = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
              }
              v13 = *(Il2CppObject **)monitor;
              v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(v12, v13, Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__, 0);
              static_fields = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
              static_fields->__9__9_0 = v12;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&static_fields->__9__9_0,
                (int32_t)v12,
                v15,
                v16,
                v17,
                v18,
                v19,
                v20);
            }
            if ( v8 )
            {
              CommonUI__OpenNotificationDialog(v8, v10, klass, v12, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_2213CDC(this, method);
  }
LABEL_21:
  event_id = mEventEndTimeInfo->fields.event_id;
  if ( !*(&TitleInfoControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, method, v2);
  TitleInfoControl__OnClickEventBtn_46932672(event_id, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventBannerWindowScrollItem__Setup(
        EventBannerWindowScrollItem_o *this,
        TitleInfoControl_EventEndTimeInfo_o *ev_end_time_inf,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct TitleInfoControl_EventEndTimeInfo_o **p_mEventEndTimeInfo; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  UISprite_o *mBannerSp; // x22
  int32_t event_id; // w23
  bool v15; // w0
  UIWidget_o *v16; // x23
  bool v17; // w22
  const MethodInfo *v18; // x1
  UILabel_o *IsGrayOut; // x0
  float v20; // s0 OVERLAPPED
  float v21; // s3
  float v22; // s1
  float v23; // s2
  System_String_o *v24; // x23
  const MethodInfo *v25; // x1
  __int64 v26; // x2
  struct TitleInfoControl_EventEndTimeInfo_o *v27; // x8
  __int64 v28; // x2
  UISprite_o *v29; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x21
  UnityEngine_Object_o *mNoticeNumber; // x22
  __int64 v34; // x2
  Il2CppObject *noticeNumberPrefab; // x22
  Il2CppObject *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_596CEED & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&EventBannerWindowScrollItem_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_5940/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/);
    sub_2213A60(&StringLiteral_5943/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/);
    byte_596CEED = 1;
  }
  this->fields.mEventEndTimeInfo = ev_end_time_inf;
  p_mEventEndTimeInfo = &this->fields.mEventEndTimeInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mEventEndTimeInfo,
    (int32_t)ev_end_time_inf,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.mEventEndTimeInfo )
    goto LABEL_24;
  mBannerSp = this->fields.mBannerSp;
  event_id = this->fields.mEventEndTimeInfo->fields.event_id;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11, v12);
  v15 = AtlasManager__SetShopBanner(mBannerSp, event_id, 0);
  v16 = (UIWidget_o *)this->fields.mBannerSp;
  v17 = v15;
  IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem__IsGrayOut(this, v18);
  if ( !v16 )
    goto LABEL_43;
  v20 = 1.0;
  v21 = 1.0;
  if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
    v20 = 0.5;
  v22 = v20;
  v23 = v20;
  UIWidget__set_color(v16, *(UnityEngine_Color_o *)&v20, 0);
  v24 = **(System_String_o ***)(qword_5984390 + 184);
  IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem__IsGrayOut(this, v25);
  if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
  {
    v27 = *p_mEventEndTimeInfo;
    if ( !*p_mEventEndTimeInfo )
      goto LABEL_43;
    if ( !v27->fields.is_reward && v27->fields.is_shop_closed )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v26);
      IsGrayOut = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5940/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, 0);
      v27 = *p_mEventEndTimeInfo;
      if ( !*p_mEventEndTimeInfo )
        goto LABEL_43;
      v24 = (System_String_o *)IsGrayOut;
    }
    if ( !v27->fields.is_shop_closed )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v26);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5943/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, 0);
    }
  }
  IsGrayOut = this->fields.condMessageLabel;
  if ( !IsGrayOut )
    goto LABEL_43;
  UILabel__set_text(IsGrayOut, v24, 0);
  IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
  if ( !IsGrayOut )
    goto LABEL_43;
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *, float))IsGrayOut->klass->vtable._8_set_alpha.methodPtr)(
    IsGrayOut,
    IsGrayOut->klass->vtable._8_set_alpha.method,
    1.0);
  if ( !v17 )
  {
LABEL_24:
    IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
    if ( !IsGrayOut )
      goto LABEL_43;
    UISprite__set_atlas((UISprite_o *)IsGrayOut, this->fields.mCommonAtlas, 0);
    IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem_TypeInfo;
    v29 = this->fields.mBannerSp;
    if ( !*(&EventBannerWindowScrollItem_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventBannerWindowScrollItem_TypeInfo, v11, v28);
    if ( !v29 )
      goto LABEL_43;
    UISprite__set_spriteName(v29, EventBannerWindowScrollItem_TypeInfo->static_fields->DEFAULT_SP_NAME, 0);
    IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
    if ( !IsGrayOut )
      goto LABEL_43;
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *, double))IsGrayOut->klass->vtable._8_set_alpha.methodPtr)(
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
    IsGrayOut = (UILabel_o *)UnityEngine_Object__op_Equality(mNoticeNumber, 0, 0);
    if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
    {
      noticeNumberPrefab = (Il2CppObject *)this->fields.noticeNumberPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v34);
      v36 = UnityEngine_Object__Instantiate_object_(
              noticeNumberPrefab,
              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      *p_mNoticeNumber = (struct NoticeNumberComponent_o *)v36;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mNoticeNumber,
        (int32_t)v36,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      IsGrayOut = (UILabel_o *)*p_mNoticeNumber;
      if ( !*p_mNoticeNumber )
        goto LABEL_43;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsGrayOut, 0);
      GameObjectExtensions__SafeSetParent_42897308(gameObject, this->fields.noticeNumberRoot, 0);
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
    sub_2213CDC(IsGrayOut, v11);
  }
}


void EventBannerWindowScrollItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CEF1 & 1) == 0 )
  {
    sub_2213A60(&EventBannerWindowScrollItem___c_TypeInfo);
    byte_596CEF1 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventBannerWindowScrollItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventBannerWindowScrollItem___c_TypeInfo->static_fields->__9 = (struct EventBannerWindowScrollItem___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventBannerWindowScrollItem___c_TypeInfo->static_fields,
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