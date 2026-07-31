void WarBoardSceneRoot___ctor(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


WarBoardDataEntity_o *WarBoardSceneRoot__GetWarBoardDataEntity(
        WarBoardSceneRoot_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  Il2CppClass *klass; // x8
  __int64 naturalAligment; // x10
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  WarBoardDataEntity_o *v14; // x20

  v3 = data;
  if ( (byte_593633C & 1) == 0 )
  {
    sub_21FFC50(&Method_JsonManager_Deserialize_WarBoardDataEntity___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&WarBoardDataEntity_TypeInfo);
    byte_593633C = 1;
  }
  if ( v3 )
  {
    klass = v3->klass;
    naturalAligment = WarBoardDataEntity_TypeInfo->_2.naturalAligment;
    if ( v3->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarBoardDataEntity_c *)klass->_2.typeHierarchy[naturalAligment - 1] != WarBoardDataEntity_TypeInfo )
    {
      if ( klass == (Il2CppClass *)qword_594C0B8 )
      {
        if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, data, method);
        v6 = JsonManager__Deserialize_object_(
               v3,
               (const MethodInfo_38A041C *)Method_JsonManager_Deserialize_WarBoardDataEntity___);
        if ( !v6 )
          sub_21FFECC(0, v7);
        v14 = (WarBoardDataEntity_o *)v6;
        v6[9].monitor = v3;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v6[9].monitor, (int32_t)v3, v8, v9, v10, v11, v12, v13);
        return v14;
      }
      else
      {
        return 0;
      }
    }
  }
  return (WarBoardDataEntity_o *)v3;
}


void WarBoardSceneRoot____n__0(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_48429240((SceneRootComponent_o *)this, 0);
}


void WarBoardSceneRoot___beginResume_b__3_0(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_593633D & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593633D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_21FFECC(Instance, v4);
  }
  CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0);
  SceneRootComponent__beginStartUp_48429240((SceneRootComponent_o *)this, 0);
  SceneRootComponent__resumeMainMenuBar((SceneRootComponent_o *)this, 0);
}


void WarBoardSceneRoot__beginFinish(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  WarBoardManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_21FFECC(0, method);
  WarBoardManager__Finish(manager, 0);
  SceneRootComponent__beginFinish((SceneRootComponent_o *)this, 0);
}


void WarBoardSceneRoot__beginInitialize(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5936339 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5936339 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void WarBoardSceneRoot__beginResume(WarBoardSceneRoot_o *this, Il2CppObject *data, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v9; // x2
  long double v10; // q0
  __int64 v11; // x0
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  WarBoardDataEntity_o *WarBoardDataEntity; // x20
  WarBoardManager_o *manager; // x21
  System_Action_o *v17; // x22

  if ( (byte_593633B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_WarBoardSceneRoot__beginResume_b__3_0__);
    byte_593633B = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_2237AF8(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_2237AF8(v3);
  Instance = **(Il2CppObject ***)(v7 + 184);
  if ( !Instance )
    goto LABEL_26;
  WarBoardManager__ResumeBgm((WarBoardManager_o *)Instance, 0);
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_2237AF8(v10);
  Instance = *(Il2CppObject **)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_WORD *)((_BYTE *)&Instance[19].klass + 5) & 1) == 0 )
    Instance = (Il2CppObject *)sub_2237AF8(v10);
  v12 = *(_QWORD *)Instance[11].monitor;
  if ( !v12 )
    goto LABEL_26;
  if ( *(_BYTE *)(v12 + 840) )
  {
    v13 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
      v13 = sub_2237AF8(v10);
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
    if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
      v14 = sub_2237AF8(v10);
    Instance = **(Il2CppObject ***)(v14 + 184);
    if ( Instance )
    {
      WarBoardManager__OnCloseUserEquipScene((WarBoardManager_o *)Instance, 0);
      ((void (__fastcall *)(WarBoardSceneRoot_o *, const MethodInfo *))this->klass->vtable._6_beginStartUp.methodPtr)(
        this,
        this->klass->vtable._6_beginStartUp.method);
      SceneRootComponent__resumeMainMenuBar((SceneRootComponent_o *)this, 0);
      return;
    }
LABEL_26:
    sub_21FFECC(Instance, data);
  }
  if ( data )
  {
    WarBoardDataEntity = WarBoardSceneRoot__GetWarBoardDataEntity((WarBoardSceneRoot_o *)Instance, data, v9);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
    manager = this->fields.manager;
    v17 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_WarBoardSceneRoot__beginResume_b__3_0__, 0);
    if ( !manager )
      goto LABEL_26;
    WarBoardManager__Resume(manager, WarBoardDataEntity, v17, 0);
  }
  else
  {
    SceneRootComponent__beginResume((SceneRootComponent_o *)this, 0, 0);
  }
}


void WarBoardSceneRoot__beginStartUp(WarBoardSceneRoot_o *this, Il2CppObject *data, const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  WarBoardSceneRoot_o *v14; // x0
  const MethodInfo *v15; // x2
  WarBoardDataEntity_o *WarBoardDataEntity; // x0
  WarBoardDataEntity_o **v17; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  WarBoardDataEntity_o *v24; // x22
  WarBoardManager_o *manager; // x19
  System_Action_o *v26; // x21

  if ( (byte_593633A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_WarBoardSceneRoot___c__DisplayClass2_0__beginStartUp_b__0__);
    sub_21FFC50(&WarBoardSceneRoot___c__DisplayClass2_0_TypeInfo);
    byte_593633A = 1;
  }
  v5 = sub_21FFEBC(WarBoardSceneRoot___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  WarBoardDataEntity = WarBoardSceneRoot__GetWarBoardDataEntity(v14, data, v15);
  *(_QWORD *)(v5 + 16) = WarBoardDataEntity;
  v17 = (WarBoardDataEntity_o **)(v5 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)WarBoardDataEntity, v18, v19, v20, v21, v22, v23);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0);
  v24 = *v17;
  if ( !*v17 )
    goto LABEL_11;
  if ( v24->fields.progressType != 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
    v24 = *v17;
  }
  manager = this->fields.manager;
  v26 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)v5, Method_WarBoardSceneRoot___c__DisplayClass2_0__beginStartUp_b__0__, 0);
  if ( !manager )
LABEL_11:
    sub_21FFECC(Instance, v7);
  WarBoardManager__Initialize(manager, v24, v26, 0);
}


void WarBoardSceneRoot___c__DisplayClass2_0___ctor(
        WarBoardSceneRoot___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardSceneRoot___c__DisplayClass2_0___beginStartUp_b__0(
        WarBoardSceneRoot___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  WarBoardSceneRoot___c__DisplayClass2_0_o *v2; // x19
  struct WarBoardDataEntity_o *warBoardData; // x8
  int32_t progressType; // w21

  v2 = this;
  if ( (byte_593633E & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_593633E = 1;
  }
  warBoardData = v2->fields.warBoardData;
  if ( !warBoardData )
    goto LABEL_12;
  progressType = warBoardData->fields.progressType;
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( progressType == 2 )
  {
    if ( this )
    {
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
      this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( this )
      {
        AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 10, 2, 0, 0);
        return;
      }
    }
LABEL_12:
    sub_21FFECC(this, method);
  }
  if ( !this )
    goto LABEL_12;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_12;
  CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_12;
  SceneRootComponent__beginStartUp_48429240((SceneRootComponent_o *)this, 0);
}