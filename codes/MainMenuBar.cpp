void MainMenuBar___ctor(MainMenuBar_o *this, const MethodInfo *method)
{
  if ( (byte_4C42707 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar___ctor__);
    byte_4C42707 = 1;
  }
  this->fields.panelDepth = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39ED654 *)Method_SingletonMonoBehaviour_MainMenuBar___ctor__);
}


void MainMenuBar__ClearSummonBalloonClickAction(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  _BOOL8 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *v7; // x8

  if ( (byte_4C426FD & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C426FD = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(barBase, 0, 0);
  if ( v4 )
  {
    v7 = (CGThumbnailListItem_o *)this->fields.barBase;
    if ( !v7 )
      sub_1C372B4(v4);
    v7[3].klass = 0;
    sub_1C36FFC(v7 + 3, 0, v5, v6);
  }
}


void MainMenuBar__FrameIn(bool is_force, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4C42705 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C42705 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0 )
    sub_1C372B4(Instance);
  MainMenuBarBase__FrameInOut(Instance, 1, is_force, v4);
}


void MainMenuBar__FrameOut(bool is_force, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4C42706 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C42706 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0 )
    sub_1C372B4(Instance);
  MainMenuBarBase__FrameInOut(Instance, 0, is_force, v4);
}


void MainMenuBar__RegisterSummonBalloonClickAction(System_Action_int__bool__o *callback, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  Il2CppObject *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C426F2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v4 )
      sub_1C372B4(0);
    MainMenuBar__SetSummonBalloonClickAction((MainMenuBar_o *)v4, callback, v5);
  }
}


void MainMenuBar__RequestSelectedSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_4C426FB & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C426FB = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0, 0) )
  {
    v5 = this->fields.barBase;
    if ( !v5 )
      sub_1C372B4(0);
    MainMenuBarBase__RequestSelectedSceneChange(v5, v4);
  }
}


void MainMenuBar__RequestSelectedSignal(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_4C426F9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C426F9 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0, 0) )
  {
    v5 = this->fields.barBase;
    if ( !v5 )
      sub_1C372B4(0);
    MainMenuBarBase__RequestSelectedSignal(v5, v4);
  }
}


void MainMenuBar__RequestTerminalSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C426FA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C426FA = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(barBase, 0, 0);
  if ( v4 )
  {
    if ( !this->fields.barBase )
      sub_1C372B4(v4);
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
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *obj; // x26
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  CGThumbnailListItem_o *p_activeScene; // x24
  UnityEngine_Object_o *monitor; // x24
  const MethodInfo *v22; // x5

  if ( (byte_4C426F4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C426F4 = 1;
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
    UnityEngine_Object__DestroyImmediate_71266940(obj, 0);
    this->fields.obj = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.obj, 0, v16, v17);
    *p_barBase = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.barBase, 0, v18, v19);
  }
  this->fields.activeScene = scene;
  p_activeScene = (CGThumbnailListItem_o *)&this->fields.activeScene;
  LODWORD(p_activeScene[-1].fields._ThumbnailSpritePath_k__BackingField) = kind;
  HIDWORD(p_activeScene[-1].fields._ThumbnailSpritePath_k__BackingField) = panelDepth;
  sub_1C36FFC(p_activeScene, (int32_t)scene, v13, v14);
  monitor = (UnityEngine_Object_o *)p_activeScene->monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
  {
    if ( !*p_barBase )
      sub_1C372B4(0);
    MainMenuBarBase__SetActiveScene(*p_barBase, scene, kind, panelDepth, cam, v22);
  }
}


