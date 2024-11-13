void __fastcall CommunicationCharaEffectComponent___ctor(
        CommunicationCharaEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B175CA & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectComponent_TypeInfo, method, v2);
    byte_4B175CA = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method);
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
    sub_1BCAA3C(this, method);
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
  __int64 v6; // x1
  UIStandFigureRender_o *v7; // x0

  if ( (byte_4B175C9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&faceType, method);
    byte_4B175C9 = 1;
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&faceType);
  if ( UnityEngine_Object__op_Inequality(figure, 0LL, 0LL) )
  {
    v7 = (UIStandFigureRender_o *)this->fields.figure;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UIStandFigureRender__SetFace_41798244(v7, faceType, 0.0, 0LL);
  }
}


void __fastcall CommunicationCharaEffectComponent__SetParam(
        CommunicationCharaEffectComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppClass *v14; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v16; // x10
  Il2CppObject *v17; // x1
  struct CommunicationCharaEffectParam_o **p_communicationCharaParam; // x0
  __int64 v19; // x1
  struct CommonEffectComponent_o *noiseEffect1; // x0
  __int64 v21; // x2
  __int64 v22; // x3
  struct CommunicationCharaEffectParam_o *communicationCharaParam; // x8
  UnityEngine_GameObject_o *figureBase; // x20
  int32_t svtId; // w21
  int32_t limitCount; // w22
  int32_t faceType; // w23
  System_Action_o *v28; // x24
  struct UIStandFigureM_o *MeshPrefab_38691908; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4B175C8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, param, method);
    sub_1BCA7E0(&Method_CommunicationCharaEffectComponent_EndDispFigure__, v10, v11);
    sub_1BCA7E0(&CommunicationCharaEffectParam_TypeInfo, v12, v13);
    byte_4B175C8 = 1;
  }
  if ( param )
  {
    v14 = (Il2CppClass *)CommunicationCharaEffectParam_TypeInfo;
    methodPtr_low = LOBYTE(CommunicationCharaEffectParam_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (CommunicationCharaEffectParam_c *)param->klass->_2.typeHierarchy[methodPtr_low - 1] == CommunicationCharaEffectParam_TypeInfo )
        v16 = param;
      else
        v16 = 0LL;
    }
    else
    {
      v16 = 0LL;
    }
    this->fields.communicationCharaParam = (struct CommunicationCharaEffectParam_o *)v16;
    p_communicationCharaParam = &this->fields.communicationCharaParam;
    if ( LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( param->klass->_2.typeHierarchy[methodPtr_low - 1] == v14 )
        v17 = param;
      else
        v17 = 0LL;
    }
    else
    {
      v17 = 0LL;
    }
  }
  else
  {
    v17 = 0LL;
    this->fields.communicationCharaParam = 0LL;
    p_communicationCharaParam = &this->fields.communicationCharaParam;
  }
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_communicationCharaParam,
    (int64_t)v17,
    (int64_t)method,
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
    sub_1BCAA3C(noiseEffect1, v19);
  }
  figureBase = this->fields.figureBase;
  svtId = communicationCharaParam->fields.svtId;
  limitCount = communicationCharaParam->fields.limitCount;
  faceType = communicationCharaParam->fields.faceType;
  v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v21, v22);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_CommunicationCharaEffectComponent_EndDispFigure__, 0LL);
  MeshPrefab_38691908 = StandFigureManager__CreateMeshPrefab_38691908(
                          figureBase,
                          svtId,
                          limitCount,
                          faceType,
                          0,
                          v28,
                          0,
                          0LL);
  this->fields.figure = MeshPrefab_38691908;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.figure,
    (int64_t)MeshPrefab_38691908,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


void __fastcall CommunicationCharaEffectComponent__Update(
        CommunicationCharaEffectComponent_o *this,
        const MethodInfo *method)
{
  float noiseCount; // s8
  __int64 v4; // x1
  float v5; // s0
  struct CommonEffectComponent_o *noiseEffect2; // x0

  if ( !this->fields.isLoad && (this->fields.status | 2) != 2 )
  {
    CommonEffectComponent__Update((CommonEffectComponent_o *)this, method);
    noiseCount = this->fields.noiseCount;
    v5 = noiseCount - RealTime__get_deltaTime(0LL);
    this->fields.noiseCount = v5;
    if ( v5 <= 0.0 )
    {
      noiseEffect2 = this->fields.noiseEffect2;
      if ( !noiseEffect2 )
        sub_1BCAA3C(0LL, v4);
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, _QWORD, Il2CppMethodPointer))noiseEffect2->klass->vtable._6_ForceStart.method)(
        noiseEffect2,
        0LL,
        0LL,
        noiseEffect2->klass->vtable._7_ForceLoop.methodPtr);
      this->fields.noiseCount = 2.0;
    }
  }
}