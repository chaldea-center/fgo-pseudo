void __fastcall MainMenuBar___ctor(MainMenuBar_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E728B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar___ctor__, (_DWORD)method, v2, v3);
    byte_42E728B = 1;
  }
  *(&this->fields.panelDepth + 1) = -1;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_MainMenuBar___ctor__);
}


void __fastcall MainMenuBar__FrameIn(bool is_force, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_42E7289 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7289 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B5D69C(Instance, v6);
  MainMenuBarBase__FrameInOut(Instance, 1, is_force, v7);
}


void __fastcall MainMenuBar__FrameOut(bool is_force, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_42E728A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E728A = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B5D69C(Instance, v6);
  MainMenuBarBase__FrameInOut(Instance, 0, is_force, v7);
}


void __fastcall MainMenuBar__RequestSelectedSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v6; // x1
  MainMenuBarBase_o *v7; // x0

  if ( (byte_42E7281 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7281 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v7 = this->fields.barBase;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    MainMenuBarBase__RequestSelectedSceneChange(v7, v6);
  }
}


void __fastcall MainMenuBar__RequestSelectedSignal(MainMenuBar_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v6; // x1
  MainMenuBarBase_o *v7; // x0

  if ( (byte_42E727F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E727F = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v7 = this->fields.barBase;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    MainMenuBarBase__RequestSelectedSignal(v7, v6);
  }
}


void __fastcall MainMenuBar__RequestTerminalSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *barBase; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E7280 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7280 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL);
  if ( v6 )
  {
    if ( !this->fields.barBase )
      sub_B5D69C(v6, v7);
    MainMenuBarBase__RequestTerminalSceneChange((MainMenuBarBase_o *)v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v34; // x1
  const MethodInfo *v35; // x5

  if ( (byte_42E727A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)scene, kind, *(_QWORD *)&panelDepth);
    byte_42E727A = 1;
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
    UnityEngine_Object__DestroyImmediate_35620448(obj, 0LL);
    this->fields.obj = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.obj, 0LL, v20, v21, v22, v23, v24, v25);
    *p_barBase = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.barBase, 0LL, v26, v27, v28, v29, v30, v31);
  }
  this->fields.activeScene = scene;
  p_activeScene = (BattleServantConfConponent_o *)&this->fields.activeScene;
  *(_DWORD *)&p_activeScene[-1].fields.isOpenAfter = kind;
  p_activeScene[-1].fields.adjustHeight = panelDepth;
  sub_B5D560(p_activeScene, (System_Int32_array **)scene, v13, v14, v15, v16, v17, v18);
  monitor = (UnityEngine_Object_o *)p_activeScene->monitor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
  {
    if ( !*p_barBase )
      sub_B5D69C(0LL, v34);
    MainMenuBarBase__SetActiveScene(*p_barBase, scene, kind, panelDepth, cam, v35);
  }
}


void __fastcall MainMenuBar__SetAllBtnAct(System_Action_o *act, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_42E7288 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7288 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
    sub_B5D69C(Instance, v6);
  *(_QWORD *)&webViewBase->fields.mOldV1.fields.y = act;
  sub_B5D560(
    (BattleServantConfConponent_o *)&webViewBase->fields.mOldV1.fields.y,
    (System_Int32_array **)act,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetAlpha(float alpha, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  long double v5; // q8
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  WebViewManager_o *Instance; // x19
  UnityEngine_Component_o *Component_WebViewObject; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *webViewBase; // x20

  v5 = *(long double *)&alpha;
  if ( (byte_42E7274 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, v2, v3, v4);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v9, v10, v11);
    byte_42E7274 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(
                                                         (UnityEngine_Object_o *)Instance,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)Component_WebViewObject & 1) == 0 )
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
      Component_WebViewObject = (UnityEngine_Component_o *)Instance->fields.webViewBase;
      if ( Component_WebViewObject )
      {
        Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               Component_WebViewObject,
                                                               (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
        if ( Component_WebViewObject )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, long double))Component_WebViewObject->klass[1]._1.castClass)(
            Component_WebViewObject,
            Component_WebViewObject->klass[1]._1.declaringType,
            v5);
          return;
        }
      }
    }
    sub_B5D69C(Component_WebViewObject, v14);
  }
}


