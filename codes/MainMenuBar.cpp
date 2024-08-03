void __fastcall MainMenuBar___ctor(MainMenuBar_o *this, const MethodInfo *method)
{
  if ( (byte_49FBB76 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar___ctor__, method);
    byte_49FBB76 = 1;
  }
  this->fields.panelDepth = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_MainMenuBar___ctor__);
}


void __fastcall MainMenuBar__FrameIn(bool is_force, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v4; // x3

  if ( (byte_49FBB74 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_49FBB74 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1B64324(Instance);
  MainMenuBarBase__FrameInOut(Instance, 1, is_force, v4);
}


void __fastcall MainMenuBar__FrameOut(bool is_force, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v4; // x3

  if ( (byte_49FBB75 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_49FBB75 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1B64324(Instance);
  MainMenuBarBase__FrameInOut(Instance, 0, is_force, v4);
}


void __fastcall MainMenuBar__RequestSelectedSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_49FBB6C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FBB6C = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v5 = this->fields.barBase;
    if ( !v5 )
      sub_1B64324(0LL);
    MainMenuBarBase__RequestSelectedSceneChange(v5, v4);
  }
}


void __fastcall MainMenuBar__RequestSelectedSignal(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_49FBB6A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FBB6A = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v5 = this->fields.barBase;
    if ( !v5 )
      sub_1B64324(0LL);
    MainMenuBarBase__RequestSelectedSignal(v5, v4);
  }
}


void __fastcall MainMenuBar__RequestTerminalSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49FBB6B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FBB6B = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL);
  if ( v4 )
  {
    if ( !this->fields.barBase )
      sub_1B64324(v4);
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
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_Object_o *obj; // x26
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  ServantStatusBattleListViewItem_o *p_activeScene; // x24
  UnityEngine_Object_o *monitor; // x24
  const MethodInfo *v22; // x5

  if ( (byte_49FBB65 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, scene);
    byte_49FBB65 = 1;
  }
  p_barBase = &this->fields.barBase;
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_69127924(obj, 0LL);
    this->fields.obj = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.obj, 0, v16, v17);
    *p_barBase = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.barBase, 0, v18, v19);
  }
  this->fields.activeScene = scene;
  p_activeScene = (ServantStatusBattleListViewItem_o *)&this->fields.activeScene;
  *(_DWORD *)&p_activeScene[-1].fields.isMine = kind;
  *((_DWORD *)&p_activeScene[-1].fields.isMine + 1) = panelDepth;
  sub_1B6406C(p_activeScene, (int32_t)scene, v13, v14);
  monitor = (UnityEngine_Object_o *)p_activeScene->monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
  {
    if ( !*p_barBase )
      sub_1B64324(0LL);
    MainMenuBarBase__SetActiveScene(*p_barBase, scene, kind, panelDepth, cam, v22);
  }
}


