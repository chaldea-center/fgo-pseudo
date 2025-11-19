void EventBoardGameTokenItem___ctor(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventBoardGameTokenItem__DestroyItem(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CB0484 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB0484 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71659676(gameObject, 0);
}


void EventBoardGameTokenItem__Init(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *tokenNameLabel; // x0

  if ( (byte_4CB0480 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB0480 = 1;
  }
  this->fields.index = 0;
  this->fields.haved = 0;
  v3 = StringLiteral_1/*""*/;
  this->fields.tokenName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC(&this->fields.tokenName, v3);
  v4 = StringLiteral_1/*""*/;
  this->fields.tokenImageId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC(&this->fields.tokenImageId, v4);
  tokenNameLabel = this->fields.tokenNameLabel;
  if ( !tokenNameLabel )
    sub_1C6BC60(0, v5);
  UILabel__set_text(tokenNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.callback = 0;
  sub_1C6B9AC(&this->fields.callback, 0);
}


void EventBoardGameTokenItem__OnClickItem(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_int__o *callback; // x8

  if ( (byte_4CB0483 & 1) == 0 )
  {
    sub_1C6BA08(&Method_EventBoardGameTokenItem_OnClickItem__);
    byte_4CB0483 = 1;
  }
  if ( this->fields.callback && this->fields.haved )
  {
    v3 = Method_EventBoardGameTokenItem_OnClickItem__;
    if ( (*((_BYTE *)Method_EventBoardGameTokenItem_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_EventBoardGameTokenItem_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    callback = this->fields.callback;
    if ( !callback )
      sub_1C6BC60(v5, v6);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      (unsigned int)this->fields.index,
      callback->fields.method);
  }
}


void EventBoardGameTokenItem__SetItem(
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
  EventBoardGameTokenItem_o *v13; // x1
  const MethodInfo *v14; // x3

  v10 = this;
  if ( (byte_4CB0481 & 1) == 0 )
  {
    this = (EventBoardGameTokenItem_o *)sub_1C6BA08(&StringLiteral_24214/*"token_enpty"*/);
    byte_4CB0481 = 1;
  }
  v11 = *item;
  if ( ent )
  {
    if ( !v11 )
      goto LABEL_14;
    v11->fields.index = ent->fields.tokenId;
    v12 = System_Int32__ToString((int)ent + 20, 0);
    v11->fields.tokenName = v12;
    this = (EventBoardGameTokenItem_o *)sub_1C6B9AC(&v11->fields.tokenName, v12);
    v11 = *item;
    if ( !*item )
      goto LABEL_14;
    v11->fields.haved = haved;
    if ( haved )
    {
      this = (EventBoardGameTokenItem_o *)System_Int32__ToString((int)ent + 44, 0);
      v11 = *item;
      if ( *item )
      {
        v13 = this;
        goto LABEL_11;
      }
LABEL_14:
      sub_1C6BC60(this, item);
    }
  }
  else if ( !v11 )
  {
    goto LABEL_14;
  }
  v13 = (EventBoardGameTokenItem_o *)StringLiteral_24214/*"token_enpty"*/;
LABEL_11:
  v11->fields.tokenImageId = (struct System_String_o *)v13;
  sub_1C6B9AC(&v11->fields.tokenImageId, v13);
  EventBoardGameTokenItem__SetTokenInfo(v10, *item, 1, v14);
  if ( callback )
  {
    v10->fields.callback = callback;
    sub_1C6B9AC(&v10->fields.callback, callback);
  }
}


void EventBoardGameTokenItem__SetTokenInfo(
        EventBoardGameTokenItem_o *this,
        EventBoardGameTokenItem_o *item,
        bool dispNo,
        const MethodInfo *method)
{
  EventBoardGameTokenItem_o *v6; // x20
  struct System_String_o *tokenName; // x1
  System_String_o **p_tokenName; // x23
  struct System_String_o *tokenImageId; // x1

  v6 = this;
  if ( (byte_4CB0482 & 1) == 0 )
  {
    this = (EventBoardGameTokenItem_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB0482 = 1;
  }
  if ( !item )
    goto LABEL_13;
  v6->fields.index = item->fields.index;
  v6->fields.haved = item->fields.haved;
  p_tokenName = &item->fields.tokenName;
  tokenName = item->fields.tokenName;
  v6->fields.tokenName = tokenName;
  sub_1C6B9AC(&v6->fields.tokenName, tokenName);
  tokenImageId = item->fields.tokenImageId;
  v6->fields.tokenImageId = tokenImageId;
  sub_1C6B9AC(&v6->fields.tokenImageId, tokenImageId);
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
  UILabel__set_text((UILabel_o *)this, *p_tokenName, 0);
  if ( !System_String__IsNullOrEmpty(item->fields.tokenImageId, 0) )
  {
    this = (EventBoardGameTokenItem_o *)v6->fields.tokenImage;
    if ( this )
    {
      UISprite__set_atlas((UISprite_o *)this, item->fields.eventAtlas, 0);
      this = (EventBoardGameTokenItem_o *)v6->fields.tokenImage;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, item->fields.tokenImageId, 0);
        return;
      }
    }
LABEL_13:
    sub_1C6BC60(this, item);
  }
}


System_String_o *EventBoardGameTokenItem__get_TokenName(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  return this->fields.tokenName;
}