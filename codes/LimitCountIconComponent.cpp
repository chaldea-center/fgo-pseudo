void __fastcall LimitCountIconComponent___ctor(LimitCountIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall LimitCountIconComponent__Clear(LimitCountIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *limitCountBase; // x0

  limitCountBase = this->fields.limitCountBase;
  if ( !limitCountBase )
    sub_1BDBAD4(0LL, method);
  UnityEngine_GameObject__SetActive(limitCountBase, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCountIconComponent__Set(
        LimitCountIconComponent_o *this,
        int32_t limitCount,
        int32_t limitMax,
        const MethodInfo *method)
{
  LimitCountIconComponent_o *v6; // x20
  __int64 v7; // x1
  struct UISprite_array *limitCountSpriteList; // x8
  int max_length; // w21
  __int64 v10; // x2
  int32_t v11; // w22
  struct UISprite_array *v12; // x8
  System_String_o **v13; // x8

  v6 = this;
  if ( (byte_4B43F11 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20226/*"icon_limit_on"*/, *(_QWORD *)&limitCount);
    this = (LimitCountIconComponent_o *)sub_1BDB878(&StringLiteral_20225/*"icon_limit_off"*/, v7);
    byte_4B43F11 = 1;
  }
  if ( limitMax <= 0 )
  {
    this = (LimitCountIconComponent_o *)v6->fields.limitCountBase;
    if ( !this )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    limitCountSpriteList = v6->fields.limitCountSpriteList;
    if ( !limitCountSpriteList )
      goto LABEL_18;
    this = (LimitCountIconComponent_o *)v6->fields.limitCountBase;
    if ( !this )
      goto LABEL_18;
    max_length = limitCountSpriteList->max_length;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        v12 = v6->fields.limitCountSpriteList;
        if ( !v12 )
          break;
        if ( v11 >= v12->max_length )
          sub_1BDBADC(this, *(_QWORD *)&limitCount, v10);
        this = (LimitCountIconComponent_o *)v12->m_Items[v11];
        if ( !this )
          break;
        if ( v11 >= limitCount )
          v13 = (System_String_o **)&StringLiteral_20225/*"icon_limit_off"*/;
        else
          v13 = (System_String_o **)&StringLiteral_20226/*"icon_limit_on"*/;
        UISprite__set_spriteName((UISprite_o *)this, *v13, 0LL);
        if ( max_length == ++v11 )
          return;
      }
LABEL_18:
      sub_1BDBAD4(this, *(_QWORD *)&limitCount);
    }
  }
}


void __fastcall LimitCountIconComponent__Set_39971928(
        LimitCountIconComponent_o *this,
        LimitCountIconComponent_o *limitCountIcon,
        const MethodInfo *method)
{
  struct UISprite_array *limitCountSpriteList; // x8
  LimitCountIconComponent_o *v5; // x19
  int max_length; // w22
  UnityEngine_GameObject_o *limitCountBase; // x21
  __int64 v8; // x2
  il2cpp_array_size_t v9; // w21
  struct UISprite_array *v10; // x8
  struct UISprite_array *v11; // x9
  UISprite_o *v12; // x9

  limitCountSpriteList = this->fields.limitCountSpriteList;
  if ( !limitCountSpriteList )
    goto LABEL_15;
  if ( !limitCountIcon )
    goto LABEL_15;
  v5 = this;
  this = (LimitCountIconComponent_o *)limitCountIcon->fields.limitCountBase;
  if ( !this )
    goto LABEL_15;
  max_length = limitCountSpriteList->max_length;
  limitCountBase = v5->fields.limitCountBase;
  this = (LimitCountIconComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
  if ( !limitCountBase )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(limitCountBase, (unsigned __int8)this & 1, 0LL);
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = v5->fields.limitCountSpriteList;
      if ( !v10 )
        break;
      if ( v9 >= v10->max_length )
        goto LABEL_16;
      v11 = limitCountIcon->fields.limitCountSpriteList;
      if ( !v11 )
        break;
      if ( v9 >= v11->max_length )
LABEL_16:
        sub_1BDBADC(this, limitCountIcon, v8);
      v12 = v11->m_Items[v9];
      if ( !v12 )
        break;
      this = (LimitCountIconComponent_o *)v10->m_Items[v9];
      if ( !this )
        break;
      UISprite__set_spriteName((UISprite_o *)this, v12->fields.mSpriteName, 0LL);
      if ( max_length == ++v9 )
        return;
    }
LABEL_15:
    sub_1BDBAD4(this, limitCountIcon);
  }
}