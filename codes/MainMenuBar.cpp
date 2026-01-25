void MainMenuBar___ctor(MainMenuBar_o *this, const MethodInfo *method)
{
  if ( (byte_4CEDDF1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_MainMenuBar___ctor__);
    byte_4CEDDF1 = 1;
  }
  this->fields.panelDepth = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A8CA90 *)Method_SingletonMonoBehaviour_MainMenuBar___ctor__);
}


void MainMenuBar__ClearSummonBalloonClickAction(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct MainMenuBarBase_o *v12; // x8

  if ( (byte_4CEDDF0 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDDF0 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(barBase, 0, 0);
  if ( v4 )
  {
    v12 = this->fields.barBase;
    if ( !v12 )
      sub_1C7BD40(v4, v5);
    v12->fields.OnClickBalloonAction = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v12->fields.OnClickBalloonAction, 0, v6, v7, v8, v9, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBar__FrameIn(bool is_force, const MethodInfo *method)
{
  MainMenuBarBase_o *MainMenuBarBase; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  MainMenuBarBase = MainMenuBar__GetMainMenuBarBase((const MethodInfo *)is_force);
  if ( !MainMenuBarBase )
    sub_1C7BD40(0, v4);
  MainMenuBarBase__FrameInOut(MainMenuBarBase, 1, is_force, v5);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBar__FrameOut(bool is_force, const MethodInfo *method)
{
  MainMenuBarBase_o *MainMenuBarBase; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  MainMenuBarBase = MainMenuBar__GetMainMenuBarBase((const MethodInfo *)is_force);
  if ( !MainMenuBarBase )
    sub_1C7BD40(0, v4);
  MainMenuBarBase__FrameInOut(MainMenuBarBase, 0, is_force, v5);
}


MainMenuBarBase_o *MainMenuBar__GetMainMenuBarBase(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4CEDDD7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4CEDDD7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v2);
  return (MainMenuBarBase_o *)Instance[3].klass;
}


void MainMenuBar__RegisterSummonBalloonClickAction(System_Action_int__bool__o *callback, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  Il2CppObject *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CEDDE5 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4CEDDE5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v4 )
      sub_1C7BD40(0, v5);
    MainMenuBar__SetSummonBalloonClickAction((MainMenuBar_o *)v4, callback, v6);
  }
}


void MainMenuBar__RequestSelectedSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_4CEDDEE & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDDEE = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0, 0) )
  {
    v5 = this->fields.barBase;
    if ( !v5 )
      sub_1C7BD40(0, v4);
    MainMenuBarBase__RequestSelectedSceneChange(v5, v4);
  }
}


void MainMenuBar__RequestSelectedSignal(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_4CEDDEC & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDDEC = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0, 0) )
  {
    v5 = this->fields.barBase;
    if ( !v5 )
      sub_1C7BD40(0, v4);
    MainMenuBarBase__RequestSelectedSignal(v5, v4);
  }
}


void MainMenuBar__RequestTerminalSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CEDDED & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDDED = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(barBase, 0, 0);
  if ( v4 )
  {
    if ( !this->fields.barBase )
      sub_1C7BD40(v4, v5);
    MainMenuBarBase__RequestTerminalSceneChange((MainMenuBarBase_o *)v4, v5);
  }
}


void MainMenuBar__SetActiveScene(
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
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  UnityEngine_Object_o *obj; // x26
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  GrandQuestFolderBoardItem_o *p_activeScene; // x24
  UnityEngine_Object_o *monitor; // x24
  __int64 v34; // x1
  const MethodInfo *v35; // x5

  if ( (byte_4CEDDE7 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDDE7 = 1;
  }
  p_barBase = &this->fields.barBase;
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0, 0) )
  {
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_71870336(obj, 0);
    this->fields.obj = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.obj, 0, v20, v21, v22, v23, v24, v25);
    *p_barBase = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.barBase, 0, v26, v27, v28, v29, v30, v31);
  }
  this->fields.activeScene = scene;
  p_activeScene = (GrandQuestFolderBoardItem_o *)&this->fields.activeScene;
  LODWORD(p_activeScene[-1].fields._ClosedMessage_k__BackingField) = kind;
  HIDWORD(p_activeScene[-1].fields._ClosedMessage_k__BackingField) = panelDepth;
  sub_1C7BA8C(p_activeScene, (int32_t)scene, v13, v14, v15, v16, v17, v18);
  monitor = (UnityEngine_Object_o *)p_activeScene->monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
  {
    if ( !*p_barBase )
      sub_1C7BD40(0, v34);
    MainMenuBarBase__SetActiveScene(*p_barBase, scene, kind, panelDepth, cam, v35);
  }
}