void __fastcall MainMenuBar__SetButtonActive(
        MainMenuBar_o *this,
        int32_t kind,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  MainMenuBarBase_o *v10; // x0

  if ( (byte_42E727E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, kind, isActive, method);
    byte_42E727E = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v10 = this->fields.barBase;
    if ( !v10 )
      sub_B5D69C(0LL, v8);
    MainMenuBarBase__SetButtonActive(v10, kind, isActive, v9);
  }
}


void __fastcall MainMenuBar__SetButtonKind(MainMenuBar_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *barBase; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  struct MainMenuBarBase_o *v9; // x8

  if ( (byte_42E727B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, kind, (_DWORD)method, v3);
    byte_42E727B = 1;
  }
  this->fields.panelDepth = kind;
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL);
  if ( v7 )
  {
    v9 = this->fields.barBase;
    if ( !v9 )
      sub_B5D69C(v7, v8);
    v9->fields.kind = kind;
  }
}


void __fastcall MainMenuBar__SetDispBtnAct(int32_t kind, System_Action_o *act, const MethodInfo *method)
{
  __int64 v3; // x3
  MainMenuBarBase_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_42E7287 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, (_DWORD)act, (_DWORD)method, v3);
    byte_42E7287 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B5D69C(Instance, v7);
  MainMenuBarBase__SetDispBtnAct(Instance, kind, act, v8);
}


void __fastcall MainMenuBar__SetDispBtnColliderEnable(bool is_enable, int32_t kind, const MethodInfo *method)
{
  __int64 v3; // x3
  MainMenuBarBase_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_42E7286 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, kind, (_DWORD)method, v3);
    byte_42E7286 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B5D69C(Instance, v7);
  MainMenuBarBase__SetDispBtnColliderEnable(Instance, is_enable, kind, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetMenuActive(
        MainMenuBar_o *this,
        bool isActive,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  char v16; // w1
  int v17; // w2
  __int64 v18; // x3
  char v19; // w1
  int v20; // w2
  __int64 v21; // x3
  char v22; // w1
  int v23; // w2
  __int64 v24; // x3
  struct UnityEngine_GameObject_o **p_obj; // x22
  UnityEngine_Object_o *obj; // x23
  UnityEngine_Object_o *activeScene; // x23
  UnityEngine_Component_o *gameObject; // x0
  __int64 v29; // x1
  UnityEngine_Component_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Component_o *v31; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x24
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Transform_o *v40; // x24
  UnityEngine_Transform_o *transform; // x24
  int v42; // s0
  UnityEngine_Transform_o *v45; // x24
  int v46; // s0
  UnityEngine_Transform_o *v50; // x24
  int v51; // s0
  UnityEngine_GameObject_o *v54; // x24
  struct MainMenuBarBase_o *Component_srcLineSprite; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  const MethodInfo *v62; // x5
  UnityEngine_Object_o *barBase; // x21
  const MethodInfo *v64; // x2

  if ( (byte_42E727D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___, isActive, (_DWORD)cam, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICamera___, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_GameObject___, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_4259/*"CommonUI/MainMenuBarPrefab"*/, v22, v23, v24);
    byte_42E727D = 1;
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
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = (UnityEngine_Component_o *)this->fields.activeScene;
          if ( !gameObject )
            goto LABEL_49;
          ComponentInChildren_UIWidget = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                      gameObject,
                                                                      (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
        }
        else
        {
          if ( !cam )
            goto LABEL_49;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)cam,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_49;
          ComponentInChildren_UIWidget = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)gameObject,
                                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
        }
        v31 = ComponentInChildren_UIWidget;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v31, 0LL, 0LL) )
        {
          UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                                (System_String_o *)StringLiteral_4259/*"CommonUI/MainMenuBarPrefab"*/,
                                                                (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_GameObject___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v33 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         UIAtlas,
                                         (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          *p_obj = (struct UnityEngine_GameObject_o *)v33;
          sub_B5D560((BattleServantConfConponent_o *)&this->fields.obj, v33, v34, v35, v36, v37, v38, v39);
          gameObject = (UnityEngine_Component_o *)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !v31 )
            goto LABEL_49;
          v40 = (UnityEngine_Transform_o *)gameObject;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v31, 0LL);
          if ( !v40 )
            goto LABEL_49;
          UnityEngine_Transform__set_parent(v40, (UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_zero(0LL);
          if ( !transform )
            goto LABEL_49;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v42, 0LL);
          gameObject = (UnityEngine_Component_o *)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          v45 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          *(UnityEngine_Quaternion_o *)&v46 = UnityEngine_Quaternion__get_identity(0LL);
          if ( !v45 )
            goto LABEL_49;
          UnityEngine_Transform__set_localRotation(v45, *(UnityEngine_Quaternion_o *)&v46, 0LL);
          gameObject = (UnityEngine_Component_o *)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          v50 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Vector3__get_one(0LL);
          if ( !v50 )
            goto LABEL_49;
          UnityEngine_Transform__set_localScale(v50, *(UnityEngine_Vector3_o *)&v51, 0LL);
          v54 = *p_obj;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v31, 0LL);
          if ( !gameObject )
            goto LABEL_49;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_layer(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !v54 )
            goto LABEL_49;
          UnityEngine_GameObject__set_layer(v54, (int32_t)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          Component_srcLineSprite = (struct MainMenuBarBase_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)gameObject,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___);
          this->fields.barBase = Component_srcLineSprite;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.barBase,
            (System_Int32_array **)Component_srcLineSprite,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
          gameObject = (UnityEngine_Component_o *)this->fields.barBase;
          if ( !gameObject )
            goto LABEL_49;
          MainMenuBarBase__SetActiveScene(
            (MainMenuBarBase_o *)gameObject,
            this->fields.activeScene,
            this->fields.panelDepth,
            *(&this->fields.panelDepth + 1),
            cam,
            v62);
        }
      }
    }
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.barBase;
    if ( gameObject )
    {
      MainMenuBarBase__SetMenuActive((MainMenuBarBase_o *)gameObject, isActive, v64);
      return;
    }
