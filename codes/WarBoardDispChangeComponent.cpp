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
  unsigned int v7; // w21
  WarBoardPieceData_o *v8; // x8
  UnityEngine_Object_o *pieceComponent; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v11; // x20

  if ( (byte_4C2501B & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardServantPieceComponent_TypeInfo);
    byte_4C2501B = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        sub_1C2D6F4(Instance, v3, v4);
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C2D6EC(Instance, v3);
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
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.configuration,
    (int32_t)configurationGo,
    (int32_t)playingGo,
    method);
  this->fields.playing = playingGo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.playing, (int32_t)playingGo, v6, v7);
}


void WarBoardDispChangeComponent__SetBackKeyObject(WarBoardDispChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *configuration; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C25019 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_14553/*"TopBase/BackButton"*/);
    byte_4C25019 = 1;
  }
  configuration = (UnityEngine_Object_o *)this->fields.configuration;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(configuration, 0, 0) )
  {
    v5 = this->fields.configuration;
    if ( !v5 )
      sub_1C2D6EC(0, v4);
    transform = UnityEngine_GameObject__get_transform(v5, 0);
    AndroidBackKeyManager__AddBackBtn_44721736(transform, (System_String_o *)StringLiteral_14553/*"TopBase/BackButton"*/, 0);
  }
}


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

  if ( (byte_4C2501A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2501A = 1;
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
                                                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___)) == 0 )
    {
      sub_1C2D6EC(Component_object, v6);
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

  if ( (byte_4C25018 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C25018 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_object )
    sub_1C2D6EC(0, v6);
  LODWORD(v7) = 0;
  if ( isDisp )
    *(float *)&v7 = 1.0;
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, long double))Component_object->klass->vtable[8].methodPtr)(
    Component_object,
    Component_object->klass->vtable[8].method,
    v7);
}