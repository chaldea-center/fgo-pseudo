void __fastcall MainMenuBar___ctor(MainMenuBar_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15927 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar___ctor__, method, v2);
    byte_4B15927 = 1;
  }
  this->fields.panelDepth = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_MainMenuBar___ctor__);
}


void __fastcall MainMenuBar__FrameIn(bool is_force, const MethodInfo *method)
{
  __int64 v2; // x2
  MainMenuBarBase_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4B15925 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method, v2);
    byte_4B15925 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1BCAA3C(Instance, v5);
  MainMenuBarBase__FrameInOut(Instance, 1, is_force, v6);
}


void __fastcall MainMenuBar__FrameOut(bool is_force, const MethodInfo *method)
{
  __int64 v2; // x2
  MainMenuBarBase_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4B15926 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method, v2);
    byte_4B15926 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1BCAA3C(Instance, v5);
  MainMenuBarBase__FrameInOut(Instance, 0, is_force, v6);
}


void __fastcall MainMenuBar__RequestSelectedSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v5; // x1
  MainMenuBarBase_o *v6; // x0

  if ( (byte_4B1591D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1591D = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v6 = this->fields.barBase;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    MainMenuBarBase__RequestSelectedSceneChange(v6, v5);
  }
}


void __fastcall MainMenuBar__RequestSelectedSignal(MainMenuBar_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *barBase; // x20
  const MethodInfo *v5; // x1
  MainMenuBarBase_o *v6; // x0

  if ( (byte_4B1591B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1591B = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v6 = this->fields.barBase;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    MainMenuBarBase__RequestSelectedSignal(v6, v5);
  }
}


void __fastcall MainMenuBar__RequestTerminalSceneChange(MainMenuBar_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *barBase; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B1591C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1591C = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL);
  if ( v5 )
  {
    if ( !this->fields.barBase )
      sub_1BCAA3C(v5, v6);
    MainMenuBarBase__RequestTerminalSceneChange((MainMenuBarBase_o *)v5, v6);
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
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_Object_o *obj; // x26
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  PartyOrganizationUtility_o *p_activeScene; // x24
  __int64 v34; // x1
  UnityEngine_Object_o *monitor; // x24
  __int64 v36; // x1
  const MethodInfo *v37; // x5

  if ( (byte_4B15916 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, scene, *(_QWORD *)&kind);
    byte_4B15916 = 1;
  }
  p_barBase = &this->fields.barBase;
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, scene);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    UnityEngine_Object__DestroyImmediate_70154432(obj, 0LL);
    this->fields.obj = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.obj, 0LL, v21, v22, v23, v24, v25, v26);
    *p_barBase = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.barBase, 0LL, v27, v28, v29, v30, v31, v32);
  }
  this->fields.activeScene = scene;
  p_activeScene = (PartyOrganizationUtility_o *)&this->fields.activeScene;
  *(_DWORD *)&p_activeScene[-1].fields._IsQuestStartMenuMode_k__BackingField = kind;
  *(_DWORD *)(&p_activeScene[-1].fields._IsNormalFlowQuest_k__BackingField + 3) = panelDepth;
  sub_1BCA784(p_activeScene, (int64_t)scene, v14, v15, v16, v17, v18, v19);
  monitor = (UnityEngine_Object_o *)p_activeScene->monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
  if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
  {
    if ( !*p_barBase )
      sub_1BCAA3C(0LL, v36);
    MainMenuBarBase__SetActiveScene(*p_barBase, scene, kind, panelDepth, cam, v37);
  }
}


void __fastcall MainMenuBar__SetAllBtnAct(System_Action_o *act, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  Il2CppClass *klass; // x8

  if ( (byte_4B15924 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method, v2);
    byte_4B15924 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1BCAA3C(Instance, v5);
  klass->vtable[5].methodPtr = (Il2CppMethodPointer)act;
  sub_1BCA784((PartyOrganizationUtility_o *)&klass->vtable[5], (int64_t)act, v6, v7, v8, v9, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetAlpha(float alpha, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  long double v4; // q8
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Component_o *Component_object; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *klass; // x20

  v4 = *(long double *)&alpha;
  if ( (byte_4B15910 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, v2, v3);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v7, v8);
    byte_4B15910 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  Component_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    if ( Instance )
    {
      klass = (UnityEngine_Object_o *)Instance[2].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      if ( UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
        return;
      Component_object = (UnityEngine_Component_o *)Instance[2].klass;
      if ( Component_object )
      {
        Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                        Component_object,
                                                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
        if ( Component_object )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, long double))Component_object->klass[1]._1.castClass)(
            Component_object,
            Component_object->klass[1]._1.declaringType,
            v4);
          return;
        }
      }
    }
    sub_1BCAA3C(Component_object, v12);
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

  if ( (byte_4B1591A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind, isActive);
    byte_4B1591A = 1;
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    v10 = this->fields.barBase;
    if ( !v10 )
      sub_1BCAA3C(0LL, v8);
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

  if ( (byte_4B15917 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind, method);
    byte_4B15917 = 1;
  }
  this->fields.kind = kind;
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
  v6 = UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL);
  if ( v6 )
  {
    v8 = this->fields.barBase;
    if ( !v8 )
      sub_1BCAA3C(v6, v7);
    v8->fields.kind = kind;
  }
}


