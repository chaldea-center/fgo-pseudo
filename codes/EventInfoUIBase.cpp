void __fastcall EventInfoUIBase___ctor(EventInfoUIBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  EventInfoUIBase_Data_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_40F8800 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoUIBase_Data_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIBase_Data__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIBase_Data___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_UIAtlas__TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventInfoUIBase_Data__TypeInfo, v10);
    byte_40F8800 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventInfoUIBase_Data__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventInfoUIBase_Data___ctor__);
  v16 = (EventInfoUIBase_Data_o *)sub_B170CC(EventInfoUIBase_Data_TypeInfo, v12, v13, v14, v15);
  EventInfoUIBase_Data___ctor(v16, 0LL);
  if ( !v11 )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventInfoUIBase_Data__Add__);
  this->fields.datas = (struct System_Collections_Generic_List_EventInfoUIBase_Data__o *)v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.datas,
    (System_Int32_array **)v11,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.atlasList,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventInfoUIBase__FindEventUIObjcet(
        EventInfoUIBase_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *EventUIRoot; // x0
  UnityEngine_Transform_o *ComponentInChildren_UIWidget; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v16; // x8
  unsigned __int64 v17; // x10
  System_Collections_IEnumerator_c **v18; // x11
  __int64 v19; // x0
  UnityEngine_Transform_o *v20; // x0
  __int64 v21; // x9
  UnityEngine_Object_o *v22; // x21
  UnityEngine_GameObject_o *gameObject; // x20
  int v24; // w8
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x19
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  int v32; // [xsp+0h] [xbp-40h]

  if ( (byte_40F87FE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_Transform___, name);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v8);
    byte_40F87FE = 1;
  }
  EventUIRoot = (UnityEngine_Component_o *)EventInfoUIBase__GetEventUIRoot(this, (const MethodInfo *)name);
  if ( !EventUIRoot
    || (ComponentInChildren_UIWidget = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                    EventUIRoot,
                                                                    (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_Transform___)) == 0LL )
  {
    sub_B170D4();
  }
  Enumerator = UnityEngine_Transform__GetEnumerator(ComponentInChildren_UIWidget, 0LL);
  if ( !Enumerator )
    sub_B170D4();
  do
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
    {
      gameObject = 0LL;
      v24 = 82;
      goto LABEL_29;
    }
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        v18 += 2;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
    }
    else
    {
LABEL_17:
      v19 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v20 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_41;
    v21 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[v21 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B173C8(v20);
LABEL_41:
      sub_B170D4();
    }
    v22 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v20, name, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
  }
  while ( UnityEngine_Object__op_Equality(v22, 0LL, 0LL) );
  if ( !v22 )
    sub_B170D4();
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
  v24 = 84;
LABEL_29:
  v32 = v24;
  v25 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
  if ( v25 )
  {
    v26 = *(_QWORD *)v25;
    v27 = v25;
    if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
          goto LABEL_34;
      }
      v30 = v26 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_34:
      v30 = sub_AAFEF8(v25, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  }
  if ( v32 == 82 )
    return 0LL;
  return gameObject;
}


System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataPath(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F87F2 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6189, v3);
    byte_40F87F2 = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_6189, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataPath_22457148(
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *v6; // x20
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+8h] [xbp-18h] BYREF
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F87F3 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&warId);
    sub_B16FFC(&StringLiteral_6190, v5);
    byte_40F87F3 = 1;
  }
  v10 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  v9 = warId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format_43739268((System_String_o *)StringLiteral_6190, v6, v7, 0LL);
}


