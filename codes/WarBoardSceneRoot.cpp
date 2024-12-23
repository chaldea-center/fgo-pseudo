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
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_c *klass; // x8
  __int64 methodPtr_low; // x10
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  WarBoardDataEntity_o *v17; // x20

  v3 = data;
  if ( (byte_4B64AFE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_JsonManager_Deserialize_WarBoardDataEntity___, data);
    sub_1BE4ACC(&JsonManager_TypeInfo, v4);
    sub_1BE4ACC(&string_TypeInfo, v5);
    sub_1BE4ACC(&WarBoardDataEntity_TypeInfo, v6);
    byte_4B64AFE = 1;
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
          j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
        v9 = JsonManager__Deserialize_object_(
               v3,
               (const MethodInfo_2FC07DC *)Method_JsonManager_Deserialize_WarBoardDataEntity___);
        if ( !v9 )
          sub_1BE4D28(0LL, v10);
        v17 = (WarBoardDataEntity_o *)v9;
        v9[9].monitor = v3;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v9[9].monitor, (int64_t)v3, v11, v12, v13, v14, v15, v16);
        return v17;
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
  SceneRootComponent__beginStartUp_39578900((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot___beginResume_b__3_0(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B64AFF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B64AFF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BE4D28(Instance, v4);
  }
  CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0LL);
  SceneRootComponent__beginStartUp_39578900((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__resumeMainMenuBar((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginFinish(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  WarBoardManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1BE4D28(0LL, method);
  WarBoardManager__Finish(manager, 0LL);
  SceneRootComponent__beginFinish((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginInitialize(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B64AFB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B64AFB = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginResume(WarBoardSceneRoot_o *this, Il2CppObject *data, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v12; // x2
  long double v13; // q0
  __int64 v14; // x0
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0
  WarBoardDataEntity_o *WarBoardDataEntity; // x20
  WarBoardManager_o *manager; // x21
  System_Action_o *v20; // x22

  if ( (byte_4B64AFD & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, data);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BE4ACC(&Method_WarBoardSceneRoot__beginResume_b__3_0__, v8);
    byte_4B64AFD = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C369A8(v3);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C369A8(v3);
  Instance = **(Il2CppObject ***)(v10 + 184);
  if ( !Instance )
    goto LABEL_26;
  WarBoardManager__ResumeBgm((WarBoardManager_o *)Instance, 0LL);
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C369A8(v13);
  Instance = *(Il2CppObject **)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (BYTE5(Instance[19].klass) & 1) == 0 )
    Instance = (Il2CppObject *)sub_1C369A8(v13);
  v15 = *(_QWORD *)Instance[11].monitor;
  if ( !v15 )
    goto LABEL_26;
  if ( *(_BYTE *)(v15 + 840) )
  {
    v16 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C369A8(v13);
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C369A8(v13);
    Instance = **(Il2CppObject ***)(v17 + 184);
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
    sub_1BE4D28(Instance, data);
  }
  if ( data )
  {
    WarBoardDataEntity = WarBoardSceneRoot__GetWarBoardDataEntity((WarBoardSceneRoot_o *)Instance, data, v12);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
    manager = this->fields.manager;
    v20 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_WarBoardSceneRoot__beginResume_b__3_0__, 0LL);
    if ( !manager )
      goto LABEL_26;
    WarBoardManager__Resume(manager, WarBoardDataEntity, v20, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  WarBoardSceneRoot_o *v17; // x0
  const MethodInfo *v18; // x2
  WarBoardDataEntity_o *WarBoardDataEntity; // x0
  WarBoardDataEntity_o **v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  WarBoardDataEntity_o *v27; // x22
  WarBoardManager_o *manager; // x19
  System_Action_o *v29; // x21

  if ( (byte_4B64AFC & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, data);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&Method_WarBoardSceneRoot___c__DisplayClass2_0__beginStartUp_b__0__, v6);
    sub_1BE4ACC(&WarBoardSceneRoot___c__DisplayClass2_0_TypeInfo, v7);
    byte_4B64AFC = 1;
  }
  v8 = sub_1BE4D18(WarBoardSceneRoot___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_11;
  *(_QWORD *)(v8 + 24) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)this, v11, v12, v13, v14, v15, v16);
  WarBoardDataEntity = WarBoardSceneRoot__GetWarBoardDataEntity(v17, data, v18);
  *(_QWORD *)(v8 + 16) = WarBoardDataEntity;
  v20 = (WarBoardDataEntity_o **)(v8 + 16);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)WarBoardDataEntity, v21, v22, v23, v24, v25, v26);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
  v27 = *v20;
  if ( !*v20 )
    goto LABEL_11;
  if ( v27->fields.progressType != 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
    v27 = *v20;
  }
  manager = this->fields.manager;
  v29 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)v8, Method_WarBoardSceneRoot___c__DisplayClass2_0__beginStartUp_b__0__, 0LL);
  if ( !manager )
LABEL_11:
    sub_1BE4D28(Instance, v10);
  WarBoardManager__Initialize(manager, v27, v29, 0LL);
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
  __int64 v3; // x1
  struct WarBoardDataEntity_o *warBoardData; // x8
  int32_t progressType; // w21

  v2 = this;
  if ( (byte_4B64B00 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)sub_1BE4ACC(
                                                         &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                                         v3);
    byte_4B64B00 = 1;
  }
  warBoardData = v2->fields.warBoardData;
  if ( !warBoardData )
    goto LABEL_11;
  progressType = warBoardData->fields.progressType;
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  if ( progressType == 2 )
  {
    CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
    this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 10, 2, 0LL, 0LL);
      return;
    }
LABEL_11:
    sub_1BE4D28(this, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_11;
  SceneRootComponent__beginStartUp_39578900((SceneRootComponent_o *)this, 0LL);
}