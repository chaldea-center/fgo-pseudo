void __fastcall CommunicationCharaEffectComponent___ctor(
        CommunicationCharaEffectComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4214E4A & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectComponent_TypeInfo, method);
    byte_4214E4A = 1;
  }
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  }
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


void __fastcall CommunicationCharaEffectComponent__EndDispFigure(
        CommunicationCharaEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CommunicationCharaEffectParam_o *communicationCharaParam; // x8
  CommunicationCharaEffectComponent_o *v3; // x19
  struct CommunicationCharaEffectParam_o *v4; // x8
  System_Action_o *callback; // x0

  communicationCharaParam = this->fields.communicationCharaParam;
  this->fields.isLoad = 0;
  if ( !communicationCharaParam )
    goto LABEL_10;
  v3 = this;
  if ( communicationCharaParam->fields.isStartLoop )
    CommonEffectComponent__ForceLoop((CommonEffectComponent_o *)this, 0LL);
  else
    CommonEffectComponent__ForceStart((CommonEffectComponent_o *)this, 0LL);
  this = (CommunicationCharaEffectComponent_o *)v3->fields.noiseEffect1;
  if ( !this
    || (this = (CommunicationCharaEffectComponent_o *)((__int64 (__fastcall *)(CommunicationCharaEffectComponent_o *, __int64, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_Stop.method)(
                                                        this,
                                                        1LL,
                                                        0LL,
                                                        this->klass->vtable._9_ForceStop.methodPtr),
        v4 = v3->fields.communicationCharaParam,
        v3->fields.noiseCount = 2.0,
        !v4) )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  callback = v4->fields.callback;
  if ( callback )
    System_Action__Invoke(callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommunicationCharaEffectComponent__SetFace(
        CommunicationCharaEffectComponent_o *this,
        int32_t faceType,
        const MethodInfo *method)
{
  UnityEngine_Object_o *figure; // x21
  UIStandFigureRender_o *v6; // x0

  if ( (byte_4214E49 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&faceType);
    byte_4214E49 = 1;
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(figure, 0LL, 0LL) )
  {
    v6 = (UIStandFigureRender_o *)this->fields.figure;
    if ( !v6 )
      sub_B0D97C(0LL);
    UIStandFigureRender__SetFace_40566768(v6, faceType, 0.0, 0LL);
  }
}


void __fastcall CommunicationCharaEffectComponent__SetParam(
        CommunicationCharaEffectComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x10
  Il2CppObject *v13; // x1
  struct CommonEffectComponent_o *noiseEffect1; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct CommunicationCharaEffectParam_o *communicationCharaParam; // x8
  int32_t svtId; // w21
  int32_t limitCount; // w22
  int32_t faceType; // w23
  UnityEngine_GameObject_o *figureBase; // x20
  System_Action_o *v22; // x24
  struct UIStandFigureM_o *MeshPrefab_25970936; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_4214E48 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, param);
    sub_B0D8A4(&Method_CommunicationCharaEffectComponent_EndDispFigure__, v10);
    sub_B0D8A4(&CommunicationCharaEffectParam_TypeInfo, v11);
    byte_4214E48 = 1;
  }
  if ( param
    && (v12 = *(&CommunicationCharaEffectParam_TypeInfo->_2.bitflags2 + 1),
        *(&param->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (CommunicationCharaEffectParam_c *)param->klass->_2.typeHierarchy[v12 - 1] == CommunicationCharaEffectParam_TypeInfo )
      v13 = param;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  this->fields.communicationCharaParam = (struct CommunicationCharaEffectParam_o *)v13;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.communicationCharaParam,
    (System_Int32_array **)v13,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ((void (__fastcall *)(CommunicationCharaEffectComponent_o *, _QWORD, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_Stop.method)(
    this,
    0LL,
    0LL,
    this->klass->vtable._9_ForceStop.methodPtr);
  noiseEffect1 = this->fields.noiseEffect1;
  if ( !noiseEffect1
    || (((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, _QWORD, Il2CppMethodPointer))noiseEffect1->klass->vtable._8_Stop.method)(
          noiseEffect1,
          0LL,
          0LL,
          noiseEffect1->klass->vtable._9_ForceStop.methodPtr),
        (noiseEffect1 = this->fields.noiseEffect2) == 0LL)
    || (noiseEffect1 = (struct CommonEffectComponent_o *)((__int64 (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, _QWORD, Il2CppMethodPointer))noiseEffect1->klass->vtable._8_Stop.method)(
                                                           noiseEffect1,
                                                           0LL,
                                                           0LL,
                                                           noiseEffect1->klass->vtable._9_ForceStop.methodPtr),
        communicationCharaParam = this->fields.communicationCharaParam,
        this->fields.isLoad = 1,
        !communicationCharaParam) )
  {
    sub_B0D97C(noiseEffect1);
  }
  svtId = communicationCharaParam->fields.svtId;
  limitCount = communicationCharaParam->fields.limitCount;
  faceType = communicationCharaParam->fields.faceType;
  figureBase = this->fields.figureBase;
  v22 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_CommunicationCharaEffectComponent_EndDispFigure__, 0LL);
  MeshPrefab_25970936 = StandFigureManager__CreateMeshPrefab_25970936(
                          figureBase,
                          svtId,
                          limitCount,
                          faceType,
                          0,
                          v22,
                          0,
                          0LL);
  this->fields.figure = MeshPrefab_25970936;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.figure,
    (System_Int32_array **)MeshPrefab_25970936,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void __fastcall CommunicationCharaEffectComponent__Update(
        CommunicationCharaEffectComponent_o *this,
        const MethodInfo *method)
{
  float noiseCount; // s8
  float v4; // s0
  CommonEffectComponent_o *noiseEffect2; // x0

  if ( !this->fields.isLoad && (this->fields.status | 2) != 2 )
  {
    CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0LL);
    noiseCount = this->fields.noiseCount;
    v4 = noiseCount - RealTime__get_deltaTime(0LL);
    this->fields.noiseCount = v4;
    if ( v4 <= 0.0 )
    {
      noiseEffect2 = this->fields.noiseEffect2;
      if ( !noiseEffect2 )
        sub_B0D97C(0LL);
      CommonEffectComponent__ForceStart(noiseEffect2, 0LL);
      this->fields.noiseCount = 2.0;
    }
  }
}