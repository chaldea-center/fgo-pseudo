void __fastcall EventBoardGameTokenInfoDialog___ctor(EventBoardGameTokenInfoDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5EE2B & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5EE2B = 1;
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_Action_o *v9; // x20

  if ( (byte_4A5EE2A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventBoardGameTokenInfoDialog_Close__);
    sub_1B885B0(&Method_EventBoardGameTokenInfoDialog_EndClose__);
    byte_4A5EE2A = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  v5 = Method_EventBoardGameTokenInfoDialog_Close__;
  if ( (*((_BYTE *)Method_EventBoardGameTokenInfoDialog_Close__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_EventBoardGameTokenInfoDialog_Close__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v7, v8);
  v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EventBoardGameTokenInfoDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall EventBoardGameTokenInfoDialog__EndClose(
        EventBoardGameTokenInfoDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
  }
}


void __fastcall EventBoardGameTokenInfoDialog__Init(EventBoardGameTokenInfoDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  UILabel_o *tokenNameLabel; // x0

  if ( (byte_4A5EE28 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EE28 = 1;
  }
  this->fields.eventAtlas = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventAtlas, 0, v2, v3);
  tokenNameLabel = this->fields.tokenNameLabel;
  if ( !tokenNameLabel
    || (UILabel__set_text(tokenNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (tokenNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B8880C(tokenNameLabel, v5);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A5EE29 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_EventBoardGameTokenItem___);
    sub_1B885B0(&StringLiteral_23976/*"token_balloon"*/);
    byte_4A5EE29 = 1;
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
      || (UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_23976/*"token_balloon"*/, 0LL), !item)
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.tokenNameLabel) == 0LL
      || (UILabel__set_text((UILabel_o *)gameObject, item->fields.tokenName, 0LL),
          (gameObject = this->fields.tokenPrefab) == 0LL)
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                     gameObject,
                                                     (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_EventBoardGameTokenItem___)) == 0LL )
    {
LABEL_12:
      sub_1B8880C(gameObject, v6);
    }
    EventBoardGameTokenItem__SetTokenInfo((EventBoardGameTokenItem_o *)gameObject, item, 1, v7);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  }
}