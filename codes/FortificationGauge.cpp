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

  if ( (byte_40FA76E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2484, method);
    sub_B16FFC(&StringLiteral_2485, v9);
    byte_40FA76E = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_2484;
  this->fields.GET_POINT_LOCALIZE_KEY = (struct System_String_o *)StringLiteral_2484;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.GET_POINT_LOCALIZE_KEY, v10, v2, v3, v4, v5, v6, v7);
  v11 = (System_Int32_array **)StringLiteral_2485;
  this->fields.MAX_LOCALIZE_KEY = (struct System_String_o *)StringLiteral_2485;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.MAX_LOCALIZE_KEY, v11, v12, v13, v14, v15, v16, v17);
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
  struct BattleFortificationInfo_o *fortificationInfo; // x8
  System_String_o *GET_POINT_LOCALIZE_KEY; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x22
  UILabel_o *getForitificationPoint; // x21
  System_String_o *v20; // x0
  System_String_o *v21; // x22
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x0
  Il2CppObject *v25; // x21
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  bool v29; // w0
  UIWidget_o *bg; // x21
  struct UISprite_o *v31; // x0
  int v32; // s0
  GiftEntity_o *GiftEntity; // x0
  int32_t *v37; // x21
  ItemIconComponent_o *itemIcon; // x0
  ItemIconComponent_o *v39; // x0
  int32_t MaxFortificationPoint; // w0
  BattleFortificationInfo_o *v41; // x8
  int v42; // w21
  UnityEngine_GameObject_o *getIcon; // x0
  int32_t totalFortificationPoint; // w22
  int32_t getFortificationPoint; // w23
  UnityEngine_Component_o *surplusGaugeBar; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIProgressBar_o *v48; // x0
  UIProgressBar_o *v49; // x0
  struct BattleFortificationInfo_o *v50; // x8
  UIProgressBar_o *v51; // x0
  float v52; // s0
  UIProgressBar_o *beforeGaugeBar; // x0
  struct BattleFortificationInfo_o *v54; // x8
  UIProgressBar_o *getGaugeBar; // x0
  int32_t FortificationWorkType; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_40FA76D & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, info);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_19395, v11);
    sub_B16FFC(&StringLiteral_9236, v12);
    sub_B16FFC(&StringLiteral_2483, v13);
    byte_40FA76D = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  this->fields.fortificationInfo = info;
  p_fortificationInfo = &this->fields.fortificationInfo;
  sub_B16F98(
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
  v17 = System_Int32__ToString((int)fortificationInfo + 16, 0LL);
  v18 = System_String__Concat_43743732(GET_POINT_LOCALIZE_KEY, v17, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey(v18, 0LL) )
    v18 = this->fields.GET_POINT_LOCALIZE_KEY;
  getForitificationPoint = this->fields.getForitificationPoint;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get(v18, 0LL);
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  v21 = v20;
  v22 = (Il2CppObject *)System_Int32__ToString_38275808(
                          (unsigned int)*p_fortificationInfo + 28,
                          (System_String_o *)StringLiteral_9236,
                          0LL);
  v23 = System_String__Format(v21, v22, 0LL);
  if ( !getForitificationPoint )
    goto LABEL_45;
  UILabel__set_text(getForitificationPoint, v23, 0LL);
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  eventId = (*p_fortificationInfo)->fields.eventId;
  v24 = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  v25 = (Il2CppObject *)v24;
  FortificationWorkType = BattleFortificationInfo__GetFortificationWorkType(*p_fortificationInfo, 0LL);
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FortificationWorkType);
  v27 = System_String__Format_43739268((System_String_o *)StringLiteral_2483, v25, v26, 0LL);
  v28 = LocalizationManager__Get(v27, 0LL);
  v29 = UnityEngine_ColorUtility__TryParseHtmlString(v28, &color, 0LL);
  bg = (UIWidget_o *)this->fields.bg;
  if ( v29 )
  {
    if ( !bg )
      goto LABEL_45;
    UIWidget__set_color((UIWidget_o *)this->fields.bg, color, 0LL);
    v31 = this->fields.bg;
    if ( !v31 )
      goto LABEL_45;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v31->klass->vtable._8_set_alpha.method)(
      v31,
      v31->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      0.8);
  }
  else
  {
    *(UnityEngine_Color_o *)&v32 = UnityEngine_Color__get_white(0LL);
    if ( !bg )
      goto LABEL_45;
    UIWidget__set_color(bg, *(UnityEngine_Color_o *)&v32, 0LL);
  }
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  GiftEntity = BattleFortificationInfo__GetGiftEntity(*p_fortificationInfo, 0LL);
  if ( GiftEntity )
  {
    v37 = (int32_t *)GiftEntity;
    itemIcon = this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_45;
    ItemIconComponent__SetGift(itemIcon, v37[5], v37[6], v37[7], 0, 0LL);
    v39 = this->fields.itemIcon;
    if ( !v39 )
      goto LABEL_45;
    ItemIconComponent__setFrameSprite(v39, v37[5] == 1, (System_String_o *)StringLiteral_19395, 0LL);
  }
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  MaxFortificationPoint = BattleFortificationInfo__GetMaxFortificationPoint(*p_fortificationInfo, 0LL);
  v41 = *p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  v42 = MaxFortificationPoint;
  getIcon = this->fields.getIcon;
  if ( !getIcon )
    goto LABEL_45;
  totalFortificationPoint = v41->fields.totalFortificationPoint;
  getFortificationPoint = v41->fields.getFortificationPoint;
  UnityEngine_GameObject__SetActive(getIcon, totalFortificationPoint < getFortificationPoint, 0LL);
  surplusGaugeBar = (UnityEngine_Component_o *)this->fields.surplusGaugeBar;
  if ( !surplusGaugeBar )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject(surplusGaugeBar, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, totalFortificationPoint < getFortificationPoint, 0LL);
  if ( totalFortificationPoint >= getFortificationPoint )
  {
    beforeGaugeBar = this->fields.beforeGaugeBar;
    if ( beforeGaugeBar )
    {
      UIProgressBar__set_value(
        beforeGaugeBar,
        (float)(totalFortificationPoint - getFortificationPoint) / (float)v42,
        0LL);
      v54 = this->fields.fortificationInfo;
      if ( v54 )
      {
        getGaugeBar = this->fields.getGaugeBar;
        if ( getGaugeBar )
        {
          UIProgressBar__set_value(getGaugeBar, (float)v54->fields.totalFortificationPoint / (float)v42, 0LL);
          v51 = this->fields.surplusGaugeBar;
          if ( v51 )
          {
            v52 = 0.0;
            goto LABEL_44;
          }
        }
      }
    }
LABEL_45:
    sub_B170D4();
  }
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  v48 = this->fields.beforeGaugeBar;
  if ( !v48 )
    goto LABEL_45;
  UIProgressBar__set_value(
    v48,
    (float)((*p_fortificationInfo)->fields.totalFortificationPoint
          + v42
          - (*p_fortificationInfo)->fields.getFortificationPoint)
  / (float)v42,
    0LL);
  v49 = this->fields.getGaugeBar;
  if ( !v49 )
    goto LABEL_45;
  UIProgressBar__set_value(v49, 1.0, 0LL);
  v50 = this->fields.fortificationInfo;
  if ( !v50 )
    goto LABEL_45;
  v51 = this->fields.surplusGaugeBar;
  if ( !v51 )
    goto LABEL_45;
  v52 = (float)v50->fields.totalFortificationPoint / (float)v42;
LABEL_44:
  UIProgressBar__set_value(v51, v52, 0LL);
}