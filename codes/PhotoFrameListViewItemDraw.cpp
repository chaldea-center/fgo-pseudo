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
    sub_2213CDC(0, atlas);
  UISprite__set_atlas(frameSampleSprite, atlas, 0);
}


void PhotoFrameListViewItemDraw__SetButton(
        PhotoFrameListViewItemDraw_o *this,
        PhotoFrameListViewItem_o *item,
        const MethodInfo *method)
{
  PhotoFrameListViewItemDraw_o *v4; // x20
  __int64 v5; // x2
  UILabel_o *frameNameLabel; // x21
  int v7; // w8
  float *v8; // x11
  float *v9; // x8
  float *v10; // x9
  float *v11; // x10
  float *v12; // x11
  float *v13; // x11
  __int64 *v14; // x8
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_596BBF6 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_18209/*"btn_bg_20"*/);
    this = (PhotoFrameListViewItemDraw_o *)sub_2213A60(&StringLiteral_18211/*"btn_bg_21"*/);
    byte_596BBF6 = 1;
  }
  if ( !item )
    goto LABEL_25;
  this = (PhotoFrameListViewItemDraw_o *)v4->fields.frameNameLabel;
  if ( !this )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)this, item->fields._Name_k__BackingField, 0);
  frameNameLabel = v4->fields.frameNameLabel;
  v7 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( !item->fields._IsSelected_k__BackingField )
  {
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v5);
    if ( !byte_596ABD5 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596ABD5 = 1;
    }
    this = (PhotoFrameListViewItemDraw_o *)LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v5);
      this = (PhotoFrameListViewItemDraw_o *)LocalizationManager_TypeInfo;
    }
    v13 = (float *)*((_QWORD *)this + 23);
    v9 = v13 + 20;
    v10 = v13 + 21;
    v11 = v13 + 22;
    v12 = v13 + 23;
    if ( frameNameLabel )
      goto LABEL_21;
LABEL_25:
    sub_2213CDC(this, item);
  }
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v5);
  if ( !byte_596ABD6 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596ABD6 = 1;
  }
  this = (PhotoFrameListViewItemDraw_o *)LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v5);
    this = (PhotoFrameListViewItemDraw_o *)LocalizationManager_TypeInfo;
  }
  v8 = (float *)*((_QWORD *)this + 23);
  v9 = v8 + 24;
  v10 = v8 + 25;
  v11 = v8 + 26;
  v12 = v8 + 27;
  if ( !frameNameLabel )
    goto LABEL_25;
LABEL_21:
  v15.fields.a = *v12;
  v15.fields.b = *v11;
  v15.fields.g = *v10;
  v15.fields.r = *v9;
  UILabel__set_effectColor(frameNameLabel, v15, 0);
  this = (PhotoFrameListViewItemDraw_o *)v4->fields.frameSetButtonSprite;
  if ( !this )
    goto LABEL_25;
  v14 = &StringLiteral_18209/*"btn_bg_20"*/;
  if ( item->fields._IsSelected_k__BackingField )
    v14 = &StringLiteral_18211/*"btn_bg_21"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v14, 0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_596BBF5 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BBF5 = 1;
  }
  if ( item )
  {
    button = (UnityEngine_Object_o *)this->fields.button;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInput);
    if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.button;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0),
            (Component_object = (UnityEngine_Component_o *)this->fields.button) == 0) )
      {
        sub_2213CDC(Component_object, v8);
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
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *Atlas_k__BackingField; // x21
  const MethodInfo *v11; // x2

  if ( (byte_596BBF4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BBF4 = 1;
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
        UISprite__set_spriteName(frameSampleSprite, **(System_String_o ***)(qword_5984390 + 184), 0);
        Atlas_k__BackingField = (UnityEngine_Object_o *)item->fields._Atlas_k__BackingField;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
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
          PhotoFrameListViewItemDraw__SetButton(this, item, v11);
          return;
        }
      }
    }
    sub_2213CDC(frameSampleSprite, item);
  }
}