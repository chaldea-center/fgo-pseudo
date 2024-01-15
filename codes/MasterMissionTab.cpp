void __fastcall MasterMissionTab___ctor(MasterMissionTab_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MasterMissionTab__GetButtonSpriteName(
        MasterMissionTab_o *this,
        bool isOn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o **v8; // x9
  __int64 *v9; // x10
  System_String_o **v10; // x8

  if ( (byte_40FCB3A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16913/*"btn_bg_on_4"*/, isOn);
    sub_B16FFC(&StringLiteral_16908/*"btn_bg_off_4"*/, v5);
    sub_B16FFC(&StringLiteral_16909/*"btn_bg_off_5"*/, v6);
    sub_B16FFC(&StringLiteral_16914/*"btn_bg_on_5"*/, v7);
    byte_40FCB3A = 1;
  }
  v8 = (System_String_o **)&StringLiteral_16909/*"btn_bg_off_5"*/;
  if ( isOn )
    v8 = (System_String_o **)&StringLiteral_16914/*"btn_bg_on_5"*/;
  v9 = &StringLiteral_16908/*"btn_bg_off_4"*/;
  if ( isOn )
    v9 = &StringLiteral_16913/*"btn_bg_on_4"*/;
  if ( this->fields.isSmall )
    v10 = v8;
  else
    v10 = (System_String_o **)v9;
  return *v10;
}


void __fastcall MasterMissionTab__SetLargeTab(MasterMissionTab_o *this, const MethodInfo *method)
{
  _BOOL4 isViewLargeTab; // w8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_BoxCollider_o *tabCollider; // x0
  UnityEngine_BoxCollider_o *v6; // x0
  UnityEngine_Component_o *tabBg; // x0
  UnityEngine_Transform_o *v8; // x0
  UIWidget_o *v9; // x0
  float x; // s0
  double v11; // d0
  UIWidget_o *v12; // x0
  float y; // s0
  double v14; // d0
  UISprite_o *v15; // x0
  UnityEngine_Component_o *labelBg; // x0
  UnityEngine_Transform_o *v17; // x0
  UIWidget_o *v18; // x0
  float v19; // s0
  double v20; // d0
  UIWidget_o *v21; // x0
  float v22; // s0
  double v23; // d0
  UISprite_o *v24; // x0
  UnityEngine_Component_o *selectedTabBg; // x0
  UnityEngine_Transform_o *v26; // x0
  UIWidget_o *v27; // x0
  float v28; // s0
  double v29; // d0
  UIWidget_o *v30; // x0
  float v31; // s0
  double v32; // d0
  UISprite_o *v33; // x0
  UnityEngine_Component_o *tabLabel; // x0
  UnityEngine_Transform_o *v35; // x0
  UIWidget_o *v36; // x0
  float v37; // s0
  double v38; // d0
  UIWidget_o *v39; // x0
  float v40; // s0
  double v41; // d0
  UnityEngine_Component_o *noticeNumber; // x0
  UnityEngine_Transform_o *v43; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  isViewLargeTab = this->fields.isViewLargeTab;
  this->fields.isSmall = 0;
  if ( isViewLargeTab )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      UnityEngine_Transform__set_localPosition(transform, this->fields.tabPositionLarge, 0LL);
      tabCollider = this->fields.tabCollider;
      if ( tabCollider )
      {
        UnityEngine_BoxCollider__set_center(tabCollider, this->fields.tabColliderPositionLarge, 0LL);
        v6 = this->fields.tabCollider;
        if ( v6 )
        {
          UnityEngine_BoxCollider__set_size(v6, this->fields.tabColliderSizeLarge, 0LL);
          tabBg = (UnityEngine_Component_o *)this->fields.tabBg;
          if ( tabBg )
          {
            v8 = UnityEngine_Component__get_transform(tabBg, 0LL);
            if ( v8 )
            {
              UnityEngine_Transform__set_localPosition(v8, this->fields.tabBgPositionLarge, 0LL);
              v9 = (UIWidget_o *)this->fields.tabBg;
              if ( v9 )
              {
                x = this->fields.tabBgSizeLarge.fields.x;
                v11 = x == INFINITY ? -x : x;
                UIWidget__set_width(v9, (int)v11, 0LL);
                v12 = (UIWidget_o *)this->fields.tabBg;
                if ( v12 )
                {
                  y = this->fields.tabBgSizeLarge.fields.y;
                  v14 = y == INFINITY ? -INFINITY : y;
                  UIWidget__set_height(v12, (int)v14, 0LL);
                  v15 = this->fields.tabBg;
                  if ( v15 )
                  {
                    UISprite__set_spriteName(v15, this->fields.tabBgSpriteNameLarge, 0LL);
                    labelBg = (UnityEngine_Component_o *)this->fields.labelBg;
                    if ( labelBg )
                    {
                      v17 = UnityEngine_Component__get_transform(labelBg, 0LL);
                      if ( v17 )
                      {
                        UnityEngine_Transform__set_localPosition(v17, this->fields.labelBgPositionLarge, 0LL);
                        v18 = (UIWidget_o *)this->fields.labelBg;
                        if ( v18 )
                        {
                          v19 = this->fields.labelBgSizeLarge.fields.x;
                          v20 = v19 == INFINITY ? -INFINITY : v19;
                          UIWidget__set_width(v18, (int)v20, 0LL);
                          v21 = (UIWidget_o *)this->fields.labelBg;
                          if ( v21 )
                          {
                            v22 = this->fields.labelBgSizeLarge.fields.y;
                            v23 = v22 == INFINITY ? -INFINITY : v22;
                            UIWidget__set_height(v21, (int)v23, 0LL);
                            v24 = this->fields.labelBg;
                            if ( v24 )
                            {
                              UISprite__set_spriteName(v24, this->fields.labelBgSpriteNameLarge, 0LL);
                              selectedTabBg = (UnityEngine_Component_o *)this->fields.selectedTabBg;
                              if ( selectedTabBg )
                              {
                                v26 = UnityEngine_Component__get_transform(selectedTabBg, 0LL);
                                if ( v26 )
                                {
                                  UnityEngine_Transform__set_localPosition(
                                    v26,
                                    this->fields.selectedTabPositionLarge,
                                    0LL);
                                  v27 = (UIWidget_o *)this->fields.selectedTabBg;
                                  if ( v27 )
                                  {
                                    v28 = this->fields.selectedTabSizeLarge.fields.x;
                                    v29 = v28 == INFINITY ? -INFINITY : v28;
                                    UIWidget__set_width(v27, (int)v29, 0LL);
                                    v30 = (UIWidget_o *)this->fields.selectedTabBg;
                                    if ( v30 )
                                    {
                                      v31 = this->fields.selectedTabSizeLarge.fields.y;
                                      v32 = v31 == INFINITY ? -INFINITY : v31;
                                      UIWidget__set_height(v30, (int)v32, 0LL);
                                      v33 = this->fields.selectedTabBg;
                                      if ( v33 )
                                      {
                                        UISprite__set_spriteName(v33, this->fields.selectedTabSpriteNameLarge, 0LL);
                                        tabLabel = (UnityEngine_Component_o *)this->fields.tabLabel;
                                        if ( tabLabel )
                                        {
                                          v35 = UnityEngine_Component__get_transform(tabLabel, 0LL);
                                          if ( v35 )
                                          {
                                            UnityEngine_Transform__set_localPosition(
                                              v35,
                                              this->fields.tabLabelPositionLarge,
                                              0LL);
                                            v36 = (UIWidget_o *)this->fields.tabLabel;
                                            if ( v36 )
                                            {
                                              v37 = this->fields.tabLabelSizeLarge.fields.x;
                                              v38 = v37 == INFINITY ? -INFINITY : v37;
                                              UIWidget__set_width(v36, (int)v38, 0LL);
                                              v39 = (UIWidget_o *)this->fields.tabLabel;
                                              if ( v39 )
                                              {
                                                v40 = this->fields.tabLabelSizeLarge.fields.y;
                                                v41 = v40 == INFINITY ? -INFINITY : v40;
                                                UIWidget__set_height(v39, (int)v41, 0LL);
                                                noticeNumber = (UnityEngine_Component_o *)this->fields.noticeNumber;
                                                if ( noticeNumber )
                                                {
                                                  v43 = UnityEngine_Component__get_transform(noticeNumber, 0LL);
                                                  if ( v43 )
                                                  {
                                                    UnityEngine_Transform__set_localPosition(
                                                      v43,
                                                      this->fields.noticeNumberPositionLarge,
                                                      0LL);
                                                    return;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_53:
    sub_B170D4();
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall MasterMissionTab__SetSmallTab(MasterMissionTab_o *this, const MethodInfo *method)
{
  _BOOL4 isViewLargeTab; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_BoxCollider_o *tabCollider; // x0
  UnityEngine_BoxCollider_o *v7; // x0
  UnityEngine_Component_o *tabBg; // x0
  UnityEngine_Transform_o *v9; // x0
  UIWidget_o *v10; // x0
  float x; // s0
  double v12; // d0
  UIWidget_o *v13; // x0
  float y; // s0
  double v15; // d0
  UISprite_o *v16; // x0
  UnityEngine_Component_o *labelBg; // x0
  UnityEngine_Transform_o *v18; // x0
  UIWidget_o *v19; // x0
  float v20; // s0
  double v21; // d0
  UIWidget_o *v22; // x0
  float v23; // s0
  double v24; // d0
  UISprite_o *v25; // x0
  UnityEngine_Component_o *selectedTabBg; // x0
  UnityEngine_Transform_o *v27; // x0
  UIWidget_o *v28; // x0
  float v29; // s0
  double v30; // d0
  UIWidget_o *v31; // x0
  float v32; // s0
  double v33; // d0
  UISprite_o *v34; // x0
  UnityEngine_Component_o *tabLabel; // x0
  UnityEngine_Transform_o *v36; // x0
  UIWidget_o *v37; // x0
  float v38; // s0
  double v39; // d0
  UIWidget_o *v40; // x0
  float v41; // s0
  double v42; // d0
  UnityEngine_Component_o *noticeNumber; // x0
  UnityEngine_Transform_o *v44; // x0

  isViewLargeTab = this->fields.isViewLargeTab;
  this->fields.isSmall = 1;
  if ( !isViewLargeTab )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_53;
  UnityEngine_Transform__set_localPosition(transform, this->fields.tabPositionSmall, 0LL);
  tabCollider = this->fields.tabCollider;
  if ( !tabCollider )
    goto LABEL_53;
  UnityEngine_BoxCollider__set_center(tabCollider, this->fields.tabColliderPositionSmall, 0LL);
  v7 = this->fields.tabCollider;
  if ( !v7 )
    goto LABEL_53;
  UnityEngine_BoxCollider__set_size(v7, this->fields.tabColliderSizeSmall, 0LL);
  tabBg = (UnityEngine_Component_o *)this->fields.tabBg;
  if ( !tabBg )
    goto LABEL_53;
  v9 = UnityEngine_Component__get_transform(tabBg, 0LL);
  if ( !v9 )
    goto LABEL_53;
  UnityEngine_Transform__set_localPosition(v9, this->fields.tabBgPositionSmall, 0LL);
  v10 = (UIWidget_o *)this->fields.tabBg;
  if ( !v10 )
    goto LABEL_53;
  x = this->fields.tabBgSizeSmall.fields.x;
  v12 = x == INFINITY ? -x : x;
  UIWidget__set_width(v10, (int)v12, 0LL);
  v13 = (UIWidget_o *)this->fields.tabBg;
  if ( !v13 )
    goto LABEL_53;
  y = this->fields.tabBgSizeSmall.fields.y;
  v15 = y == INFINITY ? -INFINITY : y;
  UIWidget__set_height(v13, (int)v15, 0LL);
  v16 = this->fields.tabBg;
  if ( !v16 )
    goto LABEL_53;
  UISprite__set_spriteName(v16, this->fields.tabBgSpriteNameSmall, 0LL);
  labelBg = (UnityEngine_Component_o *)this->fields.labelBg;
  if ( !labelBg )
    goto LABEL_53;
  v18 = UnityEngine_Component__get_transform(labelBg, 0LL);
  if ( !v18 )
    goto LABEL_53;
  UnityEngine_Transform__set_localPosition(v18, this->fields.labelBgPositionSmall, 0LL);
  v19 = (UIWidget_o *)this->fields.labelBg;
  if ( !v19 )
    goto LABEL_53;
  v20 = this->fields.labelBgSizeSmall.fields.x;
  v21 = v20 == INFINITY ? -INFINITY : v20;
  UIWidget__set_width(v19, (int)v21, 0LL);
  v22 = (UIWidget_o *)this->fields.labelBg;
  if ( !v22 )
    goto LABEL_53;
  v23 = this->fields.labelBgSizeSmall.fields.y;
  v24 = v23 == INFINITY ? -INFINITY : v23;
  UIWidget__set_height(v22, (int)v24, 0LL);
  v25 = this->fields.labelBg;
  if ( !v25 )
    goto LABEL_53;
  UISprite__set_spriteName(v25, this->fields.labelBgSpriteNameSmall, 0LL);
  selectedTabBg = (UnityEngine_Component_o *)this->fields.selectedTabBg;
  if ( !selectedTabBg )
    goto LABEL_53;
  v27 = UnityEngine_Component__get_transform(selectedTabBg, 0LL);
  if ( !v27 )
    goto LABEL_53;
  UnityEngine_Transform__set_localPosition(v27, this->fields.selectedTabPositionSmall, 0LL);
  v28 = (UIWidget_o *)this->fields.selectedTabBg;
  if ( !v28 )
    goto LABEL_53;
  v29 = this->fields.selectedTabSizeSmall.fields.x;
  v30 = v29 == INFINITY ? -INFINITY : v29;
  UIWidget__set_width(v28, (int)v30, 0LL);
  v31 = (UIWidget_o *)this->fields.selectedTabBg;
  if ( !v31 )
    goto LABEL_53;
  v32 = this->fields.selectedTabSizeSmall.fields.y;
  v33 = v32 == INFINITY ? -INFINITY : v32;
  UIWidget__set_height(v31, (int)v33, 0LL);
  v34 = this->fields.selectedTabBg;
  if ( !v34 )
    goto LABEL_53;
  UISprite__set_spriteName(v34, this->fields.selectedTabSpriteNameSmall, 0LL);
  tabLabel = (UnityEngine_Component_o *)this->fields.tabLabel;
  if ( !tabLabel )
    goto LABEL_53;
  v36 = UnityEngine_Component__get_transform(tabLabel, 0LL);
  if ( !v36 )
    goto LABEL_53;
  UnityEngine_Transform__set_localPosition(v36, this->fields.tabLabelPositionSmall, 0LL);
  v37 = (UIWidget_o *)this->fields.tabLabel;
  if ( !v37 )
    goto LABEL_53;
  v38 = this->fields.tabLabelSizeSmall.fields.x;
  v39 = v38 == INFINITY ? -INFINITY : v38;
  UIWidget__set_width(v37, (int)v39, 0LL);
  v40 = (UIWidget_o *)this->fields.tabLabel;
  if ( !v40
    || ((v41 = this->fields.tabLabelSizeSmall.fields.y, v41 != INFINITY) ? (v42 = v41) : (v42 = -INFINITY),
        (UIWidget__set_height(v40, (int)v42, 0LL),
         (noticeNumber = (UnityEngine_Component_o *)this->fields.noticeNumber) == 0LL)
     || (v44 = UnityEngine_Component__get_transform(noticeNumber, 0LL)) == 0LL) )
  {
LABEL_53:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localPosition(v44, this->fields.noticeNumberPositionSmall, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionTab__SetTabSize(MasterMissionTab_o *this, bool isSmall, const MethodInfo *method)
{
  if ( isSmall )
    MasterMissionTab__SetSmallTab(this, (const MethodInfo *)isSmall);
  else
    MasterMissionTab__SetLargeTab(this, (const MethodInfo *)isSmall);
}