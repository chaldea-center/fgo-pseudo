void __fastcall ServantStatusLimitCountGauge___ctor(ServantStatusLimitCountGauge_o *this, const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5756E & 1) == 0 )
  {
    sub_1B885B0(&UISprite___TypeInfo);
    byte_4A5756E = 1;
  }
  v3 = (struct UISprite_array *)sub_1B88658(UISprite___TypeInfo, 4LL);
  this->fields.gaugeSpriteList = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.gaugeSpriteList, (int32_t)v3, v4, v5);
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
  struct UISprite_array *gaugeSpriteList; // x8
  signed __int64 v8; // x22
  unsigned __int64 max_length; // x9
  System_String_o **v10; // x8
  System_String_o *v11; // x1

  v6 = this;
  if ( (byte_4A5756D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20157/*"icon_limit_on"*/);
    this = (ServantStatusLimitCountGauge_o *)sub_1B885B0(&StringLiteral_20156/*"icon_limit_off"*/);
    byte_4A5756D = 1;
  }
  gaugeSpriteList = v6->fields.gaugeSpriteList;
  if ( !gaugeSpriteList )
LABEL_16:
    sub_1B8880C(this, *(_QWORD *)&limitCount);
  v8 = 0LL;
  while ( 1 )
  {
    max_length = gaugeSpriteList->max_length;
    if ( v8 >= (int)max_length )
      break;
    if ( v8 >= max_length )
      sub_1B88814(this, *(_QWORD *)&limitCount);
    this = (ServantStatusLimitCountGauge_o *)gaugeSpriteList->m_Items[v8];
    if ( v8 >= limitMax )
    {
      if ( !this )
        goto LABEL_16;
      v11 = 0LL;
    }
    else
    {
      if ( !this )
        goto LABEL_16;
      if ( v8 >= limitCount )
        v10 = (System_String_o **)&StringLiteral_20156/*"icon_limit_off"*/;
      else
        v10 = (System_String_o **)&StringLiteral_20157/*"icon_limit_on"*/;
      v11 = *v10;
    }
    UISprite__set_spriteName((UISprite_o *)this, v11, 0LL);
    gaugeSpriteList = v6->fields.gaugeSpriteList;
    ++v8;
    if ( !gaugeSpriteList )
      goto LABEL_16;
  }
}