void __fastcall MainMenuBar__SetAllBtnAct(System_Action_o *act, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  Il2CppClass *klass; // x8

  if ( (byte_49FBB73 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_49FBB73 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1B64324(Instance);
  klass->vtable[5].methodPtr = (Il2CppMethodPointer)act;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&klass->vtable[5], (int32_t)act, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetAlpha(float alpha, const MethodInfo *method)
{
  __int64 v2; // x1
  long double v3; // q8
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *klass; // x20

  v3 = *(long double *)&alpha;
  if ( (byte_49FBB5F & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIPanel___, v2);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5);
    byte_49FBB5F = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    if ( Instance )
    {
      klass = (UnityEngine_Object_o *)Instance[2].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
        return;
      Component_object = (UnityEngine_Component_o *)Instance[2].klass;
      if ( Component_object )
      {
        Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                        Component_object,
                                                        (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
        if ( Component_object )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, long double))Component_object->klass[1]._1.castClass)(
            Component_object,
            Component_object->klass[1]._1.declaringType,
            v3);
          return;
        }
      }
    }
    sub_1B64324(Component_object);
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

  if ( (byte_49FBB69 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    byte_49FBB69 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v9 = this->fields.barBase;
    if ( !v9 )
      sub_1B64324(0LL);
    MainMenuBarBase__SetButtonActive(v9, kind, isActive, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetButtonKind(MainMenuBar_o *this, int32_t kind, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x21
  _BOOL8 v6; // x0
  struct MainMenuBarBase_o *v7; // x8

  if ( (byte_49FBB66 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    byte_49FBB66 = 1;
  }
  this->fields.kind = kind;
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL);
  if ( v6 )
  {
    v7 = this->fields.barBase;
    if ( !v7 )
      sub_1B64324(v6);
    v7->fields.kind = kind;
  }
}


void __fastcall MainMenuBar__SetDispBtnAct(int32_t kind, System_Action_o *act, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FBB72 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, act);
    byte_49FBB72 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1B64324(Instance);
  MainMenuBarBase__SetDispBtnAct(Instance, kind, act, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetDispBtnColliderEnable(bool is_enable, int32_t kind, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FBB71 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, *(_QWORD *)&kind);
    byte_49FBB71 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1B64324(Instance);
  MainMenuBarBase__SetDispBtnColliderEnable(Instance, is_enable, kind, v6);
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
  __int64 gameObject; // x0
  Il2CppObject *ComponentInChildren_object__48431348; // x0
  UnityEngine_Component_o *v18; // x23
  Il2CppObject *object; // x24
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_Transform_o *v23; // x24
  __int64 v24; // x1
  UnityEngine_Transform_o *v25; // x24
  __int64 v26; // x1
  UnityEngine_Transform_o *v27; // x24
  __int64 v28; // x1
  UnityEngine_Transform_o *v29; // x24
  UnityEngine_GameObject_o *v30; // x24
  Il2CppObject *Component_object; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // x5
  UnityEngine_Object_o *barBase; // x21
  const MethodInfo *v36; // x2

  if ( (byte_49FBB68 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___, isActive);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UICamera___, v8);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_GameObject___, v11);
    sub_1B640C8(&StringLiteral_4618/*"CommonUI/MainMenuBarPrefab"*/, v12);
    byte_49FBB68 = 1;
  }
  if ( isActive )
  {
    p_obj = &this->fields.obj;
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(obj, 0LL, 0LL) )
    {
      activeScene = (UnityEngine_Object_o *)this->fields.activeScene;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(activeScene, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
        if ( (gameObject & 1) != 0 )
        {
          gameObject = (__int64)this->fields.activeScene;
          if ( !gameObject )
            goto LABEL_49;
          ComponentInChildren_object__48431348 = UnityEngine_Component__GetComponentInChildren_object__48431348(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
        }
        else
        {
          if ( !cam )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0LL);
          if ( !gameObject )
            goto LABEL_49;
          ComponentInChildren_object__48431348 = UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)gameObject,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
        }
        v18 = (UnityEngine_Component_o *)ComponentInChildren_object__48431348;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL) )
        {
          object = UnityEngine_Resources__Load_object_(
                     (System_String_o *)StringLiteral_4618/*"CommonUI/MainMenuBarPrefab"*/,
                     (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_GameObject___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v20 = UnityEngine_Object__Instantiate_object_(
                  object,
                  (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          *p_obj = (struct UnityEngine_GameObject_o *)v20;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.obj, (int32_t)v20, v21, v22);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !v18 )
            goto LABEL_49;
          v23 = (UnityEngine_Transform_o *)gameObject;
          gameObject = (__int64)UnityEngine_Component__get_transform(v18, 0LL);
          if ( !v23 )
            goto LABEL_49;
          UnityEngine_Transform__set_parent(v23, (UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v25 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_49F7111 )
          {
            gameObject = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v24);
            byte_49F7111 = 1;
          }
          if ( !v25 )
            goto LABEL_49;
          UnityEngine_Transform__set_localPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v27 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_49F7117 )
          {
            gameObject = sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v26);
            byte_49F7117 = 1;
          }
          if ( !v27 )
            goto LABEL_49;
          UnityEngine_Transform__set_localRotation(
            v27,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v29 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_49F7116 )
          {
            gameObject = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v28);
            byte_49F7116 = 1;
          }
          if ( !v29 )
            goto LABEL_49;
          UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          v30 = *p_obj;
          gameObject = (__int64)UnityEngine_Component__get_gameObject(v18, 0LL);
          if ( !gameObject )
            goto LABEL_49;
          gameObject = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !v30 )
            goto LABEL_49;
          UnityEngine_GameObject__set_layer(v30, gameObject, 0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___);
          this->fields.barBase = (struct MainMenuBarBase_o *)Component_object;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.barBase, (int32_t)Component_object, v32, v33);
          gameObject = (__int64)this->fields.barBase;
          if ( !gameObject )
            goto LABEL_49;
          MainMenuBarBase__SetActiveScene(
            (MainMenuBarBase_o *)gameObject,
            this->fields.activeScene,
            this->fields.kind,
            this->fields.panelDepth,
            cam,
            v34);
        }
      }
    }
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.barBase;
    if ( gameObject )
    {
      MainMenuBarBase__SetMenuActive((MainMenuBarBase_o *)gameObject, isActive, v36);
      return;
    }
