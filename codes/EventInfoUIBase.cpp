void __fastcall EventInfoUIBase___ctor(EventInfoUIBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  EventInfoUIBase_Data_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42B10EC & 1) == 0 )
  {
    sub_B52984(&EventInfoUIBase_Data_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoUIBase_Data__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoUIBase_Data___ctor__);
    sub_B52984(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_EventInfoUIBase_Data__TypeInfo);
    byte_42B10EC = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventInfoUIBase_Data__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventInfoUIBase_Data___ctor__);
  v4 = (EventInfoUIBase_Data_o *)sub_B52A54(EventInfoUIBase_Data_TypeInfo);
  EventInfoUIBase_Data___ctor(v4, 0LL);
  if ( !v3 )
    sub_B52A5C(v5, v6);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v3,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v4,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventInfoUIBase_Data__Add__);
  this->fields.datas = (struct System_Collections_Generic_List_EventInfoUIBase_Data__o *)v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.datas, (System_Int32_array **)v3, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.assetDataList = (struct System_Collections_Generic_List_AssetData__o *)v13;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.assetDataList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v20;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.atlasList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventInfoUIBase__FindEventUIObjcet(
        EventInfoUIBase_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Component_o *EventUIRoot; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x3
  System_Collections_IEnumerator_c *v15; // x8
  unsigned __int64 v16; // x10
  System_Collections_IEnumerator_c **v17; // x11
  __int64 v18; // x0
  UnityEngine_Transform_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x9
  UnityEngine_Object_o *v22; // x21
  _BOOL8 v23; // x0
  __int64 v24; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  int v26; // w8
  __int64 v27; // x0
  __int64 v28; // x3
  __int64 v29; // x8
  __int64 v30; // x19
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  int v35; // [xsp+0h] [xbp-40h]

  if ( (byte_42B10EA & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_Transform___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UnityEngine_Transform_TypeInfo);
    byte_42B10EA = 1;
  }
  EventUIRoot = (UnityEngine_Component_o *)EventInfoUIBase__GetEventUIRoot(this, (const MethodInfo *)name);
  if ( !EventUIRoot
    || (EventUIRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                   EventUIRoot,
                                                   (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_Transform___)) == 0LL )
  {
    sub_B52A5C(EventUIRoot, v6);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)EventUIRoot, 0LL);
  if ( !Enumerator )
    sub_B52A5C(0LL, v7);
  do
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v8);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
    {
      gameObject = 0LL;
      v26 = 82;
      goto LABEL_29;
    }
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 2;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
    }
    else
    {
LABEL_17:
      v18 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v14);
    }
    v19 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_41;
    v21 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[v21 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v19 = (UnityEngine_Transform_o *)sub_B52D50(v19);
LABEL_41:
      sub_B52A5C(v19, v20);
    }
    v22 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v19, name, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v23 = UnityEngine_Object__op_Equality(v22, 0LL, 0LL);
  }
  while ( v23 );
  if ( !v22 )
    sub_B52A5C(v23, v24);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
  v26 = 84;
LABEL_29:
  v35 = v26;
  v27 = sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
  if ( v27 )
  {
    v29 = *(_QWORD *)v27;
    v30 = v27;
    if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
    {
      v31 = 0LL;
      v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
          goto LABEL_34;
      }
      v33 = v29 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_34:
      v33 = sub_AEB880(v27, System_IDisposable_TypeInfo, 0LL, v28);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  }
  if ( v35 == 82 )
    return 0LL;
  return gameObject;
}


System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataEffectPath(
        int32_t eventId,
        System_String_o *fileName,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B10DC & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_5882/*"Effect/Event/{0}/{1}"*/);
    byte_42B10DC = 1;
  }
  v7 = eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Format_44563852((System_String_o *)StringLiteral_5882/*"Effect/Event/{0}/{1}"*/, v5, (Il2CppObject *)fileName, 0LL);
}


System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataPath(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B10DA & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_6250/*"EventUI/Prefabs/{0}"*/);
    byte_42B10DA = 1;
  }
  v5 = eventId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v5);
  return System_String__Format((System_String_o *)StringLiteral_6250/*"EventUI/Prefabs/{0}"*/, v3, 0LL);
}


