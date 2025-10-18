void MasterEquipSettingListViewItemDraw___ctor(MasterEquipSettingListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MasterEquipSettingListViewItemDraw__SetButton(
        MasterEquipSettingListViewItemDraw_o *this,
        MasterEquipSettingListViewItem_o *item,
        const MethodInfo *method)
{
  MasterEquipSettingListViewItemDraw_o *v4; // x20
  UIRangeLabel_o *equipShortNameLabel; // x21
  _BOOL4 IsSelected_k__BackingField; // w23
  struct UISprite_o *v7; // x11
  float *p_mTrans; // x8
  float *p_mUpdateFrame; // x9
  float *p_mChildren; // x10
  float *v11; // x11
  struct UISprite_o *equipSetButtonSprite; // x11
  __int64 *v13; // x8
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4C3E595 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_17447/*"btn_bg_20"*/);
    this = (MasterEquipSettingListViewItemDraw_o *)sub_1C37058(&StringLiteral_17448/*"btn_bg_21"*/);
    byte_4C3E595 = 1;
  }
  if ( !item )
    goto LABEL_24;
  this = (MasterEquipSettingListViewItemDraw_o *)v4->fields.equipShortNameLabel;
  if ( !this )
    goto LABEL_24;
  UIRangeLabel__Set((UIRangeLabel_o *)this, item->fields._ShortName_k__BackingField, 0, 1, 0, 0, 0);
  equipShortNameLabel = v4->fields.equipShortNameLabel;
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
    this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
    }
    equipSetButtonSprite = this[2].fields.equipSetButtonSprite;
    p_mTrans = (float *)&equipSetButtonSprite->fields.mTrans;
    p_mUpdateFrame = (float *)&equipSetButtonSprite->fields.mTrans + 1;
    p_mChildren = (float *)&equipSetButtonSprite->fields.mChildren;
    v11 = (float *)&equipSetButtonSprite->fields.mChildren + 1;
    if ( equipShortNameLabel )
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
  this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
  }
  v7 = this[2].fields.equipSetButtonSprite;
  p_mTrans = (float *)&v7->fields.mChanged;
  p_mUpdateFrame = (float *)&v7->fields.mUpdateFrame;
  p_mChildren = (float *)&v7->fields.mAnchorsCached;
  v11 = (float *)(&v7->fields.mAnchorsCached + 4);
  if ( !equipShortNameLabel )
    goto LABEL_24;
LABEL_19:
  v14.fields.a = *v11;
  v14.fields.b = *p_mChildren;
  v14.fields.g = *p_mUpdateFrame;
  v14.fields.r = *p_mTrans;
  UIRangeLabel__set_effectColor(equipShortNameLabel, v14, 0);
  this = (MasterEquipSettingListViewItemDraw_o *)v4->fields.equipSetButtonSprite;
  if ( !this )
    goto LABEL_24;
  if ( item->fields._IsSelected_k__BackingField )
    v13 = &StringLiteral_17448/*"btn_bg_21"*/;
  else
    v13 = &StringLiteral_17447/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v13, 0);
}


void MasterEquipSettingListViewItemDraw__SetInput(
        MasterEquipSettingListViewItemDraw_o *this,
        MasterEquipSettingListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Component_o *Component_object; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4C3E594 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E594 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_14;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_object )
        goto LABEL_14;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_14;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
        Component_object,
        0,
        1,
        Component_object->klass[1]._1.implementedInterfaces);
    }
    Component_object = (UnityEngine_Component_o *)this->fields.masterEquipIconSprite;
    if ( Component_object )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, struct UnityEngine_Texture2D_o *, void *))Component_object->klass[1].vtable._3_ToString.method)(
        Component_object,
        item->fields._EquipTexture_k__BackingField,
        Component_object->klass[2]._1.image);
      MasterEquipSettingListViewItemDraw__SetButton(this, item, v9);
      return;
    }
LABEL_14:
    sub_1C372B4(Component_object);
  }
}


void MasterEquipSettingListViewItemDraw__SetItem(
        MasterEquipSettingListViewItemDraw_o *this,
        MasterEquipSettingListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *EquipTexture_k__BackingField; // x21
  const MethodInfo *v8; // x2
  struct UITexture_o *masterEquipIconSprite; // x0

  if ( (byte_4C3E593 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E593 = 1;
  }
  if ( item && mode )
  {
    EquipTexture_k__BackingField = (UnityEngine_Object_o *)item->fields._EquipTexture_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(EquipTexture_k__BackingField, 0, 0) )
    {
      masterEquipIconSprite = this->fields.masterEquipIconSprite;
      if ( !masterEquipIconSprite )
        sub_1C372B4(0);
      ((void (__fastcall *)(struct UITexture_o *, struct UnityEngine_Texture2D_o *, const MethodInfo *))masterEquipIconSprite->klass->vtable._27_set_mainTexture.methodPtr)(
        masterEquipIconSprite,
        item->fields._EquipTexture_k__BackingField,
        masterEquipIconSprite->klass->vtable._27_set_mainTexture.method);
    }
    MasterEquipSettingListViewItemDraw__SetButton(this, item, v8);
  }
}