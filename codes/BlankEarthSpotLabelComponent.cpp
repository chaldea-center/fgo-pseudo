void BlankEarthSpotLabelComponent___ctor(BlankEarthSpotLabelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BlankEarthSpotLabelComponent__SetupNameBgSprite(BlankEarthSpotLabelComponent_o *this, const MethodInfo *method)
{
  UISprite_o *nameBgSprite; // x19

  if ( (byte_4D2D0BA & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_20818/*"img_spotname_bg"*/);
    byte_4D2D0BA = 1;
  }
  nameBgSprite = this->fields.nameBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(nameBgSprite, (System_String_o *)StringLiteral_20818/*"img_spotname_bg"*/, 0);
}


void BlankEarthSpotLabelComponent__SetupNameLabel(
        BlankEarthSpotLabelComponent_o *this,
        System_String_o *spotNameText,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  UILabel_o *nameLabel; // x0
  float z; // s8
  float y; // s9
  float x; // s10
  struct UILabel_o *v9; // x8
  int v10; // w8
  int v11; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  nameLabel = this->fields.nameLabel;
  if ( !nameLabel
    || (z = position.fields.z,
        y = position.fields.y,
        x = position.fields.x,
        UILabel__set_text(nameLabel, spotNameText, 0),
        (v9 = this->fields.nameLabel) == 0)
    || (nameLabel = (UILabel_o *)this->fields.nameBgSprite, v10 = v9->fields.mWidth + (v9->fields.mWidth < 0),
                                                            !nameLabel) )
  {
    sub_1C93D2C(nameLabel, spotNameText);
  }
  v11 = v10 >> 1;
  if ( v11 <= -10 )
    v11 = -10;
  UIWidget__set_width((UIWidget_o *)nameLabel, v11 + 50, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.x = x;
  GameObjectExtensions__SetLocalPosition(gameObject, v13, 0);
}