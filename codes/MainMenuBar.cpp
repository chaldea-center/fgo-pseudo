void __fastcall MainMenuBar___ctor(MainMenuBar_o *this, const MethodInfo *method)
{
  if ( (byte_4BC71CC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar___ctor__, method);
    byte_4BC71CC = 1;
  }
  this->fields.panelDepth = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_387ACC0 *)Method_SingletonMonoBehaviour_MainMenuBar___ctor__);
}


void __fastcall MainMenuBar__FrameIn(bool is_force, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_4BC71CA & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_4BC71CA = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1C1AE30(Instance, v4);
  MainMenuBarBase__FrameInOut(Instance, 1, is_force, v5);
}


void __fastcall MainMenuBar__FrameOut(bool is_force, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_4BC71CB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_4BC71CB = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1C1AE30(Instance, v4);
  MainMenuBarBase__FrameInOut(Instance, 0, is_force, v5);
}


void __fastcall MainMenuBar__RequestSelectedSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_4BC71C2 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC71C2 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v5 = this->fields.barBase;
    if ( !v5 )
      sub_1C1AE30(0LL, v4);
    MainMenuBarBase__RequestSelectedSceneChange(v5, v4);
  }
}


void __fastcall MainMenuBar__RequestSelectedSignal(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v4; // x1
  MainMenuBarBase_o *v5; // x0

  if ( (byte_4BC71C0 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC71C0 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v5 = this->fields.barBase;
    if ( !v5 )
      sub_1C1AE30(0LL, v4);
    MainMenuBarBase__RequestSelectedSignal(v5, v4);
  }
}


void __fastcall MainMenuBar__RequestTerminalSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *barBase; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BC71C1 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC71C1 = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL);
  if ( v4 )
  {
    if ( !this->fields.barBase )
      sub_1C1AE30(v4, v5);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UnityEngine_Object_o *obj; // x26
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  PartyOrganizationUtility_o *p_activeScene; // x24
  UnityEngine_Object_o *monitor; // x24
  __int64 v34; // x1
  const MethodInfo *v35; // x5

  if ( (byte_4BC71BB & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, scene);
    byte_4BC71BB = 1;
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
    UnityEngine_Object__DestroyImmediate_70794600(obj, 0LL);
    this->fields.obj = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.obj, 0LL, v20, v21, v22, v23, v24, v25);
    *p_barBase = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.barBase, 0LL, v26, v27, v28, v29, v30, v31);
  }
  this->fields.activeScene = scene;
  p_activeScene = (PartyOrganizationUtility_o *)&this->fields.activeScene;
  *(_DWORD *)&p_activeScene[-1].fields._IsQuestStartMenuMode_k__BackingField = kind;
  *(_DWORD *)(&p_activeScene[-1].fields._IsNormalFlowQuest_k__BackingField + 3) = panelDepth;
  sub_1C1AB78(p_activeScene, (int64_t)scene, v13, v14, v15, v16, v17, v18);
  monitor = (UnityEngine_Object_o *)p_activeScene->monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
  {
    if ( !*p_barBase )
      sub_1C1AE30(0LL, v34);
    MainMenuBarBase__SetActiveScene(*p_barBase, scene, kind, panelDepth, cam, v35);
  }
}


