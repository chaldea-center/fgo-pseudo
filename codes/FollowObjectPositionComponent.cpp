void __fastcall FollowObjectPositionComponent___ctor(FollowObjectPositionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FollowObjectPositionComponent__SetObj(
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.TargetObj, (int32_t)obj, IsInversion, method);
  *((_BYTE *)p_TargetObj + 8) = v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowObjectPositionComponent__Update(FollowObjectPositionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *TargetObj; // x19
  _BOOL4 IsInversion; // w21
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *v7; // x19
  float v8; // s1
  int v9; // s2
  float v10; // s0
  float v11; // s8
  float v12; // s1
  float v13; // s0

  if ( (byte_49BA2F2 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BA2F2 = 1;
  }
  TargetObj = (UnityEngine_Object_o *)this->fields.TargetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(TargetObj, 0LL, 0LL) )
  {
    IsInversion = this->fields.IsInversion;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( this->fields.TargetObj )
    {
      v7 = transform;
      transform = UnityEngine_GameObject__get_transform(this->fields.TargetObj, 0LL);
      if ( transform )
      {
        *(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
        v11 = v10;
        if ( IsInversion )
        {
          transform = (UnityEngine_Transform_o *)this->fields.TargetObj;
          if ( transform )
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
            if ( transform )
            {
              *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
              if ( v7 )
              {
                v8 = -v12;
                v11 = -v11;
                v9 = 0;
LABEL_14:
                v13 = v11;
                UnityEngine_Transform__set_localPosition(v7, *(UnityEngine_Vector3_o *)(&v8 - 1), 0LL);
                return;
              }
            }
          }
        }
        else if ( v7 )
        {
          goto LABEL_14;
        }
      }
    }
    sub_1B4D1EC(transform, v6);
  }
}