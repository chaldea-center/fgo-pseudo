void FortificationGauge___ctor(FortificationGauge_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D344C5 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_2852/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/);
    byte_4D344C5 = 1;
  }
  v9 = StringLiteral_2852/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  this->fields.GET_POINT_LOCALIZE_KEY = (struct System_String_o *)StringLiteral_2852/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.GET_POINT_LOCALIZE_KEY, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FortificationGauge__SetData(FortificationGauge_o *this, BattleFortificationInfo_o *info, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleFortificationInfo_o **p_fortificationInfo; // x20
  System_String_o *itemIcon; // x0
  __int64 v12; // x1
  struct BattleFortificationInfo_o *fortificationInfo; // x8
  System_String_o *GET_POINT_LOCALIZE_KEY; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x22
  UILabel_o *getForitificationPoint; // x21
  System_String_o *v18; // x22
  Il2CppObject *v19; // x0
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  struct UISprite_o *bg; // x8
  GiftEntity_o *GiftEntity; // x0
  int32_t *v26; // x21
  BattleFortificationInfo_o *v27; // x8
  int v28; // w21
  int32_t totalFortificationPoint; // w22
  int32_t getFortificationPoint; // w23
  struct BattleFortificationInfo_o *v31; // x8
  float v32; // s0
  struct BattleFortificationInfo_o *v33; // x8
  UnityEngine_Color_o v34; // [xsp+0h] [xbp-50h] BYREF
  int32_t FortificationWorkType; // [xsp+18h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D344C4 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_20591/*"img_common_frame01"*/);
    sub_1C93AD4(&StringLiteral_9286/*"N0"*/);
    sub_1C93AD4(&StringLiteral_2851/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/);
    byte_4D344C4 = 1;
  }
  *(_QWORD *)&v34.fields.r = 0;
  *(_QWORD *)&v34.fields.b = 0;
  this->fields.fortificationInfo = info;
  p_fortificationInfo = &this->fields.fortificationInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.fortificationInfo,
    (int32_t)info,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  fortificationInfo = this->fields.fortificationInfo;
  if ( !fortificationInfo )
    goto LABEL_43;
  GET_POINT_LOCALIZE_KEY = this->fields.GET_POINT_LOCALIZE_KEY;
  v15 = System_Int32__ToString((int)fortificationInfo + 16, 0);
  v16 = System_String__Concat_64425724(GET_POINT_LOCALIZE_KEY, v15, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v16, 0) )
    v16 = this->fields.GET_POINT_LOCALIZE_KEY;
  getForitificationPoint = this->fields.getForitificationPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  itemIcon = LocalizationManager__Get(v16, 0);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v18 = itemIcon;
  v19 = (Il2CppObject *)System_Int32__ToString_65934220(
                          (unsigned int)*p_fortificationInfo + 28,
                          (System_String_o *)StringLiteral_9286/*"N0"*/,
                          0);
  itemIcon = System_String__Format(v18, v19, 0);
  if ( !getForitificationPoint )
    goto LABEL_43;
  UILabel__set_text(getForitificationPoint, itemIcon, 0);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  eventId = (*p_fortificationInfo)->fields.eventId;
  itemIcon = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v20 = (Il2CppObject *)itemIcon;
  FortificationWorkType = BattleFortificationInfo__GetFortificationWorkType(*p_fortificationInfo, 0);
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FortificationWorkType);
  v22 = System_String__Format_64467032((System_String_o *)StringLiteral_2851/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v20, v21, 0);
  v23 = LocalizationManager__Get(v22, 0);
  itemIcon = (System_String_o *)UnityEngine_ColorUtility__TryParseHtmlString(v23, &v34, 0);
  bg = this->fields.bg;
  if ( ((unsigned __int8)itemIcon & 1) != 0 )
  {
    if ( !bg )
      goto LABEL_43;
    UIWidget__set_color((UIWidget_o *)this->fields.bg, v34, 0);
    itemIcon = (System_String_o *)this->fields.bg;
    if ( !itemIcon )
      goto LABEL_43;
    ((void (__fastcall *)(System_String_o *, const MethodInfo *, float))itemIcon->klass->vtable._8_Equals.methodPtr)(
      itemIcon,
      itemIcon->klass->vtable._8_Equals.method,
      0.8);
  }
  else
  {
    if ( !bg )
      goto LABEL_43;
    v37.fields.r = 1.0;
    v37.fields.g = 1.0;
    v37.fields.b = 1.0;
    v37.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this->fields.bg, v37, 0);
  }
  itemIcon = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  GiftEntity = BattleFortificationInfo__GetGiftEntity((BattleFortificationInfo_o *)itemIcon, 0);
  if ( GiftEntity )
  {
    v26 = (int32_t *)GiftEntity;
    itemIcon = (System_String_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_43;
    ItemIconComponent__SetGift_41640856((ItemIconComponent_o *)itemIcon, v26[5], v26[6], v26[7], 0, 0);
    itemIcon = (System_String_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_43;
    ItemIconComponent__setFrameSprite(
      (ItemIconComponent_o *)itemIcon,
      v26[5] == 1,
      (System_String_o *)StringLiteral_20591/*"img_common_frame01"*/,
      0);
  }
  itemIcon = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  itemIcon = (System_String_o *)BattleFortificationInfo__GetMaxFortificationPoint(
                                  (BattleFortificationInfo_o *)itemIcon,
                                  0);
  v27 = *p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v28 = (int)itemIcon;
  itemIcon = (System_String_o *)this->fields.getIcon;
  if ( !itemIcon )
    goto LABEL_43;
  totalFortificationPoint = v27->fields.totalFortificationPoint;
  getFortificationPoint = v27->fields.getFortificationPoint;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)itemIcon,
    totalFortificationPoint < getFortificationPoint,
    0);
  itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  itemIcon = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0);
  if ( !itemIcon )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)itemIcon,
    totalFortificationPoint < getFortificationPoint,
    0);
  if ( totalFortificationPoint >= getFortificationPoint )
  {
    itemIcon = (System_String_o *)this->fields.beforeGaugeBar;
    if ( itemIcon )
    {
      UIProgressBar__set_value(
        (UIProgressBar_o *)itemIcon,
        (float)(totalFortificationPoint - getFortificationPoint) / (float)v28,
        0);
      v33 = this->fields.fortificationInfo;
      if ( v33 )
      {
        itemIcon = (System_String_o *)this->fields.getGaugeBar;
        if ( itemIcon )
        {
          UIProgressBar__set_value(
            (UIProgressBar_o *)itemIcon,
            (float)v33->fields.totalFortificationPoint / (float)v28,
            0);
          itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
          if ( itemIcon )
          {
            v32 = 0.0;
            goto LABEL_42;
          }
        }
      }
    }
LABEL_43:
    sub_1C93D2C(itemIcon, v12);
  }
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  itemIcon = (System_String_o *)this->fields.beforeGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  UIProgressBar__set_value(
    (UIProgressBar_o *)itemIcon,
    (float)((*p_fortificationInfo)->fields.totalFortificationPoint
          + v28
          - (*p_fortificationInfo)->fields.getFortificationPoint)
  / (float)v28,
    0);
  itemIcon = (System_String_o *)this->fields.getGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, 1.0, 0);
  v31 = this->fields.fortificationInfo;
  if ( !v31 )
    goto LABEL_43;
  itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  v32 = (float)v31->fields.totalFortificationPoint / (float)v28;
LABEL_42:
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, v32, 0);
}