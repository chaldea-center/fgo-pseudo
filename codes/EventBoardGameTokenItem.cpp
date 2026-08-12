void EventBoardGameTokenItem___ctor(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventBoardGameTokenItem__DestroyItem(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_596A4DC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A4DC = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


void EventBoardGameTokenItem__Init(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  UILabel_o *tokenNameLabel; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_596A4D8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A4D8 = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.index = 0;
  this->fields.haved = 0;
  this->fields.tokenName = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tokenName, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.tokenImageId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tokenImageId, v10, v11, v12, v13, v14, v15, v16);
  tokenNameLabel = this->fields.tokenNameLabel;
  if ( !tokenNameLabel )
    sub_2213CDC(0, v17);
  UILabel__set_text(tokenNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.callback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callback, 0, v19, v20, v21, v22, v23, v24);
}


void EventBoardGameTokenItem__OnClickItem(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_int__o *callback; // x8

  if ( (byte_596A4DB & 1) == 0 )
  {
    sub_2213A60(&Method_EventBoardGameTokenItem_OnClickItem__);
    byte_596A4DB = 1;
  }
  if ( this->fields.callback && this->fields.haved )
  {
    v3 = Method_EventBoardGameTokenItem_OnClickItem__;
    if ( (*((_BYTE *)Method_EventBoardGameTokenItem_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventBoardGameTokenItem_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    callback = this->fields.callback;
    if ( !callback )
      sub_2213CDC(v5, v6);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      (unsigned int)this->fields.index,
      callback->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventBoardGameTokenItem__SetItem(
        EventBoardGameTokenItem_o *this,
        EventBoardGameTokenItem_o **item,
        EventBoardGameTokenEntity_o *ent,
        bool haved,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  EventBoardGameTokenItem_o *v12; // x20
  EventBoardGameTokenItem_o *v13; // x24
  System_String_o *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  EventBoardGameTokenItem_o *v21; // x8
  int32_t v22; // w1
  MissionNaviTransitionBoardItem_o *p_tokenImageId; // x0
  const MethodInfo *v24; // x3
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  v12 = this;
  if ( (byte_596A4D9 & 1) == 0 )
  {
    this = (EventBoardGameTokenItem_o *)sub_2213A60(&StringLiteral_25413/*"token_enpty"*/);
    byte_596A4D9 = 1;
  }
  v13 = *item;
  if ( ent )
  {
    if ( !v13 )
      goto LABEL_14;
    v13->fields.index = ent->fields.tokenId;
    v14 = System_Int32__ToString((int)ent + 20, 0);
    v13->fields.tokenName = v14;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->fields.tokenName, (int32_t)v14, v15, v16, v17, v18, v19, v20);
    v13 = *item;
    if ( !*item )
      goto LABEL_14;
    v13->fields.haved = haved;
    if ( haved )
    {
      this = (EventBoardGameTokenItem_o *)System_Int32__ToString((int)ent + 44, 0);
      v21 = *item;
      if ( *item )
      {
        v22 = (int)this;
        v21->fields.tokenImageId = (struct System_String_o *)this;
        p_tokenImageId = (MissionNaviTransitionBoardItem_o *)&v21->fields.tokenImageId;
        goto LABEL_11;
      }
LABEL_14:
      sub_2213CDC(this, item);
    }
  }
  else if ( !v13 )
  {
    goto LABEL_14;
  }
  v22 = StringLiteral_25413/*"token_enpty"*/;
  v13->fields.tokenImageId = (struct System_String_o *)StringLiteral_25413/*"token_enpty"*/;
  p_tokenImageId = (MissionNaviTransitionBoardItem_o *)&v13->fields.tokenImageId;
LABEL_11:
  sub_2213A04(
    p_tokenImageId,
    v22,
    (System_String_o *)ent,
    (System_String_o *)haved,
    (int32_t)callback,
    (int32_t)method,
    v6,
    v7);
  EventBoardGameTokenItem__SetTokenInfo(v12, *item, 1, v24);
  if ( callback )
  {
    v12->fields.callback = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v12->fields.callback,
      (int32_t)callback,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventBoardGameTokenItem__SetTokenInfo(
        EventBoardGameTokenItem_o *this,
        EventBoardGameTokenItem_o *item,
        bool dispNo,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventBoardGameTokenItem_o *v10; // x20
  struct System_String_o *tokenName; // x1
  System_String_o **p_tokenName; // x23
  bool haved; // w9
  struct System_String_o *tokenImageId; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  v10 = this;
  if ( (byte_596A4DA & 1) == 0 )
  {
    this = (EventBoardGameTokenItem_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A4DA = 1;
  }
  if ( !item )
    goto LABEL_13;
  p_tokenName = &item->fields.tokenName;
  tokenName = item->fields.tokenName;
  haved = item->fields.haved;
  v10->fields.index = item->fields.index;
  v10->fields.haved = haved;
  v10->fields.tokenName = tokenName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.tokenName,
    (int32_t)tokenName,
    (System_String_o *)dispNo,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  tokenImageId = item->fields.tokenImageId;
  v10->fields.tokenImageId = tokenImageId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.tokenImageId,
    (int32_t)tokenImageId,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this = (EventBoardGameTokenItem_o *)v10->fields.tokenNameLabel;
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
    this = (EventBoardGameTokenItem_o *)v10->fields.tokenImage;
    if ( this )
    {
      UISprite__set_atlas((UISprite_o *)this, item->fields.eventAtlas, 0);
      this = (EventBoardGameTokenItem_o *)v10->fields.tokenImage;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, item->fields.tokenImageId, 0);
        return;
      }
    }
LABEL_13:
    sub_2213CDC(this, item);
  }
}


System_String_o *EventBoardGameTokenItem__get_TokenName(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  return this->fields.tokenName;
}