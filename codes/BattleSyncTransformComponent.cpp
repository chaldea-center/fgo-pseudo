void BattleSyncTransformComponent___ctor(BattleSyncTransformComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C5A500 & 1) == 0 )
  {
    sub_1C3E564(&BattleSyncTransformComponent_SyncData_TypeInfo);
    byte_4C5A500 = 1;
  }
  v3 = (Il2CppObject *)sub_1C3E7B0(BattleSyncTransformComponent_SyncData_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.syncData = (struct BattleSyncTransformComponent_SyncData_o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.syncData, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleSyncTransformComponent__InitSyncPos(
        BattleSyncTransformComponent_o *this,
        UnityEngine_Vector3_o posDiff,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct UnityEngine_Transform_o **p_targetObj; // x19
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v9; // x0
  __int64 v10; // x1
  float *v11; // x8

  this->fields.targetObj = 0;
  p_targetObj = &this->fields.targetObj;
  z = posDiff.fields.z;
  y = posDiff.fields.y;
  x = posDiff.fields.x;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetObj, 0, v3, v4);
  v11 = (float *)*(p_targetObj - 1);
  if ( !v11 )
    sub_1C3E7C0(v9, v10);
  v11[5] = x;
  v11[6] = y;
  v11[7] = z;
  *((_DWORD *)v11 + 4) = 1;
}


void BattleSyncTransformComponent__LateUpdate(BattleSyncTransformComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(BattleSyncTransformComponent_o *, const MethodInfo *))this->klass->vtable._4_SyncTarget.methodPtr)(
    this,
    this->klass->vtable._4_SyncTarget.method);
}


BattleSyncTransformComponent_o *BattleSyncTransformComponent__SetTarget(
        BattleSyncTransformComponent_o *this,
        UnityEngine_Transform_o *target,
        BattleSyncTransformComponent_o *syncSetting,
        const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BattleSyncTransformComponent_SyncData_o *syncData; // x1

  this->fields.targetObj = target;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetObj, (int32_t)target, (int32_t)syncSetting, method);
  if ( !syncSetting )
    sub_1C3E7C0(v6, v7);
  syncData = syncSetting->fields.syncData;
  this->fields.syncData = syncData;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.syncData, (int32_t)syncData, v8, v9);
  return this;
}


BattleSyncTransformComponent_o *BattleSyncTransformComponent__SetTarget_47664828(
        BattleSyncTransformComponent_o *this,
        UnityEngine_Transform_o *target,
        BattleSyncTransformComponent_SyncData_o *syncSettingData,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  this->fields.targetObj = target;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetObj, (int32_t)target, (int32_t)syncSettingData, method);
  this->fields.syncData = syncSettingData;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.syncData, (int32_t)syncSettingData, v6, v7);
  return this;
}


