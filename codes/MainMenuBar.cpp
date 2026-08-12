void MainMenuBar___ctor(MainMenuBar_o *this, const MethodInfo *method)
{
  const MethodInfo_47A2F28 *v3; // x1

  if ( (byte_596FF1C & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_MainMenuBar___ctor__);
    byte_596FF1C = 1;
  }
  v3 = (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_MainMenuBar___ctor__;
  this->fields.panelDepth = -1;
  SingletonMonoBehaviour_object____ctor((SingletonMonoBehaviour_T__o *)this, v3);
}


void MainMenuBar__ClearSummonBalloonClickAction(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct MainMenuBarBase_o *v12; // x8

  if ( (byte_596FF1B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FF1B = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(barBase, 0, 0);
  if ( v4 )
  {
    v12 = this->fields.barBase;
    if ( !v12 )
      sub_2213CDC(v4, v5);
    v12->fields.OnClickBalloonAction = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->fields.OnClickBalloonAction, 0, v6, v7, v8, v9, v10, v11);
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
    sub_2213CDC(0, v4);
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
    sub_2213CDC(0, v4);
  MainMenuBarBase__FrameInOut(MainMenuBarBase, 0, is_force, v5);
}


MainMenuBarBase_o *MainMenuBar__GetMainMenuBarBase(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_596FF02 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_596FF02 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v2);
  return (MainMenuBarBase_o *)Instance[3].klass;
}


void MainMenuBar__RegisterSummonBalloonClickAction(System_Action_int__bool__o *callback, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_596FF10 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_596FF10 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v5 )
      sub_2213CDC(0, v6);
    MainMenuBar__SetSummonBalloonClickAction((MainMenuBar_o *)v5, callback, v7);
  }
}


void MainMenuBar__RequestSelectedSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_596FF19 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FF19 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(barBase, 0, 0) )
  {
    v5 = this->fields.barBase;
    if ( !v5 )
      sub_2213CDC(0, v4);
    MainMenuBarBase__RequestSelectedSceneChange(v5, v4);
  }
}


void MainMenuBar__RequestSelectedSignal(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_596FF17 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FF17 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(barBase, 0, 0) )
  {
    v5 = this->fields.barBase;
    if ( !v5 )
      sub_2213CDC(0, v4);
    MainMenuBarBase__RequestSelectedSignal(v5, v4);
  }
}


void MainMenuBar__RequestTerminalSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_596FF18 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FF18 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(barBase, 0, 0);
  if ( v4 )
  {
    if ( !this->fields.barBase )
      sub_2213CDC(v4, v5);
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
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_Object_o *obj; // x26
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  MissionNaviTransitionBoardItem_o *p_activeScene; // x24
  __int64 v34; // x1
  UnityEngine_Object_o *monitor; // x24
  __int64 v36; // x1
  const MethodInfo *v37; // x5

  if ( (byte_596FF12 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FF12 = 1;
  }
  p_barBase = &this->fields.barBase;
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, scene);
  if ( UnityEngine_Object__op_Inequality(barBase, 0, 0) )
  {
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    UnityEngine_Object__DestroyImmediate_83460132(obj, 0);
    this->fields.obj = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.obj, 0, v21, v22, v23, v24, v25, v26);
    *p_barBase = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.barBase, 0, v27, v28, v29, v30, v31, v32);
  }
  this->fields.activeScene = scene;
  p_activeScene = (MissionNaviTransitionBoardItem_o *)&this->fields.activeScene;
  p_activeScene[-1].fields._BoardType_k__BackingField = kind;
  *(&p_activeScene[-1].fields._BoardType_k__BackingField + 1) = panelDepth;
  sub_2213A04(p_activeScene, (int32_t)scene, v14, v15, v16, v17, v18, v19);
  monitor = (UnityEngine_Object_o *)p_activeScene->monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
  if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
  {
    if ( !*p_barBase )
      sub_2213CDC(0, v36);
    MainMenuBarBase__SetActiveScene(*p_barBase, scene, kind, panelDepth, cam, v37);
  }
}


