void __fastcall FollowObjectPositionComponent___ctor(FollowObjectPositionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowObjectPositionComponent__SetObj(
        FollowObjectPositionComponent_o *this,
        UnityEngine_GameObject_o *obj,
        bool IsInversion,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UnityEngine_GameObject_o **p_TargetObj; // x20

  this->fields.TargetObj = obj;
  p_TargetObj = &this->fields.TargetObj;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.TargetObj,
    (System_Int32_array **)obj,
    (System_String_array **)IsInversion,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  *((_BYTE *)p_TargetObj + 8) = IsInversion;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowObjectPositionComponent__Update(FollowObjectPositionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *TargetObj; // x20
  _BOOL4 IsInversion; // w21
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *v7; // x20
  float v8; // s0
  float v9; // s1
  int v10; // s2
  float v11; // s8
  float v12; // s1
  UnityEngine_Transform_o *v13; // x0

  if ( (byte_41869CF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41869CF = 1;
  }
  TargetObj = (UnityEngine_Object_o *)this->fields.TargetObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
        *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_localPosition(transform, 0LL);
        v11 = v8;
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
                v9 = -v12;
                v8 = -v11;
                v10 = 0;
                v13 = v7;
LABEL_16:
                UnityEngine_Transform__set_localPosition(v13, *(UnityEngine_Vector3_o *)&v8, 0LL);
                return;
              }
            }
          }
        }
        else if ( v7 )
        {
          v13 = v7;
          goto LABEL_16;
        }
      }
    }
    sub_B2C434(transform, v6);
  }
}