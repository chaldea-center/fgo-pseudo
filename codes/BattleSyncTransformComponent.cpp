void __fastcall BattleSyncTransformComponent___ctor(BattleSyncTransformComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleSyncTransformComponent_SyncData_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42172F5 & 1) == 0 )
  {
    sub_B0D8A4(&BattleSyncTransformComponent_SyncData_TypeInfo, method);
    byte_42172F5 = 1;
  }
  v4 = (BattleSyncTransformComponent_SyncData_o *)sub_B0D974(BattleSyncTransformComponent_SyncData_TypeInfo, method, v2);
  BattleSyncTransformComponent_SyncData___ctor(v4, 0LL);
  this->fields.syncData = v4;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.syncData, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
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
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct BattleSyncTransformComponent_SyncData_o *syncData; // x1

  this->fields.targetObj = target;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetObj,
    (System_Int32_array **)target,
    (System_String_array **)syncSetting,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !syncSetting )
    sub_B0D97C(v10);
  syncData = syncSetting->fields.syncData;
  this->fields.syncData = syncData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.syncData,
    (System_Int32_array **)syncData,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  return this;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSyncTransformComponent__SyncTarget(
        BattleSyncTransformComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x20
  UnityEngine_Transform_o *syncData; // x0
  UnityEngine_Transform_o *v5; // x20
  BattleSyncTransformComponent_SyncData_o *v6; // x21
  int v7; // s0
  int v10; // s0
  UnityEngine_Transform_o *v13; // x20
  BattleSyncTransformComponent_SyncData_o *v14; // x21
  int v15; // s0
  int v19; // s0
  UnityEngine_Transform_o *v23; // x20
  BattleSyncTransformComponent_SyncData_o *v24; // x21
  int v25; // s0
  int v28; // s0

  if ( (byte_42172F4 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42172F4 = 1;
  }
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetObj, 0LL, 0LL) )
  {
    syncData = (UnityEngine_Transform_o *)this->fields.syncData;
    if ( !syncData )
      goto LABEL_26;
    if ( BattleSyncTransformComponent_SyncData__IsSyncParam((BattleSyncTransformComponent_SyncData_o *)syncData, 1, 0LL) )
    {
      v6 = this->fields.syncData;
      v5 = this->fields.targetObj;
      syncData = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !syncData )
        goto LABEL_26;
      *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position(syncData, 0LL);
      if ( !v6 )
        goto LABEL_26;
      *(UnityEngine_Vector3_o *)&v10 = BattleSyncTransformComponent_SyncData__GetFixPosition(
                                         v6,
                                         *(UnityEngine_Vector3_o *)&v7,
                                         0LL);
      if ( !v5 )
        goto LABEL_26;
      UnityEngine_Transform__set_position(v5, *(UnityEngine_Vector3_o *)&v10, 0LL);
    }
    syncData = (UnityEngine_Transform_o *)this->fields.syncData;
    if ( !syncData )
      goto LABEL_26;
    if ( BattleSyncTransformComponent_SyncData__IsSyncParam((BattleSyncTransformComponent_SyncData_o *)syncData, 2, 0LL) )
    {
      v14 = this->fields.syncData;
      v13 = this->fields.targetObj;
      syncData = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !syncData )
        goto LABEL_26;
      *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Transform__get_rotation(syncData, 0LL);
      if ( !v14 )
        goto LABEL_26;
      *(UnityEngine_Quaternion_o *)&v19 = BattleSyncTransformComponent_SyncData__GetFixRotation(
                                            v14,
                                            *(UnityEngine_Quaternion_o *)&v15,
                                            0LL);
      if ( !v13 )
        goto LABEL_26;
      UnityEngine_Transform__set_rotation(v13, *(UnityEngine_Quaternion_o *)&v19, 0LL);
    }
    syncData = (UnityEngine_Transform_o *)this->fields.syncData;
    if ( !syncData )
      goto LABEL_26;
    if ( BattleSyncTransformComponent_SyncData__IsSyncParam((BattleSyncTransformComponent_SyncData_o *)syncData, 4, 0LL) )
    {
      v24 = this->fields.syncData;
      v23 = this->fields.targetObj;
      syncData = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( syncData )
      {
        *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_localScale(syncData, 0LL);
        if ( v24 )
        {
          *(UnityEngine_Vector3_o *)&v28 = BattleSyncTransformComponent_SyncData__GetFixScale(
                                             v24,
                                             *(UnityEngine_Vector3_o *)&v25,
                                             0LL);
          if ( v23 )
          {
            UnityEngine_Transform__set_localScale(v23, *(UnityEngine_Vector3_o *)&v28, 0LL);
            return;
          }
        }
      }
LABEL_26:
      sub_B0D97C(syncData);
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
    sub_B0D97C(this);
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
  *(UnityEngine_Quaternion_o *)&v4 = UnityEngine_Quaternion__Euler_34967416(eulerAngles, 0LL);
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