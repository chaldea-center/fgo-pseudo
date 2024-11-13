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
  __int64 v8; // x2
  UnityEngine_Transform_o *v9; // x20
  __int64 v10; // x2
  UnityEngine_Transform_o *v11; // x20
  __int64 v12; // x2
  UnityEngine_Transform_o *v13; // x20
  __int64 v14; // x2
  UnityEngine_Transform_o *v15; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetParent(gameObject, (UnityEngine_Component_o *)parent, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v9 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C1 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v7, v8);
    byte_4B109C1 = 1;
  }
  if ( !v9 )
    goto LABEL_15;
  UnityEngine_Transform__set_position(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v11 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C1 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v7, v10);
    byte_4B109C1 = 1;
  }
  if ( !v11 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v13 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C1 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v7, v12);
    byte_4B109C1 = 1;
  }
  if ( !v13 )
    goto LABEL_15;
  UnityEngine_Transform__set_eulerAngles(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v15 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C6 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v7, v14);
    byte_4B109C6 = 1;
  }
  if ( !v15
    || (UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(transform, v7);
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
  __int64 v8; // x2
  UILabel_o *titleLabel; // x0
  __int64 v10; // x1
  UISprite_o *lineSprite; // x19

  if ( (byte_4B19BCA & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, title, detail);
    sub_1BCA7E0(&StringLiteral_21343/*"line_whiteAlpha"*/, v7, v8);
    byte_4B19BCA = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, title, 0LL), (titleLabel = this->fields.detailLabel) == 0LL)
    || (WrapControlText__textAdjust(titleLabel, detail, titleLabel->fields.mFontSize, 0, 0, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(titleLabel, title);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  lineSprite = this->fields.lineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
  AtlasManager__SetEventUI(lineSprite, (System_String_o *)StringLiteral_21343/*"line_whiteAlpha"*/, 0LL);
}