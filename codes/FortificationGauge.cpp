void FortificationGauge___ctor(FortificationGauge_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C468A4 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_2843/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/);
    byte_4C468A4 = 1;
  }
  v5 = StringLiteral_2843/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  this->fields.GET_POINT_LOCALIZE_KEY = (struct System_String_o *)StringLiteral_2843/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.GET_POINT_LOCALIZE_KEY, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FortificationGauge__SetData(FortificationGauge_o *this, BattleFortificationInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleFortificationInfo_o **p_fortificationInfo; // x20
  __int64 itemIcon; // x0
  struct BattleFortificationInfo_o *fortificationInfo; // x8
  System_String_o *GET_POINT_LOCALIZE_KEY; // x21
  System_String_o *v10; // x0
  System_String_o *v11; // x22
  UILabel_o *getForitificationPoint; // x21
  System_String_o *v13; // x22
  Il2CppObject *v14; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  Il2CppObject *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  struct UISprite_o *bg; // x8
  GiftEntity_o *GiftEntity; // x0
  int32_t *v33; // x21
  BattleFortificationInfo_o *v34; // x8
  int v35; // w21
  int32_t totalFortificationPoint; // w22
  int32_t getFortificationPoint; // w23
  struct BattleFortificationInfo_o *v38; // x8
  float v39; // s0
  struct BattleFortificationInfo_o *v40; // x8
  UnityEngine_Color_o v41; // [xsp+0h] [xbp-50h] BYREF
  int32_t FortificationWorkType; // [xsp+18h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C468A3 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_20364/*"img_common_frame01"*/);
    sub_1C37058(&StringLiteral_9232/*"N0"*/);
    sub_1C37058(&StringLiteral_2842/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/);
    byte_4C468A3 = 1;
  }
  *(_QWORD *)&v41.fields.r = 0;
  *(_QWORD *)&v41.fields.b = 0;
  this->fields.fortificationInfo = info;
  p_fortificationInfo = &this->fields.fortificationInfo;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.fortificationInfo, (int32_t)info, (int32_t)method, v3);
  fortificationInfo = this->fields.fortificationInfo;
  if ( !fortificationInfo )
    goto LABEL_43;
  GET_POINT_LOCALIZE_KEY = this->fields.GET_POINT_LOCALIZE_KEY;
  v10 = System_Int32__ToString((int)fortificationInfo + 16, 0);
  v11 = System_String__Concat_63561656(GET_POINT_LOCALIZE_KEY, v10, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v11, 0) )
    v11 = this->fields.GET_POINT_LOCALIZE_KEY;
  getForitificationPoint = this->fields.getForitificationPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  itemIcon = (__int64)LocalizationManager__Get(v11, 0);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v13 = (System_String_o *)itemIcon;
  v14 = (Il2CppObject *)System_Int32__ToString_65071764(
                          (unsigned int)*p_fortificationInfo + 28,
                          (System_String_o *)StringLiteral_9232/*"N0"*/,
                          0);
  itemIcon = (__int64)System_String__Format(v13, v14, 0);
  if ( !getForitificationPoint )
    goto LABEL_43;
  UILabel__set_text(getForitificationPoint, (System_String_o *)itemIcon, 0);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  eventId = (*p_fortificationInfo)->fields.eventId;
  itemIcon = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v15, v16, v17, v18, v19, v20);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v21 = (Il2CppObject *)itemIcon;
  FortificationWorkType = BattleFortificationInfo__GetFortificationWorkType(*p_fortificationInfo, 0);
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FortificationWorkType, v22, v23, v24, v25, v26, v27);
  v29 = System_String__Format_63602948((System_String_o *)StringLiteral_2842/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v21, v28, 0);
  v30 = LocalizationManager__Get(v29, 0);
  itemIcon = UnityEngine_ColorUtility__TryParseHtmlString(v30, &v41, 0);
  bg = this->fields.bg;
  if ( (itemIcon & 1) != 0 )
  {
    if ( !bg )
      goto LABEL_43;
    UIWidget__set_color((UIWidget_o *)this->fields.bg, v41, 0);
    itemIcon = (__int64)this->fields.bg;
    if ( !itemIcon )
      goto LABEL_43;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)itemIcon + 440LL))(
      itemIcon,
      *(_QWORD *)(*(_QWORD *)itemIcon + 448LL),
      0.8);
  }
  else
  {
    if ( !bg )
      goto LABEL_43;
    v44.fields.r = 1.0;
    v44.fields.g = 1.0;
    v44.fields.b = 1.0;
    v44.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this->fields.bg, v44, 0);
  }
  itemIcon = (__int64)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  GiftEntity = BattleFortificationInfo__GetGiftEntity((BattleFortificationInfo_o *)itemIcon, 0);
  if ( GiftEntity )
  {
    v33 = (int32_t *)GiftEntity;
    itemIcon = (__int64)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_43;
    ItemIconComponent__SetGift_40921900((ItemIconComponent_o *)itemIcon, v33[5], v33[6], v33[7], 0, 0);
    itemIcon = (__int64)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_43;
    ItemIconComponent__setFrameSprite(
      (ItemIconComponent_o *)itemIcon,
      v33[5] == 1,
      (System_String_o *)StringLiteral_20364/*"img_common_frame01"*/,
      0);
  }
  itemIcon = (__int64)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  itemIcon = BattleFortificationInfo__GetMaxFortificationPoint((BattleFortificationInfo_o *)itemIcon, 0);
  v34 = *p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v35 = itemIcon;
  itemIcon = (__int64)this->fields.getIcon;
  if ( !itemIcon )
    goto LABEL_43;
  totalFortificationPoint = v34->fields.totalFortificationPoint;
  getFortificationPoint = v34->fields.getFortificationPoint;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)itemIcon,
    totalFortificationPoint < getFortificationPoint,
    0);
  itemIcon = (__int64)this->fields.surplusGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  itemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0);
  if ( !itemIcon )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)itemIcon,
    totalFortificationPoint < getFortificationPoint,
    0);
  if ( totalFortificationPoint >= getFortificationPoint )
  {
    itemIcon = (__int64)this->fields.beforeGaugeBar;
    if ( itemIcon )
    {
      UIProgressBar__set_value(
        (UIProgressBar_o *)itemIcon,
        (float)(totalFortificationPoint - getFortificationPoint) / (float)v35,
        0);
      v40 = this->fields.fortificationInfo;
      if ( v40 )
      {
        itemIcon = (__int64)this->fields.getGaugeBar;
        if ( itemIcon )
        {
          UIProgressBar__set_value(
            (UIProgressBar_o *)itemIcon,
            (float)v40->fields.totalFortificationPoint / (float)v35,
            0);
          itemIcon = (__int64)this->fields.surplusGaugeBar;
          if ( itemIcon )
          {
            v39 = 0.0;
            goto LABEL_42;
          }
        }
      }
    }
LABEL_43:
    sub_1C372B4(itemIcon);
  }
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  itemIcon = (__int64)this->fields.beforeGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  UIProgressBar__set_value(
    (UIProgressBar_o *)itemIcon,
    (float)((*p_fortificationInfo)->fields.totalFortificationPoint
          + v35
          - (*p_fortificationInfo)->fields.getFortificationPoint)
  / (float)v35,
    0);
  itemIcon = (__int64)this->fields.getGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, 1.0, 0);
  v38 = this->fields.fortificationInfo;
  if ( !v38 )
    goto LABEL_43;
  itemIcon = (__int64)this->fields.surplusGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  v39 = (float)v38->fields.totalFortificationPoint / (float)v35;
LABEL_42:
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, v39, 0);
}