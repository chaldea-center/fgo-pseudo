void __fastcall MainMenuBar___ctor(MainMenuBar_o *this, const MethodInfo *method)
{
  if ( (byte_40F8E2C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar___ctor__, method);
    byte_40F8E2C = 1;
  }
  *(&this->fields.panelDepth + 1) = -1;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_MainMenuBar___ctor__);
}


void __fastcall MainMenuBar__FrameIn(bool is_force, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x3
  MainMenuBarBase_o *webViewBase; // x0

  if ( (byte_40F8E2A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_40F8E2A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = (MainMenuBarBase_o *)Instance->fields.webViewBase) == 0LL )
    sub_B170D4();
  MainMenuBarBase__FrameInOut(webViewBase, 1, is_force, v4);
}


void __fastcall MainMenuBar__FrameOut(bool is_force, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x3
  MainMenuBarBase_o *webViewBase; // x0

  if ( (byte_40F8E2B & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_40F8E2B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = (MainMenuBarBase_o *)Instance->fields.webViewBase) == 0LL )
    sub_B170D4();
  MainMenuBarBase__FrameInOut(webViewBase, 0, is_force, v4);
}


void __fastcall MainMenuBar__RequestSelectedSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_40F8E22 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8E22 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v5 = this->fields.barBase;
    if ( !v5 )
      sub_B170D4();
    MainMenuBarBase__RequestSelectedSceneChange(v5, v4);
  }
}


void __fastcall MainMenuBar__RequestSelectedSignal(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_40F8E20 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8E20 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v5 = this->fields.barBase;
    if ( !v5 )
      sub_B170D4();
    MainMenuBarBase__RequestSelectedSignal(v5, v4);
  }
}


void __fastcall MainMenuBar__RequestTerminalSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40F8E21 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8E21 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL);
  if ( v4 )
  {
    if ( !this->fields.barBase )
      sub_B170D4();
    MainMenuBarBase__RequestTerminalSceneChange((MainMenuBarBase_o *)v4, v5);
  }
}


void __fastcall MainMenuBar__SetActiveScene(
        MainMenuBar_o *this,
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t panelDepth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  MainMenuBarBase_o **p_barBase; // x23
  UnityEngine_Object_o *barBase; // x25
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *obj; // x26
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  BattleServantConfConponent_o *p_activeScene; // x24
  UnityEngine_Object_o *monitor; // x24
  const MethodInfo *v34; // x5

  if ( (byte_40F8E1B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, scene);
    byte_40F8E1B = 1;
  }
  p_barBase = &this->fields.barBase;
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_34809676(obj, 0LL);
    this->fields.obj = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.obj, 0LL, v20, v21, v22, v23, v24, v25);
    *p_barBase = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.barBase, 0LL, v26, v27, v28, v29, v30, v31);
  }
  this->fields.activeScene = scene;
  p_activeScene = (BattleServantConfConponent_o *)&this->fields.activeScene;
  *(_DWORD *)&p_activeScene[-1].fields.isOpenAfter = kind;
  p_activeScene[-1].fields.adjustHeight = panelDepth;
  sub_B16F98(p_activeScene, (System_Int32_array **)scene, v13, v14, v15, v16, v17, v18);
  monitor = (UnityEngine_Object_o *)p_activeScene->monitor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
  {
    if ( !*p_barBase )
      sub_B170D4();
    MainMenuBarBase__SetActiveScene(*p_barBase, scene, kind, panelDepth, cam, v34);
  }
}


