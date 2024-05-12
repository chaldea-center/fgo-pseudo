void __fastcall FortificationGauge___ctor(FortificationGauge_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438EA60 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_2600/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/);
    sub_B775C4(&StringLiteral_2601/*"BATTLE_RESULT_FORTIFICATION_MAX"*/);
    byte_438EA60 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_2600/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  this->fields.GET_POINT_LOCALIZE_KEY = (struct System_String_o *)StringLiteral_2600/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.GET_POINT_LOCALIZE_KEY, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_2601/*"BATTLE_RESULT_FORTIFICATION_MAX"*/;
  this->fields.MAX_LOCALIZE_KEY = (struct System_String_o *)StringLiteral_2601/*"BATTLE_RESULT_FORTIFICATION_MAX"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.MAX_LOCALIZE_KEY, v10, v11, v12, v13, v14, v15, v16);
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
  __int64 v20; // x2
  Il2CppObject *v21; // x21
  __int64 v22; // x2
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  UIWidget_o *bg; // x21
  int v27; // s0
  GiftEntity_o *GiftEntity; // x0
  int32_t *v32; // x21
  BattleFortificationInfo_o *v33; // x8
  int v34; // w21
  int32_t totalFortificationPoint; // w22
  int32_t getFortificationPoint; // w23
  struct BattleFortificationInfo_o *v37; // x8
  float v38; // s0
  struct BattleFortificationInfo_o *v39; // x8
  int32_t FortificationWorkType; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_438EA5F & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_19863/*"img_common_frame01"*/);
    sub_B775C4(&StringLiteral_9434/*"N0"*/);
    sub_B775C4(&StringLiteral_2599/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/);
    byte_438EA5F = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  this->fields.fortificationInfo = info;
  p_fortificationInfo = &this->fields.fortificationInfo;
  sub_B77560(
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
  v15 = System_Int32__ToString((int)fortificationInfo + 16, 0LL);
  v16 = System_String__Concat_44901936(GET_POINT_LOCALIZE_KEY, v15, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey(v16, 0LL) )
    v16 = this->fields.GET_POINT_LOCALIZE_KEY;
  getForitificationPoint = this->fields.getForitificationPoint;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  itemIcon = LocalizationManager__Get(v16, 0LL);
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  v18 = itemIcon;
  v19 = (Il2CppObject *)System_Int32__ToString_39547236(
                          (unsigned int)*p_fortificationInfo + 28,
                          (System_String_o *)StringLiteral_9434/*"N0"*/,
                          0LL);
  itemIcon = System_String__Format(v18, v19, 0LL);
  if ( !getForitificationPoint )
    goto LABEL_45;
  UILabel__set_text(getForitificationPoint, itemIcon, 0LL);
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  eventId = (*p_fortificationInfo)->fields.eventId;
  itemIcon = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v20);
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  v21 = (Il2CppObject *)itemIcon;
  FortificationWorkType = BattleFortificationInfo__GetFortificationWorkType(*p_fortificationInfo, 0LL);
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FortificationWorkType, v22);
  v24 = System_String__Format_44897472((System_String_o *)StringLiteral_2599/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v21, v23, 0LL);
  v25 = LocalizationManager__Get(v24, 0LL);
  itemIcon = (System_String_o *)UnityEngine_ColorUtility__TryParseHtmlString(v25, &color, 0LL);
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
    *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_white(0LL);
    if ( !bg )
      goto LABEL_45;
    UIWidget__set_color(bg, *(UnityEngine_Color_o *)&v27, 0LL);
  }
  itemIcon = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  GiftEntity = BattleFortificationInfo__GetGiftEntity((BattleFortificationInfo_o *)itemIcon, 0LL);
  if ( GiftEntity )
  {
    v32 = (int32_t *)GiftEntity;
    itemIcon = (System_String_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_45;
    ItemIconComponent__SetGift((ItemIconComponent_o *)itemIcon, v32[5], v32[6], v32[7], 0, 0LL);
    itemIcon = (System_String_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_45;
    ItemIconComponent__setFrameSprite(
      (ItemIconComponent_o *)itemIcon,
      v32[5] == 1,
      (System_String_o *)StringLiteral_19863/*"img_common_frame01"*/,
      0LL);
  }
  itemIcon = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  itemIcon = (System_String_o *)BattleFortificationInfo__GetMaxFortificationPoint(
                                  (BattleFortificationInfo_o *)itemIcon,
                                  0LL);
  v33 = *p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  v34 = (int)itemIcon;
  itemIcon = (System_String_o *)this->fields.getIcon;
  if ( !itemIcon )
    goto LABEL_45;
  totalFortificationPoint = v33->fields.totalFortificationPoint;
  getFortificationPoint = v33->fields.getFortificationPoint;
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
        (float)(totalFortificationPoint - getFortificationPoint) / (float)v34,
        0LL);
      v39 = this->fields.fortificationInfo;
      if ( v39 )
      {
        itemIcon = (System_String_o *)this->fields.getGaugeBar;
        if ( itemIcon )
        {
          UIProgressBar__set_value(
            (UIProgressBar_o *)itemIcon,
            (float)v39->fields.totalFortificationPoint / (float)v34,
            0LL);
          itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
          if ( itemIcon )
          {
            v38 = 0.0;
            goto LABEL_44;
          }
        }
      }
    }
LABEL_45:
    sub_B7769C(itemIcon, v12);
  }
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  itemIcon = (System_String_o *)this->fields.beforeGaugeBar;
  if ( !itemIcon )
    goto LABEL_45;
  UIProgressBar__set_value(
    (UIProgressBar_o *)itemIcon,
    (float)((*p_fortificationInfo)->fields.totalFortificationPoint
          + v34
          - (*p_fortificationInfo)->fields.getFortificationPoint)
  / (float)v34,
    0LL);
  itemIcon = (System_String_o *)this->fields.getGaugeBar;
  if ( !itemIcon )
    goto LABEL_45;
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, 1.0, 0LL);
  v37 = this->fields.fortificationInfo;
  if ( !v37 )
    goto LABEL_45;
  itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
  if ( !itemIcon )
    goto LABEL_45;
  v38 = (float)v37->fields.totalFortificationPoint / (float)v34;
LABEL_44:
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, v38, 0LL);
}