void __fastcall CommunicationCharaEffectComponent___ctor(
        CommunicationCharaEffectComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FD777 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectComponent_TypeInfo, method);
    byte_49FD777 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, method);
}


void __fastcall CommunicationCharaEffectComponent__EndDispFigure(
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
    ((void (__fastcall *)(CommunicationCharaEffectComponent_o *, _QWORD, Il2CppMethodPointer))klass->vtable._7_ForceLoop.method)(
      this,
      0LL,
      klass->vtable._8_Stop.methodPtr);
  else
    ((void (__fastcall *)(CommunicationCharaEffectComponent_o *, _QWORD, _QWORD, Il2CppMethodPointer))klass->vtable._6_ForceStart.method)(
      this,
      0LL,
      0LL,
      klass->vtable._7_ForceLoop.methodPtr);
  this = (CommunicationCharaEffectComponent_o *)v5->fields.noiseEffect1;
  if ( !this
    || (this = (CommunicationCharaEffectComponent_o *)((__int64 (__fastcall *)(CommunicationCharaEffectComponent_o *, __int64, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_Stop.method)(
                                                        this,
                                                        1LL,
                                                        0LL,
                                                        this->klass->vtable._9_ForceStop.methodPtr),
        v6 = v5->fields.communicationCharaParam,
        v5->fields.noiseCount = 2.0,
        !v6) )
  {
LABEL_10:
    sub_1B64324(this);
  }
  callback = v6->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommunicationCharaEffectComponent__SetFace(
        CommunicationCharaEffectComponent_o *this,
        int32_t faceType,
        const MethodInfo *method)
{
  UnityEngine_Object_o *figure; // x21
  UIStandFigureRender_o *v6; // x0

  if ( (byte_49FD776 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&faceType);
    byte_49FD776 = 1;
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(figure, 0LL, 0LL) )
  {
    v6 = (UIStandFigureRender_o *)this->fields.figure;
    if ( !v6 )
      sub_1B64324(0LL);
    UIStandFigureRender__SetFace_40658280(v6, faceType, 0.0, 0LL);
  }
}


void __fastcall CommunicationCharaEffectComponent__SetParam(
        CommunicationCharaEffectComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppClass *v8; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v10; // x10
  int32_t v11; // w1
  struct CommunicationCharaEffectParam_o **p_communicationCharaParam; // x0
  struct CommonEffectComponent_o *noiseEffect1; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct CommunicationCharaEffectParam_o *communicationCharaParam; // x8
  UnityEngine_GameObject_o *figureBase; // x20
  int32_t svtId; // w21
  int32_t limitCount; // w22
  int32_t faceType; // w23
  System_Action_o *v21; // x24
  struct UIStandFigureM_o *MeshPrefab_37661336; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_49FD775 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, param);
    sub_1B640C8(&Method_CommunicationCharaEffectComponent_EndDispFigure__, v6);
    sub_1B640C8(&CommunicationCharaEffectParam_TypeInfo, v7);
    byte_49FD775 = 1;
  }
  if ( param )
  {
    v8 = (Il2CppClass *)CommunicationCharaEffectParam_TypeInfo;
    methodPtr_low = LOBYTE(CommunicationCharaEffectParam_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (CommunicationCharaEffectParam_c *)param->klass->_2.typeHierarchy[methodPtr_low - 1] == CommunicationCharaEffectParam_TypeInfo )
        v10 = param;
      else
        v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    this->fields.communicationCharaParam = (struct CommunicationCharaEffectParam_o *)v10;
    p_communicationCharaParam = &this->fields.communicationCharaParam;
    if ( LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( param->klass->_2.typeHierarchy[methodPtr_low - 1] == v8 )
        v11 = (int)param;
      else
        v11 = 0;
    }
    else
    {
      v11 = 0;
    }
  }
  else
  {
    v11 = 0;
    this->fields.communicationCharaParam = 0LL;
    p_communicationCharaParam = &this->fields.communicationCharaParam;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_communicationCharaParam, v11, (int32_t)method, v3);
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
    sub_1B64324(noiseEffect1);
  }
  figureBase = this->fields.figureBase;
  svtId = communicationCharaParam->fields.svtId;
  limitCount = communicationCharaParam->fields.limitCount;
  faceType = communicationCharaParam->fields.faceType;
  v21 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_CommunicationCharaEffectComponent_EndDispFigure__, 0LL);
  MeshPrefab_37661336 = StandFigureManager__CreateMeshPrefab_37661336(
                          figureBase,
                          svtId,
                          limitCount,
                          faceType,
                          0,
                          v21,
                          0,
                          0LL);
  this->fields.figure = MeshPrefab_37661336;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.figure, (int32_t)MeshPrefab_37661336, v23, v24);
}


void __fastcall CommunicationCharaEffectComponent__Update(
        CommunicationCharaEffectComponent_o *this,
        const MethodInfo *method)
{
  float noiseCount; // s8
  float v4; // s0
  struct CommonEffectComponent_o *noiseEffect2; // x0

  if ( !this->fields.isLoad && (this->fields.status | 2) != 2 )
  {
    CommonEffectComponent__Update((CommonEffectComponent_o *)this, method);
    noiseCount = this->fields.noiseCount;
    v4 = noiseCount - RealTime__get_deltaTime(0LL);
    this->fields.noiseCount = v4;
    if ( v4 <= 0.0 )
    {
      noiseEffect2 = this->fields.noiseEffect2;
      if ( !noiseEffect2 )
        sub_1B64324(0LL);
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, _QWORD, Il2CppMethodPointer))noiseEffect2->klass->vtable._6_ForceStart.method)(
        noiseEffect2,
        0LL,
        0LL,
        noiseEffect2->klass->vtable._7_ForceLoop.methodPtr);
      this->fields.noiseCount = 2.0;
    }
  }
}