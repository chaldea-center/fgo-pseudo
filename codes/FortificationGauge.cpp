void FortificationGauge___ctor(FortificationGauge_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4CB9C6C & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_2835/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/);
    byte_4CB9C6C = 1;
  }
  v5 = StringLiteral_2835/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  this->fields.GET_POINT_LOCALIZE_KEY = (struct System_String_o *)StringLiteral_2835/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.GET_POINT_LOCALIZE_KEY, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FortificationGauge__SetData(FortificationGauge_o *this, BattleFortificationInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleFortificationInfo_o **p_fortificationInfo; // x20
  System_String_o *itemIcon; // x0
  __int64 v8; // x1
  struct BattleFortificationInfo_o *fortificationInfo; // x8
  System_String_o *GET_POINT_LOCALIZE_KEY; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x22
  UILabel_o *getForitificationPoint; // x21
  System_String_o *v14; // x22
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  struct UISprite_o *bg; // x8
  GiftEntity_o *GiftEntity; // x0
  int32_t *v22; // x21
  BattleFortificationInfo_o *v23; // x8
  int v24; // w21
  int32_t totalFortificationPoint; // w22
  int32_t getFortificationPoint; // w23
  struct BattleFortificationInfo_o *v27; // x8
  float v28; // s0
  struct BattleFortificationInfo_o *v29; // x8
  UnityEngine_Color_o v30; // [xsp+0h] [xbp-50h] BYREF
  int32_t FortificationWorkType; // [xsp+18h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB9C6B & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_20429/*"img_common_frame01"*/);
    sub_1C6BA08(&StringLiteral_9229/*"N0"*/);
    sub_1C6BA08(&StringLiteral_2834/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/);
    byte_4CB9C6B = 1;
  }
  *(_QWORD *)&v30.fields.r = 0;
  *(_QWORD *)&v30.fields.b = 0;
  this->fields.fortificationInfo = info;
  p_fortificationInfo = &this->fields.fortificationInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.fortificationInfo, (int32_t)info, (int32_t)method, v3);
  fortificationInfo = this->fields.fortificationInfo;
  if ( !fortificationInfo )
    goto LABEL_43;
  GET_POINT_LOCALIZE_KEY = this->fields.GET_POINT_LOCALIZE_KEY;
  v11 = System_Int32__ToString((int)fortificationInfo + 16, 0);
  v12 = System_String__Concat_63966792(GET_POINT_LOCALIZE_KEY, v11, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v12, 0) )
    v12 = this->fields.GET_POINT_LOCALIZE_KEY;
  getForitificationPoint = this->fields.getForitificationPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  itemIcon = LocalizationManager__Get(v12, 0);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v14 = itemIcon;
  v15 = (Il2CppObject *)System_Int32__ToString_65475288(
                          (unsigned int)*p_fortificationInfo + 28,
                          (System_String_o *)StringLiteral_9229/*"N0"*/,
                          0);
  itemIcon = System_String__Format(v14, v15, 0);
  if ( !getForitificationPoint )
    goto LABEL_43;
  UILabel__set_text(getForitificationPoint, itemIcon, 0);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  eventId = (*p_fortificationInfo)->fields.eventId;
  itemIcon = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v16 = (Il2CppObject *)itemIcon;
  FortificationWorkType = BattleFortificationInfo__GetFortificationWorkType(*p_fortificationInfo, 0);
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FortificationWorkType);
  v18 = System_String__Format_64008100((System_String_o *)StringLiteral_2834/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v16, v17, 0);
  v19 = LocalizationManager__Get(v18, 0);
  itemIcon = (System_String_o *)UnityEngine_ColorUtility__TryParseHtmlString(v19, &v30, 0);
  bg = this->fields.bg;
  if ( ((unsigned __int8)itemIcon & 1) != 0 )
  {
    if ( !bg )
      goto LABEL_43;
    UIWidget__set_color((UIWidget_o *)this->fields.bg, v30, 0);
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
    v33.fields.r = 1.0;
    v33.fields.g = 1.0;
    v33.fields.b = 1.0;
    v33.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this->fields.bg, v33, 0);
  }
  itemIcon = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  GiftEntity = BattleFortificationInfo__GetGiftEntity((BattleFortificationInfo_o *)itemIcon, 0);
  if ( GiftEntity )
  {
    v22 = (int32_t *)GiftEntity;
    itemIcon = (System_String_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_43;
    ItemIconComponent__SetGift_41153640((ItemIconComponent_o *)itemIcon, v22[5], v22[6], v22[7], 0, 0);
    itemIcon = (System_String_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_43;
    ItemIconComponent__setFrameSprite(
      (ItemIconComponent_o *)itemIcon,
      v22[5] == 1,
      (System_String_o *)StringLiteral_20429/*"img_common_frame01"*/,
      0);
  }
  itemIcon = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  itemIcon = (System_String_o *)BattleFortificationInfo__GetMaxFortificationPoint(
                                  (BattleFortificationInfo_o *)itemIcon,
                                  0);
  v23 = *p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v24 = (int)itemIcon;
  itemIcon = (System_String_o *)this->fields.getIcon;
  if ( !itemIcon )
    goto LABEL_43;
  totalFortificationPoint = v23->fields.totalFortificationPoint;
  getFortificationPoint = v23->fields.getFortificationPoint;
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
        (float)(totalFortificationPoint - getFortificationPoint) / (float)v24,
        0);
      v29 = this->fields.fortificationInfo;
      if ( v29 )
      {
        itemIcon = (System_String_o *)this->fields.getGaugeBar;
        if ( itemIcon )
        {
          UIProgressBar__set_value(
            (UIProgressBar_o *)itemIcon,
            (float)v29->fields.totalFortificationPoint / (float)v24,
            0);
          itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
          if ( itemIcon )
          {
            v28 = 0.0;
            goto LABEL_42;
          }
        }
      }
    }
LABEL_43:
    sub_1C6BC60(itemIcon, v8);
  }
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  itemIcon = (System_String_o *)this->fields.beforeGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  UIProgressBar__set_value(
    (UIProgressBar_o *)itemIcon,
    (float)((*p_fortificationInfo)->fields.totalFortificationPoint
          + v24
          - (*p_fortificationInfo)->fields.getFortificationPoint)
  / (float)v24,
    0);
  itemIcon = (System_String_o *)this->fields.getGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, 1.0, 0);
  v27 = this->fields.fortificationInfo;
  if ( !v27 )
    goto LABEL_43;
  itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  v28 = (float)v27->fields.totalFortificationPoint / (float)v24;
LABEL_42:
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, v28, 0);
}