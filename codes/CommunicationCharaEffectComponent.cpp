void __fastcall CommunicationCharaEffectComponent___ctor(
        CommunicationCharaEffectComponent_o *this,
        const MethodInfo *method)
{
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


void __fastcall CommunicationCharaEffectComponent__EndDispFigure(
        CommunicationCharaEffectComponent_o *this,
        const MethodInfo *method)
{
  struct UIStandFigureM_o *figure; // x8
  struct CommonEffectComponent_o *noiseEffect2; // x0
  struct UIStandFigureM_o *v5; // x8
  System_Action_o *bottomAnchor; // x0

  figure = this->fields.figure;
  LOBYTE(this[1].klass) = 0;
  if ( !figure )
    goto LABEL_10;
  if ( LOBYTE(figure->fields.rightAnchor) )
    CommonEffectComponent__ForceLoop((CommonEffectComponent_o *)this, 0LL);
  else
    CommonEffectComponent__ForceStart((CommonEffectComponent_o *)this, 0LL);
  noiseEffect2 = this->fields.noiseEffect2;
  if ( !noiseEffect2
    || (((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, _QWORD, Il2CppMethodPointer))noiseEffect2->klass->vtable._8_Stop.method)(
          noiseEffect2,
          1LL,
          0LL,
          noiseEffect2->klass->vtable._9_ForceStop.methodPtr),
        v5 = this->fields.figure,
        HIDWORD(this[1].klass) = 0x40000000,
        !v5) )
  {
LABEL_10:
    sub_B170D4();
  }
  bottomAnchor = (System_Action_o *)v5->fields.bottomAnchor;
  if ( bottomAnchor )
    System_Action__Invoke(bottomAnchor, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommunicationCharaEffectComponent__SetFace(
        CommunicationCharaEffectComponent_o *this,
        int32_t faceType,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x21
  UIStandFigureRender_o *v6; // x0

  if ( (byte_40FA1B9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&faceType);
    byte_40FA1B9 = 1;
  }
  v5 = *(UnityEngine_Object_o **)&this->fields.isLoad;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v6 = *(UIStandFigureRender_o **)&this->fields.isLoad;
    if ( !v6 )
      sub_B170D4();
    UIStandFigureRender__SetFace_40898768(v6, faceType, 0.0, 0LL);
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
  struct CommonEffectComponent_o *noiseEffect2; // x0
  struct CommunicationCharaEffectParam_o *communicationCharaParam; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct UIStandFigureM_o *figure; // x8
  int32_t v21; // w21
  int32_t leftAnchor; // w22
  int32_t leftAnchor_high; // w23
  UnityEngine_GameObject_o *noiseEffect1; // x20
  System_Action_o *v25; // x24
  System_Int32_array **MeshPrefab_26841764; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40FA1B8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, param);
    sub_B16FFC(&Method_CommunicationCharaEffectComponent_EndDispFigure__, v10);
    sub_B16FFC(&CommunicationCharaEffectParam_TypeInfo, v11);
    byte_40FA1B8 = 1;
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
  this->fields.figure = (struct UIStandFigureM_o *)v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.figure,
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
  noiseEffect2 = this->fields.noiseEffect2;
  if ( !noiseEffect2
    || (((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, _QWORD, Il2CppMethodPointer))noiseEffect2->klass->vtable._8_Stop.method)(
          noiseEffect2,
          0LL,
          0LL,
          noiseEffect2->klass->vtable._9_ForceStop.methodPtr),
        (communicationCharaParam = this->fields.communicationCharaParam) == 0LL)
    || (((void (__fastcall *)(struct CommunicationCharaEffectParam_o *, _QWORD, _QWORD, Il2CppClass *))communicationCharaParam->klass[1]._1.castClass)(
          communicationCharaParam,
          0LL,
          0LL,
          communicationCharaParam->klass[1]._1.declaringType),
        figure = this->fields.figure,
        LOBYTE(this[1].klass) = 1,
        !figure) )
  {
    sub_B170D4();
  }
  v21 = *((_DWORD *)&figure->fields.UnityEngine_MonoBehaviour_Fields + 1);
  leftAnchor = (int32_t)figure->fields.leftAnchor;
  leftAnchor_high = HIDWORD(figure->fields.leftAnchor);
  noiseEffect1 = (UnityEngine_GameObject_o *)this->fields.noiseEffect1;
  v25 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_CommunicationCharaEffectComponent_EndDispFigure__, 0LL);
  MeshPrefab_26841764 = (System_Int32_array **)StandFigureManager__CreateMeshPrefab_26841764(
                                                 noiseEffect1,
                                                 v21,
                                                 leftAnchor,
                                                 leftAnchor_high,
                                                 0,
                                                 v25,
                                                 0,
                                                 0LL);
  *(_QWORD *)&this->fields.isLoad = MeshPrefab_26841764;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.isLoad, MeshPrefab_26841764, v27, v28, v29, v30, v31, v32);
}


void __fastcall CommunicationCharaEffectComponent__Update(
        CommunicationCharaEffectComponent_o *this,
        const MethodInfo *method)
{
  float v3; // s8
  float v4; // s0
  CommonEffectComponent_o *communicationCharaParam; // x0

  if ( !LOBYTE(this[1].klass) && (LODWORD(this->fields.requestAnimation) | 2) != 2 )
  {
    CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0LL);
    v3 = *((float *)&this[1].klass + 1);
    v4 = v3 - RealTime__get_deltaTime(0LL);
    *((float *)&this[1].klass + 1) = v4;
    if ( v4 <= 0.0 )
    {
      communicationCharaParam = (CommonEffectComponent_o *)this->fields.communicationCharaParam;
      if ( !communicationCharaParam )
        sub_B170D4();
      CommonEffectComponent__ForceStart(communicationCharaParam, 0LL);
      HIDWORD(this[1].klass) = 0x40000000;
    }
  }
}