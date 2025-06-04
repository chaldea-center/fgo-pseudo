void __fastcall MainMenuBar___ctor(MainMenuBar_o *this, const MethodInfo *method)
{
  if ( (byte_4B017B0 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar___ctor__, method);
    byte_4B017B0 = 1;
  }
  this->fields.panelDepth = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38E0160 *)Method_SingletonMonoBehaviour_MainMenuBar___ctor__);
}


void __fastcall MainMenuBar__FrameIn(bool is_force, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_4B017AE & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_4B017AE = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1BC3264(Instance, v4);
  MainMenuBarBase__FrameInOut(Instance, 1, is_force, v5);
}


void __fastcall MainMenuBar__FrameOut(bool is_force, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_4B017AF & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_4B017AF = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1BC3264(Instance, v4);
  MainMenuBarBase__FrameInOut(Instance, 0, is_force, v5);
}


void __fastcall MainMenuBar__RequestSelectedSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_4B017A6 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B017A6 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v5 = this->fields.barBase;
    if ( !v5 )
      sub_1BC3264(0LL, v4);
    MainMenuBarBase__RequestSelectedSceneChange(v5, v4);
  }
}


void __fastcall MainMenuBar__RequestSelectedSignal(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_4B017A4 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B017A4 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v5 = this->fields.barBase;
    if ( !v5 )
      sub_1BC3264(0LL, v4);
    MainMenuBarBase__RequestSelectedSignal(v5, v4);
  }
}


void __fastcall MainMenuBar__RequestTerminalSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B017A5 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B017A5 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL);
  if ( v4 )
  {
    if ( !this->fields.barBase )
      sub_1BC3264(v4, v5);
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
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *obj; // x26
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  CGThumbnailListItem_o *p_activeScene; // x24
  UnityEngine_Object_o *monitor; // x24
  __int64 v22; // x1
  const MethodInfo *v23; // x5

  if ( (byte_4B0179F & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, scene);
    byte_4B0179F = 1;
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
    UnityEngine_Object__DestroyImmediate_70034488(obj, 0LL);
    this->fields.obj = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.obj, 0, v16, v17);
    *p_barBase = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.barBase, 0, v18, v19);
  }
  this->fields.activeScene = scene;
  p_activeScene = (CGThumbnailListItem_o *)&this->fields.activeScene;
  LODWORD(p_activeScene[-1].fields._ThumbnailSpritePath_k__BackingField) = kind;
  HIDWORD(p_activeScene[-1].fields._ThumbnailSpritePath_k__BackingField) = panelDepth;
  sub_1BC2FAC(p_activeScene, (int32_t)scene, v13, v14);
  monitor = (UnityEngine_Object_o *)p_activeScene->monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
  {
    if ( !*p_barBase )
      sub_1BC3264(0LL, v22);
    MainMenuBarBase__SetActiveScene(*p_barBase, scene, kind, panelDepth, cam, v23);
  }
}