void __fastcall MainMenuBar__SetAllBtnAct(System_Action_o *act, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  Il2CppClass *klass; // x8

  if ( (byte_4BC71C9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_4BC71C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1C1AE30(Instance, v4);
  klass->vtable[5].methodPtr = (Il2CppMethodPointer)act;
  sub_1C1AB78((PartyOrganizationUtility_o *)&klass->vtable[5], (int64_t)act, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_4BC71B5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UIPanel___, v2);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5);
    byte_4BC71B5 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
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
                                                        (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1C1AE30(Component_object, v8);
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

  if ( (byte_4BC71BF & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    byte_4BC71BF = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v10 = this->fields.barBase;
    if ( !v10 )
      sub_1C1AE30(0LL, v8);
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

  if ( (byte_4BC71BC & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    byte_4BC71BC = 1;
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
      sub_1C1AE30(v6, v7);
    v8->fields.kind = kind;
  }
}


void __fastcall MainMenuBar__SetDispBtnAct(int32_t kind, System_Action_o *act, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4BC71C8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, act);
    byte_4BC71C8 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1C1AE30(Instance, v6);
  MainMenuBarBase__SetDispBtnAct(Instance, kind, act, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetDispBtnColliderEnable(bool is_enable, int32_t kind, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4BC71C7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, *(_QWORD *)&kind);
    byte_4BC71C7 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1C1AE30(Instance, v6);
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
  Il2CppObject *ComponentInChildren_object__49897880; // x0
  UnityEngine_Component_o *v19; // x23
  Il2CppObject *object; // x24
  Il2CppObject *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  UnityEngine_Transform_o *v28; // x24
  UnityEngine_Transform_o *v29; // x24
  UnityEngine_Transform_o *v30; // x24
  UnityEngine_Transform_o *v31; // x24
  UnityEngine_GameObject_o *v32; // x24
  Il2CppObject *Component_object; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  const MethodInfo *v40; // x5
  UnityEngine_Object_o *barBase; // x21
  const MethodInfo *v42; // x2

  if ( (byte_4BC71BE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___, isActive);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___, v7);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_UICamera___, v8);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    sub_1C1ABD4(&Method_UnityEngine_Resources_Load_GameObject___, v11);
    sub_1C1ABD4(&StringLiteral_4725/*"CommonUI/MainMenuBarPrefab"*/, v12);
    byte_4BC71BE = 1;
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
          ComponentInChildren_object__49897880 = UnityEngine_Component__GetComponentInChildren_object__49897880(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2F96198 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
        }
        else
        {
          if ( !cam )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0LL);
          if ( !gameObject )
            goto LABEL_49;
          ComponentInChildren_object__49897880 = UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)gameObject,
                                                   (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
        }
        v19 = (UnityEngine_Component_o *)ComponentInChildren_object__49897880;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
        {
          object = UnityEngine_Resources__Load_object_(
                     (System_String_o *)StringLiteral_4725/*"CommonUI/MainMenuBarPrefab"*/,
                     (const MethodInfo_303479C *)Method_UnityEngine_Resources_Load_GameObject___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v21 = UnityEngine_Object__Instantiate_object_(
                  object,
                  (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          *p_obj = (struct UnityEngine_GameObject_o *)v21;
          sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.obj, (int64_t)v21, v22, v23, v24, v25, v26, v27);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !v19 )
            goto LABEL_49;
          v28 = (UnityEngine_Transform_o *)gameObject;
          gameObject = (__int64)UnityEngine_Component__get_transform(v19, 0LL);
          if ( !v28 )
            goto LABEL_49;
          UnityEngine_Transform__set_parent(v28, (UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v29 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4BC2141 )
          {
            gameObject = sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v17);
            byte_4BC2141 = 1;
          }
          if ( !v29 )
            goto LABEL_49;
          UnityEngine_Transform__set_localPosition(v29, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v30 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4BC2147 )
          {
            gameObject = sub_1C1ABD4(&UnityEngine_Quaternion_TypeInfo, v17);
            byte_4BC2147 = 1;
          }
          if ( !v30 )
            goto LABEL_49;
          UnityEngine_Transform__set_localRotation(
            v30,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v31 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4BC2146 )
          {
            gameObject = sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v17);
            byte_4BC2146 = 1;
          }
          if ( !v31 )
            goto LABEL_49;
          UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          v32 = *p_obj;
          gameObject = (__int64)UnityEngine_Component__get_gameObject(v19, 0LL);
          if ( !gameObject )
            goto LABEL_49;
          gameObject = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !v32 )
            goto LABEL_49;
          UnityEngine_GameObject__set_layer(v32, gameObject, 0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___);
          this->fields.barBase = (struct MainMenuBarBase_o *)Component_object;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&this->fields.barBase,
            (int64_t)Component_object,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39);
          gameObject = (__int64)this->fields.barBase;
          if ( !gameObject )
            goto LABEL_49;
          MainMenuBarBase__SetActiveScene(
            (MainMenuBarBase_o *)gameObject,
            this->fields.activeScene,
            this->fields.kind,
            this->fields.panelDepth,
            cam,
            v40);
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
      MainMenuBarBase__SetMenuActive((MainMenuBarBase_o *)gameObject, isActive, v42);
      return;
    }
LABEL_49:
    sub_1C1AE30(gameObject, v17);
  }
}


