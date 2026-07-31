void BaseProfileLayout_object____ctor(BaseProfileLayout_TLayout__o *this, const MethodInfo_3E2564C *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BaseProfileLayout_object___IProfileLayout_ApplyLayout(
        BaseProfileLayout_TLayout__o *this,
        int32_t profileIndex,
        const MethodInfo_3E25608 *method)
{
  Il2CppObject *ClampedValueSafely_object; // x0

  ClampedValueSafely_object = ArrayHelper__GetClampedValueSafely_object_(
                                this->fields.profileLayouts,
                                profileIndex,
                                0,
                                (const MethodInfo_379BA00 *)method->klass->rgctx_data->_3_ArrayHelper_GetClampedValueSafely_TLayout_);
  if ( ClampedValueSafely_object )
    ((void (__fastcall *)(BaseProfileLayout_TLayout__o *, Il2CppObject *, void *))this->klass[1]._1.image)(
      this,
      ClampedValueSafely_object,
      this->klass[1]._1.gc_desc);
}