LABEL_49:
    sub_1B64324(gameObject);
  }
}


void __fastcall MainMenuBar__SetMenuBtnAct(System_Action_o *act, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  Il2CppClass *klass; // x8

  if ( (byte_49FBB70 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_49FBB70 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1B64324(Instance);
  klass->vtable[4].methodPtr = (Il2CppMethodPointer)act;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&klass->vtable[4], (int32_t)act, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetMenuBtnColliderEnable(bool isEnable, bool isGray, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FBB6F & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, isGray);
    byte_49FBB6F = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1B64324(Instance);
  MainMenuBarBase__SetMenuBtnColliderEnable(Instance, isEnable, isGray, v6);
}


void __fastcall MainMenuBar__SetResumeMenu(
        MainMenuBar_o *this,
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t panelDepth,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeScene; // x24
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Object_o *obj; // x21
  UnityEngine_Object_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x3

  if ( (byte_49FBB67 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, scene);
    byte_49FBB67 = 1;
  }
  activeScene = (UnityEngine_Object_o *)this->fields.activeScene;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeScene, (UnityEngine_Object_o *)scene, 0LL) )
  {
    this->fields.kind = kind;
    this->fields.panelDepth = panelDepth;
    this->fields.activeScene = scene;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.activeScene, (int32_t)scene, v10, v11);
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(obj, 0LL, 0LL) )
    {
      v13 = (UnityEngine_Object_o *)this->fields.obj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69127924(v13, 0LL);
      this->fields.obj = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.obj, 0, v14, v15);
      this->fields.barBase = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.barBase, 0, v16, v17);
      MainMenuBar__SetMenuActive(this, 1, 0LL, v18);
    }
  }
}


