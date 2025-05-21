void __fastcall StaffSelectListViewItemDraw___ctor(StaffSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StaffSelectListViewItemDraw__SetDisp(
        StaffSelectListViewItemDraw_o *this,
        StaffSelectListViewItem_o *item,
        const MethodInfo *method)
{
  StaffSelectListViewItem_o *v3; // x19
  StaffSelectListViewItemDraw_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct StaffPhotoEntity_o *StaffPhotoEntity_k__BackingField; // x8
  UIRangeLabel_o *nameLabel; // x21
  _BOOL4 IsSelected_k__BackingField; // w23
  struct UILabel_o *v13; // x11
  float *p_mTrans; // x8
  float *p_mUpdateFrame; // x9
  float *p_mChildren; // x10
  float *v17; // x11
  struct UILabel_o *noSelectLabel; // x11
  float v19; // s0
  float v20; // s3
  float v21; // s1
  float v22; // s2
  __int64 *v23; // x8
  UnityEngine_Object_o *PhotoCampaignAtlas_k__BackingField; // x21
  struct StaffPhotoEntity_o *v25; // x8
  struct StaffPhotoEntity_o *v26; // x8
  UILabel_o *v27; // x21
  __int64 v28; // x1
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = item;
  v4 = this;
  if ( (byte_4B4014C & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, item);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&string_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_17464/*"btn_bg_20"*/, v7);
    sub_1BDB878(&StringLiteral_12269/*"STAFF_NO_SELECT_WARNING"*/, v8);
    this = (StaffSelectListViewItemDraw_o *)sub_1BDB878(&StringLiteral_17465/*"btn_bg_21"*/, v9);
    byte_4B4014C = 1;
  }
  if ( !v3 )
    goto LABEL_49;
  StaffPhotoEntity_k__BackingField = v3->fields._StaffPhotoEntity_k__BackingField;
  if ( !StaffPhotoEntity_k__BackingField )
    goto LABEL_49;
  this = (StaffSelectListViewItemDraw_o *)v4->fields.nameLabel;
  if ( !this )
    goto LABEL_49;
  UIRangeLabel__Set((UIRangeLabel_o *)this, StaffPhotoEntity_k__BackingField->fields.staffName, 0LL, 1, 0, 0, 0LL);
  nameLabel = v4->fields.nameLabel;
  IsSelected_k__BackingField = v3->fields._IsSelected_k__BackingField;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v3->fields._IsSelected_k__BackingField )
      goto LABEL_8;
    goto LABEL_15;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !IsSelected_k__BackingField )
  {
LABEL_15:
    if ( !byte_4B3F3AF )
    {
      sub_1BDB878(&LocalizationManager_TypeInfo, item);
      byte_4B3F3AF = 1;
    }
    this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
    }
    noSelectLabel = this[2].fields.noSelectLabel;
    p_mTrans = (float *)&noSelectLabel->fields.mTrans;
    p_mUpdateFrame = (float *)&noSelectLabel->fields.mTrans + 1;
    p_mChildren = (float *)&noSelectLabel->fields.mChildren;
    v17 = (float *)&noSelectLabel->fields.mChildren + 1;
    if ( nameLabel )
      goto LABEL_20;
LABEL_49:
    sub_1BDBAD4(this, item);
  }
LABEL_8:
  if ( !byte_4B3F3B0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, item);
    byte_4B3F3B0 = 1;
  }
  this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
  }
  v13 = this[2].fields.noSelectLabel;
  p_mTrans = (float *)&v13->fields.mChanged;
  p_mUpdateFrame = (float *)&v13->fields.mUpdateFrame;
  p_mChildren = (float *)&v13->fields.mAnchorsCached;
  v17 = (float *)(&v13->fields.mAnchorsCached + 4);
  if ( !nameLabel )
    goto LABEL_49;
