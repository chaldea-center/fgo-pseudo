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
  __int64 v3; // x3
  MasterEquipSettingListViewItemDraw_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w2
  __int64 v13; // x3
  UIRangeLabel_o *equipShortNameLabel; // x21
  float *v15; // x11
  float *v16; // x8
  float *v17; // x9
  float *v18; // x10
  float *v19; // x11
  float *v20; // x11
  __int64 *v21; // x8
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = this;
  if ( (byte_42EBB79 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_17174/*"btn_bg_20"*/, v6, v7, v8);
    this = (MasterEquipSettingListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_17175/*"btn_bg_21"*/, v9, v10, v11);
    byte_42EBB79 = 1;
  }
  if ( !item )
    goto LABEL_30;
  this = (MasterEquipSettingListViewItemDraw_o *)v5->fields.equipShortNameLabel;
  if ( !this )
    goto LABEL_30;
  UIRangeLabel__Set((UIRangeLabel_o *)this, item->fields._ShortName_k__BackingField, 0LL, 1, 0, 0LL);
  equipShortNameLabel = v5->fields.equipShortNameLabel;
  if ( !item->fields._IsSelected_k__BackingField )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_42E563C )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, v12, v13);
      byte_42E563C = 1;
    }
    this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
    }
    v20 = *(float **)&this[3].fields.m_CachedPtr;
    v16 = v20 + 20;
    v17 = v20 + 21;
    v18 = v20 + 22;
    v19 = v20 + 23;
    if ( equipShortNameLabel )
      goto LABEL_25;
LABEL_30:
    sub_B5D69C(this, item);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E563D )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, v12, v13);
    byte_42E563D = 1;
  }
  this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
  }
  v15 = *(float **)&this[3].fields.m_CachedPtr;
  v16 = v15 + 24;
  v17 = v15 + 25;
  v18 = v15 + 26;
  v19 = v15 + 27;
  if ( !equipShortNameLabel )
    goto LABEL_30;
LABEL_25:
  v22.fields.b = *v18;
  v22.fields.g = *v17;
  v22.fields.r = *v16;
  v22.fields.a = *v19;
  UIRangeLabel__set_effectColor(equipShortNameLabel, v22, 0LL);
  this = (MasterEquipSettingListViewItemDraw_o *)v5->fields.equipSetButtonSprite;
  if ( !this )
    goto LABEL_30;
  if ( item->fields._IsSelected_k__BackingField )
    v21 = &StringLiteral_17175/*"btn_bg_21"*/;
  else
    v21 = &StringLiteral_17174/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v21, 0LL);
}


void __fastcall MasterEquipSettingListViewItemDraw__SetInput(
        MasterEquipSettingListViewItemDraw_o *this,
        MasterEquipSettingListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *baseButton; // x22
  __int64 v11; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0
  const MethodInfo *v13; // x2

  if ( (byte_42EBB78 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, (_DWORD)item, isInput, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42EBB78 = 1;
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
                                                             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      MasterEquipSettingListViewItemDraw__SetButton(this, item, v13);
      return;
    }
LABEL_15:
    sub_B5D69C(Component_WebViewObject, v11);
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

  if ( (byte_42EBB77 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, mode, method);
    byte_42EBB77 = 1;
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
        sub_B5D69C(0LL, v8);
      ((void (__fastcall *)(struct UITexture_o *, struct UnityEngine_Texture2D_o *, Il2CppMethodPointer))masterEquipIconSprite->klass->vtable._27_set_mainTexture.method)(
        masterEquipIconSprite,
        item->fields._EquipTexture_k__BackingField,
        masterEquipIconSprite->klass->vtable._28_get_shader.methodPtr);
    }
    MasterEquipSettingListViewItemDraw__SetButton(this, item, v9);
  }
}