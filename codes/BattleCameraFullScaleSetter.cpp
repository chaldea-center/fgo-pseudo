void __fastcall BattleCameraFullScaleSetter___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C2455F & 1) == 0 )
  {
    sub_1C3B764(&BattleCameraFullScaleSetter_TypeInfo, v1);
    byte_4C2455F = 1;
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
  BattleCameraFullScaleSetter_o *v2; // x19
  __int64 v3; // x1
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actorcamera; // x20
  struct BattlePerformance_o *v6; // x8
  float fieldOfView; // s8
  BattleCameraFullScaleSetter_c *v8; // x20
  float baseScale; // s1
  float v10; // s2
  float v11; // s0
  float DefaultFov; // s10
  float v13; // s8
  float v14; // s9

  v2 = this;
  if ( (byte_4C2455E & 1) == 0 )
  {
    sub_1C3B764(&BattleCameraFullScaleSetter_TypeInfo, method);
    this = (BattleCameraFullScaleSetter_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C2455E = 1;
  }
  if ( !v2->fields.parentCameraType )
  {
    this = (BattleCameraFullScaleSetter_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
    if ( this )
    {
      baseScale = v2->fields.baseScale;
      v10 = 1.0;
      v11 = baseScale * v2->fields.aspect;
LABEL_23:
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v11, 0LL);
      return;
    }
LABEL_25:
    sub_1C3B9C0(this, method);
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_25;
  actorcamera = (UnityEngine_Object_o *)perf->fields.actorcamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCameraFullScaleSetter_o *)UnityEngine_Object__op_Implicit(actorcamera, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v2->fields.perf;
    if ( !v6 )
      goto LABEL_25;
    this = (BattleCameraFullScaleSetter_o *)v6->fields.actorcamera;
    if ( !this )
      goto LABEL_25;
    fieldOfView = UnityEngine_Camera__get_fieldOfView((UnityEngine_Camera_o *)this, 0LL);
    v8 = BattleCameraFullScaleSetter_TypeInfo;
  }
  else
  {
    v8 = BattleCameraFullScaleSetter_TypeInfo;
    if ( !BattleCameraFullScaleSetter_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCameraFullScaleSetter_TypeInfo);
      v8 = BattleCameraFullScaleSetter_TypeInfo;
    }
    fieldOfView = v8->static_fields->DefaultFov;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = BattleCameraFullScaleSetter_TypeInfo;
  }
  DefaultFov = v8->static_fields->DefaultFov;
  if ( fieldOfView != DefaultFov )
  {
    v13 = tanf((float)(fieldOfView * 0.5) * 0.017453);
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      DefaultFov = BattleCameraFullScaleSetter_TypeInfo->static_fields->DefaultFov;
    }
    v14 = tanf((float)(DefaultFov * 0.5) * 0.017453);
    this = (BattleCameraFullScaleSetter_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
    if ( this )
    {
      v10 = (float)(v13 / v14) * v2->fields.panelScale.fields.z;
      baseScale = (float)(v13 / v14) * v2->fields.panelScale.fields.y;
      v11 = (float)(v13 / v14) * v2->fields.panelScale.fields.x;
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct UnityEngine_Camera_o **p_parentCamera; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct BattlePerformance_o **p_perf; // x0
  struct BattlePerformance_o *Component_object; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct BattlePerformance_o *perf; // x8
  int64_t uicamera; // x1
  UnityEngine_Object_o *v34; // x21
  Il2CppObject *Instance; // x21
  struct BattlePerformance_o *v36; // x8
  UnityEngine_Object_o *v37; // x21
  Il2CppObject *v38; // x21
  UnityEngine_Object_o *v39; // x20
  const MethodInfo *v40; // x1

  if ( (byte_4C2455D & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BattlePerformance___, performance);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v13);
    sub_1C3B764(&StringLiteral_10819/*"RESERVE_BATTKE_SAVEKEY"*/, v14);
    byte_4C2455D = 1;
  }
  this->fields.aspect = this->fields.baseWidth / this->fields.baseHeight;
  this->fields.parentCamera = 0LL;
  p_parentCamera = &this->fields.parentCamera;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.parentCamera, 0LL, isUI, (int32_t)method, v4, v5, v6, v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_37;
  this->fields.panelScale = UnityEngine_Transform__get_localScale(transform, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)performance, 0LL, 0LL) )
  {
    this->fields.perf = performance;
    p_perf = &this->fields.perf;
    Component_object = performance;
  }
  else
  {
    transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__Find((System_String_o *)StringLiteral_10819/*"RESERVE_BATTKE_SAVEKEY"*/, 0LL);
    if ( !transform )
      goto LABEL_37;
    Component_object = (struct BattlePerformance_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)transform,
                                                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    this->fields.perf = Component_object;
    p_perf = &this->fields.perf;
  }
  sub_1C3B708((PartyOrganizationUtility_o *)p_perf, (int64_t)Component_object, v18, v19, v20, v21, v22, v23);
  this->fields.parentCameraType = !isUI;
  if ( isUI )
  {
    perf = this->fields.perf;
    if ( perf )
    {
      uicamera = (int64_t)perf->fields.uicamera;
LABEL_13:
      *p_parentCamera = (struct UnityEngine_Camera_o *)uicamera;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.parentCamera, uicamera, v26, v27, v28, v29, v30, v31);
      goto LABEL_32;
    }
    goto LABEL_37;
  }
  v34 = (UnityEngine_Object_o *)*p_parentCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v34, 0LL, 0LL) )
    goto LABEL_23;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( this->fields.parentCameraType == 1 )
    {
      v36 = this->fields.perf;
      if ( v36 )
      {
        uicamera = (int64_t)v36->fields.actorcamera;
        goto LABEL_13;
      }
LABEL_37:
      sub_1C3B9C0(transform, v17);
    }
  }
  else
  {
LABEL_23:
    v37 = (UnityEngine_Object_o *)*p_parentCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v37, 0LL, 0LL) )
    {
      v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0LL, 0LL)
        && this->fields.parentCameraType == 1 )
      {
        transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
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
  v39 = (UnityEngine_Object_o *)*p_parentCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v39, 0LL, 0LL) )
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  else
    BattleCameraFullScaleSetter__CalcScale(this, v40);
}


void __fastcall BattleCameraFullScaleSetter__Update(BattleCameraFullScaleSetter_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1C3B9C0(0LL, v4);
  if ( UnityEngine_Transform__get_hasChanged(transform, 0LL) )
    BattleCameraFullScaleSetter__CalcScale(this, v5);
}