void __fastcall OrganizationTopListViewItemDraw___ctor(
        OrganizationTopListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall OrganizationTopListViewItemDraw__SetItem(
        OrganizationTopListViewItemDraw_o *this,
        OrganizationTopListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  OrganizationTopListViewItemDraw_o **v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct OrganizationTopItemInfo_o *info; // x8
  System_String_o *imageName; // x20
  OrganizationTopListViewItemDraw_o *v15; // x22
  System_String_o *v16; // x1
  UnityEngine_Object_o *v17; // x21
  UnityEngine_Object_o *v18; // x20

  v6 = (OrganizationTopListViewItemDraw_o **)this;
  if ( (byte_42E6322 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&StringLiteral_19855/*"img_shop_0"*/, v7, v8, v9);
    this = (OrganizationTopListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v10, v11, v12);
    byte_42E6322 = 1;
  }
  if ( item && mode )
  {
    info = item->fields.info;
    if ( !info )
      goto LABEL_25;
    imageName = info->fields.imageName;
    if ( System_String__IsNullOrEmpty(imageName, 0LL) )
    {
      v15 = v6[5];
      imageName = (System_String_o *)StringLiteral_19855/*"img_shop_0"*/;
      this = (OrganizationTopListViewItemDraw_o *)OrganizationTopListViewItem__get_InfoText(
                                                    item,
                                                    (const MethodInfo *)item);
      if ( !v15 )
        goto LABEL_25;
      v16 = (System_String_o *)this;
      this = v15;
    }
    else
    {
      this = v6[5];
      if ( !this )
        goto LABEL_25;
      v16 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)this, v16, 0LL);
    v17 = (UnityEngine_Object_o *)v6[4];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
    {
      this = v6[4];
      if ( !this )
        goto LABEL_25;
      UIButton__set_normalSprite((UIButton_o *)this, imageName, 0LL);
    }
    this = v6[3];
    if ( !this )
LABEL_25:
      sub_B5D69C(this, item);
    UISprite__set_spriteName((UISprite_o *)this, imageName, 0LL);
    v18 = (UnityEngine_Object_o *)v6[4];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    {
      this = v6[4];
      if ( this )
      {
        ((void (__fastcall *)(OrganizationTopListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
          this,
          0LL,
          1LL,
          this->klass[1]._1.interfaceOffsets);
        return;
      }
      goto LABEL_25;
    }
  }
}