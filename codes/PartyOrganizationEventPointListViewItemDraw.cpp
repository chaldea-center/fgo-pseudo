void __fastcall PartyOrganizationEventPointListViewItemDraw___ctor(
        PartyOrganizationEventPointListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_Color_o __fastcall PartyOrganizationEventPointListViewItemDraw__GetLabelColor(
        PartyOrganizationEventPointListViewItemDraw_o *this,
        PartyOrganizationEventPointListViewItem_o *item,
        const MethodInfo *method)
{
  float v3; // s1
  float v4; // s0
  float v5; // s2
  float v6; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( item )
  {
    v3 = 1.0;
    v4 = 0.0;
    if ( item->fields.displayValueType )
      v4 = 1.0;
  }
  else
  {
    v4 = 1.0;
    v3 = 1.0;
  }
  v5 = 1.0;
  v6 = 1.0;
  result.fields.a = v6;
  result.fields.b = v5;
  result.fields.g = v3;
  result.fields.r = v4;
  return result;
}


void __fastcall PartyOrganizationEventPointListViewItemDraw__SetInput(
        PartyOrganizationEventPointListViewItemDraw_o *this,
        PartyOrganizationEventPointListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyOrganizationEventPointListViewItemDraw__SetItem(
        PartyOrganizationEventPointListViewItemDraw_o *this,
        PartyOrganizationEventPointListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UIWidget_o *titleLabel; // x0
  float v7; // s8
  UILabel_o *v8; // x21
  const MethodInfo *v9; // x1
  struct System_String_o *titleName; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x1
  UILabel_o *dataLabel; // x20
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( item && mode )
  {
    titleLabel = (UIWidget_o *)this->fields.titleLabel;
    if ( item->fields.displayValueType )
      v7 = 1.0;
    else
      v7 = 0.0;
    if ( titleLabel )
    {
      v14.fields.g = 1.0;
      v14.fields.b = 1.0;
      v14.fields.a = 1.0;
      v14.fields.r = v7;
      UIWidget__set_color(titleLabel, v14, 0LL);
      titleLabel = (UIWidget_o *)this->fields.dataLabel;
      if ( titleLabel )
      {
        v15.fields.g = 1.0;
        v15.fields.b = 1.0;
        v15.fields.a = 1.0;
        v15.fields.r = v7;
        UIWidget__set_color(titleLabel, v15, 0LL);
        v8 = this->fields.titleLabel;
        titleLabel = (UIWidget_o *)PartyOrganizationEventPointListViewItem__GetTitleString(item, v9);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)titleLabel, 0LL);
          titleLabel = (UIWidget_o *)this->fields.titleLabel;
          if ( titleLabel )
          {
            titleName = item->fields.titleName;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
            if ( titleName )
            {
              GameObjectExtensions__SetLocalPositionX(gameObject, -340.0, 0LL);
            }
            else
            {
              GameObjectExtensions__SetLocalPositionX(gameObject, -298.0, 0LL);
              titleLabel = (UIWidget_o *)this->fields.titleLabel;
              if ( !titleLabel )
                goto LABEL_17;
              UILabel__SetCondensedScale((UILabel_o *)titleLabel, 510, 0LL);
            }
            dataLabel = this->fields.dataLabel;
            titleLabel = (UIWidget_o *)PartyOrganizationEventPointListViewItem__GetDataString(item, v12);
            if ( dataLabel )
            {
              UILabel__set_text(dataLabel, (System_String_o *)titleLabel, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_17:
    sub_1B00F28(titleLabel, item);
  }
}