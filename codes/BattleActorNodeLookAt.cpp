void __fastcall BattleActorNodeLookAt___ctor(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  this->fields.speed = 8.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorNodeLookAt__Awake(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this->fields.selfTransform = transform;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.selfTransform, (int64_t)transform, v4, v5, v6, v7, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorNodeLookAt__LateUpdate(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  float v4; // s0
  float v5; // s1
  float v6; // s3
  struct UnityEngine_Transform_o *v7; // x19
  UnityEngine_Transform_o *selfTransform; // x0
  __int64 v9; // x1
  int v10; // s0
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_Object_o *lookTargetObj; // x20
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s8
  float v20; // s9
  float v21; // s10
  __int64 v22; // x1
  float x; // s11
  float y; // s12
  float z; // s13
  float v26; // s11
  float v27; // s9
  float v28; // s8
  float v29; // s9
  float v30; // s10
  float w; // s11
  float deltaTime; // s0
  struct UnityEngine_Transform_o *v33; // x20
  float v34; // s0
  float v35; // s1
  float v36; // s12
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v42; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4B68EF9 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B68EF9 = 1;
  }
  type = this->fields.type;
  if ( type == 1 )
  {
    lookTargetObj = (UnityEngine_Object_o *)this->fields.lookTargetObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lookTargetObj, 0LL, 0LL) )
    {
      selfTransform = this->fields.lookTargetObj;
      if ( !selfTransform )
        goto LABEL_24;
      *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position(selfTransform, 0LL);
      selfTransform = this->fields.selfTransform;
      if ( !selfTransform )
        goto LABEL_24;
      v19 = v16;
      v20 = v17;
      v21 = v18;
      position = UnityEngine_Transform__get_position(selfTransform, 0LL);
      x = position.fields.x;
      y = position.fields.y;
      z = position.fields.z;
      if ( !byte_4B612E3 )
      {
        sub_1BE4ACC(&System_Math_TypeInfo, v22);
        byte_4B612E3 = 1;
      }
      v26 = v19 - x;
      v27 = v20 - y;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( sqrtf((float)((float)(v21 - z) * (float)(v21 - z)) + (float)((float)(v26 * v26) + (float)(v27 * v27))) > 0.001 )
      {
        v39.fields.x = v26;
        v39.fields.y = v27;
        v39.fields.z = v21 - z;
        v40 = UnityEngine_Quaternion__LookRotation_70390360(v39, 0LL);
        v28 = v40.fields.x;
        v29 = v40.fields.y;
        v30 = v40.fields.z;
        w = v40.fields.w;
        deltaTime = UnityEngine_Time__get_deltaTime(0LL);
        v33 = this->fields.selfTransform;
        if ( v33 )
        {
          v34 = deltaTime * this->fields.speed;
          v35 = fminf(v34, 1.0);
          if ( v34 < 0.0 )
            v36 = 0.0;
          else
            v36 = v35;
          rotation = UnityEngine_Transform__get_rotation(this->fields.selfTransform, 0LL);
          v42.fields.x = v28;
          v42.fields.y = v29;
          v42.fields.z = v30;
          v42.fields.w = w;
          *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Slerp(rotation, v42, v36, 0LL);
          v14 = v33;
          goto LABEL_7;
        }
LABEL_24:
        sub_1BE4D28(selfTransform, v9);
      }
    }
  }
  else if ( !type )
  {
    v4 = this->fields.lookWorldVec.fields.x;
    v5 = this->fields.lookWorldVec.fields.y;
    v6 = this->fields.lookWorldVec.fields.z;
    v7 = this->fields.selfTransform;
    v37.fields.x = v4 * 0.017453;
    v37.fields.y = v5 * 0.017453;
    v37.fields.z = v6 * 0.017453;
    *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Internal_FromEulerRad(v37, 0LL);
    if ( v7 )
    {
      v14 = v7;
LABEL_7:
      UnityEngine_Transform__set_rotation(v14, *(UnityEngine_Quaternion_o *)&v10, 0LL);
      return;
    }
    goto LABEL_24;
  }
}