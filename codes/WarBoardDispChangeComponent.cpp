void WarBoardDispChangeComponent___ctor(WarBoardDispChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardDispChangeComponent__ChangeFaceEffect(WarBoardDispChangeComponent_o *this, const MethodInfo *method)
{
  WarBoardPieceData_array *Instance; // x0
  int max_length; // w8
  WarBoardPieceData_array *v4; // x19
  unsigned int v5; // w21
  WarBoardPieceData_o *v6; // x8
  UnityEngine_Object_o *pieceComponent; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v9; // x20

  if ( (byte_4C356F0 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardServantPieceComponent_TypeInfo);
    byte_4C356F0 = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (WarBoardPieceData_array *)Instance->m_Items[51];
  if ( !Instance )
    goto LABEL_23;
  Instance = WarBoardData__GetAliveServantPieces((WarBoardData_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_23;
  max_length = Instance->max_length;
  v4 = Instance;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1C32E84(Instance);
      v6 = v4->m_Items[v5];
      if ( !v6 )
        break;
      pieceComponent = (UnityEngine_Object_o *)v6->fields.pieceComponent;
      if ( pieceComponent
        && (naturalAligment = WarBoardServantPieceComponent_TypeInfo->_2.naturalAligment,
            pieceComponent->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[naturalAligment - 1] == WarBoardServantPieceComponent_TypeInfo )
          v9 = pieceComponent;
        else
          v9 = 0;
      }
      else
      {
        v9 = 0;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (WarBoardPieceData_array *)UnityEngine_Object__op_Equality(v9, 0, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v9 )
          break;
        WarBoardServantPieceComponent__ChangeDyingAnimation((WarBoardServantPieceComponent_o *)v9, 0);
      }
      max_length = v4->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_23:
    sub_1C32E7C(Instance);
  }
}


void WarBoardDispChangeComponent__Initialize(
        WarBoardDispChangeComponent_o *this,
        UnityEngine_GameObject_o *configurationGo,
        UnityEngine_GameObject_o *playingGo,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  this->fields.configuration = configurationGo;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.configuration,
    (int32_t)configurationGo,
    (int32_t)playingGo,
    method);
  this->fields.playing = playingGo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playing, (int32_t)playingGo, v6, v7);
}


void WarBoardDispChangeComponent__SetBackKeyObject(WarBoardDispChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *configuration; // x20
  UnityEngine_GameObject_o *v4; // x0
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C356EE & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_14556/*"TopBase/BackButton"*/);
    byte_4C356EE = 1;
  }
  configuration = (UnityEngine_Object_o *)this->fields.configuration;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(configuration, 0, 0) )
  {
    v4 = this->fields.configuration;
    if ( !v4 )
      sub_1C32E7C(0);
    transform = UnityEngine_GameObject__get_transform(v4, 0);
    AndroidBackKeyManager__AddBackBtn_44857896(transform, (System_String_o *)StringLiteral_14556/*"TopBase/BackButton"*/, 0);
  }
}


void WarBoardDispChangeComponent__SetDispChangeBlink(
        WarBoardDispChangeComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *playing; // x21
  UnityEngine_GameObject_o *Component_object; // x0
  WarBoardPlayingUIController_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4C356EF & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C356EF = 1;
  }
  playing = (UnityEngine_Object_o *)this->fields.playing;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playing, 0, 0) )
  {
    Component_object = this->fields.playing;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___)) == 0 )
    {
      sub_1C32E7C(Component_object);
    }
    v7 = (WarBoardPlayingUIController_o *)Component_object;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)Component_object, 0) )
      WarBoardPlayingUIController__SetBlinkNextTurnButton(v7, isDisp, v8);
  }
}


void WarBoardDispChangeComponent__SetUiRootAlpha(
        WarBoardDispChangeComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  long double v6; // q0

  if ( (byte_4C356ED & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C356ED = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_object )
    sub_1C32E7C(0);
  LODWORD(v6) = 0;
  if ( isDisp )
    *(float *)&v6 = 1.0;
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, long double))Component_object->klass->vtable[8].methodPtr)(
    Component_object,
    Component_object->klass->vtable[8].method,
    v6);
}