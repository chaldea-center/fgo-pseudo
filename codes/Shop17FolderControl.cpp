void __fastcall Shop17FolderControl___cctor(const MethodInfo *method)
{
  if ( (byte_4B2779F & 1) == 0 )
  {
    sub_1BCE82C(&Shop17FolderControl_TypeInfo);
    sub_1BCE82C(&StringLiteral_5856/*"EXCHANGE_SVT_COIN_FOLDER_NAME_{0}"*/);
    byte_4B2779F = 1;
  }
  Shop17FolderControl_TypeInfo->static_fields->FOLDER_NAME = (struct System_String_o *)StringLiteral_5856/*"EXCHANGE_SVT_COIN_FOLDER_NAME_{0}"*/;
  sub_1BCE7D0(Shop17FolderControl_TypeInfo->static_fields);
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
  struct System_Action_int__o **p_onClickAction; // x19
  __int64 v4; // x1
  UILabel_o *v5; // x0

  if ( (byte_4B2779D & 1) == 0 )
  {
    sub_1BCE82C(&StringLiteral_1/*""*/);
    byte_4B2779D = 1;
  }
  this->fields.onClickAction = 0LL;
  p_onClickAction = &this->fields.onClickAction;
  *((_DWORD *)p_onClickAction - 2) = 0;
  sub_1BCE7D0(p_onClickAction);
  v5 = (UILabel_o *)*(p_onClickAction - 2);
  if ( !v5 )
    sub_1BCEA88(0LL, v4);
  UILabel__set_text(v5, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
    sub_1BCEA88(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, this->fields.svtCoinType > 0, 0LL);
}


void __fastcall Shop17FolderControl__SetFolder(
        Shop17FolderControl_o *this,
        int32_t svtCoinType,
        System_Action_int__o *onClickAction,
        const MethodInfo *method)
{
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Shop17FolderControl_c *v10; // x0
  System_String_o *FOLDER_NAME; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  UILabel_o *folderNameLb; // x19
  System_String_o *v15; // x20
  System_String_o *v16; // x0
  __int64 v17; // x1
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B2779E & 1) == 0 )
  {
    sub_1BCE82C(&int_TypeInfo);
    sub_1BCE82C(&LocalizationManager_TypeInfo);
    sub_1BCE82C(&Shop17FolderControl_TypeInfo);
    byte_4B2779E = 1;
  }
  this->fields.onClickAction = onClickAction;
  this->fields.svtCoinType = svtCoinType;
  sub_1BCE7D0(&this->fields.onClickAction);
  v10 = Shop17FolderControl_TypeInfo;
  if ( !Shop17FolderControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Shop17FolderControl_TypeInfo);
    v10 = Shop17FolderControl_TypeInfo;
  }
  FOLDER_NAME = v10->static_fields->FOLDER_NAME;
  v18 = svtCoinType;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v7, v8, v9);
  v13 = System_String__Format(FOLDER_NAME, v12, 0LL);
  folderNameLb = this->fields.folderNameLb;
  v15 = v13;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get(v15, 0LL);
  if ( !folderNameLb )
    sub_1BCEA88(v16, v17);
  UILabel__set_text(folderNameLb, v16, 0LL);
}