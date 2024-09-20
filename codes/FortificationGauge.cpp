void __fastcall FortificationGauge___ctor(FortificationGauge_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A5E474 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_2959/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/);
    byte_4A5E474 = 1;
  }
  v5 = StringLiteral_2959/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  this->fields.GET_POINT_LOCALIZE_KEY = (struct System_String_o *)StringLiteral_2959/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.GET_POINT_LOCALIZE_KEY, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FortificationGauge__SetData(
        FortificationGauge_o *this,
        BattleFortificationInfo_o *info,
        const MethodInfo *method)
{
  int32_t v3; // w3
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
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  struct UISprite_o *bg; // x8
  GiftEntity_o *GiftEntity; // x0
  int32_t *v28; // x21
  BattleFortificationInfo_o *v29; // x8
  int v30; // w21
  int32_t totalFortificationPoint; // w22
  int32_t getFortificationPoint; // w23
  struct BattleFortificationInfo_o *v33; // x8
  float v34; // s0
  struct BattleFortificationInfo_o *v35; // x8
  UnityEngine_Color_o v36; // [xsp+0h] [xbp-50h] BYREF
  int32_t FortificationWorkType; // [xsp+18h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E473 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_20291/*"img_common_frame01"*/);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    sub_1B885B0(&StringLiteral_2958/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/);
    byte_4A5E473 = 1;
  }
  *(_QWORD *)&v36.fields.r = 0LL;
  *(_QWORD *)&v36.fields.b = 0LL;
  this->fields.fortificationInfo = info;
  p_fortificationInfo = &this->fields.fortificationInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fortificationInfo, (int32_t)info, (int32_t)method, v3);
  fortificationInfo = this->fields.fortificationInfo;
  if ( !fortificationInfo )
    goto LABEL_43;
  GET_POINT_LOCALIZE_KEY = this->fields.GET_POINT_LOCALIZE_KEY;
  v11 = System_Int32__ToString((int)fortificationInfo + 16, 0LL);
  v12 = System_String__Concat_61707032(GET_POINT_LOCALIZE_KEY, v11, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v12, 0LL) )
    v12 = this->fields.GET_POINT_LOCALIZE_KEY;
  getForitificationPoint = this->fields.getForitificationPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  itemIcon = LocalizationManager__Get(v12, 0LL);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v14 = itemIcon;
  v15 = (Il2CppObject *)System_Int32__ToString_62512312(
                          (unsigned int)*p_fortificationInfo + 28,
                          (System_String_o *)StringLiteral_9206/*"N0"*/,
                          0LL);
  itemIcon = System_String__Format(v14, v15, 0LL);
  if ( !getForitificationPoint )
    goto LABEL_43;
  UILabel__set_text(getForitificationPoint, itemIcon, 0LL);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  eventId = (*p_fortificationInfo)->fields.eventId;
  itemIcon = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v16, v17, v18);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v19 = (Il2CppObject *)itemIcon;
  FortificationWorkType = BattleFortificationInfo__GetFortificationWorkType(*p_fortificationInfo, 0LL);
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FortificationWorkType, v20, v21, v22);
  v24 = System_String__Format_61721404((System_String_o *)StringLiteral_2958/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v19, v23, 0LL);
  v25 = LocalizationManager__Get(v24, 0LL);
  itemIcon = (System_String_o *)UnityEngine_ColorUtility__TryParseHtmlString(v25, &v36, 0LL);
  bg = this->fields.bg;
  if ( ((unsigned __int8)itemIcon & 1) != 0 )
  {
    if ( !bg )
      goto LABEL_43;
    UIWidget__set_color((UIWidget_o *)this->fields.bg, v36, 0LL);
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
    v39.fields.r = 1.0;
    v39.fields.g = 1.0;
    v39.fields.b = 1.0;
    v39.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this->fields.bg, v39, 0LL);
  }
  itemIcon = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  GiftEntity = BattleFortificationInfo__GetGiftEntity((BattleFortificationInfo_o *)itemIcon, 0LL);
  if ( GiftEntity )
  {
    v28 = (int32_t *)GiftEntity;
    itemIcon = (System_String_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_43;
    ItemIconComponent__SetGift_38144896((ItemIconComponent_o *)itemIcon, v28[5], v28[6], v28[7], 0, 0LL);
    itemIcon = (System_String_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_43;
    ItemIconComponent__setFrameSprite(
      (ItemIconComponent_o *)itemIcon,
      v28[5] == 1,
      (System_String_o *)StringLiteral_20291/*"img_common_frame01"*/,
      0LL);
  }
  itemIcon = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  itemIcon = (System_String_o *)BattleFortificationInfo__GetMaxFortificationPoint(
                                  (BattleFortificationInfo_o *)itemIcon,
                                  0LL);
  v29 = *p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v30 = (int)itemIcon;
  itemIcon = (System_String_o *)this->fields.getIcon;
  if ( !itemIcon )
    goto LABEL_43;
  totalFortificationPoint = v29->fields.totalFortificationPoint;
  getFortificationPoint = v29->fields.getFortificationPoint;
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
        (float)(totalFortificationPoint - getFortificationPoint) / (float)v30,
        0LL);
      v35 = this->fields.fortificationInfo;
      if ( v35 )
      {
        itemIcon = (System_String_o *)this->fields.getGaugeBar;
        if ( itemIcon )
        {
          UIProgressBar__set_value(
            (UIProgressBar_o *)itemIcon,
            (float)v35->fields.totalFortificationPoint / (float)v30,
            0LL);
          itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
          if ( itemIcon )
          {
            v34 = 0.0;
            goto LABEL_42;
          }
        }
      }
    }
LABEL_43:
    sub_1B8880C(itemIcon, v8);
  }
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  itemIcon = (System_String_o *)this->fields.beforeGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  UIProgressBar__set_value(
    (UIProgressBar_o *)itemIcon,
    (float)((*p_fortificationInfo)->fields.totalFortificationPoint
          + v30
          - (*p_fortificationInfo)->fields.getFortificationPoint)
  / (float)v30,
    0LL);
  itemIcon = (System_String_o *)this->fields.getGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, 1.0, 0LL);
  v33 = this->fields.fortificationInfo;
  if ( !v33 )
    goto LABEL_43;
  itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  v34 = (float)v33->fields.totalFortificationPoint / (float)v30;
LABEL_42:
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, v34, 0LL);
}