UnityEngine_Transform_o *__fastcall EventInfoUIBase__GetEventUIRoot(EventInfoUIBase_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (parent = UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL )
    sub_B170D4();
  return UnityEngine_Transform__get_parent(parent, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventInfoUIBase__GetGameObjectFromEventUIAssetData(
        EventInfoUIBase_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  AssetData_o *assetData; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  AssetData_o *assetData2; // x0

  if ( (byte_40F87FC & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, name);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F87FC = 1;
  }
  assetData = this->fields.assetData;
  if ( !assetData )
    goto LABEL_8;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             name,
                                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
LABEL_8:
    assetData2 = this->fields.assetData2;
    if ( !assetData2 )
      return 0LL;
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               assetData2,
                                                               name,
                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
      return 0LL;
  }
  return (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoUIBase__HasMatchedType(
        EventInfoUIBase_o *this,
        int32_t valType,
        int32_t setType,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  EventInfoUIBase___c__DisplayClass16_0_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_T__o *datas; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x20

  if ( (byte_40F87F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_EventInfoUIBase_Data___, *(_QWORD *)&valType);
    sub_B16FFC(&Method_System_Func_EventInfoUIBase_Data__bool___ctor__, v8);
    sub_B16FFC(&System_Func_EventInfoUIBase_Data__bool__TypeInfo, v9);
    sub_B16FFC(&Method_EventInfoUIBase___c__DisplayClass16_0__HasMatchedType_b__0__, v10);
    sub_B16FFC(&EventInfoUIBase___c__DisplayClass16_0_TypeInfo, v11);
    byte_40F87F1 = 1;
  }
  v12 = (EventInfoUIBase___c__DisplayClass16_0_o *)sub_B170CC(
                                                     EventInfoUIBase___c__DisplayClass16_0_TypeInfo,
                                                     *(_QWORD *)&valType,
                                                     *(_QWORD *)&setType,
                                                     method,
                                                     v4);
  EventInfoUIBase___c__DisplayClass16_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.setType = setType;
  v12->fields.valType = valType;
  datas = (System_Collections_Generic_List_T__o *)this->fields.datas;
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_EventInfoUIBase_Data__bool__TypeInfo,
                                                                             v13,
                                                                             v14,
                                                                             v15,
                                                                             v16);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_EventInfoUIBase___c__DisplayClass16_0__HasMatchedType_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_EventInfoUIBase_Data__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           datas,
           (System_Func_T__bool__o *)v18,
           (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_EventInfoUIBase_Data___);
}


void __fastcall EventInfoUIBase__Initialization(
        EventInfoUIBase_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  ;
}


UnityEngine_GameObject_o *__fastcall EventInfoUIBase__InstantiateFromEventUIAssetData(
        EventInfoUIBase_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x19
  bool v7; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_40F87FD & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, name);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F87FD = 1;
  }
  GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                             this,
                                                             name,
                                                             method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)GameObjectFromEventUIAssetData,
                                         (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return result;
}


bool __fastcall EventInfoUIBase__IsPlayAnim(EventInfoUIBase_o *this, int32_t type, const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoUIBase__IsTargetScene(EventInfoUIBase_o *this, int32_t targetType, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F87FF & 1) == 0 )
  {
    sub_B16FFC(&SceneList_TypeInfo, *(_QWORD *)&targetType);
    byte_40F87FF = 1;
  }
  m_Handle = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  m_Handle = UnityEngine_GameObject__get_scene(gameObject, 0LL).fields.m_Handle;
  p_m_Handle = &m_Handle;
  name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(targetType, 0LL);
  return System_String__op_Equality(name, SceneName, 0LL);
}


void __fastcall EventInfoUIBase__LoadEventUIAssetData(
        EventInfoUIBase_o *this,
        EventUiEntity_o *eventUiEntity,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *AssetName; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  AssetLoader_LoadEndDataHandler_o *v29; // x21

  if ( (byte_40F87F4 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, eventUiEntity);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B16FFC(&Method_EventInfoUIBase___c__DisplayClass27_0__LoadEventUIAssetData_b__0__, v9);
    sub_B16FFC(&EventInfoUIBase___c__DisplayClass27_0_TypeInfo, v10);
    byte_40F87F4 = 1;
  }
  v11 = sub_B170CC(EventInfoUIBase___c__DisplayClass27_0_TypeInfo, eventUiEntity, callback, method, v4);
  EventInfoUIBase___c__DisplayClass27_0___ctor((EventInfoUIBase___c__DisplayClass27_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
  AssetName = TitleInfoEventUIComponent__GetAssetName(eventUiEntity, 0LL);
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v25, v26, v27, v28);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v11,
    Method_EventInfoUIBase___c__DisplayClass27_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetName, v29, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__LoadEventUIAssetData_22457636(
        EventInfoUIBase_o *this,
        int32_t eventId,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x23
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x2
  System_String_o *EventUIAssetDataPath_22457148; // x19
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  AssetLoader_LoadEndDataHandler_o *v31; // x20

  if ( (byte_40F87F5 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B16FFC(&Method_EventInfoUIBase___c__DisplayClass28_0__LoadEventUIAssetData_b__0__, v10);
    sub_B16FFC(&EventInfoUIBase___c__DisplayClass28_0_TypeInfo, v11);
    byte_40F87F5 = 1;
  }
  v12 = sub_B170CC(
          EventInfoUIBase___c__DisplayClass28_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&warId,
          callback,
          method);
  EventInfoUIBase___c__DisplayClass28_0___ctor((EventInfoUIBase___c__DisplayClass28_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)callback, v19, v20, v21, v22, v23, v24);
  EventUIAssetDataPath_22457148 = EventInfoUIBase__GetEventUIAssetDataPath_22457148(eventId, warId, v25);
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v27, v28, v29, v30);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)v12,
    Method_EventInfoUIBase___c__DisplayClass28_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath_22457148, v31, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v12 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__LoadLocalAtlas(EventInfoUIBase_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
  int i; // w22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  struct System_Collections_Generic_List_UIAtlas__o *v14; // x0
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v21; // [xsp+8h] [xbp-58h] BYREF
  int v22; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F87F9 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_23407, v9);
    sub_B16FFC(&StringLiteral_5361, v10);
    byte_40F87F9 = 1;
  }
  if ( this->fields.assetData )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v22 = i;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v16 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23407, v15, 0LL);
      v21 = eventId;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v18 = System_String__Format_43739268((System_String_o *)StringLiteral_5361, v17, v16, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v18,
                                                                 v19);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL) )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_18;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        break;
      v14 = this->fields.atlasList;
      if ( !v14 )
        goto LABEL_18;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v14,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__LoadLocalAtlasWithWarId(
        EventInfoUIBase_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
  int i; // w23
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  struct System_Collections_Generic_List_UIAtlas__o *v14; // x0
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x22
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v22; // [xsp+4h] [xbp-5Ch] BYREF
  int v23; // [xsp+8h] [xbp-58h] BYREF
  int v24; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F87FA & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&warId);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_23407, v9);
    sub_B16FFC(&StringLiteral_5362, v10);
    byte_40F87FA = 1;
  }
  if ( this->fields.assetData2 )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v24 = i;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
      v16 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23407, v15, 0LL);
      v23 = 0;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
      v22 = warId;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v19 = System_String__Format_43744796((System_String_o *)StringLiteral_5362, v17, v18, v16, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v19,
                                                                 v20);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL) )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_18;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        break;
      v14 = this->fields.atlasList;
      if ( !v14 )
        goto LABEL_18;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v14,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
    }
  }
}


