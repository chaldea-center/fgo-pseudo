void __fastcall Shop17FolderControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B11C5B & 1) == 0 )
  {
    sub_1BCA7E0(&Shop17FolderControl_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_5849/*"EXCHANGE_SVT_COIN_FOLDER_NAME_{0}"*/, v3, v4);
    byte_4B11C5B = 1;
  }
  Shop17FolderControl_TypeInfo->static_fields->FOLDER_NAME = (struct System_String_o *)StringLiteral_5849/*"EXCHANGE_SVT_COIN_FOLDER_NAME_{0}"*/;
  sub_1BCA784(Shop17FolderControl_TypeInfo->static_fields, StringLiteral_5849/*"EXCHANGE_SVT_COIN_FOLDER_NAME_{0}"*/);
}


void __fastcall Shop17FolderControl___ctor(Shop17FolderControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall Shop17FolderControl__Awake(Shop17FolderControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall Shop17FolderControl__InitFolder(Shop17FolderControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Action_int__o **p_onClickAction; // x19
  __int64 v5; // x1
  UILabel_o *v6; // x0

  if ( (byte_4B11C59 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11C59 = 1;
  }
  this->fields.onClickAction = 0LL;
  p_onClickAction = &this->fields.onClickAction;
  *((_DWORD *)p_onClickAction - 2) = 0;
  sub_1BCA784(p_onClickAction, 0LL);
  v6 = (UILabel_o *)*(p_onClickAction - 2);
  if ( !v6 )
    sub_1BCAA3C(0LL, v5);
  UILabel__set_text(v6, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall Shop17FolderControl__OnClickFolder(Shop17FolderControl_o *this, const MethodInfo *method)
{
  struct System_Action_int__o *onClickAction; // x8

  onClickAction = this->fields.onClickAction;
  if ( onClickAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onClickAction->fields.m_target)(
      onClickAction->fields.original_method_info,
      (unsigned int)this->fields.svtCoinType,
      *(_QWORD *)&onClickAction->fields.extra_arg);
}


void __fastcall Shop17FolderControl__SetActive(Shop17FolderControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, this->fields.svtCoinType > 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Shop17FolderControl__SetFolder(
        Shop17FolderControl_o *this,
        int32_t svtCoinType,
        System_Action_int__o *onClickAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Shop17FolderControl_c *v12; // x0
  System_String_o *FOLDER_NAME; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *folderNameLb; // x19
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  __int64 v20; // x1
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B11C5A & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&svtCoinType, onClickAction);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Shop17FolderControl_TypeInfo, v9, v10);
    byte_4B11C5A = 1;
  }
  this->fields.onClickAction = onClickAction;
  this->fields.svtCoinType = svtCoinType;
  sub_1BCA784(&this->fields.onClickAction, onClickAction);
  v12 = Shop17FolderControl_TypeInfo;
  if ( !Shop17FolderControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Shop17FolderControl_TypeInfo, v11);
    v12 = Shop17FolderControl_TypeInfo;
  }
  FOLDER_NAME = v12->static_fields->FOLDER_NAME;
  v21 = svtCoinType;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v15 = System_String__Format(FOLDER_NAME, v14, 0LL);
  folderNameLb = this->fields.folderNameLb;
  v18 = v15;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  v19 = LocalizationManager__Get(v18, 0LL);
  if ( !folderNameLb )
    sub_1BCAA3C(v19, v20);
  UILabel__set_text(folderNameLb, v19, 0LL);
}