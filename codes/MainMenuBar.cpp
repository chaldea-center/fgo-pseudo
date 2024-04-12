void __fastcall MainMenuBar___ctor(MainMenuBar_o *this, const MethodInfo *method)
{
  if ( (byte_42AE668 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar___ctor__);
    byte_42AE668 = 1;
  }
  *(&this->fields.panelDepth + 1) = -1;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_MainMenuBar___ctor__);
}


void __fastcall MainMenuBar__FrameIn(bool is_force, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_42AE666 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE666 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B52A5C(Instance, v4);
  MainMenuBarBase__FrameInOut(Instance, 1, is_force, v5);
}


void __fastcall MainMenuBar__FrameOut(bool is_force, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_42AE667 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE667 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B52A5C(Instance, v4);
  MainMenuBarBase__FrameInOut(Instance, 0, is_force, v5);
}


void __fastcall MainMenuBar__RequestSelectedSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_42AE65E & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE65E = 1;
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
      sub_B52A5C(0LL, v4);
    MainMenuBarBase__RequestSelectedSceneChange(v5, v4);
  }
}


void __fastcall MainMenuBar__RequestSelectedSignal(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_42AE65C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE65C = 1;
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
      sub_B52A5C(0LL, v4);
    MainMenuBarBase__RequestSelectedSignal(v5, v4);
  }
}


