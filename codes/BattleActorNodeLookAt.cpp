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
  sub_B2C2F8(
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
  __int64 v6; // x1
  int v7; // s0
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Object_o *lookTargetObj; // x20
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s8
  float v17; // s9
  float v18; // s10
  float v19; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  float deltaTime; // s0
  float v24; // s0
  UnityEngine_Transform_o *v25; // x19
  float v26; // s12
  MethodInfo methoda; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v32; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_418B904 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B904 = 1;
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
      *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_position(selfTransform, 0LL);
      selfTransform = this->fields.selfTransform;
      if ( !selfTransform )
        goto LABEL_18;
      v16 = v13;
      v17 = v14;
      v18 = v15;
      position = UnityEngine_Transform__get_position(selfTransform, 0LL);
      position.fields.x = v16 - position.fields.x;
      position.fields.y = v17 - position.fields.y;
      position.fields.z = v18 - position.fields.z;
      methoda.methodPointer = *(Il2CppMethodPointer *)&position.fields.x;
      *(float *)&methoda.invoker_method = position.fields.z;
      if ( UnityEngine_Vector3__get_magnitude(position, &methoda) > 0.001 )
      {
        *(_QWORD *)&v29.fields.x = methoda.methodPointer;
        v29.fields.z = *(float *)&methoda.invoker_method;
        v30 = UnityEngine_Quaternion__LookRotation_35345908(v29, 0LL);
        v19 = v30.fields.x;
        y = v30.fields.y;
        z = v30.fields.z;
        w = v30.fields.w;
        deltaTime = UnityEngine_Time__get_deltaTime(0LL);
        v24 = UnityEngine_Mathf__Clamp(deltaTime * this->fields.speed, 0.0, 1.0, 0LL);
        v25 = this->fields.selfTransform;
        if ( v25 )
        {
          v26 = v24;
          rotation = UnityEngine_Transform__get_rotation(v25, 0LL);
          v32.fields.x = v19;
          v32.fields.y = y;
          v32.fields.z = z;
          v32.fields.w = w;
          *(UnityEngine_Quaternion_o *)&v7 = UnityEngine_Quaternion__Slerp(rotation, v32, v26, 0LL);
          v11 = v25;
          goto LABEL_7;
        }
LABEL_18:
        sub_B2C434(selfTransform, v6);
      }
    }
  }
  else if ( x == 0.0 )
  {
    v4 = this->fields.selfTransform;
    *(UnityEngine_Quaternion_o *)&v7 = UnityEngine_Quaternion__Euler_35347036(
                                         *(UnityEngine_Vector3_o *)&this->fields.lookWorldVec.fields.y,
                                         0LL);
    if ( v4 )
    {
      v11 = v4;
LABEL_7:
      UnityEngine_Transform__set_rotation(v11, *(UnityEngine_Quaternion_o *)&v7, 0LL);
      return;
    }
    goto LABEL_18;
  }
}