void MainMenuBar__SetAllBtnAct(System_Action_o *act, const MethodInfo *method)
{
  MainMenuBarBase_o *MainMenuBarBase; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  MainMenuBarBase = MainMenuBar__GetMainMenuBarBase((const MethodInfo *)act);
  if ( !MainMenuBarBase )
    sub_2213CDC(0, v4);
  MainMenuBarBase->fields.mAllBtnAct = act;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&MainMenuBarBase->fields.mAllBtnAct,
    (int32_t)act,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void MainMenuBar__SetAlpha(float alpha, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Component_o *Component_object; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *klass; // x20

  if ( (byte_596FF0B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_596FF0B = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  Component_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    if ( Instance )
    {
      klass = (UnityEngine_Object_o *)Instance[2].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( UnityEngine_Object__op_Equality(klass, 0, 0) )
        return;
      Component_object = (UnityEngine_Component_o *)Instance[2].klass;
      if ( Component_object )
      {
        Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                        Component_object,
                                                        (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
        if ( Component_object )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))Component_object->klass[1]._1.element_class)(
            Component_object,
            Component_object->klass[1]._1.castClass,
            alpha);
          return;
        }
      }
    }
    sub_2213CDC(Component_object, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBar__SetButtonActive(MainMenuBar_o *this, int32_t kind, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  MainMenuBarBase_o *v10; // x0

  if ( (byte_596FF16 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FF16 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
  if ( UnityEngine_Object__op_Inequality(barBase, 0, 0) )
  {
    v10 = this->fields.barBase;
    if ( !v10 )
      sub_2213CDC(0, v8);
    MainMenuBarBase__SetButtonActive(v10, kind, isActive, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBar__SetButtonKind(MainMenuBar_o *this, int32_t kind, const MethodInfo *method)
{
  UnityEngine_Object_c *v5; // x0
  UnityEngine_Object_o *barBase; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  struct MainMenuBarBase_o *v9; // x8

  if ( (byte_596FF13 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FF13 = 1;
  }
  v5 = UnityEngine_Object_TypeInfo;
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  this->fields.kind = kind;
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&kind);
  v7 = UnityEngine_Object__op_Inequality(barBase, 0, 0);
  if ( v7 )
  {
    v9 = this->fields.barBase;
    if ( !v9 )
      sub_2213CDC(v7, v8);
    v9->fields.kind = kind;
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
    sub_2213CDC(0, v6);
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
    sub_2213CDC(0, v6);
  MainMenuBarBase__SetDispBtnColliderEnable(MainMenuBarBase, is_enable, kind, v7);
}


// local variable allocation has failed, the output may be wrong!
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
  Il2CppObject *ComponentInChildren_object__58855044; // x0
  __int64 v13; // x1
  UnityEngine_Component_o *v14; // x23
  __int64 v15; // x1
  Il2CppObject *object; // x24
  Il2CppObject *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UnityEngine_Transform_o *v24; // x24
  UnityEngine_Transform_o *v25; // x24
  UnityEngine_Transform_o *v26; // x24
  UnityEngine_Transform_o *v27; // x24
  UnityEngine_GameObject_o *v28; // x24
  Il2CppObject *Component_object; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  const MethodInfo *v36; // x5
  UnityEngine_Object_o *barBase; // x21
  const MethodInfo *v38; // x2

  if ( (byte_596FF15 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UICamera___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_2213A60(&StringLiteral_4788/*"CommonUI/MainMenuBarPrefab"*/);
    byte_596FF15 = 1;
  }
  if ( isActive )
  {
    p_obj = &this->fields.obj;
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
    if ( UnityEngine_Object__op_Equality(obj, 0, 0) )
    {
      activeScene = (UnityEngine_Object_o *)this->fields.activeScene;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
      if ( UnityEngine_Object__op_Inequality(activeScene, 0, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
        gameObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0, 0);
        if ( (gameObject & 1) != 0 )
        {
          gameObject = (__int64)this->fields.activeScene;
          if ( !gameObject )
            goto LABEL_49;
          ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
        }
        else
        {
          if ( !cam )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0);
          if ( !gameObject )
            goto LABEL_49;
          ComponentInChildren_object__58855044 = UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)gameObject,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
        }
        v14 = (UnityEngine_Component_o *)ComponentInChildren_object__58855044;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0, 0) )
        {
          object = UnityEngine_Resources__Load_object_(
                     (System_String_o *)StringLiteral_4788/*"CommonUI/MainMenuBarPrefab"*/,
                     (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_GameObject___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
          v17 = UnityEngine_Object__Instantiate_object_(
                  object,
                  (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
          *p_obj = (struct UnityEngine_GameObject_o *)v17;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.obj, (int32_t)v17, v18, v19, v20, v21, v22, v23);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          if ( !v14 )
            goto LABEL_49;
          v24 = (UnityEngine_Transform_o *)gameObject;
          gameObject = (__int64)UnityEngine_Component__get_transform(v14, 0);
          if ( !v24 )
            goto LABEL_49;
          UnityEngine_Transform__set_parent(v24, (UnityEngine_Transform_o *)gameObject, 0);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          v25 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_5969AE0 )
          {
            gameObject = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
            byte_5969AE0 = 1;
          }
          if ( !v25 )
            goto LABEL_49;
          UnityEngine_Transform__set_localPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          v26 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_5969AE6 )
          {
            gameObject = sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
            byte_5969AE6 = 1;
          }
          if ( !v26 )
            goto LABEL_49;
          UnityEngine_Transform__set_localRotation(
            v26,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          v27 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_5969AE5 )
          {
            gameObject = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
            byte_5969AE5 = 1;
          }
          if ( !v27 )
            goto LABEL_49;
          UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          v28 = *p_obj;
          gameObject = (__int64)UnityEngine_Component__get_gameObject(v14, 0);
          if ( !gameObject )
            goto LABEL_49;
          gameObject = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0);
          if ( !v28 )
            goto LABEL_49;
          UnityEngine_GameObject__set_layer(v28, gameObject, 0);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___);
          this->fields.barBase = (struct MainMenuBarBase_o *)Component_object;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.barBase,
            (int32_t)Component_object,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
          gameObject = (__int64)this->fields.barBase;
          if ( !gameObject )
            goto LABEL_49;
          MainMenuBarBase__SetActiveScene(
            (MainMenuBarBase_o *)gameObject,
            this->fields.activeScene,
            this->fields.kind,
            this->fields.panelDepth,
            cam,
            v36);
        }
      }
    }
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
  if ( UnityEngine_Object__op_Inequality(barBase, 0, 0) )
  {
    gameObject = (__int64)this->fields.barBase;
    if ( gameObject )
    {
      MainMenuBarBase__SetMenuActive((MainMenuBarBase_o *)gameObject, isActive, v38);
      return;
    }
LABEL_49:
    sub_2213CDC(gameObject, v11);
  }
}


void MainMenuBar__SetMenuBtnAct(System_Action_o *act, const MethodInfo *method)
{
  MainMenuBarBase_o *MainMenuBarBase; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  MainMenuBarBase = MainMenuBar__GetMainMenuBarBase((const MethodInfo *)act);
  if ( !MainMenuBarBase )
    sub_2213CDC(0, v4);
  MainMenuBarBase->fields.mMenuBtnAct = act;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&MainMenuBarBase->fields.mMenuBtnAct,
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
    sub_2213CDC(0, v6);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  UnityEngine_Object_o *obj; // x21
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  const MethodInfo *v32; // x3

  if ( (byte_596FF14 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FF14 = 1;
  }
  activeScene = (UnityEngine_Object_o *)this->fields.activeScene;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, scene);
  if ( UnityEngine_Object__op_Inequality(activeScene, (UnityEngine_Object_o *)scene, 0) )
  {
    this->fields.kind = kind;
    this->fields.panelDepth = panelDepth;
    this->fields.activeScene = scene;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.activeScene,
      (int32_t)scene,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Inequality(obj, 0, 0) )
    {
      v19 = (UnityEngine_Object_o *)this->fields.obj;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      UnityEngine_Object__DestroyImmediate_83460132(v19, 0);
      this->fields.obj = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.obj, 0, v20, v21, v22, v23, v24, v25);
      this->fields.barBase = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.barBase, 0, v26, v27, v28, v29, v30, v31);
      MainMenuBar__SetMenuActive(this, 1, 0, v32);
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
    sub_2213CDC(0, v4);
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
  MissionNaviTransitionBoardItem_o *p_OnClickBalloonAction; // x20
  System_Delegate_o *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Delegate_o *v17; // x19
  System_Action_int__bool__c *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x0
  int32_t v21; // w1

  if ( (byte_596FF1A & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__bool__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FF1A = 1;
  }
  if ( callback )
  {
    barBase = (UnityEngine_Object_o *)this->fields.barBase;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, callback);
    v6 = UnityEngine_Object__op_Inequality(barBase, 0, 0);
    if ( v6 )
    {
      v8 = this->fields.barBase;
      if ( !v8 )
        sub_2213CDC(v6, v7);
      p_OnClickBalloonAction = (MissionNaviTransitionBoardItem_o *)&v8->fields.OnClickBalloonAction;
      v10 = System_Delegate__Combine(
              (System_Delegate_o *)v8->fields.OnClickBalloonAction,
              (System_Delegate_o *)callback,
              0);
      if ( v10 )
      {
        v17 = v10;
        v18 = System_Action_int__bool__TypeInfo;
        v19 = sub_2213BB4(v10, System_Action_int__bool__TypeInfo);
        if ( !v19
          || (v18 = System_Action_int__bool__TypeInfo,
              p_OnClickBalloonAction->klass = (MissionNaviTransitionBoardItem_c *)v19,
              v20 = sub_2213BB4(v17, v18),
              v21 = v20,
              !v20) )
        {
          sub_221405C(v17, v18, v11, v12);
          return;
        }
      }
      else
      {
        v21 = 0;
        p_OnClickBalloonAction->klass = 0;
      }
      sub_2213A04(p_OnClickBalloonAction, v21, v11, v12, v13, v14, v15, v16);
    }
  }
}


void MainMenuBar__UnregisterSummonBalloonClickAction(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_596FF11 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_596FF11 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v3 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v3 )
      sub_2213CDC(0, v4);
    MainMenuBar__ClearSummonBalloonClickAction((MainMenuBar_o *)v3, v4);
  }
}


void MainMenuBar__UpdateNoticeNumber(const MethodInfo *method)
{
  MainMenuBarBase_o *MainMenuBarBase; // x0
  const MethodInfo *v2; // x1

  MainMenuBarBase = MainMenuBar__GetMainMenuBarBase(method);
  if ( !MainMenuBarBase )
    sub_2213CDC(0, v2);
  MainMenuBarBase__UpdateNoticeNumber(MainMenuBarBase, v2);
}


bool MainMenuBar__get_IsEnableOutSideCollider(const MethodInfo *method)
{
  __int64 v1; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Collider_o *methods; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *klass; // x20
  UnityEngine_Object_c *v7; // x8

  if ( (byte_596FF03 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_596FF03 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  methods = (UnityEngine_Collider_o *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)methods & 1) != 0 )
    return 0;
  if ( !Instance )
    goto LABEL_14;
  klass = (UnityEngine_Object_o *)Instance[2].klass;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  methods = (UnityEngine_Collider_o *)UnityEngine_Object__op_Equality(klass, 0, 0);
  if ( ((unsigned __int8)methods & 1) != 0 )
    return 0;
  v7 = Instance[2].klass;
  if ( !v7 || (methods = (UnityEngine_Collider_o *)v7->_1.methods) == 0 )
LABEL_14:
    sub_2213CDC(methods, v4);
  return UnityEngine_Collider__get_enabled(methods, 0);
}


bool MainMenuBar__get_IsMenuBarActive(const MethodInfo *method)
{
  __int64 v1; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *v3; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *klass; // x20

  if ( (byte_596FF04 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_596FF04 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v3 = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)v3 & 1) != 0 )
    return 0;
  if ( !Instance )
    goto LABEL_13;
  klass = (UnityEngine_Object_o *)Instance[2].klass;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Equality(klass, 0, 0) )
    return 0;
  v3 = Instance[2].klass;
  if ( !v3 )
