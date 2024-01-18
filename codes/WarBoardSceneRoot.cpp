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
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WarBoardDataEntity_o *v17; // x20

  v3 = data;
  if ( (byte_4189269 & 1) == 0 )
  {
    sub_B2C35C(&Method_JsonManager_Deserialize_WarBoardDataEntity___, data);
    sub_B2C35C(&JsonManager_TypeInfo, v4);
    sub_B2C35C(&string_TypeInfo, v5);
    sub_B2C35C(&WarBoardDataEntity_TypeInfo, v6);
    byte_4189269 = 1;
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
               (const MethodInfo_1AACF6C *)Method_JsonManager_Deserialize_WarBoardDataEntity___);
        if ( !v9 )
          sub_B2C434(0LL, v10);
        v17 = (WarBoardDataEntity_o *)v9;
        v9->fields.warClearReward = (struct WarClearReward_array *)v3;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v9->fields.warClearReward,
          (System_Int32_array **)v3,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
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
  SceneRootComponent__beginStartUp_17297004((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot___beginResume_b__3_0(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418926A & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_418926A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 0, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v4);
  }
  CommonUI__SetConnect(Instance, 0, 0LL);
  SceneRootComponent__beginStartUp_17297004((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__resumeMainMenuBar((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginFinish(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  WarBoardManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B2C434(0LL, method);
  WarBoardManager__Finish(manager, 0LL);
  SceneRootComponent__beginFinish((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginInitialize(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4189266 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4189266 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginResume(WarBoardSceneRoot_o *this, Il2CppObject *data, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x21
  WebViewManager_o *Instance; // x0
  const MethodInfo *v11; // x2
  __int64 v12; // x21
  __int64 v13; // x21
  __int64 v14; // x8
  __int64 v15; // x20
  __int64 v16; // x20
  WarBoardDataEntity_o *WarBoardDataEntity; // x20
  WarBoardManager_o *manager; // x21
  System_Action_o *v19; // x22

  if ( (byte_4189268 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_WarBoardSceneRoot__beginResume_b__3_0__, v7);
    byte_4189268 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v9 = **(_QWORD **)(v8 + 192);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AC505C(v9);
  Instance = **(WebViewManager_o ***)(v9 + 184);
  if ( !Instance )
    goto LABEL_26;
  WarBoardManager__ResumeBgm((WarBoardManager_o *)Instance, 0LL);
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    Instance = (WebViewManager_o *)sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                              + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    Instance = (WebViewManager_o *)sub_AC505C(v13);
  v14 = **(_QWORD **)(v13 + 184);
  if ( !v14 )
    goto LABEL_26;
  if ( *(_BYTE *)(v14 + 840) )
  {
    v15 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
    v16 = **(_QWORD **)(v15 + 192);
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      sub_AC505C(v16);
    Instance = **(WebViewManager_o ***)(v16 + 184);
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
    sub_B2C434(Instance, data);
  }
  if ( data )
  {
    WarBoardDataEntity = WarBoardSceneRoot__GetWarBoardDataEntity((WarBoardSceneRoot_o *)Instance, data, v11);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
    manager = this->fields.manager;
    v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_WarBoardSceneRoot__beginResume_b__3_0__, 0LL);
    if ( !manager )
      goto LABEL_26;
    WarBoardManager__Resume(manager, WarBoardDataEntity, v19, 0LL);
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
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
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
  WarBoardDataEntity_o *v27; // x22
  WarBoardManager_o *manager; // x19
  System_Action_o *v29; // x21

  if ( (byte_4189267 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_WarBoardSceneRoot___c__DisplayClass2_0__beginStartUp_b__0__, v6);
    sub_B2C35C(&WarBoardSceneRoot___c__DisplayClass2_0_TypeInfo, v7);
    byte_4189267 = 1;
  }
  v8 = sub_B2C42C(WarBoardSceneRoot___c__DisplayClass2_0_TypeInfo);
  WarBoardSceneRoot___c__DisplayClass2_0___ctor((WarBoardSceneRoot___c__DisplayClass2_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_11;
  *(_QWORD *)(v8 + 24) = this;
  v17 = (WarBoardDataEntity_o **)(v8 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  WarBoardDataEntity = (System_Int32_array **)WarBoardSceneRoot__GetWarBoardDataEntity(v18, data, v19);
  *(_QWORD *)(v8 + 16) = WarBoardDataEntity;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), WarBoardDataEntity, v21, v22, v23, v24, v25, v26);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__SetConnect(Instance, 1, 0LL);
  v27 = *v17;
  if ( !*v17 )
    goto LABEL_11;
  if ( v27->fields.progressType != 2 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
    v27 = *v17;
  }
  manager = this->fields.manager;
  v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)v8, Method_WarBoardSceneRoot___c__DisplayClass2_0__beginStartUp_b__0__, 0LL);
  if ( !manager )
LABEL_11:
    sub_B2C434(Instance, v10);
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
  if ( (byte_4186718 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)sub_B2C35C(
                                                         &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                         v3);
    byte_4186718 = 1;
  }
  warBoardData = v2->fields.warBoardData;
  if ( !warBoardData )
    goto LABEL_11;
  progressType = warBoardData->fields.progressType;
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  if ( progressType == 2 )
  {
    CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
    this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 10, 2, 0LL, 0LL);
      return;
    }
LABEL_11:
    sub_B2C434(this, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_11;
  WarBoardSceneRoot____n__0((WarBoardSceneRoot_o *)this, 0LL);
}