void BillBoardGrouped___ctor(BillBoardGrouped_o *this, const MethodInfo *method)
{
  this->fields.grouping = -1;
  BillBoard___ctor((BillBoard_o *)this, method);
}


UnityEngine_Vector3_o BillBoardGrouped__GetDimensioned(
        BillBoardGrouped_o *this,
        UnityEngine_Vector3_o pLookVec,
        const MethodInfo *method)
{
  if ( !this->fields.enableRotationZ )
    pLookVec.fields.y = 0.0;
  return pLookVec;
}


void BillBoardGrouped__LateUpdate(BillBoardGrouped_o *this, const MethodInfo *method)
{
  int32_t grouping; // w8
  struct UnityEngine_Transform_o *mTrf; // x19
  BillBoardGroupManager_c *v5; // x0
  BillBoardGroupManager_o *Instance; // x0
  struct UnityEngine_Transform_o *v9; // x20
  UnityEngine_Transform_o *v10; // x0
  const MethodInfo *v11; // x3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o forward; // 0:kr00_12.12
  UnityEngine_Vector3_o LookVec; // 0:kr20_12.12
  UnityEngine_Vector3_o VecBack; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2FD84 & 1) == 0 )
  {
    sub_1C93AD4(&BillBoardGroupManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_BillBoardGroupManager__get_Instance__);
    byte_4D2FD84 = 1;
  }
  grouping = this->fields.grouping;
  if ( grouping < 0 )
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
      VecBack = v5->static_fields->VecBack;
LABEL_21:
      v17 = UnityEngine_Quaternion__LookRotation_72058188(VecBack, 0);
      if ( mTrf )
      {
        v10 = mTrf;
        goto LABEL_23;
      }
LABEL_24:
      sub_1C93D2C(Instance, method);
    }
    Instance = (BillBoardGroupManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BillBoardGroupManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    LookVec = BillBoardGroupManager__GetLookVec(Instance, this->fields.grouping, !this->fields.enableRotationZ, v11);
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    if ( (float)((float)((float)(LookVec.fields.z - static_fields->zeroVector.fields.z)
                       * (float)(LookVec.fields.z - static_fields->zeroVector.fields.z))
               + (float)((float)((float)(LookVec.fields.x - static_fields->zeroVector.fields.x)
                               * (float)(LookVec.fields.x - static_fields->zeroVector.fields.x))
                       + (float)((float)(LookVec.fields.y - static_fields->zeroVector.fields.y)
                               * (float)(LookVec.fields.y - static_fields->zeroVector.fields.y)))) >= 1.0e-10 )
    {
      mTrf = this->fields.mTrf;
      VecBack = LookVec;
      goto LABEL_21;
    }
LABEL_19:
    BillBoard__UpdateBillboard((BillBoard_o *)this, method);
    return;
  }
  Instance = (BillBoardGroupManager_o *)this->fields.targetCamera;
  if ( !Instance )
    goto LABEL_24;
  v9 = this->fields.mTrf;
  Instance = (BillBoardGroupManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_24;
  forward = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)Instance, 0);
  v16.fields.y = -forward.fields.y;
  if ( !this->fields.enableRotationZ )
    v16.fields.y = 0.0;
  v16.fields.x = -forward.fields.x;
  v16.fields.z = -forward.fields.z;
  v17 = UnityEngine_Quaternion__LookRotation_72058188(v16, 0);
  if ( !v9 )
    goto LABEL_24;
  v10 = v9;
LABEL_23:
  UnityEngine_Transform__set_rotation(v10, v17, 0);
}


void BillBoardGrouped__Update(BillBoardGrouped_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t grouping; // w20
  UnityEngine_Camera_o *targetCamera; // x21
  BillBoardGroupManager_o *v6; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4D2FD83 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_BillBoardGroupManager__get_Instance__);
    byte_4D2FD83 = 1;
  }
  if ( this->fields.grouping >= 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BillBoardGroupManager__get_Instance__);
    grouping = this->fields.grouping;
    targetCamera = this->fields.targetCamera;
    v6 = (BillBoardGroupManager_o *)Instance;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !v6 )
      sub_1C93D2C(gameObject, v8);
    BillBoardGroupManager__AddData(v6, grouping, targetCamera, gameObject, v9);
  }
}