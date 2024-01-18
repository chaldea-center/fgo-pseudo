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
  __int64 v5; // x1
  int v6; // w8
  void *v7; // x19
  unsigned int v8; // w21
  __int64 v9; // x8
  UnityEngine_Object_o *v10; // x8
  __int64 v11; // x11
  UnityEngine_Object_o *v12; // x20
  __int64 v13; // x0

  if ( (byte_4183FF3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    sub_B2C35C(&WarBoardServantPieceComponent_TypeInfo, v3);
    byte_4183FF3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (void *)*((_QWORD *)Instance + 54);
  if ( !Instance )
    goto LABEL_24;
  Instance = WarBoardData__GetAliveServantPieces((WarBoardData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_24;
  v6 = *((_DWORD *)Instance + 6);
  v7 = Instance;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v6 )
      {
        v13 = sub_B2C460(Instance);
        sub_B2C400(v13, 0LL);
      }
      v9 = *((_QWORD *)v7 + (int)v8 + 4);
      if ( !v9 )
        break;
      v10 = *(UnityEngine_Object_o **)(v9 + 264);
      if ( v10
        && (v11 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
            *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11) )
      {
        if ( (WarBoardServantPieceComponent_c *)v10->klass->_2.typeHierarchy[v11 - 1] == WarBoardServantPieceComponent_TypeInfo )
          v12 = v10;
        else
          v12 = 0LL;
      }
      else
      {
        v12 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (void *)UnityEngine_Object__op_Equality(v12, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v12 )
          break;
        WarBoardServantPieceComponent__ChangeDyingAnimation((WarBoardServantPieceComponent_o *)v12, 0LL);
      }
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        return;
    }
LABEL_24:
    sub_B2C434(Instance, v5);
  }
}


void __fastcall WarBoardDispChangeComponent__Initialize(
        WarBoardDispChangeComponent_o *this,
        UnityEngine_GameObject_o *configurationGo,
        UnityEngine_GameObject_o *playingGo,
        const MethodInfo *method)
{
  this->fields.configuration = configurationGo;
  sub_B2C2F8(&this->fields.configuration, configurationGo);
  this->fields.playing = playingGo;
  sub_B2C2F8(&this->fields.playing, playingGo);
}


void __fastcall WarBoardDispChangeComponent__SetBackKeyObject(
        WarBoardDispChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *configuration; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_4183FF1 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_14527/*"TopBase/BackButton"*/, v4);
    byte_4183FF1 = 1;
  }
  configuration = (UnityEngine_Object_o *)this->fields.configuration;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(configuration, 0LL, 0LL) )
  {
    v7 = this->fields.configuration;
    if ( !v7 )
      sub_B2C434(0LL, v6);
    transform = UnityEngine_GameObject__get_transform(v7, 0LL);
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn_21105064(transform, (System_String_o *)StringLiteral_14527/*"TopBase/BackButton"*/, 0LL);
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
  __int64 v7; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  WarBoardPlayingUIController_o *v9; // x20

  if ( (byte_4183FF2 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___, isDisp);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4183FF2 = 1;
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
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___)) == 0LL )
    {
      sub_B2C434(Component_srcLineSprite, v7);
    }
    v9 = (WarBoardPlayingUIController_o *)Component_srcLineSprite;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0LL) )
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
  __int64 v6; // x1
  long double v7; // q0

  if ( (byte_4183FF0 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, isDisp);
    byte_4183FF0 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_WebViewObject )
    sub_B2C434(0LL, v6);
  LODWORD(v7) = 0;
  if ( isDisp )
    *(float *)&v7 = 1.0;
  (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *, long double))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
    Component_WebViewObject,
    Component_WebViewObject->klass[1]._1.element_class,
    v7);
}