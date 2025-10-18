void FollowObjectPositionComponent___ctor(FollowObjectPositionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FollowObjectPositionComponent__SetObj(
        FollowObjectPositionComponent_o *this,
        UnityEngine_GameObject_o *obj,
        bool IsInversion,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_TargetObj; // x19
  bool v5; // w20

  this->fields.TargetObj = obj;
  p_TargetObj = &this->fields.TargetObj;
  v5 = IsInversion;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.TargetObj, (int32_t)obj, IsInversion, method);
  *((_BYTE *)p_TargetObj + 8) = v5;
}


void FollowObjectPositionComponent__Update(FollowObjectPositionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *TargetObj; // x19
  _BOOL4 IsInversion; // w21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v6; // x19
  float x; // s8
  float v8; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C423B6 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C423B6 = 1;
  }
  TargetObj = (UnityEngine_Object_o *)this->fields.TargetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(TargetObj, 0, 0) )
  {
    IsInversion = this->fields.IsInversion;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( this->fields.TargetObj )
    {
      v6 = transform;
      transform = UnityEngine_GameObject__get_transform(this->fields.TargetObj, 0);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
        x = localPosition.fields.x;
        if ( IsInversion )
        {
          transform = (UnityEngine_Transform_o *)this->fields.TargetObj;
          if ( transform )
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
            if ( transform )
            {
              v10 = UnityEngine_Transform__get_localPosition(transform, 0);
              if ( v6 )
              {
                localPosition.fields.y = -v10.fields.y;
                x = -x;
                localPosition.fields.z = 0.0;
LABEL_14:
                v8 = x;
                UnityEngine_Transform__set_localPosition(v6, localPosition, 0);
                return;
              }
            }
          }
        }
        else if ( v6 )
        {
          goto LABEL_14;
        }
      }
    }
    sub_1C372B4(transform);
  }
}