void MainMenuBar__SetAllBtnAct(System_Action_o *act, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppClass *klass; // x8

  if ( (byte_4C42704 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C42704 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0 )
    sub_1C372B4(Instance);
  klass->vtable[7].methodPtr = (Il2CppMethodPointer)act;
  sub_1C36FFC((CGThumbnailListItem_o *)&klass->vtable[7], (int32_t)act, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBar__SetAlpha(float alpha, const MethodInfo *method)
{
  long double v2; // q8
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *klass; // x20

  v2 = *(long double *)&alpha;
  if ( (byte_4C426EC & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426EC = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
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
                                                        (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1C372B4(Component_object);
  }
}


void MainMenuBar__SetButtonActive(MainMenuBar_o *this, int32_t kind, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x22
  const MethodInfo *v8; // x3
  MainMenuBarBase_o *v9; // x0

  if ( (byte_4C426F8 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C426F8 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0, 0) )
  {
    v9 = this->fields.barBase;
    if ( !v9 )
      sub_1C372B4(0);
    MainMenuBarBase__SetButtonActive(v9, kind, isActive, v8);
  }
}


void MainMenuBar__SetButtonKind(MainMenuBar_o *this, int32_t kind, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x21
  _BOOL8 v6; // x0
  struct MainMenuBarBase_o *v7; // x8

  if ( (byte_4C426F5 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C426F5 = 1;
  }
  this->fields.kind = kind;
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(barBase, 0, 0);
  if ( v6 )
  {
    v7 = this->fields.barBase;
    if ( !v7 )
      sub_1C372B4(v6);
    v7->fields.kind = kind;
  }
}


void MainMenuBar__SetDispBtnAct(int32_t kind, System_Action_o *act, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C42703 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C42703 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0 )
    sub_1C372B4(Instance);
  MainMenuBarBase__SetDispBtnAct(Instance, kind, act, v6);
}


void MainMenuBar__SetDispBtnColliderEnable(bool is_enable, int32_t kind, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C42702 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C42702 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0 )
    sub_1C372B4(Instance);
  MainMenuBarBase__SetDispBtnColliderEnable(Instance, is_enable, kind, v6);
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
  Il2CppObject *ComponentInChildren_object__51242636; // x0
  UnityEngine_Component_o *v12; // x23
  Il2CppObject *object; // x24
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Transform_o *v17; // x24
  UnityEngine_Transform_o *v18; // x24
  UnityEngine_Transform_o *v19; // x24
  UnityEngine_Transform_o *v20; // x24
  UnityEngine_GameObject_o *v21; // x24
  Il2CppObject *Component_object; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x5
  UnityEngine_Object_o *barBase; // x21
  const MethodInfo *v27; // x2

  if ( (byte_4C426F7 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UICamera___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C37058(&StringLiteral_4611/*"CommonUI/MainMenuBarPrefab"*/);
    byte_4C426F7 = 1;
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
          ComponentInChildren_object__51242636 = UnityEngine_Component__GetComponentInChildren_object__51242636(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
        }
        else
        {
          if ( !cam )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0);
          if ( !gameObject )
            goto LABEL_49;
          ComponentInChildren_object__51242636 = UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)gameObject,
                                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
        }
        v12 = (UnityEngine_Component_o *)ComponentInChildren_object__51242636;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0) )
        {
          object = UnityEngine_Resources__Load_object_(
                     (System_String_o *)StringLiteral_4611/*"CommonUI/MainMenuBarPrefab"*/,
                     (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_GameObject___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v14 = UnityEngine_Object__Instantiate_object_(
                  object,
                  (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          *p_obj = (struct UnityEngine_GameObject_o *)v14;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.obj, (int32_t)v14, v15, v16);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          if ( !v12 )
            goto LABEL_49;
          v17 = (UnityEngine_Transform_o *)gameObject;
          gameObject = (__int64)UnityEngine_Component__get_transform(v12, 0);
          if ( !v17 )
            goto LABEL_49;
          UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)gameObject, 0);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          v18 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4C3C921 )
          {
            gameObject = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
            byte_4C3C921 = 1;
          }
          if ( !v18 )
            goto LABEL_49;
          UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          v19 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4C3C927 )
          {
            gameObject = sub_1C37058(&UnityEngine_Quaternion_TypeInfo);
            byte_4C3C927 = 1;
          }
          if ( !v19 )
            goto LABEL_49;
          UnityEngine_Transform__set_localRotation(
            v19,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          v20 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4C3C926 )
          {
            gameObject = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
            byte_4C3C926 = 1;
          }
          if ( !v20 )
            goto LABEL_49;
          UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          v21 = *p_obj;
          gameObject = (__int64)UnityEngine_Component__get_gameObject(v12, 0);
          if ( !gameObject )
            goto LABEL_49;
          gameObject = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0);
          if ( !v21 )
            goto LABEL_49;
          UnityEngine_GameObject__set_layer(v21, gameObject, 0);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___);
          this->fields.barBase = (struct MainMenuBarBase_o *)Component_object;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.barBase, (int32_t)Component_object, v23, v24);
          gameObject = (__int64)this->fields.barBase;
          if ( !gameObject )
            goto LABEL_49;
          MainMenuBarBase__SetActiveScene(
            (MainMenuBarBase_o *)gameObject,
            this->fields.activeScene,
            this->fields.kind,
            this->fields.panelDepth,
            cam,
            v25);
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
      MainMenuBarBase__SetMenuActive((MainMenuBarBase_o *)gameObject, isActive, v27);
      return;
    }
