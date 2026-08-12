void WarBoardDispChangeComponent___ctor(WarBoardDispChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardDispChangeComponent__ChangeFaceEffect(WarBoardDispChangeComponent_o *this, const MethodInfo *method)
{
  WarBoardPieceData_array *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  int max_length; // w8
  WarBoardPieceData_array *v6; // x19
  unsigned int v7; // w23
  WarBoardPieceData_o *v8; // x8
  UnityEngine_Object_o *pieceComponent; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v11; // x20

  if ( (byte_596E442 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardServantPieceComponent_TypeInfo);
    byte_596E442 = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (WarBoardPieceData_array *)Instance->m_Items[51];
  if ( !Instance )
    goto LABEL_23;
  Instance = WarBoardData__GetAliveServantPieces((WarBoardData_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_23;
  max_length = Instance->max_length;
  v6 = Instance;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_2213CE4(Instance);
      v8 = v6->m_Items[v7];
      if ( !v8 )
        break;
      pieceComponent = (UnityEngine_Object_o *)v8->fields.pieceComponent;
      if ( pieceComponent
        && (naturalAligment = WarBoardServantPieceComponent_TypeInfo->_2.naturalAligment,
            pieceComponent->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[naturalAligment - 1] == WarBoardServantPieceComponent_TypeInfo )
          v11 = pieceComponent;
        else
          v11 = 0;
      }
      else
      {
        v11 = 0;
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
      Instance = (WarBoardPieceData_array *)UnityEngine_Object__op_Equality(v11, 0, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v11 )
          break;
        WarBoardServantPieceComponent__ChangeDyingAnimation((WarBoardServantPieceComponent_o *)v11, 0);
      }
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_23:
    sub_2213CDC(Instance, v3);
  }
}


void WarBoardDispChangeComponent__Initialize(
        WarBoardDispChangeComponent_o *this,
        UnityEngine_GameObject_o *configurationGo,
        UnityEngine_GameObject_o *playingGo,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  this->fields.configuration = configurationGo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.configuration,
    (int32_t)configurationGo,
    (System_String_o *)playingGo,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.playing = playingGo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playing,
    (int32_t)playingGo,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void WarBoardDispChangeComponent__SetBackKeyObject(WarBoardDispChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *configuration; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_596E440 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_15149/*"TopBase/BackButton"*/);
    byte_596E440 = 1;
  }
  configuration = (UnityEngine_Object_o *)this->fields.configuration;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(configuration, 0, 0) )
  {
    v6 = this->fields.configuration;
    if ( !v6 )
      sub_2213CDC(0, v5);
    transform = UnityEngine_GameObject__get_transform(v6, 0);
    AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_15149/*"TopBase/BackButton"*/, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardDispChangeComponent__SetDispChangeBlink(
        WarBoardDispChangeComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *playing; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *Component_object; // x0
  WarBoardPlayingUIController_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_596E441 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E441 = 1;
  }
  playing = (UnityEngine_Object_o *)this->fields.playing;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, method);
  if ( UnityEngine_Object__op_Inequality(playing, 0, 0) )
  {
    Component_object = this->fields.playing;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___)) == 0 )
    {
      sub_2213CDC(Component_object, v6);
    }
    v8 = (WarBoardPlayingUIController_o *)Component_object;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)Component_object, 0) )
      WarBoardPlayingUIController__SetBlinkNextTurnButton(v8, isDisp, v9);
  }
}


void WarBoardDispChangeComponent__SetUiRootAlpha(
        WarBoardDispChangeComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1
  long double v7; // q0

  if ( (byte_596E43F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_596E43F = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_object )
    sub_2213CDC(0, v6);
  *(_QWORD *)&v7 = 0;
  if ( isDisp )
    *(float *)&v7 = 1.0;
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, long double))Component_object->klass->vtable[8].methodPtr)(
    Component_object,
    Component_object->klass->vtable[8].method,
    v7);
}