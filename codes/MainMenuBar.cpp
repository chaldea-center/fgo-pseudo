void __fastcall MainMenuBar___ctor(MainMenuBar_o *this, const MethodInfo *method)
{
  if ( (byte_4A5A8B0 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar___ctor__);
    byte_4A5A8B0 = 1;
  }
  this->fields.panelDepth = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_MainMenuBar___ctor__);
}


void __fastcall MainMenuBar__FrameIn(bool is_force, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_4A5A8AE & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A8AE = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1B8880C(Instance, v4);
  MainMenuBarBase__FrameInOut(Instance, 1, is_force, v5);
}


void __fastcall MainMenuBar__FrameOut(bool is_force, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_4A5A8AF & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A8AF = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1B8880C(Instance, v4);
  MainMenuBarBase__FrameInOut(Instance, 0, is_force, v5);
}


void __fastcall MainMenuBar__RequestSelectedSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_4A5A8A6 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A8A6 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v5 = this->fields.barBase;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
    MainMenuBarBase__RequestSelectedSceneChange(v5, v4);
  }
}


void __fastcall MainMenuBar__RequestSelectedSignal(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_4A5A8A4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A8A4 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v5 = this->fields.barBase;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
    MainMenuBarBase__RequestSelectedSignal(v5, v4);
  }
}


void __fastcall MainMenuBar__RequestTerminalSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A5A8A5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A8A5 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL);
  if ( v4 )
  {
    if ( !this->fields.barBase )
      sub_1B8880C(v4, v5);
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
  __int64 v22; // x1
  const MethodInfo *v23; // x5

  if ( (byte_4A5A89F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A89F = 1;
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
    UnityEngine_Object__DestroyImmediate_69459568(obj, 0LL);
    this->fields.obj = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.obj, 0, v16, v17);
    *p_barBase = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.barBase, 0, v18, v19);
  }
  this->fields.activeScene = scene;
  p_activeScene = (ServantStatusBattleListViewItem_o *)&this->fields.activeScene;
  *(_DWORD *)&p_activeScene[-1].fields.isMine = kind;
  *((_DWORD *)&p_activeScene[-1].fields.isMine + 1) = panelDepth;
  sub_1B88554(p_activeScene, (int32_t)scene, v13, v14);
  monitor = (UnityEngine_Object_o *)p_activeScene->monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
  {
    if ( !*p_barBase )
      sub_1B8880C(0LL, v22);
    MainMenuBarBase__SetActiveScene(*p_barBase, scene, kind, panelDepth, cam, v23);
  }
}