void __fastcall MainMenuBar__SetAllBtnAct(System_Action_o *act, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_40F8E29 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_40F8E29 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
    sub_B170D4();
  *(_QWORD *)&webViewBase->fields.mOldV1.fields.y = act;
  sub_B16F98(
    (BattleServantConfConponent_o *)&webViewBase->fields.mOldV1.fields.y,
    (System_Int32_array **)act,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetAlpha(float alpha, const MethodInfo *method)
{
  __int64 v2; // x1
  long double v3; // q8
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x19
  UnityEngine_Object_o *webViewBase; // x20
  UnityEngine_Component_o *v8; // x0
  WebViewObject_o *Component_WebViewObject; // x0

  v3 = *(long double *)&alpha;
  if ( (byte_40F8E15 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, v2);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5);
    byte_40F8E15 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( Instance )
    {
      webViewBase = (UnityEngine_Object_o *)Instance->fields.webViewBase;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(webViewBase, 0LL, 0LL) )
        return;
      v8 = (UnityEngine_Component_o *)Instance->fields.webViewBase;
      if ( v8 )
      {
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    v8,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
        if ( Component_WebViewObject )
        {
          (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *, long double))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
            Component_WebViewObject,
            Component_WebViewObject->klass[1]._1.element_class,
            v3);
          return;
        }
      }
    }
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetButtonActive(
        MainMenuBar_o *this,
        int32_t kind,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x22
  const MethodInfo *v8; // x3
  MainMenuBarBase_o *v9; // x0

  if ( (byte_40F8E1F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    byte_40F8E1F = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v9 = this->fields.barBase;
    if ( !v9 )
      sub_B170D4();
    MainMenuBarBase__SetButtonActive(v9, kind, isActive, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetButtonKind(MainMenuBar_o *this, int32_t kind, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x21
  struct MainMenuBarBase_o *v6; // x8

  if ( (byte_40F8E1C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    byte_40F8E1C = 1;
  }
  this->fields.panelDepth = kind;
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v6 = this->fields.barBase;
    if ( !v6 )
      sub_B170D4();
    v6->fields.kind = kind;
  }
}


void __fastcall MainMenuBar__SetDispBtnAct(int32_t kind, System_Action_o *act, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v6; // x3
  MainMenuBarBase_o *webViewBase; // x0

  if ( (byte_40F8E28 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, act);
    byte_40F8E28 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = (MainMenuBarBase_o *)Instance->fields.webViewBase) == 0LL )
    sub_B170D4();
  MainMenuBarBase__SetDispBtnAct(webViewBase, kind, act, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetDispBtnColliderEnable(bool is_enable, int32_t kind, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v6; // x3
  MainMenuBarBase_o *webViewBase; // x0

  if ( (byte_40F8E27 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, *(_QWORD *)&kind);
    byte_40F8E27 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = (MainMenuBarBase_o *)Instance->fields.webViewBase) == 0LL )
    sub_B170D4();
  MainMenuBarBase__SetDispBtnColliderEnable(webViewBase, is_enable, kind, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetMenuActive(
        MainMenuBar_o *this,
        bool isActive,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o **p_obj; // x22
  UnityEngine_Object_o *obj; // x23
  UnityEngine_Object_o *activeScene; // x23
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Component_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v19; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x24
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v29; // x24
  UnityEngine_Transform_o *v30; // x0
  UnityEngine_Transform_o *v31; // x24
  int v32; // s0
  UnityEngine_Transform_o *v35; // x24
  int v36; // s0
  UnityEngine_Transform_o *v40; // x24
  int v41; // s0
  UnityEngine_GameObject_o *v44; // x24
  UnityEngine_GameObject_o *v45; // x0
  int32_t layer; // w0
  struct MainMenuBarBase_o *Component_srcLineSprite; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x5
  MainMenuBarBase_o *barBase; // x0
  UnityEngine_Object_o *v56; // x21
  const MethodInfo *v57; // x2
  MainMenuBarBase_o *v58; // x0

  if ( (byte_40F8E1E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___, isActive);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICamera___, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_GameObject___, v11);
    sub_B16FFC(&StringLiteral_4170, v12);
    byte_40F8E1E = 1;
  }
  if ( isActive )
  {
    p_obj = &this->fields.obj;
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(obj, 0LL, 0LL) )
    {
      activeScene = (UnityEngine_Object_o *)this->fields.activeScene;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(activeScene, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL) )
        {
          v16 = (UnityEngine_Component_o *)this->fields.activeScene;
          if ( !v16 )
            goto LABEL_49;
          ComponentInChildren_UIWidget = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                      v16,
                                                                      (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
        }
        else
        {
          if ( !cam )
            goto LABEL_49;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0LL);
          if ( !gameObject )
            goto LABEL_49;
          ComponentInChildren_UIWidget = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      gameObject,
                                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
        }
        v19 = ComponentInChildren_UIWidget;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
        {
          UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                                (System_String_o *)StringLiteral_4170,
                                                                (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_GameObject___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v21 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         UIAtlas,
                                         (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          *p_obj = (UnityEngine_GameObject_o *)v21;
          sub_B16F98((BattleServantConfConponent_o *)&this->fields.obj, v21, v22, v23, v24, v25, v26, v27);
          if ( !*p_obj )
            goto LABEL_49;
          transform = UnityEngine_GameObject__get_transform(*p_obj, 0LL);
          if ( !v19 )
            goto LABEL_49;
          v29 = transform;
          v30 = UnityEngine_Component__get_transform(v19, 0LL);
          if ( !v29 )
            goto LABEL_49;
          UnityEngine_Transform__set_parent(v29, v30, 0LL);
          if ( !*p_obj )
            goto LABEL_49;
          v31 = UnityEngine_GameObject__get_transform(*p_obj, 0LL);
          *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_zero(0LL);
          if ( !v31 )
            goto LABEL_49;
          UnityEngine_Transform__set_localPosition(v31, *(UnityEngine_Vector3_o *)&v32, 0LL);
          if ( !*p_obj )
            goto LABEL_49;
          v35 = UnityEngine_GameObject__get_transform(*p_obj, 0LL);
          *(UnityEngine_Quaternion_o *)&v36 = UnityEngine_Quaternion__get_identity(0LL);
          if ( !v35 )
            goto LABEL_49;
          UnityEngine_Transform__set_localRotation(v35, *(UnityEngine_Quaternion_o *)&v36, 0LL);
          if ( !*p_obj )
            goto LABEL_49;
          v40 = UnityEngine_GameObject__get_transform(*p_obj, 0LL);
          *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Vector3__get_one(0LL);
          if ( !v40 )
            goto LABEL_49;
          UnityEngine_Transform__set_localScale(v40, *(UnityEngine_Vector3_o *)&v41, 0LL);
          v44 = *p_obj;
          v45 = UnityEngine_Component__get_gameObject(v19, 0LL);
          if ( !v45 )
            goto LABEL_49;
          layer = UnityEngine_GameObject__get_layer(v45, 0LL);
          if ( !v44 )
            goto LABEL_49;
          UnityEngine_GameObject__set_layer(v44, layer, 0LL);
          if ( !*p_obj )
            goto LABEL_49;
          Component_srcLineSprite = (struct MainMenuBarBase_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  *p_obj,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___);
          this->fields.barBase = Component_srcLineSprite;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.barBase,
            (System_Int32_array **)Component_srcLineSprite,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53);
          barBase = this->fields.barBase;
          if ( !barBase )
            goto LABEL_49;
          MainMenuBarBase__SetActiveScene(
            barBase,
            this->fields.activeScene,
            this->fields.panelDepth,
            *(&this->fields.panelDepth + 1),
            cam,
            v54);
        }
      }
    }
  }
  v56 = (UnityEngine_Object_o *)this->fields.barBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
  {
    v58 = this->fields.barBase;
    if ( v58 )
    {
      MainMenuBarBase__SetMenuActive(v58, isActive, v57);
      return;
    }
LABEL_49:
    sub_B170D4();
  }
}


void __fastcall MainMenuBar__SetMenuBtnAct(System_Action_o *act, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_40F8E26 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_40F8E26 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
    sub_B170D4();
  *(_QWORD *)&webViewBase->fields.mOldV0.fields.x = act;
  sub_B16F98(
    (BattleServantConfConponent_o *)&webViewBase->fields.mOldV0,
    (System_Int32_array **)act,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetMenuBtnColliderEnable(bool isEnable, bool isGray, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v6; // x3
  MainMenuBarBase_o *webViewBase; // x0

  if ( (byte_40F8E25 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, isGray);
    byte_40F8E25 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = (MainMenuBarBase_o *)Instance->fields.webViewBase) == 0LL )
    sub_B170D4();
  MainMenuBarBase__SetMenuBtnColliderEnable(webViewBase, isEnable, isGray, v6);
}


void __fastcall MainMenuBar__SetResumeMenu(
        MainMenuBar_o *this,
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t panelDepth,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeScene; // x24
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *obj; // x21
  UnityEngine_Object_o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x3

  if ( (byte_40F8E1D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, scene);
    byte_40F8E1D = 1;
  }
  activeScene = (UnityEngine_Object_o *)this->fields.activeScene;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(activeScene, (UnityEngine_Object_o *)scene, 0LL) )
  {
    this->fields.panelDepth = kind;
    *(&this->fields.panelDepth + 1) = panelDepth;
    this->fields.activeScene = scene;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.activeScene,
      (System_Int32_array **)scene,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(obj, 0LL, 0LL) )
    {
      v17 = (UnityEngine_Object_o *)this->fields.obj;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(v17, 0LL);
      this->fields.obj = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.obj, 0LL, v18, v19, v20, v21, v22, v23);
      this->fields.barBase = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.barBase, 0LL, v24, v25, v26, v27, v28, v29);
      MainMenuBar__SetMenuActive(this, 1, 0LL, v30);
    }
  }
}