LABEL_49:
    sub_B5D69C(gameObject, v29);
  }
}


void __fastcall MainMenuBar__SetMenuBtnAct(System_Action_o *act, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_42E7285 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7285 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
    sub_B5D69C(Instance, v6);
  *(_QWORD *)&webViewBase->fields.mOldV0.fields.x = act;
  sub_B5D560(
    (BattleServantConfConponent_o *)&webViewBase->fields.mOldV0,
    (System_Int32_array **)act,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void __fastcall MainMenuBar__SetMenuBtnColliderEnable(bool isEnable, bool isGray, const MethodInfo *method)
{
  __int64 v3; // x3
  MainMenuBarBase_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_42E7284 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, isGray, (_DWORD)method, v3);
    byte_42E7284 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B5D69C(Instance, v7);
  MainMenuBarBase__SetMenuBtnColliderEnable(Instance, isEnable, isGray, v8);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_42E727C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)scene, kind, *(_QWORD *)&panelDepth);
    byte_42E727C = 1;
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
    sub_B5D560(
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
      UnityEngine_Object__DestroyImmediate_35620448(v17, 0LL);
      this->fields.obj = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.obj, 0LL, v18, v19, v20, v21, v22, v23);
      this->fields.barBase = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.barBase, 0LL, v24, v25, v26, v27, v28, v29);
      MainMenuBar__SetMenuActive(this, 1, 0LL, v30);
    }
  }
}


void __fastcall MainMenuBar__SetSceneChangeFadeType(int32_t fadeType, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_42E7282 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7282 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
    sub_B5D69C(Instance, v6);
  LODWORD(webViewBase->fields.mLastAlpha) = fadeType;
}


void __fastcall MainMenuBar__UpdateNoticeNumber(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_42E7283 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v1, v2, v3);
    byte_42E7283 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B5D69C(Instance, v5);
  MainMenuBarBase__UpdateNoticeNumber(Instance, v5);
}


bool __fastcall MainMenuBar__get_IsEnableOutSideCollider(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x19
  UnityEngine_Collider_o *v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *webViewBase; // x20
  struct UIWidget_o *v12; // x8

  if ( (byte_42E726C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v4, v5, v6);
    byte_42E726C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_Collider_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    return 0;
  if ( !Instance )
    goto LABEL_16;
  webViewBase = (UnityEngine_Object_o *)Instance->fields.webViewBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_Collider_o *)UnityEngine_Object__op_Equality(webViewBase, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    return 0;
  v12 = Instance->fields.webViewBase;
  if ( !v12 || (v8 = *(UnityEngine_Collider_o **)&v12->fields.finalAlpha) == 0LL )
LABEL_16:
    sub_B5D69C(v8, v9);
  return UnityEngine_Collider__get_enabled(v8, 0LL);
}


bool __fastcall MainMenuBar__get_IsMenuBarActive(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x19
  MainMenuBarBase_o *v8; // x0
  const MethodInfo *v9; // x1
  UnityEngine_Object_o *webViewBase; // x20

  if ( (byte_42E726D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v4, v5, v6);
    byte_42E726D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (MainMenuBarBase_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    return 0;
  if ( !Instance )
    goto LABEL_15;
  webViewBase = (UnityEngine_Object_o *)Instance->fields.webViewBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(webViewBase, 0LL, 0LL) )
    return 0;
  v8 = (MainMenuBarBase_o *)Instance->fields.webViewBase;
  if ( !v8 )
LABEL_15:
    sub_B5D69C(v8, v9);
  return MainMenuBarBase__get_IsMenuBarActive(v8, v9);
}


void __fastcall MainMenuBar__requestSelectedSceneChange(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  UnityEngine_Object_o *Instance; // x19
  MainMenuBar_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42E7279 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v4, v5, v6);
    byte_42E7279 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
  {
    v8 = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v8 )
      sub_B5D69C(0LL, v9);
    MainMenuBar__RequestSelectedSceneChange(v8, v9);
  }
}


