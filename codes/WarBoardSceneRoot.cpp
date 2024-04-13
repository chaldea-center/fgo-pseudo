void __fastcall WarBoardSceneRoot___ctor(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


WarBoardDataEntity_o *__fastcall WarBoardSceneRoot__GetWarBoardDataEntity(
        WarBoardSceneRoot_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_c *klass; // x8
  __int64 v15; // x10
  TerminalPramsManager_ClearData_o *v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  WarBoardDataEntity_o *v24; // x20

  v4 = data;
  if ( (byte_42EAB49 & 1) == 0 )
  {
    sub_B5D5C4(&Method_JsonManager_Deserialize_WarBoardDataEntity___, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&string_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&WarBoardDataEntity_TypeInfo, v11, v12, v13);
    byte_42EAB49 = 1;
  }
  if ( v4 )
  {
    klass = (System_String_c *)v4->klass;
    v15 = *(&WarBoardDataEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v4->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (WarBoardDataEntity_c *)klass->_2.typeHierarchy[v15 - 1] != WarBoardDataEntity_TypeInfo )
    {
      if ( klass == string_TypeInfo )
      {
        if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !JsonManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
        }
        v16 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
                v4,
                (const MethodInfo_1E5E158 *)Method_JsonManager_Deserialize_WarBoardDataEntity___);
        if ( !v16 )
          sub_B5D69C(0LL, v17);
        v24 = (WarBoardDataEntity_o *)v16;
        v16->fields.warClearReward = (struct WarClearReward_array *)v4;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v16->fields.warClearReward,
          (System_Int32_array **)v4,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        return v24;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return (WarBoardDataEntity_o *)v4;
}


void __fastcall WarBoardSceneRoot____n__0(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_17513116((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot___beginResume_b__3_0(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42EAB4A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EAB4A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 0, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
  }
  CommonUI__SetConnect(Instance, 0, 0LL);
  SceneRootComponent__beginStartUp_17513116((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__resumeMainMenuBar((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginFinish(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  WarBoardManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B5D69C(0LL, method);
  WarBoardManager__Finish(manager, 0LL);
  SceneRootComponent__beginFinish((SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginInitialize(WarBoardSceneRoot_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42EAB46 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EAB46 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall WarBoardSceneRoot__beginResume(WarBoardSceneRoot_o *this, Il2CppObject *data, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x21
  WebViewManager_o *Instance; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x21
  __int64 v20; // x21
  __int64 v21; // x8
  __int64 v22; // x20
  __int64 v23; // x20
  WarBoardDataEntity_o *WarBoardDataEntity; // x20
  WarBoardManager_o *manager; // x21
  System_Action_o *v26; // x22

  if ( (byte_42EAB48 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardSceneRoot__beginResume_b__3_0__, v12, v13, v14);
    byte_42EAB48 = 1;
  }
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v16 = **(_QWORD **)(v15 + 192);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AF52C4(v16);
  Instance = **(WebViewManager_o ***)(v16 + 184);
  if ( !Instance )
    goto LABEL_26;
  WarBoardManager__ResumeBgm((WarBoardManager_o *)Instance, 0LL);
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    Instance = (WebViewManager_o *)sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                              + 3));
  v20 = **(_QWORD **)(v19 + 192);
  if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
    Instance = (WebViewManager_o *)sub_AF52C4(v20);
  v21 = **(_QWORD **)(v20 + 184);
  if ( !v21 )
    goto LABEL_26;
  if ( *(_BYTE *)(v21 + 840) )
  {
    v22 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
    v23 = **(_QWORD **)(v22 + 192);
    if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
      sub_AF52C4(v23);
    Instance = **(WebViewManager_o ***)(v23 + 184);
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
    sub_B5D69C(Instance, data);
  }
  if ( data )
  {
    WarBoardDataEntity = WarBoardSceneRoot__GetWarBoardDataEntity((WarBoardSceneRoot_o *)Instance, data, v18);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
    manager = this->fields.manager;
    v26 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x20
  CommonUI_o *Instance; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  WarBoardDataEntity_o **v24; // x21
  WarBoardSceneRoot_o *v25; // x0
  const MethodInfo *v26; // x2
  System_Int32_array **WarBoardDataEntity; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  WarBoardDataEntity_o *v34; // x22
  WarBoardManager_o *manager; // x19
  System_Action_o *v36; // x21

  if ( (byte_42EAB47 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_WarBoardSceneRoot___c__DisplayClass2_0__beginStartUp_b__0__, v9, v10, v11);
    sub_B5D5C4(&WarBoardSceneRoot___c__DisplayClass2_0_TypeInfo, v12, v13, v14);
    byte_42EAB47 = 1;
  }
  v15 = sub_B5D694(WarBoardSceneRoot___c__DisplayClass2_0_TypeInfo);
  WarBoardSceneRoot___c__DisplayClass2_0___ctor((WarBoardSceneRoot___c__DisplayClass2_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_11;
  *(_QWORD *)(v15 + 24) = this;
  v24 = (WarBoardDataEntity_o **)(v15 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  WarBoardDataEntity = (System_Int32_array **)WarBoardSceneRoot__GetWarBoardDataEntity(v25, data, v26);
  *(_QWORD *)(v15 + 16) = WarBoardDataEntity;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), WarBoardDataEntity, v28, v29, v30, v31, v32, v33);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__SetConnect(Instance, 1, 0LL);
  v34 = *v24;
  if ( !*v24 )
    goto LABEL_11;
  if ( v34->fields.progressType != 2 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
    v34 = *v24;
  }
  manager = this->fields.manager;
  v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v15,
    Method_WarBoardSceneRoot___c__DisplayClass2_0__beginStartUp_b__0__,
    0LL);
  if ( !manager )
LABEL_11:
    sub_B5D69C(Instance, v17);
  WarBoardManager__Initialize(manager, v34, v36, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardSceneRoot___c__DisplayClass2_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct WarBoardDataEntity_o *warBoardData; // x8
  int32_t progressType; // w21

  v4 = this;
  if ( (byte_42E5FC7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)sub_B5D5C4(
                                                         &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                         v5,
                                                         v6,
                                                         v7);
    byte_42E5FC7 = 1;
  }
  warBoardData = v4->fields.warBoardData;
  if ( !warBoardData )
    goto LABEL_11;
  progressType = warBoardData->fields.progressType;
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  if ( progressType == 2 )
  {
    CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
    this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 10, 2, 0LL, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(this, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
  this = (WarBoardSceneRoot___c__DisplayClass2_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_11;
  WarBoardSceneRoot____n__0((WarBoardSceneRoot_o *)this, 0LL);
}