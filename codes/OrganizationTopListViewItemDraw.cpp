void OrganizationTopListViewItemDraw___ctor(OrganizationTopListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void OrganizationTopListViewItemDraw__SetItem(
        OrganizationTopListViewItemDraw_o *this,
        OrganizationTopListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  OrganizationTopListViewItemDraw_o **v6; // x19
  struct OrganizationTopItemInfo_o *info; // x8
  System_String_o *imageName; // x20
  OrganizationTopListViewItemDraw_o *v9; // x22
  OrganizationTopListViewItemDraw_o *v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *v16; // x20

  v6 = (OrganizationTopListViewItemDraw_o **)this;
  if ( (byte_596BD64 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21547/*"img_shop_0"*/);
    this = (OrganizationTopListViewItemDraw_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BD64 = 1;
  }
  if ( item && mode )
  {
    info = item->fields.info;
    if ( !info )
      goto LABEL_23;
    imageName = info->fields.imageName;
    if ( System_String__IsNullOrEmpty(imageName, 0) )
    {
      v9 = v6[6];
      imageName = (System_String_o *)StringLiteral_21547/*"img_shop_0"*/;
      this = (OrganizationTopListViewItemDraw_o *)OrganizationTopListViewItem__get_InfoText(
                                                    item,
                                                    (const MethodInfo *)item);
      if ( !v9 )
        goto LABEL_23;
      v10 = this;
      this = v9;
    }
    else
    {
      this = v6[6];
      if ( !this )
        goto LABEL_23;
      v10 = (OrganizationTopListViewItemDraw_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)this, (System_String_o *)v10, 0);
    v13 = (UnityEngine_Object_o *)v6[5];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
    {
      this = v6[5];
      if ( !this )
        goto LABEL_23;
      UIButton__set_normalSprite((UIButton_o *)this, imageName, 0);
    }
    this = v6[4];
    if ( !this )
LABEL_23:
      sub_2213CDC(this, item);
    UISprite__set_spriteName((UISprite_o *)this, imageName, 0);
    v16 = (UnityEngine_Object_o *)v6[5];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
    {
      this = v6[5];
      if ( this )
      {
        ((void (__fastcall *)(OrganizationTopListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
          this,
          0,
          1,
          this->klass[1]._1.implementedInterfaces);
        return;
      }
      goto LABEL_23;
    }
  }
}