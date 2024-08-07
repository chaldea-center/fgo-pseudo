void __fastcall BattleSyncTransformComponent___ctor(BattleSyncTransformComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A01B75 & 1) == 0 )
  {
    sub_1B64A00(&BattleSyncTransformComponent_SyncData_TypeInfo, method);
    byte_4A01B75 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64C4C(BattleSyncTransformComponent_SyncData_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.syncData = (struct BattleSyncTransformComponent_SyncData_o *)v3;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.syncData, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSyncTransformComponent__InitSyncPos(
        BattleSyncTransformComponent_o *this,
        UnityEngine_Vector3_o posDiff,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  struct UnityEngine_Transform_o **p_targetObj; // x19
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v9; // x0
  __int64 v10; // x1
  float *v11; // x8

  this->fields.targetObj = 0LL;
  p_targetObj = &this->fields.targetObj;
  z = posDiff.fields.z;
  y = posDiff.fields.y;
  x = posDiff.fields.x;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.targetObj, 0, v3, v4);
  v11 = (float *)*(p_targetObj - 1);
  if ( !v11 )
    sub_1B64C5C(v9, v10);
  v11[5] = x;
  v11[6] = y;
  v11[7] = z;
  *((_DWORD *)v11 + 4) = 1;
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
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattleSyncTransformComponent_SyncData_o *syncData; // x1

  this->fields.targetObj = target;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.targetObj,
    (int32_t)target,
    (int32_t)syncSetting,
    (int32_t)method);
  if ( !syncSetting )
    sub_1B64C5C(v6, v7);
  syncData = syncSetting->fields.syncData;
  this->fields.syncData = syncData;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.syncData, (int32_t)syncData, v8, v9);
  return this;
}


BattleSyncTransformComponent_o *__fastcall BattleSyncTransformComponent__SetTarget_43714980(
        BattleSyncTransformComponent_o *this,
        UnityEngine_Transform_o *target,
        BattleSyncTransformComponent_SyncData_o *syncSettingData,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3

  this->fields.targetObj = target;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.targetObj,
    (int32_t)target,
    (int32_t)syncSettingData,
    (int32_t)method);
  this->fields.syncData = syncSettingData;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.syncData, (int32_t)syncSettingData, v6, v7);
  return this;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSyncTransformComponent__SyncTarget(
        BattleSyncTransformComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  struct BattleSyncTransformComponent_SyncData_o *syncData; // x20
  UnityEngine_Transform_o *v7; // x21
  float v8; // s0
  float v9; // s1
  float v10; // s2
  UnityEngine_Transform_o *v11; // x21
  const MethodInfo *v12; // x1
  int v13; // s0
  UnityEngine_Transform_o *v17; // x21
  float v18; // s0
  float v19; // s1
  float v20; // s2
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A01B74 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A01B74 = 1;
  }
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(targetObj, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    syncData = this->fields.syncData;
    if ( syncData )
    {
      if ( (syncData->fields.syncType & 1) == 0 )
        goto LABEL_23;
      v7 = this->fields.targetObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( transform )
      {
        *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(transform, 0LL);
        if ( v7 )
        {
          v21.fields.z = v10 + syncData->fields.positionDiff.fields.z;
          v21.fields.y = v9 + syncData->fields.positionDiff.fields.y;
          v21.fields.x = v8 + syncData->fields.positionDiff.fields.x;
          UnityEngine_Transform__set_position(v7, v21, 0LL);
          syncData = this->fields.syncData;
          if ( syncData )
          {
LABEL_23:
            if ( (syncData->fields.syncType & 2) == 0
              || (v11 = this->fields.targetObj,
                  (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) != 0LL)
              && (rotation = UnityEngine_Transform__get_rotation(transform, 0LL),
                  *(UnityEngine_Quaternion_o *)&v13 = BattleSyncTransformComponent_SyncData__GetFixRotation(
                                                        syncData,
                                                        rotation,
                                                        v12),
                  v11)
              && (UnityEngine_Transform__set_rotation(v11, *(UnityEngine_Quaternion_o *)&v13, 0LL),
                  (syncData = this->fields.syncData) != 0LL) )
            {
              if ( (syncData->fields.syncType & 4) == 0 )
                return;
              v17 = this->fields.targetObj;
              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
              if ( transform )
              {
                *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_localScale(transform, 0LL);
                if ( v17 )
                {
                  v22.fields.z = v20 + syncData->fields.scaleDiff.fields.z;
                  v22.fields.y = v19 + syncData->fields.scaleDiff.fields.y;
                  v22.fields.x = v18 + syncData->fields.scaleDiff.fields.x;
                  UnityEngine_Transform__set_localScale(v17, v22, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
    sub_1B64C5C(transform, v5);
  }
}


void __fastcall BattleSyncTransformComponent__UpdateTarget(
        BattleSyncTransformComponent_o *this,
        UnityEngine_Transform_o *target,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.targetObj = target;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.targetObj, (int32_t)target, (int32_t)method, v3);
}


bool __fastcall BattleSyncTransformComponent__get_IsNotExecSync(
        BattleSyncTransformComponent_o *this,
        const MethodInfo *method)
{
  struct BattleSyncTransformComponent_SyncData_o *syncData; // x8

  syncData = this->fields.syncData;
  if ( !syncData )
    sub_1B64C5C(this, method);
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
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation, 0LL);
  v8.fields.x = v8.fields.x * 57.296;
  v8.fields.y = v8.fields.y * 57.296;
  v8.fields.z = v8.fields.z * 57.296;
  Positive = UnityEngine_Quaternion__Internal_MakePositive(v8, 0LL);
  Positive.fields.x = (float)(Positive.fields.x + this->fields.rotationDiff.fields.x) * 0.017453;
  Positive.fields.y = (float)(Positive.fields.y + this->fields.rotationDiff.fields.y) * 0.017453;
  Positive.fields.z = (float)(Positive.fields.z + this->fields.rotationDiff.fields.z) * 0.017453;
  *(UnityEngine_Quaternion_o *)&v4 = UnityEngine_Quaternion__Internal_FromEulerRad(Positive, 0LL);
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