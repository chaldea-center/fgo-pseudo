void __fastcall FortificationGauge___ctor(FortificationGauge_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  System_Int32_array **v10; // x1
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42175EC & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2505/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/, method);
    sub_B0D8A4(&StringLiteral_2506/*"BATTLE_RESULT_FORTIFICATION_MAX"*/, v9);
    byte_42175EC = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_2505/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  this->fields.GET_POINT_LOCALIZE_KEY = (struct System_String_o *)StringLiteral_2505/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.GET_POINT_LOCALIZE_KEY, v10, v2, v3, v4, v5, v6, v7);
  v11 = (System_Int32_array **)StringLiteral_2506/*"BATTLE_RESULT_FORTIFICATION_MAX"*/;
  this->fields.MAX_LOCALIZE_KEY = (struct System_String_o *)StringLiteral_2506/*"BATTLE_RESULT_FORTIFICATION_MAX"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.MAX_LOCALIZE_KEY, v11, v12, v13, v14, v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortificationGauge__SetData(
        FortificationGauge_o *this,
        BattleFortificationInfo_o *info,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BattleFortificationInfo_o **p_fortificationInfo; // x20
  System_String_o *itemIcon; // x0
  struct BattleFortificationInfo_o *fortificationInfo; // x8
  System_String_o *GET_POINT_LOCALIZE_KEY; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x22
  UILabel_o *getForitificationPoint; // x21
  System_String_o *v21; // x22
  Il2CppObject *v22; // x0
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  UIWidget_o *bg; // x21
  int v28; // s0
  GiftEntity_o *GiftEntity; // x0
  int32_t *v33; // x21
  BattleFortificationInfo_o *v34; // x8
  int v35; // w21
  int32_t totalFortificationPoint; // w22
  int32_t getFortificationPoint; // w23
  struct BattleFortificationInfo_o *v38; // x8
  float v39; // s0
  struct BattleFortificationInfo_o *v40; // x8
  int32_t FortificationWorkType; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_42175EB & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, info);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_19531/*"img_common_frame01"*/, v11);
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, v12);
    sub_B0D8A4(&StringLiteral_2504/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v13);
    byte_42175EB = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  this->fields.fortificationInfo = info;
  p_fortificationInfo = &this->fields.fortificationInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fortificationInfo,
    (System_Int32_array **)info,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  fortificationInfo = this->fields.fortificationInfo;
  if ( !fortificationInfo )
    goto LABEL_45;
  GET_POINT_LOCALIZE_KEY = this->fields.GET_POINT_LOCALIZE_KEY;
  v18 = System_Int32__ToString((int)fortificationInfo + 16, 0LL);
  v19 = System_String__Concat_43849904(GET_POINT_LOCALIZE_KEY, v18, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey(v19, 0LL) )
    v19 = this->fields.GET_POINT_LOCALIZE_KEY;
  getForitificationPoint = this->fields.getForitificationPoint;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  itemIcon = LocalizationManager__Get(v19, 0LL);
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  v21 = itemIcon;
  v22 = (Il2CppObject *)System_Int32__ToString_38473032(
                          (unsigned int)*p_fortificationInfo + 28,
                          (System_String_o *)StringLiteral_9289/*"N0"*/,
                          0LL);
  itemIcon = System_String__Format(v21, v22, 0LL);
  if ( !getForitificationPoint )
    goto LABEL_45;
  UILabel__set_text(getForitificationPoint, itemIcon, 0LL);
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  eventId = (*p_fortificationInfo)->fields.eventId;
  itemIcon = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  v23 = (Il2CppObject *)itemIcon;
  FortificationWorkType = BattleFortificationInfo__GetFortificationWorkType(*p_fortificationInfo, 0LL);
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FortificationWorkType);
  v25 = System_String__Format_43845440((System_String_o *)StringLiteral_2504/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v23, v24, 0LL);
  v26 = LocalizationManager__Get(v25, 0LL);
  itemIcon = (System_String_o *)UnityEngine_ColorUtility__TryParseHtmlString(v26, &color, 0LL);
  bg = (UIWidget_o *)this->fields.bg;
  if ( ((unsigned __int8)itemIcon & 1) != 0 )
  {
    if ( !bg )
      goto LABEL_45;
    UIWidget__set_color((UIWidget_o *)this->fields.bg, color, 0LL);
    itemIcon = (System_String_o *)this->fields.bg;
    if ( !itemIcon )
      goto LABEL_45;
    ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer, float))itemIcon->klass->vtable._8_System_IConvertible_ToChar.method)(
      itemIcon,
      itemIcon->klass->vtable._9_System_IConvertible_ToSByte.methodPtr,
      0.8);
  }
  else
  {
    *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_white(0LL);
    if ( !bg )
      goto LABEL_45;
    UIWidget__set_color(bg, *(UnityEngine_Color_o *)&v28, 0LL);
  }
  itemIcon = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  GiftEntity = BattleFortificationInfo__GetGiftEntity((BattleFortificationInfo_o *)itemIcon, 0LL);
  if ( GiftEntity )
  {
    v33 = (int32_t *)GiftEntity;
    itemIcon = (System_String_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_45;
    ItemIconComponent__SetGift((ItemIconComponent_o *)itemIcon, v33[5], v33[6], v33[7], 0, 0LL);
    itemIcon = (System_String_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_45;
    ItemIconComponent__setFrameSprite(
      (ItemIconComponent_o *)itemIcon,
      v33[5] == 1,
      (System_String_o *)StringLiteral_19531/*"img_common_frame01"*/,
      0LL);
  }
  itemIcon = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  itemIcon = (System_String_o *)BattleFortificationInfo__GetMaxFortificationPoint(
                                  (BattleFortificationInfo_o *)itemIcon,
                                  0LL);
  v34 = *p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  v35 = (int)itemIcon;
  itemIcon = (System_String_o *)this->fields.getIcon;
  if ( !itemIcon )
    goto LABEL_45;
  totalFortificationPoint = v34->fields.totalFortificationPoint;
  getFortificationPoint = v34->fields.getFortificationPoint;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)itemIcon,
    totalFortificationPoint < getFortificationPoint,
    0LL);
  itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
  if ( !itemIcon )
    goto LABEL_45;
  itemIcon = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
  if ( !itemIcon )
    goto LABEL_45;
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
        (float)(totalFortificationPoint - getFortificationPoint) / (float)v35,
        0LL);
      v40 = this->fields.fortificationInfo;
      if ( v40 )
      {
        itemIcon = (System_String_o *)this->fields.getGaugeBar;
        if ( itemIcon )
        {
          UIProgressBar__set_value(
            (UIProgressBar_o *)itemIcon,
            (float)v40->fields.totalFortificationPoint / (float)v35,
            0LL);
          itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
          if ( itemIcon )
          {
            v39 = 0.0;
            goto LABEL_44;
          }
        }
      }
    }
LABEL_45:
    sub_B0D97C(itemIcon);
  }
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  itemIcon = (System_String_o *)this->fields.beforeGaugeBar;
  if ( !itemIcon )
    goto LABEL_45;
  UIProgressBar__set_value(
    (UIProgressBar_o *)itemIcon,
    (float)((*p_fortificationInfo)->fields.totalFortificationPoint
          + v35
          - (*p_fortificationInfo)->fields.getFortificationPoint)
  / (float)v35,
    0LL);
  itemIcon = (System_String_o *)this->fields.getGaugeBar;
  if ( !itemIcon )
    goto LABEL_45;
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, 1.0, 0LL);
  v38 = this->fields.fortificationInfo;
  if ( !v38 )
    goto LABEL_45;
  itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
  if ( !itemIcon )
    goto LABEL_45;
  v39 = (float)v38->fields.totalFortificationPoint / (float)v35;
LABEL_44:
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, v39, 0LL);
}