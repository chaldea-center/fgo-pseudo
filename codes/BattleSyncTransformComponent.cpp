void __fastcall BattleSyncTransformComponent___ctor(BattleSyncTransformComponent_o *this, const MethodInfo *method)
{
  BattleSyncTransformComponent_SyncData_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_435121B & 1) == 0 )
  {
    sub_B70694(&BattleSyncTransformComponent_SyncData_TypeInfo);
    byte_435121B = 1;
  }
  v3 = (BattleSyncTransformComponent_SyncData_o *)sub_B70764(BattleSyncTransformComponent_SyncData_TypeInfo);
  BattleSyncTransformComponent_SyncData___ctor(v3, 0LL);
  this->fields.syncData = v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.syncData, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSyncTransformComponent__InitSyncPos(
        BattleSyncTransformComponent_o *this,
        UnityEngine_Vector3_o posDiff,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  struct UnityEngine_Transform_o **p_targetObj; // x20
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x8
  struct BattleSyncTransformComponent_SyncData_o *syncData; // x8

  this->fields.targetObj = 0LL;
  p_targetObj = &this->fields.targetObj;
  z = posDiff.fields.z;
  y = posDiff.fields.y;
  x = posDiff.fields.x;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.targetObj, 0LL, v3, v4, v5, v6, v7, v8);
  v16 = (__int64)*(p_targetObj - 1);
  if ( !v16 || (*(_DWORD *)(v16 + 16) = 1, (syncData = this->fields.syncData) == 0LL) )
    sub_B7076C(v14, v15);
  syncData->fields.positionDiff.fields.x = x;
  syncData->fields.positionDiff.fields.y = y;
  syncData->fields.positionDiff.fields.z = z;
}


void __fastcall BattleSyncTransformComponent__LateUpdate(
        BattleSyncTransformComponent_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(BattleSyncTransformComponent_o *, void *))this->klass->vtable._4_SyncTarget.method)(
    this,
    this->klass[1]._1.image);
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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct BattleSyncTransformComponent_SyncData_o *syncData; // x1

  this->fields.targetObj = target;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.targetObj,
    (System_Int32_array **)target,
    (System_String_array **)syncSetting,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !syncSetting )
    sub_B7076C(v10, v11);
  syncData = syncSetting->fields.syncData;
  this->fields.syncData = syncData;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.syncData,
    (System_Int32_array **)syncData,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  return this;
}


BattleSyncTransformComponent_o *__fastcall BattleSyncTransformComponent__SetTarget_24000276(
        BattleSyncTransformComponent_o *this,
        UnityEngine_Transform_o *target,
        BattleSyncTransformComponent_SyncData_o *syncSettingData,
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

  this->fields.targetObj = target;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.targetObj,
    (System_Int32_array **)target,
    (System_String_array **)syncSettingData,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.syncData = syncSettingData;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.syncData,
    (System_Int32_array **)syncSettingData,
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
  __int64 v4; // x1
  UnityEngine_Transform_o *syncData; // x0
  UnityEngine_Transform_o *v6; // x20
  BattleSyncTransformComponent_SyncData_o *v7; // x21
  int v8; // s0
  int v11; // s0
  UnityEngine_Transform_o *v14; // x20
  BattleSyncTransformComponent_SyncData_o *v15; // x21
  int v16; // s0
  int v20; // s0
  UnityEngine_Transform_o *v24; // x20
  BattleSyncTransformComponent_SyncData_o *v25; // x21
  int v26; // s0
  int v29; // s0

  if ( (byte_435121A & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435121A = 1;
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
      v7 = this->fields.syncData;
      v6 = this->fields.targetObj;
      syncData = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !syncData )
        goto LABEL_26;
      *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(syncData, 0LL);
      if ( !v7 )
        goto LABEL_26;
      *(UnityEngine_Vector3_o *)&v11 = BattleSyncTransformComponent_SyncData__GetFixPosition(
                                         v7,
                                         *(UnityEngine_Vector3_o *)&v8,
                                         0LL);
      if ( !v6 )
        goto LABEL_26;
      UnityEngine_Transform__set_position(v6, *(UnityEngine_Vector3_o *)&v11, 0LL);
    }
    syncData = (UnityEngine_Transform_o *)this->fields.syncData;
    if ( !syncData )
      goto LABEL_26;
    if ( BattleSyncTransformComponent_SyncData__IsSyncParam((BattleSyncTransformComponent_SyncData_o *)syncData, 2, 0LL) )
    {
      v15 = this->fields.syncData;
      v14 = this->fields.targetObj;
      syncData = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !syncData )
        goto LABEL_26;
      *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Transform__get_rotation(syncData, 0LL);
      if ( !v15 )
        goto LABEL_26;
      *(UnityEngine_Quaternion_o *)&v20 = BattleSyncTransformComponent_SyncData__GetFixRotation(
                                            v15,
                                            *(UnityEngine_Quaternion_o *)&v16,
                                            0LL);
      if ( !v14 )
        goto LABEL_26;
      UnityEngine_Transform__set_rotation(v14, *(UnityEngine_Quaternion_o *)&v20, 0LL);
    }
    syncData = (UnityEngine_Transform_o *)this->fields.syncData;
    if ( !syncData )
      goto LABEL_26;
    if ( BattleSyncTransformComponent_SyncData__IsSyncParam((BattleSyncTransformComponent_SyncData_o *)syncData, 4, 0LL) )
    {
      v25 = this->fields.syncData;
      v24 = this->fields.targetObj;
      syncData = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( syncData )
      {
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_localScale(syncData, 0LL);
        if ( v25 )
        {
          *(UnityEngine_Vector3_o *)&v29 = BattleSyncTransformComponent_SyncData__GetFixScale(
                                             v25,
                                             *(UnityEngine_Vector3_o *)&v26,
                                             0LL);
          if ( v24 )
          {
            UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&v29, 0LL);
            return;
          }
        }
      }
LABEL_26:
      sub_B7076C(syncData, v4);
    }
  }
}


void __fastcall BattleSyncTransformComponent__UpdateTarget(
        BattleSyncTransformComponent_o *this,
        UnityEngine_Transform_o *target,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.targetObj = target;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.targetObj,
    (System_Int32_array **)target,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall BattleSyncTransformComponent__get_IsNotExecSync(
        BattleSyncTransformComponent_o *this,
        const MethodInfo *method)
{
  struct BattleSyncTransformComponent_SyncData_o *syncData; // x8

  syncData = this->fields.syncData;
  if ( !syncData )
    sub_B7076C(this, method);
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
  *(UnityEngine_Quaternion_o *)&v4 = UnityEngine_Quaternion__Euler_36099348(eulerAngles, 0LL);
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