void MainMenuBar__SetAllBtnAct(System_Action_o *act, const MethodInfo *method)
{
  MainMenuBarBase_o *MainMenuBarBase; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  MainMenuBarBase = MainMenuBar__GetMainMenuBarBase((const MethodInfo *)act);
  if ( !MainMenuBarBase )
    sub_1C7BD40(0, v4);
  MainMenuBarBase->fields.mAllBtnAct = act;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&MainMenuBarBase->fields.mAllBtnAct, (int32_t)act, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBar__SetAlpha(float alpha, const MethodInfo *method)
{
  long double v2; // q8
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Component_o *Component_object; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *klass; // x20

  v2 = *(long double *)&alpha;
  if ( (byte_4CEDDE0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4CEDDE0 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    if ( Instance )
    {
      klass = (UnityEngine_Object_o *)Instance[2].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(klass, 0, 0) )
        return;
      Component_object = (UnityEngine_Component_o *)Instance[2].klass;
      if ( Component_object )
      {
        Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                        Component_object,
                                                        (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
        if ( Component_object )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, long double))Component_object->klass[1]._1.element_class)(
            Component_object,
            Component_object->klass[1]._1.castClass,
            v2);
          return;
        }
      }
    }
    sub_1C7BD40(Component_object, v5);
  }
}


void MainMenuBar__SetButtonActive(MainMenuBar_o *this, int32_t kind, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  MainMenuBarBase_o *v10; // x0

  if ( (byte_4CEDDEB & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDDEB = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0, 0) )
  {
    v10 = this->fields.barBase;
    if ( !v10 )
      sub_1C7BD40(0, v8);
    MainMenuBarBase__SetButtonActive(v10, kind, isActive, v9);
  }
}


