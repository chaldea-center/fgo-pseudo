void ShopHelpMenu___ctor(ShopHelpMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C45332 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C45332 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ShopHelpMenu__Close(ShopHelpMenu_o *this, System_Action_o *onClose, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C45331 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ShopHelpMenu_endClose__);
    byte_4C45331 = 1;
  }
  this->fields.onClose = onClose;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.onClose, (int32_t)onClose, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ShopHelpMenu_endClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void ShopHelpMenu__Init(ShopHelpMenu_o *this, const MethodInfo *method)
{
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ShopHelpMenu__OnEnable(ShopHelpMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v4; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C45330 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_12851/*"ShopHelpListPanel/BaseWindow/UpperCloseButton"*/);
    byte_4C45330 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  v4 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_12851/*"ShopHelpListPanel/BaseWindow/UpperCloseButton"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v4, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( v4 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
      AndroidBackKeyManager__AddBackBtn(gameObject, 0);
      return;
    }
LABEL_9:
    sub_1C372B4(transform);
  }
}


void ShopHelpMenu__Open(ShopHelpMenu_o *this, const MethodInfo *method)
{
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


void ShopHelpMenu__endClose(ShopHelpMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o **p_onClose; // x0
  struct System_Action_o *v6; // x20
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = &this->fields.onClose;
  v6 = onClose;
  if ( onClose )
  {
    this->fields.onClose = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)p_onClose, 0, v2, v3);
    BaseDialog__Init((BaseDialog_o *)this, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}