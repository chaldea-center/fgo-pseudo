void __fastcall BattleActorNodeLookAt___ctor(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  this->fields.speed = 8.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorNodeLookAt__Awake(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this->fields.selfTransform = transform;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.selfTransform,
    (System_Int32_array **)transform,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorNodeLookAt__LateUpdate(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  float x; // w8
  struct UnityEngine_Transform_o *v4; // x20
  UnityEngine_Transform_o *selfTransform; // x0
  int v6; // s0
  UnityEngine_Transform_o *v10; // x0
  UnityEngine_Object_o *lookTargetObj; // x20
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float v18; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  float deltaTime; // s0
  float v23; // s0
  UnityEngine_Transform_o *v24; // x19
  float v25; // s12
  MethodInfo methoda; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v31; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4217DC0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217DC0 = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  x = this->fields.lookWorldVec.fields.x;
  if ( LODWORD(x) == 1 )
  {
    lookTargetObj = (UnityEngine_Object_o *)this->fields.lookTargetObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(lookTargetObj, 0LL, 0LL) )
    {
      selfTransform = this->fields.lookTargetObj;
      if ( !selfTransform )
        goto LABEL_18;
      *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position(selfTransform, 0LL);
      selfTransform = this->fields.selfTransform;
      if ( !selfTransform )
        goto LABEL_18;
      v15 = v12;
      v16 = v13;
      v17 = v14;
      position = UnityEngine_Transform__get_position(selfTransform, 0LL);
      position.fields.x = v15 - position.fields.x;
      position.fields.y = v16 - position.fields.y;
      position.fields.z = v17 - position.fields.z;
      methoda.methodPointer = *(Il2CppMethodPointer *)&position.fields.x;
      *(float *)&methoda.invoker_method = position.fields.z;
      if ( UnityEngine_Vector3__get_magnitude(position, &methoda) > 0.001 )
      {
        *(_QWORD *)&v28.fields.x = methoda.methodPointer;
        v28.fields.z = *(float *)&methoda.invoker_method;
        v29 = UnityEngine_Quaternion__LookRotation_34966288(v28, 0LL);
        v18 = v29.fields.x;
        y = v29.fields.y;
        z = v29.fields.z;
        w = v29.fields.w;
        deltaTime = UnityEngine_Time__get_deltaTime(0LL);
        v23 = UnityEngine_Mathf__Clamp(deltaTime * this->fields.speed, 0.0, 1.0, 0LL);
        v24 = this->fields.selfTransform;
        if ( v24 )
        {
          v25 = v23;
          rotation = UnityEngine_Transform__get_rotation(v24, 0LL);
          v31.fields.x = v18;
          v31.fields.y = y;
          v31.fields.z = z;
          v31.fields.w = w;
          *(UnityEngine_Quaternion_o *)&v6 = UnityEngine_Quaternion__Slerp(rotation, v31, v25, 0LL);
          v10 = v24;
          goto LABEL_7;
        }
LABEL_18:
        sub_B0D97C(selfTransform);
      }
    }
  }
  else if ( x == 0.0 )
  {
    v4 = this->fields.selfTransform;
    *(UnityEngine_Quaternion_o *)&v6 = UnityEngine_Quaternion__Euler_34967416(
                                         *(UnityEngine_Vector3_o *)&this->fields.lookWorldVec.fields.y,
                                         0LL);
    if ( v4 )
    {
      v10 = v4;
LABEL_7:
      UnityEngine_Transform__set_rotation(v10, *(UnityEngine_Quaternion_o *)&v6, 0LL);
      return;
    }
    goto LABEL_18;
  }
}