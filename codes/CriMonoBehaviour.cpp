void CriMonoBehaviour___ctor(CriMonoBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
  this->fields._guid_k__BackingField = System_Guid__NewGuid(0);
}


void CriMonoBehaviour__OnDisable(CriMonoBehaviour_o *this, const MethodInfo *method)
{
  if ( (byte_4D29FD3 & 1) == 0 )
  {
    sub_1C93AD4(&CriMonoBehaviourManager_TypeInfo);
    byte_4D29FD3 = 1;
  }
  if ( !CriMonoBehaviourManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo);
  CriMonoBehaviourManager__UnRegister(this, method);
}


void CriMonoBehaviour__OnEnable(CriMonoBehaviour_o *this, const MethodInfo *method)
{
  CriMonoBehaviourManager_c *inited; // x0
  CriMonoBehaviourManager_o *instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D29FD2 & 1) == 0 )
  {
    sub_1C93AD4(&CriMonoBehaviourManager_TypeInfo);
    byte_4D29FD2 = 1;
  }
  inited = CriMonoBehaviourManager_TypeInfo;
  if ( !CriMonoBehaviourManager_TypeInfo->_2.cctor_finished )
    inited = (CriMonoBehaviourManager_c *)j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo);
  instance = CriMonoBehaviourManager__get_instance((const MethodInfo *)inited);
  if ( !instance )
    sub_1C93D2C(0, v5);
  CriMonoBehaviourManager__Register(instance, this, v6);
}


System_Guid_o CriMonoBehaviour__get_guid(CriMonoBehaviour_o *this, const MethodInfo *method)
{
  System_Guid_o result; // 0:x0.16

  *(_QWORD *)&result.fields._d = *(_QWORD *)&this->fields._guid_k__BackingField.fields._d;
  *(_QWORD *)&result.fields._a = *(_QWORD *)&this->fields._guid_k__BackingField.fields._a;
  return result;
}


void CriMonoBehaviour__set_guid(CriMonoBehaviour_o *this, System_Guid_o value, const MethodInfo *method)
{
  this->fields._guid_k__BackingField = value;
}