void __fastcall MainMenuBar__SetAllBtnAct(System_Action_o *act, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppClass *klass; // x8

  if ( (byte_4B017AD & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_4B017AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1BC3264(Instance, v4);
  klass->vtable[6].methodPtr = (Il2CppMethodPointer)act;
  sub_1BC2FAC((CGThumbnailListItem_o *)&klass->vtable[6], (int32_t)act, v5, v6);
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
  __int64 v8; // x1
  UnityEngine_Object_o *klass; // x20

  v3 = *(long double *)&alpha;
  if ( (byte_4B01799 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIPanel___, v2);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5);
    byte_4B01799 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
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
                                                        (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1BC3264(Component_object, v8);
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

  if ( (byte_4B017A3 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    byte_4B017A3 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v10 = this->fields.barBase;
    if ( !v10 )
      sub_1BC3264(0LL, v8);
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

  if ( (byte_4B017A0 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    byte_4B017A0 = 1;
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
      sub_1BC3264(v6, v7);
    v8->fields.kind = kind;
  }
}


void __fastcall MainMenuBar__SetDispBtnAct(int32_t kind, System_Action_o *act, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4B017AC & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, act);
    byte_4B017AC = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1BC3264(Instance, v6);
  MainMenuBarBase__SetDispBtnAct(Instance, kind, act, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetDispBtnColliderEnable(bool is_enable, int32_t kind, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4B017AB & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, *(_QWORD *)&kind);
    byte_4B017AB = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1BC3264(Instance, v6);
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
  __int64 gameObject; // x0
  __int64 v17; // x1
  Il2CppObject *ComponentInChildren_object__50301080; // x0
  UnityEngine_Component_o *v19; // x23
  Il2CppObject *object; // x24
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UnityEngine_Transform_o *v24; // x24
  UnityEngine_Transform_o *v25; // x24
  UnityEngine_Transform_o *v26; // x24
  UnityEngine_Transform_o *v27; // x24
  UnityEngine_GameObject_o *v28; // x24
  Il2CppObject *Component_object; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x5
  UnityEngine_Object_o *barBase; // x21
  const MethodInfo *v34; // x2

  if ( (byte_4B017A2 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___, isActive);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___, v7);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UICamera___, v8);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    sub_1BC3008(&Method_UnityEngine_Resources_Load_GameObject___, v11);
    sub_1BC3008(&StringLiteral_4571/*"CommonUI/MainMenuBarPrefab"*/, v12);
    byte_4B017A2 = 1;
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
          ComponentInChildren_object__50301080 = UnityEngine_Component__GetComponentInChildren_object__50301080(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2FF8898 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
        }
        else
        {
          if ( !cam )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0LL);
          if ( !gameObject )
            goto LABEL_49;
          ComponentInChildren_object__50301080 = UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)gameObject,
                                                   (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
        }
        v19 = (UnityEngine_Component_o *)ComponentInChildren_object__50301080;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
        {
          object = UnityEngine_Resources__Load_object_(
                     (System_String_o *)StringLiteral_4571/*"CommonUI/MainMenuBarPrefab"*/,
                     (const MethodInfo_309AA50 *)Method_UnityEngine_Resources_Load_GameObject___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v21 = UnityEngine_Object__Instantiate_object_(
                  object,
                  (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          *p_obj = (struct UnityEngine_GameObject_o *)v21;
          sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.obj, (int32_t)v21, v22, v23);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !v19 )
            goto LABEL_49;
          v24 = (UnityEngine_Transform_o *)gameObject;
          gameObject = (__int64)UnityEngine_Component__get_transform(v19, 0LL);
          if ( !v24 )
            goto LABEL_49;
          UnityEngine_Transform__set_parent(v24, (UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v25 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4AFBDB1 )
          {
            gameObject = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v17);
            byte_4AFBDB1 = 1;
          }
          if ( !v25 )
            goto LABEL_49;
          UnityEngine_Transform__set_localPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v26 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4AFBDB7 )
          {
            gameObject = sub_1BC3008(&UnityEngine_Quaternion_TypeInfo, v17);
            byte_4AFBDB7 = 1;
          }
          if ( !v26 )
            goto LABEL_49;
          UnityEngine_Transform__set_localRotation(
            v26,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v27 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4AFBDB6 )
          {
            gameObject = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v17);
            byte_4AFBDB6 = 1;
          }
          if ( !v27 )
            goto LABEL_49;
          UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          v28 = *p_obj;
          gameObject = (__int64)UnityEngine_Component__get_gameObject(v19, 0LL);
          if ( !gameObject )
            goto LABEL_49;
          gameObject = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !v28 )
            goto LABEL_49;
          UnityEngine_GameObject__set_layer(v28, gameObject, 0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___);
          this->fields.barBase = (struct MainMenuBarBase_o *)Component_object;
          sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.barBase, (int32_t)Component_object, v30, v31);
          gameObject = (__int64)this->fields.barBase;
          if ( !gameObject )
            goto LABEL_49;
          MainMenuBarBase__SetActiveScene(
            (MainMenuBarBase_o *)gameObject,
            this->fields.activeScene,
            this->fields.kind,
            this->fields.panelDepth,
            cam,
            v32);
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
      MainMenuBarBase__SetMenuActive((MainMenuBarBase_o *)gameObject, isActive, v34);
      return;
    }
LABEL_49:
    sub_1BC3264(gameObject, v17);
  }
}


void __fastcall MainMenuBar__SetMenuBtnAct(System_Action_o *act, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppClass *klass; // x8

  if ( (byte_4B017AA & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_4B017AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1BC3264(Instance, v4);
  klass->vtable[5].methodPtr = (Il2CppMethodPointer)act;
  sub_1BC2FAC((CGThumbnailListItem_o *)&klass->vtable[5], (int32_t)act, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetMenuBtnColliderEnable(bool isEnable, bool isGray, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4B017A9 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, isGray);
    byte_4B017A9 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1BC3264(Instance, v6);
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
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *obj; // x21
  UnityEngine_Object_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3

  if ( (byte_4B017A1 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, scene);
    byte_4B017A1 = 1;
  }
  activeScene = (UnityEngine_Object_o *)this->fields.activeScene;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeScene, (UnityEngine_Object_o *)scene, 0LL) )
  {
    this->fields.kind = kind;
    this->fields.panelDepth = panelDepth;
    this->fields.activeScene = scene;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.activeScene, (int32_t)scene, v10, v11);
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(obj, 0LL, 0LL) )
    {
      v13 = (UnityEngine_Object_o *)this->fields.obj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70034488(v13, 0LL);
      this->fields.obj = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.obj, 0, v14, v15);
      this->fields.barBase = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.barBase, 0, v16, v17);
      MainMenuBar__SetMenuActive(this, 1, 0LL, v18);
    }
  }
}


