void __fastcall ServantStatusLimitCountGauge___ctor(ServantStatusLimitCountGauge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UISprite_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12AA6 & 1) == 0 )
  {
    sub_1BCA7E0(&UISprite___TypeInfo, method, v2);
    byte_4B12AA6 = 1;
  }
  v4 = (struct UISprite_array *)sub_1BCA888(UISprite___TypeInfo, 4LL);
  this->fields.gaugeSpriteList = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.gaugeSpriteList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
  __int64 v8; // x2
  struct UISprite_array *gaugeSpriteList; // x8
  signed __int64 v10; // x22
  unsigned __int64 max_length; // x9
  System_String_o **v12; // x8
  System_String_o *v13; // x1

  v6 = this;
  if ( (byte_4B12AA5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20370/*"icon_limit_on"*/, *(_QWORD *)&limitCount, *(_QWORD *)&limitMax);
    this = (ServantStatusLimitCountGauge_o *)sub_1BCA7E0(&StringLiteral_20369/*"icon_limit_off"*/, v7, v8);
    byte_4B12AA5 = 1;
  }
  gaugeSpriteList = v6->fields.gaugeSpriteList;
  if ( !gaugeSpriteList )
LABEL_16:
    sub_1BCAA3C(this, *(_QWORD *)&limitCount);
  v10 = 0LL;
  while ( 1 )
  {
    max_length = gaugeSpriteList->max_length;
    if ( v10 >= (int)max_length )
      break;
    if ( v10 >= max_length )
      sub_1BCAA44(this, *(_QWORD *)&limitCount);
    this = (ServantStatusLimitCountGauge_o *)gaugeSpriteList->m_Items[v10];
    if ( v10 >= limitMax )
    {
      if ( !this )
        goto LABEL_16;
      v13 = 0LL;
    }
    else
    {
      if ( !this )
        goto LABEL_16;
      if ( v10 >= limitCount )
        v12 = (System_String_o **)&StringLiteral_20369/*"icon_limit_off"*/;
      else
        v12 = (System_String_o **)&StringLiteral_20370/*"icon_limit_on"*/;
      v13 = *v12;
    }
    UISprite__set_spriteName((UISprite_o *)this, v13, 0LL);
    gaugeSpriteList = v6->fields.gaugeSpriteList;
    ++v10;
    if ( !gaugeSpriteList )
      goto LABEL_16;
  }
}