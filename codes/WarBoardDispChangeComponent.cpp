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
  void *Instance; // x0
  int v5; // w8
  void *v6; // x19
  unsigned int v7; // w21
  __int64 v8; // x8
  UnityEngine_Object_o *v9; // x8
  __int64 v10; // x11
  UnityEngine_Object_o *v11; // x20
  __int64 v12; // x0

  if ( (byte_4210D51 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    sub_B0D8A4(&WarBoardServantPieceComponent_TypeInfo, v3);
    byte_4210D51 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (void *)*((_QWORD *)Instance + 54);
  if ( !Instance )
    goto LABEL_24;
  Instance = WarBoardData__GetAliveServantPieces((WarBoardData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_24;
  v5 = *((_DWORD *)Instance + 6);
  v6 = Instance;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v5 )
      {
        v12 = sub_B0D9A8(Instance);
        sub_B0D948(v12, 0LL);
      }
      v8 = *((_QWORD *)v6 + (int)v7 + 4);
      if ( !v8 )
        break;
      v9 = *(UnityEngine_Object_o **)(v8 + 264);
      if ( v9
        && (v10 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
            *(&v9->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
      {
        if ( (WarBoardServantPieceComponent_c *)v9->klass->_2.typeHierarchy[v10 - 1] == WarBoardServantPieceComponent_TypeInfo )
          v11 = v9;
        else
          v11 = 0LL;
      }
      else
      {
        v11 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (void *)UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v11 )
          break;
        WarBoardServantPieceComponent__ChangeDyingAnimation((WarBoardServantPieceComponent_o *)v11, 0LL);
      }
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        return;
    }
LABEL_24:
    sub_B0D97C(Instance);
  }
}


void __fastcall WarBoardDispChangeComponent__Initialize(
        WarBoardDispChangeComponent_o *this,
        UnityEngine_GameObject_o *configurationGo,
        UnityEngine_GameObject_o *playingGo,
        const MethodInfo *method)
{
  this->fields.configuration = configurationGo;
  sub_B0D840(&this->fields.configuration, configurationGo);
  this->fields.playing = playingGo;
  sub_B0D840(&this->fields.playing, playingGo);
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

  if ( (byte_4210D4F & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_14572/*"TopBase/BackButton"*/, v4);
    byte_4210D4F = 1;
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
      sub_B0D97C(0LL);
    transform = UnityEngine_GameObject__get_transform(v6, 0LL);
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn_20833784(transform, (System_String_o *)StringLiteral_14572/*"TopBase/BackButton"*/, 0LL);
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
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  WarBoardPlayingUIController_o *v8; // x20

  if ( (byte_4210D50 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___, isDisp);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4210D50 = 1;
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
                                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___)) == 0LL )
    {
      sub_B0D97C(Component_srcLineSprite);
    }
    v8 = (WarBoardPlayingUIController_o *)Component_srcLineSprite;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0LL) )
      WarBoardPlayingUIController__SetBlinkNextTurnButton(v8, isDisp, 0LL);
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

  if ( (byte_4210D4E & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIPanel___, isDisp);
    byte_4210D4E = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_WebViewObject )
    sub_B0D97C(0LL);
  LODWORD(v6) = 0;
  if ( isDisp )
    *(float *)&v6 = 1.0;
  (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *, long double))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
    Component_WebViewObject,
    Component_WebViewObject->klass[1]._1.element_class,
    v6);
}