void __fastcall ExchangeSvtCoinFolderControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_49B5FB3 & 1) == 0 )
  {
    sub_1B4CF90(&ExchangeSvtCoinFolderControl_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_5669/*"EXCHANGE_SVT_COIN_FOLDER_NAME_{0}"*/, v2);
    byte_49B5FB3 = 1;
  }
  ExchangeSvtCoinFolderControl_TypeInfo->static_fields->FOLDER_NAME = (struct System_String_o *)StringLiteral_5669/*"EXCHANGE_SVT_COIN_FOLDER_NAME_{0}"*/;
  sub_1B4CF34(ExchangeSvtCoinFolderControl_TypeInfo->static_fields);
}


void __fastcall ExchangeSvtCoinFolderControl___ctor(ExchangeSvtCoinFolderControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ExchangeSvtCoinFolderControl__Awake(ExchangeSvtCoinFolderControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ExchangeSvtCoinFolderControl__InitFolder(
        ExchangeSvtCoinFolderControl_o *this,
        const MethodInfo *method)
{
  struct System_Action_int__o **p_onClickAction; // x19
  __int64 v4; // x1
  UILabel_o *v5; // x0

  if ( (byte_49B5FB1 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, method);
    byte_49B5FB1 = 1;
  }
  this->fields.onClickAction = 0LL;
  p_onClickAction = &this->fields.onClickAction;
  *((_DWORD *)p_onClickAction - 2) = 0;
  sub_1B4CF34(p_onClickAction);
  v5 = (UILabel_o *)*(p_onClickAction - 2);
  if ( !v5 )
    sub_1B4D1EC(0LL, v4);
  UILabel__set_text(v5, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ExchangeSvtCoinFolderControl__OnClickFolder(
        ExchangeSvtCoinFolderControl_o *this,
        const MethodInfo *method)
{
  struct System_Action_int__o *onClickAction; // x8

  onClickAction = this->fields.onClickAction;
  if ( onClickAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onClickAction->fields.m_target)(
      onClickAction->fields.original_method_info,
      (unsigned int)this->fields.svtCoinType,
      *(_QWORD *)&onClickAction->fields.extra_arg);
}


void __fastcall ExchangeSvtCoinFolderControl__SetActive(ExchangeSvtCoinFolderControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B4D1EC(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, this->fields.svtCoinType > 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExchangeSvtCoinFolderControl__SetFolder(
        ExchangeSvtCoinFolderControl_o *this,
        int32_t svtCoinType,
        System_Action_int__o *onClickAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  ExchangeSvtCoinFolderControl_c *v12; // x0
  System_String_o *FOLDER_NAME; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  UILabel_o *folderNameLb; // x19
  System_String_o *v17; // x20
  System_String_o *v18; // x0
  __int64 v19; // x1
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49B5FB2 & 1) == 0 )
  {
    sub_1B4CF90(&ExchangeSvtCoinFolderControl_TypeInfo, *(_QWORD *)&svtCoinType);
    sub_1B4CF90(&int_TypeInfo, v7);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v8);
    byte_49B5FB2 = 1;
  }
  this->fields.onClickAction = onClickAction;
  this->fields.svtCoinType = svtCoinType;
  sub_1B4CF34(&this->fields.onClickAction);
  v12 = ExchangeSvtCoinFolderControl_TypeInfo;
  if ( !ExchangeSvtCoinFolderControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExchangeSvtCoinFolderControl_TypeInfo);
    v12 = ExchangeSvtCoinFolderControl_TypeInfo;
  }
  FOLDER_NAME = v12->static_fields->FOLDER_NAME;
  v20 = svtCoinType;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v9, v10, v11);
  v15 = System_String__Format(FOLDER_NAME, v14, 0LL);
  folderNameLb = this->fields.folderNameLb;
  v17 = v15;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get(v17, 0LL);
  if ( !folderNameLb )
    sub_1B4D1EC(v18, v19);
  UILabel__set_text(folderNameLb, v18, 0LL);
}