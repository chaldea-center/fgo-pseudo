void __fastcall WarBoardSceneRoot___ctor(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


WarBoardDataEntity_o *__fastcall WarBoardSceneRoot__GetWarBoardDataEntity(
        WarBoardSceneRoot_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_c *klass; // x8
  __int64 methodPtr_low; // x10
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  WarBoardDataEntity_o *v20; // x20

  v3 = data;
  if ( (byte_4B1416A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_JsonManager_Deserialize_WarBoardDataEntity___, data, method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&string_TypeInfo, v6, v7);
    sub_1BCA7E0(&WarBoardDataEntity_TypeInfo, v8, v9);
    byte_4B1416A = 1;
  }
  if ( v3 )
  {
    klass = (System_String_c *)v3->klass;
    methodPtr_low = LOBYTE(WarBoardDataEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v3->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarBoardDataEntity_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardDataEntity_TypeInfo )
    {
      if ( klass == string_TypeInfo )
      {
        if ( !JsonManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, data);
        v12 = JsonManager__Deserialize_object_(
                v3,
                (const MethodInfo_2F79634 *)Method_JsonManager_Deserialize_WarBoardDataEntity___);
        if ( !v12 )
          sub_1BCAA3C(0LL, v13);
        v20 = (WarBoardDataEntity_o *)v12;
        v12[9].monitor = v3;
        sub_1BCA784((PartyOrganizationUtility_o *)&v12[9].monitor, (int64_t)v3, v14, v15, v16, v17, v18, v19);
        return v20;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return (WarBoardDataEntity_o *)v3;
}


void __fastcall WarBoardSceneRoot____n__0(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_39382928((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot___beginResume_b__3_0(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B1416B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1416B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0LL);
  SceneRootComponent__beginStartUp_39382928((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__resumeMainMenuBar((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginFinish(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  WarBoardManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1BCAA3C(0LL, method);
  WarBoardManager__Finish(manager, 0LL);
  SceneRootComponent__beginFinish((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginInitialize(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B14167 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B14167 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginResume(WarBoardSceneRoot_o *this, Il2CppObject *data, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x0
  __int64 v13; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v15; // x2
  long double v16; // q0
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0
  WarBoardDataEntity_o *WarBoardDataEntity; // x20
  WarBoardManager_o *manager; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x22

  if ( (byte_4B14169 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_WarBoardSceneRoot__beginResume_b__3_0__, v10, v11);
    byte_4B14169 = 1;
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C1C6BC(v3);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1C6BC(v3);
  Instance = **(Il2CppObject ***)(v13 + 184);
  if ( !Instance )
    goto LABEL_26;
  WarBoardManager__ResumeBgm((WarBoardManager_o *)Instance, 0LL);
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1C6BC(v16);
  Instance = *(Il2CppObject **)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (BYTE5(Instance[19].klass) & 1) == 0 )
    Instance = (Il2CppObject *)sub_1C1C6BC(v16);
  v18 = *(_QWORD *)Instance[11].monitor;
  if ( !v18 )
    goto LABEL_26;
  if ( *(_BYTE *)(v18 + 840) )
  {
    v19 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C1C6BC(v16);
    v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1C1C6BC(v16);
    Instance = **(Il2CppObject ***)(v20 + 184);
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
    sub_1BCAA3C(Instance, data);
  }
  if ( data )
  {
    WarBoardDataEntity = WarBoardSceneRoot__GetWarBoardDataEntity((WarBoardSceneRoot_o *)Instance, data, v15);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
    manager = this->fields.manager;
    v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_WarBoardSceneRoot__beginResume_b__3_0__, 0LL);
    if ( !manager )
      goto LABEL_26;
    WarBoardManager__Resume(manager, WarBoardDataEntity, v26, 0LL);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  WarBoardSceneRoot_o *v21; // x0
  const MethodInfo *v22; // x2
  WarBoardDataEntity_o *WarBoardDataEntity; // x0
  WarBoardDataEntity_o **v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x2
  __int64 v32; // x3
  WarBoardDataEntity_o *v33; // x22
  WarBoardManager_o *manager; // x19
  System_Action_o *v35; // x21

  if ( (byte_4B14168 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_WarBoardSceneRoot___c__DisplayClass2_0__beginStartUp_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardSceneRoot___c__DisplayClass2_0_TypeInfo, v10, v11);
    byte_4B14168 = 1;
  }
  v12 = sub_1BCAA2C(WarBoardSceneRoot___c__DisplayClass2_0_TypeInfo, data, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  *(_QWORD *)(v12 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v15, v16, v17, v18, v19, v20);
  WarBoardDataEntity = WarBoardSceneRoot__GetWarBoardDataEntity(v21, data, v22);
  *(_QWORD *)(v12 + 16) = WarBoardDataEntity;
  v24 = (WarBoardDataEntity_o **)(v12 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)WarBoardDataEntity, v25, v26, v27, v28, v29, v30);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
  v33 = *v24;
  if ( !*v24 )
    goto LABEL_11;
  if ( v33->fields.progressType != 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
    v33 = *v24;
  }
  manager = this->fields.manager;
  v35 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v31, v32);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v12,
    Method_WarBoardSceneRoot___c__DisplayClass2_0__beginStartUp_b__0__,
    0LL);
  if ( !manager )
LABEL_11:
    sub_1BCAA3C(Instance, v14);
  WarBoardManager__Initialize(manager, v33, v35, 0LL);
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
  __int64 v2; // x2
  WarBoardSceneRoot___c__DisplayClass2_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct WarBoardDataEntity_o *warBoardData; // x8
  int32_t progressType; // w21

  v3 = this;
  if ( (byte_4B1416C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)sub_1BCA7E0(
                                                         &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                                         v4,
                                                         v5);
    byte_4B1416C = 1;
  }
  warBoardData = v3->fields.warBoardData;
  if ( !warBoardData )
    goto LABEL_11;
  progressType = warBoardData->fields.progressType;
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  if ( progressType == 2 )
  {
    CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
    this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 10, 2, 0LL, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(this, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_11;
  SceneRootComponent__beginStartUp_39382928((SceneRootComponent_o *)this, 0LL);
}