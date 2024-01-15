void __fastcall EventBoardGameTokenInfoDialog___ctor(EventBoardGameTokenInfoDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FC539 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FC539 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x20

  if ( (byte_40FC538 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_EventBoardGameTokenInfoDialog_EndClose__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FC538 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_EventBoardGameTokenInfoDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
}


void __fastcall EventBoardGameTokenInfoDialog__EndClose(
        EventBoardGameTokenInfoDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
  }
}


void __fastcall EventBoardGameTokenInfoDialog__Init(EventBoardGameTokenInfoDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UILabel_o *tokenNameLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FC536 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FC536 = 1;
  }
  this->fields.eventAtlas = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventAtlas, 0LL, v2, v3, v4, v5, v6, v7);
  tokenNameLabel = this->fields.tokenNameLabel;
  if ( !tokenNameLabel
    || (UILabel__set_text(tokenNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
  UISprite_o *bgImage; // x0
  UISprite_o *v8; // x0
  UILabel_o *tokenNameLabel; // x0
  UnityEngine_GameObject_o *tokenPrefab; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  const MethodInfo *v12; // x3

  if ( (byte_40FC537 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_EventBoardGameTokenItem___, item);
    sub_B16FFC(&StringLiteral_22627/*"token_balloon"*/, v5);
    byte_40FC537 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    bgImage = this->fields.bgImage;
    if ( !bgImage
      || (UISprite__set_atlas(bgImage, this->fields.eventAtlas, 0LL), (v8 = this->fields.bgImage) == 0LL)
      || (UISprite__set_spriteName(v8, (System_String_o *)StringLiteral_22627/*"token_balloon"*/, 0LL), !item)
      || (tokenNameLabel = this->fields.tokenNameLabel) == 0LL
      || (UILabel__set_text(tokenNameLabel, item->fields.tokenName, 0LL), (tokenPrefab = this->fields.tokenPrefab) == 0LL)
      || (ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        tokenPrefab,
                                                        (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_EventBoardGameTokenItem___)) == 0LL )
    {
LABEL_12:
      sub_B170D4();
    }
    EventBoardGameTokenItem__SetTokenInfo(
      (EventBoardGameTokenItem_o *)ComponentInChildren_Dropdown_DropdownItem,
      item,
      1,
      v12);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  }
}