void __fastcall MainMenuBar__SetDispBtnAct(int32_t kind, System_Action_o *act, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4B15923 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, act, method);
    byte_4B15923 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1BCAA3C(Instance, v6);
  MainMenuBarBase__SetDispBtnAct(Instance, kind, act, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetDispBtnColliderEnable(bool is_enable, int32_t kind, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4B15922 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, *(_QWORD *)&kind, method);
    byte_4B15922 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1BCAA3C(Instance, v6);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct UnityEngine_GameObject_o **p_obj; // x22
  UnityEngine_Object_o *obj; // x23
  UnityEngine_Object_o *activeScene; // x23
  __int64 gameObject; // x0
  __int64 v23; // x1
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  __int64 v25; // x1
  UnityEngine_Component_o *v26; // x23
  __int64 v27; // x1
  Il2CppObject *object; // x24
  Il2CppObject *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  UnityEngine_Transform_o *v36; // x24
  __int64 v37; // x2
  UnityEngine_Transform_o *v38; // x24
  __int64 v39; // x2
  UnityEngine_Transform_o *v40; // x24
  __int64 v41; // x2
  UnityEngine_Transform_o *v42; // x24
  UnityEngine_GameObject_o *v43; // x24
  Il2CppObject *Component_object; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  const MethodInfo *v51; // x5
  UnityEngine_Object_o *barBase; // x21
  const MethodInfo *v53; // x2

  if ( (byte_4B15919 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___, isActive, cam);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICamera___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_GameObject___, v15, v16);
    sub_1BCA7E0(&StringLiteral_4708/*"CommonUI/MainMenuBarPrefab"*/, v17, v18);
    byte_4B15919 = 1;
  }
  if ( isActive )
  {
    p_obj = &this->fields.obj;
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
    if ( UnityEngine_Object__op_Equality(obj, 0LL, 0LL) )
    {
      activeScene = (UnityEngine_Object_o *)this->fields.activeScene;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
      if ( UnityEngine_Object__op_Inequality(activeScene, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
        gameObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
        if ( (gameObject & 1) != 0 )
        {
          gameObject = (__int64)this->fields.activeScene;
          if ( !gameObject )
            goto LABEL_49;
          ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
        }
        else
        {
          if ( !cam )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0LL);
          if ( !gameObject )
            goto LABEL_49;
          ComponentInChildren_object__49322392 = UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)gameObject,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
        }
        v26 = (UnityEngine_Component_o *)ComponentInChildren_object__49322392;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0LL, 0LL) )
        {
          object = UnityEngine_Resources__Load_object_(
                     (System_String_o *)StringLiteral_4708/*"CommonUI/MainMenuBarPrefab"*/,
                     (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_GameObject___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
          v29 = UnityEngine_Object__Instantiate_object_(
                  object,
                  (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          *p_obj = (struct UnityEngine_GameObject_o *)v29;
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.obj, (int64_t)v29, v30, v31, v32, v33, v34, v35);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !v26 )
            goto LABEL_49;
          v36 = (UnityEngine_Transform_o *)gameObject;
          gameObject = (__int64)UnityEngine_Component__get_transform(v26, 0LL);
          if ( !v36 )
            goto LABEL_49;
          UnityEngine_Transform__set_parent(v36, (UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v38 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4B109C1 )
          {
            gameObject = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v23, v37);
            byte_4B109C1 = 1;
          }
          if ( !v38 )
            goto LABEL_49;
          UnityEngine_Transform__set_localPosition(v38, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v40 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4B109C7 )
          {
            gameObject = sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v23, v39);
            byte_4B109C7 = 1;
          }
          if ( !v40 )
            goto LABEL_49;
          UnityEngine_Transform__set_localRotation(
            v40,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v42 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4B109C6 )
          {
            gameObject = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v23, v41);
            byte_4B109C6 = 1;
          }
          if ( !v42 )
            goto LABEL_49;
          UnityEngine_Transform__set_localScale(v42, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          v43 = *p_obj;
          gameObject = (__int64)UnityEngine_Component__get_gameObject(v26, 0LL);
          if ( !gameObject )
            goto LABEL_49;
          gameObject = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !v43 )
            goto LABEL_49;
          UnityEngine_GameObject__set_layer(v43, gameObject, 0LL);
          gameObject = (__int64)*p_obj;
          if ( !*p_obj )
            goto LABEL_49;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MainMenuBarBase___);
          this->fields.barBase = (struct MainMenuBarBase_o *)Component_object;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.barBase,
            (int64_t)Component_object,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50);
          gameObject = (__int64)this->fields.barBase;
          if ( !gameObject )
            goto LABEL_49;
          MainMenuBarBase__SetActiveScene(
            (MainMenuBarBase_o *)gameObject,
            this->fields.activeScene,
            this->fields.kind,
            this->fields.panelDepth,
            cam,
            v51);
        }
      }
    }
  }
  barBase = (UnityEngine_Object_o *)this->fields.barBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
  if ( UnityEngine_Object__op_Inequality(barBase, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.barBase;
    if ( gameObject )
    {
      MainMenuBarBase__SetMenuActive((MainMenuBarBase_o *)gameObject, isActive, v53);
      return;
    }
LABEL_49:
    sub_1BCAA3C(gameObject, v23);
  }
}