void __fastcall EventInfoUIBase__PlayAnim(
        EventInfoUIBase_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  ActionExtensions__Call(callback, 0LL);
}


void __fastcall EventInfoUIBase__Redisplay(EventInfoUIBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoUIBase__ReleaseAsset(EventInfoUIBase_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__ReleaseEventUIAssetData(
        EventInfoUIBase_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_40F87F6 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    byte_40F87F6 = 1;
  }
  if ( this->fields.assetData )
  {
    EventUIAssetDataPath = EventInfoUIBase__GetEventUIAssetDataPath(eventId, *(const MethodInfo **)&eventId);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__ReleaseEventUIAssetData_22458132(
        EventInfoUIBase_o *this,
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath_22457148; // x19

  if ( (byte_40F87F7 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    byte_40F87F7 = 1;
  }
  if ( this->fields.assetData2 )
  {
    EventUIAssetDataPath_22457148 = EventInfoUIBase__GetEventUIAssetDataPath_22457148(
                                      eventId,
                                      warId,
                                      *(const MethodInfo **)&warId);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(EventUIAssetDataPath_22457148, 0LL);
  }
}


void __fastcall EventInfoUIBase__ReleaseLocalAtlas(EventInfoUIBase_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0

  if ( (byte_40F87F8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Clear__, method);
    byte_40F87F8 = 1;
  }
  atlasList = this->fields.atlasList;
  if ( !atlasList )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
}


void __fastcall EventInfoUIBase__SetConquestInfos(EventInfoUIBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoUIBase__SetEventId(EventInfoUIBase_o *this, Il2CppObject *val, const MethodInfo *method)
{
  ;
}


bool __fastcall EventInfoUIBase__SetSpriteByLocalAtlas(
        EventInfoUIBase_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
  Il2CppObject *current; // x21
  bool v13; // w20
  int v14; // w21
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F87FB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_40F87FB = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( System_String__IsNullOrEmpty(spriteName, 0LL)
    || !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_UIAtlas___) )
  {
    if ( !sprite )
      goto LABEL_20;
    UISprite__set_spriteName(sprite, 0LL, 0LL);
    return 1;
  }
  else
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)atlasList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v17 = v16;
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v17,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__) )
      {
        v13 = 0;
        v14 = 8;
        goto LABEL_16;
      }
      current = v17.fields.current;
      if ( !v17.fields.current )
        sub_B170D4();
    }
    while ( !UIAtlas__GetSprite((UIAtlas_o *)v17.fields.current, spriteName, 0LL) );
    if ( !sprite )
      sub_B170D4();
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v13 = 1;
    v14 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v17,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v14 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B170D4();
    }
  }
  return v13;
}


