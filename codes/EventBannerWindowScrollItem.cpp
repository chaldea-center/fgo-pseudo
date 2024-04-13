void __fastcall EventBannerWindowScrollItem___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42EB883 & 1) == 0 )
  {
    sub_B5D5C4(&EventBannerWindowScrollItem_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_16805/*"banner_loading"*/, v8, v9, v10);
    byte_42EB883 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventBannerWindowScrollItem_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_16805/*"banner_loading"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16805/*"banner_loading"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventBannerWindowScrollItem___ctor(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall EventBannerWindowScrollItem__IsGrayOut(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventBannerWindowScrollItem_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct TitleInfoControl_EventEndTimeInfo_o *mEventEndTimeInfo; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  struct TitleInfoControl_EventEndTimeInfo_o *v25; // x8
  struct TitleInfoControl_EventEndTimeInfo_o *v26; // x8
  EventEntity_o *v27; // x19
  EventDetailEntity_o *Entity; // x20
  int64_t Time; // x21
  bool result; // w0

  v4 = this;
  if ( (byte_42EB882 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    this = (EventBannerWindowScrollItem_o *)sub_B5D5C4(&TitleInfoControl_TypeInfo, v20, v21, v22);
    byte_42EB882 = 1;
  }
  mEventEndTimeInfo = v4->fields.mEventEndTimeInfo;
  if ( !mEventEndTimeInfo )
    goto LABEL_27;
  if ( !mEventEndTimeInfo->fields.is_reward && mEventEndTimeInfo->fields.is_shop_closed )
    return 1;
  this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)this,
                                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___),
        (v25 = v4->fields.mEventEndTimeInfo) == 0LL)
    || !this
    || (this = (EventBannerWindowScrollItem_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                  v25->fields.event_id,
                                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        (v26 = v4->fields.mEventEndTimeInfo) == 0LL)
    || !MasterData_WarQuestSelectionMaster )
  {
LABEL_27:
    sub_B5D69C(this, method);
  }
  v27 = (EventEntity_o *)this;
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    v26->fields.event_id,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  result = 1;
  if ( v27 && Entity )
  {
    if ( EventEntity__isPurchaseEventOpen(v27, 0LL) )
      return 0;
    if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    }
    return !TitleInfoControl__IsEnableEventShopButton_18442432(Entity, 0LL) || Time >= v27->fields.finishedAt;
  }
  return result;
}


void __fastcall EventBannerWindowScrollItem__OnClickItem(EventBannerWindowScrollItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventBannerWindowScrollItem_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct TitleInfoControl_EventEndTimeInfo_o *mEventEndTimeInfo; // x8
  struct TitleInfoControl_EventEndTimeInfo_o *v30; // x8
  WarEntity_o *Entity; // x20
  CommonUI_o *v32; // x19
  System_String_o *coordinates; // x20
  System_String_o *Empty; // x21
  void *mBannerSp; // x8
  System_Action_o *v36; // x22
  Il2CppObject *v37; // x23
  struct EventBannerWindowScrollItem___c_StaticFields *static_fields; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t event_id; // w19

  v4 = this;
  if ( (byte_42EB881 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&string_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&TitleInfoControl_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__, v23, v24, v25);
    this = (EventBannerWindowScrollItem_o *)sub_B5D5C4(&EventBannerWindowScrollItem___c_TypeInfo, v26, v27, v28);
    byte_42EB881 = 1;
  }
  mEventEndTimeInfo = v4->fields.mEventEndTimeInfo;
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
    this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventBannerWindowScrollItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v30 = v4->fields.mEventEndTimeInfo;
      if ( v30 )
      {
        if ( this )
        {
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                     v30->fields.event_id,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          this = (EventBannerWindowScrollItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Entity )
          {
            v32 = (CommonUI_o *)this;
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
            v36 = (System_Action_o *)*((_QWORD *)mBannerSp + 1);
            if ( !v36 )
            {
              if ( (BYTE3(this[3].fields.mNoticeNumber) & 4) != 0 && !LODWORD(this[2].fields.mNoticeNumber) )
              {
                j_il2cpp_runtime_class_init_0(this);
                mBannerSp = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
              }
              v37 = *(Il2CppObject **)mBannerSp;
              v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(v36, v37, Method_EventBannerWindowScrollItem___c__OnClickItem_b__9_0__, 0LL);
              static_fields = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
              static_fields->__9__9_0 = v36;
              sub_B5D560(
                (BattleServantConfConponent_o *)&static_fields->__9__9_0,
                (System_Int32_array **)v36,
                v39,
                v40,
                v41,
                v42,
                v43,
                v44);
            }
            if ( v32 )
            {
              CommonUI__OpenNotificationDialog(v32, Empty, coordinates, v36, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_27:
    sub_B5D69C(this, method);
  }
LABEL_23:
  event_id = mEventEndTimeInfo->fields.event_id;
  if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
  }
  TitleInfoControl__OnClickEventBtn_18440404(event_id, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  struct TitleInfoControl_EventEndTimeInfo_o **p_mEventEndTimeInfo; // x21
  __int64 v32; // x1
  UISprite_o *mBannerSp; // x22
  int32_t event_id; // w23
  bool v35; // w0
  UIWidget_o *v36; // x23
  bool v37; // w22
  const MethodInfo *v38; // x1
  UILabel_o *IsGrayOut; // x0
  int v40; // s0
  System_String_o *Empty; // x23
  const MethodInfo *v45; // x1
  struct TitleInfoControl_EventEndTimeInfo_o *v46; // x8
  UISprite_o *v47; // x22
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x21
  UnityEngine_Object_o *mNoticeNumber; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *noticeNumberPrefab; // x22
  System_Int32_array **v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_42EB880 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)ev_end_time_inf, (_DWORD)method, v3);
    sub_B5D5C4(&EventBannerWindowScrollItem_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&string_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_5788/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_5791/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, v28, v29, v30);
    byte_42EB880 = 1;
  }
  this->fields.mEventEndTimeInfo = ev_end_time_inf;
  p_mEventEndTimeInfo = &this->fields.mEventEndTimeInfo;
  sub_B5D560(
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
  v35 = AtlasManager__SetShopBanner(mBannerSp, event_id, 0LL);
  v36 = (UIWidget_o *)this->fields.mBannerSp;
  v37 = v35;
  if ( EventBannerWindowScrollItem__IsGrayOut(this, v38) )
  {
    *(UnityEngine_Color_o *)&v40 = UnityEngine_Color__get_gray(0LL);
    if ( !v36 )
      goto LABEL_50;
  }
  else
  {
    *(UnityEngine_Color_o *)&v40 = UnityEngine_Color__get_white(0LL);
    if ( !v36 )
      goto LABEL_50;
  }
  UIWidget__set_color(v36, *(UnityEngine_Color_o *)&v40, 0LL);
  Empty = string_TypeInfo->static_fields->Empty;
  IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem__IsGrayOut(this, v45);
  if ( ((unsigned __int8)IsGrayOut & 1) != 0 )
  {
    v46 = *p_mEventEndTimeInfo;
    if ( !*p_mEventEndTimeInfo )
      goto LABEL_50;
    if ( !v46->fields.is_reward && v46->fields.is_shop_closed )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsGrayOut = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5788/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, 0LL);
      v46 = *p_mEventEndTimeInfo;
      if ( !*p_mEventEndTimeInfo )
        goto LABEL_50;
      Empty = (System_String_o *)IsGrayOut;
    }
    if ( !v46->fields.is_shop_closed )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Empty = LocalizationManager__Get((System_String_o *)StringLiteral_5791/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, 0LL);
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
  if ( !v37 )
  {
LABEL_28:
    IsGrayOut = (UILabel_o *)this->fields.mBannerSp;
    if ( !IsGrayOut )
      goto LABEL_50;
    UISprite__set_atlas((UISprite_o *)IsGrayOut, this->fields.mCommonAtlas, 0LL);
    v47 = this->fields.mBannerSp;
    IsGrayOut = (UILabel_o *)EventBannerWindowScrollItem_TypeInfo;
    if ( (BYTE3(EventBannerWindowScrollItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventBannerWindowScrollItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBannerWindowScrollItem_TypeInfo);
    }
    if ( !v47 )
      goto LABEL_50;
    UISprite__set_spriteName(v47, EventBannerWindowScrollItem_TypeInfo->static_fields->DEFAULT_SP_NAME, 0LL);
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
      v51 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     noticeNumberPrefab,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      *p_mNoticeNumber = (struct NoticeNumberComponent_o *)v51;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.mNoticeNumber, v51, v52, v53, v54, v55, v56, v57);
      IsGrayOut = (UILabel_o *)*p_mNoticeNumber;
      if ( !*p_mNoticeNumber )
        goto LABEL_50;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsGrayOut, 0LL);
      GameObjectExtensions__SafeSetParent_32436524(gameObject, this->fields.noticeNumberRoot, 0LL);
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
    sub_B5D69C(IsGrayOut, v32);
  }
}


void __fastcall EventBannerWindowScrollItem___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventBannerWindowScrollItem___c_StaticFields *static_fields; // x0

  if ( (byte_42E64E7 & 1) == 0 )
  {
    sub_B5D5C4(&EventBannerWindowScrollItem___c_TypeInfo, v1, v2, v3);
    byte_42E64E7 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventBannerWindowScrollItem___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventBannerWindowScrollItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventBannerWindowScrollItem___c_o *)v4;
  sub_B5D560(static_fields);
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