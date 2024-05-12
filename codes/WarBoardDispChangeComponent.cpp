void __fastcall WarBoardDispChangeComponent___ctor(WarBoardDispChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardDispChangeComponent__ChangeFaceEffect(
        WarBoardDispChangeComponent_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v3; // x1
  int v4; // w8
  void *v5; // x19
  unsigned int v6; // w21
  __int64 v7; // x8
  UnityEngine_Object_o *v8; // x8
  __int64 v9; // x11
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x0

  if ( (byte_4387B62 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardServantPieceComponent_TypeInfo);
    byte_4387B62 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (void *)*((_QWORD *)Instance + 54);
  if ( !Instance )
    goto LABEL_24;
  Instance = WarBoardData__GetAliveServantPieces((WarBoardData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_24;
  v4 = *((_DWORD *)Instance + 6);
  v5 = Instance;
  if ( v4 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= v4 )
      {
        v11 = sub_B776C8(Instance);
        sub_B77668(v11, 0LL);
      }
      v7 = *((_QWORD *)v5 + (int)v6 + 4);
      if ( !v7 )
        break;
      v8 = *(UnityEngine_Object_o **)(v7 + 264);
      if ( v8
        && (v9 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
            *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
      {
        if ( (WarBoardServantPieceComponent_c *)v8->klass->_2.typeHierarchy[v9 - 1] == WarBoardServantPieceComponent_TypeInfo )
          v10 = v8;
        else
          v10 = 0LL;
      }
      else
      {
        v10 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (void *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v10 )
          break;
        WarBoardServantPieceComponent__ChangeDyingAnimation((WarBoardServantPieceComponent_o *)v10, 0LL);
      }
      v4 = *((_DWORD *)v5 + 6);
      if ( (int)++v6 >= v4 )
        return;
    }
LABEL_24:
    sub_B7769C(Instance, v3);
  }
}


void __fastcall WarBoardDispChangeComponent__Initialize(
        WarBoardDispChangeComponent_o *this,
        UnityEngine_GameObject_o *configurationGo,
        UnityEngine_GameObject_o *playingGo,
        const MethodInfo *method)
{
  this->fields.configuration = configurationGo;
  sub_B77560(&this->fields.configuration);
  this->fields.playing = playingGo;
  sub_B77560(&this->fields.playing);
}


void __fastcall WarBoardDispChangeComponent__SetBackKeyObject(
        WarBoardDispChangeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *configuration; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_4387B60 & 1) == 0 )
  {
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_14778/*"TopBase/BackButton"*/);
    byte_4387B60 = 1;
  }
  configuration = (UnityEngine_Object_o *)this->fields.configuration;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(configuration, 0LL, 0LL) )
  {
    v5 = this->fields.configuration;
    if ( !v5 )
      sub_B7769C(0LL, v4);
    transform = UnityEngine_GameObject__get_transform(v5, 0LL);
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn_23834620(transform, (System_String_o *)StringLiteral_14778/*"TopBase/BackButton"*/, 0LL);
  }
}


void __fastcall WarBoardDispChangeComponent__SetDispChangeBlink(
        WarBoardDispChangeComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *playing; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  WarBoardPlayingUIController_o *v8; // x20

  if ( (byte_4387B61 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4387B61 = 1;
  }
  playing = (UnityEngine_Object_o *)this->fields.playing;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(playing, 0LL, 0LL) )
  {
    Component_srcLineSprite = this->fields.playing;
    if ( !Component_srcLineSprite
      || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Component_srcLineSprite,
                                                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___)) == 0LL )
    {
      sub_B7769C(Component_srcLineSprite, v6);
    }
    v8 = (WarBoardPlayingUIController_o *)Component_srcLineSprite;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0LL) )
      WarBoardPlayingUIController__SetBlinkNextTurnButton(v8, isDisp, 0LL);
  }
}


void __fastcall WarBoardDispChangeComponent__SetUiRootAlpha(
        WarBoardDispChangeComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  WebViewObject_o *Component_WebViewObject; // x0
  __int64 v6; // x1
  long double v7; // q0

  if ( (byte_4387B5F & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4387B5F = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_WebViewObject )
    sub_B7769C(0LL, v6);
  LODWORD(v7) = 0;
  if ( isDisp )
    *(float *)&v7 = 1.0;
  (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *, long double))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
    Component_WebViewObject,
    Component_WebViewObject->klass[1]._1.element_class,
    v7);
}