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
    sub_1C372B4(0);
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
  struct UISprite_o *v7; // x11
  float *p_mTrans; // x8
  float *p_mUpdateFrame; // x9
  float *p_mChildren; // x10
  float *v11; // x11
  struct UISprite_o *frameSetButtonSprite; // x11
  __int64 *v13; // x8
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4C3E600 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_17447/*"btn_bg_20"*/);
    this = (PhotoFrameListViewItemDraw_o *)sub_1C37058(&StringLiteral_17448/*"btn_bg_21"*/);
    byte_4C3E600 = 1;
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
    if ( !byte_4C3D77E )
    {
      sub_1C37058(&LocalizationManager_TypeInfo);
      byte_4C3D77E = 1;
    }
    this = (PhotoFrameListViewItemDraw_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (PhotoFrameListViewItemDraw_o *)LocalizationManager_TypeInfo;
    }
    frameSetButtonSprite = this[2].fields.frameSetButtonSprite;
    p_mTrans = (float *)&frameSetButtonSprite->fields.mTrans;
    p_mUpdateFrame = (float *)&frameSetButtonSprite->fields.mTrans + 1;
    p_mChildren = (float *)&frameSetButtonSprite->fields.mChildren;
    v11 = (float *)&frameSetButtonSprite->fields.mChildren + 1;
    if ( frameNameLabel )
      goto LABEL_19;
LABEL_24:
    sub_1C372B4(this);
  }
LABEL_7:
  if ( !byte_4C3D77F )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    byte_4C3D77F = 1;
  }
  this = (PhotoFrameListViewItemDraw_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (PhotoFrameListViewItemDraw_o *)LocalizationManager_TypeInfo;
  }
  v7 = this[2].fields.frameSetButtonSprite;
  p_mTrans = (float *)&v7->fields.mChanged;
  p_mUpdateFrame = (float *)&v7->fields.mUpdateFrame;
  p_mChildren = (float *)&v7->fields.mAnchorsCached;
  v11 = (float *)(&v7->fields.mAnchorsCached + 4);
  if ( !frameNameLabel )
    goto LABEL_24;
LABEL_19:
  v14.fields.a = *v11;
  v14.fields.b = *p_mChildren;
  v14.fields.g = *p_mUpdateFrame;
  v14.fields.r = *p_mTrans;
  UILabel__set_effectColor(frameNameLabel, v14, 0);
  this = (PhotoFrameListViewItemDraw_o *)v4->fields.frameSetButtonSprite;
  if ( !this )
    goto LABEL_24;
  if ( item->fields._IsSelected_k__BackingField )
    v13 = &StringLiteral_17448/*"btn_bg_21"*/;
  else
    v13 = &StringLiteral_17447/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v13, 0);
}


void PhotoFrameListViewItemDraw__SetInput(
        PhotoFrameListViewItemDraw_o *this,
        PhotoFrameListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x22
  const MethodInfo *v8; // x2
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4C3E5FF & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E5FF = 1;
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
                                                            (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0),
            (Component_object = (UnityEngine_Component_o *)this->fields.button) == 0) )
      {
        sub_1C372B4(Component_object);
      }
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
        Component_object,
        0,
        1,
        Component_object->klass[1]._1.implementedInterfaces);
    }
    PhotoFrameListViewItemDraw__SetButton(this, item, v8);
  }
}


void PhotoFrameListViewItemDraw__SetItem(
        PhotoFrameListViewItemDraw_o *this,
        PhotoFrameListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UISprite_o *frameSampleSprite; // x0
  System_String_o *v8; // x0
  UnityEngine_Object_o *Atlas_k__BackingField; // x22
  System_String_o *v10; // x21
  const MethodInfo *v11; // x2

  if ( (byte_4C3E5FE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_24067/*"thumbnail_"*/);
    byte_4C3E5FE = 1;
  }
  if ( item && mode )
  {
    frameSampleSprite = this->fields.frameSampleSprite;
    if ( frameSampleSprite )
    {
      UISprite__set_atlas(frameSampleSprite, item->fields._Atlas_k__BackingField, 0);
      v8 = System_String__Concat_63561656(
             (System_String_o *)StringLiteral_24067/*"thumbnail_"*/,
             item->fields._SpriteName_k__BackingField,
             0);
      Atlas_k__BackingField = (UnityEngine_Object_o *)item->fields._Atlas_k__BackingField;
      v10 = v8;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(Atlas_k__BackingField, 0, 0) )
        goto LABEL_13;
      frameSampleSprite = (UISprite_o *)item->fields._Atlas_k__BackingField;
      if ( frameSampleSprite )
      {
        if ( !UIAtlas__GetSprite((UIAtlas_o *)frameSampleSprite, v10, 0) )
        {
LABEL_13:
          PhotoFrameListViewItemDraw__SetButton(this, item, v11);
          return;
        }
        frameSampleSprite = this->fields.frameSampleSprite;
        if ( frameSampleSprite )
        {
          UISprite__set_spriteName(frameSampleSprite, v10, 0);
          goto LABEL_13;
        }
      }
    }
    sub_1C372B4(frameSampleSprite);
  }
}