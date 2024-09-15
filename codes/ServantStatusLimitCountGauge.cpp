void __fastcall ServantStatusLimitCountGauge___ctor(ServantStatusLimitCountGauge_o *this, const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A2A43B & 1) == 0 )
  {
    sub_1B761C0(&UISprite___TypeInfo, method);
    byte_4A2A43B = 1;
  }
  v3 = (struct UISprite_array *)sub_1B76268(UISprite___TypeInfo, 4LL);
  this->fields.gaugeSpriteList = v3;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.gaugeSpriteList, (int32_t)v3, v4, v5);
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

  v6 = this;
  if ( (byte_4A2A43A & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_20150/*"icon_limit_on"*/, *(_QWORD *)&limitCount);
    this = (ServantStatusLimitCountGauge_o *)sub_1B761C0(&StringLiteral_20149/*"icon_limit_off"*/, v7);
    byte_4A2A43A = 1;
  }
  gaugeSpriteList = v6->fields.gaugeSpriteList;
  if ( !gaugeSpriteList )
LABEL_16:
    sub_1B7641C(this, *(_QWORD *)&limitCount);
  v9 = 0LL;
  while ( 1 )
  {
    max_length = gaugeSpriteList->max_length;
    if ( v9 >= (int)max_length )
      break;
    if ( v9 >= max_length )
      sub_1B76424(this, *(_QWORD *)&limitCount);
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
        v11 = (System_String_o **)&StringLiteral_20149/*"icon_limit_off"*/;
      else
        v11 = (System_String_o **)&StringLiteral_20150/*"icon_limit_on"*/;
      v12 = *v11;
    }
    UISprite__set_spriteName((UISprite_o *)this, v12, 0LL);
    gaugeSpriteList = v6->fields.gaugeSpriteList;
    ++v9;
    if ( !gaugeSpriteList )
      goto LABEL_16;
  }
}