void __fastcall MasterEquipSettingListViewItemDraw___ctor(
        MasterEquipSettingListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterEquipSettingListViewItemDraw__SetButton(
        MasterEquipSettingListViewItemDraw_o *this,
        MasterEquipSettingListViewItem_o *item,
        const MethodInfo *method)
{
  MasterEquipSettingListViewItemDraw_o *v4; // x20
  UIRangeLabel_o *equipShortNameLabel; // x21
  float *v6; // x11
  float *v7; // x8
  float *v8; // x9
  float *v9; // x10
  float *v10; // x11
  float *v11; // x11
  __int64 *v12; // x8
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_438E5F6 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_17304/*"btn_bg_20"*/);
    this = (MasterEquipSettingListViewItemDraw_o *)sub_B775C4(&StringLiteral_17305/*"btn_bg_21"*/);
    byte_438E5F6 = 1;
  }
  if ( !item )
    goto LABEL_30;
  this = (MasterEquipSettingListViewItemDraw_o *)v4->fields.equipShortNameLabel;
  if ( !this )
    goto LABEL_30;
  UIRangeLabel__Set((UIRangeLabel_o *)this, item->fields._ShortName_k__BackingField, 0LL, 1, 0, 0LL);
  equipShortNameLabel = v4->fields.equipShortNameLabel;
  if ( !item->fields._IsSelected_k__BackingField )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_4387FCE )
    {
      sub_B775C4(&LocalizationManager_TypeInfo);
      byte_4387FCE = 1;
    }
    this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
    }
    v11 = *(float **)&this[3].fields.m_CachedPtr;
    v7 = v11 + 20;
    v8 = v11 + 21;
    v9 = v11 + 22;
    v10 = v11 + 23;
    if ( equipShortNameLabel )
      goto LABEL_25;
LABEL_30:
    sub_B7769C(this, item);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4387FCF )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    byte_4387FCF = 1;
  }
  this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
  }
  v6 = *(float **)&this[3].fields.m_CachedPtr;
  v7 = v6 + 24;
  v8 = v6 + 25;
  v9 = v6 + 26;
  v10 = v6 + 27;
  if ( !equipShortNameLabel )
    goto LABEL_30;
LABEL_25:
  v13.fields.b = *v9;
  v13.fields.g = *v8;
  v13.fields.r = *v7;
  v13.fields.a = *v10;
  UIRangeLabel__set_effectColor(equipShortNameLabel, v13, 0LL);
  this = (MasterEquipSettingListViewItemDraw_o *)v4->fields.equipSetButtonSprite;
  if ( !this )
    goto LABEL_30;
  if ( item->fields._IsSelected_k__BackingField )
    v12 = &StringLiteral_17305/*"btn_bg_21"*/;
  else
    v12 = &StringLiteral_17304/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v12, 0LL);
}


void __fastcall MasterEquipSettingListViewItemDraw__SetInput(
        MasterEquipSettingListViewItemDraw_o *this,
        MasterEquipSettingListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0
  const MethodInfo *v10; // x2

  if ( (byte_438E5F5 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E5F5 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_WebViewObject )
        goto LABEL_15;
      Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                             Component_WebViewObject,
                                                             (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_WebViewObject )
        goto LABEL_15;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL);
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_WebViewObject )
        goto LABEL_15;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_WebViewObject->klass[1]._1.implementedInterfaces)(
        Component_WebViewObject,
        0LL,
        1LL,
        Component_WebViewObject->klass[1]._1.interfaceOffsets);
    }
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.masterEquipIconSprite;
    if ( Component_WebViewObject )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, struct UnityEngine_Texture2D_o *, const char *))Component_WebViewObject->klass[2]._1.gc_desc)(
        Component_WebViewObject,
        item->fields._EquipTexture_k__BackingField,
        Component_WebViewObject->klass[2]._1.name);
      MasterEquipSettingListViewItemDraw__SetButton(this, item, v10);
      return;
    }
LABEL_15:
    sub_B7769C(Component_WebViewObject, v8);
  }
}


void __fastcall MasterEquipSettingListViewItemDraw__SetItem(
        MasterEquipSettingListViewItemDraw_o *this,
        MasterEquipSettingListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *EquipTexture_k__BackingField; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct UITexture_o *masterEquipIconSprite; // x0

  if ( (byte_438E5F4 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E5F4 = 1;
  }
  if ( item && mode )
  {
    EquipTexture_k__BackingField = (UnityEngine_Object_o *)item->fields._EquipTexture_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(EquipTexture_k__BackingField, 0LL, 0LL) )
    {
      masterEquipIconSprite = this->fields.masterEquipIconSprite;
      if ( !masterEquipIconSprite )
        sub_B7769C(0LL, v8);
      ((void (__fastcall *)(struct UITexture_o *, struct UnityEngine_Texture2D_o *, Il2CppMethodPointer))masterEquipIconSprite->klass->vtable._27_set_mainTexture.method)(
        masterEquipIconSprite,
        item->fields._EquipTexture_k__BackingField,
        masterEquipIconSprite->klass->vtable._28_get_shader.methodPtr);
    }
    MasterEquipSettingListViewItemDraw__SetButton(this, item, v9);
  }
}