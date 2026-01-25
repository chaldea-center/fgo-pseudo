void LimitUpResultInfoComponent___ctor(LimitUpResultInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void LimitUpResultInfoComponent__Awake(LimitUpResultInfoComponent_o *this, const MethodInfo *method)
{
  ;
}


void LimitUpResultInfoComponent__Open(
        LimitUpResultInfoComponent_o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_Transform_o *v11; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetParent(gameObject, (UnityEngine_Component_o *)parent, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v8 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4CE7E59 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  if ( !v8 )
    goto LABEL_16;
  UnityEngine_Transform__set_position(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v9 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4CE7E59 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  if ( !v9 )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v10 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4CE7E59 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  if ( !v10 )
    goto LABEL_16;
  UnityEngine_Transform__set_eulerAngles(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v11 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4CE7E5E )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v11
    || (UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0)
    || (UnityEngine_GameObject__SetActive(transform, 1, 0),
        (transform = (UnityEngine_GameObject_o *)this->fields.detailLabel) == 0) )
  {
LABEL_16:
    sub_1C7BD40(transform, v7);
  }
  UIWidget__ResizeCollider((UIWidget_o *)transform, 0);
}


void LimitUpResultInfoComponent__Setup(
        LimitUpResultInfoComponent_o *this,
        System_String_o *title,
        System_String_o *detail,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UISprite_o *lineSprite; // x19

  if ( (byte_4CF27EB & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_21446/*"line_whiteAlpha"*/);
    byte_4CF27EB = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, title, 0), (titleLabel = this->fields.detailLabel) == 0)
    || (WrapControlText__textAdjust(titleLabel, detail, titleLabel->fields.mFontSize, titleLabel->fields.mFontSize, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C7BD40(titleLabel, title);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  lineSprite = this->fields.lineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(lineSprite, (System_String_o *)StringLiteral_21446/*"line_whiteAlpha"*/, 0);
}