void MainMenuBar__SetButtonKind(MainMenuBar_o *this, int32_t kind, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct MainMenuBarBase_o *v8; // x8

  if ( (byte_4CEDDE8 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDDE8 = 1;
  }
  this->fields.kind = kind;
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(barBase, 0, 0);
  if ( v6 )
  {
    v8 = this->fields.barBase;
    if ( !v8 )
      sub_1C7BD40(v6, v7);
    v8->fields.kind = kind;
  }
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBar__SetDispBtnAct(int32_t kind, System_Action_o *act, const MethodInfo *method)
{
  MainMenuBarBase_o *MainMenuBarBase; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  MainMenuBarBase = MainMenuBar__GetMainMenuBarBase(*(const MethodInfo **)&kind);
  if ( !MainMenuBarBase )
    sub_1C7BD40(0, v6);
  MainMenuBarBase__SetDispBtnAct(MainMenuBarBase, kind, act, v7);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBar__SetDispBtnColliderEnable(bool is_enable, int32_t kind, const MethodInfo *method)
{
  MainMenuBarBase_o *MainMenuBarBase; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  MainMenuBarBase = MainMenuBar__GetMainMenuBarBase((const MethodInfo *)is_enable);
  if ( !MainMenuBarBase )
    sub_1C7BD40(0, v6);
  MainMenuBarBase__SetDispBtnColliderEnable(MainMenuBarBase, is_enable, kind, v7);
}


void MainMenuBar__SetMenuActive(
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
  Il2CppObject *ComponentInChildren_object__51801640; // x0
  UnityEngine_Component_o *v13; // x23
  Il2CppObject *object; // x24
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_Transform_o *v22; // x24
  UnityEngine_Transform_o *v23; // x24
  UnityEngine_Transform_o *v24; // x24
  UnityEngine_Transform_o *v25; // x24
  UnityEngine_GameObject_o *v26; // x24
  Il2CppObject *Component_object; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  const MethodInfo *v34; // x5
  UnityEngine_Object_o *barBase; // x21
  const MethodInfo *v36; // x2

  if ( (byte_4CEDDEA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UICamera___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C7BAE8(&StringLiteral_4615/*"CommonUI/MainMenuBarPrefab"*/);
    byte_4CEDDEA = 1;
  }
  if ( isActive )
  {
    p_obj = &this->fields.obj;
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(obj, 0, 0) )
    {
      activeScene = (UnityEngine_Object_o *)this->fields.activeScene;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(activeScene, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0, 0);
        if ( (gameObject & 1) != 0 )
        {
          gameObject = (__int64)this->fields.activeScene;
          if ( !gameObject )
            goto LABEL_49;
          ComponentInChildren_object__51801640 = UnityEngine_Component__GetComponentInChildren_object__51801640(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
        }
        else
        {
          if ( !cam )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0);
          if ( !gameObject )
            goto LABEL_49;
          ComponentInChildren_object__51801640 = UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)gameObject,
                                                   (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
        }
        v13 = (UnityEngine_Component_o *)ComponentInChildren_object__51801640;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0) )
        {
          object = UnityEngine_Resources__Load_object_(
                     (System_String_o *)StringLiteral_4615/*"CommonUI/MainMenuBarPrefab"*/,
                     (const MethodInfo_320C160 *)Method_UnityEngine_Resources_Load_GameObject___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v15 = UnityEngine_Object__Instantiate_object_(
                  object,
                  (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          *p_obj = (struct UnityEngine_GameObject_o *)v15;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.obj, (int32_t)v15, v16, v17, v18, v19, v20, v21);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          if ( !v13 )
            goto LABEL_49;
          v22 = (UnityEngine_Transform_o *)gameObject;
          gameObject = (__int64)UnityEngine_Component__get_transform(v13, 0);
          if ( !v22 )
            goto LABEL_49;
          UnityEngine_Transform__set_parent(v22, (UnityEngine_Transform_o *)gameObject, 0);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          v23 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4CE7E59 )
          {
            gameObject = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
            byte_4CE7E59 = 1;
          }
          if ( !v23 )
            goto LABEL_49;
          UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          v24 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4CE7E5F )
          {
            gameObject = sub_1C7BAE8(&UnityEngine_Quaternion_TypeInfo);
            byte_4CE7E5F = 1;
          }
          if ( !v24 )
            goto LABEL_49;
          UnityEngine_Transform__set_localRotation(
            v24,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          v25 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4CE7E5E )
          {
            gameObject = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
            byte_4CE7E5E = 1;
          }
          if ( !v25 )
            goto LABEL_49;
          UnityEngine_Transform__set_localScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          v26 = *p_obj;
          gameObject = (__int64)UnityEngine_Component__get_gameObject(v13, 0);
          if ( !gameObject )
            goto LABEL_49;
          gameObject = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0);
          if ( !v26 )
            goto LABEL_49;
          UnityEngine_GameObject__set_layer(v26, gameObject, 0);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___);
          this->fields.barBase = (struct MainMenuBarBase_o *)Component_object;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.barBase,
            (int32_t)Component_object,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
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
  if ( UnityEngine_Object__op_Inequality(barBase, 0, 0) )
  {
    gameObject = (__int64)this->fields.barBase;
    if ( gameObject )
    {
      MainMenuBarBase__SetMenuActive((MainMenuBarBase_o *)gameObject, isActive, v36);
      return;
    }
LABEL_49:
    sub_1C7BD40(gameObject, v11);
  }
}


void MainMenuBar__SetMenuBtnAct(System_Action_o *act, const MethodInfo *method)
{
  MainMenuBarBase_o *MainMenuBarBase; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  MainMenuBarBase = MainMenuBar__GetMainMenuBarBase((const MethodInfo *)act);
  if ( !MainMenuBarBase )
    sub_1C7BD40(0, v4);
  MainMenuBarBase->fields.mMenuBtnAct = act;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&MainMenuBarBase->fields.mMenuBtnAct,
    (int32_t)act,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBar__SetMenuBtnColliderEnable(bool isEnable, bool isGray, const MethodInfo *method)
{
  MainMenuBarBase_o *MainMenuBarBase; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  MainMenuBarBase = MainMenuBar__GetMainMenuBarBase((const MethodInfo *)isEnable);
  if ( !MainMenuBarBase )
    sub_1C7BD40(0, v6);
  MainMenuBarBase__SetMenuBtnColliderEnable(MainMenuBarBase, isEnable, isGray, v7);
}


void MainMenuBar__SetResumeMenu(
        MainMenuBar_o *this,
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t panelDepth,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeScene; // x24
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Object_o *obj; // x21
  UnityEngine_Object_o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  const MethodInfo *v30; // x3

  if ( (byte_4CEDDE9 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDDE9 = 1;
  }
  activeScene = (UnityEngine_Object_o *)this->fields.activeScene;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeScene, (UnityEngine_Object_o *)scene, 0) )
  {
    this->fields.kind = kind;
    this->fields.panelDepth = panelDepth;
    this->fields.activeScene = scene;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.activeScene, (int32_t)scene, v10, v11, v12, v13, v14, v15);
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(obj, 0, 0) )
    {
      v17 = (UnityEngine_Object_o *)this->fields.obj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71870336(v17, 0);
      this->fields.obj = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.obj, 0, v18, v19, v20, v21, v22, v23);
      this->fields.barBase = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.barBase, 0, v24, v25, v26, v27, v28, v29);
      MainMenuBar__SetMenuActive(this, 1, 0, v30);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBar__SetSceneChangeFadeType(int32_t fadeType, const MethodInfo *method)
{
  MainMenuBarBase_o *MainMenuBarBase; // x0
  __int64 v4; // x1

  MainMenuBarBase = MainMenuBar__GetMainMenuBarBase(*(const MethodInfo **)&fadeType);
  if ( !MainMenuBarBase )
    sub_1C7BD40(0, v4);
  MainMenuBarBase->fields.fadeType = fadeType;
}


void MainMenuBar__SetSummonBalloonClickAction(
        MainMenuBar_o *this,
        System_Action_int__bool__o *callback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct MainMenuBarBase_o *v8; // x8
  GrandQuestFolderBoardItem_o *p_OnClickBalloonAction; // x20
  System_Delegate_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Delegate_o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x0
  int32_t v20; // w1

  if ( (byte_4CEDDEF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_int__bool__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDDEF = 1;
  }
  if ( callback )
  {
    barBase = (UnityEngine_Object_o *)this->fields.barBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(barBase, 0, 0);
    if ( v6 )
    {
      v8 = this->fields.barBase;
      if ( !v8 )
        sub_1C7BD40(v6, v7);
      p_OnClickBalloonAction = (GrandQuestFolderBoardItem_o *)&v8->fields.OnClickBalloonAction;
      v10 = System_Delegate__Combine(
              (System_Delegate_o *)v8->fields.OnClickBalloonAction,
              (System_Delegate_o *)callback,
              0);
      if ( v10 )
      {
        v17 = v10;
        v18 = sub_1C7BC24(v10, System_Action_int__bool__TypeInfo);
        if ( !v18
          || (p_OnClickBalloonAction->klass = (GrandQuestFolderBoardItem_c *)v18,
              v19 = sub_1C7BC24(v17, System_Action_int__bool__TypeInfo),
              v20 = v19,
              !v19) )
        {
          sub_1C7C0DC(v17);
          return;
        }
      }
      else
      {
        v20 = 0;
        p_OnClickBalloonAction->klass = 0;
      }
      sub_1C7BA8C(p_OnClickBalloonAction, v20, v11, v12, v13, v14, v15, v16);
    }
  }
}


void MainMenuBar__UnregisterSummonBalloonClickAction(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4CEDDE6 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4CEDDE6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v2 )
      sub_1C7BD40(0, v3);
    MainMenuBar__ClearSummonBalloonClickAction((MainMenuBar_o *)v2, v3);
  }
}


