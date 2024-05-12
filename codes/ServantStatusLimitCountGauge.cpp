void __fastcall ServantStatusLimitCountGauge___ctor(ServantStatusLimitCountGauge_o *this, const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_439293C & 1) == 0 )
  {
    sub_B775C4(&UISprite___TypeInfo);
    byte_439293C = 1;
  }
  v3 = (struct UISprite_array *)sub_B775DC(UISprite___TypeInfo, 4LL);
  this->fields.gaugeSpriteList = v3;
  sub_B77560(
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
  struct UISprite_array *gaugeSpriteList; // x8
  signed __int64 v8; // x22
  unsigned __int64 max_length; // x9
  System_String_o **v10; // x8
  System_String_o *v11; // x1
  __int64 v12; // x0

  v6 = this;
  if ( (byte_439293B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19739/*"icon_limit_on"*/);
    this = (ServantStatusLimitCountGauge_o *)sub_B775C4(&StringLiteral_19738/*"icon_limit_off"*/);
    byte_439293B = 1;
  }
  gaugeSpriteList = v6->fields.gaugeSpriteList;
  if ( !gaugeSpriteList )
LABEL_16:
    sub_B7769C(this, *(_QWORD *)&limitCount);
  v8 = 0LL;
  while ( 1 )
  {
    max_length = gaugeSpriteList->max_length;
    if ( v8 >= (int)max_length )
      break;
    if ( v8 >= max_length )
    {
      v12 = sub_B776C8(this);
      sub_B77668(v12, 0LL);
    }
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
        v10 = (System_String_o **)&StringLiteral_19738/*"icon_limit_off"*/;
      else
        v10 = (System_String_o **)&StringLiteral_19739/*"icon_limit_on"*/;
      v11 = *v10;
    }
    UISprite__set_spriteName((UISprite_o *)this, v11, 0LL);
    gaugeSpriteList = v6->fields.gaugeSpriteList;
    ++v8;
    if ( !gaugeSpriteList )
      goto LABEL_16;
  }
}