System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataPath_26892172(
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+8h] [xbp-18h] BYREF
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B10DB & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_6251/*"EventUI/Prefabs/{0}/{1}"*/);
    byte_42B10DB = 1;
  }
  v9 = eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v8 = warId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format_44563852((System_String_o *)StringLiteral_6251/*"EventUI/Prefabs/{0}/{1}"*/, v5, v6, 0LL);
}


UnityEngine_Transform_o *__fastcall EventInfoUIBase__GetEventUIRoot(EventInfoUIBase_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL )
    sub_B52A5C(transform, v3);
  return UnityEngine_Transform__get_parent(transform, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventInfoUIBase__GetGameObjectFromEventUIAssetData(
        EventInfoUIBase_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *assetData; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  AssetData_o *assetData2; // x0

  if ( (byte_42B10E8 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B10E8 = 1;
  }
  assetData = this->fields.assetData;
  if ( !assetData )
    goto LABEL_8;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             name,
                                                             (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
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
                                                               (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
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


bool __fastcall EventInfoUIBase__HasMatchedType(
        EventInfoUIBase_o *this,
        int32_t valType,
        int32_t setType,
        const MethodInfo *method)
{
  EventInfoUIBase___c__DisplayClass17_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_T__o *datas; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x20

  if ( (byte_42B10D9 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_EventInfoUIBase_Data___);
    sub_B52984(&Method_System_Func_EventInfoUIBase_Data__bool___ctor__);
    sub_B52984(&System_Func_EventInfoUIBase_Data__bool__TypeInfo);
    sub_B52984(&Method_EventInfoUIBase___c__DisplayClass17_0__HasMatchedType_b__0__);
    sub_B52984(&EventInfoUIBase___c__DisplayClass17_0_TypeInfo);
    byte_42B10D9 = 1;
  }
  v7 = (EventInfoUIBase___c__DisplayClass17_0_o *)sub_B52A54(EventInfoUIBase___c__DisplayClass17_0_TypeInfo);
  EventInfoUIBase___c__DisplayClass17_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  v7->fields.setType = setType;
  v7->fields.valType = valType;
  datas = (System_Collections_Generic_List_T__o *)this->fields.datas;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_EventInfoUIBase_Data__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_EventInfoUIBase___c__DisplayClass17_0__HasMatchedType_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_EventInfoUIBase_Data__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           datas,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_EventInfoUIBase_Data___);
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
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x19
  bool v6; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_42B10E9 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B10E9 = 1;
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
  v6 = UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)GameObjectFromEventUIAssetData,
                                         (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return result;
}


bool __fastcall EventInfoUIBase__IsPlayAnim(EventInfoUIBase_o *this, int32_t type, const MethodInfo *method)
{
  return 0;
}


bool __fastcall EventInfoUIBase__IsTargetScene(EventInfoUIBase_o *this, int32_t targetType, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B10EB & 1) == 0 )
  {
    sub_B52984(&SceneList_TypeInfo);
    byte_42B10EB = 1;
  }
  m_Handle = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v6);
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
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_o *AssetName; // x19
  AssetLoader_LoadEndDataHandler_o *v23; // x21

  if ( (byte_42B10DD & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_EventInfoUIBase___c__DisplayClass29_0__LoadEventUIAssetData_b__0__);
    sub_B52984(&EventInfoUIBase___c__DisplayClass29_0_TypeInfo);
    byte_42B10DD = 1;
  }
  v7 = sub_B52A54(EventInfoUIBase___c__DisplayClass29_0_TypeInfo);
  EventInfoUIBase___c__DisplayClass29_0___ctor((EventInfoUIBase___c__DisplayClass29_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  AssetName = TitleInfoEventUIComponent__GetAssetName(eventUiEntity, 0LL);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v7,
    Method_EventInfoUIBase___c__DisplayClass29_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetName, v23, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0LL);
}


void __fastcall EventInfoUIBase__LoadEventUIAssetData_26871700(
        EventInfoUIBase_o *this,
        int32_t eventId,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
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
  const MethodInfo *v24; // x2
  System_String_o *EventUIAssetDataPath_26892172; // x19
  AssetLoader_LoadEndDataHandler_o *v26; // x20

  if ( (byte_42B10DE & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_EventInfoUIBase___c__DisplayClass30_0__LoadEventUIAssetData_b__0__);
    sub_B52984(&EventInfoUIBase___c__DisplayClass30_0_TypeInfo);
    byte_42B10DE = 1;
  }
  v9 = sub_B52A54(EventInfoUIBase___c__DisplayClass30_0_TypeInfo);
  EventInfoUIBase___c__DisplayClass30_0___ctor((EventInfoUIBase___c__DisplayClass30_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
  EventUIAssetDataPath_26892172 = EventInfoUIBase__GetEventUIAssetDataPath_26892172(eventId, warId, v24);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v9,
    Method_EventInfoUIBase___c__DisplayClass30_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath_26892172, v26, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v9 + 24), 0LL);
}


void __fastcall EventInfoUIBase__LoadEventUIEffectPathAssetData(
        EventInfoUIBase_o *this,
        int32_t eventId,
        System_String_o *fileName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
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
  const MethodInfo *v24; // x2
  System_String_o *EventUIAssetDataEffectPath; // x19
  AssetLoader_LoadEndDataHandler_o *v26; // x20

  if ( (byte_42B10DF & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_EventInfoUIBase___c__DisplayClass31_0__LoadEventUIEffectPathAssetData_b__0__);
    sub_B52984(&EventInfoUIBase___c__DisplayClass31_0_TypeInfo);
    byte_42B10DF = 1;
  }
  v9 = sub_B52A54(EventInfoUIBase___c__DisplayClass31_0_TypeInfo);
  EventInfoUIBase___c__DisplayClass31_0___ctor((EventInfoUIBase___c__DisplayClass31_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
  EventUIAssetDataEffectPath = EventInfoUIBase__GetEventUIAssetDataEffectPath(eventId, fileName, v24);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v9,
    Method_EventInfoUIBase___c__DisplayClass31_0__LoadEventUIEffectPathAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataEffectPath, v26, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v9 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__LoadLocalAtlas(EventInfoUIBase_o *this, int32_t eventId, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
  int i; // w22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  Il2CppObject *v8; // x0
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v14; // [xsp+8h] [xbp-58h] BYREF
  int v15; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42B10E4 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_23694/*"{0:D2}"*/);
    sub_B52984(&StringLiteral_5421/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_42B10E4 = 1;
  }
  if ( this->fields.assetData )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B52A5C(atlasList, *(_QWORD *)&eventId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v15 = i;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
      v9 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23694/*"{0:D2}"*/, v8, 0LL);
      v14 = eventId;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
      v11 = System_String__Format_44563852((System_String_o *)StringLiteral_5421/*"DownloadEventUIAtlas{0}{1}"*/, v10, v9, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v11,
                                                                 v12);
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
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__LoadLocalAtlasWithWarId(
        EventInfoUIBase_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
  int i; // w23
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  Il2CppObject *v8; // x0
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x22
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v15; // [xsp+4h] [xbp-5Ch] BYREF
  int v16; // [xsp+8h] [xbp-58h] BYREF
  int v17; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42B10E5 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_23694/*"{0:D2}"*/);
    sub_B52984(&StringLiteral_5422/*"DownloadEventUIAtlas{0}{1}{2}"*/);
    byte_42B10E5 = 1;
  }
  if ( this->fields.assetData2 )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B52A5C(atlasList, *(_QWORD *)&warId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v17 = i;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
      v9 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23694/*"{0:D2}"*/, v8, 0LL);
      v16 = 0;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
      v15 = warId;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
      v12 = System_String__Format_44569380((System_String_o *)StringLiteral_5422/*"DownloadEventUIAtlas{0}{1}{2}"*/, v10, v11, v9, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v12,
                                                                 v13);
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
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
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

  if ( (byte_42B10E0 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    byte_42B10E0 = 1;
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
void __fastcall EventInfoUIBase__ReleaseEventUIAssetData_26871212(
        EventInfoUIBase_o *this,
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath_26892172; // x19

  if ( (byte_42B10E1 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    byte_42B10E1 = 1;
  }
  if ( this->fields.assetData2 )
  {
    EventUIAssetDataPath_26892172 = EventInfoUIBase__GetEventUIAssetDataPath_26892172(
                                      eventId,
                                      warId,
                                      *(const MethodInfo **)&warId);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(EventUIAssetDataPath_26892172, 0LL);
  }
}


void __fastcall EventInfoUIBase__ReleaseEventUIEffectPathAssetData(
        EventInfoUIBase_o *this,
        int32_t eventId,
        System_String_o *fileName,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  System_String_o *EventUIAssetDataEffectPath; // x20
  __int64 v9; // x1
  struct System_Collections_Generic_List_AssetData__o *assetDataList; // x0

  if ( (byte_42B10E2 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_AssetData___);
    sub_B52984(&Method_System_Collections_Generic_List_AssetData__Clear__);
    byte_42B10E2 = 1;
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.assetDataList,
         (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_AssetData___) )
  {
    EventUIAssetDataEffectPath = EventInfoUIBase__GetEventUIAssetDataEffectPath(eventId, fileName, v7);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(EventUIAssetDataEffectPath, 0LL);
    assetDataList = this->fields.assetDataList;
    if ( !assetDataList )
      sub_B52A5C(0LL, v9);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)assetDataList,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_AssetData__Clear__);
  }
}


void __fastcall EventInfoUIBase__ReleaseLocalAtlas(EventInfoUIBase_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0

  if ( (byte_42B10E3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_42B10E3 = 1;
  }
  atlasList = this->fields.atlasList;
  if ( !atlasList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
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
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v12; // x0
  __int64 v13; // x1
  bool v14; // w20
  int v15; // w21
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42B10E6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_42B10E6 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
      &v17,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsNullOrEmpty,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v18 = v17;
    do
    {
      v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v18,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v9 )
      {
        v14 = 0;
        v15 = 8;
        goto LABEL_16;
      }
      current = v18.fields.current;
      if ( !v18.fields.current )
        sub_B52A5C(v9, v10);
      v12 = UIAtlas__GetSprite((UIAtlas_o *)v18.fields.current, spriteName, 0LL);
    }
    while ( !v12 );
    if ( !sprite )
      sub_B52A5C(v12, v13);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v14 = 1;
    v15 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v15 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B52A5C(IsNullOrEmpty, v8);
    }
  }
  return v14;
}


void __fastcall EventInfoUIBase__SetTotalBoxGacha(EventInfoUIBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  ;
}


bool __fastcall EventInfoUIBase__SetUITexture(
        EventInfoUIBase_o *this,
        UITexture_o *texture,
        System_String_o *textureName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_List_AssetData__o *assetDataList; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  char v13; // w19
  int v14; // w20
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B10E7 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_Texture2D____68579976);
    sub_B52984(&Method_System_Linq_Enumerable_Any_AssetData___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B10E7 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( System_String__IsNullOrEmpty(textureName, 0LL)
    || !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.assetDataList,
          (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_AssetData___) )
  {
    return 1;
  }
  assetDataList = this->fields.assetDataList;
  if ( !assetDataList )
    sub_B52A5C(0LL, v7);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)assetDataList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
  v17 = v16;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      v13 = 0;
      v14 = 3;
      goto LABEL_17;
    }
    if ( !v17.fields.current )
      sub_B52A5C(0LL, v9);
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               (AssetData_o *)v17.fields.current,
                                                               textureName,
                                                               (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  }
  while ( !v11 );
  if ( !texture )
    sub_B52A5C(v11, v12);
  ((void (__fastcall *)(UITexture_o *, UnityEngine_Object_o *, Il2CppMethodPointer))texture->klass->vtable._27_set_mainTexture.method)(
    texture,
    Object_WarBoardWaitTimeSetting,
    texture->klass->vtable._28_get_shader.methodPtr);
  v13 = 1;
  v14 = 8;
LABEL_17:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
  return (v14 == 8) & v13;
}


void __fastcall EventInfoUIBase__SetValue(
        EventInfoUIBase_o *this,
        int32_t valType,
        Il2CppObject *val,
        int32_t setType,
        const MethodInfo *method)
{
  EventInfoUIBase___c__DisplayClass16_0_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_T__o *datas; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x22
  int32_t v14; // w8
  void *image; // x2
  const MethodInfo *v16; // x3

  if ( (byte_42B10D8 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_EventInfoUIBase_Data___);
    sub_B52984(&Method_System_Func_EventInfoUIBase_Data__bool___ctor__);
    sub_B52984(&System_Func_EventInfoUIBase_Data__bool__TypeInfo);
    sub_B52984(&Method_EventInfoUIBase___c__DisplayClass16_0__SetValue_b__0__);
    sub_B52984(&EventInfoUIBase___c__DisplayClass16_0_TypeInfo);
    byte_42B10D8 = 1;
  }
  v9 = (EventInfoUIBase___c__DisplayClass16_0_o *)sub_B52A54(EventInfoUIBase___c__DisplayClass16_0_TypeInfo);
  EventInfoUIBase___c__DisplayClass16_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  v9->fields.setType = setType;
  v9->fields.valType = valType;
  datas = (System_Collections_Generic_List_T__o *)this->fields.datas;
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_EventInfoUIBase_Data__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_EventInfoUIBase___c__DisplayClass16_0__SetValue_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_EventInfoUIBase_Data__bool___ctor__);
  if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
         datas,
         (System_Func_T__bool__o *)v13,
         (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_EventInfoUIBase_Data___) )
  {
    v14 = v9->fields.valType;
    switch ( v14 )
    {
      case 3:
        v16 = this->klass->vtable._14_SetTotalBoxGacha.method;
        image = this->klass[1]._1.image;
        goto LABEL_12;
      case 2:
        v16 = this->klass->vtable._13_SetConquestInfos.method;
        image = this->klass->vtable._14_SetTotalBoxGacha.methodPtr;
        goto LABEL_12;
      case 1:
        v16 = this->klass->vtable._12_SetEventId.method;
        image = this->klass->vtable._13_SetConquestInfos.methodPtr;
LABEL_12:
        ((void (__fastcall *)(EventInfoUIBase_o *, Il2CppObject *, void *))v16)(this, val, image);
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


void __fastcall EventInfoUIBase___c__DisplayClass16_0___ctor(
        EventInfoUIBase___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoUIBase___c__DisplayClass16_0___SetValue_b__0(
        EventInfoUIBase___c__DisplayClass16_0_o *this,
        EventInfoUIBase_Data_o *data,
        const MethodInfo *method)
{
  int32_t setType; // w8

  if ( !data )
    sub_B52A5C(this, 0LL);
  setType = data->fields.setType;
  return (!setType || setType == this->fields.setType) && data->fields.valType == this->fields.valType;
}


void __fastcall EventInfoUIBase___c__DisplayClass17_0___ctor(
        EventInfoUIBase___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoUIBase___c__DisplayClass17_0___HasMatchedType_b__0(
        EventInfoUIBase___c__DisplayClass17_0_o *this,
        EventInfoUIBase_Data_o *data,
        const MethodInfo *method)
{
  int32_t setType; // w8

  if ( !data )
    sub_B52A5C(this, 0LL);
  setType = data->fields.setType;
  return (!setType || setType == this->fields.setType) && data->fields.valType == this->fields.valType;
}


void __fastcall EventInfoUIBase___c__DisplayClass29_0___ctor(
        EventInfoUIBase___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoUIBase___c__DisplayClass29_0___LoadEventUIAssetData_b__0(
        EventInfoUIBase___c__DisplayClass29_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct EventInfoUIBase_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, data);
  _4__this->fields.assetData = data;
  sub_B52920(&_4__this->fields.assetData);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoUIBase___c__DisplayClass30_0___ctor(
        EventInfoUIBase___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoUIBase___c__DisplayClass30_0___LoadEventUIAssetData_b__0(
        EventInfoUIBase___c__DisplayClass30_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct EventInfoUIBase_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, data);
  _4__this->fields.assetData2 = data;
  sub_B52920(&_4__this->fields.assetData2);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoUIBase___c__DisplayClass31_0___ctor(
        EventInfoUIBase___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoUIBase___c__DisplayClass31_0___LoadEventUIEffectPathAssetData_b__0(
        EventInfoUIBase___c__DisplayClass31_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  EventInfoUIBase___c__DisplayClass31_0_o *v4; // x19
  struct EventInfoUIBase_o *_4__this; // x8

  v4 = this;
  if ( (byte_42AD915 & 1) == 0 )
  {
    this = (EventInfoUIBase___c__DisplayClass31_0_o *)sub_B52984(&Method_System_Collections_Generic_List_AssetData__Add__);
    byte_42AD915 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (this = (EventInfoUIBase___c__DisplayClass31_0_o *)_4__this->fields.assetDataList) == 0LL )
    sub_B52A5C(this, data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_AssetData__Add__);
  ActionExtensions__Call(v4->fields.callback, 0LL);
}