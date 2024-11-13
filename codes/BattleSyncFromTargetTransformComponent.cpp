void __fastcall BattleSyncFromTargetTransformComponent___ctor(
        BattleSyncFromTargetTransformComponent_o *this,
        const MethodInfo *method)
{
  BattleSyncTransformComponent___ctor((BattleSyncTransformComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSyncFromTargetTransformComponent__SyncTarget(
        BattleSyncFromTargetTransformComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *targetObj; // x20
  __int64 v5; // x1
  BattleSyncTransformComponent_SyncData_o *syncData; // x0
  BattleSyncTransformComponent_SyncData_o *v7; // x21
  UnityEngine_Transform_o *v8; // x20
  int v9; // s0
  int v12; // s0
  BattleSyncTransformComponent_SyncData_o *v15; // x21
  UnityEngine_Transform_o *v16; // x20
  int v17; // s0
  int v21; // s0
  UnityEngine_Transform_o *v25; // x8
  BattleSyncTransformComponent_SyncData_o *v26; // x19
  UnityEngine_Transform_o *v27; // x20
  int v28; // s0
  int v31; // s0

  if ( (byte_4B1934D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1934D = 1;
  }
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(targetObj, 0LL, 0LL) )
  {
    syncData = this->fields.syncData;
    if ( !syncData )
      goto LABEL_25;
    if ( BattleSyncTransformComponent_SyncData__IsSyncParam(syncData, 1, 0LL) )
    {
      syncData = (BattleSyncTransformComponent_SyncData_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this->fields.targetObj )
        goto LABEL_25;
      v7 = this->fields.syncData;
      v8 = (UnityEngine_Transform_o *)syncData;
      *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_position(this->fields.targetObj, 0LL);
      if ( !v7 )
        goto LABEL_25;
      *(UnityEngine_Vector3_o *)&v12 = BattleSyncTransformComponent_SyncData__GetFixPosition(
                                         v7,
                                         *(UnityEngine_Vector3_o *)&v9,
                                         0LL);
      if ( !v8 )
        goto LABEL_25;
      UnityEngine_Transform__set_position(v8, *(UnityEngine_Vector3_o *)&v12, 0LL);
    }
    syncData = this->fields.syncData;
    if ( !syncData )
      goto LABEL_25;
    if ( BattleSyncTransformComponent_SyncData__IsSyncParam(syncData, 2, 0LL) )
    {
      syncData = (BattleSyncTransformComponent_SyncData_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this->fields.targetObj )
        goto LABEL_25;
      v15 = this->fields.syncData;
      v16 = (UnityEngine_Transform_o *)syncData;
      *(UnityEngine_Quaternion_o *)&v17 = UnityEngine_Transform__get_rotation(this->fields.targetObj, 0LL);
      if ( !v15 )
        goto LABEL_25;
      *(UnityEngine_Quaternion_o *)&v21 = BattleSyncTransformComponent_SyncData__GetFixRotation(
                                            v15,
                                            *(UnityEngine_Quaternion_o *)&v17,
                                            0LL);
      if ( !v16 )
        goto LABEL_25;
      UnityEngine_Transform__set_rotation(v16, *(UnityEngine_Quaternion_o *)&v21, 0LL);
    }
    syncData = this->fields.syncData;
    if ( !syncData )
      goto LABEL_25;
    if ( BattleSyncTransformComponent_SyncData__IsSyncParam(syncData, 4, 0LL) )
    {
      syncData = (BattleSyncTransformComponent_SyncData_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      v25 = this->fields.targetObj;
      if ( v25 )
      {
        v26 = this->fields.syncData;
        v27 = (UnityEngine_Transform_o *)syncData;
        *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Transform__get_localScale(v25, 0LL);
        if ( v26 )
        {
          *(UnityEngine_Vector3_o *)&v31 = BattleSyncTransformComponent_SyncData__GetFixScale(
                                             v26,
                                             *(UnityEngine_Vector3_o *)&v28,
                                             0LL);
          if ( v27 )
          {
            UnityEngine_Transform__set_localScale(v27, *(UnityEngine_Vector3_o *)&v31, 0LL);
            return;
          }
        }
      }
LABEL_25:
      sub_1BCAA3C(syncData, v5);
    }
  }
}