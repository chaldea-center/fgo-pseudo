void ShopHelpMenu___ctor(ShopHelpMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CC97BE & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC97BE = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ShopHelpMenu__Close(ShopHelpMenu_o *this, System_Action_o *onClose, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CC97BD & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ShopHelpMenu_endClose__);
    byte_4CC97BD = 1;
  }
  this->fields.onClose = onClose;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClose,
    (int32_t)onClose,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
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
  UnityEngine_Object_o *v5; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4CC97BC & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_12861/*"ShopHelpListPanel/BaseWindow/UpperCloseButton"*/);
    byte_4CC97BC = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  v5 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_12861/*"ShopHelpListPanel/BaseWindow/UpperCloseButton"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v5, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( v5 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
      AndroidBackKeyManager__AddBackBtn(gameObject, 0);
      return;
    }
LABEL_9:
    sub_1C71608(transform, v4);
  }
}


void ShopHelpMenu__Open(ShopHelpMenu_o *this, const MethodInfo *method)
{
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


void ShopHelpMenu__endClose(ShopHelpMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o **p_onClose; // x0
  struct System_Action_o *v10; // x20
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = &this->fields.onClose;
  v10 = onClose;
  if ( onClose )
  {
    this->fields.onClose = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)p_onClose, 0, v2, v3, v4, v5, v6, v7);
    BaseDialog__Init((BaseDialog_o *)this, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}