void __fastcall CommunicationCharaEffectComponent___ctor(
        CommunicationCharaEffectComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDD994 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectComponent_TypeInfo);
    byte_4BDD994 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


void __fastcall CommunicationCharaEffectComponent__EndDispFigure(
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
    sub_1C22094(this, method);
  }
  callback = v4->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall CommunicationCharaEffectComponent__SetFace(
        CommunicationCharaEffectComponent_o *this,
        int32_t faceType,
        const MethodInfo *method)
{
  UnityEngine_Object_o *figure; // x21
  __int64 v6; // x1
  UIStandFigureRender_o *v7; // x0

  if ( (byte_4BDD993 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD993 = 1;
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(figure, 0LL, 0LL) )
  {
    v7 = (UIStandFigureRender_o *)this->fields.figure;
    if ( !v7 )
      sub_1C22094(0LL, v6);
    UIStandFigureRender__SetFace_42349324(v7, faceType, 0.0, 0LL);
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
  Il2CppClass *v10; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v12; // x10
  Il2CppObject *v13; // x1
  struct CommunicationCharaEffectParam_o **p_communicationCharaParam; // x0
  __int64 v15; // x1
  struct CommonEffectComponent_o *noiseEffect1; // x0
  struct CommunicationCharaEffectParam_o *communicationCharaParam; // x8
  UnityEngine_GameObject_o *figureBase; // x20
  int32_t svtId; // w21
  int32_t limitCount; // w22
  int32_t faceType; // w23
  System_Action_o *v22; // x24
  struct UIStandFigureM_o *MeshPrefab_39222216; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4BDD992 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_CommunicationCharaEffectComponent_EndDispFigure__);
    sub_1C21E38(&CommunicationCharaEffectParam_TypeInfo);
    byte_4BDD992 = 1;
  }
  if ( param )
  {
    v10 = (Il2CppClass *)CommunicationCharaEffectParam_TypeInfo;
    methodPtr_low = LOBYTE(CommunicationCharaEffectParam_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (CommunicationCharaEffectParam_c *)param->klass->_2.typeHierarchy[methodPtr_low - 1] == CommunicationCharaEffectParam_TypeInfo )
        v12 = param;
      else
        v12 = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    this->fields.communicationCharaParam = (struct CommunicationCharaEffectParam_o *)v12;
    p_communicationCharaParam = &this->fields.communicationCharaParam;
    if ( LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( param->klass->_2.typeHierarchy[methodPtr_low - 1] == v10 )
        v13 = param;
      else
        v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
    this->fields.communicationCharaParam = 0LL;
    p_communicationCharaParam = &this->fields.communicationCharaParam;
  }
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)p_communicationCharaParam,
    (int64_t)v13,
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
    sub_1C22094(noiseEffect1, v15);
  }
  figureBase = this->fields.figureBase;
  svtId = communicationCharaParam->fields.svtId;
  limitCount = communicationCharaParam->fields.limitCount;
  faceType = communicationCharaParam->fields.faceType;
  v22 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_CommunicationCharaEffectComponent_EndDispFigure__, 0LL);
  MeshPrefab_39222216 = StandFigureManager__CreateMeshPrefab_39222216(
                          figureBase,
                          svtId,
                          limitCount,
                          faceType,
                          0,
                          v22,
                          0,
                          0LL);
  this->fields.figure = MeshPrefab_39222216;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.figure,
    (int64_t)MeshPrefab_39222216,
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
  __int64 v4; // x1
  float v5; // s0
  CommonEffectComponent_o *noiseEffect2; // x0

  if ( !this->fields.isLoad && (this->fields.status | 2) != 2 )
  {
    CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0LL);
    noiseCount = this->fields.noiseCount;
    v5 = noiseCount - RealTime__get_deltaTime(0LL);
    this->fields.noiseCount = v5;
    if ( v5 <= 0.0 )
    {
      noiseEffect2 = this->fields.noiseEffect2;
      if ( !noiseEffect2 )
        sub_1C22094(0LL, v4);
      CommonEffectComponent__ForceStart(noiseEffect2, 0LL);
      this->fields.noiseCount = 2.0;
    }
  }
}