void __fastcall StaffCostumeSelectListViewItemDraw___ctor(
        StaffCostumeSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StaffCostumeSelectListViewItemDraw__SetDisp(
        StaffCostumeSelectListViewItemDraw_o *this,
        StaffCostumeSelectListViewItem_o *item,
        const MethodInfo *method)
{
  StaffCostumeSelectListViewItemDraw_o **v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct StaffPhotoCostumeEntity_o *StaffPhotoCostumeEntity_k__BackingField; // x8
  UIRangeLabel_o *v9; // x21
  _BOOL4 IsSelected_k__BackingField; // w23
  struct UISprite_o *v11; // x11
  float *p_mTrans; // x8
  float *p_mUpdateFrame; // x9
  float *p_mChildren; // x10
  float *v15; // x11
  struct UISprite_o *iconSprite; // x11
  __int64 *v17; // x8
  UnityEngine_Object_o *PhotoCampaignAtlas_k__BackingField; // x21
  struct StaffPhotoCostumeEntity_o *v19; // x8
  struct StaffPhotoCostumeEntity_o *v20; // x8
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = (StaffCostumeSelectListViewItemDraw_o **)this;
  if ( (byte_4C1D824 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, item);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_17813/*"commandCodeId"*/, v6);
    this = (StaffCostumeSelectListViewItemDraw_o *)sub_1C3B764(&StringLiteral_17814/*"commandSpell/use"*/, v7);
    byte_4C1D824 = 1;
  }
  if ( !item )
    goto LABEL_35;
  StaffPhotoCostumeEntity_k__BackingField = item->fields._StaffPhotoCostumeEntity_k__BackingField;
  if ( !StaffPhotoCostumeEntity_k__BackingField )
    goto LABEL_35;
  this = v4[4];
  if ( !this )
    goto LABEL_35;
  UIRangeLabel__Set((UIRangeLabel_o *)this, StaffPhotoCostumeEntity_k__BackingField->fields.costumeName, 0LL, 1, 0, 0LL);
  v9 = (UIRangeLabel_o *)v4[4];
  IsSelected_k__BackingField = item->fields._IsSelected_k__BackingField;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( item->fields._IsSelected_k__BackingField )
      goto LABEL_8;
    goto LABEL_15;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !IsSelected_k__BackingField )
  {
LABEL_15:
    if ( !byte_4C1CCC2 )
    {
      sub_1C3B764(&LocalizationManager_TypeInfo, item);
      byte_4C1CCC2 = 1;
    }
    this = (StaffCostumeSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (StaffCostumeSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
    }
    iconSprite = this[2].fields.iconSprite;
    p_mTrans = (float *)&iconSprite->fields.mTrans;
    p_mUpdateFrame = (float *)&iconSprite->fields.mTrans + 1;
    p_mChildren = (float *)&iconSprite->fields.mChildren;
    v15 = (float *)&iconSprite->fields.mChildren + 1;
    if ( v9 )
      goto LABEL_20;
LABEL_35:
    sub_1C3B9C0(this, item);
  }
LABEL_8:
  if ( !byte_4C1CCC3 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, item);
    byte_4C1CCC3 = 1;
  }
  this = (StaffCostumeSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (StaffCostumeSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
  }
  v11 = this[2].fields.iconSprite;
  p_mTrans = (float *)&v11->fields.mChanged;
  p_mUpdateFrame = (float *)&v11->fields.mUpdateFrame;
  p_mChildren = (float *)&v11->fields.mAnchorsCached;
  v15 = (float *)(&v11->fields.mAnchorsCached + 4);
  if ( !v9 )
    goto LABEL_35;
LABEL_20:
  v21.fields.a = *v15;
  v21.fields.b = *p_mChildren;
  v21.fields.g = *p_mUpdateFrame;
  v21.fields.r = *p_mTrans;
  UIRangeLabel__set_effectColor(v9, v21, 0LL);
  this = v4[6];
  if ( !this )
    goto LABEL_35;
  if ( item->fields._IsSelected_k__BackingField )
    v17 = &StringLiteral_17814/*"commandSpell/use"*/;
  else
    v17 = &StringLiteral_17813/*"commandCodeId"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v17, 0LL);
  PhotoCampaignAtlas_k__BackingField = (UnityEngine_Object_o *)item->fields._PhotoCampaignAtlas_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (StaffCostumeSelectListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                   PhotoCampaignAtlas_k__BackingField,
                                                   0LL,
                                                   0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v19 = item->fields._StaffPhotoCostumeEntity_k__BackingField;
    if ( !v19 )
      goto LABEL_35;
    this = (StaffCostumeSelectListViewItemDraw_o *)item->fields._PhotoCampaignAtlas_k__BackingField;
    if ( !this )
      goto LABEL_35;
    if ( UIAtlas__GetSprite((UIAtlas_o *)this, v19->fields.spriteName, 0LL) )
    {
      this = v4[7];
      if ( !this )
        goto LABEL_35;
      UISprite__set_atlas((UISprite_o *)this, item->fields._PhotoCampaignAtlas_k__BackingField, 0LL);
      v20 = item->fields._StaffPhotoCostumeEntity_k__BackingField;
      if ( !v20 )
        goto LABEL_35;
      this = v4[7];
      if ( !this )
        goto LABEL_35;
      UISprite__set_spriteName((UISprite_o *)this, v20->fields.spriteName, 0LL);
    }
  }
}


void __fastcall StaffCostumeSelectListViewItemDraw__SetInput(
        StaffCostumeSelectListViewItemDraw_o *this,
        StaffCostumeSelectListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x22
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4C1D823 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    byte_4C1D823 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL),
            (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
      {
        sub_1C3B9C0(Component_object, v9);
      }
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
        Component_object,
        0LL,
        1LL,
        Component_object->klass[1]._1.interfaceOffsets);
    }
    StaffCostumeSelectListViewItemDraw__SetDisp(this, item, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StaffCostumeSelectListViewItemDraw__SetItem(
        StaffCostumeSelectListViewItemDraw_o *this,
        StaffCostumeSelectListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  if ( item )
  {
    if ( mode )
      StaffCostumeSelectListViewItemDraw__SetDisp(this, item, *(const MethodInfo **)&mode);
  }
}