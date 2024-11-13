void __fastcall EventBannerWindowScrollItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B12D70 & 1) == 0 )
  {
    sub_1BCA7E0(&EventBannerWindowScrollItem_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17236/*"banner_loading"*/, v8, v9);
    byte_4B12D70 = 1;
  }
  EventBannerWindowScrollItem_TypeInfo->static_fields->DEFAULT_SP_NAME = (struct System_String_o *)StringLiteral_17236/*"banner_loading"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventBannerWindowScrollItem_TypeInfo->static_fields,
    StringLiteral_17236/*"banner_loading"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventBannerWindowScrollItem___ctor(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall EventBannerWindowScrollItem__IsGrayOut(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventBannerWindowScrollItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct TitleInfoControl_EventEndTimeInfo_o *mEventEndTimeInfo; // x8
  Il2CppObject *MasterData_object; // x20
  struct TitleInfoControl_EventEndTimeInfo_o *v18; // x8
  struct TitleInfoControl_EventEndTimeInfo_o *v19; // x8
  EventEntity_o *v20; // x19
  __int64 v21; // x1
  Il2CppObject *Entity; // x20
  int64_t Time; // x21
  bool result; // w0
  __int64 v25; // x1

  v3 = this;
  if ( (byte_4B12D6F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    this = (EventBannerWindowScrollItem_o *)sub_1BCA7E0(&TitleInfoControl_TypeInfo, v14, v15);
    byte_4B12D6F = 1;
  }
  mEventEndTimeInfo = v3->fields.mEventEndTimeInfo;
  if ( !mEventEndTimeInfo )
    goto LABEL_24;
  if ( !mEventEndTimeInfo->fields.is_reward && mEventEndTimeInfo->fields.is_shop_closed )
    return 1;
  this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___),
        (v18 = v3->fields.mEventEndTimeInfo) == 0LL)
    || !this
    || (this = (EventBannerWindowScrollItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  v18->fields.event_id,
                                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        (v19 = v3->fields.mEventEndTimeInfo) == 0LL)
    || !MasterData_object )
  {
LABEL_24:
    sub_1BCAA3C(this, method);
  }
  v20 = (EventEntity_o *)this;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             v19->fields.event_id,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21);
  Time = NetworkManager__getTime(0LL);
  result = 1;
  if ( v20 && Entity )
  {
    if ( EventEntity__isPurchaseEventOpen(v20, 0LL) )
      return 0;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v25);
    return !TitleInfoControl__IsEnableEventShopButton_37955824((EventDetailEntity_o *)Entity, 0LL)
        || Time >= v20->fields.finishedAt;
  }
  return result;
}


void __fastcall EventBannerWindowScrollItem__OnClickItem(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventBannerWindowScrollItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct TitleInfoControl_EventEndTimeInfo_o *mEventEndTimeInfo; // x8
  struct TitleInfoControl_EventEndTimeInfo_o *v21; // x8
  Il2CppObject *Entity; // x20
  __int64 v23; // x2
  __int64 v24; // x3
  CommonUI_o *v25; // x19
  System_String_o *klass; // x20
  System_String_o *Empty; // x21
  System_Action_o *v28; // x22
  Il2CppObject *v29; // x23
  struct EventBannerWindowScrollItem___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int32_t event_id; // w19

  v3 = this;
  if ( (byte_4B12D6E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&string_TypeInfo, v12, v13);
    sub_1BCA7E0(&TitleInfoControl_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__, v16, v17);
    this = (EventBannerWindowScrollItem_o *)sub_1BCA7E0(&EventBannerWindowScrollItem___c_TypeInfo, v18, v19);
    byte_4B12D6E = 1;
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
    this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v21 = v3->fields.mEventEndTimeInfo;
      if ( v21 )
      {
        if ( this )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     v21->fields.event_id,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Entity )
          {
            v25 = (CommonUI_o *)this;
            klass = (System_String_o *)Entity[7].klass;
            this = (EventBannerWindowScrollItem_o *)EventBannerWindowScrollItem___c_TypeInfo;
            Empty = string_TypeInfo->static_fields->Empty;
            if ( !EventBannerWindowScrollItem___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventBannerWindowScrollItem___c_TypeInfo, method);
              this = (EventBannerWindowScrollItem_o *)EventBannerWindowScrollItem___c_TypeInfo;
            }
            v28 = (System_Action_o *)*((_QWORD *)this[2].monitor + 1);
            if ( !v28 )
            {
              if ( !LODWORD(this[2].fields.condMessageLabel) )
              {
                j_il2cpp_runtime_class_init_0(this, method);
                this = (EventBannerWindowScrollItem_o *)EventBannerWindowScrollItem___c_TypeInfo;
              }
              v29 = *(Il2CppObject **)this[2].monitor;
              v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v23, v24);
              System_Action___ctor(v28, v29, Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__, 0LL);
              static_fields = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
              static_fields->__9__9_0 = v28;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&static_fields->__9__9_0,
                (int64_t)v28,
                v31,
                v32,
                v33,
                v34,
                v35,
                v36);
            }
            if ( v25 )
            {
              CommonUI__OpenNotificationDialog(v25, Empty, klass, v28, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1BCAA3C(this, method);
  }
LABEL_21:
  event_id = mEventEndTimeInfo->fields.event_id;
  if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, method);
  TitleInfoControl__OnClickEventBtn_37953936(event_id, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBannerWindowScrollItem__Setup(
        EventBannerWindowScrollItem_o *this,
        TitleInfoControl_EventEndTimeInfo_o *ev_end_time_inf,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  struct TitleInfoControl_EventEndTimeInfo_o **p_mEventEndTimeInfo; // x21
  __int64 v25; // x1
  UISprite_o *mBannerSp; // x22
  int32_t event_id; // w23
  bool v28; // w0
  UIWidget_o *v29; // x23
  bool v30; // w22
  const MethodInfo *v31; // x1
  UILabel_o *IsGrayOut; // x0
  float v33; // s0
  float v34; // s3
  float v35; // s1
  float v36; // s2
  System_String_o *Empty; // x23
  const MethodInfo *v38; // x1
  struct TitleInfoControl_EventEndTimeInfo_o *v39; // x8
  UISprite_o *v40; // x22
  __int64 v41; // x1
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x21
  UnityEngine_Object_o *mNoticeNumber; // x22
  Il2CppObject *noticeNumberPrefab; // x22
  Il2CppObject *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4B12D6D & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, ev_end_time_inf, method);
    sub_1BCA7E0(&EventBannerWindowScrollItem_TypeInfo, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&string_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_5788/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_5791/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, v22, v23);
    byte_4B12D6D = 1;
  }
  this->fields.mEventEndTimeInfo = ev_end_time_inf;
  p_mEventEndTimeInfo = &this->fields.mEventEndTimeInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mEventEndTimeInfo,
    (int64_t)ev_end_time_inf,
    (int64_t)method,
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
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
  v28 = AtlasManager__SetShopBanner(mBannerSp, event_id, 0LL);
  v29 = (UIWidget_o *)this->fields.mBannerSp;
  v30 = v28;
  IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem__IsGrayOut(this, v31);
  v33 = 1.0;
  if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
    v33 = 0.5;
  if ( !v29 )
    goto LABEL_43;
  v34 = 1.0;
  v35 = v33;
  v36 = v33;
  UIWidget__set_color(v29, *(UnityEngine_Color_o *)&v33, 0LL);
  Empty = string_TypeInfo->static_fields->Empty;
  IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem__IsGrayOut(this, v38);
  if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
  {
    v39 = *p_mEventEndTimeInfo;
    if ( !*p_mEventEndTimeInfo )
      goto LABEL_43;
    if ( !v39->fields.is_reward && v39->fields.is_shop_closed )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
      IsGrayOut = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5788/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, 0LL);
      v39 = *p_mEventEndTimeInfo;
      if ( !*p_mEventEndTimeInfo )
        goto LABEL_43;
      Empty = (System_String_o *)IsGrayOut;
    }
    if ( !v39->fields.is_shop_closed )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
      Empty = LocalizationManager__Get((System_String_o *)StringLiteral_5791/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, 0LL);
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
  if ( !v30 )
  {
LABEL_24:
    IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
    if ( !IsGrayOut )
      goto LABEL_43;
    UISprite__set_atlas((UISprite_o *)IsGrayOut, this->fields.mCommonAtlas, 0LL);
    IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem_TypeInfo;
    v40 = this->fields.mBannerSp;
    if ( !EventBannerWindowScrollItem_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventBannerWindowScrollItem_TypeInfo, v25);
    if ( !v40 )
      goto LABEL_43;
    UISprite__set_spriteName(v40, EventBannerWindowScrollItem_TypeInfo->static_fields->DEFAULT_SP_NAME, 0LL);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
    IsGrayOut = (UILabel_o *)UnityEngine_Object__op_Equality(mNoticeNumber, 0LL, 0LL);
    if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
    {
      noticeNumberPrefab = (Il2CppObject *)this->fields.noticeNumberPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
      v45 = UnityEngine_Object__Instantiate_object_(
              noticeNumberPrefab,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      *p_mNoticeNumber = (struct NoticeNumberComponent_o *)v45;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mNoticeNumber, (int64_t)v45, v46, v47, v48, v49, v50, v51);
      IsGrayOut = (UILabel_o *)*p_mNoticeNumber;
      if ( !*p_mNoticeNumber )
        goto LABEL_43;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsGrayOut, 0LL);
      GameObjectExtensions__SafeSetParent_34336992(gameObject, this->fields.noticeNumberRoot, 0LL);
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
    sub_1BCAA3C(IsGrayOut, v25);
  }
}


void __fastcall EventBannerWindowScrollItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12D71 & 1) == 0 )
  {
    sub_1BCA7E0(&EventBannerWindowScrollItem___c_TypeInfo, v1, v2);
    byte_4B12D71 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventBannerWindowScrollItem___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventBannerWindowScrollItem___c_TypeInfo->static_fields->__9 = (struct EventBannerWindowScrollItem___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventBannerWindowScrollItem___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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