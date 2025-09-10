void ServantStatusLimitCountGauge___ctor(ServantStatusLimitCountGauge_o *this, const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2382F & 1) == 0 )
  {
    sub_1C2D490(&UISprite___TypeInfo);
    byte_4C2382F = 1;
  }
  v3 = (struct UISprite_array *)sub_1C2D538(UISprite___TypeInfo, 4);
  this->fields.gaugeSpriteList = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.gaugeSpriteList, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusLimitCountGauge__Set(
        ServantStatusLimitCountGauge_o *this,
        int32_t limitCount,
        int32_t limitMax,
        const MethodInfo *method)
{
  ServantStatusLimitCountGauge_o *v6; // x19
  struct UISprite_array *gaugeSpriteList; // x8
  signed __int64 v8; // x22
  unsigned __int64 max_length_low; // x9
  System_String_o **v10; // x8
  System_String_o *v11; // x1

  v6 = this;
  if ( (byte_4C2382E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20193/*"icon_limit_on"*/);
    this = (ServantStatusLimitCountGauge_o *)sub_1C2D490(&StringLiteral_20192/*"icon_limit_off"*/);
    byte_4C2382E = 1;
  }
  gaugeSpriteList = v6->fields.gaugeSpriteList;
  if ( !gaugeSpriteList )
LABEL_16:
    sub_1C2D6EC(this, *(_QWORD *)&limitCount);
  v8 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(gaugeSpriteList->max_length);
    if ( v8 >= (int)max_length_low )
      break;
    if ( v8 >= max_length_low )
      sub_1C2D6F4(this, *(_QWORD *)&limitCount, *(_QWORD *)&limitMax);
    this = (ServantStatusLimitCountGauge_o *)gaugeSpriteList->m_Items[v8];
    if ( v8 >= limitMax )
    {
      if ( !this )
        goto LABEL_16;
      v11 = 0;
    }
    else
    {
      if ( !this )
        goto LABEL_16;
      if ( v8 >= limitCount )
        v10 = (System_String_o **)&StringLiteral_20192/*"icon_limit_off"*/;
      else
        v10 = (System_String_o **)&StringLiteral_20193/*"icon_limit_on"*/;
      v11 = *v10;
    }
    UISprite__set_spriteName((UISprite_o *)this, v11, 0);
    gaugeSpriteList = v6->fields.gaugeSpriteList;
    ++v8;
    if ( !gaugeSpriteList )
      goto LABEL_16;
  }
}