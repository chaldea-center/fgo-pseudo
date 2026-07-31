void LimitCountIconComponent___ctor(LimitCountIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void LimitCountIconComponent__Clear(LimitCountIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *limitCountBase; // x0

  limitCountBase = this->fields.limitCountBase;
  if ( !limitCountBase )
    sub_21FFECC(0, method);
  UnityEngine_GameObject__SetActive(limitCountBase, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void LimitCountIconComponent__Set(
        LimitCountIconComponent_o *this,
        int32_t limitCount,
        int32_t limitMax,
        const MethodInfo *method)
{
  LimitCountIconComponent_o *v6; // x20
  struct UISprite_array *limitCountSpriteList; // x8
  il2cpp_array_size_t max_length; // x21
  __int64 v9; // x24
  struct UISprite_array *v10; // x8
  System_String_o **v11; // x8

  v6 = this;
  if ( (byte_5937B2D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21143/*"icon_limit_on"*/);
    this = (LimitCountIconComponent_o *)sub_21FFC50(&StringLiteral_21142/*"icon_limit_off"*/);
    byte_5937B2D = 1;
  }
  if ( limitMax <= 0 )
  {
    this = (LimitCountIconComponent_o *)v6->fields.limitCountBase;
    if ( !this )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    if ( (int)max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = v6->fields.limitCountSpriteList;
        if ( !v10 )
          break;
        if ( (unsigned int)v9 >= LODWORD(v10->max_length) )
          sub_21FFED4(this);
        this = (LimitCountIconComponent_o *)v10->m_Items[v9];
        if ( !this )
          break;
        if ( (int)v9 >= limitCount )
          v11 = (System_String_o **)&StringLiteral_21142/*"icon_limit_off"*/;
        else
          v11 = (System_String_o **)&StringLiteral_21143/*"icon_limit_on"*/;
        UISprite__set_spriteName((UISprite_o *)this, *v11, 0);
        if ( (_DWORD)max_length == (_DWORD)++v9 )
          return;
      }
LABEL_18:
      sub_21FFECC(this, *(_QWORD *)&limitCount);
    }
  }
}


void LimitCountIconComponent__Set_47970104(
        LimitCountIconComponent_o *this,
        LimitCountIconComponent_o *limitCountIcon,
        const MethodInfo *method)
{
  struct UISprite_array *limitCountSpriteList; // x8
  LimitCountIconComponent_o *v5; // x19
  il2cpp_array_size_t max_length; // x22
  UnityEngine_GameObject_o *limitCountBase; // x21
  __int64 v8; // x21
  struct UISprite_array *v9; // x8
  struct UISprite_array *v10; // x9
  UISprite_o *v11; // x9

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
  this = (LimitCountIconComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
  if ( !limitCountBase )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(limitCountBase, (unsigned __int8)this & 1, 0);
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = v5->fields.limitCountSpriteList;
      if ( !v9 )
        break;
      if ( (unsigned int)v8 >= LODWORD(v9->max_length) )
        goto LABEL_16;
      v10 = limitCountIcon->fields.limitCountSpriteList;
      if ( !v10 )
        break;
      if ( (unsigned int)v8 >= LODWORD(v10->max_length) )
LABEL_16:
        sub_21FFED4(this);
      v11 = v10->m_Items[v8];
      if ( !v11 )
        break;
      this = (LimitCountIconComponent_o *)v9->m_Items[v8];
      if ( !this )
        break;
      UISprite__set_spriteName((UISprite_o *)this, v11->fields.mSpriteName, 0);
      if ( (_DWORD)max_length == (_DWORD)++v8 )
        return;
    }
LABEL_15:
    sub_21FFECC(this, limitCountIcon);
  }
}