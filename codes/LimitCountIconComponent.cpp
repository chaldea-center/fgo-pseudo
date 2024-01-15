void __fastcall LimitCountIconComponent___ctor(LimitCountIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall LimitCountIconComponent__Clear(LimitCountIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *limitCountBase; // x0

  limitCountBase = this->fields.limitCountBase;
  if ( !limitCountBase )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(limitCountBase, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCountIconComponent__Set(
        LimitCountIconComponent_o *this,
        int32_t limitCount,
        int32_t limitMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct UISprite_array *limitCountSpriteList; // x8
  UnityEngine_GameObject_o *v9; // x0
  int max_length; // w21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x22
  struct UISprite_array *v15; // x8
  UISprite_o *v16; // x0
  System_String_o **v17; // x8
  UnityEngine_GameObject_o *limitCountBase; // x0

  if ( (byte_40FC249 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19273/*"icon_limit_on"*/, *(_QWORD *)&limitCount);
    sub_B16FFC(&StringLiteral_19272/*"icon_limit_off"*/, v7);
    byte_40FC249 = 1;
  }
  if ( limitMax <= 0 )
  {
    limitCountBase = this->fields.limitCountBase;
    if ( !limitCountBase )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(limitCountBase, 0, 0LL);
  }
  else
  {
    limitCountSpriteList = this->fields.limitCountSpriteList;
    if ( !limitCountSpriteList )
      goto LABEL_18;
    v9 = this->fields.limitCountBase;
    if ( !v9 )
      goto LABEL_18;
    max_length = limitCountSpriteList->max_length;
    UnityEngine_GameObject__SetActive(v9, 1, 0LL);
    if ( max_length >= 1 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        v15 = this->fields.limitCountSpriteList;
        if ( !v15 )
          break;
        if ( (unsigned int)v14 >= v15->max_length )
        {
          sub_B17100(v11, v12, v13);
          sub_B170A0();
        }
        v16 = v15->m_Items[v14];
        if ( !v16 )
          break;
        if ( (int)v14 >= limitCount )
          v17 = (System_String_o **)&StringLiteral_19272/*"icon_limit_off"*/;
        else
          v17 = (System_String_o **)&StringLiteral_19273/*"icon_limit_on"*/;
        UISprite__set_spriteName(v16, *v17, 0LL);
        if ( (int)++v14 >= max_length )
          return;
      }
LABEL_18:
      sub_B170D4();
    }
  }
}


void __fastcall LimitCountIconComponent__Set_28995580(
        LimitCountIconComponent_o *this,
        LimitCountIconComponent_o *limitCountIcon,
        const MethodInfo *method)
{
  struct UISprite_array *limitCountSpriteList; // x8
  UnityEngine_GameObject_o *limitCountBase; // x0
  int max_length; // w22
  UnityEngine_GameObject_o *v8; // x21
  bool activeSelf; // w0
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x21
  struct UISprite_array *v14; // x8
  struct UISprite_array *v15; // x10
  __int64 v16; // x9
  UISprite_o *v17; // x0

  limitCountSpriteList = this->fields.limitCountSpriteList;
  if ( !limitCountSpriteList )
    goto LABEL_15;
  if ( !limitCountIcon )
    goto LABEL_15;
  limitCountBase = limitCountIcon->fields.limitCountBase;
  if ( !limitCountBase )
    goto LABEL_15;
  max_length = limitCountSpriteList->max_length;
  v8 = this->fields.limitCountBase;
  activeSelf = UnityEngine_GameObject__get_activeSelf(limitCountBase, 0LL);
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(v8, activeSelf, 0LL);
  if ( max_length >= 1 )
  {
    v13 = 4LL;
    while ( 1 )
    {
      v14 = this->fields.limitCountSpriteList;
      if ( !v14 )
        break;
      if ( (unsigned int)(v13 - 4) >= v14->max_length )
        goto LABEL_16;
      v15 = limitCountIcon->fields.limitCountSpriteList;
      if ( !v15 )
        break;
      if ( (unsigned int)(v13 - 4) >= v15->max_length )
      {
LABEL_16:
        sub_B17100(v10, v11, v12);
        sub_B170A0();
      }
      v16 = *((_QWORD *)&v15->obj.klass + v13);
      if ( !v16 )
        break;
      v17 = (UISprite_o *)*((_QWORD *)&v14->obj.klass + v13);
      if ( !v17 )
        break;
      UISprite__set_spriteName(v17, *(System_String_o **)(v16 + 464), 0LL);
      if ( (int)++v13 - 4 >= max_length )
        return;
    }
LABEL_15:
    sub_B170D4();
  }
}