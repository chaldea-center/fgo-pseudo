void StaffSelectListViewItemDraw___ctor(StaffSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void StaffSelectListViewItemDraw__SetDisp(
        StaffSelectListViewItemDraw_o *this,
        StaffSelectListViewItem_o *item,
        const MethodInfo *method)
{
  StaffSelectListViewItem_o *v3; // x19
  StaffSelectListViewItemDraw_o *v4; // x20
  struct StaffPhotoEntity_o *StaffPhotoEntity_k__BackingField; // x8
  __int64 v6; // x2
  UIRangeLabel_o *nameLabel; // x21
  int v8; // w8
  struct UILabel_o *v9; // x11
  float *p_mTrans; // x8
  float *p_mUpdateFrame; // x9
  float *p_mChildren; // x10
  float *v13; // x11
  struct UILabel_o *noSelectLabel; // x11
  float v15; // s0 OVERLAPPED
  float v16; // s3
  float v17; // s1
  float v18; // s2
  __int64 *v19; // x8
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *PhotoCampaignAtlas_k__BackingField; // x21
  __int64 v23; // x2
  struct StaffPhotoEntity_o *v24; // x8
  struct StaffPhotoEntity_o *v25; // x8
  UILabel_o *v26; // x21
  __int64 v27; // x1
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = item;
  v4 = this;
  if ( (byte_596BC74 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18209/*"btn_bg_20"*/);
    sub_2213A60(&StringLiteral_12820/*"STAFF_NO_SELECT_WARNING"*/);
    this = (StaffSelectListViewItemDraw_o *)sub_2213A60(&StringLiteral_18211/*"btn_bg_21"*/);
    byte_596BC74 = 1;
  }
  if ( !v3 )
    goto LABEL_50;
  StaffPhotoEntity_k__BackingField = v3->fields._StaffPhotoEntity_k__BackingField;
  if ( !StaffPhotoEntity_k__BackingField )
    goto LABEL_50;
  this = (StaffSelectListViewItemDraw_o *)v4->fields.nameLabel;
  if ( !this )
    goto LABEL_50;
  UIRangeLabel__Set((UIRangeLabel_o *)this, StaffPhotoEntity_k__BackingField->fields.staffName, 0, 1, 0, 0, 0);
  nameLabel = v4->fields.nameLabel;
  v8 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( !v3->fields._IsSelected_k__BackingField )
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v6);
    if ( !byte_596ABD5 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596ABD5 = 1;
    }
    this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v6);
      this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
    }
    noSelectLabel = this[2].fields.noSelectLabel;
    p_mTrans = (float *)&noSelectLabel->fields.mTrans;
    p_mUpdateFrame = (float *)&noSelectLabel->fields.mTrans + 1;
    p_mChildren = (float *)&noSelectLabel->fields.mChildren;
    v13 = (float *)&noSelectLabel->fields.mChildren + 1;
    if ( nameLabel )
      goto LABEL_22;
LABEL_50:
    sub_2213CDC(this, item);
  }
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v6);
  if ( !byte_596ABD6 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596ABD6 = 1;
  }
  this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v6);
    this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
  }
  v9 = this[2].fields.noSelectLabel;
  p_mTrans = (float *)&v9->fields.mChanged;
  p_mUpdateFrame = (float *)&v9->fields.mUpdateFrame;
  p_mChildren = (float *)&v9->fields.mAnchorsCached;
  v13 = (float *)(&v9->fields.mAnchorsCached + 4);
  if ( !nameLabel )
    goto LABEL_50;