LABEL_49:
    sub_1C372B4(gameObject);
  }
}


void MainMenuBar__SetMenuBtnAct(System_Action_o *act, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppClass *klass; // x8

  if ( (byte_4C42701 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C42701 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0 )
    sub_1C372B4(Instance);
  klass->vtable[6].methodPtr = (Il2CppMethodPointer)act;
  sub_1C36FFC((CGThumbnailListItem_o *)&klass->vtable[6], (int32_t)act, v4, v5);
}


void MainMenuBar__SetMenuBtnColliderEnable(bool isEnable, bool isGray, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C42700 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C42700 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0 )
    sub_1C372B4(Instance);
  MainMenuBarBase__SetMenuBtnColliderEnable(Instance, isEnable, isGray, v6);
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
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *obj; // x21
  UnityEngine_Object_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3

  if ( (byte_4C426F6 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C426F6 = 1;
  }
  activeScene = (UnityEngine_Object_o *)this->fields.activeScene;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeScene, (UnityEngine_Object_o *)scene, 0) )
  {
    this->fields.kind = kind;
    this->fields.panelDepth = panelDepth;
    this->fields.activeScene = scene;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.activeScene, (int32_t)scene, v10, v11);
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(obj, 0, 0) )
    {
      v13 = (UnityEngine_Object_o *)this->fields.obj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71266940(v13, 0);
      this->fields.obj = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.obj, 0, v14, v15);
      this->fields.barBase = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.barBase, 0, v16, v17);
      MainMenuBar__SetMenuActive(this, 1, 0, v18);
    }
  }
}


void MainMenuBar__SetSceneChangeFadeType(int32_t fadeType, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppClass *klass; // x8

  if ( (byte_4C426FE & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0 )
    sub_1C372B4(Instance);
  LODWORD(klass->vtable[4].methodPtr) = fadeType;
}


void MainMenuBar__SetSummonBalloonClickAction(
        MainMenuBar_o *this,
        System_Action_int__bool__o *callback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x21
  _BOOL8 v6; // x0
  struct MainMenuBarBase_o *v7; // x8
  CGThumbnailListItem_o *p_OnClickBalloonAction; // x20
  System_Delegate_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Delegate_o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x0
  int32_t v15; // w1

  if ( (byte_4C426FC & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__bool__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C426FC = 1;
  }
  if ( callback )
  {
    barBase = (UnityEngine_Object_o *)this->fields.barBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(barBase, 0, 0);
    if ( v6 )
    {
      v7 = this->fields.barBase;
      if ( !v7 )
        sub_1C372B4(v6);
      p_OnClickBalloonAction = (CGThumbnailListItem_o *)&v7->fields.OnClickBalloonAction;
      v9 = System_Delegate__Combine(
             (System_Delegate_o *)v7->fields.OnClickBalloonAction,
             (System_Delegate_o *)callback,
             0);
      if ( v9 )
      {
        v12 = v9;
        v13 = sub_1C37194(v9, System_Action_int__bool__TypeInfo);
        if ( !v13
          || (p_OnClickBalloonAction->klass = (CGThumbnailListItem_c *)v13,
              v14 = sub_1C37194(v12, System_Action_int__bool__TypeInfo),
              v15 = v14,
              !v14) )
        {
          sub_1C37574(v12);
          return;
        }
      }
      else
      {
        v15 = 0;
        p_OnClickBalloonAction->klass = 0;
      }
      sub_1C36FFC(p_OnClickBalloonAction, v15, v10, v11);
    }
  }
}


void MainMenuBar__UnregisterSummonBalloonClickAction(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4C426F3 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v2 )
      sub_1C372B4(0);
    MainMenuBar__ClearSummonBalloonClickAction((MainMenuBar_o *)v2, v3);
  }
}


