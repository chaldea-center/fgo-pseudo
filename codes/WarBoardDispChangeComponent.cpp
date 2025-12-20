void WarBoardDispChangeComponent___ctor(WarBoardDispChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardDispChangeComponent__ChangeFaceEffect(WarBoardDispChangeComponent_o *this, const MethodInfo *method)
{
  WarBoardPieceData_array *Instance; // x0
  __int64 v3; // x1
  int max_length; // w8
  WarBoardPieceData_array *v5; // x19
  unsigned int v6; // w21
  WarBoardPieceData_o *v7; // x8
  UnityEngine_Object_o *pieceComponent; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v10; // x20

  if ( (byte_4D2A496 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&WarBoardServantPieceComponent_TypeInfo);
    byte_4D2A496 = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (WarBoardPieceData_array *)Instance->m_Items[51];
  if ( !Instance )
    goto LABEL_23;
  Instance = WarBoardData__GetAliveServantPieces((WarBoardData_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_23;
  max_length = Instance->max_length;
  v5 = Instance;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C942F8(Instance);
      v7 = v5->m_Items[v6];
      if ( !v7 )
        break;
      pieceComponent = (UnityEngine_Object_o *)v7->fields.pieceComponent;
      if ( pieceComponent
        && (naturalAligment = WarBoardServantPieceComponent_TypeInfo->_2.naturalAligment,
            pieceComponent->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[naturalAligment - 1] == WarBoardServantPieceComponent_TypeInfo )
          v10 = pieceComponent;
        else
          v10 = 0;
      }
      else
      {
        v10 = 0;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (WarBoardPieceData_array *)UnityEngine_Object__op_Equality(v10, 0, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v10 )
          break;
        WarBoardServantPieceComponent__ChangeDyingAnimation((WarBoardServantPieceComponent_o *)v10, 0);
      }
      max_length = v5->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_23:
    sub_1C942F0(Instance, v3);
  }
}


void WarBoardDispChangeComponent__Initialize(
        WarBoardDispChangeComponent_o *this,
        UnityEngine_GameObject_o *configurationGo,
        UnityEngine_GameObject_o *playingGo,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  this->fields.configuration = configurationGo;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.configuration,
    (int32_t)configurationGo,
    (int32_t)playingGo,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.playing = playingGo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.playing, (int32_t)playingGo, v10, v11, v12, v13, v14, v15);
}


void WarBoardDispChangeComponent__SetBackKeyObject(WarBoardDispChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *configuration; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4D2A494 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_14611/*"TopBase/BackButton"*/);
    byte_4D2A494 = 1;
  }
  configuration = (UnityEngine_Object_o *)this->fields.configuration;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(configuration, 0, 0) )
  {
    v5 = this->fields.configuration;
    if ( !v5 )
      sub_1C942F0(0, v4);
    transform = UnityEngine_GameObject__get_transform(v5, 0);
    AndroidBackKeyManager__AddBackBtn_45761432(transform, (System_String_o *)StringLiteral_14611/*"TopBase/BackButton"*/, 0);
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

  if ( (byte_4D2A495 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A495 = 1;
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
                                                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___)) == 0 )
    {
      sub_1C942F0(Component_object, v6);
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

  if ( (byte_4D2A493 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4D2A493 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_object )
    sub_1C942F0(0, v6);
  LODWORD(v7) = 0;
  if ( isDisp )
    *(float *)&v7 = 1.0;
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, long double))Component_object->klass->vtable[8].methodPtr)(
    Component_object,
    Component_object->klass->vtable[8].method,
    v7);
}