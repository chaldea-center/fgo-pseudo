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
  UnityEngine_Object_o *targetObj; // x20
  __int64 v4; // x1
  BattleSyncTransformComponent_SyncData_o *syncData; // x0
  BattleSyncTransformComponent_SyncData_o *v6; // x21
  UnityEngine_Transform_o *v7; // x20
  int v8; // s0
  int v11; // s0
  BattleSyncTransformComponent_SyncData_o *v14; // x21
  UnityEngine_Transform_o *v15; // x20
  int v16; // s0
  int v20; // s0
  UnityEngine_Transform_o *v24; // x8
  BattleSyncTransformComponent_SyncData_o *v25; // x19
  UnityEngine_Transform_o *v26; // x20
  int v27; // s0
  int v30; // s0

  if ( (byte_4BB78F0 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB78F0 = 1;
  }
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v6 = this->fields.syncData;
      v7 = (UnityEngine_Transform_o *)syncData;
      *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(this->fields.targetObj, 0LL);
      if ( !v6 )
        goto LABEL_25;
      *(UnityEngine_Vector3_o *)&v11 = BattleSyncTransformComponent_SyncData__GetFixPosition(
                                         v6,
                                         *(UnityEngine_Vector3_o *)&v8,
                                         0LL);
      if ( !v7 )
        goto LABEL_25;
      UnityEngine_Transform__set_position(v7, *(UnityEngine_Vector3_o *)&v11, 0LL);
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
      v14 = this->fields.syncData;
      v15 = (UnityEngine_Transform_o *)syncData;
      *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Transform__get_rotation(this->fields.targetObj, 0LL);
      if ( !v14 )
        goto LABEL_25;
      *(UnityEngine_Quaternion_o *)&v20 = BattleSyncTransformComponent_SyncData__GetFixRotation(
                                            v14,
                                            *(UnityEngine_Quaternion_o *)&v16,
                                            0LL);
      if ( !v15 )
        goto LABEL_25;
      UnityEngine_Transform__set_rotation(v15, *(UnityEngine_Quaternion_o *)&v20, 0LL);
    }
    syncData = this->fields.syncData;
    if ( !syncData )
      goto LABEL_25;
    if ( BattleSyncTransformComponent_SyncData__IsSyncParam(syncData, 4, 0LL) )
    {
      syncData = (BattleSyncTransformComponent_SyncData_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      v24 = this->fields.targetObj;
      if ( v24 )
      {
        v25 = this->fields.syncData;
        v26 = (UnityEngine_Transform_o *)syncData;
        *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_localScale(v24, 0LL);
        if ( v25 )
        {
          *(UnityEngine_Vector3_o *)&v30 = BattleSyncTransformComponent_SyncData__GetFixScale(
                                             v25,
                                             *(UnityEngine_Vector3_o *)&v27,
                                             0LL);
          if ( v26 )
          {
            UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v30, 0LL);
            return;
          }
        }
      }
LABEL_25:
      sub_1C13F80(syncData, v4);
    }
  }
}