void __fastcall EventBoardGameTokenItem___ctor(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBoardGameTokenItem__DestroyItem(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B6AA29 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6AA29 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
}


void __fastcall EventBoardGameTokenItem__Init(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1
  void *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1
  UILabel_o *tokenNameLabel; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B6AA25 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B6AA25 = 1;
  }
  this->fields.index = 0;
  this->fields.haved = 0;
  v9 = StringLiteral_1/*""*/;
  this->fields.tokenName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.tokenName, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1/*""*/;
  this->fields.tokenImageId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.tokenImageId, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  tokenNameLabel = this->fields.tokenNameLabel;
  if ( !tokenNameLabel )
    sub_1BE4D28(0LL, v17);
  UILabel__set_text(tokenNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.callback = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callback, 0LL, v19, v20, v21, v22, v23, v24);
}


void __fastcall EventBoardGameTokenItem__OnClickItem(EventBoardGameTokenItem_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_int__o *callback; // x8

  if ( (byte_4B6AA28 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_EventBoardGameTokenItem_OnClickItem__, method);
    byte_4B6AA28 = 1;
  }
  if ( this->fields.callback && this->fields.haved )
  {
    v3 = Method_EventBoardGameTokenItem_OnClickItem__;
    if ( (*((_BYTE *)Method_EventBoardGameTokenItem_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_EventBoardGameTokenItem_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    callback = this->fields.callback;
    if ( !callback )
      sub_1BE4D28(v5, v6);
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventBoardGameTokenItem_o *v12; // x20
  EventBoardGameTokenItem_o *v13; // x22
  System_String_o *v14; // x0
  int64_t v15; // x2
  char v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  EventBoardGameTokenItem_o *v21; // x1
  const MethodInfo *v22; // x3
  int64_t v23; // x2
  char v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  v12 = this;
  if ( (byte_4B6AA26 & 1) == 0 )
  {
    this = (EventBoardGameTokenItem_o *)sub_1BE4ACC(&StringLiteral_24315/*"token_enpty"*/, item);
    byte_4B6AA26 = 1;
  }
  v13 = *item;
  if ( ent )
  {
    if ( !v13 )
      goto LABEL_14;
    v13->fields.index = ent->fields.tokenId;
    v14 = System_Int32__ToString((int)ent + 20, 0LL);
    v13->fields.tokenName = v14;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v13->fields.tokenName, (int64_t)v14, v15, v16, v17, v18, v19, v20);
    v13 = *item;
    if ( !*item )
      goto LABEL_14;
    v13->fields.haved = haved;
    if ( haved )
    {
      this = (EventBoardGameTokenItem_o *)System_Int32__ToString((int)ent + 44, 0LL);
      v13 = *item;
      if ( *item )
      {
        v21 = this;
        goto LABEL_11;
      }
LABEL_14:
      sub_1BE4D28(this, item);
    }
  }
  else if ( !v13 )
  {
    goto LABEL_14;
  }
  v21 = (EventBoardGameTokenItem_o *)StringLiteral_24315/*"token_enpty"*/;
LABEL_11:
  v13->fields.tokenImageId = (struct System_String_o *)v21;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v13->fields.tokenImageId,
    (int64_t)v21,
    (int64_t)ent,
    haved,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  EventBoardGameTokenItem__SetTokenInfo(v12, *item, 1, v22);
  if ( callback )
  {
    v12->fields.callback = callback;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v12->fields.callback, (int64_t)callback, v23, v24, v25, v26, v27, v28);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBoardGameTokenItem__SetTokenInfo(
        EventBoardGameTokenItem_o *this,
        EventBoardGameTokenItem_o *item,
        bool dispNo,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventBoardGameTokenItem_o *v10; // x20
  struct System_String_o *tokenName; // x1
  System_String_o **p_tokenName; // x23
  struct System_String_o *tokenImageId; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  v10 = this;
  if ( (byte_4B6AA27 & 1) == 0 )
  {
    this = (EventBoardGameTokenItem_o *)sub_1BE4ACC(&StringLiteral_1/*""*/, item);
    byte_4B6AA27 = 1;
  }
  if ( !item )
    goto LABEL_13;
  v10->fields.index = item->fields.index;
  v10->fields.haved = item->fields.haved;
  p_tokenName = &item->fields.tokenName;
  tokenName = item->fields.tokenName;
  v10->fields.tokenName = tokenName;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v10->fields.tokenName,
    (int64_t)tokenName,
    dispNo,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  tokenImageId = item->fields.tokenImageId;
  v10->fields.tokenImageId = tokenImageId;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v10->fields.tokenImageId,
    (int64_t)tokenImageId,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  UILabel__set_text((UILabel_o *)this, *p_tokenName, 0LL);
  if ( !System_String__IsNullOrEmpty(item->fields.tokenImageId, 0LL) )
  {
    this = (EventBoardGameTokenItem_o *)v10->fields.tokenImage;
    if ( this )
    {
      UISprite__set_atlas((UISprite_o *)this, item->fields.eventAtlas, 0LL);
      this = (EventBoardGameTokenItem_o *)v10->fields.tokenImage;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, item->fields.tokenImageId, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1BE4D28(this, item);
  }
}


System_String_o *__fastcall EventBoardGameTokenItem__get_TokenName(
        EventBoardGameTokenItem_o *this,
        const MethodInfo *method)
{
  return this->fields.tokenName;
}