void __fastcall MainMenuBar__SetSceneChangeFadeType(int32_t fadeType, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppClass *klass; // x8

  if ( (byte_4B017A7 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_4B017A7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1BC3264(Instance, v4);
  LODWORD(klass->vtable[3].methodPtr) = fadeType;
}


void __fastcall MainMenuBar__UpdateNoticeNumber(const MethodInfo *method)
{
  __int64 v1; // x1
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4B017A8 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v1);
    byte_4B017A8 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1BC3264(Instance, v3);
  MainMenuBarBase__UpdateNoticeNumber(Instance, v3);
}


bool __fastcall MainMenuBar__get_IsEnableOutSideCollider(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Collider_o *properties; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *klass; // x20
  UnityEngine_Object_c *v8; // x8

  if ( (byte_4B01791 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_4B01791 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
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
  v8 = Instance[2].klass;
  if ( !v8 || (properties = (UnityEngine_Collider_o *)v8->_1.properties) == 0LL )
LABEL_14:
    sub_1BC3264(properties, v5);
  return UnityEngine_Collider__get_enabled(properties, 0LL);
}


bool __fastcall MainMenuBar__get_IsMenuBarActive(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *v4; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *klass; // x20

  if ( (byte_4B01792 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_4B01792 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
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
    sub_1BC3264(v4, v5);
  return MainMenuBarBase__get_IsMenuBarActive((MainMenuBarBase_o *)v4, v5);
}


void __fastcall MainMenuBar__requestSelectedSceneChange(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B0179E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_4B0179E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v4 )
      sub_1BC3264(0LL, v5);
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

  if ( (byte_4B0179C & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_4B0179C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v4 )
      sub_1BC3264(0LL, v5);
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

  if ( (byte_4B0179D & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_4B0179D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v4 )
      sub_1BC3264(0LL, v5);
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
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4B01793 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v7);
    byte_4B01793 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_1BC3264(v9, v10);
    MainMenuBar__SetResumeMenu((MainMenuBar_o *)Instance, scene, kind, depth, v11);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x5

  if ( (byte_4B01794 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, cam);
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5);
    byte_4B01794 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1BC3264(v7, v8);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, -1, cam, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__setActiveScene_40312300(
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

  if ( (byte_4B01795 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&depth);
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v7);
    byte_4B01795 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_1BC3264(v9, v10);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, depth, cam, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__setActiveScene_40312508(
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

  if ( (byte_4B01796 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v9);
    byte_4B01796 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v11 )
  {
    if ( !Instance )
      sub_1BC3264(v11, v12);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, kind, depth, cam, v13);
  }
}


void __fastcall MainMenuBar__setButtonActive(bool isActive, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4B0179B & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v3);
    byte_4B0179B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1BC3264(v5, v6);
    MainMenuBar__SetButtonActive((MainMenuBar_o *)Instance, (int32_t)Instance[2].klass, isActive, v7);
  }
}


void __fastcall MainMenuBar__setCloseHideMode(bool is_enable, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppClass *klass; // x8

  if ( (byte_4B0179A & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_4B0179A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1BC3264(Instance, v4);
  LOBYTE(klass->vtable[6].method) = is_enable;
  if ( is_enable )
    GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)klass->_1.interopData, -420.0, 0LL);
}


void __fastcall MainMenuBar__setKind(int32_t kind, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B01797 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v3);
    byte_4B01797 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1BC3264(v5, v6);
    MainMenuBar__SetButtonKind((MainMenuBar_o *)Instance, kind, v7);
  }
}


void __fastcall MainMenuBar__setMenuActive(bool isActive, UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4B01798 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, cam);
    sub_1BC3008(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5);
    byte_4B01798 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1BC3264(v7, v8);
    MainMenuBar__SetMenuActive((MainMenuBar_o *)Instance, isActive, cam, v9);
  }
}