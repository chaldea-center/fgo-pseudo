void FlipEffectUpdater___ctor(FlipEffectUpdater_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// attributes: thunk
void FlipEffectUpdater__LateUpdate(FlipEffectUpdater_o *this, const MethodInfo *method)
{
  FlipEffectUpdater__OnLateUpdate(this, method);
}


void FlipEffectUpdater__OnLateUpdate(FlipEffectUpdater_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *ConnectTarget; // x19
  __int64 v4; // x1
  UnityEngine_Transform_o **p_mTrans; // x19
  UnityEngine_Object_o *mTrans; // x20
  __int64 v7; // x1
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *v16; // x20
  UnityEngine_Transform_o *v17; // x21
  UnityEngine_Transform_o *v18; // x21
  UnityEngine_Transform_o *v19; // x21

  if ( (byte_596FBB1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FBB1 = 1;
  }
  ConnectTarget = (UnityEngine_Object_o *)this->fields.ConnectTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(ConnectTarget, 0, 0) )
  {
    p_mTrans = &this->fields.mTrans;
    mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Equality(mTrans, 0, 0) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      this->fields.mTrans = transform;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mTrans,
        (int32_t)transform,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    parent = *p_mTrans;
    if ( !*p_mTrans )
      goto LABEL_24;
    parent = UnityEngine_Transform__get_parent(parent, 0);
    if ( !*p_mTrans )
      goto LABEL_24;
    v16 = parent;
    UnityEngine_Transform__set_parent(*p_mTrans, this->fields.ConnectTarget, 0);
    v17 = this->fields.mTrans;
    if ( !byte_5969AE0 )
    {
      parent = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v17 )
      goto LABEL_24;
    UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    v18 = *p_mTrans;
    if ( !byte_5969AE0 )
    {
      parent = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v18 )
      goto LABEL_24;
    UnityEngine_Transform__set_localEulerAngles(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    v19 = *p_mTrans;
    if ( !byte_5969AE5 )
    {
      parent = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v19
      || (UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
          (parent = *p_mTrans) == 0) )
    {
LABEL_24:
      sub_2213CDC(parent, v7);
    }
    UnityEngine_Transform__set_parent(parent, v16, 0);
  }
}


void FlipEffectUpdater__Start(FlipEffectUpdater_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
}