LABEL_13:
    sub_2213CDC(v3, v4);
  return MainMenuBarBase__get_IsMenuBarActive((MainMenuBarBase_o *)v3, v4);
}


void MainMenuBar__requestSelectedSceneChange(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_596FF0F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_596FF0F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v3 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v3 )
      sub_2213CDC(0, v4);
    MainMenuBar__RequestSelectedSceneChange((MainMenuBar_o *)v3, v4);
  }
}


void MainMenuBar__requestSelectedSignal(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_596FF0D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_596FF0D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v3 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v3 )
      sub_2213CDC(0, v4);
    MainMenuBar__RequestSelectedSignal((MainMenuBar_o *)v3, v4);
  }
}


void MainMenuBar__requestTerminalSceneChange(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_596FF0E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_596FF0E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v3 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v3 )
      sub_2213CDC(0, v4);
    MainMenuBar__RequestTerminalSceneChange((MainMenuBar_o *)v3, v4);
  }
}


void MainMenuBar__resumeMenuBar(SceneRootComponent_o *scene, int32_t kind, int32_t depth, const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_596FF05 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_596FF05 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v9 )
  {
    if ( !Instance )
      sub_2213CDC(v9, v10);
    MainMenuBar__SetResumeMenu((MainMenuBar_o *)Instance, scene, kind, depth, v11);
  }
}


