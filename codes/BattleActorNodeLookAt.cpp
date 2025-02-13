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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.selfTransform, (int64_t)transform, v4, v5, v6, v7, v8, v9);
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
  float x; // s11
  float y; // s12
  float z; // s13
  float v25; // s11
  float v26; // s9
  float v27; // s8
  float v28; // s9
  float v29; // s10
  float w; // s11
  float deltaTime; // s0
  struct UnityEngine_Transform_o *v32; // x20
  float v33; // s0
  float v34; // s1
  float v35; // s12
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v41; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4BDE8CE & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE8CE = 1;
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
      if ( !byte_4BD6BB3 )
      {
        sub_1C21E38(&System_Math_TypeInfo);
        byte_4BD6BB3 = 1;
      }
      v25 = v19 - x;
      v26 = v20 - y;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( sqrtf((float)((float)(v21 - z) * (float)(v21 - z)) + (float)((float)(v25 * v25) + (float)(v26 * v26))) > 0.001 )
      {
        v38.fields.x = v25;
        v38.fields.y = v26;
        v38.fields.z = v21 - z;
        v39 = UnityEngine_Quaternion__LookRotation_70807972(v38, 0LL);
        v27 = v39.fields.x;
        v28 = v39.fields.y;
        v29 = v39.fields.z;
        w = v39.fields.w;
        deltaTime = UnityEngine_Time__get_deltaTime(0LL);
        v32 = this->fields.selfTransform;
        if ( v32 )
        {
          v33 = deltaTime * this->fields.speed;
          v34 = fminf(v33, 1.0);
          if ( v33 < 0.0 )
            v35 = 0.0;
          else
            v35 = v34;
          rotation = UnityEngine_Transform__get_rotation(this->fields.selfTransform, 0LL);
          v41.fields.x = v27;
          v41.fields.y = v28;
          v41.fields.z = v29;
          v41.fields.w = w;
          *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Slerp(rotation, v41, v35, 0LL);
          v14 = v32;
          goto LABEL_7;
        }
LABEL_24:
        sub_1C22094(selfTransform, v9);
      }
    }
  }
  else if ( !type )
  {
    v4 = this->fields.lookWorldVec.fields.x;
    v5 = this->fields.lookWorldVec.fields.y;
    v6 = this->fields.lookWorldVec.fields.z;
    v7 = this->fields.selfTransform;
    v36.fields.x = v4 * 0.017453;
    v36.fields.y = v5 * 0.017453;
    v36.fields.z = v6 * 0.017453;
    *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Internal_FromEulerRad(v36, 0LL);
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