void __fastcall MainMenuBar__SetSceneChangeFadeType(int32_t fadeType, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_40F8E23 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_40F8E23 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
    sub_B170D4();
  LODWORD(webViewBase->fields.mLastAlpha) = fadeType;
}


void __fastcall MainMenuBar__UpdateNoticeNumber(const MethodInfo *method)
{
  __int64 v1; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v3; // x1
  MainMenuBarBase_o *webViewBase; // x0

  if ( (byte_40F8E24 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v1);
    byte_40F8E24 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = (MainMenuBarBase_o *)Instance->fields.webViewBase) == 0LL )
    sub_B170D4();
  MainMenuBarBase__UpdateNoticeNumber(webViewBase, v3);
}


bool __fastcall MainMenuBar__get_IsEnableOutSideCollider(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x19
  UnityEngine_Object_o *webViewBase; // x20
  struct UIWidget_o *v6; // x8
  UnityEngine_Collider_o *v7; // x0

  if ( (byte_40F8E0E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_40F8E0E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  if ( !Instance )
    goto LABEL_16;
  webViewBase = (UnityEngine_Object_o *)Instance->fields.webViewBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(webViewBase, 0LL, 0LL) )
    return 0;
  v6 = Instance->fields.webViewBase;
  if ( !v6 || (v7 = *(UnityEngine_Collider_o **)&v6->fields.finalAlpha) == 0LL )
LABEL_16:
    sub_B170D4();
  return UnityEngine_Collider__get_enabled(v7, 0LL);
}


void __fastcall MainMenuBar__requestSelectedSceneChange(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  MainMenuBar_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40F8E1A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_40F8E1A = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
  {
    v4 = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v4 )
      sub_B170D4();
    MainMenuBar__RequestSelectedSceneChange(v4, v5);
  }
}


