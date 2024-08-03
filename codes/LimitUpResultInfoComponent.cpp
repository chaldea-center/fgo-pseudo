void __fastcall LimitUpResultInfoComponent___ctor(LimitUpResultInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall LimitUpResultInfoComponent__Awake(LimitUpResultInfoComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall LimitUpResultInfoComponent__Open(
        LimitUpResultInfoComponent_o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x20
  __int64 v9; // x1
  UnityEngine_Transform_o *v10; // x20
  __int64 v11; // x1
  UnityEngine_Transform_o *v12; // x20
  __int64 v13; // x1
  UnityEngine_Transform_o *v14; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetParent(gameObject, (UnityEngine_Component_o *)parent, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v8 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F7111 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v7);
    byte_49F7111 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_position(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v10 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F7111 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v9);
    byte_49F7111 = 1;
  }
  if ( !v10 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v12 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F7111 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v11);
    byte_49F7111 = 1;
  }
  if ( !v12 )
    goto LABEL_15;
  UnityEngine_Transform__set_eulerAngles(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v14 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F7116 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v13);
    byte_49F7116 = 1;
  }
  if ( !v14
    || (UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_15:
    sub_1B64324(transform);
  }
  UnityEngine_GameObject__SetActive(transform, 1, 0LL);
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

  if ( (byte_49FFC90 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, title);
    sub_1B640C8(&StringLiteral_21035/*"line_whiteAlpha"*/, v7);
    byte_49FFC90 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, title, 0LL), (titleLabel = this->fields.detailLabel) == 0LL)
    || (WrapControlText__textAdjust(titleLabel, detail, titleLabel->fields.mFontSize, 0, 0, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64324(titleLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  lineSprite = this->fields.lineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(lineSprite, (System_String_o *)StringLiteral_21035/*"line_whiteAlpha"*/, 0LL);
}