void MainMenuBar__setActiveScene(SceneRootComponent_o *scene, UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x5

  if ( (byte_596FF06 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_596FF06 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v7 )
  {
    if ( !Instance )
      sub_2213CDC(v7, v8);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, -1, cam, v9);
  }
}


void MainMenuBar__setActiveScene_48259824(
        SceneRootComponent_o *scene,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_596FF07 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_596FF07 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v9 )
  {
    if ( !Instance )
      sub_2213CDC(v9, v10);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, depth, cam, v11);
  }
}


void MainMenuBar__setActiveScene_48260032(
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Instance; // x23
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5

  if ( (byte_596FF08 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_596FF08 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v11 )
  {
    if ( !Instance )
      sub_2213CDC(v11, v12);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, kind, depth, cam, v13);
  }
}


void MainMenuBar__setButtonActive(bool isActive, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_596FF0C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_596FF0C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v5 )
  {
    if ( !Instance )
      sub_2213CDC(v5, v6);
    MainMenuBar__SetButtonActive((MainMenuBar_o *)Instance, (int32_t)Instance[2].klass, isActive, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBar__setCloseHideMode(bool is_enable, const MethodInfo *method)
{
  MainMenuBarBase_o *MainMenuBarBase; // x0
  __int64 v4; // x1

  MainMenuBarBase = MainMenuBar__GetMainMenuBarBase((const MethodInfo *)is_enable);
  if ( !MainMenuBarBase )
    sub_2213CDC(0, v4);
  MainMenuBarBase->fields.mIsCloseHideMode = is_enable;
  if ( is_enable )
    GameObjectExtensions__SetLocalPositionY(MainMenuBarBase->fields.menuComp, -420.0, 0);
}


void MainMenuBar__setKind(int32_t kind, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_596FF09 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_596FF09 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v5 )
  {
    if ( !Instance )
      sub_2213CDC(v5, v6);
    MainMenuBar__SetButtonKind((MainMenuBar_o *)Instance, kind, v7);
  }
}


void MainMenuBar__setMenuActive(bool isActive, UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_596FF0A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_596FF0A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v7 )
  {
    if ( !Instance )
      sub_2213CDC(v7, v8);
    MainMenuBar__SetMenuActive((MainMenuBar_o *)Instance, isActive, cam, v9);
  }
}