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
  __int64 v8; // x10
  TerminalPramsManager_ClearData_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  WarBoardDataEntity_o *v16; // x20

  v3 = data;
  if ( (byte_40FBA7C & 1) == 0 )
  {
    sub_B16FFC(&Method_JsonManager_Deserialize_WarBoardDataEntity___, data);
    sub_B16FFC(&JsonManager_TypeInfo, v4);
    sub_B16FFC(&string_TypeInfo, v5);
    sub_B16FFC(&WarBoardDataEntity_TypeInfo, v6);
    byte_40FBA7C = 1;
  }
  if ( v3 )
  {
    klass = (System_String_c *)v3->klass;
    v8 = *(&WarBoardDataEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v3->klass->_2.bitflags2 + 1) < (unsigned int)v8
      || (WarBoardDataEntity_c *)klass->_2.typeHierarchy[v8 - 1] != WarBoardDataEntity_TypeInfo )
    {
      if ( klass == string_TypeInfo )
      {
        if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !JsonManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
        }
        v9 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
               v3,
               (const MethodInfo_19D6740 *)Method_JsonManager_Deserialize_WarBoardDataEntity___);
        if ( !v9 )
          sub_B170D4();
        v16 = (WarBoardDataEntity_o *)v9;
        v9->fields.warClearReward = (struct WarClearReward_array *)v3;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v9->fields.warClearReward,
          (System_Int32_array **)v3,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
        return v16;
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
  SceneRootComponent__beginStartUp_29752064((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot___beginResume_b__3_0(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  CommonUI_o *v4; // x0

  if ( (byte_40FBA7D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FBA7D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 0, 0LL),
        (v4 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  CommonUI__SetConnect(v4, 0, 0LL);
  SceneRootComponent__beginStartUp_29752064((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__resumeMainMenuBar((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginFinish(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  WarBoardManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B170D4();
  WarBoardManager__Finish(manager, 0LL);
  SceneRootComponent__beginFinish((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginInitialize(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FBA79 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40FBA79 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginResume(WarBoardSceneRoot_o *this, Il2CppObject *data, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x21
  WarBoardManager_o *v10; // x0
  WarBoardSceneRoot_o *v11; // x0
  const MethodInfo *v12; // x2
  __int64 v13; // x21
  __int64 v14; // x21
  __int64 v15; // x8
  __int64 v16; // x20
  __int64 v17; // x20
  WarBoardManager_o *v18; // x0
  WarBoardDataEntity_o *WarBoardDataEntity; // x20
  CommonUI_o *Instance; // x0
  CommonUI_o *v21; // x0
  WarBoardManager_o *manager; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Action_o *v27; // x22

  if ( (byte_40FBA7B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, data);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_WarBoardSceneRoot__beginResume_b__3_0__, v7);
    byte_40FBA7B = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v9 = **(_QWORD **)(v8 + 192);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AAFCFC(v9);
  v10 = **(WarBoardManager_o ***)(v9 + 184);
  if ( !v10 )
    goto LABEL_26;
  WarBoardManager__ResumeBgm(v10, 0LL);
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    v11 = (WarBoardSceneRoot_o *)sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v14 = **(_QWORD **)(v13 + 192);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    v11 = (WarBoardSceneRoot_o *)sub_AAFCFC(v14);
  v15 = **(_QWORD **)(v14 + 184);
  if ( !v15 )
    goto LABEL_26;
  if ( *(_BYTE *)(v15 + 832) )
  {
    v16 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
    v17 = **(_QWORD **)(v16 + 192);
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      sub_AAFCFC(v17);
    v18 = **(WarBoardManager_o ***)(v17 + 184);
    if ( v18 )
    {
      WarBoardManager__OnCloseUserEquipScene(v18, 0LL);
      ((void (__fastcall *)(WarBoardSceneRoot_o *, Il2CppMethodPointer))this->klass->vtable._6_beginStartUp.method)(
        this,
        this->klass->vtable._7_beginFinish.methodPtr);
      SceneRootComponent__resumeMainMenuBar((SceneRootComponent_o *)this, 0LL);
      return;
    }
LABEL_26:
    sub_B170D4();
  }
  if ( data )
  {
    WarBoardDataEntity = WarBoardSceneRoot__GetWarBoardDataEntity(v11, data, v12);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    CommonUI__SetConnect(Instance, 1, 0LL);
    v21 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v21 )
      goto LABEL_26;
    CommonUI__SetLoadMode(v21, 1, 0LL);
    manager = this->fields.manager;
    v27 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_WarBoardSceneRoot__beginResume_b__3_0__, 0LL);
    if ( !manager )
      goto LABEL_26;
    WarBoardManager__Resume(manager, WarBoardDataEntity, v27, 0LL);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WarBoardDataEntity_o **v17; // x21
  WarBoardSceneRoot_o *v18; // x0
  const MethodInfo *v19; // x2
  System_Int32_array **WarBoardDataEntity; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  CommonUI_o *Instance; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  WarBoardDataEntity_o *v32; // x22
  CommonUI_o *v33; // x0
  WarBoardManager_o *manager; // x19
  System_Action_o *v35; // x21

  if ( (byte_40FBA7A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, data);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_WarBoardSceneRoot___c__DisplayClass2_0__beginStartUp_b__0__, v8);
    sub_B16FFC(&WarBoardSceneRoot___c__DisplayClass2_0_TypeInfo, v9);
    byte_40FBA7A = 1;
  }
  v10 = sub_B170CC(WarBoardSceneRoot___c__DisplayClass2_0_TypeInfo, data, method, v3, v4);
  WarBoardSceneRoot___c__DisplayClass2_0___ctor((WarBoardSceneRoot___c__DisplayClass2_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_QWORD *)(v10 + 24) = this;
  v17 = (WarBoardDataEntity_o **)(v10 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  WarBoardDataEntity = (System_Int32_array **)WarBoardSceneRoot__GetWarBoardDataEntity(v18, data, v19);
  *(_QWORD *)(v10 + 16) = WarBoardDataEntity;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), WarBoardDataEntity, v21, v22, v23, v24, v25, v26);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__SetConnect(Instance, 1, 0LL);
  v32 = *v17;
  if ( !*v17 )
    goto LABEL_11;
  if ( v32->fields.progressType != 2 )
  {
    v33 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v33 )
      goto LABEL_11;
    CommonUI__SetLoadMode(v33, 1, 0LL);
    v32 = *v17;
  }
  manager = this->fields.manager;
  v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v28, v29, v30, v31);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v10,
    Method_WarBoardSceneRoot___c__DisplayClass2_0__beginStartUp_b__0__,
    0LL);
  if ( !manager )
LABEL_11:
    sub_B170D4();
  WarBoardManager__Initialize(manager, v32, v35, 0LL);
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
  __int64 v3; // x1
  struct WarBoardDataEntity_o *warBoardData; // x8
  int32_t progressType; // w21
  CommonUI_o *Instance; // x0
  AvalonSceneManager_o *v7; // x0
  CommonUI_o *v8; // x0
  WarBoardSceneRoot_o *_4__this; // x0

  if ( (byte_40F786C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_40F786C = 1;
  }
  warBoardData = this->fields.warBoardData;
  if ( !warBoardData )
    goto LABEL_11;
  progressType = warBoardData->fields.progressType;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  if ( progressType == 2 )
  {
    CommonUI__SetConnect(Instance, 0, 0LL);
    v7 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( v7 )
    {
      AvalonSceneManager__pushScene(v7, 10, 2, 0LL, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  v8 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v8 )
    goto LABEL_11;
  CommonUI__SetConnect(v8, 0, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  WarBoardSceneRoot____n__0(_4__this, 0LL);
}