void __fastcall FortificationGauge___ctor(FortificationGauge_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4B195A2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_2980/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/, method, v2);
    byte_4B195A2 = 1;
  }
  v9 = StringLiteral_2980/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  this->fields.GET_POINT_LOCALIZE_KEY = (struct System_String_o *)StringLiteral_2980/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.GET_POINT_LOCALIZE_KEY, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FortificationGauge__SetData(
        FortificationGauge_o *this,
        BattleFortificationInfo_o *info,
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
  BattleFortificationInfo_o **p_fortificationInfo; // x20
  System_String_o *itemIcon; // x0
  __int64 v20; // x1
  struct BattleFortificationInfo_o *fortificationInfo; // x8
  System_String_o *GET_POINT_LOCALIZE_KEY; // x21
  System_String_o *v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x22
  __int64 v26; // x1
  UILabel_o *getForitificationPoint; // x21
  System_String_o *v28; // x22
  Il2CppObject *v29; // x0
  Il2CppObject *v30; // x21
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  struct UISprite_o *bg; // x8
  GiftEntity_o *GiftEntity; // x0
  int32_t *v36; // x21
  BattleFortificationInfo_o *v37; // x8
  int v38; // w21
  int32_t totalFortificationPoint; // w22
  int32_t getFortificationPoint; // w23
  struct BattleFortificationInfo_o *v41; // x8
  float v42; // s0
  struct BattleFortificationInfo_o *v43; // x8
  UnityEngine_Color_o v44; // [xsp+0h] [xbp-50h] BYREF
  int32_t FortificationWorkType; // [xsp+18h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B195A1 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, info, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_20507/*"img_common_frame01"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_2979/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v16, v17);
    byte_4B195A1 = 1;
  }
  *(_QWORD *)&v44.fields.r = 0LL;
  *(_QWORD *)&v44.fields.b = 0LL;
  this->fields.fortificationInfo = info;
  p_fortificationInfo = &this->fields.fortificationInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.fortificationInfo,
    (int64_t)info,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  fortificationInfo = this->fields.fortificationInfo;
  if ( !fortificationInfo )
    goto LABEL_43;
  GET_POINT_LOCALIZE_KEY = this->fields.GET_POINT_LOCALIZE_KEY;
  v23 = System_Int32__ToString((int)fortificationInfo + 16, 0LL);
  v25 = System_String__Concat_62401220(GET_POINT_LOCALIZE_KEY, v23, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  if ( !LocalizationManager__ContainsKey(v25, 0LL) )
    v25 = this->fields.GET_POINT_LOCALIZE_KEY;
  getForitificationPoint = this->fields.getForitificationPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  itemIcon = LocalizationManager__Get(v25, 0LL);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v28 = itemIcon;
  v29 = (Il2CppObject *)System_Int32__ToString_63206828(
                          (unsigned int)*p_fortificationInfo + 28,
                          (System_String_o *)StringLiteral_9337/*"N0"*/,
                          0LL);
  itemIcon = System_String__Format(v28, v29, 0LL);
  if ( !getForitificationPoint )
    goto LABEL_43;
  UILabel__set_text(getForitificationPoint, itemIcon, 0LL);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  eventId = (*p_fortificationInfo)->fields.eventId;
  itemIcon = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v30 = (Il2CppObject *)itemIcon;
  FortificationWorkType = BattleFortificationInfo__GetFortificationWorkType(*p_fortificationInfo, 0LL);
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FortificationWorkType);
  v32 = System_String__Format_62415592((System_String_o *)StringLiteral_2979/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v30, v31, 0LL);
  v33 = LocalizationManager__Get(v32, 0LL);
  itemIcon = (System_String_o *)UnityEngine_ColorUtility__TryParseHtmlString(v33, &v44, 0LL);
  bg = this->fields.bg;
  if ( ((unsigned __int8)itemIcon & 1) != 0 )
  {
    if ( !bg )
      goto LABEL_43;
    UIWidget__set_color((UIWidget_o *)this->fields.bg, v44, 0LL);
    itemIcon = (System_String_o *)this->fields.bg;
    if ( !itemIcon )
      goto LABEL_43;
    ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer, float))itemIcon->klass->vtable._8_Equals.method)(
      itemIcon,
      itemIcon->klass->vtable._9_GetTypeCode.methodPtr,
      0.8);
  }
  else
  {
    if ( !bg )
      goto LABEL_43;
    v47.fields.r = 1.0;
    v47.fields.g = 1.0;
    v47.fields.b = 1.0;
    v47.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this->fields.bg, v47, 0LL);
  }
  itemIcon = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  GiftEntity = BattleFortificationInfo__GetGiftEntity((BattleFortificationInfo_o *)itemIcon, 0LL);
  if ( GiftEntity )
  {
    v36 = (int32_t *)GiftEntity;
    itemIcon = (System_String_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_43;
    ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)itemIcon, v36[5], v36[6], v36[7], 0, 0LL);
    itemIcon = (System_String_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_43;
    ItemIconComponent__setFrameSprite(
      (ItemIconComponent_o *)itemIcon,
      v36[5] == 1,
      (System_String_o *)StringLiteral_20507/*"img_common_frame01"*/,
      0LL);
  }
  itemIcon = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  itemIcon = (System_String_o *)BattleFortificationInfo__GetMaxFortificationPoint(
                                  (BattleFortificationInfo_o *)itemIcon,
                                  0LL);
  v37 = *p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v38 = (int)itemIcon;
  itemIcon = (System_String_o *)this->fields.getIcon;
  if ( !itemIcon )
    goto LABEL_43;
  totalFortificationPoint = v37->fields.totalFortificationPoint;
  getFortificationPoint = v37->fields.getFortificationPoint;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)itemIcon,
    totalFortificationPoint < getFortificationPoint,
    0LL);
  itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  itemIcon = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
  if ( !itemIcon )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)itemIcon,
    totalFortificationPoint < getFortificationPoint,
    0LL);
  if ( totalFortificationPoint >= getFortificationPoint )
  {
    itemIcon = (System_String_o *)this->fields.beforeGaugeBar;
    if ( itemIcon )
    {
      UIProgressBar__set_value(
        (UIProgressBar_o *)itemIcon,
        (float)(totalFortificationPoint - getFortificationPoint) / (float)v38,
        0LL);
      v43 = this->fields.fortificationInfo;
      if ( v43 )
      {
        itemIcon = (System_String_o *)this->fields.getGaugeBar;
        if ( itemIcon )
        {
          UIProgressBar__set_value(
            (UIProgressBar_o *)itemIcon,
            (float)v43->fields.totalFortificationPoint / (float)v38,
            0LL);
          itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
          if ( itemIcon )
          {
            v42 = 0.0;
            goto LABEL_42;
          }
        }
      }
    }
LABEL_43:
    sub_1BCAA3C(itemIcon, v20);
  }
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  itemIcon = (System_String_o *)this->fields.beforeGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  UIProgressBar__set_value(
    (UIProgressBar_o *)itemIcon,
    (float)((*p_fortificationInfo)->fields.totalFortificationPoint
          + v38
          - (*p_fortificationInfo)->fields.getFortificationPoint)
  / (float)v38,
    0LL);
  itemIcon = (System_String_o *)this->fields.getGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, 1.0, 0LL);
  v41 = this->fields.fortificationInfo;
  if ( !v41 )
    goto LABEL_43;
  itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  v42 = (float)v41->fields.totalFortificationPoint / (float)v38;
LABEL_42:
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, v42, 0LL);
}