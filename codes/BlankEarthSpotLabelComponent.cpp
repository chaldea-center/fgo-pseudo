void BlankEarthSpotLabelComponent___ctor(BlankEarthSpotLabelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BlankEarthSpotLabelComponent__SetupNameBgSprite(BlankEarthSpotLabelComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UISprite_o *nameBgSprite; // x19

  if ( (byte_596CE3E & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_21579/*"img_spotname_bg"*/);
    byte_596CE3E = 1;
  }
  nameBgSprite = this->fields.nameBgSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
  AtlasManager__SetEventUI(nameBgSprite, (System_String_o *)StringLiteral_21579/*"img_spotname_bg"*/, 0);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  nameLabel = this->fields.nameLabel;
  if ( !nameLabel
    || (z = position.fields.z,
        y = position.fields.y,
        x = position.fields.x,
        UILabel__set_text(nameLabel, spotNameText, 0),
        (v9 = this->fields.nameLabel) == 0)
    || (nameLabel = (UILabel_o *)this->fields.nameBgSprite) == 0 )
  {
    sub_2213CDC(nameLabel, spotNameText);
  }
  v10 = v9->fields.mWidth / 2;
  if ( v10 <= -10 )
    v10 = -10;
  UIWidget__set_width((UIWidget_o *)nameLabel, v10 + 50, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12.fields.y = y;
  v12.fields.z = z;
  v12.fields.x = x;
  GameObjectExtensions__SetLocalPosition(gameObject, v12, 0);
}