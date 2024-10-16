void __fastcall BattleCameraFullScaleSetter___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AB81F2 & 1) == 0 )
  {
    sub_1BAB41C(&BattleCameraFullScaleSetter_TypeInfo, v1);
    byte_4AB81F2 = 1;
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
  if ( (byte_4AB81F1 & 1) == 0 )
  {
    sub_1BAB41C(&BattleCameraFullScaleSetter_TypeInfo, method);
    this = (BattleCameraFullScaleSetter_o *)sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    byte_4AB81F1 = 1;
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
    sub_1BAB678(this, method);
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


void __fastcall BattleCameraFullScaleSetter__Initialize(
        BattleCameraFullScaleSetter_o *this,
        BattlePerformance_o *performance,
        bool isUI,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UnityEngine_Camera_o **p_parentCamera; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  char v14; // w2
  int32_t v15; // w3
  struct BattlePerformance_o **p_perf; // x0
  int32_t v17; // w1
  Il2CppObject *Component_object; // x0
  char v19; // w2
  int32_t v20; // w3
  struct BattlePerformance_o *perf; // x8
  struct UnityEngine_Camera_o *uicamera; // x1
  UnityEngine_Object_o *v23; // x21
  Il2CppObject *Instance; // x21
  struct BattlePerformance_o *v25; // x8
  UnityEngine_Object_o *v26; // x21
  Il2CppObject *v27; // x21
  UnityEngine_Object_o *v28; // x20
  const MethodInfo *v29; // x1

  if ( (byte_4AB81F0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_BattlePerformance___, performance);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v7);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v8);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v9);
    sub_1BAB41C(&StringLiteral_10606/*"Performance"*/, v10);
    byte_4AB81F0 = 1;
  }
  this->fields.aspect = this->fields.baseWidth / this->fields.baseHeight;
  this->fields.parentCamera = 0LL;
  p_parentCamera = &this->fields.parentCamera;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.parentCamera, 0, isUI, (int32_t)method);
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
    v17 = (int)performance;
  }
  else
  {
    transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__Find((System_String_o *)StringLiteral_10606/*"Performance"*/, 0LL);
    if ( !transform )
      goto LABEL_37;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    v17 = (int)Component_object;
    this->fields.perf = (struct BattlePerformance_o *)Component_object;
    p_perf = &this->fields.perf;
  }
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_perf, v17, v14, v15);
  this->fields.parentCameraType = !isUI;
  if ( isUI )
  {
    perf = this->fields.perf;
    if ( perf )
    {
      uicamera = perf->fields.uicamera;
LABEL_13:
      *p_parentCamera = uicamera;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.parentCamera, (int32_t)uicamera, v19, v20);
      goto LABEL_32;
    }
    goto LABEL_37;
  }
  v23 = (UnityEngine_Object_o *)*p_parentCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v23, 0LL, 0LL) )
    goto LABEL_23;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( this->fields.parentCameraType == 1 )
    {
      v25 = this->fields.perf;
      if ( v25 )
      {
        uicamera = v25->fields.actorcamera;
        goto LABEL_13;
      }
LABEL_37:
      sub_1BAB678(transform, v13);
    }
  }
  else
  {
LABEL_23:
    v26 = (UnityEngine_Object_o *)*p_parentCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v26, 0LL, 0LL) )
    {
      v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL)
        && this->fields.parentCameraType == 1 )
      {
        transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( transform )
        {
          uicamera = (struct UnityEngine_Camera_o *)transform[1].monitor;
          goto LABEL_13;
        }
        goto LABEL_37;
      }
    }
  }
LABEL_32:
  v28 = (UnityEngine_Object_o *)*p_parentCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v28, 0LL, 0LL) )
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  else
    BattleCameraFullScaleSetter__CalcScale(this, v29);
}


void __fastcall BattleCameraFullScaleSetter__Update(BattleCameraFullScaleSetter_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BAB678(0LL, v4);
  if ( UnityEngine_Transform__get_hasChanged(transform, 0LL) )
    BattleCameraFullScaleSetter__CalcScale(this, v5);
}