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
  int v7; // s0
  UnityEngine_Transform_o *v10; // x20
  int v11; // s0
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  UnityEngine_Transform_o *v18; // x20
  int v19; // s0
  UnityEngine_GameObject_o *v22; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetParent(gameObject, (UnityEngine_Component_o *)parent, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_7;
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v7, 0LL);
  v10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v10 )
    goto LABEL_7;
  UnityEngine_Transform__set_localPosition(v10, *(UnityEngine_Vector3_o *)&v11, 0LL);
  v14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v14
    || (UnityEngine_Transform__set_eulerAngles(v14, *(UnityEngine_Vector3_o *)&v15, 0LL),
        v18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL),
        !v18)
    || (UnityEngine_Transform__set_localScale(v18, *(UnityEngine_Vector3_o *)&v19, 0LL),
        (v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_7:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v22, 1, 0LL);
}


void __fastcall LimitUpResultInfoComponent__Setup(
        LimitUpResultInfoComponent_o *this,
        System_String_o *title,
        System_String_o *detail,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UILabel_o *titleLabel; // x0
  struct UILabel_o *detailLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *lineSprite; // x19

  if ( (byte_40FCC36 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, title);
    sub_B16FFC(&StringLiteral_20151/*"line_whiteAlpha"*/, v7);
    byte_40FCC36 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, title, 0LL), (detailLabel = this->fields.detailLabel) == 0LL)
    || (WrapControlText__textAdjust(detailLabel, detail, detailLabel->fields.mFontSize, 0, 0, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  lineSprite = this->fields.lineSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(lineSprite, (System_String_o *)StringLiteral_20151/*"line_whiteAlpha"*/, 0LL);
}