void __fastcall MainMenuBar__SetSceneChangeFadeType(int32_t fadeType, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppClass *klass; // x8

  if ( (byte_49FBB6D & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_49FBB6D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1B64324(Instance);
  LODWORD(klass->vtable[2].methodPtr) = fadeType;
}


void __fastcall MainMenuBar__UpdateNoticeNumber(const MethodInfo *method)
{
  __int64 v1; // x1
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_49FBB6E & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v1);
    byte_49FBB6E = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1B64324(Instance);
  MainMenuBarBase__UpdateNoticeNumber(Instance, v3);
}


bool __fastcall MainMenuBar__get_IsEnableOutSideCollider(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Collider_o *properties; // x0
  UnityEngine_Object_o *klass; // x20
  UnityEngine_Object_c *v7; // x8

  if ( (byte_49FBB57 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_49FBB57 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  properties = (UnityEngine_Collider_o *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)properties & 1) != 0 )
    return 0;
  if ( !Instance )
    goto LABEL_14;
  klass = (UnityEngine_Object_o *)Instance[2].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  properties = (UnityEngine_Collider_o *)UnityEngine_Object__op_Equality(klass, 0LL, 0LL);
  if ( ((unsigned __int8)properties & 1) != 0 )
    return 0;
  v7 = Instance[2].klass;
  if ( !v7 || (properties = (UnityEngine_Collider_o *)v7->_1.properties) == 0LL )
LABEL_14:
    sub_1B64324(properties);
  return UnityEngine_Collider__get_enabled(properties, 0LL);
}


bool __fastcall MainMenuBar__get_IsMenuBarActive(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *v4; // x0
  UnityEngine_Object_o *klass; // x20
  const MethodInfo *v6; // x1

  if ( (byte_49FBB58 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_49FBB58 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
    return 0;
  if ( !Instance )
    goto LABEL_13;
  klass = (UnityEngine_Object_o *)Instance[2].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
    return 0;
  v4 = Instance[2].klass;
  if ( !v4 )
LABEL_13:
    sub_1B64324(v4);
  return MainMenuBarBase__get_IsMenuBarActive((MainMenuBarBase_o *)v4, v6);
}


void __fastcall MainMenuBar__requestSelectedSceneChange(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49FBB64 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_49FBB64 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v4 )
      sub_1B64324(0LL);
    MainMenuBar__RequestSelectedSceneChange((MainMenuBar_o *)v4, v5);
  }
}


void __fastcall MainMenuBar__requestSelectedSignal(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49FBB62 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_49FBB62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v4 )
      sub_1B64324(0LL);
    MainMenuBar__RequestSelectedSignal((MainMenuBar_o *)v4, v5);
  }
}


void __fastcall MainMenuBar__requestTerminalSceneChange(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49FBB63 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_49FBB63 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v4 )
      sub_1B64324(0LL);
    MainMenuBar__RequestTerminalSceneChange((MainMenuBar_o *)v4, v5);
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
  Il2CppObject *Instance; // x22
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x4

  if ( (byte_49FBB59 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v7);
    byte_49FBB59 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_1B64324(v9);
    MainMenuBar__SetResumeMenu((MainMenuBar_o *)Instance, scene, kind, depth, v10);
  }
}


void __fastcall MainMenuBar__setActiveScene(
        SceneRootComponent_o *scene,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x5

  if ( (byte_49FBB5A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, cam);
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5);
    byte_49FBB5A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1B64324(v7);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, -1, cam, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__setActiveScene_38092532(
        SceneRootComponent_o *scene,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x5

  if ( (byte_49FBB5B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&depth);
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v7);
    byte_49FBB5B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_1B64324(v9);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, depth, cam, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__setActiveScene_38092740(
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Instance; // x23
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x5

  if ( (byte_49FBB5C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v9);
    byte_49FBB5C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v11 )
  {
    if ( !Instance )
      sub_1B64324(v11);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, kind, depth, cam, v12);
  }
}


void __fastcall MainMenuBar__setButtonActive(bool isActive, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FBB61 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v3);
    byte_49FBB61 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B64324(v5);
    MainMenuBar__SetButtonActive((MainMenuBar_o *)Instance, (int32_t)Instance[2].klass, isActive, v6);
  }
}


void __fastcall MainMenuBar__setCloseHideMode(bool is_enable, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppClass *klass; // x8

  if ( (byte_49FBB60 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_49FBB60 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1B64324(Instance);
  LOBYTE(klass->vtable[5].method) = is_enable;
  if ( is_enable )
    GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)klass->_1.interopData, -420.0, 0LL);
}


void __fastcall MainMenuBar__setKind(int32_t kind, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FBB5D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v3);
    byte_49FBB5D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B64324(v5);
    MainMenuBar__SetButtonKind((MainMenuBar_o *)Instance, kind, v6);
  }
}


void __fastcall MainMenuBar__setMenuActive(bool isActive, UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_49FBB5E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, cam);
    sub_1B640C8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5);
    byte_49FBB5E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1B64324(v7);
    MainMenuBar__SetMenuActive((MainMenuBar_o *)Instance, isActive, cam, v8);
  }
}