void __fastcall MainMenuBar__requestSelectedSignal(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  MainMenuBar_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40F8E18 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_40F8E18 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
  {
    v4 = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v4 )
      sub_B170D4();
    MainMenuBar__RequestSelectedSignal(v4, v5);
  }
}


void __fastcall MainMenuBar__requestTerminalSceneChange(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  MainMenuBar_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40F8E19 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_40F8E19 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
  {
    v4 = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v4 )
      sub_B170D4();
    MainMenuBar__RequestTerminalSceneChange(v4, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__resumeMenuBar(
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t depth,
        const MethodInfo *method)
{
  __int64 v7; // x1
  MainMenuBar_o *Instance; // x22
  const MethodInfo *v9; // x4

  if ( (byte_40F8E0F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v7);
    byte_40F8E0F = 1;
  }
  Instance = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    MainMenuBar__SetResumeMenu(Instance, scene, kind, depth, v9);
  }
}


void __fastcall MainMenuBar__setActiveScene(
        SceneRootComponent_o *scene,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MainMenuBar_o *Instance; // x21
  const MethodInfo *v7; // x5

  if ( (byte_40F8E10 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, cam);
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5);
    byte_40F8E10 = 1;
  }
  Instance = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    MainMenuBar__SetActiveScene(Instance, scene, 0, -1, cam, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__setActiveScene_23163604(
        SceneRootComponent_o *scene,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v7; // x1
  MainMenuBar_o *Instance; // x22
  const MethodInfo *v9; // x5

  if ( (byte_40F8E11 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&depth);
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v7);
    byte_40F8E11 = 1;
  }
  Instance = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    MainMenuBar__SetActiveScene(Instance, scene, 0, depth, cam, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__setActiveScene_23163812(
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v9; // x1
  MainMenuBar_o *Instance; // x23
  const MethodInfo *v11; // x5

  if ( (byte_40F8E12 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v9);
    byte_40F8E12 = 1;
  }
  Instance = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    MainMenuBar__SetActiveScene(Instance, scene, kind, depth, cam, v11);
  }
}


void __fastcall MainMenuBar__setButtonActive(bool isActive, const MethodInfo *method)
{
  __int64 v3; // x1
  MainMenuBar_o *Instance; // x20
  const MethodInfo *v5; // x3

  if ( (byte_40F8E17 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v3);
    byte_40F8E17 = 1;
  }
  Instance = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    MainMenuBar__SetButtonActive(Instance, Instance->fields.panelDepth, isActive, v5);
  }
}


void __fastcall MainMenuBar__setCloseHideMode(bool is_enable, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_40F8E16 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_40F8E16 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
    sub_B170D4();
  LOBYTE(webViewBase[1].klass) = is_enable;
  if ( is_enable )
    GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)webViewBase->fields.mRoot, -420.0, 0LL);
}


void __fastcall MainMenuBar__setKind(int32_t kind, const MethodInfo *method)
{
  __int64 v3; // x1
  MainMenuBar_o *Instance; // x20
  const MethodInfo *v5; // x2

  if ( (byte_40F8E13 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v3);
    byte_40F8E13 = 1;
  }
  Instance = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    MainMenuBar__SetButtonKind(Instance, kind, v5);
  }
}


void __fastcall MainMenuBar__setMenuActive(bool isActive, UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  __int64 v5; // x1
  MainMenuBar_o *Instance; // x21
  const MethodInfo *v7; // x3

  if ( (byte_40F8E14 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, cam);
    sub_B16FFC(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5);
    byte_40F8E14 = 1;
  }
  Instance = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    MainMenuBar__SetMenuActive(Instance, isActive, cam, v7);
  }
}