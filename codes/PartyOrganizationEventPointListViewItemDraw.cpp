void PartyOrganizationEventPointListViewItemDraw___ctor(
        PartyOrganizationEventPointListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Color_o PartyOrganizationEventPointListViewItemDraw__GetLabelColor(
        PartyOrganizationEventPointListViewItemDraw_o *this,
        PartyOrganizationEventPointListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( item )
  {
    result.fields.r = 0.0;
    result.fields.g = 1.0;
    if ( item->fields.displayValueType )
      result.fields.r = 1.0;
  }
  else
  {
    result.fields.r = 1.0;
    result.fields.g = 1.0;
  }
  result.fields.b = 1.0;
  result.fields.a = 1.0;
  return result;
}


void PartyOrganizationEventPointListViewItemDraw__SetInput(
        PartyOrganizationEventPointListViewItemDraw_o *this,
        PartyOrganizationEventPointListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  ;
}


void PartyOrganizationEventPointListViewItemDraw__SetItem(
        PartyOrganizationEventPointListViewItemDraw_o *this,
        PartyOrganizationEventPointListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UIWidget_o *titleLabel; // x0
  float v9; // s8
  UILabel_o *v10; // x21
  const MethodInfo *v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *v14; // x0
  UILabel_o *dataLabel; // x20
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( item && mode )
  {
    titleLabel = (UIWidget_o *)this->fields.titleLabel;
    if ( titleLabel )
    {
      v16.fields.g = 1.0;
      v16.fields.b = 1.0;
      v16.fields.a = 1.0;
      v9 = item->fields.displayValueType ? 1.0 : 0.0;
      v16.fields.r = v9;
      UIWidget__set_color(titleLabel, v16, 0);
      titleLabel = (UIWidget_o *)this->fields.dataLabel;
      if ( titleLabel )
      {
        v17.fields.r = v9;
        v17.fields.g = 1.0;
        v17.fields.b = 1.0;
        v17.fields.a = 1.0;
        UIWidget__set_color(titleLabel, v17, 0);
        v10 = this->fields.titleLabel;
        titleLabel = (UIWidget_o *)PartyOrganizationEventPointListViewItem__GetTitleString(item, v11);
        if ( v10 )
        {
          UILabel__set_text(v10, (System_String_o *)titleLabel, 0);
          titleLabel = (UIWidget_o *)this->fields.titleLabel;
          if ( item->fields.titleName )
          {
            if ( !titleLabel )
              goto LABEL_18;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
            GameObjectExtensions__SetLocalPositionX(gameObject, -340.0, 0);
          }
          else
          {
            if ( !titleLabel )
              goto LABEL_18;
            v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
            GameObjectExtensions__SetLocalPositionX(v14, -298.0, 0);
            titleLabel = (UIWidget_o *)this->fields.titleLabel;
            if ( !titleLabel )
              goto LABEL_18;
            UILabel__SetCondensedScale((UILabel_o *)titleLabel, 510, 0, 0);
          }
          dataLabel = this->fields.dataLabel;
          titleLabel = (UIWidget_o *)PartyOrganizationEventPointListViewItem__GetDataString(item, v13);
          if ( dataLabel )
          {
            UILabel__set_text(dataLabel, (System_String_o *)titleLabel, 0);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_2213CDC(titleLabel, item);
  }
}