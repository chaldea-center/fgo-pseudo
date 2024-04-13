void __fastcall WarBoardDispChangeComponent___ctor(WarBoardDispChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardDispChangeComponent__ChangeFaceEffect(
        WarBoardDispChangeComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  void *Instance; // x0
  __int64 v11; // x1
  int v12; // w8
  void *v13; // x19
  unsigned int v14; // w21
  __int64 v15; // x8
  UnityEngine_Object_o *v16; // x8
  __int64 v17; // x11
  UnityEngine_Object_o *v18; // x20
  __int64 v19; // x0

  if ( (byte_42E51D6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4, v5, v6);
    sub_B5D5C4(&WarBoardServantPieceComponent_TypeInfo, v7, v8, v9);
    byte_42E51D6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (void *)*((_QWORD *)Instance + 54);
  if ( !Instance )
    goto LABEL_24;
  Instance = WarBoardData__GetAliveServantPieces((WarBoardData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_24;
  v12 = *((_DWORD *)Instance + 6);
  v13 = Instance;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= v12 )
      {
        v19 = sub_B5D6C8(Instance);
        sub_B5D668(v19, 0LL);
      }
      v15 = *((_QWORD *)v13 + (int)v14 + 4);
      if ( !v15 )
        break;
      v16 = *(UnityEngine_Object_o **)(v15 + 264);
      if ( v16
        && (v17 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
            *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v17) )
      {
        if ( (WarBoardServantPieceComponent_c *)v16->klass->_2.typeHierarchy[v17 - 1] == WarBoardServantPieceComponent_TypeInfo )
          v18 = v16;
        else
          v18 = 0LL;
      }
      else
      {
        v18 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (void *)UnityEngine_Object__op_Equality(v18, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v18 )
          break;
        WarBoardServantPieceComponent__ChangeDyingAnimation((WarBoardServantPieceComponent_o *)v18, 0LL);
      }
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        return;
    }
LABEL_24:
    sub_B5D69C(Instance, v11);
  }
}


void __fastcall WarBoardDispChangeComponent__Initialize(
        WarBoardDispChangeComponent_o *this,
        UnityEngine_GameObject_o *configurationGo,
        UnityEngine_GameObject_o *playingGo,
        const MethodInfo *method)
{
  this->fields.configuration = configurationGo;
  sub_B5D560(&this->fields.configuration);
  this->fields.playing = playingGo;
  sub_B5D560(&this->fields.playing);
}


void __fastcall WarBoardDispChangeComponent__SetBackKeyObject(
        WarBoardDispChangeComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *configuration; // x20
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_42E51D4 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_14684/*"TopBase/BackButton"*/, v8, v9, v10);
    byte_42E51D4 = 1;
  }
  configuration = (UnityEngine_Object_o *)this->fields.configuration;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(configuration, 0LL, 0LL) )
  {
    v13 = this->fields.configuration;
    if ( !v13 )
      sub_B5D69C(0LL, v12);
    transform = UnityEngine_GameObject__get_transform(v13, 0LL);
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn_21237572(transform, (System_String_o *)StringLiteral_14684/*"TopBase/BackButton"*/, 0LL);
  }
}


void __fastcall WarBoardDispChangeComponent__SetDispChangeBlink(
        WarBoardDispChangeComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *playing; // x21
  __int64 v10; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  WarBoardPlayingUIController_o *v12; // x20

  if ( (byte_42E51D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___, isDisp, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E51D5 = 1;
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
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WarBoardPlayingUIController___)) == 0LL )
    {
      sub_B5D69C(Component_srcLineSprite, v10);
    }
    v12 = (WarBoardPlayingUIController_o *)Component_srcLineSprite;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0LL) )
      WarBoardPlayingUIController__SetBlinkNextTurnButton(v12, isDisp, 0LL);
  }
}


void __fastcall WarBoardDispChangeComponent__SetUiRootAlpha(
        WarBoardDispChangeComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WebViewObject_o *Component_WebViewObject; // x0
  __int64 v7; // x1
  long double v8; // q0

  if ( (byte_42E51D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, isDisp, (_DWORD)method, v3);
    byte_42E51D3 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_WebViewObject )
    sub_B5D69C(0LL, v7);
  LODWORD(v8) = 0;
  if ( isDisp )
    *(float *)&v8 = 1.0;
  (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *, long double))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
    Component_WebViewObject,
    Component_WebViewObject->klass[1]._1.element_class,
    v8);
}