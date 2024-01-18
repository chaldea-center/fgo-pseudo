void __fastcall ServantStatusLimitCountGauge___ctor(ServantStatusLimitCountGauge_o *this, const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_418D162 & 1) == 0 )
  {
    sub_B2C35C(&UISprite___TypeInfo, method);
    byte_418D162 = 1;
  }
  v3 = (struct UISprite_array *)sub_B2C374(UISprite___TypeInfo, 4LL);
  this->fields.gaugeSpriteList = v3;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.gaugeSpriteList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  __int64 v7; // x1
  struct UISprite_array *gaugeSpriteList; // x8
  signed __int64 v9; // x22
  unsigned __int64 max_length; // x9
  System_String_o **v11; // x8
  System_String_o *v12; // x1
  __int64 v13; // x0

  v6 = this;
  if ( (byte_418D161 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19347/*"icon_limit_on"*/, *(_QWORD *)&limitCount);
    this = (ServantStatusLimitCountGauge_o *)sub_B2C35C(&StringLiteral_19346/*"icon_limit_off"*/, v7);
    byte_418D161 = 1;
  }
  gaugeSpriteList = v6->fields.gaugeSpriteList;
  if ( !gaugeSpriteList )
LABEL_16:
    sub_B2C434(this, *(_QWORD *)&limitCount);
  v9 = 0LL;
  while ( 1 )
  {
    max_length = gaugeSpriteList->max_length;
    if ( v9 >= (int)max_length )
      break;
    if ( v9 >= max_length )
    {
      v13 = sub_B2C460(this);
      sub_B2C400(v13, 0LL);
    }
    this = (ServantStatusLimitCountGauge_o *)gaugeSpriteList->m_Items[v9];
    if ( v9 >= limitMax )
    {
      if ( !this )
        goto LABEL_16;
      v12 = 0LL;
    }
    else
    {
      if ( !this )
        goto LABEL_16;
      if ( v9 >= limitCount )
        v11 = (System_String_o **)&StringLiteral_19346/*"icon_limit_off"*/;
      else
        v11 = (System_String_o **)&StringLiteral_19347/*"icon_limit_on"*/;
      v12 = *v11;
    }
    UISprite__set_spriteName((UISprite_o *)this, v12, 0LL);
    gaugeSpriteList = v6->fields.gaugeSpriteList;
    ++v9;
    if ( !gaugeSpriteList )
      goto LABEL_16;
  }
}