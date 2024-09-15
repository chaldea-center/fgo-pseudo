void __fastcall EventBoardGameTokenItem___ctor(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBoardGameTokenItem__DestroyItem(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A31BD7 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A31BD7 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69287408(gameObject, 0LL);
}


void __fastcall EventBoardGameTokenItem__Init(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  UILabel_o *tokenNameLabel; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A31BD3 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_1/*""*/, method);
    byte_4A31BD3 = 1;
  }
  this->fields.index = 0;
  this->fields.haved = 0;
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.tokenName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.tokenName, v5, v2, v3);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.tokenImageId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.tokenImageId, v6, v7, v8);
  tokenNameLabel = this->fields.tokenNameLabel;
  if ( !tokenNameLabel )
    sub_1B7641C(0LL, v9);
  UILabel__set_text(tokenNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.callback = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.callback, 0, v11, v12);
}


void __fastcall EventBoardGameTokenItem__OnClickItem(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_int__o *callback; // x8

  if ( (byte_4A31BD6 & 1) == 0 )
  {
    sub_1B761C0(&Method_EventBoardGameTokenItem_OnClickItem__, method);
    byte_4A31BD6 = 1;
  }
  if ( this->fields.callback && this->fields.haved )
  {
    v3 = Method_EventBoardGameTokenItem_OnClickItem__;
    if ( (*((_BYTE *)Method_EventBoardGameTokenItem_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B761D8(Method_EventBoardGameTokenItem_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    callback = this->fields.callback;
    if ( !callback )
      sub_1B7641C(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      (unsigned int)this->fields.index,
      *(_QWORD *)&callback->fields.extra_arg);
  }
}


void __fastcall EventBoardGameTokenItem__SetItem(
        EventBoardGameTokenItem_o *this,
        EventBoardGameTokenItem_o **item,
        EventBoardGameTokenEntity_o *ent,
        bool haved,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  EventBoardGameTokenItem_o *v10; // x20
  EventBoardGameTokenItem_o *v11; // x22
  System_String_o *v12; // x0
  int32_t v13; // w2
  char v14; // w3
  EventBoardGameTokenItem_o *v15; // x1
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  char v18; // w3

  v10 = this;
  if ( (byte_4A31BD4 & 1) == 0 )
  {
    this = (EventBoardGameTokenItem_o *)sub_1B761C0(&StringLiteral_23965/*"token_enpty"*/, item);
    byte_4A31BD4 = 1;
  }
  v11 = *item;
  if ( ent )
  {
    if ( !v11 )
      goto LABEL_14;
    v11->fields.index = ent->fields.tokenId;
    v12 = System_Int32__ToString((int)ent + 20, 0LL);
    v11->fields.tokenName = v12;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&v11->fields.tokenName, (int32_t)v12, v13, v14);
    v11 = *item;
    if ( !*item )
      goto LABEL_14;
    v11->fields.haved = haved;
    if ( haved )
    {
      this = (EventBoardGameTokenItem_o *)System_Int32__ToString((int)ent + 44, 0LL);
      v11 = *item;
      if ( *item )
      {
        v15 = this;
        goto LABEL_11;
      }
LABEL_14:
      sub_1B7641C(this, item);
    }
  }
  else if ( !v11 )
  {
    goto LABEL_14;
  }
  v15 = (EventBoardGameTokenItem_o *)StringLiteral_23965/*"token_enpty"*/;
LABEL_11:
  v11->fields.tokenImageId = (struct System_String_o *)v15;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v11->fields.tokenImageId, (int32_t)v15, (int32_t)ent, haved);
  EventBoardGameTokenItem__SetTokenInfo(v10, *item, 1, v16);
  if ( callback )
  {
    v10->fields.callback = callback;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&v10->fields.callback, (int32_t)callback, v17, v18);
  }
}


void __fastcall EventBoardGameTokenItem__SetTokenInfo(
        EventBoardGameTokenItem_o *this,
        EventBoardGameTokenItem_o *item,
        bool dispNo,
        const MethodInfo *method)
{
  EventBoardGameTokenItem_o *v6; // x20
  struct System_String_o *tokenName; // x1
  System_String_o **p_tokenName; // x23
  struct System_String_o *tokenImageId; // x1
  char v10; // w2
  int32_t v11; // w3

  v6 = this;
  if ( (byte_4A31BD5 & 1) == 0 )
  {
    this = (EventBoardGameTokenItem_o *)sub_1B761C0(&StringLiteral_1/*""*/, item);
    byte_4A31BD5 = 1;
  }
  if ( !item )
    goto LABEL_13;
  v6->fields.index = item->fields.index;
  v6->fields.haved = item->fields.haved;
  p_tokenName = &item->fields.tokenName;
  tokenName = item->fields.tokenName;
  v6->fields.tokenName = tokenName;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v6->fields.tokenName, (int32_t)tokenName, dispNo, (int32_t)method);
  tokenImageId = item->fields.tokenImageId;
  v6->fields.tokenImageId = tokenImageId;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v6->fields.tokenImageId, (int32_t)tokenImageId, v10, v11);
  this = (EventBoardGameTokenItem_o *)v6->fields.tokenNameLabel;
  if ( dispNo )
  {
    if ( !this )
      goto LABEL_13;
  }
  else
  {
    if ( !this )
      goto LABEL_13;
    p_tokenName = (System_String_o **)&StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)this, *p_tokenName, 0LL);
  if ( !System_String__IsNullOrEmpty(item->fields.tokenImageId, 0LL) )
  {
    this = (EventBoardGameTokenItem_o *)v6->fields.tokenImage;
    if ( this )
    {
      UISprite__set_atlas((UISprite_o *)this, item->fields.eventAtlas, 0LL);
      this = (EventBoardGameTokenItem_o *)v6->fields.tokenImage;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, item->fields.tokenImageId, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1B7641C(this, item);
  }
}


System_String_o *__fastcall EventBoardGameTokenItem__get_TokenName(
        EventBoardGameTokenItem_o *this,
        const MethodInfo *method)
{
  return this->fields.tokenName;
}