LABEL_22:
  v28.fields.a = *v13;
  v28.fields.b = *p_mChildren;
  v28.fields.g = *p_mUpdateFrame;
  v28.fields.r = *p_mTrans;
  UIRangeLabel__set_effectColor(nameLabel, v28, 0);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.nameLabel;
  if ( !this )
    goto LABEL_50;
  v15 = 0.5;
  v16 = 1.0;
  if ( !v3->fields._IsNotSelect_k__BackingField )
    v15 = 1.0;
  v17 = v15;
  v18 = v15;
  UIRangeLabel__set_color((UIRangeLabel_o *)this, *(UnityEngine_Color_o *)&v15, 0);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.setButtonSprite;
  if ( !this )
    goto LABEL_50;
  v19 = &StringLiteral_18209/*"btn_bg_20"*/;
  if ( v3->fields._IsSelected_k__BackingField )
    v19 = &StringLiteral_18211/*"btn_bg_21"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v19, 0);
  PhotoCampaignAtlas_k__BackingField = (UnityEngine_Object_o *)v3->fields._PhotoCampaignAtlas_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  this = (StaffSelectListViewItemDraw_o *)UnityEngine_Object__op_Inequality(PhotoCampaignAtlas_k__BackingField, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v24 = v3->fields._StaffPhotoEntity_k__BackingField;
    if ( !v24 )
      goto LABEL_50;
    this = (StaffSelectListViewItemDraw_o *)v3->fields._PhotoCampaignAtlas_k__BackingField;
    if ( !this )
      goto LABEL_50;
    this = (StaffSelectListViewItemDraw_o *)UIAtlas__GetSprite((UIAtlas_o *)this, v24->fields.spriteName, 0);
    if ( this )
    {
      this = (StaffSelectListViewItemDraw_o *)v4->fields.iconSprite;
      if ( !this )
        goto LABEL_50;
      UISprite__set_atlas((UISprite_o *)this, v3->fields._PhotoCampaignAtlas_k__BackingField, 0);
      v25 = v3->fields._StaffPhotoEntity_k__BackingField;
      if ( !v25 )
        goto LABEL_50;
      this = (StaffSelectListViewItemDraw_o *)v4->fields.iconSprite;
      if ( !this )
        goto LABEL_50;
      UISprite__set_spriteName((UISprite_o *)this, v25->fields.spriteName, 0);
    }
  }
  v26 = v4->fields.noSelectLabel;
  if ( v3->fields._IsNotSelect_k__BackingField )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v23);
    this = (StaffSelectListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12820/*"STAFF_NO_SELECT_WARNING"*/, 0);
    item = (StaffSelectListViewItem_o *)this;
    if ( !v26 )
      goto LABEL_50;
  }
  else
  {
    item = **(StaffSelectListViewItem_o ***)(qword_5984390 + 184);
    if ( !v26 )
      goto LABEL_50;
  }
  UILabel__set_text(v26, (System_String_o *)item, 0);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.baseButton;
  if ( !this )
    goto LABEL_50;
  ((void (__fastcall *)(StaffSelectListViewItemDraw_o *, bool, const char *))this->klass[1]._1.name)(
    this,
    !v3->fields._IsNotSelect_k__BackingField,
    this->klass[1]._1.namespaze);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.baseButton;
  if ( !this )
    goto LABEL_50;
  if ( v3->fields._IsNotSelect_k__BackingField )
    v27 = 3;
  else
    v27 = 0;
  ((void (__fastcall *)(StaffSelectListViewItemDraw_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    v27,
    1,
    this->klass[1]._1.implementedInterfaces);
}


// local variable allocation has failed, the output may be wrong!
void StaffSelectListViewItemDraw__SetInput(
        StaffSelectListViewItemDraw_o *this,
        StaffSelectListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_596BC73 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BC73 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInput);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) && !item->fields._IsNotSelect_k__BackingField )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0),
            (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0) )
      {
        sub_2213CDC(Component_object, v8);
      }
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
        Component_object,
        0,
        1,
        Component_object->klass[1]._1.implementedInterfaces);
    }
    StaffSelectListViewItemDraw__SetDisp(this, item, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void StaffSelectListViewItemDraw__SetItem(
        StaffSelectListViewItemDraw_o *this,
        StaffSelectListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  if ( item )
  {
    if ( mode )
      StaffSelectListViewItemDraw__SetDisp(this, item, *(const MethodInfo **)&mode);
  }
}