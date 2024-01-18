void __fastcall LimitUpResultInfoComponent___ctor(LimitUpResultInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall LimitUpResultInfoComponent__Awake(LimitUpResultInfoComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitUpResultInfoComponent__Open(
        LimitUpResultInfoComponent_o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_GameObject_o *v7; // x0
  __int64 v8; // x1
  int v9; // s0
  UnityEngine_Transform_o *v12; // x20
  int v13; // s0
  UnityEngine_Transform_o *v16; // x20
  int v17; // s0
  UnityEngine_Transform_o *v20; // x20
  int v21; // s0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetParent(gameObject, (UnityEngine_Component_o *)parent, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_7;
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v9, 0LL);
  v12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v12 )
    goto LABEL_7;
  UnityEngine_Transform__set_localPosition(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
  v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v16
    || (UnityEngine_Transform__set_eulerAngles(v16, *(UnityEngine_Vector3_o *)&v17, 0LL),
        v20 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_one(0LL),
        !v20)
    || (UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&v21, 0LL),
        (v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_7:
    sub_B2C434(v7, v8);
  }
  UnityEngine_GameObject__SetActive(v7, 1, 0LL);
}


void __fastcall LimitUpResultInfoComponent__Setup(
        LimitUpResultInfoComponent_o *this,
        System_String_o *title,
        System_String_o *detail,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UILabel_o *titleLabel; // x0
  UISprite_o *lineSprite; // x19

  if ( (byte_418712F & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, title);
    sub_B2C35C(&StringLiteral_20234/*"line_whiteAlpha"*/, v7);
    byte_418712F = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, title, 0LL), (titleLabel = this->fields.detailLabel) == 0LL)
    || (WrapControlText__textAdjust(titleLabel, detail, titleLabel->fields.mFontSize, 0, 0, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(titleLabel, title);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  lineSprite = this->fields.lineSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(lineSprite, (System_String_o *)StringLiteral_20234/*"line_whiteAlpha"*/, 0LL);
}