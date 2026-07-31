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
  UnityEngine_Transform_o *v7; // x20
  struct BattleSyncTransformComponent_SyncData_o *v8; // x21
  UnityEngine_Transform_o *v9; // x20
  BattleSyncTransformComponent_SyncData_o *v10; // x21
  UnityEngine_Transform_o *v11; // x20
  struct BattleSyncTransformComponent_SyncData_o *v12; // x21
  UnityEngine_Transform_o *v13; // x8
  UnityEngine_Transform_o *v14; // x20
  struct BattleSyncTransformComponent_SyncData_o *v15; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o FixRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593C156 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C156 = 1;
  }
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(targetObj, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    syncData = this->fields.syncData;
    if ( syncData )
    {
      if ( (syncData->fields.syncType & 1) == 0 )
        goto LABEL_30;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( this->fields.targetObj )
      {
        v7 = transform;
        v8 = this->fields.syncData;
        position = UnityEngine_Transform__get_position(this->fields.targetObj, 0);
        if ( v8 )
        {
          if ( v7 )
          {
            v17.fields.z = position.fields.z + v8->fields.positionDiff.fields.z;
            v17.fields.y = position.fields.y + v8->fields.positionDiff.fields.y;
            v17.fields.x = position.fields.x + v8->fields.positionDiff.fields.x;
            UnityEngine_Transform__set_position(v7, v17, 0);
            syncData = this->fields.syncData;
            if ( syncData )
            {
LABEL_30:
              if ( (syncData->fields.syncType & 2) == 0
                || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0),
                    this->fields.targetObj)
                && (v9 = transform,
                    v10 = this->fields.syncData,
                    rotation = UnityEngine_Transform__get_rotation(this->fields.targetObj, 0),
                    v10)
                && (FixRotation = BattleSyncTransformComponent_SyncData__GetFixRotation(v10, rotation, v5), v9)
                && (UnityEngine_Transform__set_rotation(v9, FixRotation, 0), (syncData = this->fields.syncData) != 0) )
              {
                if ( (syncData->fields.syncType & 4) == 0 )
                  goto LABEL_22;
                transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                if ( this->fields.targetObj )
                {
                  v11 = transform;
                  v12 = this->fields.syncData;
                  localScale = UnityEngine_Transform__get_localScale(this->fields.targetObj, 0);
                  if ( v12 )
                  {
                    if ( v11 )
                    {
                      v19.fields.z = localScale.fields.z + v12->fields.scaleDiff.fields.z;
                      v19.fields.y = localScale.fields.y + v12->fields.scaleDiff.fields.y;
                      v19.fields.x = localScale.fields.x + v12->fields.scaleDiff.fields.x;
                      UnityEngine_Transform__set_localScale(v11, v19, 0);
                      syncData = this->fields.syncData;
                      if ( syncData )
                      {
LABEL_22:
                        if ( (syncData->fields.syncType & 8) == 0 )
                          return;
                        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                        v13 = this->fields.targetObj;
                        if ( v13 )
                        {
                          v14 = transform;
                          v15 = this->fields.syncData;
                          lossyScale = UnityEngine_Transform__get_lossyScale(v13, 0);
                          if ( v15 )
                          {
                            v21.fields.x = lossyScale.fields.x + v15->fields.scaleDiff.fields.x;
                            v21.fields.y = lossyScale.fields.y + v15->fields.scaleDiff.fields.y;
                            v21.fields.z = lossyScale.fields.z + v15->fields.scaleDiff.fields.z;
                            TransformHelper__SetLossyScale(v14, v21, 0);
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
        }
      }
    }
    sub_21FFECC(transform, v5);
  }
}