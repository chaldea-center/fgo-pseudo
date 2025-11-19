void ExchangeSvtCoinFolderControl___cctor(const MethodInfo *method)
{
  if ( (byte_4CB1190 & 1) == 0 )
  {
    sub_1C6BA08(&ExchangeSvtCoinFolderControl_TypeInfo);
    sub_1C6BA08(&StringLiteral_5761/*"EXCHANGE_SVT_COIN_FOLDER_NAME_{0}"*/);
    byte_4CB1190 = 1;
  }
  ExchangeSvtCoinFolderControl_TypeInfo->static_fields->FOLDER_NAME = (struct System_String_o *)StringLiteral_5761/*"EXCHANGE_SVT_COIN_FOLDER_NAME_{0}"*/;
  sub_1C6B9AC(ExchangeSvtCoinFolderControl_TypeInfo->static_fields, StringLiteral_5761/*"EXCHANGE_SVT_COIN_FOLDER_NAME_{0}"*/);
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
  struct System_Action_int__o **p_onClickAction; // x19
  __int64 v4; // x1
  UILabel_o *v5; // x0

  if ( (byte_4CB118E & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB118E = 1;
  }
  this->fields.onClickAction = 0;
  p_onClickAction = &this->fields.onClickAction;
  *((_DWORD *)p_onClickAction - 2) = 0;
  sub_1C6B9AC(p_onClickAction, 0);
  v5 = (UILabel_o *)*(p_onClickAction - 2);
  if ( !v5 )
    sub_1C6BC60(0, v4);
  UILabel__set_text(v5, (System_String_o *)StringLiteral_1/*""*/, 0);
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
    sub_1C6BC60(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, this->fields.svtCoinType > 0, 0);
}


void ExchangeSvtCoinFolderControl__SetFolder(
        ExchangeSvtCoinFolderControl_o *this,
        int32_t svtCoinType,
        System_Action_int__o *onClickAction,
        const MethodInfo *method)
{
  ExchangeSvtCoinFolderControl_c *v7; // x0
  System_String_o *FOLDER_NAME; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  UILabel_o *folderNameLb; // x19
  System_String_o *v12; // x20
  System_String_o *v13; // x0
  __int64 v14; // x1
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB118F & 1) == 0 )
  {
    sub_1C6BA08(&ExchangeSvtCoinFolderControl_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB118F = 1;
  }
  this->fields.onClickAction = onClickAction;
  this->fields.svtCoinType = svtCoinType;
  sub_1C6B9AC(&this->fields.onClickAction, onClickAction);
  v7 = ExchangeSvtCoinFolderControl_TypeInfo;
  if ( !ExchangeSvtCoinFolderControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExchangeSvtCoinFolderControl_TypeInfo);
    v7 = ExchangeSvtCoinFolderControl_TypeInfo;
  }
  FOLDER_NAME = v7->static_fields->FOLDER_NAME;
  v15 = svtCoinType;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v10 = System_String__Format(FOLDER_NAME, v9, 0);
  folderNameLb = this->fields.folderNameLb;
  v12 = v10;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get(v12, 0);
  if ( !folderNameLb )
    sub_1C6BC60(v13, v14);
  UILabel__set_text(folderNameLb, v13, 0);
}