void __fastcall MainMenuBar__SetMenuBtnAct(System_Action_o *act, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  Il2CppClass *klass; // x8

  if ( (byte_4BC71C6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_4BC71C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1C1AE30(Instance, v4);
  klass->vtable[4].methodPtr = (Il2CppMethodPointer)act;
  sub_1C1AB78((PartyOrganizationUtility_o *)&klass->vtable[4], (int64_t)act, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetMenuBtnColliderEnable(bool isEnable, bool isGray, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4BC71C5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, isGray);
    byte_4BC71C5 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1C1AE30(Instance, v6);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  UnityEngine_Object_o *obj; // x21
  UnityEngine_Object_o *v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x3

  if ( (byte_4BC71BD & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, scene);
    byte_4BC71BD = 1;
  }
  activeScene = (UnityEngine_Object_o *)this->fields.activeScene;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeScene, (UnityEngine_Object_o *)scene, 0LL) )
  {
    this->fields.kind = kind;
    this->fields.panelDepth = panelDepth;
    this->fields.activeScene = scene;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.activeScene, (int64_t)scene, v10, v11, v12, v13, v14, v15);
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(obj, 0LL, 0LL) )
    {
      v17 = (UnityEngine_Object_o *)this->fields.obj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70794600(v17, 0LL);
      this->fields.obj = 0LL;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.obj, 0LL, v18, v19, v20, v21, v22, v23);
      this->fields.barBase = 0LL;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.barBase, 0LL, v24, v25, v26, v27, v28, v29);
      MainMenuBar__SetMenuActive(this, 1, 0LL, v30);
    }
  }
}


void __fastcall MainMenuBar__SetSceneChangeFadeType(int32_t fadeType, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppClass *klass; // x8

  if ( (byte_4BC71C3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_4BC71C3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1C1AE30(Instance, v4);
  LODWORD(klass->vtable[2].methodPtr) = fadeType;
}


void __fastcall MainMenuBar__UpdateNoticeNumber(const MethodInfo *method)
{
  __int64 v1; // x1
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4BC71C4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v1);
    byte_4BC71C4 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1C1AE30(Instance, v3);
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

  if ( (byte_4BC71AD & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v1);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_4BC71AD = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
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
    sub_1C1AE30(properties, v5);
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

  if ( (byte_4BC71AE & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v1);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_4BC71AE = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
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
    sub_1C1AE30(v4, v5);
  return MainMenuBarBase__get_IsMenuBarActive((MainMenuBarBase_o *)v4, v5);
}


void __fastcall MainMenuBar__requestSelectedSceneChange(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BC71BA & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v1);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_4BC71BA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v4 )
      sub_1C1AE30(0LL, v5);
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

  if ( (byte_4BC71B8 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v1);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_4BC71B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v4 )
      sub_1C1AE30(0LL, v5);
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

  if ( (byte_4BC71B9 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v1);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v2);
    byte_4BC71B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v4 )
      sub_1C1AE30(0LL, v5);
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

  if ( (byte_4BC71AF & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v7);
    byte_4BC71AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_1C1AE30(v9, v10);
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

  if ( (byte_4BC71B0 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, cam);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5);
    byte_4BC71B0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1C1AE30(v7, v8);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, -1, cam, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__setActiveScene_39608656(
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

  if ( (byte_4BC71B1 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&depth);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v7);
    byte_4BC71B1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_1C1AE30(v9, v10);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, depth, cam, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__setActiveScene_39608864(
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

  if ( (byte_4BC71B2 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v9);
    byte_4BC71B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v11 )
  {
    if ( !Instance )
      sub_1C1AE30(v11, v12);
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

  if ( (byte_4BC71B7 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v3);
    byte_4BC71B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1C1AE30(v5, v6);
    MainMenuBar__SetButtonActive((MainMenuBar_o *)Instance, (int32_t)Instance[2].klass, isActive, v7);
  }
}


void __fastcall MainMenuBar__setCloseHideMode(bool is_enable, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppClass *klass; // x8

  if ( (byte_4BC71B6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method);
    byte_4BC71B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1C1AE30(Instance, v4);
  LOBYTE(klass->vtable[5].method) = is_enable;
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

  if ( (byte_4BC71B3 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v3);
    byte_4BC71B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1C1AE30(v5, v6);
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

  if ( (byte_4BC71B4 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, cam);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5);
    byte_4BC71B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1C1AE30(v7, v8);
    MainMenuBar__SetMenuActive((MainMenuBar_o *)Instance, isActive, cam, v9);
  }
}