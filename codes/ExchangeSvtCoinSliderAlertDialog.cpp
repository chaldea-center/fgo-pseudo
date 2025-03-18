void __fastcall ExchangeSvtCoinSliderAlertDialog___ctor(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C1D174 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C1D174 = 1;
  }
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_C0DAE0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ExchangeSvtCoinSliderAlertDialog__Awake(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall ExchangeSvtCoinSliderAlertDialog__Close(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ExchangeSvtCoinSliderAlertDialog__Close_32079076(this, 0LL, v2);
}


void __fastcall ExchangeSvtCoinSliderAlertDialog__Close_32079076(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4C1D170 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_ExchangeSvtCoinSliderAlertDialog_EndClose__, v5);
    byte_4C1D170 = 1;
  }
  this->fields.onClose = callback;
  sub_1C3B708(&this->fields.onClose);
  this->fields.state = 2;
  v6 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ExchangeSvtCoinSliderAlertDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall ExchangeSvtCoinSliderAlertDialog__EndClose(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_onClose; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *onClose; // t1

  ExchangeSvtCoinSliderAlertDialog__Init(this, method);
  onClose = this->fields.onClose;
  p_onClose = &this->fields.onClose;
  v4 = onClose;
  if ( onClose )
  {
    *p_onClose = 0LL;
    sub_1C3B708(p_onClose);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall ExchangeSvtCoinSliderAlertDialog__Init(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        const MethodInfo *method)
{
  this->fields.onDecide = 0LL;
  sub_1C3B708(&this->fields.onDecide);
  this->fields.onCancel = 0LL;
  sub_1C3B708(&this->fields.onCancel);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ExchangeSvtCoinSliderAlertDialog__OnClickCancel(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  struct System_Action_o *onCancel; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4C1D172 & 1) == 0 )
  {
    sub_1C3B764(&Method_ExchangeSvtCoinSliderAlertDialog_OnClickCancel__, method);
    byte_4C1D172 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_ExchangeSvtCoinSliderAlertDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExchangeSvtCoinSliderAlertDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_ExchangeSvtCoinSliderAlertDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    ExchangeSvtCoinSliderAlertDialog__Close_32079076(this, 0LL, v5);
    onCancel = this->fields.onCancel;
    this->fields.onCancel = 0LL;
    v7 = sub_1C3B708(&this->fields.onCancel);
    if ( !onCancel )
      sub_1C3B9C0(v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onCancel->fields.m_target)(
      onCancel->fields.original_method_info,
      *(_QWORD *)&onCancel->fields.extra_arg);
  }
}


void __fastcall ExchangeSvtCoinSliderAlertDialog__OnClickDecide(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  struct System_Action_o *onDecide; // x21

  if ( (byte_4C1D171 & 1) == 0 )
  {
    sub_1C3B764(&Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__, method);
    byte_4C1D171 = 1;
  }
  if ( this->fields.state == 1 && this->fields.onDecide )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      goto LABEL_13;
    value = UIProgressBar__get_value(checkSlider, 0LL);
    v5 = Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    if ( value < 1.0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0LL);
      return;
    }
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    ExchangeSvtCoinSliderAlertDialog__Close_32079076(this, 0LL, v7);
    onDecide = this->fields.onDecide;
    this->fields.onDecide = 0LL;
    checkSlider = (UIProgressBar_o *)sub_1C3B708(&this->fields.onDecide);
    if ( !onDecide )
LABEL_13:
      sub_1C3B9C0(checkSlider, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall ExchangeSvtCoinSliderAlertDialog__OnEnable(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C1D173 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_15958/*"_PerspectiveFilter"*/, method);
    byte_4C1D173 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43310944(transform, (System_String_o *)StringLiteral_15958/*"_PerspectiveFilter"*/, 0LL);
}


void __fastcall ExchangeSvtCoinSliderAlertDialog__OnSliderDragFinished(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  bool v5; // nf
  float v6; // s0
  bool v7; // w20
  const MethodInfo *v8; // x2

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (value = UIProgressBar__get_value(checkSlider, 0LL),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0LL) )
  {
    sub_1C3B9C0(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0LL);
  ExchangeSvtCoinSliderAlertDialog__SetSlider(this, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExchangeSvtCoinSliderAlertDialog__Open(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        int32_t buyCount,
        int32_t needCount,
        ShopEntity_o *shopEntity,
        System_Action_o *onDecideFunc,
        System_Action_o *onCancelFunc,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  UILabel_o *titleLabel; // x23
  System_String_o *checkSlider; // x0
  __int64 v30; // x1
  UILabel_o *decideButtonLabel; // x23
  UILabel_o *cancelButtonLabel; // x23
  UILabel_o *detailLabel_1; // x23
  UILabel_o *detailLabel_2; // x23
  UILabel_o *needCountNameLabel; // x23
  System_String_o *v36; // x0
  UILabel_o *needCountLabel; // x23
  System_String_o *v38; // x24
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  UILabel_o *buyCountNameLabel; // x22
  System_String_o *v44; // x23
  UILabel_o *buyCountLabel; // x22
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  struct UISlider_o *v50; // x21
  UIProgressBar_OnDragFinished_o *v51; // x22
  const MethodInfo *v52; // x2
  Il2CppObject *Master_object; // x21
  int64_t v54; // x22
  UserItemEntity_o *EntityDefinitely; // x0
  ItemIconComponent_o *itemIcon; // x21
  UserItemEntity_o *v57; // x22
  int32_t v58; // [xsp+8h] [xbp-48h] BYREF
  int32_t v59; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C1D16E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserItemMaster___, *(_QWORD *)&buyCount);
    sub_1C3B764(&DataManager_TypeInfo, v13);
    sub_1C3B764(&Method_ExchangeSvtCoinSliderAlertDialog_OnSliderDragFinished__, v14);
    sub_1C3B764(&int_TypeInfo, v15);
    sub_1C3B764(&LocalizationManager_TypeInfo, v16);
    sub_1C3B764(&NetworkManager_TypeInfo, v17);
    sub_1C3B764(&UIProgressBar_OnDragFinished_TypeInfo, v18);
    sub_1C3B764(&StringLiteral_5893/*"EndMove"*/, v19);
    sub_1C3B764(&StringLiteral_5897/*"EndMoveReturnEaseHalf"*/, v20);
    sub_1C3B764(&StringLiteral_5892/*"EndLoadInit"*/, v21);
    sub_1C3B764(&StringLiteral_5896/*"EndMoveReturn"*/, v22);
    sub_1C3B764(&StringLiteral_5890/*"EndGetResponse"*/, v23);
    sub_1C3B764(&StringLiteral_5891/*"EndLayoutGroup: BeginLayoutGroup must be called first."*/, v24);
    sub_1C3B764(&StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, v25);
    sub_1C3B764(&StringLiteral_5894/*"EndMoveAlpha"*/, v26);
    sub_1C3B764(&StringLiteral_5895/*"EndMoveAttack"*/, v27);
    byte_4C1D16E = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecideFunc;
    sub_1C3B708(&this->fields.onDecide);
    this->fields.onCancel = onCancelFunc;
    sub_1C3B708(&this->fields.onCancel);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5897/*"EndMoveReturnEaseHalf"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_31;
    UILabel__set_text(titleLabel, checkSlider, 0LL);
    decideButtonLabel = this->fields.decideButtonLabel;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5892/*"EndLoadInit"*/, 0LL);
    if ( !decideButtonLabel )
      goto LABEL_31;
    UILabel__set_text(decideButtonLabel, checkSlider, 0LL);
    cancelButtonLabel = this->fields.cancelButtonLabel;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, 0LL);
    if ( !cancelButtonLabel )
      goto LABEL_31;
    UILabel__set_text(cancelButtonLabel, checkSlider, 0LL);
    detailLabel_1 = this->fields.detailLabel_1;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5893/*"EndMove"*/, 0LL);
    if ( !detailLabel_1 )
      goto LABEL_31;
    UILabel__set_text(detailLabel_1, checkSlider, 0LL);
    detailLabel_2 = this->fields.detailLabel_2;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5894/*"EndMoveAlpha"*/, 0LL);
    if ( !detailLabel_2 )
      goto LABEL_31;
    UILabel__set_text(detailLabel_2, checkSlider, 0LL);
    needCountNameLabel = this->fields.needCountNameLabel;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5895/*"EndMoveAttack"*/, 0LL);
    if ( !needCountNameLabel )
      goto LABEL_31;
    UILabel__set_text(needCountNameLabel, checkSlider, 0LL);
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5896/*"EndMoveReturn"*/, 0LL);
    needCountLabel = this->fields.needCountLabel;
    v38 = v36;
    v59 = needCount;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v39, v40, v41);
    checkSlider = System_String__Format(v38, v42, 0LL);
    if ( !needCountLabel )
      goto LABEL_31;
    UILabel__set_text(needCountLabel, checkSlider, 0LL);
    buyCountNameLabel = this->fields.buyCountNameLabel;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5890/*"EndGetResponse"*/, 0LL);
    if ( !buyCountNameLabel )
      goto LABEL_31;
    UILabel__set_text(buyCountNameLabel, checkSlider, 0LL);
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_5891/*"EndLayoutGroup: BeginLayoutGroup must be called first."*/, 0LL);
    buyCountLabel = this->fields.buyCountLabel;
    v58 = buyCount;
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v46, v47, v48);
    checkSlider = System_String__Format(v44, v49, 0LL);
    if ( !buyCountLabel )
      goto LABEL_31;
    UILabel__set_text(buyCountLabel, checkSlider, 0LL);
    checkSlider = (System_String_o *)this->fields.checkSlider;
    if ( !checkSlider )
      goto LABEL_31;
    UIProgressBar__set_value((UIProgressBar_o *)checkSlider, 0.0, 0LL);
    v50 = this->fields.checkSlider;
    v51 = (UIProgressBar_OnDragFinished_o *)sub_1C3B9B0(UIProgressBar_OnDragFinished_TypeInfo);
    UIProgressBar_OnDragFinished___ctor(
      v51,
      (Il2CppObject *)this,
      Method_ExchangeSvtCoinSliderAlertDialog_OnSliderDragFinished__,
      0LL);
    if ( !v50 )
      goto LABEL_31;
    v50->fields.onDragFinished = v51;
    sub_1C3B708(&v50->fields.onDragFinished);
    ExchangeSvtCoinSliderAlertDialog__SetSlider(this, 0, v52);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, v30);
      byte_4C1C955 = 1;
    }
    checkSlider = (System_String_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      checkSlider = (System_String_o *)NetworkManager_TypeInfo;
    }
    if ( !shopEntity
      || (v54 = *(_QWORD *)(*(_QWORD *)&checkSlider[7].fields + 64LL),
          checkSlider = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0LL),
          !Master_object)
      || (EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                               (UserItemMaster_o *)Master_object,
                               v54,
                               (int32_t)checkSlider,
                               0LL),
          itemIcon = this->fields.itemIcon,
          v57 = EntityDefinitely,
          checkSlider = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0LL),
          !v57)
      || !itemIcon )
    {
LABEL_31:
      sub_1C3B9C0(checkSlider, v30);
    }
    ItemIconComponent__SetItem(itemIcon, (int32_t)checkSlider, v57->fields.num, 0, 0LL);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExchangeSvtCoinSliderAlertDialog__SetSlider(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UISprite_o *sliderSprite; // x0
  System_String_o **v7; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  __int64 v12; // x1

  if ( (byte_4C1D16F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_20884/*"lowLimit is greater than highLimit"*/, sliderOn);
    sub_1C3B764(&StringLiteral_20883/*"low-value"*/, v5);
    byte_4C1D16F = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_15;
  v7 = (System_String_o **)&StringLiteral_20883/*"low-value"*/;
  if ( !sliderOn )
    v7 = (System_String_o **)&StringLiteral_20884/*"lowLimit is greater than highLimit"*/;
  UISprite__set_spriteName(sliderSprite, *v7, 0LL);
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  a = 1.0;
  b = 1.0;
  g = 1.0;
  r = 1.0;
  if ( !sliderOn )
  {
    r = this->fields.DisableColor.fields.r;
    g = this->fields.DisableColor.fields.g;
    b = this->fields.DisableColor.fields.b;
    a = this->fields.DisableColor.fields.a;
  }
  if ( !sliderSprite
    || (UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, *(UnityEngine_Color_o *)&r, 0LL),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0LL)
    || (!sliderOn ? (v12 = 3LL) : (v12 = 0LL),
        ((void (__fastcall *)(UISprite_o *, __int64, __int64, Il2CppMethodPointer))sliderSprite->klass->vtable._14_OnEnable.method)(
          sliderSprite,
          v12,
          1LL,
          sliderSprite->klass->vtable._15_OnInit.methodPtr),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_15:
    sub_1C3B9C0(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, Il2CppMethodPointer))sliderSprite->klass->vtable._5_get_isAnchoredVertically.method)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._6_get_canBeAnchored.methodPtr);
}