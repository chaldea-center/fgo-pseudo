void __fastcall BattleSyncTransformComponent___ctor(BattleSyncTransformComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleSyncTransformComponent_SyncData_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FCD84 & 1) == 0 )
  {
    sub_B16FFC(&BattleSyncTransformComponent_SyncData_TypeInfo, method);
    byte_40FCD84 = 1;
  }
  v6 = (BattleSyncTransformComponent_SyncData_o *)sub_B170CC(
                                                    BattleSyncTransformComponent_SyncData_TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  BattleSyncTransformComponent_SyncData___ctor(v6, 0LL);
  this->fields.syncData = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.syncData,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


BattleSyncTransformComponent_o *__fastcall BattleSyncTransformComponent__SetTarget(
        BattleSyncTransformComponent_o *this,
        UnityEngine_Transform_o *target,
        BattleSyncTransformComponent_o *syncSetting,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct BattleSyncTransformComponent_SyncData_o *syncData; // x1

  this->fields.targetObj = target;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetObj,
    (System_Int32_array **)target,
    (System_String_array **)syncSetting,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !syncSetting )
    sub_B170D4();
  syncData = syncSetting->fields.syncData;
  this->fields.syncData = syncData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.syncData,
    (System_Int32_array **)syncData,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  return this;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSyncTransformComponent__SyncTarget(
        BattleSyncTransformComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x20
  BattleSyncTransformComponent_SyncData_o *syncData; // x0
  UnityEngine_Transform_o *v5; // x20
  BattleSyncTransformComponent_SyncData_o *v6; // x21
  UnityEngine_Transform_o *transform; // x0
  int v8; // s0
  int v11; // s0
  BattleSyncTransformComponent_SyncData_o *v14; // x0
  UnityEngine_Transform_o *v15; // x20
  BattleSyncTransformComponent_SyncData_o *v16; // x21
  UnityEngine_Transform_o *v17; // x0
  int v18; // s0
  int v22; // s0
  BattleSyncTransformComponent_SyncData_o *v26; // x0
  UnityEngine_Transform_o *v27; // x20
  BattleSyncTransformComponent_SyncData_o *v28; // x21
  UnityEngine_Transform_o *v29; // x0
  int v30; // s0
  int v33; // s0

  if ( (byte_40FCD83 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCD83 = 1;
  }
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetObj, 0LL, 0LL) )
  {
    syncData = this->fields.syncData;
    if ( !syncData )
      goto LABEL_26;
    if ( BattleSyncTransformComponent_SyncData__IsSyncParam(syncData, 1, 0LL) )
    {
      v6 = this->fields.syncData;
      v5 = this->fields.targetObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_26;
      *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(transform, 0LL);
      if ( !v6 )
        goto LABEL_26;
      *(UnityEngine_Vector3_o *)&v11 = BattleSyncTransformComponent_SyncData__GetFixPosition(
                                         v6,
                                         *(UnityEngine_Vector3_o *)&v8,
                                         0LL);
      if ( !v5 )
        goto LABEL_26;
      UnityEngine_Transform__set_position(v5, *(UnityEngine_Vector3_o *)&v11, 0LL);
    }
    v14 = this->fields.syncData;
    if ( !v14 )
      goto LABEL_26;
    if ( BattleSyncTransformComponent_SyncData__IsSyncParam(v14, 2, 0LL) )
    {
      v16 = this->fields.syncData;
      v15 = this->fields.targetObj;
      v17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v17 )
        goto LABEL_26;
      *(UnityEngine_Quaternion_o *)&v18 = UnityEngine_Transform__get_rotation(v17, 0LL);
      if ( !v16 )
        goto LABEL_26;
      *(UnityEngine_Quaternion_o *)&v22 = BattleSyncTransformComponent_SyncData__GetFixRotation(
                                            v16,
                                            *(UnityEngine_Quaternion_o *)&v18,
                                            0LL);
      if ( !v15 )
        goto LABEL_26;
      UnityEngine_Transform__set_rotation(v15, *(UnityEngine_Quaternion_o *)&v22, 0LL);
    }
    v26 = this->fields.syncData;
    if ( !v26 )
      goto LABEL_26;
    if ( BattleSyncTransformComponent_SyncData__IsSyncParam(v26, 4, 0LL) )
    {
      v28 = this->fields.syncData;
      v27 = this->fields.targetObj;
      v29 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( v29 )
      {
        *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_localScale(v29, 0LL);
        if ( v28 )
        {
          *(UnityEngine_Vector3_o *)&v33 = BattleSyncTransformComponent_SyncData__GetFixScale(
                                             v28,
                                             *(UnityEngine_Vector3_o *)&v30,
                                             0LL);
          if ( v27 )
          {
            UnityEngine_Transform__set_localScale(v27, *(UnityEngine_Vector3_o *)&v33, 0LL);
            return;
          }
        }
      }
LABEL_26:
      sub_B170D4();
    }
  }
}


bool __fastcall BattleSyncTransformComponent__get_IsNotExecSync(
        BattleSyncTransformComponent_o *this,
        const MethodInfo *method)
{
  struct BattleSyncTransformComponent_SyncData_o *syncData; // x8

  syncData = this->fields.syncData;
  if ( !syncData )
    sub_B170D4();
  return syncData->fields.syncType == 0;
}


void __fastcall BattleSyncTransformComponent_SyncData___ctor(
        BattleSyncTransformComponent_SyncData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BattleSyncTransformComponent_SyncData__GetFixPosition(
        BattleSyncTransformComponent_SyncData_o *this,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  position.fields.x = position.fields.x + this->fields.positionDiff.fields.x;
  position.fields.y = position.fields.y + this->fields.positionDiff.fields.y;
  v5 = position.fields.z + this->fields.positionDiff.fields.z;
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Quaternion_o __fastcall BattleSyncTransformComponent_SyncData__GetFixRotation(
        BattleSyncTransformComponent_SyncData_o *this,
        UnityEngine_Quaternion_o rotation,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Quaternion_o v8; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Vector3_o eulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = rotation;
  eulerAngles = UnityEngine_Quaternion__get_eulerAngles(rotation, (const MethodInfo *)&v8);
  eulerAngles.fields.x = eulerAngles.fields.x + this->fields.rotationDiff.fields.x;
  eulerAngles.fields.y = eulerAngles.fields.y + this->fields.rotationDiff.fields.y;
  eulerAngles.fields.z = eulerAngles.fields.z + this->fields.rotationDiff.fields.z;
  *(UnityEngine_Quaternion_o *)&v4 = UnityEngine_Quaternion__Euler_34841604(eulerAngles, 0LL);
  result.fields.w = v7;
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BattleSyncTransformComponent_SyncData__GetFixScale(
        BattleSyncTransformComponent_SyncData_o *this,
        UnityEngine_Vector3_o scale,
        const MethodInfo *method)
{
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  scale.fields.x = scale.fields.x + this->fields.scaleDiff.fields.x;
  scale.fields.y = scale.fields.y + this->fields.scaleDiff.fields.y;
  v5 = scale.fields.z + this->fields.scaleDiff.fields.z;
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


bool __fastcall BattleSyncTransformComponent_SyncData__IsSyncParam(
        BattleSyncTransformComponent_SyncData_o *this,
        int32_t paramType,
        const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.syncType & paramType) < 0) ^ v3 | ((this->fields.syncType & paramType) == 0));
}