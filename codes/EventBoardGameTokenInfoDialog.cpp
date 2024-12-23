void __fastcall EventBoardGameTokenInfoDialog___ctor(EventBoardGameTokenInfoDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B6AA24 & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B6AA24 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventBoardGameTokenInfoDialog__Close(
        EventBoardGameTokenInfoDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Action_o *v15; // x20

  if ( (byte_4B6AA23 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_EventBoardGameTokenInfoDialog_Close__, v5);
    sub_1BE4ACC(&Method_EventBoardGameTokenInfoDialog_EndClose__, v6);
    byte_4B6AA23 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  v7 = Method_EventBoardGameTokenInfoDialog_Close__;
  if ( (*((_BYTE *)Method_EventBoardGameTokenInfoDialog_Close__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BE4AE4(Method_EventBoardGameTokenInfoDialog_Close__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventBoardGameTokenInfoDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall EventBoardGameTokenInfoDialog__EndClose(
        EventBoardGameTokenInfoDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BE4A70(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


void __fastcall EventBoardGameTokenInfoDialog__Init(EventBoardGameTokenInfoDialog_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  UILabel_o *tokenNameLabel; // x0

  if ( (byte_4B6AA21 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B6AA21 = 1;
  }
  this->fields.eventAtlas = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.eventAtlas, 0LL, v2, v3, v4, v5, v6, v7);
  tokenNameLabel = this->fields.tokenNameLabel;
  if ( !tokenNameLabel
    || (UILabel__set_text(tokenNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (tokenNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BE4D28(tokenNameLabel, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tokenNameLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventBoardGameTokenInfoDialog__OpenInfo(
        EventBoardGameTokenInfoDialog_o *this,
        EventBoardGameTokenItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4B6AA22 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponentInChildren_EventBoardGameTokenItem___, item);
    sub_1BE4ACC(&StringLiteral_24313/*"token_balloon"*/, v5);
    byte_4B6AA22 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.bgImage;
    if ( !gameObject
      || (UISprite__set_atlas((UISprite_o *)gameObject, this->fields.eventAtlas, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.bgImage) == 0LL)
      || (UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_24313/*"token_balloon"*/, 0LL), !item)
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.tokenNameLabel) == 0LL
      || (UILabel__set_text((UILabel_o *)gameObject, item->fields.tokenName, 0LL),
          (gameObject = this->fields.tokenPrefab) == 0LL)
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                     gameObject,
                                                     (const MethodInfo_2FA9A00 *)Method_UnityEngine_GameObject_GetComponentInChildren_EventBoardGameTokenItem___)) == 0LL )
    {
LABEL_12:
      sub_1BE4D28(gameObject, v7);
    }
    EventBoardGameTokenItem__SetTokenInfo((EventBoardGameTokenItem_o *)gameObject, item, 1, v8);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  }
}