void FortificationGauge___ctor(FortificationGauge_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_593C2F7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_2955/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/);
    byte_593C2F7 = 1;
  }
  v9 = StringLiteral_2955/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  this->fields.GET_POINT_LOCALIZE_KEY = (struct System_String_o *)StringLiteral_2955/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.GET_POINT_LOCALIZE_KEY, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FortificationGauge__SetData(FortificationGauge_o *this, BattleFortificationInfo_o *info, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleFortificationInfo_o **p_fortificationInfo; // x20
  System_String_o *bg; // x0
  __int64 v12; // x1
  struct BattleFortificationInfo_o *fortificationInfo; // x8
  System_String_o *GET_POINT_LOCALIZE_KEY; // x21
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x22
  __int64 v18; // x1
  UILabel_o *getForitificationPoint; // x21
  System_String_o *v20; // x22
  Il2CppObject *v21; // x0
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  bool v26; // w8
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

  if ( (byte_593C2F6 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_21306/*"img_common_frame01"*/);
    sub_21FFC50(&StringLiteral_9604/*"N0"*/);
    sub_21FFC50(&StringLiteral_2954/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/);
    byte_593C2F6 = 1;
  }
  *(_QWORD *)&v36.fields.r = 0;
  *(_QWORD *)&v36.fields.b = 0;
  this->fields.fortificationInfo = info;
  p_fortificationInfo = &this->fields.fortificationInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fortificationInfo,
    (int32_t)info,
    (System_String_o *)method,
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
  v17 = System_String__Concat_75438412(GET_POINT_LOCALIZE_KEY, v15, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  if ( !LocalizationManager__ContainsKey(v17, 0) )
    v17 = this->fields.GET_POINT_LOCALIZE_KEY;
  getForitificationPoint = this->fields.getForitificationPoint;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
  bg = LocalizationManager__Get(v17, 0);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v20 = bg;
  v21 = (Il2CppObject *)System_Int32__ToString_76925352(
                          (unsigned int)*p_fortificationInfo + 28,
                          (System_String_o *)StringLiteral_9604/*"N0"*/,
                          0);
  bg = System_String__Format(v20, v21, 0);
  if ( !getForitificationPoint )
    goto LABEL_43;
  UILabel__set_text(getForitificationPoint, bg, 0);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  eventId = (*p_fortificationInfo)->fields.eventId;
  bg = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &eventId);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v22 = (Il2CppObject *)bg;
  FortificationWorkType = BattleFortificationInfo__GetFortificationWorkType(*p_fortificationInfo, 0);
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &FortificationWorkType);
  v24 = System_String__Format_75484576((System_String_o *)StringLiteral_2954/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v22, v23, 0);
  v25 = LocalizationManager__Get(v24, 0);
  v26 = UnityEngine_ColorUtility__TryParseHtmlString(v25, &v36, 0);
  bg = (System_String_o *)this->fields.bg;
  if ( v26 )
  {
    if ( !bg )
      goto LABEL_43;
    UIWidget__set_color((UIWidget_o *)bg, v36, 0);
    bg = (System_String_o *)this->fields.bg;
    if ( !bg )
      goto LABEL_43;
    ((void (__fastcall *)(System_String_o *, const MethodInfo *, float))bg->klass->vtable._8_Equals.methodPtr)(
      bg,
      bg->klass->vtable._8_Equals.method,
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
    UIWidget__set_color((UIWidget_o *)bg, v39, 0);
  }
  bg = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  GiftEntity = BattleFortificationInfo__GetGiftEntity((BattleFortificationInfo_o *)bg, 0);
  if ( GiftEntity )
  {
    v28 = (int32_t *)GiftEntity;
    bg = (System_String_o *)this->fields.itemIcon;
    if ( !bg )
      goto LABEL_43;
    ItemIconComponent__SetGift_47936840((ItemIconComponent_o *)bg, v28[5], v28[6], v28[7], 0, 0);
    bg = (System_String_o *)this->fields.itemIcon;
    if ( !bg )
      goto LABEL_43;
    ItemIconComponent__setFrameSprite((ItemIconComponent_o *)bg, v28[5] == 1, (System_String_o *)StringLiteral_21306/*"img_common_frame01"*/, 0);
  }
  bg = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  bg = (System_String_o *)BattleFortificationInfo__GetMaxFortificationPoint((BattleFortificationInfo_o *)bg, 0);
  v29 = *p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v30 = (int)bg;
  bg = (System_String_o *)this->fields.getIcon;
  if ( !bg )
    goto LABEL_43;
  totalFortificationPoint = v29->fields.totalFortificationPoint;
  getFortificationPoint = v29->fields.getFortificationPoint;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bg, totalFortificationPoint < getFortificationPoint, 0);
  bg = (System_String_o *)this->fields.surplusGaugeBar;
  if ( !bg )
    goto LABEL_43;
  bg = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bg, 0);
  if ( !bg )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bg, totalFortificationPoint < getFortificationPoint, 0);
  if ( totalFortificationPoint >= getFortificationPoint )
  {
    bg = (System_String_o *)this->fields.beforeGaugeBar;
    if ( bg )
    {
      UIProgressBar__set_value(
        (UIProgressBar_o *)bg,
        (float)(totalFortificationPoint - getFortificationPoint) / (float)v30,
        0);
      v35 = this->fields.fortificationInfo;
      if ( v35 )
      {
        bg = (System_String_o *)this->fields.getGaugeBar;
        if ( bg )
        {
          UIProgressBar__set_value((UIProgressBar_o *)bg, (float)v35->fields.totalFortificationPoint / (float)v30, 0);
          bg = (System_String_o *)this->fields.surplusGaugeBar;
          if ( bg )
          {
            v34 = 0.0;
            goto LABEL_42;
          }
        }
      }
    }
LABEL_43:
    sub_21FFECC(bg, v12);
  }
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  bg = (System_String_o *)this->fields.beforeGaugeBar;
  if ( !bg )
    goto LABEL_43;
  UIProgressBar__set_value(
    (UIProgressBar_o *)bg,
    (float)((*p_fortificationInfo)->fields.totalFortificationPoint
          + v30
          - (*p_fortificationInfo)->fields.getFortificationPoint)
  / (float)v30,
    0);
  bg = (System_String_o *)this->fields.getGaugeBar;
  if ( !bg )
    goto LABEL_43;
  UIProgressBar__set_value((UIProgressBar_o *)bg, 1.0, 0);
  v33 = this->fields.fortificationInfo;
  if ( !v33 )
    goto LABEL_43;
  bg = (System_String_o *)this->fields.surplusGaugeBar;
  if ( !bg )
    goto LABEL_43;
  v34 = (float)v33->fields.totalFortificationPoint / (float)v30;
LABEL_42:
  UIProgressBar__set_value((UIProgressBar_o *)bg, v34, 0);
}