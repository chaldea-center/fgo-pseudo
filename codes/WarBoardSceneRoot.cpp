void __fastcall WarBoardSceneRoot___ctor(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


WarBoardDataEntity_o *__fastcall WarBoardSceneRoot__GetWarBoardDataEntity(
        WarBoardSceneRoot_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_c *klass; // x8
  __int64 methodPtr_low; // x10
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  WarBoardDataEntity_o *v10; // x20

  if ( (byte_4A591E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_JsonManager_Deserialize_WarBoardDataEntity___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&WarBoardDataEntity_TypeInfo);
    byte_4A591E0 = 1;
  }
  if ( data )
  {
    klass = (System_String_c *)data->klass;
    methodPtr_low = LOBYTE(WarBoardDataEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarBoardDataEntity_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardDataEntity_TypeInfo )
    {
      if ( klass == string_TypeInfo )
      {
        if ( !JsonManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
        v6 = JsonManager__Deserialize_object_(
               data,
               (const MethodInfo_2EE5DF0 *)Method_JsonManager_Deserialize_WarBoardDataEntity___);
        if ( !v6 )
          sub_1B8880C(0LL, v7);
        v10 = (WarBoardDataEntity_o *)v6;
        v6[9].monitor = data;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v6[9].monitor, (int32_t)data, v8, v9);
        return v10;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return (WarBoardDataEntity_o *)data;
}


void __fastcall WarBoardSceneRoot____n__0(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_38666476((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot___beginResume_b__3_0(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A591E1 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A591E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0LL);
  SceneRootComponent__beginStartUp_38666476((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__resumeMainMenuBar((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginFinish(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  WarBoardManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B8880C(0LL, method);
  WarBoardManager__Finish(manager, 0LL);
  SceneRootComponent__beginFinish((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginInitialize(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A591DD & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A591DD = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginResume(WarBoardSceneRoot_o *this, Il2CppObject *data, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x2
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  WarBoardDataEntity_o *WarBoardDataEntity; // x20
  WarBoardManager_o *manager; // x21
  System_Action_o *v15; // x22

  if ( (byte_4A591DF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_WarBoardSceneRoot__beginResume_b__3_0__);
    byte_4A591DF = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(v6);
  Instance = **(Il2CppObject ***)(v6 + 184);
  if ( !Instance )
    goto LABEL_26;
  WarBoardManager__ResumeBgm((WarBoardManager_o *)Instance, 0LL);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BDA48C(v9);
  Instance = *(Il2CppObject **)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (BYTE5(Instance[19].klass) & 1) == 0 )
    Instance = (Il2CppObject *)sub_1BDA48C(Instance);
  v10 = *(_QWORD *)Instance[11].monitor;
  if ( !v10 )
    goto LABEL_26;
  if ( *(_BYTE *)(v10 + 848) )
  {
    v11 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1BDA48C(v11);
    v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1BDA48C(v12);
    Instance = **(Il2CppObject ***)(v12 + 184);
    if ( Instance )
    {
      WarBoardManager__OnCloseUserEquipScene((WarBoardManager_o *)Instance, 0LL);
      ((void (__fastcall *)(WarBoardSceneRoot_o *, Il2CppMethodPointer))this->klass->vtable._6_beginStartUp.method)(
        this,
        this->klass->vtable._7_beginFinish.methodPtr);
      SceneRootComponent__resumeMainMenuBar((SceneRootComponent_o *)this, 0LL);
      return;
    }
LABEL_26:
    sub_1B8880C(Instance, data);
  }
  if ( data )
  {
    WarBoardDataEntity = WarBoardSceneRoot__GetWarBoardDataEntity((WarBoardSceneRoot_o *)Instance, data, v8);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
    manager = this->fields.manager;
    v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_WarBoardSceneRoot__beginResume_b__3_0__, 0LL);
    if ( !manager )
      goto LABEL_26;
    WarBoardManager__Resume(manager, WarBoardDataEntity, v15, 0LL);
  }
  else
  {
    SceneRootComponent__beginResume((SceneRootComponent_o *)this, 0LL, 0LL);
  }
}


void __fastcall WarBoardSceneRoot__beginStartUp(
        WarBoardSceneRoot_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  WarBoardSceneRoot_o *v10; // x0
  const MethodInfo *v11; // x2
  WarBoardDataEntity_o *WarBoardDataEntity; // x0
  WarBoardDataEntity_o **v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  WarBoardDataEntity_o *v16; // x22
  WarBoardManager_o *manager; // x19
  System_Action_o *v18; // x21

  if ( (byte_4A591DE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_WarBoardSceneRoot___c__DisplayClass2_0__beginStartUp_b__0__);
    sub_1B885B0(&WarBoardSceneRoot___c__DisplayClass2_0_TypeInfo);
    byte_4A591DE = 1;
  }
  v5 = sub_1B887FC(WarBoardSceneRoot___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  WarBoardDataEntity = WarBoardSceneRoot__GetWarBoardDataEntity(v10, data, v11);
  *(_QWORD *)(v5 + 16) = WarBoardDataEntity;
  v13 = (WarBoardDataEntity_o **)(v5 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)WarBoardDataEntity, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
  v16 = *v13;
  if ( !*v13 )
    goto LABEL_11;
  if ( v16->fields.progressType != 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
    v16 = *v13;
  }
  manager = this->fields.manager;
  v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)v5, Method_WarBoardSceneRoot___c__DisplayClass2_0__beginStartUp_b__0__, 0LL);
  if ( !manager )
LABEL_11:
    sub_1B8880C(Instance, v7);
  WarBoardManager__Initialize(manager, v16, v18, 0LL);
}


void __fastcall WarBoardSceneRoot___c__DisplayClass2_0___ctor(
        WarBoardSceneRoot___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardSceneRoot___c__DisplayClass2_0___beginStartUp_b__0(
        WarBoardSceneRoot___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  WarBoardSceneRoot___c__DisplayClass2_0_o *v2; // x19
  struct WarBoardDataEntity_o *warBoardData; // x8
  int32_t progressType; // w21

  v2 = this;
  if ( (byte_4A591E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A591E2 = 1;
  }
  warBoardData = v2->fields.warBoardData;
  if ( !warBoardData )
    goto LABEL_11;
  progressType = warBoardData->fields.progressType;
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  if ( progressType == 2 )
  {
    CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
    this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 10, 2, 0LL, 0LL);
      return;
    }
LABEL_11:
    sub_1B8880C(this, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_11;
  SceneRootComponent__beginStartUp_38666476((SceneRootComponent_o *)this, 0LL);
}