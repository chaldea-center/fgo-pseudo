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

  if ( (byte_49FF6C3 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17427/*"btn_bg_on_4"*/, isOn);
    sub_1B640C8(&StringLiteral_17422/*"btn_bg_off_4"*/, v5);
    sub_1B640C8(&StringLiteral_17423/*"btn_bg_off_5"*/, v6);
    sub_1B640C8(&StringLiteral_17428/*"btn_bg_on_5"*/, v7);
    byte_49FF6C3 = 1;
  }
  if ( isOn )
    v8 = (System_String_o **)&StringLiteral_17428/*"btn_bg_on_5"*/;
  else
    v8 = (System_String_o **)&StringLiteral_17423/*"btn_bg_off_5"*/;
  if ( isOn )
    v9 = &StringLiteral_17427/*"btn_bg_on_4"*/;
  else
    v9 = &StringLiteral_17422/*"btn_bg_off_4"*/;
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
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      UnityEngine_Transform__set_localPosition(transform, this->fields.tabPositionLarge, 0LL);
      transform = (UnityEngine_Transform_o *)this->fields.tabCollider;
      if ( transform )
      {
        UnityEngine_BoxCollider__set_center(
          (UnityEngine_BoxCollider_o *)transform,
          this->fields.tabColliderPositionLarge,
          0LL);
        transform = (UnityEngine_Transform_o *)this->fields.tabCollider;
        if ( transform )
        {
          UnityEngine_BoxCollider__set_size(
            (UnityEngine_BoxCollider_o *)transform,
            this->fields.tabColliderSizeLarge,
            0LL);
          transform = (UnityEngine_Transform_o *)this->fields.tabBg;
          if ( transform )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
            if ( transform )
            {
              UnityEngine_Transform__set_localPosition(transform, this->fields.tabBgPositionLarge, 0LL);
              transform = (UnityEngine_Transform_o *)this->fields.tabBg;
              if ( transform )
              {
                x = this->fields.tabBgSizeLarge.fields.x;
                v6 = x == INFINITY ? 0x80000000 : (int)x;
                UIWidget__set_width((UIWidget_o *)transform, v6, 0LL);
                transform = (UnityEngine_Transform_o *)this->fields.tabBg;
                if ( transform )
                {
                  y = this->fields.tabBgSizeLarge.fields.y;
                  v8 = y == INFINITY ? 0x80000000 : (int)y;
                  UIWidget__set_height((UIWidget_o *)transform, v8, 0LL);
                  transform = (UnityEngine_Transform_o *)this->fields.tabBg;
                  if ( transform )
                  {
                    UISprite__set_spriteName((UISprite_o *)transform, this->fields.tabBgSpriteNameLarge, 0LL);
                    transform = (UnityEngine_Transform_o *)this->fields.labelBg;
                    if ( transform )
                    {
                      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
                      if ( transform )
                      {
                        UnityEngine_Transform__set_localPosition(transform, this->fields.labelBgPositionLarge, 0LL);
                        transform = (UnityEngine_Transform_o *)this->fields.labelBg;
                        if ( transform )
                        {
                          v9 = this->fields.labelBgSizeLarge.fields.x;
                          v10 = v9 == INFINITY ? 0x80000000 : (int)v9;
                          UIWidget__set_width((UIWidget_o *)transform, v10, 0LL);
                          transform = (UnityEngine_Transform_o *)this->fields.labelBg;
                          if ( transform )
                          {
                            v11 = this->fields.labelBgSizeLarge.fields.y;
                            v12 = v11 == INFINITY ? 0x80000000 : (int)v11;
                            UIWidget__set_height((UIWidget_o *)transform, v12, 0LL);
                            transform = (UnityEngine_Transform_o *)this->fields.labelBg;
                            if ( transform )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)transform,
                                this->fields.labelBgSpriteNameLarge,
                                0LL);
                              transform = (UnityEngine_Transform_o *)this->fields.selectedTabBg;
                              if ( transform )
                              {
                                transform = UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0LL);
                                if ( transform )
                                {
                                  UnityEngine_Transform__set_localPosition(
                                    transform,
                                    this->fields.selectedTabPositionLarge,
                                    0LL);
                                  transform = (UnityEngine_Transform_o *)this->fields.selectedTabBg;
                                  if ( transform )
                                  {
                                    v13 = this->fields.selectedTabSizeLarge.fields.x;
                                    v14 = v13 == INFINITY ? 0x80000000 : (int)v13;
                                    UIWidget__set_width((UIWidget_o *)transform, v14, 0LL);
                                    transform = (UnityEngine_Transform_o *)this->fields.selectedTabBg;
                                    if ( transform )
                                    {
                                      v15 = this->fields.selectedTabSizeLarge.fields.y;
                                      v16 = v15 == INFINITY ? 0x80000000 : (int)v15;
                                      UIWidget__set_height((UIWidget_o *)transform, v16, 0LL);
                                      transform = (UnityEngine_Transform_o *)this->fields.selectedTabBg;
                                      if ( transform )
                                      {
                                        UISprite__set_spriteName(
                                          (UISprite_o *)transform,
                                          this->fields.selectedTabSpriteNameLarge,
                                          0LL);
                                        transform = (UnityEngine_Transform_o *)this->fields.tabLabel;
                                        if ( transform )
                                        {
                                          transform = UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)transform,
                                                        0LL);
                                          if ( transform )
                                          {
                                            UnityEngine_Transform__set_localPosition(
                                              transform,
                                              this->fields.tabLabelPositionLarge,
                                              0LL);
                                            transform = (UnityEngine_Transform_o *)this->fields.tabLabel;
                                            if ( transform )
                                            {
                                              v17 = this->fields.tabLabelSizeLarge.fields.x;
                                              v18 = v17 == INFINITY ? 0x80000000 : (int)v17;
                                              UIWidget__set_width((UIWidget_o *)transform, v18, 0LL);
                                              transform = (UnityEngine_Transform_o *)this->fields.tabLabel;
                                              if ( transform )
                                              {
                                                v19 = this->fields.tabLabelSizeLarge.fields.y;
                                                v20 = v19 == INFINITY ? 0x80000000 : (int)v19;
                                                UIWidget__set_height((UIWidget_o *)transform, v20, 0LL);
                                                transform = (UnityEngine_Transform_o *)this->fields.noticeNumber;
                                                if ( transform )
                                                {
                                                  transform = UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)transform,
                                                                0LL);
                                                  if ( transform )
                                                  {
                                                    UnityEngine_Transform__set_localPosition(
                                                      transform,
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
    sub_1B64324(transform);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
}


void __fastcall MasterMissionTab__SetSmallTab(MasterMissionTab_o *this, const MethodInfo *method)
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
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.tabPositionSmall, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabCollider;
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_BoxCollider__set_center(
    (UnityEngine_BoxCollider_o *)gameObject,
    this->fields.tabColliderPositionSmall,
    0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabCollider;
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, this->fields.tabColliderSizeSmall, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabBg;
  if ( !gameObject )
    goto LABEL_53;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.tabBgPositionSmall, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabBg;
  if ( !gameObject )
    goto LABEL_53;
  x = this->fields.tabBgSizeSmall.fields.x;
  v6 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)gameObject, v6, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabBg;
  if ( !gameObject )
    goto LABEL_53;
  y = this->fields.tabBgSizeSmall.fields.y;
  v8 = y == INFINITY ? 0x80000000 : (int)y;
  UIWidget__set_height((UIWidget_o *)gameObject, v8, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabBg;
  if ( !gameObject )
    goto LABEL_53;
  UISprite__set_spriteName((UISprite_o *)gameObject, this->fields.tabBgSpriteNameSmall, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.labelBg;
  if ( !gameObject )
    goto LABEL_53;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)gameObject,
    this->fields.labelBgPositionSmall,
    0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.labelBg;
  if ( !gameObject )
    goto LABEL_53;
  v9 = this->fields.labelBgSizeSmall.fields.x;
  v10 = v9 == INFINITY ? 0x80000000 : (int)v9;
  UIWidget__set_width((UIWidget_o *)gameObject, v10, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.labelBg;
  if ( !gameObject )
    goto LABEL_53;
  v11 = this->fields.labelBgSizeSmall.fields.y;
  v12 = v11 == INFINITY ? 0x80000000 : (int)v11;
  UIWidget__set_height((UIWidget_o *)gameObject, v12, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.labelBg;
  if ( !gameObject )
    goto LABEL_53;
  UISprite__set_spriteName((UISprite_o *)gameObject, this->fields.labelBgSpriteNameSmall, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.selectedTabBg;
  if ( !gameObject )
    goto LABEL_53;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)gameObject,
    this->fields.selectedTabPositionSmall,
    0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.selectedTabBg;
  if ( !gameObject )
    goto LABEL_53;
  v13 = this->fields.selectedTabSizeSmall.fields.x;
  v14 = v13 == INFINITY ? 0x80000000 : (int)v13;
  UIWidget__set_width((UIWidget_o *)gameObject, v14, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.selectedTabBg;
  if ( !gameObject )
    goto LABEL_53;
  v15 = this->fields.selectedTabSizeSmall.fields.y;
  v16 = v15 == INFINITY ? 0x80000000 : (int)v15;
  UIWidget__set_height((UIWidget_o *)gameObject, v16, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.selectedTabBg;
  if ( !gameObject )
    goto LABEL_53;
  UISprite__set_spriteName((UISprite_o *)gameObject, this->fields.selectedTabSpriteNameSmall, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabLabel;
  if ( !gameObject )
    goto LABEL_53;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)gameObject,
    this->fields.tabLabelPositionSmall,
    0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabLabel;
  if ( !gameObject )
    goto LABEL_53;
  v17 = this->fields.tabLabelSizeSmall.fields.x;
  v18 = v17 == INFINITY ? 0x80000000 : (int)v17;
  UIWidget__set_width((UIWidget_o *)gameObject, v18, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.tabLabel;
  if ( !gameObject
    || ((v19 = this->fields.tabLabelSizeSmall.fields.y, v19 != INFINITY) ? (v20 = (int)v19) : (v20 = 0x80000000),
        (UIWidget__set_height((UIWidget_o *)gameObject, v20, 0LL),
         (gameObject = (UnityEngine_GameObject_o *)this->fields.noticeNumber) == 0LL)
     || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)gameObject,
                                                    0LL)) == 0LL) )
  {
LABEL_53:
    sub_1B64324(gameObject);
  }
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)gameObject,
    this->fields.noticeNumberPositionSmall,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionTab__SetTabSize(MasterMissionTab_o *this, bool isSmall, const MethodInfo *method)
{
  if ( isSmall )
    MasterMissionTab__SetSmallTab(this, (const MethodInfo *)isSmall);
  else
    MasterMissionTab__SetLargeTab(this, (const MethodInfo *)isSmall);
}