void ExchangeSvtCoinFolderControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D2B742 & 1) == 0 )
  {
    sub_1C93AD4(&ExchangeSvtCoinFolderControl_TypeInfo);
    sub_1C93AD4(&StringLiteral_5797/*"EXCHANGE_SVT_COIN_FOLDER_NAME_{0}"*/);
    byte_4D2B742 = 1;
  }
  ExchangeSvtCoinFolderControl_TypeInfo->static_fields->FOLDER_NAME = (struct System_String_o *)StringLiteral_5797/*"EXCHANGE_SVT_COIN_FOLDER_NAME_{0}"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ExchangeSvtCoinFolderControl_TypeInfo->static_fields,
    StringLiteral_5797/*"EXCHANGE_SVT_COIN_FOLDER_NAME_{0}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void ExchangeSvtCoinFolderControl___ctor(ExchangeSvtCoinFolderControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ExchangeSvtCoinFolderControl__Awake(ExchangeSvtCoinFolderControl_o *this, const MethodInfo *method)
{
  ;
}


void ExchangeSvtCoinFolderControl__InitFolder(ExchangeSvtCoinFolderControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_int__o **p_onClickAction; // x19
  __int64 v10; // x1
  UILabel_o *v11; // x0

  if ( (byte_4D2B740 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2B740 = 1;
  }
  this->fields.onClickAction = 0;
  p_onClickAction = &this->fields.onClickAction;
  *((_DWORD *)p_onClickAction - 2) = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_onClickAction, 0, v2, v3, v4, v5, v6, v7);
  v11 = (UILabel_o *)*(p_onClickAction - 2);
  if ( !v11 )
    sub_1C93D2C(0, v10);
  UILabel__set_text(v11, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void ExchangeSvtCoinFolderControl__OnClickFolder(ExchangeSvtCoinFolderControl_o *this, const MethodInfo *method)
{
  struct System_Action_int__o *onClickAction; // x8

  onClickAction = this->fields.onClickAction;
  if ( onClickAction )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onClickAction->fields.invoke_impl)(
      onClickAction->fields.method_code,
      (unsigned int)this->fields.svtCoinType,
      onClickAction->fields.method);
}


void ExchangeSvtCoinFolderControl__SetActive(ExchangeSvtCoinFolderControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, this->fields.svtCoinType > 0, 0);
}


void ExchangeSvtCoinFolderControl__SetFolder(
        ExchangeSvtCoinFolderControl_o *this,
        int32_t svtCoinType,
        System_Action_int__o *onClickAction,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ExchangeSvtCoinFolderControl_c *v11; // x0
  System_String_o *FOLDER_NAME; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  UILabel_o *folderNameLb; // x19
  System_String_o *v16; // x20
  System_String_o *v17; // x0
  __int64 v18; // x1
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2B741 & 1) == 0 )
  {
    sub_1C93AD4(&ExchangeSvtCoinFolderControl_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2B741 = 1;
  }
  this->fields.onClickAction = onClickAction;
  this->fields.svtCoinType = svtCoinType;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClickAction,
    (int32_t)onClickAction,
    (int32_t)onClickAction,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v11 = ExchangeSvtCoinFolderControl_TypeInfo;
  if ( !ExchangeSvtCoinFolderControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExchangeSvtCoinFolderControl_TypeInfo);
    v11 = ExchangeSvtCoinFolderControl_TypeInfo;
  }
  FOLDER_NAME = v11->static_fields->FOLDER_NAME;
  v19 = svtCoinType;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v14 = System_String__Format(FOLDER_NAME, v13, 0);
  folderNameLb = this->fields.folderNameLb;
  v16 = v14;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get(v16, 0);
  if ( !folderNameLb )
    sub_1C93D2C(v17, v18);
  UILabel__set_text(folderNameLb, v17, 0);
}