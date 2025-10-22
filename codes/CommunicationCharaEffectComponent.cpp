void CommunicationCharaEffectComponent___ctor(CommunicationCharaEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C5843A & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectComponent_TypeInfo);
    byte_4C5843A = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


void CommunicationCharaEffectComponent__EndDispFigure(
        CommunicationCharaEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CommunicationCharaEffectParam_o *communicationCharaParam; // x8
  CommunicationCharaEffectComponent_o *v3; // x19
  struct CommunicationCharaEffectParam_o *v4; // x8
  struct System_Action_o *callback; // x8

  communicationCharaParam = this->fields.communicationCharaParam;
  this->fields.isLoad = 0;
  if ( !communicationCharaParam )
    goto LABEL_10;
  v3 = this;
  if ( communicationCharaParam->fields.isStartLoop )
    CommonEffectComponent__ForceLoop((CommonEffectComponent_o *)this, 0);
  else
    CommonEffectComponent__ForceStart((CommonEffectComponent_o *)this, 0);
  this = (CommunicationCharaEffectComponent_o *)v3->fields.noiseEffect1;
  if ( !this
    || (this = (CommunicationCharaEffectComponent_o *)((__int64 (__fastcall *)(CommunicationCharaEffectComponent_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._8_Stop.methodPtr)(
                                                        this,
                                                        1,
                                                        0,
                                                        this->klass->vtable._8_Stop.method),
        v4 = v3->fields.communicationCharaParam,
        v3->fields.noiseCount = 2.0,
        !v4) )
  {
LABEL_10:
    sub_1C3E7C0(this, method);
  }
  callback = v4->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


void CommunicationCharaEffectComponent__SetFace(
        CommunicationCharaEffectComponent_o *this,
        int32_t faceType,
        const MethodInfo *method)
{
  UnityEngine_Object_o *figure; // x21
  __int64 v6; // x1
  UIStandFigureRender_o *v7; // x0

  if ( (byte_4C58439 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58439 = 1;
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(figure, 0, 0) )
  {
    v7 = (UIStandFigureRender_o *)this->fields.figure;
    if ( !v7 )
      sub_1C3E7C0(0, v6);
    UIStandFigureRender__SetFace_44144544(v7, faceType, 0.0, 0);
  }
}


void CommunicationCharaEffectComponent__SetParam(
        CommunicationCharaEffectComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppClass *v6; // x8
  __int64 naturalAligment; // x9
  Il2CppObject *v8; // x10
  int32_t v9; // w1
  struct CommunicationCharaEffectParam_o **p_communicationCharaParam; // x0
  __int64 v11; // x1
  struct CommonEffectComponent_o *noiseEffect1; // x0
  struct CommunicationCharaEffectParam_o *communicationCharaParam; // x8
  UnityEngine_GameObject_o *figureBase; // x20
  int32_t svtId; // w21
  int32_t limitCount; // w22
  int32_t faceType; // w23
  System_Action_o *v18; // x24
  struct UIStandFigureM_o *MeshPrefab_40791896; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C58438 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_CommunicationCharaEffectComponent_EndDispFigure__);
    sub_1C3E564(&CommunicationCharaEffectParam_TypeInfo);
    byte_4C58438 = 1;
  }
  if ( param )
  {
    v6 = (Il2CppClass *)CommunicationCharaEffectParam_TypeInfo;
    naturalAligment = CommunicationCharaEffectParam_TypeInfo->_2.naturalAligment;
    if ( param->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (CommunicationCharaEffectParam_c *)param->klass->_2.typeHierarchy[naturalAligment - 1] == CommunicationCharaEffectParam_TypeInfo )
        v8 = param;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    this->fields.communicationCharaParam = (struct CommunicationCharaEffectParam_o *)v8;
    p_communicationCharaParam = &this->fields.communicationCharaParam;
    if ( param->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( param->klass->_2.typeHierarchy[naturalAligment - 1] == v6 )
        v9 = (int)param;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v9 = 0;
    this->fields.communicationCharaParam = 0;
    p_communicationCharaParam = &this->fields.communicationCharaParam;
  }
  sub_1C3E508((CGThumbnailListItem_o *)p_communicationCharaParam, v9, (int32_t)method, v3);
  ((void (__fastcall *)(CommunicationCharaEffectComponent_o *, _QWORD, _QWORD, const MethodInfo *))this->klass->vtable._8_Stop.methodPtr)(
    this,
    0,
    0,
    this->klass->vtable._8_Stop.method);
  noiseEffect1 = this->fields.noiseEffect1;
  if ( !noiseEffect1
    || (((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, _QWORD, const MethodInfo *))noiseEffect1->klass->vtable._8_Stop.methodPtr)(
          noiseEffect1,
          0,
          0,
          noiseEffect1->klass->vtable._8_Stop.method),
        (noiseEffect1 = this->fields.noiseEffect2) == 0)
    || (noiseEffect1 = (struct CommonEffectComponent_o *)((__int64 (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, _QWORD, const MethodInfo *))noiseEffect1->klass->vtable._8_Stop.methodPtr)(
                                                           noiseEffect1,
                                                           0,
                                                           0,
                                                           noiseEffect1->klass->vtable._8_Stop.method),
        communicationCharaParam = this->fields.communicationCharaParam,
        this->fields.isLoad = 1,
        !communicationCharaParam) )
  {
    sub_1C3E7C0(noiseEffect1, v11);
  }
  figureBase = this->fields.figureBase;
  svtId = communicationCharaParam->fields.svtId;
  limitCount = communicationCharaParam->fields.limitCount;
  faceType = communicationCharaParam->fields.faceType;
  v18 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_CommunicationCharaEffectComponent_EndDispFigure__, 0);
  MeshPrefab_40791896 = StandFigureManager__CreateMeshPrefab_40791896(
                          figureBase,
                          svtId,
                          limitCount,
                          faceType,
                          0,
                          v18,
                          0,
                          0);
  this->fields.figure = MeshPrefab_40791896;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.figure, (int32_t)MeshPrefab_40791896, v20, v21);
}


void CommunicationCharaEffectComponent__Update(CommunicationCharaEffectComponent_o *this, const MethodInfo *method)
{
  float noiseCount; // s8
  __int64 v4; // x1
  float v5; // s0
  CommonEffectComponent_o *noiseEffect2; // x0

  if ( !this->fields.isLoad && (this->fields.status | 2) != 2 )
  {
    CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0);
    noiseCount = this->fields.noiseCount;
    v5 = noiseCount - RealTime__get_deltaTime(0);
    this->fields.noiseCount = v5;
    if ( v5 <= 0.0 )
    {
      noiseEffect2 = this->fields.noiseEffect2;
      if ( !noiseEffect2 )
        sub_1C3E7C0(0, v4);
      CommonEffectComponent__ForceStart(noiseEffect2, 0);
      this->fields.noiseCount = 2.0;
    }
  }
}