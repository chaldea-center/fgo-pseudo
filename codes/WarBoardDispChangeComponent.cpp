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
  WarBoardPieceData_array *Instance; // x0
  __int64 v5; // x1
  int max_length; // w8
  WarBoardPieceData_array *v7; // x19
  unsigned int v8; // w21
  WarBoardPieceData_o *v9; // x8
  UnityEngine_Object_o *pieceComponent; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v12; // x20

  if ( (byte_49FA3CD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    sub_1B640C8(&WarBoardServantPieceComponent_TypeInfo, v3);
    byte_49FA3CD = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (WarBoardPieceData_array *)Instance->m_Items[51];
  if ( !Instance )
    goto LABEL_23;
  Instance = WarBoardData__GetAliveServantPieces((WarBoardData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_23;
  max_length = Instance->max_length;
  v7 = Instance;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1B6432C(Instance, v5);
      v9 = v7->m_Items[v8];
      if ( !v9 )
        break;
      pieceComponent = (UnityEngine_Object_o *)v9->fields.pieceComponent;
      if ( pieceComponent
        && (methodPtr_low = LOBYTE(WarBoardServantPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(pieceComponent->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardServantPieceComponent_TypeInfo )
          v12 = pieceComponent;
        else
          v12 = 0LL;
      }
      else
      {
        v12 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (WarBoardPieceData_array *)UnityEngine_Object__op_Equality(v12, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v12 )
          break;
        WarBoardServantPieceComponent__ChangeDyingAnimation((WarBoardServantPieceComponent_o *)v12, 0LL);
      }
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_23:
    sub_1B64324(Instance);
  }
}


void __fastcall WarBoardDispChangeComponent__Initialize(
        WarBoardDispChangeComponent_o *this,
        UnityEngine_GameObject_o *configurationGo,
        UnityEngine_GameObject_o *playingGo,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3

  this->fields.configuration = configurationGo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.configuration,
    (int32_t)configurationGo,
    (int32_t)playingGo,
    (int32_t)method);
  this->fields.playing = playingGo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playing, (int32_t)playingGo, v6, v7);
}


void __fastcall WarBoardDispChangeComponent__SetBackKeyObject(
        WarBoardDispChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *configuration; // x20
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_49FA3CB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_14463/*"TopBase/BackButton"*/, v3);
    byte_49FA3CB = 1;
  }
  configuration = (UnityEngine_Object_o *)this->fields.configuration;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(configuration, 0LL, 0LL) )
  {
    v5 = this->fields.configuration;
    if ( !v5 )
      sub_1B64324(0LL);
    transform = UnityEngine_GameObject__get_transform(v5, 0LL);
    AndroidBackKeyManager__AddBackBtn_41446668(transform, (System_String_o *)StringLiteral_14463/*"TopBase/BackButton"*/, 0LL);
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
  UnityEngine_GameObject_o *Component_object; // x0
  WarBoardPlayingUIController_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_49FA3CC & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___, isDisp);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FA3CC = 1;
  }
  playing = (UnityEngine_Object_o *)this->fields.playing;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playing, 0LL, 0LL) )
  {
    Component_object = this->fields.playing;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___)) == 0LL )
    {
      sub_1B64324(Component_object);
    }
    v8 = (WarBoardPlayingUIController_o *)Component_object;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)Component_object, 0LL) )
      WarBoardPlayingUIController__SetBlinkNextTurnButton(v8, isDisp, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardDispChangeComponent__SetUiRootAlpha(
        WarBoardDispChangeComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  long double v6; // q0

  if ( (byte_49FA3CA & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIPanel___, isDisp);
    byte_49FA3CA = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_object )
    sub_1B64324(0LL);
  LODWORD(v6) = 0;
  if ( isDisp )
    *(float *)&v6 = 1.0;
  ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, long double))Component_object->klass->vtable[8].method)(
    Component_object,
    Component_object->klass->vtable[9].methodPtr,
    v6);
}