void BattleSyncTransformComponent__SyncTarget(BattleSyncTransformComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  struct BattleSyncTransformComponent_SyncData_o *syncData; // x20
  UnityEngine_Transform_o *v7; // x21
  UnityEngine_Transform_o *v8; // x21
  const MethodInfo *v9; // x1
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Transform_o *v11; // x21
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o FixRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C5A4FF & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A4FF = 1;
  }
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(targetObj, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    syncData = this->fields.syncData;
    if ( syncData )
    {
      if ( (syncData->fields.syncType & 1) == 0 )
        goto LABEL_26;
      v7 = this->fields.targetObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( transform )
      {
        position = UnityEngine_Transform__get_position(transform, 0);
        if ( v7 )
        {
          v13.fields.z = position.fields.z + syncData->fields.positionDiff.fields.z;
          v13.fields.y = position.fields.y + syncData->fields.positionDiff.fields.y;
          v13.fields.x = position.fields.x + syncData->fields.positionDiff.fields.x;
          UnityEngine_Transform__set_position(v7, v13, 0);
          syncData = this->fields.syncData;
          if ( syncData )
          {
LABEL_26:
            if ( (syncData->fields.syncType & 2) == 0
              || (v8 = this->fields.targetObj,
                  (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) != 0)
              && (rotation = UnityEngine_Transform__get_rotation(transform, 0),
                  FixRotation = BattleSyncTransformComponent_SyncData__GetFixRotation(syncData, rotation, v9),
                  v8)
              && (UnityEngine_Transform__set_rotation(v8, FixRotation, 0), (syncData = this->fields.syncData) != 0) )
            {
              if ( (syncData->fields.syncType & 4) == 0 )
                goto LABEL_19;
              v10 = this->fields.targetObj;
              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
              if ( transform )
              {
                localScale = UnityEngine_Transform__get_localScale(transform, 0);
                if ( v10 )
                {
                  v15.fields.z = localScale.fields.z + syncData->fields.scaleDiff.fields.z;
                  v15.fields.y = localScale.fields.y + syncData->fields.scaleDiff.fields.y;
                  v15.fields.x = localScale.fields.x + syncData->fields.scaleDiff.fields.x;
                  UnityEngine_Transform__set_localScale(v10, v15, 0);
                  syncData = this->fields.syncData;
                  if ( syncData )
                  {
LABEL_19:
                    if ( (syncData->fields.syncType & 8) == 0 )
                      return;
                    v11 = this->fields.targetObj;
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                    if ( transform )
                    {
                      lossyScale = UnityEngine_Transform__get_lossyScale(transform, 0);
                      lossyScale.fields.x = lossyScale.fields.x + syncData->fields.scaleDiff.fields.x;
                      lossyScale.fields.y = lossyScale.fields.y + syncData->fields.scaleDiff.fields.y;
                      lossyScale.fields.z = lossyScale.fields.z + syncData->fields.scaleDiff.fields.z;
                      TransformHelper__SetLossyScale(v11, lossyScale, 0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1C3E7C0(transform, v5);
  }
}


void BattleSyncTransformComponent__UpdateTarget(
        BattleSyncTransformComponent_o *this,
        UnityEngine_Transform_o *target,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.targetObj = target;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetObj, (int32_t)target, (int32_t)method, v3);
}


bool BattleSyncTransformComponent__get_IsNotExecSync(BattleSyncTransformComponent_o *this, const MethodInfo *method)
{
  struct BattleSyncTransformComponent_SyncData_o *syncData; // x8

  syncData = this->fields.syncData;
  if ( !syncData )
    sub_1C3E7C0(this, method);
  return syncData->fields.syncType == 0;
}


void BattleSyncTransformComponent_SyncData___ctor(
        BattleSyncTransformComponent_SyncData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Vector3_o BattleSyncTransformComponent_SyncData__GetFixPosition(
        BattleSyncTransformComponent_SyncData_o *this,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = position.fields.x + this->fields.positionDiff.fields.x;
  v4 = position.fields.y + this->fields.positionDiff.fields.y;
  v5 = position.fields.z + this->fields.positionDiff.fields.z;
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


UnityEngine_Quaternion_o BattleSyncTransformComponent_SyncData__GetFixRotation(
        BattleSyncTransformComponent_SyncData_o *this,
        UnityEngine_Quaternion_o rotation,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4

  v4 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation, 0);
  v4.fields.x = v4.fields.x * 57.296;
  v4.fields.y = v4.fields.y * 57.296;
  v4.fields.z = v4.fields.z * 57.296;
  Positive = UnityEngine_Quaternion__Internal_MakePositive(v4, 0);
  Positive.fields.x = (float)(Positive.fields.x + this->fields.rotationDiff.fields.x) * 0.017453;
  Positive.fields.y = (float)(Positive.fields.y + this->fields.rotationDiff.fields.y) * 0.017453;
  Positive.fields.z = (float)(Positive.fields.z + this->fields.rotationDiff.fields.z) * 0.017453;
  return UnityEngine_Quaternion__Internal_FromEulerRad(Positive, 0);
}


UnityEngine_Vector3_o BattleSyncTransformComponent_SyncData__GetFixScale(
        BattleSyncTransformComponent_SyncData_o *this,
        UnityEngine_Vector3_o scale,
        const MethodInfo *method)
{
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = scale.fields.x + this->fields.scaleDiff.fields.x;
  v4 = scale.fields.y + this->fields.scaleDiff.fields.y;
  v5 = scale.fields.z + this->fields.scaleDiff.fields.z;
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


bool BattleSyncTransformComponent_SyncData__IsSyncParam(
        BattleSyncTransformComponent_SyncData_o *this,
        int32_t paramType,
        const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.syncType & paramType) < 0) ^ v3 | ((this->fields.syncType & paramType) == 0));
}