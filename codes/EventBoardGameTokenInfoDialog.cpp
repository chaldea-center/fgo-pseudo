void EventBoardGameTokenInfoDialog___ctor(EventBoardGameTokenInfoDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CC1582 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC1582 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventBoardGameTokenInfoDialog__Close(
        EventBoardGameTokenInfoDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4CC1581 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_EventBoardGameTokenInfoDialog_Close__);
    sub_1C713B0(&Method_EventBoardGameTokenInfoDialog_EndClose__);
    byte_4CC1581 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  v5 = Method_EventBoardGameTokenInfoDialog_Close__;
  if ( (*((_BYTE *)Method_EventBoardGameTokenInfoDialog_Close__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C713C8(Method_EventBoardGameTokenInfoDialog_Close__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0);
  this->fields.closeCallbackFunc = callback;
  sub_1C71354(&this->fields.closeCallbackFunc, callback);
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventBoardGameTokenInfoDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0);
}


void EventBoardGameTokenInfoDialog__EndClose(EventBoardGameTokenInfoDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C71354(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void EventBoardGameTokenInfoDialog__Init(EventBoardGameTokenInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *tokenNameLabel; // x0

  if ( (byte_4CC157F & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC157F = 1;
  }
  this->fields.eventAtlas = 0;
  sub_1C71354(&this->fields.eventAtlas, 0);
  tokenNameLabel = this->fields.tokenNameLabel;
  if ( !tokenNameLabel
    || (UILabel__set_text(tokenNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (tokenNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C71608(tokenNameLabel, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tokenNameLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventBoardGameTokenInfoDialog__OpenInfo(
        EventBoardGameTokenInfoDialog_o *this,
        EventBoardGameTokenItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4CC1580 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentInChildren_EventBoardGameTokenItem___);
    sub_1C713B0(&StringLiteral_24232/*"token_balloon"*/);
    byte_4CC1580 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.bgImage;
    if ( !gameObject
      || (UISprite__set_atlas((UISprite_o *)gameObject, this->fields.eventAtlas, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.bgImage) == 0)
      || (UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_24232/*"token_balloon"*/, 0), !item)
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.tokenNameLabel) == 0
      || (UILabel__set_text((UILabel_o *)gameObject, item->fields.tokenName, 0),
          (gameObject = this->fields.tokenPrefab) == 0)
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                     gameObject,
                                                     (const MethodInfo_31A3134 *)Method_UnityEngine_GameObject_GetComponentInChildren_EventBoardGameTokenItem___)) == 0 )
    {
LABEL_12:
      sub_1C71608(gameObject, v6);
    }
    EventBoardGameTokenItem__SetTokenInfo((EventBoardGameTokenItem_o *)gameObject, item, 1, v7);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
  }
}