void MasterMissionTab___ctor(MasterMissionTab_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_String_o *MasterMissionTab__GetButtonSpriteName(MasterMissionTab_o *this, bool isOn, const MethodInfo *method)
{
  System_String_o **v5; // x9
  __int64 *v6; // x10
  System_String_o **v7; // x8

  if ( (byte_4D2FA4A & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17552/*"btn_bg_on_4"*/);
    sub_1C94098(&StringLiteral_17547/*"btn_bg_off_4"*/);
    sub_1C94098(&StringLiteral_17548/*"btn_bg_off_5"*/);
    sub_1C94098(&StringLiteral_17553/*"btn_bg_on_5"*/);
    byte_4D2FA4A = 1;
  }
  if ( isOn )
    v5 = (System_String_o **)&StringLiteral_17553/*"btn_bg_on_5"*/;
  else
    v5 = (System_String_o **)&StringLiteral_17548/*"btn_bg_off_5"*/;
  if ( isOn )
    v6 = &StringLiteral_17552/*"btn_bg_on_4"*/;
  else
    v6 = &StringLiteral_17547/*"btn_bg_off_4"*/;
  if ( this->fields.isSmall )
    v7 = v5;
  else
    v7 = (System_String_o **)v6;
  return *v7;
}


void MasterMissionTab__SetLargeTab(MasterMissionTab_o *this, const MethodInfo *method)
{
  _BOOL4 isViewLargeTab; // w8
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  float x; // s0
  int32_t v7; // w1
  float y; // s0
  int32_t v9; // w1
  float v10; // s0
  int32_t v11; // w1
  float v12; // s0
  int32_t v13; // w1
  float v14; // s0
  int32_t v15; // w1
  float v16; // s0
  int32_t v17; // w1
  float v18; // s0
  int32_t v19; // w1
  float v20; // s0
  int32_t v21; // w1

  isViewLargeTab = this->fields.isViewLargeTab;
  this->fields.isSmall = 0;
  if ( isViewLargeTab )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( transform )
    {
      UnityEngine_Transform__set_localPosition(transform, this->fields.tabPositionLarge, 0);
      transform = (UnityEngine_Transform_o *)this->fields.tabCollider;
      if ( transform )
      {
        UnityEngine_BoxCollider__set_center(
          (UnityEngine_BoxCollider_o *)transform,
          this->fields.tabColliderPositionLarge,
          0);
        transform = (UnityEngine_Transform_o *)this->fields.tabCollider;
        if ( transform )
        {
          UnityEngine_BoxCollider__set_size(
            (UnityEngine_BoxCollider_o *)transform,
            this->fields.tabColliderSizeLarge,
            0);
          transform = (UnityEngine_Transform_o *)this->fields.tabBg;
          if ( transform )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
            if ( transform )
            {
              UnityEngine_Transform__set_localPosition(transform, this->fields.tabBgPositionLarge, 0);
              transform = (UnityEngine_Transform_o *)this->fields.tabBg;
              if ( transform )
              {
                x = this->fields.tabBgSizeLarge.fields.x;
                v7 = x == INFINITY ? 0x80000000 : (int)x;
                UIWidget__set_width((UIWidget_o *)transform, v7, 0);
                transform = (UnityEngine_Transform_o *)this->fields.tabBg;
                if ( transform )
                {
                  y = this->fields.tabBgSizeLarge.fields.y;
                  v9 = y == INFINITY ? 0x80000000 : (int)y;
                  UIWidget__set_height((UIWidget_o *)transform, v9, 0);
                  transform = (UnityEngine_Transform_o *)this->fields.tabBg;
                  if ( transform )
                  {
                    UISprite__set_spriteName((UISprite_o *)transform, this->fields.tabBgSpriteNameLarge, 0);
                    transform = (UnityEngine_Transform_o *)this->fields.labelBg;
                    if ( transform )
                    {
                      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
                      if ( transform )
                      {
                        UnityEngine_Transform__set_localPosition(transform, this->fields.labelBgPositionLarge, 0);
                        transform = (UnityEngine_Transform_o *)this->fields.labelBg;
                        if ( transform )
                        {
                          v10 = this->fields.labelBgSizeLarge.fields.x;
                          v11 = v10 == INFINITY ? 0x80000000 : (int)v10;
                          UIWidget__set_width((UIWidget_o *)transform, v11, 0);
                          transform = (UnityEngine_Transform_o *)this->fields.labelBg;
                          if ( transform )
                          {
                            v12 = this->fields.labelBgSizeLarge.fields.y;
                            v13 = v12 == INFINITY ? 0x80000000 : (int)v12;
                            UIWidget__set_height((UIWidget_o *)transform, v13, 0);
                            transform = (UnityEngine_Transform_o *)this->fields.labelBg;
                            if ( transform )
                            {
                              UISprite__set_spriteName((UISprite_o *)transform, this->fields.labelBgSpriteNameLarge, 0);
                              transform = (UnityEngine_Transform_o *)this->fields.selectedTabBg;
                              if ( transform )
                              {
                                transform = UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0);
                                if ( transform )
                                {
                                  UnityEngine_Transform__set_localPosition(
                                    transform,
                                    this->fields.selectedTabPositionLarge,
                                    0);
                                  transform = (UnityEngine_Transform_o *)this->fields.selectedTabBg;
                                  if ( transform )
                                  {
                                    v14 = this->fields.selectedTabSizeLarge.fields.x;
                                    v15 = v14 == INFINITY ? 0x80000000 : (int)v14;
                                    UIWidget__set_width((UIWidget_o *)transform, v15, 0);
                                    transform = (UnityEngine_Transform_o *)this->fields.selectedTabBg;
                                    if ( transform )
                                    {
                                      v16 = this->fields.selectedTabSizeLarge.fields.y;
                                      v17 = v16 == INFINITY ? 0x80000000 : (int)v16;
                                      UIWidget__set_height((UIWidget_o *)transform, v17, 0);
                                      transform = (UnityEngine_Transform_o *)this->fields.selectedTabBg;
                                      if ( transform )
                                      {
                                        UISprite__set_spriteName(
                                          (UISprite_o *)transform,
                                          this->fields.selectedTabSpriteNameLarge,
                                          0);
                                        transform = (UnityEngine_Transform_o *)this->fields.tabLabel;
                                        if ( transform )
                                        {
                                          transform = UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)transform,
                                                        0);
                                          if ( transform )
                                          {
                                            UnityEngine_Transform__set_localPosition(
                                              transform,
                                              this->fields.tabLabelPositionLarge,
                                              0);
                                            transform = (UnityEngine_Transform_o *)this->fields.tabLabel;
                                            if ( transform )
                                            {
                                              v18 = this->fields.tabLabelSizeLarge.fields.x;
                                              v19 = v18 == INFINITY ? 0x80000000 : (int)v18;
                                              UIWidget__set_width((UIWidget_o *)transform, v19, 0);
                                              transform = (UnityEngine_Transform_o *)this->fields.tabLabel;
                                              if ( transform )
                                              {
                                                v20 = this->fields.tabLabelSizeLarge.fields.y;
                                                v21 = v20 == INFINITY ? 0x80000000 : (int)v20;
                                                UIWidget__set_height((UIWidget_o *)transform, v21, 0);
                                                transform = (UnityEngine_Transform_o *)this->fields.noticeNumber;
                                                if ( transform )
                                                {
                                                  transform = UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)transform,
                                                                0);
                                                  if ( transform )
                                                  {
                                                    UnityEngine_Transform__set_localPosition(
                                                      transform,
                                                      this->fields.noticeNumberPositionLarge,
                                                      0);
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
    sub_1C942F0(transform, v5);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
}


void MasterMissionTab__SetSmallTab(MasterMissionTab_o *this, const MethodInfo *method)
{
  _BOOL4 isViewLargeTab; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  float x; // s0
  int32_t v7; // w1
  float y; // s0
  int32_t v9; // w1
  float v10; // s0
  int32_t v11; // w1
  float v12; // s0
  int32_t v13; // w1
  float v14; // s0
  int32_t v15; // w1
  float v16; // s0
  int32_t v17; // w1
  float v18; // s0
  int32_t v19; // w1
  float v20; // s0
  int32_t v21; // w1

  isViewLargeTab = this->fields.isViewLargeTab;
  this->fields.isSmall = 1;
  if ( !isViewLargeTab )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.tabPositionSmall, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabCollider;
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)gameObject, this->fields.tabColliderPositionSmall, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabCollider;
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, this->fields.tabColliderSizeSmall, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabBg;
  if ( !gameObject )
    goto LABEL_53;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.tabBgPositionSmall, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabBg;
  if ( !gameObject )
    goto LABEL_53;
  x = this->fields.tabBgSizeSmall.fields.x;
  v7 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)gameObject, v7, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabBg;
  if ( !gameObject )
    goto LABEL_53;
  y = this->fields.tabBgSizeSmall.fields.y;
  v9 = y == INFINITY ? 0x80000000 : (int)y;
  UIWidget__set_height((UIWidget_o *)gameObject, v9, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabBg;
  if ( !gameObject )
    goto LABEL_53;
  UISprite__set_spriteName((UISprite_o *)gameObject, this->fields.tabBgSpriteNameSmall, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.labelBg;
  if ( !gameObject )
    goto LABEL_53;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.labelBgPositionSmall, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.labelBg;
  if ( !gameObject )
    goto LABEL_53;
  v10 = this->fields.labelBgSizeSmall.fields.x;
  v11 = v10 == INFINITY ? 0x80000000 : (int)v10;
  UIWidget__set_width((UIWidget_o *)gameObject, v11, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.labelBg;
  if ( !gameObject )
    goto LABEL_53;
  v12 = this->fields.labelBgSizeSmall.fields.y;
  v13 = v12 == INFINITY ? 0x80000000 : (int)v12;
  UIWidget__set_height((UIWidget_o *)gameObject, v13, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.labelBg;
  if ( !gameObject )
    goto LABEL_53;
  UISprite__set_spriteName((UISprite_o *)gameObject, this->fields.labelBgSpriteNameSmall, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.selectedTabBg;
  if ( !gameObject )
    goto LABEL_53;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)gameObject,
    this->fields.selectedTabPositionSmall,
    0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.selectedTabBg;
  if ( !gameObject )
    goto LABEL_53;
  v14 = this->fields.selectedTabSizeSmall.fields.x;
  v15 = v14 == INFINITY ? 0x80000000 : (int)v14;
  UIWidget__set_width((UIWidget_o *)gameObject, v15, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.selectedTabBg;
  if ( !gameObject )
    goto LABEL_53;
  v16 = this->fields.selectedTabSizeSmall.fields.y;
  v17 = v16 == INFINITY ? 0x80000000 : (int)v16;
  UIWidget__set_height((UIWidget_o *)gameObject, v17, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.selectedTabBg;
  if ( !gameObject )
    goto LABEL_53;
  UISprite__set_spriteName((UISprite_o *)gameObject, this->fields.selectedTabSpriteNameSmall, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabLabel;
  if ( !gameObject )
    goto LABEL_53;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.tabLabelPositionSmall, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabLabel;
  if ( !gameObject )
    goto LABEL_53;
  v18 = this->fields.tabLabelSizeSmall.fields.x;
  v19 = v18 == INFINITY ? 0x80000000 : (int)v18;
  UIWidget__set_width((UIWidget_o *)gameObject, v19, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabLabel;
  if ( !gameObject
    || ((v20 = this->fields.tabLabelSizeSmall.fields.y, v20 != INFINITY) ? (v21 = (int)v20) : (v21 = 0x80000000),
        (UIWidget__set_height((UIWidget_o *)gameObject, v21, 0),
         (gameObject = (UnityEngine_GameObject_o *)this->fields.noticeNumber) == 0)
     || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)gameObject,
                                                    0)) == 0) )
  {
LABEL_53:
    sub_1C942F0(gameObject, v5);
  }
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)gameObject,
    this->fields.noticeNumberPositionSmall,
    0);
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionTab__SetTabSize(MasterMissionTab_o *this, bool isSmall, const MethodInfo *method)
{
  if ( isSmall )
    MasterMissionTab__SetSmallTab(this, (const MethodInfo *)isSmall);
  else
    MasterMissionTab__SetLargeTab(this, (const MethodInfo *)isSmall);
}