void __fastcall LimitCountIconComponent___ctor(LimitCountIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall LimitCountIconComponent__Clear(LimitCountIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *limitCountBase; // x0

  limitCountBase = this->fields.limitCountBase;
  if ( !limitCountBase )
    sub_B2C434(0LL, method);
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
  __int64 v10; // x22
  struct UISprite_array *v11; // x8
  System_String_o **v12; // x8
  __int64 v13; // x0

  v6 = this;
  if ( (byte_418711E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19347/*"icon_limit_on"*/, *(_QWORD *)&limitCount);
    this = (LimitCountIconComponent_o *)sub_B2C35C(&StringLiteral_19346/*"icon_limit_off"*/, v7);
    byte_418711E = 1;
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
      v10 = 0LL;
      while ( 1 )
      {
        v11 = v6->fields.limitCountSpriteList;
        if ( !v11 )
          break;
        if ( (unsigned int)v10 >= v11->max_length )
        {
          v13 = sub_B2C460(this);
          sub_B2C400(v13, 0LL);
        }
        this = (LimitCountIconComponent_o *)v11->m_Items[v10];
        if ( !this )
          break;
        if ( (int)v10 >= limitCount )
          v12 = (System_String_o **)&StringLiteral_19346/*"icon_limit_off"*/;
        else
          v12 = (System_String_o **)&StringLiteral_19347/*"icon_limit_on"*/;
        UISprite__set_spriteName((UISprite_o *)this, *v12, 0LL);
        if ( (int)++v10 >= max_length )
          return;
      }
LABEL_18:
      sub_B2C434(this, *(_QWORD *)&limitCount);
    }
  }
}


void __fastcall LimitCountIconComponent__Set_24110344(
        LimitCountIconComponent_o *this,
        LimitCountIconComponent_o *limitCountIcon,
        const MethodInfo *method)
{
  struct UISprite_array *limitCountSpriteList; // x8
  LimitCountIconComponent_o *v5; // x19
  int max_length; // w22
  UnityEngine_GameObject_o *limitCountBase; // x21
  __int64 v8; // x21
  struct UISprite_array *v9; // x8
  struct UISprite_array *v10; // x10
  __int64 v11; // x9
  __int64 v12; // x0

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
    v8 = 4LL;
    while ( 1 )
    {
      v9 = v5->fields.limitCountSpriteList;
      if ( !v9 )
        break;
      if ( (unsigned int)(v8 - 4) >= v9->max_length )
        goto LABEL_16;
      v10 = limitCountIcon->fields.limitCountSpriteList;
      if ( !v10 )
        break;
      if ( (unsigned int)(v8 - 4) >= v10->max_length )
      {
LABEL_16:
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
      }
      v11 = *((_QWORD *)&v10->obj.klass + v8);
      if ( !v11 )
        break;
      this = (LimitCountIconComponent_o *)*((_QWORD *)&v9->obj.klass + v8);
      if ( !this )
        break;
      UISprite__set_spriteName((UISprite_o *)this, *(System_String_o **)(v11 + 464), 0LL);
      if ( (int)++v8 - 4 >= max_length )
        return;
    }
LABEL_15:
    sub_B2C434(this, limitCountIcon);
  }
}