void __fastcall MainMenuBar__RequestTerminalSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_42AE65D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE65D = 1;
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
      sub_B52A5C(v4, v5);
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

  if ( (byte_42AE657 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE657 = 1;
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
    UnityEngine_Object__DestroyImmediate_35617168(obj, 0LL);
    this->fields.obj = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.obj, 0LL, v20, v21, v22, v23, v24, v25);
    *p_barBase = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.barBase, 0LL, v26, v27, v28, v29, v30, v31);
  }
  this->fields.activeScene = scene;
  p_activeScene = (BattleServantConfConponent_o *)&this->fields.activeScene;
  *(_DWORD *)&p_activeScene[-1].fields.isOpenAfter = kind;
  p_activeScene[-1].fields.adjustHeight = panelDepth;
  sub_B52920(p_activeScene, (System_Int32_array **)scene, v13, v14, v15, v16, v17, v18);
  monitor = (UnityEngine_Object_o *)p_activeScene->monitor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
  {
    if ( !*p_barBase )
      sub_B52A5C(0LL, v34);
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

  if ( (byte_42AE665 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE665 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
    sub_B52A5C(Instance, v4);
  *(_QWORD *)&webViewBase->fields.mOldV1.fields.y = act;
  sub_B52920(
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
  long double v2; // q8
  WebViewManager_o *Instance; // x19
  UnityEngine_Component_o *Component_WebViewObject; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *webViewBase; // x20

  v2 = *(long double *)&alpha;
  if ( (byte_42AE651 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE651 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
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
                                                               (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
        if ( Component_WebViewObject )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, long double))Component_WebViewObject->klass[1]._1.castClass)(
            Component_WebViewObject,
            Component_WebViewObject->klass[1]._1.declaringType,
            v2);
          return;
        }
      }
    }
    sub_B52A5C(Component_WebViewObject, v5);
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

  if ( (byte_42AE65B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE65B = 1;
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
      sub_B52A5C(0LL, v8);
    MainMenuBarBase__SetButtonActive(v10, kind, isActive, v9);
  }
}


void __fastcall MainMenuBar__SetButtonKind(MainMenuBar_o *this, int32_t kind, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct MainMenuBarBase_o *v8; // x8

  if ( (byte_42AE658 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE658 = 1;
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
      sub_B52A5C(v6, v7);
    v8->fields.kind = kind;
  }
}


void __fastcall MainMenuBar__SetDispBtnAct(int32_t kind, System_Action_o *act, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_42AE664 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE664 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B52A5C(Instance, v6);
  MainMenuBarBase__SetDispBtnAct(Instance, kind, act, v7);
}


void __fastcall MainMenuBar__SetDispBtnColliderEnable(bool is_enable, int32_t kind, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_42AE663 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE663 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B52A5C(Instance, v6);
  MainMenuBarBase__SetDispBtnColliderEnable(Instance, is_enable, kind, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetMenuActive(
        MainMenuBar_o *this,
        bool isActive,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_obj; // x22
  UnityEngine_Object_o *obj; // x23
  UnityEngine_Object_o *activeScene; // x23
  UnityEngine_Component_o *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_Component_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Component_o *v13; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x24
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Transform_o *v22; // x24
  UnityEngine_Transform_o *transform; // x24
  int v24; // s0
  UnityEngine_Transform_o *v27; // x24
  int v28; // s0
  UnityEngine_Transform_o *v32; // x24
  int v33; // s0
  UnityEngine_GameObject_o *v36; // x24
  struct MainMenuBarBase_o *Component_srcLineSprite; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x5
  UnityEngine_Object_o *barBase; // x21
  const MethodInfo *v46; // x2

  if ( (byte_42AE65A & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UICamera___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_B52984(&StringLiteral_4226/*"CommonUI/MainMenuBarPrefab"*/);
    byte_42AE65A = 1;
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
                                                                      (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
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
                                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
        }
        v13 = ComponentInChildren_UIWidget;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
        {
          UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                                (System_String_o *)StringLiteral_4226/*"CommonUI/MainMenuBarPrefab"*/,
                                                                (const MethodInfo_1F7452C *)Method_UnityEngine_Resources_Load_GameObject___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v15 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         UIAtlas,
                                         (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          *p_obj = (struct UnityEngine_GameObject_o *)v15;
          sub_B52920((BattleServantConfConponent_o *)&this->fields.obj, v15, v16, v17, v18, v19, v20, v21);
          gameObject = (UnityEngine_Component_o *)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !v13 )
            goto LABEL_49;
          v22 = (UnityEngine_Transform_o *)gameObject;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v13, 0LL);
          if ( !v22 )
            goto LABEL_49;
          UnityEngine_Transform__set_parent(v22, (UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_zero(0LL);
          if ( !transform )
            goto LABEL_49;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v24, 0LL);
          gameObject = (UnityEngine_Component_o *)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          v27 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          *(UnityEngine_Quaternion_o *)&v28 = UnityEngine_Quaternion__get_identity(0LL);
          if ( !v27 )
            goto LABEL_49;
          UnityEngine_Transform__set_localRotation(v27, *(UnityEngine_Quaternion_o *)&v28, 0LL);
          gameObject = (UnityEngine_Component_o *)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          v32 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_one(0LL);
          if ( !v32 )
            goto LABEL_49;
          UnityEngine_Transform__set_localScale(v32, *(UnityEngine_Vector3_o *)&v33, 0LL);
          v36 = *p_obj;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v13, 0LL);
          if ( !gameObject )
            goto LABEL_49;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_layer(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !v36 )
            goto LABEL_49;
          UnityEngine_GameObject__set_layer(v36, (int32_t)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          Component_srcLineSprite = (struct MainMenuBarBase_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)gameObject,
                                                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___);
          this->fields.barBase = Component_srcLineSprite;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.barBase,
            (System_Int32_array **)Component_srcLineSprite,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43);
          gameObject = (UnityEngine_Component_o *)this->fields.barBase;
          if ( !gameObject )
            goto LABEL_49;
          MainMenuBarBase__SetActiveScene(
            (MainMenuBarBase_o *)gameObject,
            this->fields.activeScene,
            this->fields.panelDepth,
            *(&this->fields.panelDepth + 1),
            cam,
            v44);
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
      MainMenuBarBase__SetMenuActive((MainMenuBarBase_o *)gameObject, isActive, v46);
      return;
    }
LABEL_49:
    sub_B52A5C(gameObject, v11);
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

  if ( (byte_42AE662 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE662 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
    sub_B52A5C(Instance, v4);
  *(_QWORD *)&webViewBase->fields.mOldV0.fields.x = act;
  sub_B52920(
    (BattleServantConfConponent_o *)&webViewBase->fields.mOldV0,
    (System_Int32_array **)act,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall MainMenuBar__SetMenuBtnColliderEnable(bool isEnable, bool isGray, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_42AE661 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE661 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B52A5C(Instance, v6);
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

  if ( (byte_42AE659 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE659 = 1;
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
    sub_B52920(
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
      UnityEngine_Object__DestroyImmediate_35617168(v17, 0LL);
      this->fields.obj = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.obj, 0LL, v18, v19, v20, v21, v22, v23);
      this->fields.barBase = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.barBase, 0LL, v24, v25, v26, v27, v28, v29);
      MainMenuBar__SetMenuActive(this, 1, 0LL, v30);
    }
  }
}


void __fastcall MainMenuBar__SetSceneChangeFadeType(int32_t fadeType, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_42AE65F & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE65F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
    sub_B52A5C(Instance, v4);
  LODWORD(webViewBase->fields.mLastAlpha) = fadeType;
}


void __fastcall MainMenuBar__UpdateNoticeNumber(const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_42AE660 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE660 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_B52A5C(Instance, v2);
  MainMenuBarBase__UpdateNoticeNumber(Instance, v2);
}


bool __fastcall MainMenuBar__get_IsEnableOutSideCollider(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x19
  UnityEngine_Collider_o *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *webViewBase; // x20
  struct UIWidget_o *v6; // x8

  if ( (byte_42AE649 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE649 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v2 = (UnityEngine_Collider_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( ((unsigned __int8)v2 & 1) != 0 )
    return 0;
  if ( !Instance )
    goto LABEL_16;
  webViewBase = (UnityEngine_Object_o *)Instance->fields.webViewBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v2 = (UnityEngine_Collider_o *)UnityEngine_Object__op_Equality(webViewBase, 0LL, 0LL);
  if ( ((unsigned __int8)v2 & 1) != 0 )
    return 0;
  v6 = Instance->fields.webViewBase;
  if ( !v6 || (v2 = *(UnityEngine_Collider_o **)&v6->fields.finalAlpha) == 0LL )
LABEL_16:
    sub_B52A5C(v2, v3);
  return UnityEngine_Collider__get_enabled(v2, 0LL);
}


bool __fastcall MainMenuBar__get_IsMenuBarActive(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x19
  MainMenuBarBase_o *v2; // x0
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *webViewBase; // x20

  if ( (byte_42AE64A & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE64A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v2 = (MainMenuBarBase_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( ((unsigned __int8)v2 & 1) != 0 )
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
  v2 = (MainMenuBarBase_o *)Instance->fields.webViewBase;
  if ( !v2 )
LABEL_15:
    sub_B52A5C(v2, v3);
  return MainMenuBarBase__get_IsMenuBarActive(v2, v3);
}


void __fastcall MainMenuBar__requestSelectedSceneChange(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  MainMenuBar_o *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_42AE656 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE656 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
  {
    v2 = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v2 )
      sub_B52A5C(0LL, v3);
    MainMenuBar__RequestSelectedSceneChange(v2, v3);
  }
}


void __fastcall MainMenuBar__requestSelectedSignal(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  MainMenuBar_o *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_42AE654 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE654 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
  {
    v2 = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v2 )
      sub_B52A5C(0LL, v3);
    MainMenuBar__RequestSelectedSignal(v2, v3);
  }
}


void __fastcall MainMenuBar__requestTerminalSceneChange(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  MainMenuBar_o *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_42AE655 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE655 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
  {
    v2 = (MainMenuBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v2 )
      sub_B52A5C(0LL, v3);
    MainMenuBar__RequestTerminalSceneChange(v2, v3);
  }
}


void __fastcall MainMenuBar__resumeMenuBar(
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t depth,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_42AE64B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE64B = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_B52A5C(v8, v9);
    MainMenuBar__SetResumeMenu((MainMenuBar_o *)Instance, scene, kind, depth, v10);
  }
}


void __fastcall MainMenuBar__setActiveScene(
        SceneRootComponent_o *scene,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x5

  if ( (byte_42AE64C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE64C = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !Instance )
      sub_B52A5C(v6, v7);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, -1, cam, v8);
  }
}


void __fastcall MainMenuBar__setActiveScene_22211648(
        SceneRootComponent_o *scene,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5

  if ( (byte_42AE64D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE64D = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_B52A5C(v8, v9);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, depth, cam, v10);
  }
}


void __fastcall MainMenuBar__setActiveScene_22211856(
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x23
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5

  if ( (byte_42AE64E & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE64E = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v10 )
  {
    if ( !Instance )
      sub_B52A5C(v10, v11);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, kind, depth, cam, v12);
  }
}


void __fastcall MainMenuBar__setButtonActive(bool isActive, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_42AE653 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE653 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B52A5C(v4, v5);
    MainMenuBar__SetButtonActive((MainMenuBar_o *)Instance, (int32_t)Instance->fields.basePanel, isActive, v6);
  }
}


void __fastcall MainMenuBar__setCloseHideMode(bool is_enable, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_42AE652 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE652 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
    sub_B52A5C(Instance, v4);
  LOBYTE(webViewBase[1].klass) = is_enable;
  if ( is_enable )
    GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)webViewBase->fields.mRoot, -420.0, 0LL);
}


void __fastcall MainMenuBar__setKind(int32_t kind, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_42AE64F & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE64F = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B52A5C(v4, v5);
    MainMenuBar__SetButtonKind((MainMenuBar_o *)Instance, kind, v6);
  }
}


void __fastcall MainMenuBar__setMenuActive(bool isActive, UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_42AE650 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_42AE650 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !Instance )
      sub_B52A5C(v6, v7);
    MainMenuBar__SetMenuActive((MainMenuBar_o *)Instance, isActive, cam, v8);
  }
}