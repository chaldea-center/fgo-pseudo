void __fastcall MainMenuBar___ctor(MainMenuBar_o *this, const MethodInfo *method)
{
  if ( (byte_41862DB & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar___ctor__, method);
    byte_41862DB = 1;
  }
  *(&this->fields.panelDepth + 1) = -1;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_MainMenuBar___ctor__);
}


void __fastcall MainMenuBar__FrameIn(bool is_force, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_41862D9 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_41862D9 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B2C434(Instance, v4);
  MainMenuBarBase__FrameInOut(Instance, 1, is_force, v5);
}


void __fastcall MainMenuBar__FrameOut(bool is_force, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_41862DA & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_41862DA = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B2C434(Instance, v4);
  MainMenuBarBase__FrameInOut(Instance, 0, is_force, v5);
}


void __fastcall MainMenuBar__RequestSelectedSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_41862D1 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41862D1 = 1;
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
      sub_B2C434(0LL, v4);
    MainMenuBarBase__RequestSelectedSceneChange(v5, v4);
  }
}


void __fastcall MainMenuBar__RequestSelectedSignal(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_41862CF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41862CF = 1;
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
      sub_B2C434(0LL, v4);
    MainMenuBarBase__RequestSelectedSignal(v5, v4);
  }
}


void __fastcall MainMenuBar__RequestTerminalSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_41862D0 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41862D0 = 1;
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
      sub_B2C434(v4, v5);
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
  __int64 v34; // x1
  const MethodInfo *v35; // x5

  if ( (byte_41862CA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, scene);
    byte_41862CA = 1;
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
    UnityEngine_Object__DestroyImmediate_35315108(obj, 0LL);
    this->fields.obj = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.obj, 0LL, v20, v21, v22, v23, v24, v25);
    *p_barBase = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.barBase, 0LL, v26, v27, v28, v29, v30, v31);
  }
  this->fields.activeScene = scene;
  p_activeScene = (BattleServantConfConponent_o *)&this->fields.activeScene;
  *(_DWORD *)&p_activeScene[-1].fields.isOpenAfter = kind;
  p_activeScene[-1].fields.adjustHeight = panelDepth;
  sub_B2C2F8(p_activeScene, (System_Int32_array **)scene, v13, v14, v15, v16, v17, v18);
  monitor = (UnityEngine_Object_o *)p_activeScene->monitor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
  {
    if ( !*p_barBase )
      sub_B2C434(0LL, v34);
    MainMenuBarBase__SetActiveScene(*p_barBase, scene, kind, panelDepth, cam, v35);
  }
}


