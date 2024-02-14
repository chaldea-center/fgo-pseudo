void __fastcall EventBoardGameTokenItem___ctor(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBoardGameTokenItem__DestroyItem(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4216E53 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216E53 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
}


void __fastcall EventBoardGameTokenItem__Init(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UILabel_o *tokenNameLabel; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4216E4F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4216E4F = 1;
  }
  *(_DWORD *)&this->fields.haved = 0;
  *(&this->fields.haved + 4) = 0;
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.tokenName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.tokenName, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.tokenImageId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.tokenImageId, v10, v11, v12, v13, v14, v15, v16);
  tokenNameLabel = this->fields.tokenNameLabel;
  if ( !tokenNameLabel )
    sub_B0D97C(0LL);
  UILabel__set_text(tokenNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.callback = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.callback, 0LL, v18, v19, v20, v21, v22, v23);
}


void __fastcall EventBoardGameTokenItem__OnClickItem(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_int__o *callback; // x0

  if ( (byte_4216E52 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int__Invoke__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4216E52 = 1;
  }
  if ( this->fields.callback && *(&this->fields.haved + 4) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    callback = this->fields.callback;
    if ( !callback )
      sub_B0D97C(0LL);
    System_Action_int___Invoke(
      callback,
      *(_DWORD *)&this->fields.haved,
      (const MethodInfo_246D4C0 *)Method_System_Action_int__Invoke__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBoardGameTokenItem__SetItem(
        EventBoardGameTokenItem_o *this,
        EventBoardGameTokenItem_o **item,
        EventBoardGameTokenEntity_o *ent,
        bool haved,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EventBoardGameTokenItem_o *v12; // x20
  EventBoardGameTokenItem_o *v13; // x24
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  EventBoardGameTokenItem_o *v20; // x8
  System_Int32_array **v21; // x1
  struct System_String_o **p_tokenImageId; // x0
  const MethodInfo *v23; // x3
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  v12 = this;
  if ( (byte_4216E50 & 1) == 0 )
  {
    this = (EventBoardGameTokenItem_o *)sub_B0D8A4(&StringLiteral_22798/*"token_enpty"*/, item);
    byte_4216E50 = 1;
  }
  if ( ent )
  {
    if ( !*item )
      goto LABEL_15;
    *(_DWORD *)&(*item)->fields.haved = ent->fields.tokenId;
    v13 = *item;
    this = (EventBoardGameTokenItem_o *)System_Int32__ToString((int)ent + 20, 0LL);
    if ( !v13 )
      goto LABEL_15;
    v13->fields.tokenName = (struct System_String_o *)this;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->fields.tokenName,
      (System_Int32_array **)this,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    if ( !*item )
      goto LABEL_15;
    *(&(*item)->fields.haved + 4) = haved;
    if ( haved )
    {
      this = (EventBoardGameTokenItem_o *)System_Int32__ToString((int)ent + 44, 0LL);
      v20 = *item;
      if ( *item )
      {
        v20->fields.tokenImageId = (struct System_String_o *)this;
        v21 = (System_Int32_array **)this;
        p_tokenImageId = &v20->fields.tokenImageId;
        goto LABEL_12;
      }
LABEL_15:
      sub_B0D97C(this);
    }
  }
  this = *item;
  if ( !*item )
    goto LABEL_15;
  v21 = (System_Int32_array **)StringLiteral_22798/*"token_enpty"*/;
  this->fields.tokenImageId = (struct System_String_o *)StringLiteral_22798/*"token_enpty"*/;
  p_tokenImageId = &this->fields.tokenImageId;
LABEL_12:
  sub_B0D840(
    (BattleServantConfConponent_o *)p_tokenImageId,
    v21,
    (System_String_array **)ent,
    (System_String_array **)haved,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  EventBoardGameTokenItem__SetTokenInfo(v12, *item, 1, v23);
  if ( callback )
  {
    v12->fields.callback = callback;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v12->fields.callback,
      (System_Int32_array **)callback,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBoardGameTokenItem__SetTokenInfo(
        EventBoardGameTokenItem_o *this,
        EventBoardGameTokenItem_o *item,
        bool dispNo,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EventBoardGameTokenItem_o *v10; // x20
  System_Int32_array **tokenName; // x1
  System_Int32_array **tokenImageId; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_o *v19; // x1

  v10 = this;
  if ( (byte_4216E51 & 1) == 0 )
  {
    this = (EventBoardGameTokenItem_o *)sub_B0D8A4(&StringLiteral_1/*""*/, item);
    byte_4216E51 = 1;
  }
  if ( !item )
    goto LABEL_13;
  *(_DWORD *)&v10->fields.haved = *(_DWORD *)&item->fields.haved;
  *(&v10->fields.haved + 4) = *(&item->fields.haved + 4);
  tokenName = (System_Int32_array **)item->fields.tokenName;
  v10->fields.tokenName = (struct System_String_o *)tokenName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v10->fields.tokenName,
    tokenName,
    (System_String_array **)dispNo,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  tokenImageId = (System_Int32_array **)item->fields.tokenImageId;
  v10->fields.tokenImageId = (struct System_String_o *)tokenImageId;
  sub_B0D840((BattleServantConfConponent_o *)&v10->fields.tokenImageId, tokenImageId, v13, v14, v15, v16, v17, v18);
  this = (EventBoardGameTokenItem_o *)v10->fields.tokenNameLabel;
  if ( dispNo )
  {
    if ( !this )
      goto LABEL_13;
    v19 = item->fields.tokenName;
  }
  else
  {
    if ( !this )
      goto LABEL_13;
    v19 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)this, v19, 0LL);
  if ( System_String__IsNullOrEmpty(item->fields.tokenImageId, 0LL) )
    return;
  this = (EventBoardGameTokenItem_o *)v10->fields.tokenImage;
  if ( !this
    || (UISprite__set_atlas((UISprite_o *)this, item->fields.eventAtlas, 0LL),
        (this = (EventBoardGameTokenItem_o *)v10->fields.tokenImage) == 0LL) )
  {
LABEL_13:
    sub_B0D97C(this);
  }
  UISprite__set_spriteName((UISprite_o *)this, item->fields.tokenImageId, 0LL);
}


System_String_o *__fastcall EventBoardGameTokenItem__get_TokenName(
        EventBoardGameTokenItem_o *this,
        const MethodInfo *method)
{
  return this->fields.tokenName;
}