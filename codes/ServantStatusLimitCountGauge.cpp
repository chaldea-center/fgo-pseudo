void __fastcall ServantStatusLimitCountGauge___ctor(ServantStatusLimitCountGauge_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UISprite_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42ED32A & 1) == 0 )
  {
    sub_B5D5C4(&UISprite___TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED32A = 1;
  }
  v5 = (struct UISprite_array *)sub_B5D5DC(UISprite___TypeInfo, 4LL);
  this->fields.gaugeSpriteList = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.gaugeSpriteList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusLimitCountGauge__Set(
        ServantStatusLimitCountGauge_o *this,
        int32_t limitCount,
        int32_t limitMax,
        const MethodInfo *method)
{
  ServantStatusLimitCountGauge_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct UISprite_array *gaugeSpriteList; // x8
  signed __int64 v11; // x22
  unsigned __int64 max_length; // x9
  System_String_o **v13; // x8
  System_String_o *v14; // x1
  __int64 v15; // x0

  v6 = this;
  if ( (byte_42ED329 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19591/*"icon_limit_on"*/, limitCount, limitMax, method);
    this = (ServantStatusLimitCountGauge_o *)sub_B5D5C4(&StringLiteral_19590/*"icon_limit_off"*/, v7, v8, v9);
    byte_42ED329 = 1;
  }
  gaugeSpriteList = v6->fields.gaugeSpriteList;
  if ( !gaugeSpriteList )
LABEL_16:
    sub_B5D69C(this, *(_QWORD *)&limitCount);
  v11 = 0LL;
  while ( 1 )
  {
    max_length = gaugeSpriteList->max_length;
    if ( v11 >= (int)max_length )
      break;
    if ( v11 >= max_length )
    {
      v15 = sub_B5D6C8(this);
      sub_B5D668(v15, 0LL);
    }
    this = (ServantStatusLimitCountGauge_o *)gaugeSpriteList->m_Items[v11];
    if ( v11 >= limitMax )
    {
      if ( !this )
        goto LABEL_16;
      v14 = 0LL;
    }
    else
    {
      if ( !this )
        goto LABEL_16;
      if ( v11 >= limitCount )
        v13 = (System_String_o **)&StringLiteral_19590/*"icon_limit_off"*/;
      else
        v13 = (System_String_o **)&StringLiteral_19591/*"icon_limit_on"*/;
      v14 = *v13;
    }
    UISprite__set_spriteName((UISprite_o *)this, v14, 0LL);
    gaugeSpriteList = v6->fields.gaugeSpriteList;
    ++v11;
    if ( !gaugeSpriteList )
      goto LABEL_16;
  }
}