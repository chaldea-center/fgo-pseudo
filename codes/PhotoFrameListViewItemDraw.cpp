void PhotoFrameListViewItemDraw___ctor(PhotoFrameListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PhotoFrameListViewItemDraw__SetAtlas(
        PhotoFrameListViewItemDraw_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  UISprite_o *frameSampleSprite; // x0

  frameSampleSprite = this->fields.frameSampleSprite;
  if ( !frameSampleSprite )
    sub_1C93D2C(0, atlas);
  UISprite__set_atlas(frameSampleSprite, atlas, 0);
}


void PhotoFrameListViewItemDraw__SetButton(
        PhotoFrameListViewItemDraw_o *this,
        PhotoFrameListViewItem_o *item,
        const MethodInfo *method)
{
  PhotoFrameListViewItemDraw_o *v4; // x20
  UILabel_o *frameNameLabel; // x21
  _BOOL4 IsSelected_k__BackingField; // w23
  float *v7; // x11
  float *v8; // x8
  float *v9; // x9
  float *v10; // x10
  float *v11; // x11
  float *v12; // x11
  __int64 *v13; // x8
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4D2BE98 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_17578/*"btn_bg_20"*/);
    this = (PhotoFrameListViewItemDraw_o *)sub_1C93AD4(&StringLiteral_17579/*"btn_bg_21"*/);
    byte_4D2BE98 = 1;
  }
  if ( !item )
    goto LABEL_24;
  this = (PhotoFrameListViewItemDraw_o *)v4->fields.frameNameLabel;
  if ( !this )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)this, item->fields._Name_k__BackingField, 0);
  frameNameLabel = v4->fields.frameNameLabel;
  IsSelected_k__BackingField = item->fields._IsSelected_k__BackingField;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( item->fields._IsSelected_k__BackingField )
      goto LABEL_7;
    goto LABEL_14;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !IsSelected_k__BackingField )
  {
LABEL_14:
    if ( !byte_4D2AFDF )
    {
      sub_1C93AD4(&LocalizationManager_TypeInfo);
      byte_4D2AFDF = 1;
    }
    this = (PhotoFrameListViewItemDraw_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (PhotoFrameListViewItemDraw_o *)LocalizationManager_TypeInfo;
    }
    v12 = (float *)*((_QWORD *)this + 23);
    v8 = v12 + 20;
    v9 = v12 + 21;
    v10 = v12 + 22;
    v11 = v12 + 23;
    if ( frameNameLabel )
      goto LABEL_19;
LABEL_24:
    sub_1C93D2C(this, item);
  }
LABEL_7:
  if ( !byte_4D2AFE0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2AFE0 = 1;
  }
  this = (PhotoFrameListViewItemDraw_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (PhotoFrameListViewItemDraw_o *)LocalizationManager_TypeInfo;
  }
  v7 = (float *)*((_QWORD *)this + 23);
  v8 = v7 + 24;
  v9 = v7 + 25;
  v10 = v7 + 26;
  v11 = v7 + 27;
  if ( !frameNameLabel )
    goto LABEL_24;
LABEL_19:
  v14.fields.a = *v11;
  v14.fields.b = *v10;
  v14.fields.g = *v9;
  v14.fields.r = *v8;
  UILabel__set_effectColor(frameNameLabel, v14, 0);
  this = (PhotoFrameListViewItemDraw_o *)v4->fields.frameSetButtonSprite;
  if ( !this )
    goto LABEL_24;
  if ( item->fields._IsSelected_k__BackingField )
    v13 = &StringLiteral_17579/*"btn_bg_21"*/;
  else
    v13 = &StringLiteral_17578/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v13, 0);
}


void PhotoFrameListViewItemDraw__SetInput(
        PhotoFrameListViewItemDraw_o *this,
        PhotoFrameListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4D2BE97 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BE97 = 1;
  }
  if ( item )
  {
    button = (UnityEngine_Object_o *)this->fields.button;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.button;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0),
            (Component_object = (UnityEngine_Component_o *)this->fields.button) == 0) )
      {
        sub_1C93D2C(Component_object, v8);
      }
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
        Component_object,
        0,
        1,
        Component_object->klass[1]._1.implementedInterfaces);
    }
    PhotoFrameListViewItemDraw__SetButton(this, item, v9);
  }
}


void PhotoFrameListViewItemDraw__SetItem(
        PhotoFrameListViewItemDraw_o *this,
        PhotoFrameListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UISprite_o *frameSampleSprite; // x0
  UnityEngine_Object_o *Atlas_k__BackingField; // x21
  const MethodInfo *v9; // x2

  if ( (byte_4D2BE96 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    byte_4D2BE96 = 1;
  }
  if ( item && mode )
  {
    frameSampleSprite = this->fields.frameSampleSprite;
    if ( frameSampleSprite )
    {
      UISprite__set_atlas(frameSampleSprite, item->fields._Atlas_k__BackingField, 0);
      frameSampleSprite = this->fields.frameSampleSprite;
      if ( frameSampleSprite )
      {
        UISprite__set_spriteName(frameSampleSprite, string_TypeInfo->static_fields->Empty, 0);
        Atlas_k__BackingField = (UnityEngine_Object_o *)item->fields._Atlas_k__BackingField;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(Atlas_k__BackingField, 0, 0)
          || System_String__IsNullOrEmpty(item->fields._ThumbnailSpriteName_k__BackingField, 0) )
        {
          goto LABEL_13;
        }
        frameSampleSprite = this->fields.frameSampleSprite;
        if ( frameSampleSprite )
        {
          UISprite__set_spriteName(frameSampleSprite, item->fields._ThumbnailSpriteName_k__BackingField, 0);
LABEL_13:
          PhotoFrameListViewItemDraw__SetButton(this, item, v9);
          return;
        }
      }
    }
    sub_1C93D2C(frameSampleSprite, item);
  }
}