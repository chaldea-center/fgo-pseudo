void __fastcall WarBoardDispChangeComponent___ctor(WarBoardDispChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardDispChangeComponent__ChangeFaceEffect(
        WarBoardDispChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  WarBoardPieceData_array *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  WarBoardPieceData_array *v10; // x19
  unsigned int v11; // w21
  WarBoardPieceData_o *v12; // x8
  UnityEngine_Object_o *pieceComponent; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v15; // x20

  if ( (byte_4B14116 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3, v4);
    sub_1BCA7E0(&WarBoardServantPieceComponent_TypeInfo, v5, v6);
    byte_4B14116 = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (WarBoardPieceData_array *)Instance->m_Items[51];
  if ( !Instance )
    goto LABEL_23;
  Instance = WarBoardData__GetAliveServantPieces((WarBoardData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_23;
  max_length = Instance->max_length;
  v10 = Instance;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1BCAA44(Instance, v8);
      v12 = v10->m_Items[v11];
      if ( !v12 )
        break;
      pieceComponent = (UnityEngine_Object_o *)v12->fields.pieceComponent;
      if ( pieceComponent
        && (methodPtr_low = LOBYTE(WarBoardServantPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(pieceComponent->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardServantPieceComponent_TypeInfo )
          v15 = pieceComponent;
        else
          v15 = 0LL;
      }
      else
      {
        v15 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      Instance = (WarBoardPieceData_array *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v15 )
          break;
        WarBoardServantPieceComponent__ChangeDyingAnimation((WarBoardServantPieceComponent_o *)v15, 0LL);
      }
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
LABEL_23:
    sub_1BCAA3C(Instance, v8);
  }
}


void __fastcall WarBoardDispChangeComponent__Initialize(
        WarBoardDispChangeComponent_o *this,
        UnityEngine_GameObject_o *configurationGo,
        UnityEngine_GameObject_o *playingGo,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  this->fields.configuration = configurationGo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.configuration,
    (int64_t)configurationGo,
    (int64_t)playingGo,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.playing = playingGo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.playing, (int64_t)playingGo, v10, v11, v12, v13, v14, v15);
}


void __fastcall WarBoardDispChangeComponent__SetBackKeyObject(
        WarBoardDispChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *configuration; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B14114 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_14699/*"TopBase/BackButton"*/, v4, v5);
    byte_4B14114 = 1;
  }
  configuration = (UnityEngine_Object_o *)this->fields.configuration;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(configuration, 0LL, 0LL) )
  {
    v8 = this->fields.configuration;
    if ( !v8 )
      sub_1BCAA3C(0LL, v7);
    transform = UnityEngine_GameObject__get_transform(v8, 0LL);
    AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_14699/*"TopBase/BackButton"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardDispChangeComponent__SetDispChangeBlink(
        WarBoardDispChangeComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *playing; // x21
  __int64 v8; // x1
  UnityEngine_GameObject_o *Component_object; // x0
  WarBoardPlayingUIController_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4B14115 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___, isDisp, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B14115 = 1;
  }
  playing = (UnityEngine_Object_o *)this->fields.playing;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
  if ( UnityEngine_Object__op_Inequality(playing, 0LL, 0LL) )
  {
    Component_object = this->fields.playing;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___)) == 0LL )
    {
      sub_1BCAA3C(Component_object, v8);
    }
    v10 = (WarBoardPlayingUIController_o *)Component_object;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)Component_object, 0LL) )
      WarBoardPlayingUIController__SetBlinkNextTurnButton(v10, isDisp, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardDispChangeComponent__SetUiRootAlpha(
        WarBoardDispChangeComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1
  long double v7; // q0

  if ( (byte_4B14113 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, isDisp, method);
    byte_4B14113 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_object )
    sub_1BCAA3C(0LL, v6);
  LODWORD(v7) = 0;
  if ( isDisp )
    *(float *)&v7 = 1.0;
  ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, long double))Component_object->klass->vtable[8].method)(
    Component_object,
    Component_object->klass->vtable[9].methodPtr,
    v7);
}