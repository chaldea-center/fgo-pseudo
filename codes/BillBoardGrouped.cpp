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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t grouping; // w8
  struct UnityEngine_Transform_o *mTrf; // x19
  BillBoardGroupManager_c *v10; // x0
  float *p_targetFov; // x8
  float v12; // s0
  float v13; // s1
  float v14; // s2
  BillBoardGroupManager_o *Instance; // x0
  struct UnityEngine_Transform_o *v16; // x20
  float v17; // s1
  float v18; // s0
  float v19; // s2
  int v20; // s0
  UnityEngine_Transform_o *v24; // x0
  const MethodInfo *v25; // x3
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LookVec; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E7E61 & 1) == 0 )
  {
    sub_B5D5C4(&BillBoardGroupManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BillBoardGroupManager__get_Instance__, v5, v6, v7);
    byte_42E7E61 = 1;
  }
  grouping = this->fields.grouping;
  if ( (grouping & 0x80000000) != 0 )
    goto LABEL_18;
  if ( grouping != 1 )
  {
    if ( !grouping )
    {
      mTrf = this->fields.mTrf;
      v10 = BillBoardGroupManager_TypeInfo;
      if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
        v10 = BillBoardGroupManager_TypeInfo;
      }
      p_targetFov = &v10->static_fields->targetFov;
      v12 = p_targetFov[4];
      v13 = p_targetFov[5];
      v14 = p_targetFov[6];
LABEL_20:
      *(UnityEngine_Quaternion_o *)&v20 = UnityEngine_Quaternion__LookRotation_35651248(
                                            *(UnityEngine_Vector3_o *)&v12,
                                            0LL);
      if ( mTrf )
      {
        v24 = mTrf;
        goto LABEL_22;
      }
LABEL_23:
      sub_B5D69C(Instance, method);
    }
    Instance = (BillBoardGroupManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BillBoardGroupManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    LookVec = BillBoardGroupManager__GetLookVec(Instance, this->fields.grouping, !this->fields.enableRotationZ, v25);
    x = LookVec.fields.x;
    y = LookVec.fields.y;
    z = LookVec.fields.z;
    zero = UnityEngine_Vector3__get_zero(0LL);
    v31.fields.x = x;
    v31.fields.y = y;
    v31.fields.z = z;
    if ( !UnityEngine_Vector3__op_Equality(v31, zero, 0LL) )
    {
      mTrf = this->fields.mTrf;
      v12 = x;
      v13 = y;
      v14 = z;
      goto LABEL_20;
    }
LABEL_18:
    BillBoard__UpdateBillboard((BillBoard_o *)this, method);
    return;
  }
  Instance = (BillBoardGroupManager_o *)this->fields.targetCamera;
  if ( !Instance )
    goto LABEL_23;
  v16 = this->fields.mTrf;
  Instance = (BillBoardGroupManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_23;
  forward = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)Instance, 0LL);
  v17 = -forward.fields.y;
  v18 = -forward.fields.x;
  v19 = -forward.fields.z;
  if ( !this->fields.enableRotationZ )
    v17 = 0.0;
  *(UnityEngine_Quaternion_o *)&v20 = UnityEngine_Quaternion__LookRotation_35651248(*(UnityEngine_Vector3_o *)&v18, 0LL);
  if ( !v16 )
    goto LABEL_23;
  v24 = v16;
LABEL_22:
  UnityEngine_Transform__set_rotation(v24, *(UnityEngine_Quaternion_o *)&v20, 0LL);
}


void __fastcall BillBoardGrouped__Update(BillBoardGrouped_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  int32_t grouping; // w20
  UnityEngine_Camera_o *targetCamera; // x21
  BillBoardGroupManager_o *v8; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_42E7E60 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BillBoardGroupManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7E60 = 1;
  }
  if ( this->fields.grouping >= 2 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BillBoardGroupManager__get_Instance__);
    grouping = this->fields.grouping;
    targetCamera = this->fields.targetCamera;
    v8 = (BillBoardGroupManager_o *)Instance;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v8 )
      sub_B5D69C(gameObject, v10);
    BillBoardGroupManager__AddData(v8, grouping, targetCamera, gameObject, v11);
  }
}