void __fastcall MainMenuBar__SetAllBtnAct(System_Action_o *act, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_41862D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_41862D8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
    sub_B2C434(Instance, v4);
  *(_QWORD *)&webViewBase->fields.mOldV1.fields.y = act;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&webViewBase->fields.mOldV1.fields.y,
    (System_Int32_array **)act,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetAlpha(float alpha, const MethodInfo *method)
{
  __int64 v2; // x1
  long double v3; // q8
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x19
  UnityEngine_Component_o *Component_WebViewObject; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *webViewBase; // x20

  v3 = *(long double *)&alpha;
  if ( (byte_41862C4 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, v2);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5);
    byte_41862C4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
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
                                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
        if ( Component_WebViewObject )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, long double))Component_WebViewObject->klass[1]._1.castClass)(
            Component_WebViewObject,
            Component_WebViewObject->klass[1]._1.declaringType,
            v3);
          return;
        }
      }
    }
    sub_B2C434(Component_WebViewObject, v8);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  MainMenuBarBase_o *v10; // x0

  if ( (byte_41862CE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    byte_41862CE = 1;
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
      sub_B2C434(0LL, v8);
    MainMenuBarBase__SetButtonActive(v10, kind, isActive, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetButtonKind(MainMenuBar_o *this, int32_t kind, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct MainMenuBarBase_o *v8; // x8

  if ( (byte_41862CB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    byte_41862CB = 1;
  }
  this->fields.panelDepth = kind;
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL);
  if ( v6 )
  {
    v8 = this->fields.barBase;
    if ( !v8 )
      sub_B2C434(v6, v7);
    v8->fields.kind = kind;
  }
}


void __fastcall MainMenuBar__SetDispBtnAct(int32_t kind, System_Action_o *act, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_41862D7 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, act);
    byte_41862D7 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B2C434(Instance, v6);
  MainMenuBarBase__SetDispBtnAct(Instance, kind, act, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetDispBtnColliderEnable(bool is_enable, int32_t kind, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_41862D6 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, *(_QWORD *)&kind);
    byte_41862D6 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B2C434(Instance, v6);
  MainMenuBarBase__SetDispBtnColliderEnable(Instance, is_enable, kind, v7);
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
  struct UnityEngine_GameObject_o **p_obj; // x22
  UnityEngine_Object_o *obj; // x23
  UnityEngine_Object_o *activeScene; // x23
  UnityEngine_Component_o *gameObject; // x0
  __int64 v17; // x1
  UnityEngine_Component_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Component_o *v19; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x24
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Transform_o *v28; // x24
  UnityEngine_Transform_o *transform; // x24
  int v30; // s0
  UnityEngine_Transform_o *v33; // x24
  int v34; // s0
  UnityEngine_Transform_o *v38; // x24
  int v39; // s0
  UnityEngine_GameObject_o *v42; // x24
  struct MainMenuBarBase_o *Component_srcLineSprite; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  const MethodInfo *v50; // x5
  UnityEngine_Object_o *barBase; // x21
  const MethodInfo *v52; // x2

  if ( (byte_41862CD & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___, isActive);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UICamera___, v8);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_GameObject___, v11);
    sub_B2C35C(&StringLiteral_4188/*"CommonUI/MainMenuBarPrefab"*/, v12);
    byte_41862CD = 1;
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
                                                                      (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
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
                                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
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
                                                                (System_String_o *)StringLiteral_4188/*"CommonUI/MainMenuBarPrefab"*/,
                                                                (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_GameObject___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v21 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         UIAtlas,
                                         (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          *p_obj = (struct UnityEngine_GameObject_o *)v21;
          sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.obj, v21, v22, v23, v24, v25, v26, v27);
          gameObject = (UnityEngine_Component_o *)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !v19 )
            goto LABEL_49;
          v28 = (UnityEngine_Transform_o *)gameObject;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v19, 0LL);
          if ( !v28 )
            goto LABEL_49;
          UnityEngine_Transform__set_parent(v28, (UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_zero(0LL);
          if ( !transform )
            goto LABEL_49;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v30, 0LL);
          gameObject = (UnityEngine_Component_o *)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          v33 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          *(UnityEngine_Quaternion_o *)&v34 = UnityEngine_Quaternion__get_identity(0LL);
          if ( !v33 )
            goto LABEL_49;
          UnityEngine_Transform__set_localRotation(v33, *(UnityEngine_Quaternion_o *)&v34, 0LL);
          gameObject = (UnityEngine_Component_o *)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          v38 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_one(0LL);
          if ( !v38 )
            goto LABEL_49;
          UnityEngine_Transform__set_localScale(v38, *(UnityEngine_Vector3_o *)&v39, 0LL);
          v42 = *p_obj;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v19, 0LL);
          if ( !gameObject )
            goto LABEL_49;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_layer(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !v42 )
            goto LABEL_49;
          UnityEngine_GameObject__set_layer(v42, (int32_t)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          Component_srcLineSprite = (struct MainMenuBarBase_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)gameObject,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___);
          this->fields.barBase = Component_srcLineSprite;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.barBase,
            (System_Int32_array **)Component_srcLineSprite,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49);
          gameObject = (UnityEngine_Component_o *)this->fields.barBase;
          if ( !gameObject )
            goto LABEL_49;
          MainMenuBarBase__SetActiveScene(
            (MainMenuBarBase_o *)gameObject,
            this->fields.activeScene,
            this->fields.panelDepth,
            *(&this->fields.panelDepth + 1),
            cam,
            v50);
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
      MainMenuBarBase__SetMenuActive((MainMenuBarBase_o *)gameObject, isActive, v52);
      return;
    }
LABEL_49:
    sub_B2C434(gameObject, v17);
  }
}


void __fastcall MainMenuBar__SetMenuBtnAct(System_Action_o *act, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_41862D5 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_41862D5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
    sub_B2C434(Instance, v4);
  *(_QWORD *)&webViewBase->fields.mOldV0.fields.x = act;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&webViewBase->fields.mOldV0,
    (System_Int32_array **)act,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetMenuBtnColliderEnable(bool isEnable, bool isGray, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_41862D4 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, isGray);
    byte_41862D4 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B2C434(Instance, v6);
  MainMenuBarBase__SetMenuBtnColliderEnable(Instance, isEnable, isGray, v7);
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

  if ( (byte_41862CC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, scene);
    byte_41862CC = 1;
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
    sub_B2C2F8(
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
      UnityEngine_Object__DestroyImmediate_35315108(v17, 0LL);
      this->fields.obj = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.obj, 0LL, v18, v19, v20, v21, v22, v23);
      this->fields.barBase = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.barBase, 0LL, v24, v25, v26, v27, v28, v29);
      MainMenuBar__SetMenuActive(this, 1, 0LL, v30);
    }
  }
}


