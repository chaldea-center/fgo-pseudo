void CommunicationCharaEffectComponent___ctor(CommunicationCharaEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CEFCDC & 1) == 0 )
  {
    sub_1C7BAE8(&CommonEffectComponent_TypeInfo);
    byte_4CEFCDC = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, method);
}


void CommunicationCharaEffectComponent__EndDispFigure(
        CommunicationCharaEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CommunicationCharaEffectParam_o *communicationCharaParam; // x8
  _BOOL4 isStartLoop; // w9
  CommunicationCharaEffectComponent_c *klass; // x8
  CommunicationCharaEffectComponent_o *v5; // x19
  struct CommunicationCharaEffectParam_o *v6; // x8
  struct System_Action_o *callback; // x8

  communicationCharaParam = this->fields.communicationCharaParam;
  this->fields.isLoad = 0;
  if ( !communicationCharaParam )
    goto LABEL_10;
  isStartLoop = communicationCharaParam->fields.isStartLoop;
  klass = this->klass;
  v5 = this;
  if ( isStartLoop )
    ((void (__fastcall *)(CommunicationCharaEffectComponent_o *, _QWORD, const MethodInfo *))klass->vtable._7_ForceLoop.methodPtr)(
      this,
      0,
      klass->vtable._7_ForceLoop.method);
  else
    ((void (__fastcall *)(CommunicationCharaEffectComponent_o *, _QWORD, _QWORD, const MethodInfo *))klass->vtable._6_ForceStart.methodPtr)(
      this,
      0,
      0,
      klass->vtable._6_ForceStart.method);
  this = (CommunicationCharaEffectComponent_o *)v5->fields.noiseEffect1;
  if ( !this
    || (this = (CommunicationCharaEffectComponent_o *)((__int64 (__fastcall *)(CommunicationCharaEffectComponent_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._8_Stop.methodPtr)(
                                                        this,
                                                        1,
                                                        0,
                                                        this->klass->vtable._8_Stop.method),
        v6 = v5->fields.communicationCharaParam,
        v5->fields.noiseCount = 2.0,
        !v6) )
  {
LABEL_10:
    sub_1C7BD40(this, method);
  }
  callback = v6->fields.callback;
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

  if ( (byte_4CEFCDB & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFCDB = 1;
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(figure, 0, 0) )
  {
    v7 = (UIStandFigureRender_o *)this->fields.figure;
    if ( !v7 )
      sub_1C7BD40(0, v6);
    UIStandFigureRender__SetFace_44612000(v7, faceType, 0.0, 0);
  }
}


void CommunicationCharaEffectComponent__SetParam(
        CommunicationCharaEffectComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppClass *v10; // x8
  __int64 naturalAligment; // x9
  Il2CppObject *v12; // x10
  int32_t v13; // w1
  struct CommunicationCharaEffectParam_o **p_communicationCharaParam; // x0
  __int64 v15; // x1
  struct CommonEffectComponent_o *noiseEffect1; // x0
  struct CommunicationCharaEffectParam_o *communicationCharaParam; // x8
  UnityEngine_GameObject_o *figureBase; // x20
  int32_t svtId; // w21
  int32_t limitCount; // w22
  int32_t faceType; // w23
  System_Action_o *v22; // x24
  struct UIStandFigureM_o *MeshPrefab_41311164; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4CEFCDA & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_CommunicationCharaEffectComponent_EndDispFigure__);
    sub_1C7BAE8(&CommunicationCharaEffectParam_TypeInfo);
    byte_4CEFCDA = 1;
  }
  if ( param )
  {
    v10 = (Il2CppClass *)CommunicationCharaEffectParam_TypeInfo;
    naturalAligment = CommunicationCharaEffectParam_TypeInfo->_2.naturalAligment;
    if ( param->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (CommunicationCharaEffectParam_c *)param->klass->_2.typeHierarchy[naturalAligment - 1] == CommunicationCharaEffectParam_TypeInfo )
        v12 = param;
      else
        v12 = 0;
    }
    else
    {
      v12 = 0;
    }
    this->fields.communicationCharaParam = (struct CommunicationCharaEffectParam_o *)v12;
    p_communicationCharaParam = &this->fields.communicationCharaParam;
    if ( param->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( param->klass->_2.typeHierarchy[naturalAligment - 1] == v10 )
        v13 = (int)param;
      else
        v13 = 0;
    }
    else
    {
      v13 = 0;
    }
  }
  else
  {
    v13 = 0;
    this->fields.communicationCharaParam = 0;
    p_communicationCharaParam = &this->fields.communicationCharaParam;
  }
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_communicationCharaParam, v13, (int32_t)method, v3, v4, v5, v6, v7);
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
    sub_1C7BD40(noiseEffect1, v15);
  }
  figureBase = this->fields.figureBase;
  svtId = communicationCharaParam->fields.svtId;
  limitCount = communicationCharaParam->fields.limitCount;
  faceType = communicationCharaParam->fields.faceType;
  v22 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_CommunicationCharaEffectComponent_EndDispFigure__, 0);
  MeshPrefab_41311164 = StandFigureManager__CreateMeshPrefab_41311164(
                          figureBase,
                          svtId,
                          limitCount,
                          faceType,
                          0,
                          v22,
                          0,
                          0);
  this->fields.figure = MeshPrefab_41311164;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.figure,
    (int32_t)MeshPrefab_41311164,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void CommunicationCharaEffectComponent__Update(CommunicationCharaEffectComponent_o *this, const MethodInfo *method)
{
  float noiseCount; // s8
  __int64 v4; // x1
  float v5; // s0
  struct CommonEffectComponent_o *noiseEffect2; // x0

  if ( !this->fields.isLoad && (this->fields.status | 2) != 2 )
  {
    CommonEffectComponent__Update((CommonEffectComponent_o *)this, method);
    noiseCount = this->fields.noiseCount;
    v5 = noiseCount - RealTime__get_deltaTime(0);
    this->fields.noiseCount = v5;
    if ( v5 <= 0.0 )
    {
      noiseEffect2 = this->fields.noiseEffect2;
      if ( !noiseEffect2 )
        sub_1C7BD40(0, v4);
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, _QWORD, const MethodInfo *))noiseEffect2->klass->vtable._6_ForceStart.methodPtr)(
        noiseEffect2,
        0,
        0,
        noiseEffect2->klass->vtable._6_ForceStart.method);
      this->fields.noiseCount = 2.0;
    }
  }
}