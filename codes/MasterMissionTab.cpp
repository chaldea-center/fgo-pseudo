void MasterMissionTab___ctor(MasterMissionTab_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_String_o *MasterMissionTab__GetButtonSpriteName(MasterMissionTab_o *this, bool isOn, const MethodInfo *method)
{
  System_String_o **v5; // x9
  __int64 *v6; // x10
  System_String_o **v7; // x8

  if ( (byte_4C3ABFC & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17464/*"btn_bg_on_4"*/);
    sub_1C32C20(&StringLiteral_17459/*"btn_bg_off_4"*/);
    sub_1C32C20(&StringLiteral_17460/*"btn_bg_off_5"*/);
    sub_1C32C20(&StringLiteral_17465/*"btn_bg_on_5"*/);
    byte_4C3ABFC = 1;
  }
  if ( isOn )
    v5 = (System_String_o **)&StringLiteral_17465/*"btn_bg_on_5"*/;
  else
    v5 = (System_String_o **)&StringLiteral_17460/*"btn_bg_off_5"*/;
  if ( isOn )
    v6 = &StringLiteral_17464/*"btn_bg_on_4"*/;
  else
    v6 = &StringLiteral_17459/*"btn_bg_off_4"*/;
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
  float x; // s0
  int32_t v6; // w1
  float y; // s0
  int32_t v8; // w1
  float v9; // s0
  int32_t v10; // w1
  float v11; // s0
  int32_t v12; // w1
  float v13; // s0
  int32_t v14; // w1
  float v15; // s0
  int32_t v16; // w1
  float v17; // s0
  int32_t v18; // w1
  float v19; // s0
  int32_t v20; // w1

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
                v6 = x == INFINITY ? 0x80000000 : (int)x;
                UIWidget__set_width((UIWidget_o *)transform, v6, 0);
                transform = (UnityEngine_Transform_o *)this->fields.tabBg;
                if ( transform )
                {
                  y = this->fields.tabBgSizeLarge.fields.y;
                  v8 = y == INFINITY ? 0x80000000 : (int)y;
                  UIWidget__set_height((UIWidget_o *)transform, v8, 0);
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
                          v9 = this->fields.labelBgSizeLarge.fields.x;
                          v10 = v9 == INFINITY ? 0x80000000 : (int)v9;
                          UIWidget__set_width((UIWidget_o *)transform, v10, 0);
                          transform = (UnityEngine_Transform_o *)this->fields.labelBg;
                          if ( transform )
                          {
                            v11 = this->fields.labelBgSizeLarge.fields.y;
                            v12 = v11 == INFINITY ? 0x80000000 : (int)v11;
                            UIWidget__set_height((UIWidget_o *)transform, v12, 0);
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
                                    v13 = this->fields.selectedTabSizeLarge.fields.x;
                                    v14 = v13 == INFINITY ? 0x80000000 : (int)v13;
                                    UIWidget__set_width((UIWidget_o *)transform, v14, 0);
                                    transform = (UnityEngine_Transform_o *)this->fields.selectedTabBg;
                                    if ( transform )
                                    {
                                      v15 = this->fields.selectedTabSizeLarge.fields.y;
                                      v16 = v15 == INFINITY ? 0x80000000 : (int)v15;
                                      UIWidget__set_height((UIWidget_o *)transform, v16, 0);
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
                                              v17 = this->fields.tabLabelSizeLarge.fields.x;
                                              v18 = v17 == INFINITY ? 0x80000000 : (int)v17;
                                              UIWidget__set_width((UIWidget_o *)transform, v18, 0);
                                              transform = (UnityEngine_Transform_o *)this->fields.tabLabel;
                                              if ( transform )
                                              {
                                                v19 = this->fields.tabLabelSizeLarge.fields.y;
                                                v20 = v19 == INFINITY ? 0x80000000 : (int)v19;
                                                UIWidget__set_height((UIWidget_o *)transform, v20, 0);
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
    sub_1C32E7C(transform);
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
  float x; // s0
  int32_t v6; // w1
  float y; // s0
  int32_t v8; // w1
  float v9; // s0
  int32_t v10; // w1
  float v11; // s0
  int32_t v12; // w1
  float v13; // s0
  int32_t v14; // w1
  float v15; // s0
  int32_t v16; // w1
  float v17; // s0
  int32_t v18; // w1
  float v19; // s0
  int32_t v20; // w1

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
  v6 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)gameObject, v6, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabBg;
  if ( !gameObject )
    goto LABEL_53;
  y = this->fields.tabBgSizeSmall.fields.y;
  v8 = y == INFINITY ? 0x80000000 : (int)y;
  UIWidget__set_height((UIWidget_o *)gameObject, v8, 0);
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
  v9 = this->fields.labelBgSizeSmall.fields.x;
  v10 = v9 == INFINITY ? 0x80000000 : (int)v9;
  UIWidget__set_width((UIWidget_o *)gameObject, v10, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.labelBg;
  if ( !gameObject )
    goto LABEL_53;
  v11 = this->fields.labelBgSizeSmall.fields.y;
  v12 = v11 == INFINITY ? 0x80000000 : (int)v11;
  UIWidget__set_height((UIWidget_o *)gameObject, v12, 0);
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
  v13 = this->fields.selectedTabSizeSmall.fields.x;
  v14 = v13 == INFINITY ? 0x80000000 : (int)v13;
  UIWidget__set_width((UIWidget_o *)gameObject, v14, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.selectedTabBg;
  if ( !gameObject )
    goto LABEL_53;
  v15 = this->fields.selectedTabSizeSmall.fields.y;
  v16 = v15 == INFINITY ? 0x80000000 : (int)v15;
  UIWidget__set_height((UIWidget_o *)gameObject, v16, 0);
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
  v17 = this->fields.tabLabelSizeSmall.fields.x;
  v18 = v17 == INFINITY ? 0x80000000 : (int)v17;
  UIWidget__set_width((UIWidget_o *)gameObject, v18, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabLabel;
  if ( !gameObject
    || ((v19 = this->fields.tabLabelSizeSmall.fields.y, v19 != INFINITY) ? (v20 = (int)v19) : (v20 = 0x80000000),
        (UIWidget__set_height((UIWidget_o *)gameObject, v20, 0),
         (gameObject = (UnityEngine_GameObject_o *)this->fields.noticeNumber) == 0)
     || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)gameObject,
                                                    0)) == 0) )
  {
LABEL_53:
    sub_1C32E7C(gameObject);
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