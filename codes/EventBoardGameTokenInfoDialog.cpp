void __fastcall EventBoardGameTokenInfoDialog___ctor(EventBoardGameTokenInfoDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B48C19 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B48C19 = 1;
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_4B48C18 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_EventBoardGameTokenInfoDialog_Close__, v5);
    sub_1BDB878(&Method_EventBoardGameTokenInfoDialog_EndClose__, v6);
    byte_4B48C18 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  v7 = Method_EventBoardGameTokenInfoDialog_Close__;
  if ( (*((_BYTE *)Method_EventBoardGameTokenInfoDialog_Close__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BDB890(Method_EventBoardGameTokenInfoDialog_Close__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v9, v10);
  v11 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EventBoardGameTokenInfoDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall EventBoardGameTokenInfoDialog__EndClose(
        EventBoardGameTokenInfoDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BDBAD4(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BDB81C(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
  }
}


void __fastcall EventBoardGameTokenInfoDialog__Init(EventBoardGameTokenInfoDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  UILabel_o *tokenNameLabel; // x0

  if ( (byte_4B48C16 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B48C16 = 1;
  }
  this->fields.eventAtlas = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventAtlas, 0, v2, v3);
  tokenNameLabel = this->fields.tokenNameLabel;
  if ( !tokenNameLabel
    || (UILabel__set_text(tokenNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (tokenNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BDBAD4(tokenNameLabel, v5);
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

  if ( (byte_4B48C17 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponentInChildren_EventBoardGameTokenItem___, item);
    sub_1BDB878(&StringLiteral_24165/*"token_balloon"*/, v5);
    byte_4B48C17 = 1;
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
      || (UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_24165/*"token_balloon"*/, 0LL), !item)
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.tokenNameLabel) == 0LL
      || (UILabel__set_text((UILabel_o *)gameObject, item->fields.tokenName, 0LL),
          (gameObject = this->fields.tokenPrefab) == 0LL)
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                     gameObject,
                                                     (const MethodInfo_3088784 *)Method_UnityEngine_GameObject_GetComponentInChildren_EventBoardGameTokenItem___)) == 0LL )
    {
LABEL_12:
      sub_1BDBAD4(gameObject, v7);
    }
    EventBoardGameTokenItem__SetTokenInfo((EventBoardGameTokenItem_o *)gameObject, item, 1, v8);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  }
}