void __fastcall MainMenuBar__SetAllBtnAct(System_Action_o *act, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  Il2CppClass *klass; // x8

  if ( (byte_4A5A8AD & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A8AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1B8880C(Instance, v4);
  klass->vtable[5].methodPtr = (Il2CppMethodPointer)act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&klass->vtable[5], (int32_t)act, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetAlpha(float alpha, const MethodInfo *method)
{
  long double v2; // q8
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Component_o *Component_object; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *klass; // x20

  v2 = *(long double *)&alpha;
  if ( (byte_4A5A899 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A899 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
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
                                                        (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
        if ( Component_object )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, long double))Component_object->klass[1]._1.castClass)(
            Component_object,
            Component_object->klass[1]._1.declaringType,
            v2);
          return;
        }
      }
    }
    sub_1B8880C(Component_object, v5);
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

  if ( (byte_4A5A8A3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A8A3 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v10 = this->fields.barBase;
    if ( !v10 )
      sub_1B8880C(0LL, v8);
    MainMenuBarBase__SetButtonActive(v10, kind, isActive, v9);
  }
}


void __fastcall MainMenuBar__SetButtonKind(MainMenuBar_o *this, int32_t kind, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct MainMenuBarBase_o *v8; // x8

  if ( (byte_4A5A8A0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A8A0 = 1;
  }
  this->fields.kind = kind;
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL);
  if ( v6 )
  {
    v8 = this->fields.barBase;
    if ( !v8 )
      sub_1B8880C(v6, v7);
    v8->fields.kind = kind;
  }
}


void __fastcall MainMenuBar__SetDispBtnAct(int32_t kind, System_Action_o *act, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A5A8AC & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A8AC = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1B8880C(Instance, v6);
  MainMenuBarBase__SetDispBtnAct(Instance, kind, act, v7);
}


void __fastcall MainMenuBar__SetDispBtnColliderEnable(bool is_enable, int32_t kind, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A5A8AB & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A8AB = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1B8880C(Instance, v6);
  MainMenuBarBase__SetDispBtnColliderEnable(Instance, is_enable, kind, v7);
}


void __fastcall MainMenuBar__SetMenuActive(
        MainMenuBar_o *this,
        bool isActive,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_obj; // x22
  UnityEngine_Object_o *obj; // x23
  UnityEngine_Object_o *activeScene; // x23
  __int64 gameObject; // x0
  __int64 v11; // x1
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  UnityEngine_Component_o *v13; // x23
  Il2CppObject *object; // x24
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Transform_o *v18; // x24
  UnityEngine_Transform_o *v19; // x24
  UnityEngine_Transform_o *v20; // x24
  UnityEngine_Transform_o *v21; // x24
  UnityEngine_GameObject_o *v22; // x24
  Il2CppObject *Component_object; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x5
  UnityEngine_Object_o *barBase; // x21
  const MethodInfo *v28; // x2

  if ( (byte_4A5A8A2 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UICamera___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1B885B0(&StringLiteral_4641/*"CommonUI/MainMenuBarPrefab"*/);
    byte_4A5A8A2 = 1;
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
          ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
        }
        else
        {
          if ( !cam )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0LL);
          if ( !gameObject )
            goto LABEL_49;
          ComponentInChildren_object__48719376 = UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)gameObject,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
        }
        v13 = (UnityEngine_Component_o *)ComponentInChildren_object__48719376;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
        {
          object = UnityEngine_Resources__Load_object_(
                     (System_String_o *)StringLiteral_4641/*"CommonUI/MainMenuBarPrefab"*/,
                     (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_GameObject___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v15 = UnityEngine_Object__Instantiate_object_(
                  object,
                  (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          *p_obj = (struct UnityEngine_GameObject_o *)v15;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.obj, (int32_t)v15, v16, v17);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !v13 )
            goto LABEL_49;
          v18 = (UnityEngine_Transform_o *)gameObject;
          gameObject = (__int64)UnityEngine_Component__get_transform(v13, 0LL);
          if ( !v18 )
            goto LABEL_49;
          UnityEngine_Transform__set_parent(v18, (UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v19 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4A55CE1 )
          {
            gameObject = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE1 = 1;
          }
          if ( !v19 )
            goto LABEL_49;
          UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v20 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4A55CE7 )
          {
            gameObject = sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
            byte_4A55CE7 = 1;
          }
          if ( !v20 )
            goto LABEL_49;
          UnityEngine_Transform__set_localRotation(
            v20,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v21 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4A55CE6 )
          {
            gameObject = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE6 = 1;
          }
          if ( !v21 )
            goto LABEL_49;
          UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          v22 = *p_obj;
          gameObject = (__int64)UnityEngine_Component__get_gameObject(v13, 0LL);
          if ( !gameObject )
            goto LABEL_49;
          gameObject = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !v22 )
            goto LABEL_49;
          UnityEngine_GameObject__set_layer(v22, gameObject, 0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___);
          this->fields.barBase = (struct MainMenuBarBase_o *)Component_object;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.barBase, (int32_t)Component_object, v24, v25);
          gameObject = (__int64)this->fields.barBase;
          if ( !gameObject )
            goto LABEL_49;
          MainMenuBarBase__SetActiveScene(
            (MainMenuBarBase_o *)gameObject,
            this->fields.activeScene,
            this->fields.kind,
            this->fields.panelDepth,
            cam,
            v26);
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
      MainMenuBarBase__SetMenuActive((MainMenuBarBase_o *)gameObject, isActive, v28);
      return;
    }
LABEL_49:
    sub_1B8880C(gameObject, v11);
  }
}


void __fastcall MainMenuBar__SetMenuBtnAct(System_Action_o *act, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  Il2CppClass *klass; // x8

  if ( (byte_4A5A8AA & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A8AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1B8880C(Instance, v4);
  klass->vtable[4].methodPtr = (Il2CppMethodPointer)act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&klass->vtable[4], (int32_t)act, v5, v6);
}


void __fastcall MainMenuBar__SetMenuBtnColliderEnable(bool isEnable, bool isGray, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A5A8A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A8A9 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1B8880C(Instance, v6);
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
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Object_o *obj; // x21
  UnityEngine_Object_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x3

  if ( (byte_4A5A8A1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A8A1 = 1;
  }
  activeScene = (UnityEngine_Object_o *)this->fields.activeScene;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeScene, (UnityEngine_Object_o *)scene, 0LL) )
  {
    this->fields.kind = kind;
    this->fields.panelDepth = panelDepth;
    this->fields.activeScene = scene;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.activeScene, (int32_t)scene, v10, v11);
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(obj, 0LL, 0LL) )
    {
      v13 = (UnityEngine_Object_o *)this->fields.obj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69459568(v13, 0LL);
      this->fields.obj = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.obj, 0, v14, v15);
      this->fields.barBase = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.barBase, 0, v16, v17);
      MainMenuBar__SetMenuActive(this, 1, 0LL, v18);
    }
  }
}