void __fastcall MainMenuBar__requestSelectedSignal(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  UnityEngine_Object_o *Instance; // x19
  MainMenuBar_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42E7277 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v4, v5, v6);
    byte_42E7277 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
  {
    v8 = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v8 )
      sub_B5D69C(0LL, v9);
    MainMenuBar__RequestSelectedSignal(v8, v9);
  }
}


void __fastcall MainMenuBar__requestTerminalSceneChange(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  UnityEngine_Object_o *Instance; // x19
  MainMenuBar_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42E7278 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v4, v5, v6);
    byte_42E7278 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
  {
    v8 = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v8 )
      sub_B5D69C(0LL, v9);
    MainMenuBar__RequestTerminalSceneChange(v8, v9);
  }
}


void __fastcall MainMenuBar__resumeMenuBar(
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t depth,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_42E726E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, kind, depth, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v7, v8, v9);
    byte_42E726E = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v11 )
  {
    if ( !Instance )
      sub_B5D69C(v11, v12);
    MainMenuBar__SetResumeMenu((MainMenuBar_o *)Instance, scene, kind, depth, v13);
  }
}


void __fastcall MainMenuBar__setActiveScene(
        SceneRootComponent_o *scene,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5

  if ( (byte_42E726F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)cam, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v6, v7, v8);
    byte_42E726F = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v10 )
  {
    if ( !Instance )
      sub_B5D69C(v10, v11);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, -1, cam, v12);
  }
}


void __fastcall MainMenuBar__setActiveScene_22613292(
        SceneRootComponent_o *scene,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5

  if ( (byte_42E7270 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, depth, (_DWORD)cam, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v7, v8, v9);
    byte_42E7270 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v11 )
  {
    if ( !Instance )
      sub_B5D69C(v11, v12);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, depth, cam, v13);
  }
}


void __fastcall MainMenuBar__setActiveScene_22613500(
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *Instance; // x23
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x5

  if ( (byte_42E7271 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, kind, depth, cam);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v9, v10, v11);
    byte_42E7271 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v13 )
  {
    if ( !Instance )
      sub_B5D69C(v13, v14);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, kind, depth, cam, v15);
  }
}


void __fastcall MainMenuBar__setButtonActive(bool isActive, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewManager_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_42E7276 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5, v6, v7);
    byte_42E7276 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_B5D69C(v9, v10);
    MainMenuBar__SetButtonActive((MainMenuBar_o *)Instance, (int32_t)Instance->fields.basePanel, isActive, v11);
  }
}


void __fastcall MainMenuBar__setCloseHideMode(bool is_enable, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_42E7275 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7275 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
    sub_B5D69C(Instance, v6);
  LOBYTE(webViewBase[1].klass) = is_enable;
  if ( is_enable )
    GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)webViewBase->fields.mRoot, -420.0, 0LL);
}


void __fastcall MainMenuBar__setKind(int32_t kind, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_42E7272 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5, v6, v7);
    byte_42E7272 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_B5D69C(v9, v10);
    MainMenuBar__SetButtonKind((MainMenuBar_o *)Instance, kind, v11);
  }
}


void __fastcall MainMenuBar__setMenuActive(bool isActive, UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_42E7273 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)cam, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v6, v7, v8);
    byte_42E7273 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v10 )
  {
    if ( !Instance )
      sub_B5D69C(v10, v11);
    MainMenuBar__SetMenuActive((MainMenuBar_o *)Instance, isActive, cam, v12);
  }
}