void __fastcall MainMenuBar__SetMenuBtnAct(System_Action_o *act, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  Il2CppClass *klass; // x8

  if ( (byte_4B15921 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method, v2);
    byte_4B15921 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1BCAA3C(Instance, v5);
  klass->vtable[4].methodPtr = (Il2CppMethodPointer)act;
  sub_1BCA784((PartyOrganizationUtility_o *)&klass->vtable[4], (int64_t)act, v6, v7, v8, v9, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__SetMenuBtnColliderEnable(bool isEnable, bool isGray, const MethodInfo *method)
{
  MainMenuBarBase_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4B15920 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, isGray, method);
    byte_4B15920 = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1BCAA3C(Instance, v6);
  MainMenuBarBase__SetMenuBtnColliderEnable(Instance, isEnable, isGray, v7);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  UnityEngine_Object_o *obj; // x21
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x21
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
  const MethodInfo *v32; // x3

  if ( (byte_4B15918 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, scene, *(_QWORD *)&kind);
    byte_4B15918 = 1;
  }
  activeScene = (UnityEngine_Object_o *)this->fields.activeScene;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, scene);
  if ( UnityEngine_Object__op_Inequality(activeScene, (UnityEngine_Object_o *)scene, 0LL) )
  {
    this->fields.kind = kind;
    this->fields.panelDepth = panelDepth;
    this->fields.activeScene = scene;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.activeScene, (int64_t)scene, v10, v11, v12, v13, v14, v15);
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Inequality(obj, 0LL, 0LL) )
    {
      v19 = (UnityEngine_Object_o *)this->fields.obj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      UnityEngine_Object__DestroyImmediate_70154432(v19, 0LL);
      this->fields.obj = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.obj, 0LL, v20, v21, v22, v23, v24, v25);
      this->fields.barBase = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.barBase, 0LL, v26, v27, v28, v29, v30, v31);
      MainMenuBar__SetMenuActive(this, 1, 0LL, v32);
    }
  }
}


void __fastcall MainMenuBar__SetSceneChangeFadeType(int32_t fadeType, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppClass *klass; // x8

  if ( (byte_4B1591E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method, v2);
    byte_4B1591E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1BCAA3C(Instance, v5);
  LODWORD(klass->vtable[2].methodPtr) = fadeType;
}


void __fastcall MainMenuBar__UpdateNoticeNumber(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MainMenuBarBase_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4B1591F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v1, v2);
    byte_4B1591F = 1;
  }
  Instance = (MainMenuBarBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (Instance = (MainMenuBarBase_o *)Instance->fields.partyBtn) == 0LL )
    sub_1BCAA3C(Instance, v4);
  MainMenuBarBase__UpdateNoticeNumber(Instance, v4);
}


bool __fastcall MainMenuBar__get_IsEnableOutSideCollider(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Collider_o *properties; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *klass; // x20
  UnityEngine_Object_c *v11; // x8

  if ( (byte_4B15908 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v3, v4);
    byte_4B15908 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  properties = (UnityEngine_Collider_o *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)properties & 1) != 0 )
    return 0;
  if ( !Instance )
    goto LABEL_14;
  klass = (UnityEngine_Object_o *)Instance[2].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  properties = (UnityEngine_Collider_o *)UnityEngine_Object__op_Equality(klass, 0LL, 0LL);
  if ( ((unsigned __int8)properties & 1) != 0 )
    return 0;
  v11 = Instance[2].klass;
  if ( !v11 || (properties = (UnityEngine_Collider_o *)v11->_1.properties) == 0LL )