void MainMenuBar__UpdateNoticeNumber(const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4C426FF & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426FF = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0 )
    sub_1C372B4(Instance);
  MainMenuBarBase__UpdateNoticeNumber(Instance, v2);
}


bool MainMenuBar__get_IsEnableOutSideCollider(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Collider_o *properties; // x0
  UnityEngine_Object_o *klass; // x20
  UnityEngine_Object_c *v5; // x8

  if ( (byte_4C426E4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426E4 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
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
  v5 = Instance[2].klass;
  if ( !v5 || (properties = (UnityEngine_Collider_o *)v5->_1.properties) == 0 )
LABEL_14:
    sub_1C372B4(properties);
  return UnityEngine_Collider__get_enabled(properties, 0);
}


bool MainMenuBar__get_IsMenuBarActive(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *v2; // x0
  UnityEngine_Object_o *klass; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4C426E5 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426E5 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
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
    sub_1C372B4(v2);
  return MainMenuBarBase__get_IsMenuBarActive((MainMenuBarBase_o *)v2, v4);
}


void MainMenuBar__requestSelectedSceneChange(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4C426F1 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v2 )
      sub_1C372B4(0);
    MainMenuBar__RequestSelectedSceneChange((MainMenuBar_o *)v2, v3);
  }
}


void MainMenuBar__requestSelectedSignal(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4C426EF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v2 )
      sub_1C372B4(0);
    MainMenuBar__RequestSelectedSignal((MainMenuBar_o *)v2, v3);
  }
}


void MainMenuBar__requestTerminalSceneChange(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4C426F0 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v2 )
      sub_1C372B4(0);
    MainMenuBar__RequestTerminalSceneChange((MainMenuBar_o *)v2, v3);
  }
}


void MainMenuBar__resumeMenuBar(SceneRootComponent_o *scene, int32_t kind, int32_t depth, const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x4

  if ( (byte_4C426E6 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426E6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C372B4(v8);
    MainMenuBar__SetResumeMenu((MainMenuBar_o *)Instance, scene, kind, depth, v9);
  }
}


void MainMenuBar__setActiveScene(SceneRootComponent_o *scene, UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x5

  if ( (byte_4C426E7 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C372B4(v6);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, -1, cam, v7);
  }
}


void MainMenuBar__setActiveScene_41286856(
        SceneRootComponent_o *scene,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x5

  if ( (byte_4C426E8 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C372B4(v8);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, depth, cam, v9);
  }
}


void MainMenuBar__setActiveScene_41287064(
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x23
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x5

  if ( (byte_4C426E9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v10 )
  {
    if ( !Instance )
      sub_1C372B4(v10);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, kind, depth, cam, v11);
  }
}


void MainMenuBar__setButtonActive(bool isActive, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4C426EE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C372B4(v4);
    MainMenuBar__SetButtonActive((MainMenuBar_o *)Instance, (int32_t)Instance[2].klass, isActive, v5);
  }
}


void MainMenuBar__setCloseHideMode(bool is_enable, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppClass *klass; // x8

  if ( (byte_4C426ED & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426ED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0 )
    sub_1C372B4(Instance);
  LOBYTE(klass->vtable[8].methodPtr) = is_enable;
  if ( is_enable )
    GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)klass->_1.interopData, -420.0, 0);
}


void MainMenuBar__setKind(int32_t kind, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C426EA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C372B4(v4);
    MainMenuBar__SetButtonKind((MainMenuBar_o *)Instance, kind, v5);
  }
}


void MainMenuBar__setMenuActive(bool isActive, UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x3

  if ( (byte_4C426EB & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    byte_4C426EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C372B4(v6);
    MainMenuBar__SetMenuActive((MainMenuBar_o *)Instance, isActive, cam, v7);
  }
}