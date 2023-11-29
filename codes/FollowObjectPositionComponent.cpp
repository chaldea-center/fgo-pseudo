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
  sub_B16F98(
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
  UnityEngine_Transform_o *v6; // x20
  UnityEngine_Transform_o *v7; // x0
  float v8; // s0
  float v9; // s1
  int v10; // s2
  float v11; // s8
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Transform_o *v13; // x0
  float v14; // s1
  UnityEngine_Transform_o *v15; // x0

  if ( (byte_40F8EBD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8EBD = 1;
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
      v6 = transform;
      v7 = UnityEngine_GameObject__get_transform(this->fields.TargetObj, 0LL);
      if ( v7 )
      {
        *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_localPosition(v7, 0LL);
        v11 = v8;
        if ( IsInversion )
        {
          v12 = this->fields.TargetObj;
          if ( v12 )
          {
            v13 = UnityEngine_GameObject__get_transform(v12, 0LL);
            if ( v13 )
            {
              *(UnityEngine_Vector3_o *)(&v14 - 1) = UnityEngine_Transform__get_localPosition(v13, 0LL);
              if ( v6 )
              {
                v9 = -v14;
                v8 = -v11;
                v10 = 0;
                v15 = v6;
LABEL_16:
                UnityEngine_Transform__set_localPosition(v15, *(UnityEngine_Vector3_o *)&v8, 0LL);
                return;
              }
            }
          }
        }
        else if ( v6 )
        {
          v15 = v6;
          goto LABEL_16;
        }
      }
    }
    sub_B170D4();
  }
}