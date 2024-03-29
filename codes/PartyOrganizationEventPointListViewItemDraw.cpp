void __fastcall PartyOrganizationEventPointListViewItemDraw___ctor(
        PartyOrganizationEventPointListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall PartyOrganizationEventPointListViewItemDraw__GetLabelColor(
        PartyOrganizationEventPointListViewItemDraw_o *this,
        PartyOrganizationEventPointListViewItem_o *item,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  int32_t displayValueType; // w8
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  *(UnityEngine_Color_o *)&v4 = UnityEngine_Color__get_white(0LL);
  if ( item )
  {
    displayValueType = item->fields.displayValueType;
    if ( displayValueType == 1 )
    {
      *(UnityEngine_Color_o *)&v4 = UnityEngine_Color__get_white(0LL);
    }
    else if ( !displayValueType )
    {
      *(UnityEngine_Color_o *)&v4 = UnityEngine_Color__get_cyan(0LL);
    }
  }
  result.fields.a = v7;
  result.fields.b = v6;
  result.fields.g = v5;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewItemDraw__SetItem(
        PartyOrganizationEventPointListViewItemDraw_o *this,
        PartyOrganizationEventPointListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  UIWidget_o *titleLabel; // x0
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s11
  UILabel_o *v15; // x21
  const MethodInfo *v16; // x1
  struct System_String_o *titleName; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x1
  UILabel_o *dataLabel; // x20
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( item && mode )
  {
    *(UnityEngine_Color_o *)&v6 = PartyOrganizationEventPointListViewItemDraw__GetLabelColor(
                                    this,
                                    item,
                                    *(const MethodInfo **)&mode);
    titleLabel = (UIWidget_o *)this->fields.titleLabel;
    if ( titleLabel )
    {
      v11 = v6;
      v12 = v7;
      v13 = v8;
      v14 = v9;
      UIWidget__set_color(titleLabel, *(UnityEngine_Color_o *)&v6, 0LL);
      titleLabel = (UIWidget_o *)this->fields.dataLabel;
      if ( titleLabel )
      {
        v21.fields.r = v11;
        v21.fields.g = v12;
        v21.fields.b = v13;
        v21.fields.a = v14;
        UIWidget__set_color(titleLabel, v21, 0LL);
        v15 = this->fields.titleLabel;
        titleLabel = (UIWidget_o *)PartyOrganizationEventPointListViewItem__GetTitleString(item, v16);
        if ( v15 )
        {
          UILabel__set_text(v15, (System_String_o *)titleLabel, 0LL);
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
                goto LABEL_14;
              UILabel__SetCondensedScale((UILabel_o *)titleLabel, 510, 0LL);
            }
            dataLabel = this->fields.dataLabel;
            titleLabel = (UIWidget_o *)PartyOrganizationEventPointListViewItem__GetDataString(item, v19);
            if ( dataLabel )
            {
              UILabel__set_text(dataLabel, (System_String_o *)titleLabel, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_14:
    sub_B0D97C(titleLabel);
  }
}