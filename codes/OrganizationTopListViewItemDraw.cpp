void __fastcall OrganizationTopListViewItemDraw___ctor(
        OrganizationTopListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewItemDraw__SetItem(
        OrganizationTopListViewItemDraw_o *this,
        OrganizationTopListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  OrganizationTopListViewItemDraw_o **v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct OrganizationTopItemInfo_o *info; // x8
  System_String_o *imageName; // x20
  OrganizationTopListViewItemDraw_o *v13; // x22
  OrganizationTopListViewItemDraw_o *v14; // x1
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x21
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x20

  v6 = (OrganizationTopListViewItemDraw_o **)this;
  if ( (byte_4B11D04 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&StringLiteral_20662/*"img_shop_0"*/, v7, v8);
    this = (OrganizationTopListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B11D04 = 1;
  }
  if ( item && mode )
  {
    info = item->fields.info;
    if ( !info )
      goto LABEL_23;
    imageName = info->fields.imageName;
    if ( System_String__IsNullOrEmpty(imageName, 0LL) )
    {
      v13 = v6[6];
      imageName = (System_String_o *)StringLiteral_20662/*"img_shop_0"*/;
      this = (OrganizationTopListViewItemDraw_o *)OrganizationTopListViewItem__get_InfoText(
                                                    item,
                                                    (const MethodInfo *)item);
      if ( !v13 )
        goto LABEL_23;
      v14 = this;
      this = v13;
    }
    else
    {
      this = v6[6];
      if ( !this )
        goto LABEL_23;
      v14 = (OrganizationTopListViewItemDraw_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)this, (System_String_o *)v14, 0LL);
    v16 = (UnityEngine_Object_o *)v6[5];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
    {
      this = v6[5];
      if ( !this )
        goto LABEL_23;
      UIButton__set_normalSprite((UIButton_o *)this, imageName, 0LL);
    }
    this = v6[4];
    if ( !this )
LABEL_23:
      sub_1BCAA3C(this, item);
    UISprite__set_spriteName((UISprite_o *)this, imageName, 0LL);
    v18 = (UnityEngine_Object_o *)v6[5];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    {
      this = v6[5];
      if ( this )
      {
        ((void (__fastcall *)(OrganizationTopListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
          this,
          0LL,
          1LL,
          this->klass[1]._1.interfaceOffsets);
        return;
      }
      goto LABEL_23;
    }
  }
}