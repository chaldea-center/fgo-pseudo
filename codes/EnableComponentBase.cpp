void EnableComponentBase___ctor(EnableComponentBase_o *this, const MethodInfo *method)
{
  this->fields.visibleIsOpen = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EnableComponentBase__Awake(EnableComponentBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *target; // x21
  struct UnityEngine_GameObject_o *gameObject; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5937A37 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937A37 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(target, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this->fields.target = gameObject;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.target, (int32_t)gameObject, v6, v7, v8, v9, v10, v11);
  }
}


void EnableComponentBase__OnEnable(EnableComponentBase_o *this, const MethodInfo *method)
{
  if ( this->fields.refreshingWhenOnEnable )
    EnableComponentBase__Refresh(this, method);
}


void EnableComponentBase__Refresh(EnableComponentBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *target; // x19
  __int64 v4; // x0
  __int64 v5; // x1

  target = this->fields.target;
  v4 = ((__int64 (__fastcall *)(EnableComponentBase_o *, void *))this->klass[1]._1.image)(
         this,
         this->klass[1]._1.gc_desc);
  if ( !target )
    sub_21FFECC(v4, v5);
  UnityEngine_GameObject__SetActive(target, this->fields.visibleIsOpen == (v4 & 1), 0);
}


void EnableComponentBase__Start(EnableComponentBase_o *this, const MethodInfo *method)
{
  if ( this->fields.refreshingWhenStart )
    EnableComponentBase__Refresh(this, method);
}