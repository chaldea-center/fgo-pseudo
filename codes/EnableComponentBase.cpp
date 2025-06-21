void __fastcall EnableComponentBase___ctor(EnableComponentBase_o *this, const MethodInfo *method)
{
  this->fields.visibleIsOpen = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EnableComponentBase__Awake(EnableComponentBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B1BA71 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1BA71 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this->fields.target = gameObject;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.target, (int32_t)gameObject, v5, v6);
  }
}


void __fastcall EnableComponentBase__OnEnable(EnableComponentBase_o *this, const MethodInfo *method)
{
  if ( this->fields.refreshingWhenOnEnable )
    EnableComponentBase__Refresh(this, method);
}


void __fastcall EnableComponentBase__Refresh(EnableComponentBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *target; // x19
  __int64 v4; // x0
  __int64 v5; // x1

  target = this->fields.target;
  v4 = ((__int64 (__fastcall *)(EnableComponentBase_o *, const char *))this->klass[1]._1.gc_desc)(
         this,
         this->klass[1]._1.name);
  if ( !target )
    sub_1BCB254(v4, v5);
  UnityEngine_GameObject__SetActive(target, this->fields.visibleIsOpen == (v4 & 1), 0LL);
}


void __fastcall EnableComponentBase__Start(EnableComponentBase_o *this, const MethodInfo *method)
{
  if ( this->fields.refreshingWhenStart )
    EnableComponentBase__Refresh(this, method);
}