LABEL_20:
  v29.fields.a = *v17;
  v29.fields.b = *p_mChildren;
  v29.fields.g = *p_mUpdateFrame;
  v29.fields.r = *p_mTrans;
  UIRangeLabel__set_effectColor(nameLabel, v29, 0LL);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.nameLabel;
  v19 = 0.5;
  if ( !v3->fields._IsNotSelect_k__BackingField )
    v19 = 1.0;
  if ( !this )
    goto LABEL_49;
  v20 = 1.0;
  v21 = v19;
  v22 = v19;
  UIRangeLabel__set_color((UIRangeLabel_o *)this, *(UnityEngine_Color_o *)&v19, 0LL);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.setButtonSprite;
  if ( !this )
    goto LABEL_49;
  if ( v3->fields._IsSelected_k__BackingField )
    v23 = &StringLiteral_17465/*"btn_bg_21"*/;
  else
    v23 = &StringLiteral_17464/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v23, 0LL);
  PhotoCampaignAtlas_k__BackingField = (UnityEngine_Object_o *)v3->fields._PhotoCampaignAtlas_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (StaffSelectListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                            PhotoCampaignAtlas_k__BackingField,
                                            0LL,
                                            0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v25 = v3->fields._StaffPhotoEntity_k__BackingField;
    if ( !v25 )
      goto LABEL_49;
    this = (StaffSelectListViewItemDraw_o *)v3->fields._PhotoCampaignAtlas_k__BackingField;
    if ( !this )
      goto LABEL_49;
    this = (StaffSelectListViewItemDraw_o *)UIAtlas__GetSprite((UIAtlas_o *)this, v25->fields.spriteName, 0LL);
    if ( this )
    {
      this = (StaffSelectListViewItemDraw_o *)v4->fields.iconSprite;
      if ( !this )
        goto LABEL_49;
      UISprite__set_atlas((UISprite_o *)this, v3->fields._PhotoCampaignAtlas_k__BackingField, 0LL);
      v26 = v3->fields._StaffPhotoEntity_k__BackingField;
      if ( !v26 )
        goto LABEL_49;
      this = (StaffSelectListViewItemDraw_o *)v4->fields.iconSprite;
      if ( !this )
        goto LABEL_49;
      UISprite__set_spriteName((UISprite_o *)this, v26->fields.spriteName, 0LL);
    }
  }
  v27 = v4->fields.noSelectLabel;
  if ( v3->fields._IsNotSelect_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (StaffSelectListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12269/*"STAFF_NO_SELECT_WARNING"*/, 0LL);
    item = (StaffSelectListViewItem_o *)this;
    if ( !v27 )
      goto LABEL_49;
  }
  else
  {
    item = (StaffSelectListViewItem_o *)string_TypeInfo->static_fields->Empty;
    if ( !v27 )
      goto LABEL_49;
  }
  UILabel__set_text(v27, (System_String_o *)item, 0LL);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.baseButton;
  if ( !this )
    goto LABEL_49;
  ((void (__fastcall *)(StaffSelectListViewItemDraw_o *, bool, void *))this->klass[1]._1.namespaze)(
    this,
    !v3->fields._IsNotSelect_k__BackingField,
    this->klass[1]._1.byval_arg.data);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.baseButton;
  if ( !this )
    goto LABEL_49;
  if ( v3->fields._IsNotSelect_k__BackingField )
    v28 = 3LL;
  else
    v28 = 0LL;
  ((void (__fastcall *)(StaffSelectListViewItemDraw_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    v28,
    1LL,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall StaffSelectListViewItemDraw__SetInput(
        StaffSelectListViewItemDraw_o *this,
        StaffSelectListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x22
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4B4014B & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    byte_4B4014B = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) && !item->fields._IsNotSelect_k__BackingField )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL),
            (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
      {
        sub_1BDBAD4(Component_object, v9);
      }
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
        Component_object,
        0LL,
        1LL,
        Component_object->klass[1]._1.interfaceOffsets);
    }
    StaffSelectListViewItemDraw__SetDisp(this, item, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StaffSelectListViewItemDraw__SetItem(
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