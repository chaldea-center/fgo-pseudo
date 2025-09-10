void WarBoardSceneRoot___ctor(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


WarBoardDataEntity_o *WarBoardSceneRoot__GetWarBoardDataEntity(
        WarBoardSceneRoot_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_c *klass; // x8
  __int64 naturalAligment; // x10
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  WarBoardDataEntity_o *v10; // x20

  if ( (byte_4C2506F & 1) == 0 )
  {
    sub_1C2D490(&Method_JsonManager_Deserialize_WarBoardDataEntity___);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&WarBoardDataEntity_TypeInfo);
    byte_4C2506F = 1;
  }
  if ( data )
  {
    klass = (System_String_c *)data->klass;
    naturalAligment = WarBoardDataEntity_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarBoardDataEntity_c *)klass->_2.typeHierarchy[naturalAligment - 1] != WarBoardDataEntity_TypeInfo )
    {
      if ( klass == string_TypeInfo )
      {
        if ( !JsonManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
        v6 = JsonManager__Deserialize_object_(
               data,
               (const MethodInfo_313DC6C *)Method_JsonManager_Deserialize_WarBoardDataEntity___);
        if ( !v6 )
          sub_1C2D6EC(0, v7);
        v10 = (WarBoardDataEntity_o *)v6;
        v6[9].monitor = data;
        sub_1C2D434((CGThumbnailListItem_o *)&v6[9].monitor, (int32_t)data, v8, v9);
        return v10;
      }
      else
      {
        return 0;
      }
    }
  }
  return (WarBoardDataEntity_o *)data;
}


void WarBoardSceneRoot____n__0(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_41259456((SceneRootComponent_o *)this, 0);
}


void WarBoardSceneRoot___beginResume_b__3_0(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C25070 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C25070 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v4);
  }
  CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0);
  SceneRootComponent__beginStartUp_41259456((SceneRootComponent_o *)this, 0);
  SceneRootComponent__resumeMainMenuBar((SceneRootComponent_o *)this, 0);
}


void WarBoardSceneRoot__beginFinish(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  WarBoardManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C2D6EC(0, method);
  WarBoardManager__Finish(manager, 0);
  SceneRootComponent__beginFinish((SceneRootComponent_o *)this, 0);
}


void WarBoardSceneRoot__beginInitialize(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2506C & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2506C = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
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

  if ( (byte_4C2506E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_WarBoardSceneRoot__beginResume_b__3_0__);
    byte_4C2506E = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C7DBA4(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C7DBA4(v3);
  Instance = **(Il2CppObject ***)(v7 + 184);
  if ( !Instance )
    goto LABEL_26;
  WarBoardManager__ResumeBgm((WarBoardManager_o *)Instance, 0);
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C7DBA4(v10);
  Instance = *(Il2CppObject **)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (BYTE5(Instance[19].klass) & 1) == 0 )
    Instance = (Il2CppObject *)sub_1C7DBA4(v10);
  v12 = *(_QWORD *)Instance[11].monitor;
  if ( !v12 )
    goto LABEL_26;
  if ( *(_BYTE *)(v12 + 840) )
  {
    v13 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C7DBA4(v10);
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C7DBA4(v10);
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
    sub_1C2D6EC(Instance, data);
  }
  if ( data )
  {
    WarBoardDataEntity = WarBoardSceneRoot__GetWarBoardDataEntity((WarBoardSceneRoot_o *)Instance, data, v9);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
    manager = this->fields.manager;
    v17 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  WarBoardSceneRoot_o *v10; // x0
  const MethodInfo *v11; // x2
  WarBoardDataEntity_o *WarBoardDataEntity; // x0
  WarBoardDataEntity_o **v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  WarBoardDataEntity_o *v16; // x22
  WarBoardManager_o *manager; // x19
  System_Action_o *v18; // x21

  if ( (byte_4C2506D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_WarBoardSceneRoot___c__DisplayClass2_0__beginStartUp_b__0__);
    sub_1C2D490(&WarBoardSceneRoot___c__DisplayClass2_0_TypeInfo);
    byte_4C2506D = 1;
  }
  v5 = sub_1C2D6DC(WarBoardSceneRoot___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  WarBoardDataEntity = WarBoardSceneRoot__GetWarBoardDataEntity(v10, data, v11);
  *(_QWORD *)(v5 + 16) = WarBoardDataEntity;
  v13 = (WarBoardDataEntity_o **)(v5 + 16);
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)WarBoardDataEntity, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0);
  v16 = *v13;
  if ( !*v13 )
    goto LABEL_11;
  if ( v16->fields.progressType != 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
    v16 = *v13;
  }
  manager = this->fields.manager;
  v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)v5, Method_WarBoardSceneRoot___c__DisplayClass2_0__beginStartUp_b__0__, 0);
  if ( !manager )
LABEL_11:
    sub_1C2D6EC(Instance, v7);
  WarBoardManager__Initialize(manager, v16, v18, 0);
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
  if ( (byte_4C25071 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C25071 = 1;
  }
  warBoardData = v2->fields.warBoardData;
  if ( !warBoardData )
    goto LABEL_11;
  progressType = warBoardData->fields.progressType;
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  if ( progressType == 2 )
  {
    CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
    this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 10, 2, 0, 0);
      return;
    }
LABEL_11:
    sub_1C2D6EC(this, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_11;
  SceneRootComponent__beginStartUp_41259456((SceneRootComponent_o *)this, 0);
}