void __fastcall EventInfoUIBase__SetTotalBoxGacha(EventInfoUIBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__SetValue(
        EventInfoUIBase_o *this,
        int32_t valType,
        Il2CppObject *val,
        int32_t setType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  EventInfoUIBase___c__DisplayClass15_0_o *v13; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_T__o *datas; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x22
  int32_t v20; // w8
  void *image; // x2
  const MethodInfo *v22; // x3

  if ( (byte_40F87F0 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_EventInfoUIBase_Data___, *(_QWORD *)&valType);
    sub_B16FFC(&Method_System_Func_EventInfoUIBase_Data__bool___ctor__, v9);
    sub_B16FFC(&System_Func_EventInfoUIBase_Data__bool__TypeInfo, v10);
    sub_B16FFC(&Method_EventInfoUIBase___c__DisplayClass15_0__SetValue_b__0__, v11);
    sub_B16FFC(&EventInfoUIBase___c__DisplayClass15_0_TypeInfo, v12);
    byte_40F87F0 = 1;
  }
  v13 = (EventInfoUIBase___c__DisplayClass15_0_o *)sub_B170CC(
                                                     EventInfoUIBase___c__DisplayClass15_0_TypeInfo,
                                                     *(_QWORD *)&valType,
                                                     val,
                                                     *(_QWORD *)&setType,
                                                     method);
  EventInfoUIBase___c__DisplayClass15_0___ctor(v13, 0LL);
  if ( !v13 )
    sub_B170D4();
  v13->fields.setType = setType;
  v13->fields.valType = valType;
  datas = (System_Collections_Generic_List_T__o *)this->fields.datas;
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_EventInfoUIBase_Data__bool__TypeInfo,
                                                                             v14,
                                                                             v15,
                                                                             v16,
                                                                             v17);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v13,
    Method_EventInfoUIBase___c__DisplayClass15_0__SetValue_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_EventInfoUIBase_Data__bool___ctor__);
  if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
         datas,
         (System_Func_T__bool__o *)v19,
         (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_EventInfoUIBase_Data___) )
  {
    v20 = v13->fields.valType;
    switch ( v20 )
    {
      case 3:
        v22 = this->klass->vtable._14_SetTotalBoxGacha.method;
        image = this->klass[1]._1.image;
        goto LABEL_12;
      case 2:
        v22 = this->klass->vtable._13_SetConquestInfos.method;
        image = this->klass->vtable._14_SetTotalBoxGacha.methodPtr;
        goto LABEL_12;
      case 1:
        v22 = this->klass->vtable._12_SetEventId.method;
        image = this->klass->vtable._13_SetConquestInfos.methodPtr;
LABEL_12:
        ((void (__fastcall *)(EventInfoUIBase_o *, Il2CppObject *, void *))v22)(this, val, image);
        break;
    }
  }
}


void __fastcall EventInfoUIBase__Setup(
        EventInfoUIBase_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoUIBase__SwitchSpotState(EventInfoUIBase_o *this, bool isOpen, const MethodInfo *method)
{
  ;
}


System_Collections_Generic_List_UIAtlas__o *__fastcall EventInfoUIBase__get_AtlasList(
        EventInfoUIBase_o *this,
        const MethodInfo *method)
{
  return this->fields.atlasList;
}


void __fastcall EventInfoUIBase_Data___ctor(EventInfoUIBase_Data_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoUIBase___c__DisplayClass15_0___ctor(
        EventInfoUIBase___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoUIBase___c__DisplayClass15_0___SetValue_b__0(
        EventInfoUIBase___c__DisplayClass15_0_o *this,
        EventInfoUIBase_Data_o *data,
        const MethodInfo *method)
{
  int32_t setType; // w8

  if ( !data )
    sub_B170D4();
  setType = data->fields.setType;
  return (!setType || setType == this->fields.setType) && data->fields.valType == this->fields.valType;
}


void __fastcall EventInfoUIBase___c__DisplayClass16_0___ctor(
        EventInfoUIBase___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoUIBase___c__DisplayClass16_0___HasMatchedType_b__0(
        EventInfoUIBase___c__DisplayClass16_0_o *this,
        EventInfoUIBase_Data_o *data,
        const MethodInfo *method)
{
  int32_t setType; // w8

  if ( !data )
    sub_B170D4();
  setType = data->fields.setType;
  return (!setType || setType == this->fields.setType) && data->fields.valType == this->fields.valType;
}


void __fastcall EventInfoUIBase___c__DisplayClass27_0___ctor(
        EventInfoUIBase___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoUIBase___c__DisplayClass27_0___LoadEventUIAssetData_b__0(
        EventInfoUIBase___c__DisplayClass27_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EventInfoUIBase_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  _4__this->fields.assetData = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.assetData,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoUIBase___c__DisplayClass28_0___ctor(
        EventInfoUIBase___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoUIBase___c__DisplayClass28_0___LoadEventUIAssetData_b__0(
        EventInfoUIBase___c__DisplayClass28_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EventInfoUIBase_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  _4__this->fields.assetData2 = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.assetData2,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0LL);
}