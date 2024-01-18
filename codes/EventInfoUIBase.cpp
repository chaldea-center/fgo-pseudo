void __fastcall EventInfoUIBase___ctor(EventInfoUIBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  EventInfoUIBase_Data_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4188D06 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoUIBase_Data_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoUIBase_Data__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoUIBase_Data___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_UIAtlas__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_List_EventInfoUIBase_Data__TypeInfo, v7);
    byte_4188D06 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventInfoUIBase_Data__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventInfoUIBase_Data___ctor__);
  v9 = (EventInfoUIBase_Data_o *)sub_B2C42C(EventInfoUIBase_Data_TypeInfo);
  EventInfoUIBase_Data___ctor(v9, 0LL);
  if ( !v8 )
    sub_B2C434(v10, v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v8,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventInfoUIBase_Data__Add__);
  this->fields.datas = (struct System_Collections_Generic_List_EventInfoUIBase_Data__o *)v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.datas,
    (System_Int32_array **)v8,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v18;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.atlasList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x3
  System_Collections_IEnumerator_c *v19; // x8
  unsigned __int64 v20; // x10
  System_Collections_IEnumerator_c **v21; // x11
  __int64 v22; // x0
  UnityEngine_Transform_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x9
  UnityEngine_Object_o *v26; // x21
  _BOOL8 v27; // x0
  __int64 v28; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  int v30; // w8
  __int64 v31; // x0
  __int64 v32; // x3
  __int64 v33; // x8
  __int64 v34; // x19
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  int v39; // [xsp+0h] [xbp-40h]

  if ( (byte_4188D04 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_Transform___, name);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v8);
    byte_4188D04 = 1;
  }
  EventUIRoot = (UnityEngine_Component_o *)EventInfoUIBase__GetEventUIRoot(this, (const MethodInfo *)name);
  if ( !EventUIRoot
    || (EventUIRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                   EventUIRoot,
                                                   (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_Transform___)) == 0LL )
  {
    sub_B2C434(EventUIRoot, v10);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)EventUIRoot, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v11);
  do
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v12);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
    {
      gameObject = 0LL;
      v30 = 82;
      goto LABEL_29;
    }
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = (System_Collections_IEnumerator_c **)&v19->_1.interfaceOffsets->offset;
      while ( *(v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        v21 += 2;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v22 = (__int64)&v19->vtable[*(_DWORD *)v21 + 1].method;
    }
    else
    {
LABEL_17:
      v22 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v18);
    }
    v23 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v22)(
                                       Enumerator,
                                       *(_QWORD *)(v22 + 8));
    if ( !v23 )
      goto LABEL_41;
    v25 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v25
      || (UnityEngine_Transform_c *)v23->klass->_2.typeHierarchy[v25 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v23 = (UnityEngine_Transform_o *)sub_B2C728(v23);
LABEL_41:
      sub_B2C434(v23, v24);
    }
    v26 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v23, name, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v27 = UnityEngine_Object__op_Equality(v26, 0LL, 0LL);
  }
  while ( v27 );
  if ( !v26 )
    sub_B2C434(v27, v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26, 0LL);
  v30 = 84;
LABEL_29:
  v39 = v30;
  v31 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v31 )
  {
    v33 = *(_QWORD *)v31;
    v34 = v31;
    if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
    {
      v35 = 0LL;
      v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
          goto LABEL_34;
      }
      v37 = v33 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_34:
      v37 = sub_AC5258(v31, System_IDisposable_TypeInfo, 0LL, v32);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
  }
  if ( v39 == 82 )
    return 0LL;
  return gameObject;
}


System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataPath(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4188CF8 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v3);
    byte_4188CF8 = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataPath_27132736(
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *v6; // x20
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+8h] [xbp-18h] BYREF
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4188CF9 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&warId);
    sub_B2C35C(&StringLiteral_6208/*"EventUI/Prefabs/{0}/{1}"*/, v5);
    byte_4188CF9 = 1;
  }
  v10 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  v9 = warId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format_44301068((System_String_o *)StringLiteral_6208/*"EventUI/Prefabs/{0}/{1}"*/, v6, v7, 0LL);
}


