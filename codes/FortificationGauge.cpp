void __fastcall FortificationGauge___ctor(FortificationGauge_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A7318D & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_2960/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/, method);
    byte_4A7318D = 1;
  }
  v5 = StringLiteral_2960/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  this->fields.GET_POINT_LOCALIZE_KEY = (struct System_String_o *)StringLiteral_2960/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.GET_POINT_LOCALIZE_KEY, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FortificationGauge__SetData(
        FortificationGauge_o *this,
        BattleFortificationInfo_o *info,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
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
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  struct UISprite_o *bg; // x8
  GiftEntity_o *GiftEntity; // x0
  int32_t *v32; // x21
  BattleFortificationInfo_o *v33; // x8
  int v34; // w21
  int32_t totalFortificationPoint; // w22
  int32_t getFortificationPoint; // w23
  struct BattleFortificationInfo_o *v37; // x8
  float v38; // s0
  struct BattleFortificationInfo_o *v39; // x8
  UnityEngine_Color_o v40; // [xsp+0h] [xbp-50h] BYREF
  int32_t FortificationWorkType; // [xsp+18h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A7318C & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, info);
    sub_1B90010(&LocalizationManager_TypeInfo, v6);
    sub_1B90010(&StringLiteral_20319/*"img_common_frame01"*/, v7);
    sub_1B90010(&StringLiteral_9210/*"N0"*/, v8);
    sub_1B90010(&StringLiteral_2959/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v9);
    byte_4A7318C = 1;
  }
  *(_QWORD *)&v40.fields.r = 0LL;
  *(_QWORD *)&v40.fields.b = 0LL;
  this->fields.fortificationInfo = info;
  p_fortificationInfo = &this->fields.fortificationInfo;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.fortificationInfo, (int32_t)info, (int32_t)method, v3);
  fortificationInfo = this->fields.fortificationInfo;
  if ( !fortificationInfo )
    goto LABEL_43;
  GET_POINT_LOCALIZE_KEY = this->fields.GET_POINT_LOCALIZE_KEY;
  v15 = System_Int32__ToString((int)fortificationInfo + 16, 0LL);
  v16 = System_String__Concat_61787092(GET_POINT_LOCALIZE_KEY, v15, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v16, 0LL) )
    v16 = this->fields.GET_POINT_LOCALIZE_KEY;
  getForitificationPoint = this->fields.getForitificationPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  itemIcon = LocalizationManager__Get(v16, 0LL);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v18 = itemIcon;
  v19 = (Il2CppObject *)System_Int32__ToString_62592372(
                          (unsigned int)*p_fortificationInfo + 28,
                          (System_String_o *)StringLiteral_9210/*"N0"*/,
                          0LL);
  itemIcon = System_String__Format(v18, v19, 0LL);
  if ( !getForitificationPoint )
    goto LABEL_43;
  UILabel__set_text(getForitificationPoint, itemIcon, 0LL);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  eventId = (*p_fortificationInfo)->fields.eventId;
  itemIcon = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v20, v21, v22);
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v23 = (Il2CppObject *)itemIcon;
  FortificationWorkType = BattleFortificationInfo__GetFortificationWorkType(*p_fortificationInfo, 0LL);
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FortificationWorkType, v24, v25, v26);
  v28 = System_String__Format_61801464((System_String_o *)StringLiteral_2959/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v23, v27, 0LL);
  v29 = LocalizationManager__Get(v28, 0LL);
  itemIcon = (System_String_o *)UnityEngine_ColorUtility__TryParseHtmlString(v29, &v40, 0LL);
  bg = this->fields.bg;
  if ( ((unsigned __int8)itemIcon & 1) != 0 )
  {
    if ( !bg )
      goto LABEL_43;
    UIWidget__set_color((UIWidget_o *)this->fields.bg, v40, 0LL);
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
    v43.fields.r = 1.0;
    v43.fields.g = 1.0;
    v43.fields.b = 1.0;
    v43.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this->fields.bg, v43, 0LL);
  }
  itemIcon = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  GiftEntity = BattleFortificationInfo__GetGiftEntity((BattleFortificationInfo_o *)itemIcon, 0LL);
  if ( GiftEntity )
  {
    v32 = (int32_t *)GiftEntity;
    itemIcon = (System_String_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_43;
    ItemIconComponent__SetGift_38197016((ItemIconComponent_o *)itemIcon, v32[5], v32[6], v32[7], 0, 0LL);
    itemIcon = (System_String_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_43;
    ItemIconComponent__setFrameSprite(
      (ItemIconComponent_o *)itemIcon,
      v32[5] == 1,
      (System_String_o *)StringLiteral_20319/*"img_common_frame01"*/,
      0LL);
  }
  itemIcon = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  itemIcon = (System_String_o *)BattleFortificationInfo__GetMaxFortificationPoint(
                                  (BattleFortificationInfo_o *)itemIcon,
                                  0LL);
  v33 = *p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  v34 = (int)itemIcon;
  itemIcon = (System_String_o *)this->fields.getIcon;
  if ( !itemIcon )
    goto LABEL_43;
  totalFortificationPoint = v33->fields.totalFortificationPoint;
  getFortificationPoint = v33->fields.getFortificationPoint;
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
            goto LABEL_42;
          }
        }
      }
    }
LABEL_43:
    sub_1B9026C(itemIcon, v12);
  }
  if ( !*p_fortificationInfo )
    goto LABEL_43;
  itemIcon = (System_String_o *)this->fields.beforeGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  UIProgressBar__set_value(
    (UIProgressBar_o *)itemIcon,
    (float)((*p_fortificationInfo)->fields.totalFortificationPoint
          + v34
          - (*p_fortificationInfo)->fields.getFortificationPoint)
  / (float)v34,
    0LL);
  itemIcon = (System_String_o *)this->fields.getGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, 1.0, 0LL);
  v37 = this->fields.fortificationInfo;
  if ( !v37 )
    goto LABEL_43;
  itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
  if ( !itemIcon )
    goto LABEL_43;
  v38 = (float)v37->fields.totalFortificationPoint / (float)v34;
LABEL_42:
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, v38, 0LL);
}