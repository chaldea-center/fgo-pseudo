void __fastcall FortificationGauge___ctor(FortificationGauge_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Int32_array **v12; // x1
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42EBDAC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2547/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_2548/*"BATTLE_RESULT_FORTIFICATION_MAX"*/, v9, v10, v11);
    byte_42EBDAC = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_2547/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  this->fields.GET_POINT_LOCALIZE_KEY = (struct System_String_o *)StringLiteral_2547/*"BATTLE_RESULT_FORTIFICATION_GET_POINT"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.GET_POINT_LOCALIZE_KEY, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_2548/*"BATTLE_RESULT_FORTIFICATION_MAX"*/;
  this->fields.MAX_LOCALIZE_KEY = (struct System_String_o *)StringLiteral_2548/*"BATTLE_RESULT_FORTIFICATION_MAX"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.MAX_LOCALIZE_KEY, v13, v14, v15, v16, v17, v18, v19);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  BattleFortificationInfo_o **p_fortificationInfo; // x20
  System_String_o *itemIcon; // x0
  __int64 v24; // x1
  struct BattleFortificationInfo_o *fortificationInfo; // x8
  System_String_o *GET_POINT_LOCALIZE_KEY; // x21
  System_String_o *v27; // x0
  System_String_o *v28; // x22
  UILabel_o *getForitificationPoint; // x21
  System_String_o *v30; // x22
  Il2CppObject *v31; // x0
  Il2CppObject *v32; // x21
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  UIWidget_o *bg; // x21
  int v37; // s0
  GiftEntity_o *GiftEntity; // x0
  int32_t *v42; // x21
  BattleFortificationInfo_o *v43; // x8
  int v44; // w21
  int32_t totalFortificationPoint; // w22
  int32_t getFortificationPoint; // w23
  struct BattleFortificationInfo_o *v47; // x8
  float v48; // s0
  struct BattleFortificationInfo_o *v49; // x8
  int32_t FortificationWorkType; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_42EBDAB & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)info, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_19714/*"img_common_frame01"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_2546/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v19, v20, v21);
    byte_42EBDAB = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  this->fields.fortificationInfo = info;
  p_fortificationInfo = &this->fields.fortificationInfo;
  sub_B5D560(
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
  v27 = System_Int32__ToString((int)fortificationInfo + 16, 0LL);
  v28 = System_String__Concat_44577788(GET_POINT_LOCALIZE_KEY, v27, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey(v28, 0LL) )
    v28 = this->fields.GET_POINT_LOCALIZE_KEY;
  getForitificationPoint = this->fields.getForitificationPoint;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  itemIcon = LocalizationManager__Get(v28, 0LL);
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  v30 = itemIcon;
  v31 = (Il2CppObject *)System_Int32__ToString_39741776(
                          (unsigned int)*p_fortificationInfo + 28,
                          (System_String_o *)StringLiteral_9361/*"N0"*/,
                          0LL);
  itemIcon = System_String__Format(v30, v31, 0LL);
  if ( !getForitificationPoint )
    goto LABEL_45;
  UILabel__set_text(getForitificationPoint, itemIcon, 0LL);
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  eventId = (*p_fortificationInfo)->fields.eventId;
  itemIcon = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  v32 = (Il2CppObject *)itemIcon;
  FortificationWorkType = BattleFortificationInfo__GetFortificationWorkType(*p_fortificationInfo, 0LL);
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FortificationWorkType);
  v34 = System_String__Format_44573324((System_String_o *)StringLiteral_2546/*"BATTLE_RESULT_FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v32, v33, 0LL);
  v35 = LocalizationManager__Get(v34, 0LL);
  itemIcon = (System_String_o *)UnityEngine_ColorUtility__TryParseHtmlString(v35, &color, 0LL);
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
    *(UnityEngine_Color_o *)&v37 = UnityEngine_Color__get_white(0LL);
    if ( !bg )
      goto LABEL_45;
    UIWidget__set_color(bg, *(UnityEngine_Color_o *)&v37, 0LL);
  }
  itemIcon = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  GiftEntity = BattleFortificationInfo__GetGiftEntity((BattleFortificationInfo_o *)itemIcon, 0LL);
  if ( GiftEntity )
  {
    v42 = (int32_t *)GiftEntity;
    itemIcon = (System_String_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_45;
    ItemIconComponent__SetGift((ItemIconComponent_o *)itemIcon, v42[5], v42[6], v42[7], 0, 0LL);
    itemIcon = (System_String_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_45;
    ItemIconComponent__setFrameSprite(
      (ItemIconComponent_o *)itemIcon,
      v42[5] == 1,
      (System_String_o *)StringLiteral_19714/*"img_common_frame01"*/,
      0LL);
  }
  itemIcon = (System_String_o *)*p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  itemIcon = (System_String_o *)BattleFortificationInfo__GetMaxFortificationPoint(
                                  (BattleFortificationInfo_o *)itemIcon,
                                  0LL);
  v43 = *p_fortificationInfo;
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  v44 = (int)itemIcon;
  itemIcon = (System_String_o *)this->fields.getIcon;
  if ( !itemIcon )
    goto LABEL_45;
  totalFortificationPoint = v43->fields.totalFortificationPoint;
  getFortificationPoint = v43->fields.getFortificationPoint;
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
        (float)(totalFortificationPoint - getFortificationPoint) / (float)v44,
        0LL);
      v49 = this->fields.fortificationInfo;
      if ( v49 )
      {
        itemIcon = (System_String_o *)this->fields.getGaugeBar;
        if ( itemIcon )
        {
          UIProgressBar__set_value(
            (UIProgressBar_o *)itemIcon,
            (float)v49->fields.totalFortificationPoint / (float)v44,
            0LL);
          itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
          if ( itemIcon )
          {
            v48 = 0.0;
            goto LABEL_44;
          }
        }
      }
    }
LABEL_45:
    sub_B5D69C(itemIcon, v24);
  }
  if ( !*p_fortificationInfo )
    goto LABEL_45;
  itemIcon = (System_String_o *)this->fields.beforeGaugeBar;
  if ( !itemIcon )
    goto LABEL_45;
  UIProgressBar__set_value(
    (UIProgressBar_o *)itemIcon,
    (float)((*p_fortificationInfo)->fields.totalFortificationPoint
          + v44
          - (*p_fortificationInfo)->fields.getFortificationPoint)
  / (float)v44,
    0LL);
  itemIcon = (System_String_o *)this->fields.getGaugeBar;
  if ( !itemIcon )
    goto LABEL_45;
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, 1.0, 0LL);
  v47 = this->fields.fortificationInfo;
  if ( !v47 )
    goto LABEL_45;
  itemIcon = (System_String_o *)this->fields.surplusGaugeBar;
  if ( !itemIcon )
    goto LABEL_45;
  v48 = (float)v47->fields.totalFortificationPoint / (float)v44;
LABEL_44:
  UIProgressBar__set_value((UIProgressBar_o *)itemIcon, v48, 0LL);
}