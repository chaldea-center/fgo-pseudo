void __fastcall EventBoardGameTokenItem___ctor(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBoardGameTokenItem__DestroyItem(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40FC53E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC53E = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
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

  if ( (byte_40FC53A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FC53A = 1;
  }
  *(_DWORD *)&this->fields.haved = 0;
  *(&this->fields.haved + 4) = 0;
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.tokenName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.tokenName, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.tokenImageId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.tokenImageId, v10, v11, v12, v13, v14, v15, v16);
  tokenNameLabel = this->fields.tokenNameLabel;
  if ( !tokenNameLabel )
    sub_B170D4();
  UILabel__set_text(tokenNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.callback = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.callback, 0LL, v18, v19, v20, v21, v22, v23);
}


void __fastcall EventBoardGameTokenItem__OnClickItem(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_int__o *callback; // x0

  if ( (byte_40FC53D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FC53D = 1;
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
      sub_B170D4();
    System_Action_int___Invoke(
      callback,
      *(_DWORD *)&this->fields.haved,
      (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
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
  EventBoardGameTokenItem_o *v13; // x24
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_o *v21; // x0
  EventBoardGameTokenItem_o *v22; // x8
  System_Int32_array **v23; // x1
  BattleServantConfConponent_o *p_tokenImageId; // x0
  EventBoardGameTokenItem_o *v25; // x0
  const MethodInfo *v26; // x3
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40FC53B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22629/*"token_enpty"*/, item);
    byte_40FC53B = 1;
  }
  if ( ent )
  {
    if ( !*item )
      goto LABEL_15;
    *(_DWORD *)&(*item)->fields.haved = ent->fields.tokenId;
    v13 = *item;
    v14 = (System_Int32_array **)System_Int32__ToString((int)ent + 20, 0LL);
    if ( !v13 )
      goto LABEL_15;
    v13->fields.tokenName = (struct System_String_o *)v14;
    sub_B16F98((BattleServantConfConponent_o *)&v13->fields.tokenName, v14, v15, v16, v17, v18, v19, v20);
    if ( !*item )
      goto LABEL_15;
    *(&(*item)->fields.haved + 4) = haved;
    if ( haved )
    {
      v21 = System_Int32__ToString((int)ent + 44, 0LL);
      v22 = *item;
      if ( *item )
      {
        v22->fields.tokenImageId = v21;
        v23 = (System_Int32_array **)v21;
        p_tokenImageId = (BattleServantConfConponent_o *)&v22->fields.tokenImageId;
        goto LABEL_12;
      }
LABEL_15:
      sub_B170D4();
    }
  }
  v25 = *item;
  if ( !*item )
    goto LABEL_15;
  v23 = (System_Int32_array **)StringLiteral_22629/*"token_enpty"*/;
  v25->fields.tokenImageId = (struct System_String_o *)StringLiteral_22629/*"token_enpty"*/;
  p_tokenImageId = (BattleServantConfConponent_o *)&v25->fields.tokenImageId;
LABEL_12:
  sub_B16F98(
    p_tokenImageId,
    v23,
    (System_String_array **)ent,
    (System_String_array **)haved,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  EventBoardGameTokenItem__SetTokenInfo(this, *item, 1, v26);
  if ( callback )
  {
    this->fields.callback = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callback,
      (System_Int32_array **)callback,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
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
  struct System_String_o *tokenName; // x1
  struct System_String_o *tokenImageId; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UILabel_o *tokenNameLabel; // x0
  System_String_o *v20; // x1
  UISprite_o *tokenImage; // x0
  UISprite_o *v22; // x0

  if ( (byte_40FC53C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, item);
    byte_40FC53C = 1;
  }
  if ( !item )
    goto LABEL_13;
  *(_DWORD *)&this->fields.haved = *(_DWORD *)&item->fields.haved;
  *(&this->fields.haved + 4) = *(&item->fields.haved + 4);
  tokenName = item->fields.tokenName;
  this->fields.tokenName = tokenName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tokenName,
    (System_Int32_array **)tokenName,
    (System_String_array **)dispNo,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  tokenImageId = item->fields.tokenImageId;
  this->fields.tokenImageId = tokenImageId;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tokenImageId,
    (System_Int32_array **)tokenImageId,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  tokenNameLabel = this->fields.tokenNameLabel;
  if ( dispNo )
  {
    if ( !tokenNameLabel )
      goto LABEL_13;
    v20 = item->fields.tokenName;
  }
  else
  {
    if ( !tokenNameLabel )
      goto LABEL_13;
    v20 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text(tokenNameLabel, v20, 0LL);
  if ( System_String__IsNullOrEmpty(item->fields.tokenImageId, 0LL) )
    return;
  tokenImage = this->fields.tokenImage;
  if ( !tokenImage
    || (UISprite__set_atlas(tokenImage, item->fields.eventAtlas, 0LL), (v22 = this->fields.tokenImage) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  UISprite__set_spriteName(v22, item->fields.tokenImageId, 0LL);
}


System_String_o *__fastcall EventBoardGameTokenItem__get_TokenName(
        EventBoardGameTokenItem_o *this,
        const MethodInfo *method)
{
  return this->fields.tokenName;
}