void __fastcall ServantStatusLimitCountGauge___ctor(ServantStatusLimitCountGauge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UISprite_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4101947 & 1) == 0 )
  {
    sub_B16FFC(&UISprite___TypeInfo, method);
    byte_4101947 = 1;
  }
  v4 = (struct UISprite_array *)sub_B17014(UISprite___TypeInfo, 4LL, v2);
  this->fields.gaugeSpriteList = v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.gaugeSpriteList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  UISprite_o *v11; // x0
  System_String_o **v12; // x8
  System_String_o *v13; // x1

  v6 = this;
  if ( (byte_4101946 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19273, *(_QWORD *)&limitCount);
    this = (ServantStatusLimitCountGauge_o *)sub_B16FFC(&StringLiteral_19272, v7);
    byte_4101946 = 1;
  }
  gaugeSpriteList = v6->fields.gaugeSpriteList;
  if ( !gaugeSpriteList )
LABEL_16:
    sub_B170D4();
  v9 = 0LL;
  while ( 1 )
  {
    max_length = gaugeSpriteList->max_length;
    if ( v9 >= (int)max_length )
      break;
    if ( v9 >= max_length )
    {
      sub_B17100(this, *(_QWORD *)&limitCount, *(_QWORD *)&limitMax);
      sub_B170A0();
    }
    v11 = gaugeSpriteList->m_Items[v9];
    if ( v9 >= limitMax )
    {
      if ( !v11 )
        goto LABEL_16;
      v13 = 0LL;
    }
    else
    {
      if ( !v11 )
        goto LABEL_16;
      if ( v9 >= limitCount )
        v12 = (System_String_o **)&StringLiteral_19272;
      else
        v12 = (System_String_o **)&StringLiteral_19273;
      v13 = *v12;
    }
    UISprite__set_spriteName(v11, v13, 0LL);
    gaugeSpriteList = v6->fields.gaugeSpriteList;
    ++v9;
    if ( !gaugeSpriteList )
      goto LABEL_16;
  }
}