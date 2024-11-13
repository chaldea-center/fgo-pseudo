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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selfTransform, (int64_t)transform, v4, v5, v6, v7, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorNodeLookAt__LateUpdate(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t type; // w8
  float v5; // s0
  float v6; // s1
  float v7; // s3
  struct UnityEngine_Transform_o *v8; // x19
  UnityEngine_Transform_o *selfTransform; // x0
  __int64 v10; // x1
  int v11; // s0
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Object_o *lookTargetObj; // x20
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s8
  float v21; // s9
  float v22; // s10
  __int64 v23; // x1
  __int64 v24; // x2
  float x; // s11
  float y; // s12
  float z; // s13
  float v28; // s11
  float v29; // s9
  float v30; // s8
  float v31; // s9
  float v32; // s10
  float w; // s11
  float deltaTime; // s0
  struct UnityEngine_Transform_o *v35; // x20
  float v36; // s0
  float v37; // s1
  float v38; // s12
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v44; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4B184C0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B184C0 = 1;
  }
  type = this->fields.type;
  if ( type == 1 )
  {
    lookTargetObj = (UnityEngine_Object_o *)this->fields.lookTargetObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(lookTargetObj, 0LL, 0LL) )
    {
      selfTransform = this->fields.lookTargetObj;
      if ( !selfTransform )
        goto LABEL_24;
      *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_position(selfTransform, 0LL);
      selfTransform = this->fields.selfTransform;
      if ( !selfTransform )
        goto LABEL_24;
      v20 = v17;
      v21 = v18;
      v22 = v19;
      position = UnityEngine_Transform__get_position(selfTransform, 0LL);
      x = position.fields.x;
      y = position.fields.y;
      z = position.fields.z;
      if ( !byte_4B109C3 )
      {
        sub_1BCA7E0(&System_Math_TypeInfo, v23, v24);
        byte_4B109C3 = 1;
      }
      v28 = v20 - x;
      v29 = v21 - y;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v23);
      if ( sqrtf((float)((float)(v22 - z) * (float)(v22 - z)) + (float)((float)(v28 * v28) + (float)(v29 * v29))) > 0.001 )
      {
        v41.fields.x = v28;
        v41.fields.y = v29;
        v41.fields.z = v22 - z;
        v42 = UnityEngine_Quaternion__LookRotation_70092604(v41, 0LL);
        v30 = v42.fields.x;
        v31 = v42.fields.y;
        v32 = v42.fields.z;
        w = v42.fields.w;
        deltaTime = UnityEngine_Time__get_deltaTime(0LL);
        v35 = this->fields.selfTransform;
        if ( v35 )
        {
          v36 = deltaTime * this->fields.speed;
          v37 = fminf(v36, 1.0);
          if ( v36 < 0.0 )
            v38 = 0.0;
          else
            v38 = v37;
          rotation = UnityEngine_Transform__get_rotation(this->fields.selfTransform, 0LL);
          v44.fields.x = v30;
          v44.fields.y = v31;
          v44.fields.z = v32;
          v44.fields.w = w;
          *(UnityEngine_Quaternion_o *)&v11 = UnityEngine_Quaternion__Slerp(rotation, v44, v38, 0LL);
          v15 = v35;
          goto LABEL_7;
        }
LABEL_24:
        sub_1BCAA3C(selfTransform, v10);
      }
    }
  }
  else if ( !type )
  {
    v5 = this->fields.lookWorldVec.fields.x;
    v6 = this->fields.lookWorldVec.fields.y;
    v7 = this->fields.lookWorldVec.fields.z;
    v8 = this->fields.selfTransform;
    v39.fields.x = v5 * 0.017453;
    v39.fields.y = v6 * 0.017453;
    v39.fields.z = v7 * 0.017453;
    *(UnityEngine_Quaternion_o *)&v11 = UnityEngine_Quaternion__Internal_FromEulerRad(v39, 0LL);
    if ( v8 )
    {
      v15 = v8;
LABEL_7:
      UnityEngine_Transform__set_rotation(v15, *(UnityEngine_Quaternion_o *)&v11, 0LL);
      return;
    }
    goto LABEL_24;
  }
}