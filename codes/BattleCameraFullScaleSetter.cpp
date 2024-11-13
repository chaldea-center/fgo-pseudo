void __fastcall BattleCameraFullScaleSetter___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B186BC & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCameraFullScaleSetter_TypeInfo, v1, v2);
    byte_4B186BC = 1;
  }
  LODWORD(BattleCameraFullScaleSetter_TypeInfo->static_fields->DefaultFov) = (struct BattleCameraFullScaleSetter_StaticFields)1109393408;
}


void __fastcall BattleCameraFullScaleSetter___ctor(BattleCameraFullScaleSetter_o *this, const MethodInfo *method)
{
  this->fields.heightFit = 1;
  *(_QWORD *)&this->fields.baseWidth = 0x445B800045000000LL;
  this->fields.baseScale = 576.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCameraFullScaleSetter__CalcScale(BattleCameraFullScaleSetter_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCameraFullScaleSetter_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actorcamera; // x20
  struct BattlePerformance_o *v8; // x8
  float fieldOfView; // s8
  BattleCameraFullScaleSetter_c *v10; // x20
  float baseScale; // s1
  float v12; // s2
  float v13; // s0
  float DefaultFov; // s10
  __int64 v15; // x1
  float v16; // s8
  float v17; // s9

  v3 = this;
  if ( (byte_4B186BB & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCameraFullScaleSetter_TypeInfo, method, v2);
    this = (BattleCameraFullScaleSetter_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B186BB = 1;
  }
  if ( !v3->fields.parentCameraType )
  {
    this = (BattleCameraFullScaleSetter_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
    if ( this )
    {
      baseScale = v3->fields.baseScale;
      v12 = 1.0;
      v13 = baseScale * v3->fields.aspect;
LABEL_23:
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v13, 0LL);
      return;
    }
LABEL_25:
    sub_1BCAA3C(this, method);
  }
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_25;
  actorcamera = (UnityEngine_Object_o *)perf->fields.actorcamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCameraFullScaleSetter_o *)UnityEngine_Object__op_Implicit(actorcamera, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = v3->fields.perf;
    if ( !v8 )
      goto LABEL_25;
    this = (BattleCameraFullScaleSetter_o *)v8->fields.actorcamera;
    if ( !this )
      goto LABEL_25;
    fieldOfView = UnityEngine_Camera__get_fieldOfView((UnityEngine_Camera_o *)this, 0LL);
    v10 = BattleCameraFullScaleSetter_TypeInfo;
  }
  else
  {
    v10 = BattleCameraFullScaleSetter_TypeInfo;
    if ( !BattleCameraFullScaleSetter_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCameraFullScaleSetter_TypeInfo, method);
      v10 = BattleCameraFullScaleSetter_TypeInfo;
    }
    fieldOfView = v10->static_fields->DefaultFov;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, method);
    v10 = BattleCameraFullScaleSetter_TypeInfo;
  }
  DefaultFov = v10->static_fields->DefaultFov;
  if ( fieldOfView != DefaultFov )
  {
    v16 = tanf((float)(fieldOfView * 0.5) * 0.017453);
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10, v15);
      DefaultFov = BattleCameraFullScaleSetter_TypeInfo->static_fields->DefaultFov;
    }
    v17 = tanf((float)(DefaultFov * 0.5) * 0.017453);
    this = (BattleCameraFullScaleSetter_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
    if ( this )
    {
      v12 = (float)(v16 / v17) * v3->fields.panelScale.fields.z;
      baseScale = (float)(v16 / v17) * v3->fields.panelScale.fields.y;
      v13 = (float)(v16 / v17) * v3->fields.panelScale.fields.x;
      goto LABEL_23;
    }
    goto LABEL_25;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCameraFullScaleSetter__Initialize(
        BattleCameraFullScaleSetter_o *this,
        BattlePerformance_o *performance,
        bool isUI,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct UnityEngine_Camera_o **p_parentCamera; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct BattlePerformance_o **p_perf; // x0
  struct BattlePerformance_o *Component_object; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct BattlePerformance_o *perf; // x8
  int64_t uicamera; // x1
  UnityEngine_Object_o *v39; // x21
  __int64 v40; // x1
  Il2CppObject *Instance; // x21
  struct BattlePerformance_o *v42; // x8
  UnityEngine_Object_o *v43; // x21
  __int64 v44; // x1
  Il2CppObject *v45; // x21
  UnityEngine_Object_o *v46; // x20
  const MethodInfo *v47; // x1

  if ( (byte_4B186BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattlePerformance___, performance, isUI);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10734/*"Performance"*/, v17, v18);
    byte_4B186BA = 1;
  }
  this->fields.aspect = this->fields.baseWidth / this->fields.baseHeight;
  this->fields.parentCamera = 0LL;
  p_parentCamera = &this->fields.parentCamera;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.parentCamera, 0LL, isUI, (int32_t)method, v4, v5, v6, v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_37;
  this->fields.panelScale = UnityEngine_Transform__get_localScale(transform, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)performance, 0LL, 0LL) )
  {
    this->fields.perf = performance;
    p_perf = &this->fields.perf;
    Component_object = performance;
  }
  else
  {
    transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__Find((System_String_o *)StringLiteral_10734/*"Performance"*/, 0LL);
    if ( !transform )
      goto LABEL_37;
    Component_object = (struct BattlePerformance_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)transform,
                                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    this->fields.perf = Component_object;
    p_perf = &this->fields.perf;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_perf, (int64_t)Component_object, v23, v24, v25, v26, v27, v28);
  this->fields.parentCameraType = !isUI;
  if ( isUI )
  {
    perf = this->fields.perf;
    if ( perf )
    {
      uicamera = (int64_t)perf->fields.uicamera;
LABEL_13:
      *p_parentCamera = (struct UnityEngine_Camera_o *)uicamera;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.parentCamera, uicamera, v31, v32, v33, v34, v35, v36);
      goto LABEL_32;
    }
    goto LABEL_37;
  }
  v39 = (UnityEngine_Object_o *)*p_parentCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( !UnityEngine_Object__op_Equality(v39, 0LL, 0LL) )
    goto LABEL_23;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( this->fields.parentCameraType == 1 )
    {
      v42 = this->fields.perf;
      if ( v42 )
      {
        uicamera = (int64_t)v42->fields.actorcamera;
        goto LABEL_13;
      }
LABEL_37:
      sub_1BCAA3C(transform, v21);
    }
  }
  else
  {
LABEL_23:
    v43 = (UnityEngine_Object_o *)*p_parentCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Equality(v43, 0LL, 0LL) )
    {
      v45 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0LL, 0LL)
        && this->fields.parentCameraType == 1 )
      {
        transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( transform )
        {
          uicamera = (int64_t)transform[1].monitor;
          goto LABEL_13;
        }
        goto LABEL_37;
      }
    }
  }
LABEL_32:
  v46 = (UnityEngine_Object_o *)*p_parentCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Equality(v46, 0LL, 0LL) )
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  else
    BattleCameraFullScaleSetter__CalcScale(this, v47);
}


void __fastcall BattleCameraFullScaleSetter__Update(BattleCameraFullScaleSetter_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCAA3C(0LL, v4);
  if ( UnityEngine_Transform__get_hasChanged(transform, 0LL) )
    BattleCameraFullScaleSetter__CalcScale(this, v5);
}