LABEL_14:
    sub_1BCAA3C(properties, v8);
  return UnityEngine_Collider__get_enabled(properties, 0LL);
}


bool __fastcall MainMenuBar__get_IsMenuBarActive(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *v7; // x0
  const MethodInfo *v8; // x1
  UnityEngine_Object_o *klass; // x20

  if ( (byte_4B15909 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v3, v4);
    byte_4B15909 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
    return 0;
  if ( !Instance )
    goto LABEL_13;
  klass = (UnityEngine_Object_o *)Instance[2].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
    return 0;
  v7 = Instance[2].klass;
  if ( !v7 )
LABEL_13:
    sub_1BCAA3C(v7, v8);
  return MainMenuBarBase__get_IsMenuBarActive((MainMenuBarBase_o *)v7, v8);
}


void __fastcall MainMenuBar__requestSelectedSceneChange(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B15915 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v3, v4);
    byte_4B15915 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v7 )
      sub_1BCAA3C(0LL, v8);
    MainMenuBar__RequestSelectedSceneChange((MainMenuBar_o *)v7, v8);
  }
}


void __fastcall MainMenuBar__requestSelectedSignal(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B15913 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v3, v4);
    byte_4B15913 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v7 )
      sub_1BCAA3C(0LL, v8);
    MainMenuBar__RequestSelectedSignal((MainMenuBar_o *)v7, v8);
  }
}


void __fastcall MainMenuBar__requestTerminalSceneChange(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B15914 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v3, v4);
    byte_4B15914 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
    if ( !v7 )
      sub_1BCAA3C(0LL, v8);
    MainMenuBar__RequestTerminalSceneChange((MainMenuBar_o *)v7, v8);
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
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_4B1590A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&depth);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v7, v8);
    byte_4B1590A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v11 )
  {
    if ( !Instance )
      sub_1BCAA3C(v11, v12);
    MainMenuBar__SetResumeMenu((MainMenuBar_o *)Instance, scene, kind, depth, v13);
  }
}


void __fastcall MainMenuBar__setActiveScene(
        SceneRootComponent_o *scene,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4B1590B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, cam, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5, v6);
    byte_4B1590B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_1BCAA3C(v9, v10);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, -1, cam, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__setActiveScene_39120756(
        SceneRootComponent_o *scene,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5

  if ( (byte_4B1590C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&depth, cam);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v7, v8);
    byte_4B1590C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v11 )
  {
    if ( !Instance )
      sub_1BCAA3C(v11, v12);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, 0, depth, cam, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBar__setActiveScene_39120964(
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t depth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Il2CppObject *Instance; // x23
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x5

  if ( (byte_4B1590D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&depth);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v9, v10);
    byte_4B1590D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v13 )
  {
    if ( !Instance )
      sub_1BCAA3C(v13, v14);
    MainMenuBar__SetActiveScene((MainMenuBar_o *)Instance, scene, kind, depth, cam, v15);
  }
}


void __fastcall MainMenuBar__setButtonActive(bool isActive, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4B15912 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v4, v5);
    byte_4B15912 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1BCAA3C(v8, v9);
    MainMenuBar__SetButtonActive((MainMenuBar_o *)Instance, (int32_t)Instance[2].klass, isActive, v10);
  }
}


void __fastcall MainMenuBar__setCloseHideMode(bool is_enable, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppClass *klass; // x8

  if ( (byte_4B15911 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, method, v2);
    byte_4B15911 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !Instance || (klass = Instance[3].klass) == 0LL )
    sub_1BCAA3C(Instance, v5);
  LOBYTE(klass->vtable[5].method) = is_enable;
  if ( is_enable )
    GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)klass->_1.interopData, -420.0, 0LL);
}


void __fastcall MainMenuBar__setKind(int32_t kind, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B1590E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v4, v5);
    byte_4B1590E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1BCAA3C(v8, v9);
    MainMenuBar__SetButtonKind((MainMenuBar_o *)Instance, kind, v10);
  }
}


void __fastcall MainMenuBar__setMenuActive(bool isActive, UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4B1590F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, cam, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__, v5, v6);
    byte_4B1590F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MainMenuBar__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_1BCAA3C(v9, v10);
    MainMenuBar__SetMenuActive((MainMenuBar_o *)Instance, isActive, cam, v11);
  }
}