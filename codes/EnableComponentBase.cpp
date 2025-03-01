void __fastcall EnableComponentBase___ctor(EnableComponentBase_o *this, const MethodInfo *method)
{
  this->fields.visibleIsOpen = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EnableComponentBase__Awake(EnableComponentBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  struct UnityEngine_GameObject_o *gameObject; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BFCECD & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFCECD = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this->fields.target = gameObject;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.target, (int64_t)gameObject, v5, v6, v7, v8, v9, v10);
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
    sub_1C2E388(v4, v5);
  UnityEngine_GameObject__SetActive(target, this->fields.visibleIsOpen == (v4 & 1), 0LL);
}


void __fastcall EnableComponentBase__Start(EnableComponentBase_o *this, const MethodInfo *method)
{
  if ( this->fields.refreshingWhenStart )
    EnableComponentBase__Refresh(this, method);
}