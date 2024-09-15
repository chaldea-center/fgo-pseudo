// attributes: thunk
void __fastcall BattleSyncFromTargetTransformComponent___ctor(
        BattleSyncFromTargetTransformComponent_o *this,
        const MethodInfo *method)
{
  BattleSyncTransformComponent___ctor((BattleSyncTransformComponent_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSyncFromTargetTransformComponent__SyncTarget(
        BattleSyncFromTargetTransformComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v5; // x1
  struct BattleSyncTransformComponent_SyncData_o *syncData; // x8
  struct BattleSyncTransformComponent_SyncData_o *v7; // x21
  UnityEngine_Transform_o *v8; // x20
  float v9; // s0
  float v10; // s1
  float v11; // s2
  BattleSyncTransformComponent_SyncData_o *v12; // x21
  UnityEngine_Transform_o *v13; // x20
  int v14; // s0
  int v18; // s0
  UnityEngine_Transform_o *v22; // x8
  struct BattleSyncTransformComponent_SyncData_o *v23; // x19
  UnityEngine_Transform_o *v24; // x20
  float v25; // s0
  float v26; // s1
  float v27; // s2
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A30FCB & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A30FCB = 1;
  }
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(targetObj, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    syncData = this->fields.syncData;
    if ( syncData )
    {
      if ( (syncData->fields.syncType & 1) == 0 )
        goto LABEL_26;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( this->fields.targetObj )
      {
        v7 = this->fields.syncData;
        v8 = transform;
        *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_position(this->fields.targetObj, 0LL);
        if ( v7 )
        {
          if ( v8 )
          {
            v28.fields.z = v11 + v7->fields.positionDiff.fields.z;
            v28.fields.y = v10 + v7->fields.positionDiff.fields.y;
            v28.fields.x = v9 + v7->fields.positionDiff.fields.x;
            UnityEngine_Transform__set_position(v8, v28, 0LL);
            syncData = this->fields.syncData;
            if ( syncData )
            {
LABEL_26:
              if ( (syncData->fields.syncType & 2) == 0
                || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
                    this->fields.targetObj)
                && (v12 = this->fields.syncData,
                    v13 = transform,
                    *(UnityEngine_Quaternion_o *)&v14 = UnityEngine_Transform__get_rotation(this->fields.targetObj, 0LL),
                    v12)
                && (*(UnityEngine_Quaternion_o *)&v18 = BattleSyncTransformComponent_SyncData__GetFixRotation(
                                                          v12,
                                                          *(UnityEngine_Quaternion_o *)&v14,
                                                          v5),
                    v13)
                && (UnityEngine_Transform__set_rotation(v13, *(UnityEngine_Quaternion_o *)&v18, 0LL),
                    (syncData = this->fields.syncData) != 0LL) )
              {
                if ( (syncData->fields.syncType & 4) == 0 )
                  return;
                transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                v22 = this->fields.targetObj;
                if ( v22 )
                {
                  v23 = this->fields.syncData;
                  v24 = transform;
                  *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_localScale(v22, 0LL);
                  if ( v23 )
                  {
                    if ( v24 )
                    {
                      v29.fields.z = v27 + v23->fields.scaleDiff.fields.z;
                      v29.fields.y = v26 + v23->fields.scaleDiff.fields.y;
                      v29.fields.x = v25 + v23->fields.scaleDiff.fields.x;
                      UnityEngine_Transform__set_localScale(v24, v29, 0LL);
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
    sub_1B7641C(transform, v5);
  }
}