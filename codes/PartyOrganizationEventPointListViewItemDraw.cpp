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
  UIWidget_o *dataLabel; // x0
  UILabel_o *v16; // x21
  const MethodInfo *v17; // x1
  System_String_o *TitleString; // x0
  UnityEngine_Component_o *v19; // x0
  struct System_String_o *titleName; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v22; // x1
  UILabel_o *v23; // x0
  UILabel_o *v24; // x20
  System_String_o *DataString; // x0
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
      dataLabel = (UIWidget_o *)this->fields.dataLabel;
      if ( dataLabel )
      {
        v26.fields.r = v11;
        v26.fields.g = v12;
        v26.fields.b = v13;
        v26.fields.a = v14;
        UIWidget__set_color(dataLabel, v26, 0LL);
        v16 = this->fields.titleLabel;
        TitleString = PartyOrganizationEventPointListViewItem__GetTitleString(item, v17);
        if ( v16 )
        {
          UILabel__set_text(v16, TitleString, 0LL);
          v19 = (UnityEngine_Component_o *)this->fields.titleLabel;
          if ( v19 )
          {
            titleName = item->fields.titleName;
            gameObject = UnityEngine_Component__get_gameObject(v19, 0LL);
            if ( titleName )
            {
              GameObjectExtensions__SetLocalPositionX(gameObject, -340.0, 0LL);
            }
            else
            {
              GameObjectExtensions__SetLocalPositionX(gameObject, -298.0, 0LL);
              v23 = this->fields.titleLabel;
              if ( !v23 )
                goto LABEL_14;
              UILabel__SetCondensedScale(v23, 510, 0LL);
            }
            v24 = this->fields.dataLabel;
            DataString = PartyOrganizationEventPointListViewItem__GetDataString(item, v22);
            if ( v24 )
            {
              UILabel__set_text(v24, DataString, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_14:
    sub_B170D4();
  }
}