void __fastcall MainMenuBar__SetSceneChangeFadeType(int32_t fadeType, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_41862D2 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_41862D2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
    sub_B2C434(Instance, v4);
  LODWORD(webViewBase->fields.mLastAlpha) = fadeType;
}


void __fastcall MainMenuBar__UpdateNoticeNumber(const MethodInfo *method)
{
  __int64 v1; // x1
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_41862D3 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v1);
    byte_41862D3 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B2C434(Instance, v3);
  MainMenuBarBase__UpdateNoticeNumber(Instance, v3);
}


bool __fastcall MainMenuBar__get_IsEnableOutSideCollider(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x19
  UnityEngine_Collider_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *webViewBase; // x20
  struct UIWidget_o *v8; // x8

  if ( (byte_41862BC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_41862BC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (UnityEngine_Collider_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
    return 0;
  if ( !Instance )
    goto LABEL_16;
  webViewBase = (UnityEngine_Object_o *)Instance->fields.webViewBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (UnityEngine_Collider_o *)UnityEngine_Object__op_Equality(webViewBase, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
    return 0;
  v8 = Instance->fields.webViewBase;
  if ( !v8 || (v4 = *(UnityEngine_Collider_o **)&v8->fields.finalAlpha) == 0LL )
LABEL_16:
    sub_B2C434(v4, v5);
  return UnityEngine_Collider__get_enabled(v4, 0LL);
}


bool __fastcall MainMenuBar__get_IsMenuBarActive(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x19
  MainMenuBarBase_o *v4; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *webViewBase; // x20

  if ( (byte_41862BD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_41862BD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (MainMenuBarBase_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
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
  v4 = (MainMenuBarBase_o *)Instance->fields.webViewBase;
  if ( !v4 )
LABEL_15:
    sub_B2C434(v4, v5);
  return MainMenuBarBase__get_IsMenuBarActive(v4, v5);
}


void __fastcall MainMenuBar__requestSelectedSceneChange(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  MainMenuBar_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_41862C9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_41862C9 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
  {
    v4 = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v4 )
      sub_B2C434(0LL, v5);
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

  if ( (byte_41862C7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_41862C7 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
  {
    v4 = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v4 )
      sub_B2C434(0LL, v5);
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

  if ( (byte_41862C8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_41862C8 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
  {
    v4 = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v4 )
      sub_B2C434(0LL, v5);
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
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_41862BE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v7);
    byte_41862BE = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_B2C434(v9, v10);
    MainMenuBar__SetResumeMenu((MainMenuBar_o *)Instance, scene, kind, depth, v11);
  }
}


void __fastcall MainMenuBar__setActiveScene(
        SceneRootComponent_o *scene,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x5

  if ( (byte_41862BF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, cam);
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5);
    byte_41862BF = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_B2C434(v7, v8);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, -1, cam, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__setActiveScene_22096200(
        SceneRootComponent_o *scene,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_41862C0 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&depth);
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v7);
    byte_41862C0 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_B2C434(v9, v10);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, depth, cam, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__setActiveScene_22096408(
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_Object_o *Instance; // x23
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5

  if ( (byte_41862C1 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v9);
    byte_41862C1 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v11 )
  {
    if ( !Instance )
      sub_B2C434(v11, v12);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, kind, depth, cam, v13);
  }
}


void __fastcall MainMenuBar__setButtonActive(bool isActive, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_41862C6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v3);
    byte_41862C6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_B2C434(v5, v6);
    MainMenuBar__SetButtonActive((MainMenuBar_o *)Instance, (int32_t)Instance->fields.basePanel, isActive, v7);
  }
}


void __fastcall MainMenuBar__setCloseHideMode(bool is_enable, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_41862C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_41862C5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
    sub_B2C434(Instance, v4);
  LOBYTE(webViewBase[1].klass) = is_enable;
  if ( is_enable )
    GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)webViewBase->fields.mRoot, -420.0, 0LL);
}


void __fastcall MainMenuBar__setKind(int32_t kind, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_41862C2 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v3);
    byte_41862C2 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_B2C434(v5, v6);
    MainMenuBar__SetButtonKind((MainMenuBar_o *)Instance, kind, v7);
  }
}


void __fastcall MainMenuBar__setMenuActive(bool isActive, UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_41862C3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, cam);
    sub_B2C35C(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5);
    byte_41862C3 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_B2C434(v7, v8);
    MainMenuBar__SetMenuActive((MainMenuBar_o *)Instance, isActive, cam, v9);
  }
}