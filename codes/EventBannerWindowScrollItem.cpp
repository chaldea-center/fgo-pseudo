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

  if ( (byte_4C1EA33 & 1) == 0 )
  {
    sub_1C3B764(&EventBannerWindowScrollItem_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_17394/*"capacity"*/, v8);
    byte_4C1EA33 = 1;
  }
  EventBannerWindowScrollItem_TypeInfo->static_fields->DEFAULT_SP_NAME = (struct System_String_o *)StringLiteral_17394/*"capacity"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventBannerWindowScrollItem_TypeInfo->static_fields,
    StringLiteral_17394/*"capacity"*/,
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
  if ( (byte_4C1EA32 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, v3);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    this = (EventBannerWindowScrollItem_o *)sub_1C3B764(&TitleInfoControl_TypeInfo, v8);
    byte_4C1EA32 = 1;
  }
  mEventEndTimeInfo = v2->fields.mEventEndTimeInfo;
  if ( !mEventEndTimeInfo )
    goto LABEL_24;
  if ( !mEventEndTimeInfo->fields.is_reward && mEventEndTimeInfo->fields.is_shop_closed )
    return 1;
  this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___),
        (v11 = v2->fields.mEventEndTimeInfo) == 0LL)
    || !this
    || (this = (EventBannerWindowScrollItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  v11->fields.event_id,
                                                  (const MethodInfo_329AE48 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        (v12 = v2->fields.mEventEndTimeInfo) == 0LL)
    || !MasterData_object )
  {
LABEL_24:
    sub_1C3B9C0(this, method);
  }
  v13 = (EventEntity_o *)this;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             v12->fields.event_id,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
    return !TitleInfoControl__IsEnableEventShopButton_38630404((EventDetailEntity_o *)Entity, 0LL)
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t event_id; // w19

  v2 = this;
  if ( (byte_4C1EA31 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDetailMaster___, v3);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1C3B764(&string_TypeInfo, v7);
    sub_1C3B764(&TitleInfoControl_TypeInfo, v8);
    sub_1C3B764(&Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__, v9);
    this = (EventBannerWindowScrollItem_o *)sub_1C3B764(&EventBannerWindowScrollItem___c_TypeInfo, v10);
    byte_4C1EA31 = 1;
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
    this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v12 = v2->fields.mEventEndTimeInfo;
      if ( v12 )
      {
        if ( this )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     v12->fields.event_id,
                     (const MethodInfo_329AE48 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
              v17 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
              System_Action___ctor(v17, v18, Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__, 0LL);
              static_fields = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
              static_fields->__9__9_0 = v17;
              sub_1C3B708(
                (PartyOrganizationUtility_o *)&static_fields->__9__9_0,
                (int64_t)v17,
                v20,
                v21,
                v22,
                v23,
                v24,
                v25);
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
    sub_1C3B9C0(this, method);
  }
LABEL_21:
  event_id = mEventEndTimeInfo->fields.event_id;
  if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
  TitleInfoControl__OnClickEventBtn_38628512(event_id, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct TitleInfoControl_EventEndTimeInfo_o **p_mEventEndTimeInfo; // x21
  __int64 v18; // x1
  UISprite_o *mBannerSp; // x22
  int32_t event_id; // w23
  bool v21; // w0
  UIWidget_o *v22; // x23
  bool v23; // w22
  const MethodInfo *v24; // x1
  UILabel_o *IsGrayOut; // x0
  float v26; // s0
  float v27; // s3
  float v28; // s1
  float v29; // s2
  System_String_o *Empty; // x23
  const MethodInfo *v31; // x1
  struct TitleInfoControl_EventEndTimeInfo_o *v32; // x8
  UISprite_o *v33; // x22
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x21
  UnityEngine_Object_o *mNoticeNumber; // x22
  Il2CppObject *noticeNumberPrefab; // x22
  Il2CppObject *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C1EA30 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, ev_end_time_inf);
    sub_1C3B764(&EventBannerWindowScrollItem_TypeInfo, v10);
    sub_1C3B764(&LocalizationManager_TypeInfo, v11);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___, v12);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v13);
    sub_1C3B764(&string_TypeInfo, v14);
    sub_1C3B764(&StringLiteral_5823/*"Element '"*/, v15);
    sub_1C3B764(&StringLiteral_5826/*"Element '{0}' has a no factory that accept the set of XML attributes specified."*/, v16);
    byte_4C1EA30 = 1;
  }
  this->fields.mEventEndTimeInfo = ev_end_time_inf;
  p_mEventEndTimeInfo = &this->fields.mEventEndTimeInfo;
  sub_1C3B708(
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
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v21 = AtlasManager__SetShopBanner(mBannerSp, event_id, 0LL);
  v22 = (UIWidget_o *)this->fields.mBannerSp;
  v23 = v21;
  IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem__IsGrayOut(this, v24);
  v26 = 1.0;
  if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
    v26 = 0.5;
  if ( !v22 )
    goto LABEL_43;
  v27 = 1.0;
  v28 = v26;
  v29 = v26;
  UIWidget__set_color(v22, *(UnityEngine_Color_o *)&v26, 0LL);
  Empty = string_TypeInfo->static_fields->Empty;
  IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem__IsGrayOut(this, v31);
  if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
  {
    v32 = *p_mEventEndTimeInfo;
    if ( !*p_mEventEndTimeInfo )
      goto LABEL_43;
    if ( !v32->fields.is_reward && v32->fields.is_shop_closed )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsGrayOut = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5823/*"Element '"*/, 0LL);
      v32 = *p_mEventEndTimeInfo;
      if ( !*p_mEventEndTimeInfo )
        goto LABEL_43;
      Empty = (System_String_o *)IsGrayOut;
    }
    if ( !v32->fields.is_shop_closed )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Empty = LocalizationManager__Get((System_String_o *)StringLiteral_5826/*"Element '{0}' has a no factory that accept the set of XML attributes specified."*/, 0LL);
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
  if ( !v23 )
  {
LABEL_24:
    IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
    if ( !IsGrayOut )
      goto LABEL_43;
    UISprite__set_atlas((UISprite_o *)IsGrayOut, this->fields.mCommonAtlas, 0LL);
    IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem_TypeInfo;
    v33 = this->fields.mBannerSp;
    if ( !EventBannerWindowScrollItem_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventBannerWindowScrollItem_TypeInfo);
    if ( !v33 )
      goto LABEL_43;
    UISprite__set_spriteName(v33, EventBannerWindowScrollItem_TypeInfo->static_fields->DEFAULT_SP_NAME, 0LL);
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
      v37 = UnityEngine_Object__Instantiate_object_(
              noticeNumberPrefab,
              (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      *p_mNoticeNumber = (struct NoticeNumberComponent_o *)v37;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mNoticeNumber, (int64_t)v37, v38, v39, v40, v41, v42, v43);
      IsGrayOut = (UILabel_o *)*p_mNoticeNumber;
      if ( !*p_mNoticeNumber )
        goto LABEL_43;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsGrayOut, 0LL);
      GameObjectExtensions__SafeSetParent_34969340(gameObject, this->fields.noticeNumberRoot, 0LL);
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
    sub_1C3B9C0(IsGrayOut, v18);
  }
}


void __fastcall EventBannerWindowScrollItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C1EA34 & 1) == 0 )
  {
    sub_1C3B764(&EventBannerWindowScrollItem___c_TypeInfo, v1);
    byte_4C1EA34 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventBannerWindowScrollItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventBannerWindowScrollItem___c_TypeInfo->static_fields->__9 = (struct EventBannerWindowScrollItem___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventBannerWindowScrollItem___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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