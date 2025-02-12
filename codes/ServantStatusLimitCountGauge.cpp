void __fastcall ServantStatusLimitCountGauge___ctor(ServantStatusLimitCountGauge_o *this, const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BB0F06 & 1) == 0 )
  {
    sub_1C13D24(&UISprite___TypeInfo, method);
    byte_4BB0F06 = 1;
  }
  v3 = (struct UISprite_array *)sub_1C13DCC(UISprite___TypeInfo, 4LL);
  this->fields.gaugeSpriteList = v3;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.gaugeSpriteList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_4BB0F05 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_20482/*"icon_error"*/, *(_QWORD *)&limitCount);
    this = (ServantStatusLimitCountGauge_o *)sub_1C13D24(&StringLiteral_20481/*"icon_equip_fixation"*/, v7);
    byte_4BB0F05 = 1;
  }
  gaugeSpriteList = v6->fields.gaugeSpriteList;
  if ( !gaugeSpriteList )
LABEL_16:
    sub_1C13F80(this, *(_QWORD *)&limitCount);
  v9 = 0LL;
  while ( 1 )
  {
    max_length = gaugeSpriteList->max_length;
    if ( v9 >= (int)max_length )
      break;
    if ( v9 >= max_length )
      sub_1C13F88(this, *(_QWORD *)&limitCount);
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
        v11 = (System_String_o **)&StringLiteral_20481/*"icon_equip_fixation"*/;
      else
        v11 = (System_String_o **)&StringLiteral_20482/*"icon_error"*/;
      v12 = *v11;
    }
    UISprite__set_spriteName((UISprite_o *)this, v12, 0LL);
    gaugeSpriteList = v6->fields.gaugeSpriteList;
    ++v9;
    if ( !gaugeSpriteList )
      goto LABEL_16;
  }
}