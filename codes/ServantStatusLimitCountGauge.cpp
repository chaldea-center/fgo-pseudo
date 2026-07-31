void ServantStatusLimitCountGauge___ctor(ServantStatusLimitCountGauge_o *this, const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59349D6 & 1) == 0 )
  {
    sub_21FFC50(&UISprite___TypeInfo);
    byte_59349D6 = 1;
  }
  v3 = (struct UISprite_array *)sub_21FFD10(UISprite___TypeInfo, 4);
  this->fields.gaugeSpriteList = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.gaugeSpriteList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  signed __int64 v8; // x24
  unsigned __int64 max_length_low; // x9
  System_String_o **v10; // x8
  System_String_o *v11; // x1

  v6 = this;
  if ( (byte_59349D5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21143/*"icon_limit_on"*/);
    this = (ServantStatusLimitCountGauge_o *)sub_21FFC50(&StringLiteral_21142/*"icon_limit_off"*/);
    byte_59349D5 = 1;
  }
  gaugeSpriteList = v6->fields.gaugeSpriteList;
  if ( !gaugeSpriteList )
LABEL_17:
    sub_21FFECC(this, *(_QWORD *)&limitCount);
  v8 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(gaugeSpriteList->max_length);
    if ( v8 >= (int)max_length_low )
      break;
    if ( v8 >= limitMax )
    {
      if ( v8 >= max_length_low )
LABEL_19:
        sub_21FFED4(this);
      this = (ServantStatusLimitCountGauge_o *)gaugeSpriteList->m_Items[v8];
      if ( !this )
        goto LABEL_17;
      v11 = 0;
    }
    else
    {
      if ( v8 >= max_length_low )
        goto LABEL_19;
      this = (ServantStatusLimitCountGauge_o *)gaugeSpriteList->m_Items[v8];
      if ( !this )
        goto LABEL_17;
      if ( v8 >= limitCount )
        v10 = (System_String_o **)&StringLiteral_21142/*"icon_limit_off"*/;
      else
        v10 = (System_String_o **)&StringLiteral_21143/*"icon_limit_on"*/;
      v11 = *v10;
    }
    UISprite__set_spriteName((UISprite_o *)this, v11, 0);
    gaugeSpriteList = v6->fields.gaugeSpriteList;
    ++v8;
    if ( !gaugeSpriteList )
      goto LABEL_17;
  }
}