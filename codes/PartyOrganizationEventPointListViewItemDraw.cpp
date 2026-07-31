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
  float v3; // s0
  float v4; // s1
  float v5; // s2
  float v6; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( item )
  {
    v3 = 0.0;
    v4 = 1.0;
    if ( item->fields.displayValueType )
      v3 = 1.0;
  }
  else
  {
    v3 = 1.0;
    v4 = 1.0;
  }
  v5 = 1.0;
  v6 = 1.0;
  result.fields.a = v6;
  result.fields.b = v5;
  result.fields.g = v4;
  result.fields.r = v3;
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


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationEventPointListViewItemDraw__SetItem(
        PartyOrganizationEventPointListViewItemDraw_o *this,
        PartyOrganizationEventPointListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UIWidget_o *titleLabel; // x0
  float v6; // s1 OVERLAPPED
  float v7; // s2
  float v8; // s3
  float v10; // s8
  float v11; // s0
  UILabel_o *v12; // x21
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_o *v16; // x0
  UILabel_o *dataLabel; // x20
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( item && mode )
  {
    titleLabel = (UIWidget_o *)this->fields.titleLabel;
    if ( titleLabel )
    {
      v6 = 1.0;
      v7 = 1.0;
      v8 = 1.0;
      v10 = item->fields.displayValueType ? 1.0 : 0.0;
      v11 = v10;
      UIWidget__set_color(titleLabel, *(UnityEngine_Color_o *)(&v6 - 1), 0);
      titleLabel = (UIWidget_o *)this->fields.dataLabel;
      if ( titleLabel )
      {
        v18.fields.r = v10;
        v18.fields.g = 1.0;
        v18.fields.b = 1.0;
        v18.fields.a = 1.0;
        UIWidget__set_color(titleLabel, v18, 0);
        v12 = this->fields.titleLabel;
        titleLabel = (UIWidget_o *)PartyOrganizationEventPointListViewItem__GetTitleString(item, v13);
        if ( v12 )
        {
          UILabel__set_text(v12, (System_String_o *)titleLabel, 0);
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
            v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
            GameObjectExtensions__SetLocalPositionX(v16, -298.0, 0);
            titleLabel = (UIWidget_o *)this->fields.titleLabel;
            if ( !titleLabel )
              goto LABEL_18;
            UILabel__SetCondensedScale((UILabel_o *)titleLabel, 510, 0, 0);
          }
          dataLabel = this->fields.dataLabel;
          titleLabel = (UIWidget_o *)PartyOrganizationEventPointListViewItem__GetDataString(item, v15);
          if ( dataLabel )
          {
            UILabel__set_text(dataLabel, (System_String_o *)titleLabel, 0);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_21FFECC(titleLabel, item);
  }
}