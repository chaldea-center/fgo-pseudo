void __fastcall BillBoardGrouped___ctor(BillBoardGrouped_o *this, const MethodInfo *method)
{
  this->fields.grouping = -1;
  BillBoard___ctor((BillBoard_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BillBoardGrouped__GetDimensioned(
        BillBoardGrouped_o *this,
        UnityEngine_Vector3_o pLookVec,
        const MethodInfo *method)
{
  float v3; // s1

  if ( !this->fields.enableRotationZ )
    v3 = 0.0;
  return pLookVec;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BillBoardGrouped__LateUpdate(BillBoardGrouped_o *this, const MethodInfo *method)
{
  int32_t grouping; // w8
  struct UnityEngine_Transform_o *mTrf; // x19
  BillBoardGroupManager_c *v5; // x0
  float *p_targetFov; // x8
  float v7; // s0
  float v8; // s1
  float v9; // s2
  BillBoardGroupManager_o *Instance; // x0
  struct UnityEngine_Transform_o *v11; // x20
  float v12; // s1
  float v13; // s0
  float v14; // s2
  int v15; // s0
  UnityEngine_Transform_o *v19; // x0
  const MethodInfo *v20; // x3
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LookVec; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDB961 & 1) == 0 )
  {
    sub_1C21E38(&BillBoardGroupManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_BillBoardGroupManager__get_Instance__);
    byte_4BDB961 = 1;
  }
  grouping = this->fields.grouping;
  if ( (grouping & 0x80000000) != 0 )
    goto LABEL_19;
  if ( grouping != 1 )
  {
    if ( !grouping )
    {
      mTrf = this->fields.mTrf;
      v5 = BillBoardGroupManager_TypeInfo;
      if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
        v5 = BillBoardGroupManager_TypeInfo;
      }
      p_targetFov = &v5->static_fields->targetFov;
      v7 = p_targetFov[4];
      v8 = p_targetFov[5];
      v9 = p_targetFov[6];
LABEL_21:
      *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__LookRotation_70807972(
                                            *(UnityEngine_Vector3_o *)&v7,
                                            0LL);
      if ( mTrf )
      {
        v19 = mTrf;
        goto LABEL_23;
      }
LABEL_24:
      sub_1C22094(Instance, method);
    }
    Instance = (BillBoardGroupManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BillBoardGroupManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    LookVec = BillBoardGroupManager__GetLookVec(Instance, this->fields.grouping, !this->fields.enableRotationZ, v20);
    x = LookVec.fields.x;
    y = LookVec.fields.y;
    z = LookVec.fields.z;
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    if ( (float)((float)((float)(z - static_fields->zeroVector.fields.z)
                       * (float)(z - static_fields->zeroVector.fields.z))
               + (float)((float)((float)(x - static_fields->zeroVector.fields.x)
                               * (float)(x - static_fields->zeroVector.fields.x))
                       + (float)((float)(y - static_fields->zeroVector.fields.y)
                               * (float)(y - static_fields->zeroVector.fields.y)))) >= 1.0e-10 )
    {
      mTrf = this->fields.mTrf;
      v7 = x;
      v8 = y;
      v9 = z;
      goto LABEL_21;
    }
LABEL_19:
    BillBoard__UpdateBillboard((BillBoard_o *)this, method);
    return;
  }
  Instance = (BillBoardGroupManager_o *)this->fields.targetCamera;
  if ( !Instance )
    goto LABEL_24;
  v11 = this->fields.mTrf;
  Instance = (BillBoardGroupManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_24;
  forward = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)Instance, 0LL);
  v12 = -forward.fields.y;
  v13 = -forward.fields.x;
  v14 = -forward.fields.z;
  if ( !this->fields.enableRotationZ )
    v12 = 0.0;
  *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__LookRotation_70807972(*(UnityEngine_Vector3_o *)&v13, 0LL);
  if ( !v11 )
    goto LABEL_24;
  v19 = v11;
LABEL_23:
  UnityEngine_Transform__set_rotation(v19, *(UnityEngine_Quaternion_o *)&v15, 0LL);
}


void __fastcall BillBoardGrouped__Update(BillBoardGrouped_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t grouping; // w20
  UnityEngine_Camera_o *targetCamera; // x21
  BillBoardGroupManager_o *v6; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4BDB960 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_BillBoardGroupManager__get_Instance__);
    byte_4BDB960 = 1;
  }
  if ( this->fields.grouping >= 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BillBoardGroupManager__get_Instance__);
    grouping = this->fields.grouping;
    targetCamera = this->fields.targetCamera;
    v6 = (BillBoardGroupManager_o *)Instance;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v6 )
      sub_1C22094(gameObject, v8);
    BillBoardGroupManager__AddData(v6, grouping, targetCamera, gameObject, v9);
  }
}