// attributes: thunk
void BattleSyncFromTargetTransformComponent___ctor(
        BattleSyncFromTargetTransformComponent_o *this,
        const MethodInfo *method)
{
  BattleSyncTransformComponent___ctor((BattleSyncTransformComponent_o *)this, method);
}


void BattleSyncFromTargetTransformComponent__SyncTarget(
        BattleSyncFromTargetTransformComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v5; // x1
  struct BattleSyncTransformComponent_SyncData_o *syncData; // x8
  struct BattleSyncTransformComponent_SyncData_o *v7; // x21
  UnityEngine_Transform_o *v8; // x20
  BattleSyncTransformComponent_SyncData_o *v9; // x21
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_Transform_o *v11; // x8
  struct BattleSyncTransformComponent_SyncData_o *v12; // x19
  UnityEngine_Transform_o *v13; // x20
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o FixRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2A9D5 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A9D5 = 1;
  }
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(targetObj, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    syncData = this->fields.syncData;
    if ( syncData )
    {
      if ( (syncData->fields.syncType & 1) == 0 )
        goto LABEL_26;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( this->fields.targetObj )
      {
        v7 = this->fields.syncData;
        v8 = transform;
        position = UnityEngine_Transform__get_position(this->fields.targetObj, 0);
        if ( v7 )
        {
          if ( v8 )
          {
            v15.fields.z = position.fields.z + v7->fields.positionDiff.fields.z;
            v15.fields.y = position.fields.y + v7->fields.positionDiff.fields.y;
            v15.fields.x = position.fields.x + v7->fields.positionDiff.fields.x;
            UnityEngine_Transform__set_position(v8, v15, 0);
            syncData = this->fields.syncData;
            if ( syncData )
            {
LABEL_26:
              if ( (syncData->fields.syncType & 2) == 0
                || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0),
                    this->fields.targetObj)
                && (v9 = this->fields.syncData,
                    v10 = transform,
                    rotation = UnityEngine_Transform__get_rotation(this->fields.targetObj, 0),
                    v9)
                && (FixRotation = BattleSyncTransformComponent_SyncData__GetFixRotation(v9, rotation, v5), v10)
                && (UnityEngine_Transform__set_rotation(v10, FixRotation, 0), (syncData = this->fields.syncData) != 0) )
              {
                if ( (syncData->fields.syncType & 4) == 0 )
                  return;
                transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                v11 = this->fields.targetObj;
                if ( v11 )
                {
                  v12 = this->fields.syncData;
                  v13 = transform;
                  localScale = UnityEngine_Transform__get_localScale(v11, 0);
                  if ( v12 )
                  {
                    if ( v13 )
                    {
                      v17.fields.z = localScale.fields.z + v12->fields.scaleDiff.fields.z;
                      v17.fields.y = localScale.fields.y + v12->fields.scaleDiff.fields.y;
                      v17.fields.x = localScale.fields.x + v12->fields.scaleDiff.fields.x;
                      UnityEngine_Transform__set_localScale(v13, v17, 0);
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
    sub_1C2D6EC(transform, v5);
  }
}