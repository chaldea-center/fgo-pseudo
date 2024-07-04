void __fastcall CondensedScaleSprite___ctor(CondensedScaleSprite_o *this, const MethodInfo *method)
{
  this->fields.autoUpdate = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CondensedScaleSprite__Awake(CondensedScaleSprite_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CondensedScaleSprite__Init(this, method);
  if ( this->fields.autoUpdate )
    CondensedScaleSprite__SetCondensedScale(this, v3);
}


float __fastcall CondensedScaleSprite__GetAfterAdjustWidth(CondensedScaleSprite_o *this, const MethodInfo *method)
{
  UISprite_o *UISprite; // x0
  const MethodInfo *v4; // x1
  struct UILabel_o *uiLabel; // x8
  int32_t mWidth; // w20
  int32_t maxLabelWidth; // w21
  int32_t v8; // w9

  CondensedScaleSprite__Init(this, method);
  uiLabel = this->fields.uiLabel;
  if ( !uiLabel
    || (mWidth = uiLabel->fields.mWidth,
        maxLabelWidth = this->fields.maxLabelWidth,
        (UISprite = CondensedScaleSprite__get_UISprite(this, v4)) == 0LL) )
  {
    sub_1B00F28(UISprite, v4);
  }
  if ( mWidth <= maxLabelWidth )
    v8 = mWidth;
  else
    v8 = maxLabelWidth;
  return this->fields.displayAreaAdjustValue + (float)(UISprite->fields.mWidth + v8);
}


float __fastcall CondensedScaleSprite__GetCondensedRatio(CondensedScaleSprite_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  int32_t maxLabelWidth; // w8
  float v6; // s8
  struct UILabel_o *uiLabel; // x9
  struct System_String_o *mText; // x10
  const MethodInfo *v9; // x1
  float SpriteAndLabelWidth; // s0

  CondensedScaleSprite__Init(this, method);
  maxLabelWidth = this->fields.maxLabelWidth;
  v6 = 1.0;
  if ( maxLabelWidth >= 1 )
  {
    uiLabel = this->fields.uiLabel;
    if ( !uiLabel || (mText = uiLabel->fields.mText) == 0LL )
      sub_1B00F28(v3, v4);
    if ( mText->fields._stringLength >= 1 && maxLabelWidth < uiLabel->fields.mWidth )
    {
      SpriteAndLabelWidth = CondensedScaleSprite__GetSpriteAndLabelWidth(this, v4);
      if ( SpriteAndLabelWidth > 0.0 )
        return CondensedScaleSprite__GetAfterAdjustWidth(this, v9) / SpriteAndLabelWidth;
    }
  }
  return v6;
}


float __fastcall CondensedScaleSprite__GetSpriteAndLabelWidth(CondensedScaleSprite_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UISprite_o *UISprite; // x0
  __int64 v5; // x1
  struct UILabel_o *uiLabel; // x8

  CondensedScaleSprite__Init(this, method);
  UISprite = CondensedScaleSprite__get_UISprite(this, v3);
  if ( !UISprite || (uiLabel = this->fields.uiLabel) == 0LL )
    sub_1B00F28(UISprite, v5);
  return this->fields.displayAreaAdjustValue + (float)(uiLabel->fields.mWidth + UISprite->fields.mWidth);
}


void __fastcall CondensedScaleSprite__Init(CondensedScaleSprite_o *this, const MethodInfo *method)
{
  UILabel_o *uiLabel; // x0
  struct UILabel_o *v4; // x8

  if ( !this->fields.isInit )
  {
    uiLabel = this->fields.uiLabel;
    if ( uiLabel )
    {
      UILabel__set_overflowMethod(uiLabel, 2, 0LL);
      if ( this->fields.maxLabelWidth > 0 )
      {
LABEL_6:
        this->fields.isInit = 1;
        return;
      }
      v4 = this->fields.uiLabel;
      if ( v4 )
      {
        this->fields.maxLabelWidth = v4->fields.mWidth;
        goto LABEL_6;
      }
    }
    sub_1B00F28(uiLabel, method);
  }
}


void __fastcall CondensedScaleSprite__SetCondensedScale(CondensedScaleSprite_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct UILabel_o *uiLabel; // x8
  struct System_String_o *mText; // x1
  CondensedScaleSprite_o *v6; // x19
  const MethodInfo *v7; // x1
  float CondensedRatio; // s8
  const MethodInfo *v9; // x1
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  uiLabel = this->fields.uiLabel;
  if ( !uiLabel
    || (mText = uiLabel->fields.mText,
        v6 = this,
        this->fields.previousText = mText,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.previousText, (int32_t)mText, v2, v3),
        CondensedRatio = CondensedScaleSprite__GetCondensedRatio(v6, v7),
        (this = (CondensedScaleSprite_o *)CondensedScaleSprite__get_UISprite(v6, v9)) == 0LL)
    || (this = (CondensedScaleSprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
    sub_1B00F28(this, method);
  }
  v10.fields.y = 1.0;
  v10.fields.z = 1.0;
  v10.fields.x = CondensedRatio;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v10, 0LL);
}


void __fastcall CondensedScaleSprite__Update(CondensedScaleSprite_o *this, const MethodInfo *method)
{
  struct UILabel_o *uiLabel; // x8
  const MethodInfo *v4; // x1

  if ( this->fields.autoUpdate )
  {
    uiLabel = this->fields.uiLabel;
    if ( !uiLabel )
      sub_1B00F28(this, method);
    if ( System_String__op_Inequality(this->fields.previousText, uiLabel->fields.mText, 0LL) )
      CondensedScaleSprite__SetCondensedScale(this, v4);
  }
}


UISprite_o *__fastcall CondensedScaleSprite__get_UISprite(CondensedScaleSprite_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *uiSprite; // x21
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48E3B06 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    byte_48E3B06 = 1;
  }
  uiSprite = (UnityEngine_Object_o *)this->fields.uiSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(uiSprite, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    this->fields.uiSprite = (struct UISprite_o *)Component_object;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.uiSprite, (int32_t)Component_object, v6, v7);
  }
  return this->fields.uiSprite;
}