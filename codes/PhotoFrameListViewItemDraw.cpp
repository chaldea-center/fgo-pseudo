void __fastcall PhotoFrameListViewItemDraw___ctor(PhotoFrameListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PhotoFrameListViewItemDraw__SetAtlas(
        PhotoFrameListViewItemDraw_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  UISprite_o *frameSampleSprite; // x0

  frameSampleSprite = this->fields.frameSampleSprite;
  if ( !frameSampleSprite )
    sub_1B4D1EC(0LL, atlas);
  UISprite__set_atlas(frameSampleSprite, atlas, 0LL);
}


void __fastcall PhotoFrameListViewItemDraw__SetButton(
        PhotoFrameListViewItemDraw_o *this,
        PhotoFrameListViewItem_o *item,
        const MethodInfo *method)
{
  PhotoFrameListViewItemDraw_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *frameNameLabel; // x21
  _BOOL4 IsSelected_k__BackingField; // w23
  struct UISprite_o *v9; // x11
  float *p_mTrans; // x8
  float *p_mUpdateFrame; // x9
  float *p_mChildren; // x10
  float *v13; // x11
  struct UISprite_o *frameSetButtonSprite; // x11
  __int64 *v15; // x8
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_49B66BE & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, item);
    sub_1B4CF90(&StringLiteral_17161/*"btn_bg_20"*/, v5);
    this = (PhotoFrameListViewItemDraw_o *)sub_1B4CF90(&StringLiteral_17162/*"btn_bg_21"*/, v6);
    byte_49B66BE = 1;
  }
  if ( !item )
    goto LABEL_24;
  this = (PhotoFrameListViewItemDraw_o *)v4->fields.frameNameLabel;
  if ( !this )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)this, item->fields._Name_k__BackingField, 0LL);
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
    if ( !byte_49B5B12 )
    {
      sub_1B4CF90(&LocalizationManager_TypeInfo, item);
      byte_49B5B12 = 1;
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
    v13 = (float *)&frameSetButtonSprite->fields.mChildren + 1;
    if ( frameNameLabel )
      goto LABEL_19;
LABEL_24:
    sub_1B4D1EC(this, item);
  }
LABEL_7:
  if ( !byte_49B5B13 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, item);
    byte_49B5B13 = 1;
  }
  this = (PhotoFrameListViewItemDraw_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (PhotoFrameListViewItemDraw_o *)LocalizationManager_TypeInfo;
  }
  v9 = this[2].fields.frameSetButtonSprite;
  p_mTrans = (float *)&v9->fields.mChanged;
  p_mUpdateFrame = (float *)&v9->fields.mUpdateFrame;
  p_mChildren = (float *)&v9->fields.mAnchorsCached;
  v13 = (float *)(&v9->fields.mAnchorsCached + 4);
  if ( !frameNameLabel )
    goto LABEL_24;
LABEL_19:
  v16.fields.a = *v13;
  v16.fields.b = *p_mChildren;
  v16.fields.g = *p_mUpdateFrame;
  v16.fields.r = *p_mTrans;
  UILabel__set_effectColor(frameNameLabel, v16, 0LL);
  this = (PhotoFrameListViewItemDraw_o *)v4->fields.frameSetButtonSprite;
  if ( !this )
    goto LABEL_24;
  if ( item->fields._IsSelected_k__BackingField )
    v15 = &StringLiteral_17162/*"btn_bg_21"*/;
  else
    v15 = &StringLiteral_17161/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v15, 0LL);
}


void __fastcall PhotoFrameListViewItemDraw__SetInput(
        PhotoFrameListViewItemDraw_o *this,
        PhotoFrameListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *button; // x22
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_49B66BD & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    byte_49B66BD = 1;
  }
  if ( item )
  {
    button = (UnityEngine_Object_o *)this->fields.button;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.button;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL),
            (Component_object = (UnityEngine_Component_o *)this->fields.button) == 0LL) )
      {
        sub_1B4D1EC(Component_object, v9);
      }
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
        Component_object,
        0LL,
        1LL,
        Component_object->klass[1]._1.interfaceOffsets);
    }
    PhotoFrameListViewItemDraw__SetButton(this, item, v10);
  }
}


void __fastcall PhotoFrameListViewItemDraw__SetItem(
        PhotoFrameListViewItemDraw_o *this,
        PhotoFrameListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UISprite_o *frameSampleSprite; // x0
  System_String_o *v9; // x0
  UnityEngine_Object_o *Atlas_k__BackingField; // x22
  System_String_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_49B66BC & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, item);
    sub_1B4CF90(&StringLiteral_23642/*"thumbnail_"*/, v7);
    byte_49B66BC = 1;
  }
  if ( item && mode )
  {
    frameSampleSprite = this->fields.frameSampleSprite;
    if ( frameSampleSprite )
    {
      UISprite__set_atlas(frameSampleSprite, item->fields._Atlas_k__BackingField, 0LL);
      v9 = System_String__Concat_61093468(
             (System_String_o *)StringLiteral_23642/*"thumbnail_"*/,
             item->fields._SpriteName_k__BackingField,
             0LL);
      Atlas_k__BackingField = (UnityEngine_Object_o *)item->fields._Atlas_k__BackingField;
      v11 = v9;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(Atlas_k__BackingField, 0LL, 0LL) )
        goto LABEL_13;
      frameSampleSprite = (UISprite_o *)item->fields._Atlas_k__BackingField;
      if ( frameSampleSprite )
      {
        if ( !UIAtlas__GetSprite((UIAtlas_o *)frameSampleSprite, v11, 0LL) )
        {
LABEL_13:
          PhotoFrameListViewItemDraw__SetButton(this, item, v12);
          return;
        }
        frameSampleSprite = this->fields.frameSampleSprite;
        if ( frameSampleSprite )
        {
          UISprite__set_spriteName(frameSampleSprite, v11, 0LL);
          goto LABEL_13;
        }
      }
    }
    sub_1B4D1EC(frameSampleSprite, item);
  }
}