void ExchangeSvtCoinFolderControl___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5933359 & 1) == 0 )
  {
    sub_21FFC50(&ExchangeSvtCoinFolderControl_TypeInfo);
    sub_21FFC50(&StringLiteral_5990/*"EXCHANGE_SVT_COIN_FOLDER_NAME_{0}"*/);
    byte_5933359 = 1;
  }
  v7 = StringLiteral_5990/*"EXCHANGE_SVT_COIN_FOLDER_NAME_{0}"*/;
  ExchangeSvtCoinFolderControl_TypeInfo->static_fields->FOLDER_NAME = (struct System_String_o *)StringLiteral_5990/*"EXCHANGE_SVT_COIN_FOLDER_NAME_{0}"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ExchangeSvtCoinFolderControl_TypeInfo->static_fields,
    v7,
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_int__o **p_onClickAction; // x19
  __int64 v10; // x1
  UILabel_o *v11; // x0

  if ( (byte_5933357 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933357 = 1;
  }
  this->fields.onClickAction = 0;
  p_onClickAction = &this->fields.onClickAction;
  *((_DWORD *)p_onClickAction - 2) = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_onClickAction, 0, v2, v3, v4, v5, v6, v7);
  v11 = (UILabel_o *)*(p_onClickAction - 2);
  if ( !v11 )
    sub_21FFECC(0, v10);
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
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, this->fields.svtCoinType > 0, 0);
}


void ExchangeSvtCoinFolderControl__SetFolder(
        ExchangeSvtCoinFolderControl_o *this,
        int32_t svtCoinType,
        System_Action_int__o *onClickAction,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  ExchangeSvtCoinFolderControl_c *v13; // x0
  System_String_o **p_FOLDER_NAME; // x8
  System_String_o *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *folderNameLb; // x19
  System_String_o *v21; // x20
  System_String_o *v22; // x0
  __int64 v23; // x1
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5933358 & 1) == 0 )
  {
    sub_21FFC50(&ExchangeSvtCoinFolderControl_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5933358 = 1;
  }
  this->fields.onClickAction = onClickAction;
  this->fields.svtCoinType = svtCoinType;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickAction,
    (int32_t)onClickAction,
    (System_String_o *)onClickAction,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v13 = ExchangeSvtCoinFolderControl_TypeInfo;
  if ( !*(&ExchangeSvtCoinFolderControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExchangeSvtCoinFolderControl_TypeInfo, v11, v12);
    v13 = ExchangeSvtCoinFolderControl_TypeInfo;
  }
  p_FOLDER_NAME = &v13->static_fields->FOLDER_NAME;
  v24 = svtCoinType;
  v15 = *p_FOLDER_NAME;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v24);
  v17 = System_String__Format(v15, v16, 0);
  folderNameLb = this->fields.folderNameLb;
  v21 = v17;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
  v22 = LocalizationManager__Get(v21, 0);
  if ( !folderNameLb )
    sub_21FFECC(v22, v23);
  UILabel__set_text(folderNameLb, v22, 0);
}