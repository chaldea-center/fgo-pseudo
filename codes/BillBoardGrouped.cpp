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
  __int64 v2; // x2
  int32_t grouping; // w8
  struct UnityEngine_Transform_o *mTrf; // x19
  BillBoardGroupManager_c *v6; // x0
  BillBoardGroupManager_o *Instance; // x0
  struct UnityEngine_Transform_o *v10; // x20
  UnityEngine_Transform_o *v11; // x0
  const MethodInfo *v12; // x3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o forward; // 0:kr00_12.12
  UnityEngine_Vector3_o LookVec; // 0:kr20_12.12
  UnityEngine_Vector3_o VecBack; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596FB47 & 1) == 0 )
  {
    sub_2213A60(&BillBoardGroupManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BillBoardGroupManager__get_Instance__);
    byte_596FB47 = 1;
  }
  grouping = this->fields.grouping;
  if ( grouping < 0 )
    goto LABEL_19;
  if ( grouping != 1 )
  {
    if ( !grouping )
    {
      mTrf = this->fields.mTrf;
      v6 = BillBoardGroupManager_TypeInfo;
      if ( !*(&BillBoardGroupManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo, method, v2);
        v6 = BillBoardGroupManager_TypeInfo;
      }
      VecBack = v6->static_fields->VecBack;
LABEL_21:
      v18 = UnityEngine_Quaternion__LookRotation_83371248(VecBack, 0);
      if ( mTrf )
      {
        v11 = mTrf;
        goto LABEL_23;
      }
LABEL_24:
      sub_2213CDC(Instance, method);
    }
    Instance = (BillBoardGroupManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BillBoardGroupManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    LookVec = BillBoardGroupManager__GetLookVec(Instance, this->fields.grouping, !this->fields.enableRotationZ, v12);
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
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
  v10 = this->fields.mTrf;
  Instance = (BillBoardGroupManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_24;
  forward = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)Instance, 0);
  v17.fields.y = -forward.fields.y;
  if ( !this->fields.enableRotationZ )
    v17.fields.y = 0.0;
  v17.fields.x = -forward.fields.x;
  v17.fields.z = -forward.fields.z;
  v18 = UnityEngine_Quaternion__LookRotation_83371248(v17, 0);
  if ( !v10 )
    goto LABEL_24;
  v11 = v10;
LABEL_23:
  UnityEngine_Transform__set_rotation(v11, v18, 0);
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

  if ( (byte_596FB46 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_BillBoardGroupManager__get_Instance__);
    byte_596FB46 = 1;
  }
  if ( this->fields.grouping >= 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BillBoardGroupManager__get_Instance__);
    grouping = this->fields.grouping;
    targetCamera = this->fields.targetCamera;
    v6 = (BillBoardGroupManager_o *)Instance;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !v6 )
      sub_2213CDC(gameObject, v8);
    BillBoardGroupManager__AddData(v6, grouping, targetCamera, gameObject, v9);
  }
}