void MainMenuBar__UpdateNoticeNumber(const MethodInfo *method)
{
  MainMenuBarBase_o *MainMenuBarBase; // x0
  const MethodInfo *v2; // x1

  MainMenuBarBase = MainMenuBar__GetMainMenuBarBase(method);
  if ( !MainMenuBarBase )
    sub_1C7BD40(0, v2);
  MainMenuBarBase__UpdateNoticeNumber(MainMenuBarBase, v2);
}


bool MainMenuBar__get_IsEnableOutSideCollider(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Collider_o *properties; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *klass; // x20
  UnityEngine_Object_c *v6; // x8

  if ( (byte_4CEDDD8 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4CEDDD8 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  properties = (UnityEngine_Collider_o *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)properties & 1) != 0 )
    return 0;
  if ( !Instance )
    goto LABEL_14;
  klass = (UnityEngine_Object_o *)Instance[2].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  properties = (UnityEngine_Collider_o *)UnityEngine_Object__op_Equality(klass, 0, 0);
  if ( ((unsigned __int8)properties & 1) != 0 )
    return 0;
  v6 = Instance[2].klass;
  if ( !v6 || (properties = (UnityEngine_Collider_o *)v6->_1.properties) == 0 )
LABEL_14:
    sub_1C7BD40(properties, v3);
  return UnityEngine_Collider__get_enabled(properties, 0);
}