void __fastcall MainMenuBar__SetSceneChangeFadeType(int32_t fadeType, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppClass *klass; // x8

  if ( (byte_4A5A8A7 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A8A7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1B8880C(Instance, v4);
  LODWORD(klass->vtable[2].methodPtr) = fadeType;
}


void __fastcall MainMenuBar__UpdateNoticeNumber(const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4A5A8A8 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A8A8 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1B8880C(Instance, v2);
  MainMenuBarBase__UpdateNoticeNumber(Instance, v2);
}


bool __fastcall MainMenuBar__get_IsEnableOutSideCollider(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Collider_o *properties; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *klass; // x20
  UnityEngine_Object_c *v6; // x8

  if ( (byte_4A5A891 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A891 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
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
  v6 = Instance[2].klass;
  if ( !v6 || (properties = (UnityEngine_Collider_o *)v6->_1.properties) == 0LL )
LABEL_14:
    sub_1B8880C(properties, v3);
  return UnityEngine_Collider__get_enabled(properties, 0LL);
}


bool __fastcall MainMenuBar__get_IsMenuBarActive(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *v2; // x0
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *klass; // x20

  if ( (byte_4A5A892 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A892 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)v2 & 1) != 0 )
    return 0;
  if ( !Instance )
    goto LABEL_13;
  klass = (UnityEngine_Object_o *)Instance[2].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
    return 0;
  v2 = Instance[2].klass;
  if ( !v2 )
LABEL_13:
    sub_1B8880C(v2, v3);
  return MainMenuBarBase__get_IsMenuBarActive((MainMenuBarBase_o *)v2, v3);
}


void __fastcall MainMenuBar__requestSelectedSceneChange(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4A5A89E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A89E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v2 )
      sub_1B8880C(0LL, v3);
    MainMenuBar__RequestSelectedSceneChange((MainMenuBar_o *)v2, v3);
  }
}


void __fastcall MainMenuBar__requestSelectedSignal(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4A5A89C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A89C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v2 )
      sub_1B8880C(0LL, v3);
    MainMenuBar__RequestSelectedSignal((MainMenuBar_o *)v2, v3);
  }
}


void __fastcall MainMenuBar__requestTerminalSceneChange(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4A5A89D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A89D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v2 )
      sub_1B8880C(0LL, v3);
    MainMenuBar__RequestTerminalSceneChange((MainMenuBar_o *)v2, v3);
  }
}


void __fastcall MainMenuBar__resumeMenuBar(
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t depth,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4A5A893 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A893 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1B8880C(v8, v9);
    MainMenuBar__SetResumeMenu((MainMenuBar_o *)Instance, scene, kind, depth, v10);
  }
}


void __fastcall MainMenuBar__setActiveScene(
        SceneRootComponent_o *scene,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x5

  if ( (byte_4A5A894 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A894 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1B8880C(v6, v7);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, -1, cam, v8);
  }
}


void __fastcall MainMenuBar__setActiveScene_38406952(
        SceneRootComponent_o *scene,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5

  if ( (byte_4A5A895 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A895 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1B8880C(v8, v9);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, depth, cam, v10);
  }
}


void __fastcall MainMenuBar__setActiveScene_38407160(
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x23
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5

  if ( (byte_4A5A896 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A896 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v10 )
  {
    if ( !Instance )
      sub_1B8880C(v10, v11);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, kind, depth, cam, v12);
  }
}


void __fastcall MainMenuBar__setButtonActive(bool isActive, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4A5A89B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A89B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B8880C(v4, v5);
    MainMenuBar__SetButtonActive((MainMenuBar_o *)Instance, (int32_t)Instance[2].klass, isActive, v6);
  }
}


void __fastcall MainMenuBar__setCloseHideMode(bool is_enable, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppClass *klass; // x8

  if ( (byte_4A5A89A & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A89A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1B8880C(Instance, v4);
  LOBYTE(klass->vtable[5].method) = is_enable;
  if ( is_enable )
    GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)klass->_1.interopData, -420.0, 0LL);
}


void __fastcall MainMenuBar__setKind(int32_t kind, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4A5A897 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A897 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B8880C(v4, v5);
    MainMenuBar__SetButtonKind((MainMenuBar_o *)Instance, kind, v6);
  }
}


void __fastcall MainMenuBar__setMenuActive(bool isActive, UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4A5A898 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4A5A898 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1B8880C(v6, v7);
    MainMenuBar__SetMenuActive((MainMenuBar_o *)Instance, isActive, cam, v8);
  }
}