UnityEngine_Transform_o *__fastcall EventInfoUIBase__GetEventUIRoot(EventInfoUIBase_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL )
    sub_B2C434(transform, v3);
  return UnityEngine_Transform__get_parent(transform, 0LL);
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

  if ( (byte_4188D02 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, name);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4188D02 = 1;
  }
  assetData = this->fields.assetData;
  if ( !assetData )
    goto LABEL_8;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             name,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  EventInfoUIBase___c__DisplayClass16_0_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_T__o *datas; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20

  if ( (byte_4188CF7 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_EventInfoUIBase_Data___, *(_QWORD *)&valType);
    sub_B2C35C(&Method_System_Func_EventInfoUIBase_Data__bool___ctor__, v7);
    sub_B2C35C(&System_Func_EventInfoUIBase_Data__bool__TypeInfo, v8);
    sub_B2C35C(&Method_EventInfoUIBase___c__DisplayClass16_0__HasMatchedType_b__0__, v9);
    sub_B2C35C(&EventInfoUIBase___c__DisplayClass16_0_TypeInfo, v10);
    byte_4188CF7 = 1;
  }
  v11 = (EventInfoUIBase___c__DisplayClass16_0_o *)sub_B2C42C(EventInfoUIBase___c__DisplayClass16_0_TypeInfo);
  EventInfoUIBase___c__DisplayClass16_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  v11->fields.setType = setType;
  v11->fields.valType = valType;
  datas = (System_Collections_Generic_List_T__o *)this->fields.datas;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_EventInfoUIBase_Data__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_EventInfoUIBase___c__DisplayClass16_0__HasMatchedType_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_EventInfoUIBase_Data__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           datas,
           (System_Func_T__bool__o *)v15,
           (const MethodInfo_17266AC *)Method_BasicHelper_Any_EventInfoUIBase_Data___);
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

  if ( (byte_4188D03 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, name);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4188D03 = 1;
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
                                         (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  __int64 v6; // x1
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4188D05 & 1) == 0 )
  {
    sub_B2C35C(&SceneList_TypeInfo, *(_QWORD *)&targetType);
    byte_4188D05 = 1;
  }
  m_Handle = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v6);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
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
  System_String_o *AssetName; // x19
  AssetLoader_LoadEndDataHandler_o *v26; // x21

  if ( (byte_4188CFA & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, eventUiEntity);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B2C35C(&Method_EventInfoUIBase___c__DisplayClass27_0__LoadEventUIAssetData_b__0__, v8);
    sub_B2C35C(&EventInfoUIBase___c__DisplayClass27_0_TypeInfo, v9);
    byte_4188CFA = 1;
  }
  v10 = sub_B2C42C(EventInfoUIBase___c__DisplayClass27_0_TypeInfo);
  EventInfoUIBase___c__DisplayClass27_0___ctor((EventInfoUIBase___c__DisplayClass27_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)callback, v19, v20, v21, v22, v23, v24);
  AssetName = TitleInfoEventUIComponent__GetAssetName(eventUiEntity, 0LL);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v10,
    Method_EventInfoUIBase___c__DisplayClass27_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetName, v26, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v10 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__LoadEventUIAssetData_27133224(
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
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2
  System_String_o *EventUIAssetDataPath_27132736; // x19
  AssetLoader_LoadEndDataHandler_o *v29; // x20

  if ( (byte_4188CFB & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B2C35C(&Method_EventInfoUIBase___c__DisplayClass28_0__LoadEventUIAssetData_b__0__, v10);
    sub_B2C35C(&EventInfoUIBase___c__DisplayClass28_0_TypeInfo, v11);
    byte_4188CFB = 1;
  }
  v12 = sub_B2C42C(EventInfoUIBase___c__DisplayClass28_0_TypeInfo);
  EventInfoUIBase___c__DisplayClass28_0___ctor((EventInfoUIBase___c__DisplayClass28_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B2C434(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  EventUIAssetDataPath_27132736 = EventInfoUIBase__GetEventUIAssetDataPath_27132736(eventId, warId, v27);
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v12,
    Method_EventInfoUIBase___c__DisplayClass28_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath_27132736, v29, 1, 0LL) )
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
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v20; // [xsp+8h] [xbp-58h] BYREF
  int v21; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4188CFF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_23501/*"{0:D2}"*/, v9);
    sub_B2C35C(&StringLiteral_5380/*"DownloadEventUIAtlas{0}{1}"*/, v10);
    byte_4188CFF = 1;
  }
  if ( this->fields.assetData )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B2C434(atlasList, *(_QWORD *)&eventId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v21 = i;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v15 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23501/*"{0:D2}"*/, v14, 0LL);
      v20 = eventId;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v17 = System_String__Format_44301068((System_String_o *)StringLiteral_5380/*"DownloadEventUIAtlas{0}{1}"*/, v16, v15, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v17,
                                                                 v18);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)UnityEngine_Object__op_Equality(
                                                                         GameObjectFromEventUIAssetData,
                                                                         0LL,
                                                                         0LL);
      if ( ((unsigned __int8)atlasList & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_18;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        break;
      atlasList = this->fields.atlasList;
      if ( !atlasList )
        goto LABEL_18;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)atlasList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
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
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v21; // [xsp+4h] [xbp-5Ch] BYREF
  int v22; // [xsp+8h] [xbp-58h] BYREF
  int v23; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4188D00 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&warId);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_23501/*"{0:D2}"*/, v9);
    sub_B2C35C(&StringLiteral_5381/*"DownloadEventUIAtlas{0}{1}{2}"*/, v10);
    byte_4188D00 = 1;
  }
  if ( this->fields.assetData2 )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B2C434(atlasList, *(_QWORD *)&warId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v23 = i;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
      v15 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23501/*"{0:D2}"*/, v14, 0LL);
      v22 = 0;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v21 = warId;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v18 = System_String__Format_44306596((System_String_o *)StringLiteral_5381/*"DownloadEventUIAtlas{0}{1}{2}"*/, v16, v17, v15, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v18,
                                                                 v19);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)UnityEngine_Object__op_Equality(
                                                                         GameObjectFromEventUIAssetData,
                                                                         0LL,
                                                                         0LL);
      if ( ((unsigned __int8)atlasList & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_18;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        break;
      atlasList = this->fields.atlasList;
      if ( !atlasList )
        goto LABEL_18;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)atlasList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
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

  if ( (byte_4188CFC & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4188CFC = 1;
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
void __fastcall EventInfoUIBase__ReleaseEventUIAssetData_27133720(
        EventInfoUIBase_o *this,
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath_27132736; // x19

  if ( (byte_4188CFD & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4188CFD = 1;
  }
  if ( this->fields.assetData2 )
  {
    EventUIAssetDataPath_27132736 = EventInfoUIBase__GetEventUIAssetDataPath_27132736(
                                      eventId,
                                      warId,
                                      *(const MethodInfo **)&warId);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(EventUIAssetDataPath_27132736, 0LL);
  }
}


void __fastcall EventInfoUIBase__ReleaseLocalAtlas(EventInfoUIBase_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0

  if ( (byte_4188CFE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Clear__, method);
    byte_4188CFE = 1;
  }
  atlasList = this->fields.atlasList;
  if ( !atlasList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
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
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v16; // x0
  __int64 v17; // x1
  bool v18; // w20
  int v19; // w21
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4188D01 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_4188D01 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( !sprite )
      goto LABEL_20;
    UISprite__set_spriteName(sprite, 0LL, 0LL);
    return 1;
  }
  else
  {
    IsNullOrEmpty = this->fields.atlasList;
    if ( !IsNullOrEmpty )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsNullOrEmpty,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v22 = v21;
    do
    {
      v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v13 )
      {
        v18 = 0;
        v19 = 8;
        goto LABEL_16;
      }
      current = v22.fields.current;
      if ( !v22.fields.current )
        sub_B2C434(v13, v14);
      v16 = UIAtlas__GetSprite((UIAtlas_o *)v22.fields.current, spriteName, 0LL);
    }
    while ( !v16 );
    if ( !sprite )
      sub_B2C434(v16, v17);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v18 = 1;
    v19 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v19 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B2C434(IsNullOrEmpty, v12);
    }
  }
  return v18;
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
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_T__o *datas; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x22
  int32_t v18; // w8
  void *image; // x2
  const MethodInfo *v20; // x3

  if ( (byte_4188CF6 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_EventInfoUIBase_Data___, *(_QWORD *)&valType);
    sub_B2C35C(&Method_System_Func_EventInfoUIBase_Data__bool___ctor__, v9);
    sub_B2C35C(&System_Func_EventInfoUIBase_Data__bool__TypeInfo, v10);
    sub_B2C35C(&Method_EventInfoUIBase___c__DisplayClass15_0__SetValue_b__0__, v11);
    sub_B2C35C(&EventInfoUIBase___c__DisplayClass15_0_TypeInfo, v12);
    byte_4188CF6 = 1;
  }
  v13 = (EventInfoUIBase___c__DisplayClass15_0_o *)sub_B2C42C(EventInfoUIBase___c__DisplayClass15_0_TypeInfo);
  EventInfoUIBase___c__DisplayClass15_0___ctor(v13, 0LL);
  if ( !v13 )
    sub_B2C434(v14, v15);
  v13->fields.setType = setType;
  v13->fields.valType = valType;
  datas = (System_Collections_Generic_List_T__o *)this->fields.datas;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_EventInfoUIBase_Data__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_EventInfoUIBase___c__DisplayClass15_0__SetValue_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_EventInfoUIBase_Data__bool___ctor__);
  if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
         datas,
         (System_Func_T__bool__o *)v17,
         (const MethodInfo_17266AC *)Method_BasicHelper_Any_EventInfoUIBase_Data___) )
  {
    v18 = v13->fields.valType;
    switch ( v18 )
    {
      case 3:
        v20 = this->klass->vtable._14_SetTotalBoxGacha.method;
        image = this->klass[1]._1.image;
        goto LABEL_12;
      case 2:
        v20 = this->klass->vtable._13_SetConquestInfos.method;
        image = this->klass->vtable._14_SetTotalBoxGacha.methodPtr;
        goto LABEL_12;
      case 1:
        v20 = this->klass->vtable._12_SetEventId.method;
        image = this->klass->vtable._13_SetConquestInfos.methodPtr;
LABEL_12:
        ((void (__fastcall *)(EventInfoUIBase_o *, Il2CppObject *, void *))v20)(this, val, image);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
  struct EventInfoUIBase_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, data);
  _4__this->fields.assetData = data;
  sub_B2C2F8(&_4__this->fields.assetData, data);
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
  struct EventInfoUIBase_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, data);
  _4__this->fields.assetData2 = data;
  sub_B2C2F8(&_4__this->fields.assetData2, data);
  ActionExtensions__Call(this->fields.callback, 0LL);
}