bool MainMenuBar__get_IsMenuBarActive(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *v2; // x0
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *klass; // x20

  if ( (byte_4CEDDD9 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4CEDDD9 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)v2 & 1) != 0 )
    return 0;
  if ( !Instance )
    goto LABEL_13;
  klass = (UnityEngine_Object_o *)Instance[2].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(klass, 0, 0) )
    return 0;
  v2 = Instance[2].klass;
  if ( !v2 )
LABEL_13:
    sub_1C7BD40(v2, v3);
  return MainMenuBarBase__get_IsMenuBarActive((MainMenuBarBase_o *)v2, v3);
}


void MainMenuBar__requestSelectedSceneChange(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4CEDDE4 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4CEDDE4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v2 )
      sub_1C7BD40(0, v3);
    MainMenuBar__RequestSelectedSceneChange((MainMenuBar_o *)v2, v3);
  }
}


void MainMenuBar__requestSelectedSignal(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4CEDDE2 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4CEDDE2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v2 )
      sub_1C7BD40(0, v3);
    MainMenuBar__RequestSelectedSignal((MainMenuBar_o *)v2, v3);
  }
}


void MainMenuBar__requestTerminalSceneChange(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4CEDDE3 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4CEDDE3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v2 )
      sub_1C7BD40(0, v3);
    MainMenuBar__RequestTerminalSceneChange((MainMenuBar_o *)v2, v3);
  }
}


void MainMenuBar__resumeMenuBar(SceneRootComponent_o *scene, int32_t kind, int32_t depth, const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4CEDDDA & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4CEDDDA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C7BD40(v8, v9);
    MainMenuBar__SetResumeMenu((MainMenuBar_o *)Instance, scene, kind, depth, v10);
  }
}


void MainMenuBar__setActiveScene(SceneRootComponent_o *scene, UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x5

  if ( (byte_4CEDDDB & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4CEDDDB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C7BD40(v6, v7);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, -1, cam, v8);
  }
}


void MainMenuBar__setActiveScene_41858988(
        SceneRootComponent_o *scene,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5

  if ( (byte_4CEDDDC & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4CEDDDC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C7BD40(v8, v9);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, depth, cam, v10);
  }
}


void MainMenuBar__setActiveScene_41859196(
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

  if ( (byte_4CEDDDD & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4CEDDDD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v10 )
  {
    if ( !Instance )
      sub_1C7BD40(v10, v11);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, kind, depth, cam, v12);
  }
}


void MainMenuBar__setButtonActive(bool isActive, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4CEDDE1 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4CEDDE1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C7BD40(v4, v5);
    MainMenuBar__SetButtonActive((MainMenuBar_o *)Instance, (int32_t)Instance[2].klass, isActive, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBar__setCloseHideMode(bool is_enable, const MethodInfo *method)
{
  MainMenuBarBase_o *MainMenuBarBase; // x0
  __int64 v4; // x1

  MainMenuBarBase = MainMenuBar__GetMainMenuBarBase((const MethodInfo *)is_enable);
  if ( !MainMenuBarBase )
    sub_1C7BD40(0, v4);
  MainMenuBarBase->fields.mIsCloseHideMode = is_enable;
  if ( is_enable )
    GameObjectExtensions__SetLocalPositionY(MainMenuBarBase->fields.menuComp, -420.0, 0);
}


void MainMenuBar__setKind(int32_t kind, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CEDDDE & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4CEDDDE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C7BD40(v4, v5);
    MainMenuBar__SetButtonKind((MainMenuBar_o *)Instance, kind, v6);
  }
}


void MainMenuBar__setMenuActive(bool isActive, UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4CEDDDF & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4CEDDDF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C7BD40(v6, v7);
    MainMenuBar__SetMenuActive((MainMenuBar_o *)Instance, isActive, cam, v8);
  }
}