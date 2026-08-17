void FollowObjectPositionComponent___ctor(FollowObjectPositionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void FollowObjectPositionComponent__SetObj(
        FollowObjectPositionComponent_o *this,
        UnityEngine_GameObject_o *obj,
        bool IsInversion,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UnityEngine_GameObject_o **p_TargetObj; // x20

  this->fields.TargetObj = obj;
  p_TargetObj = &this->fields.TargetObj;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.TargetObj,
    (int32_t)obj,
    (System_String_o *)IsInversion,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  *((_BYTE *)p_TargetObj + 8) = IsInversion;
}


// local variable allocation has failed, the output may be wrong!
void FollowObjectPositionComponent__Update(FollowObjectPositionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *TargetObj; // x19
  _BOOL4 IsInversion; // w21
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *v7; // x8
  UnityEngine_Transform_o *v8; // x19
  unsigned int localPosition; // s0
  float v10; // s8
  float v11; // s1
  float v12; // s0 OVERLAPPED
  int v13; // s2
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596FBB2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FBB2 = 1;
  }
  TargetObj = (UnityEngine_Object_o *)this->fields.TargetObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(TargetObj, 0, 0) )
  {
    IsInversion = this->fields.IsInversion;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v7 = this->fields.TargetObj;
    v8 = transform;
    if ( IsInversion )
    {
      if ( v7 )
      {
        transform = UnityEngine_GameObject__get_transform(this->fields.TargetObj, 0);
        if ( transform )
        {
          localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0);
          transform = (UnityEngine_Transform_o *)this->fields.TargetObj;
          if ( transform )
          {
            v10 = *(float *)&localPosition;
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
            if ( transform )
            {
              v14 = UnityEngine_Transform__get_localPosition(transform, 0);
              if ( v8 )
              {
                v11 = -v14.fields.y;
                v12 = -v10;
                v13 = 0;
LABEL_16:
                UnityEngine_Transform__set_localPosition(v8, *(UnityEngine_Vector3_o *)&v12, 0);
                return;
              }
            }
          }
        }
      }
    }
    else if ( v7 )
    {
      transform = UnityEngine_GameObject__get_transform(this->fields.TargetObj, 0);
      if ( transform )
      {
        *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localPosition(transform, 0);
        if ( v8 )
          goto LABEL_16;
      }
    }
    sub_2213CDC(transform, v6);
  }
}