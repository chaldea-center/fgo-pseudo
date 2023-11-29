void __fastcall WarBoardDispChangeComponent___ctor(WarBoardDispChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardDispChangeComponent__ChangeFaceEffect(
        WarBoardDispChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_array *AliveServantPieces; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int max_length; // w8
  WarBoardPieceData_array *v10; // x19
  unsigned int v11; // w21
  WarBoardPieceData_o *v12; // x8
  UnityEngine_Object_o *pieceComponent; // x8
  __int64 v14; // x11
  UnityEngine_Object_o *v15; // x20

  if ( (byte_40F63A0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    sub_B16FFC(&WarBoardServantPieceComponent_TypeInfo, v3);
    byte_40F63A0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( !monitor )
    goto LABEL_24;
  AliveServantPieces = WarBoardData__GetAliveServantPieces(monitor, 0LL);
  if ( !AliveServantPieces )
    goto LABEL_24;
  max_length = AliveServantPieces->max_length;
  v10 = AliveServantPieces;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        sub_B17100(AliveServantPieces, v7, v8);
        sub_B170A0();
      }
      v12 = v10->m_Items[v11];
      if ( !v12 )
        break;
      pieceComponent = (UnityEngine_Object_o *)v12->fields.pieceComponent;
      if ( pieceComponent
        && (v14 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
            *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
      {
        if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v14 - 1] == WarBoardServantPieceComponent_TypeInfo )
          v15 = pieceComponent;
        else
          v15 = 0LL;
      }
      else
      {
        v15 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      AliveServantPieces = (WarBoardPieceData_array *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)AliveServantPieces & 1) == 0 )
      {
        if ( !v15 )
          break;
        WarBoardServantPieceComponent__ChangeDyingAnimation((WarBoardServantPieceComponent_o *)v15, 0LL);
      }
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
LABEL_24:
    sub_B170D4();
  }
}


void __fastcall WarBoardDispChangeComponent__Initialize(
        WarBoardDispChangeComponent_o *this,
        UnityEngine_GameObject_o *configurationGo,
        UnityEngine_GameObject_o *playingGo,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  this->fields.configuration = configurationGo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.configuration,
    (System_Int32_array **)configurationGo,
    (System_String_array **)playingGo,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.playing = playingGo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.playing,
    (System_Int32_array **)playingGo,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall WarBoardDispChangeComponent__SetBackKeyObject(
        WarBoardDispChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *configuration; // x20
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_40F639E & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_14467, v4);
    byte_40F639E = 1;
  }
  configuration = (UnityEngine_Object_o *)this->fields.configuration;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(configuration, 0LL, 0LL) )
  {
    v6 = this->fields.configuration;
    if ( !v6 )
      sub_B170D4();
    transform = UnityEngine_GameObject__get_transform(v6, 0LL);
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn_21111220(transform, (System_String_o *)StringLiteral_14467, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardDispChangeComponent__SetDispChangeBlink(
        WarBoardDispChangeComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *playing; // x21
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Behaviour_o *Component_srcLineSprite; // x0
  WarBoardPlayingUIController_o *v9; // x20

  if ( (byte_40F639F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___, isDisp);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F639F = 1;
  }
  playing = (UnityEngine_Object_o *)this->fields.playing;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(playing, 0LL, 0LL) )
  {
    v7 = this->fields.playing;
    if ( !v7
      || (Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 v7,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___)) == 0LL )
    {
      sub_B170D4();
    }
    v9 = (WarBoardPlayingUIController_o *)Component_srcLineSprite;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled(Component_srcLineSprite, 0LL) )
      WarBoardPlayingUIController__SetBlinkNextTurnButton(v9, isDisp, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardDispChangeComponent__SetUiRootAlpha(
        WarBoardDispChangeComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  WebViewObject_o *Component_WebViewObject; // x0
  long double v6; // q0

  if ( (byte_40F639D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, isDisp);
    byte_40F639D = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_WebViewObject )
    sub_B170D4();
  LODWORD(v6) = 0;
  if ( isDisp )
    *(float *)&v6 = 1.0;
  (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *, long double))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
    Component_WebViewObject,
    Component_WebViewObject->klass[1]._1.element_class,
    v6);
}