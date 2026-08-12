void ShopHelpMenu___ctor(ShopHelpMenu_o *this, const MethodInfo *method)
{
  if ( (byte_5972C86 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5972C86 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ShopHelpMenu__Close(ShopHelpMenu_o *this, System_Action_o *onClose, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_5972C85 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopHelpMenu_endClose__);
    byte_5972C85 = 1;
  }
  this->fields.onClose = onClose;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClose,
    (int32_t)onClose,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ShopHelpMenu_endClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void ShopHelpMenu__Init(ShopHelpMenu_o *this, const MethodInfo *method)
{
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ShopHelpMenu__OnEnable(ShopHelpMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_5972C84 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_13393/*"ShopHelpListPanel/BaseWindow/UpperCloseButton"*/);
    byte_5972C84 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  v6 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_13393/*"ShopHelpListPanel/BaseWindow/UpperCloseButton"*/, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v6, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( v6 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
      AndroidBackKeyManager__AddBackBtn(gameObject, 0);
      return;
    }
LABEL_9:
    sub_2213CDC(transform, v4);
  }
}


void ShopHelpMenu__Open(ShopHelpMenu_o *this, const MethodInfo *method)
{
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


void ShopHelpMenu__endClose(ShopHelpMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o **p_onClose; // x0
  struct System_Action_o *v10; // x20
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = &this->fields.onClose;
  v10 = onClose;
  if ( onClose )
  {
    this->fields.onClose = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_onClose, 0, v2, v3, v4, v5, v6, v7);
    BaseDialog__Init((BaseDialog_o *)this, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}