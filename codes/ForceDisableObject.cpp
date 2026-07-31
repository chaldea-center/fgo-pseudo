void ForceDisableObject___ctor(ForceDisableObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ForceDisableObject__DisableAllObjects(ForceDisableObject_o *this, const MethodInfo *method)
{
  ForceDisableObject_o *v2; // x19
  struct UnityEngine_Transform_array *disableObjects; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x19

  v2 = this;
  if ( (byte_593AC07 & 1) == 0 )
  {
    this = (ForceDisableObject_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593AC07 = 1;
  }
  disableObjects = v2->fields.disableObjects;
  if ( disableObjects )
  {
    max_length = disableObjects->max_length;
    if ( (int)max_length >= 1 )
    {
      v5 = 0;
      do
      {
        if ( v5 >= (unsigned int)max_length )
          sub_21FFED4(this);
        v6 = (UnityEngine_Object_o *)disableObjects->m_Items[v5];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        this = (ForceDisableObject_o *)UnityEngine_Object__op_Implicit(v6, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v6
            || (this = (ForceDisableObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0)) == 0 )
          {
            sub_21FFECC(this, method);
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        }
        LODWORD(max_length) = disableObjects->max_length;
        ++v5;
      }
      while ( (__int64)v5 < (int)max_length );
    }
  }
}


// attributes: thunk
void ForceDisableObject__Start(ForceDisableObject_o *this, const MethodInfo *method)
{
  ForceDisableObject__DisableAllObjects(this, method);
}