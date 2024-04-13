void __fastcall EventInfoUIBase___ctor(EventInfoUIBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  EventInfoUIBase_Data_o *v27; // x21
  __int64 v28; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_42E9AB6 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoUIBase_Data_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoUIBase_Data__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoUIBase_Data___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_UIAtlas__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_AssetData__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_EventInfoUIBase_Data__TypeInfo, v23, v24, v25);
    byte_42E9AB6 = 1;
  }
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventInfoUIBase_Data__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventInfoUIBase_Data___ctor__);
  v27 = (EventInfoUIBase_Data_o *)sub_B5D694(EventInfoUIBase_Data_TypeInfo);
  EventInfoUIBase_Data___ctor(v27, 0LL);
  if ( !v26 )
    sub_B5D69C(v28, v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v26,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventInfoUIBase_Data__Add__);
  this->fields.datas = (struct System_Collections_Generic_List_EventInfoUIBase_Data__o *)v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.datas,
    (System_Int32_array **)v26,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.assetDataList = (struct System_Collections_Generic_List_AssetData__o *)v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.assetDataList,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v43;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.atlasList,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventInfoUIBase__FindEventUIObjcet(
        EventInfoUIBase_o *this,
        System_String_o *name,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UnityEngine_Component_o *EventUIRoot; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x3
  System_Collections_IEnumerator_c *v28; // x8
  unsigned __int64 v29; // x10
  System_Collections_IEnumerator_c **v30; // x11
  __int64 v31; // x0
  UnityEngine_Transform_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x9
  UnityEngine_Object_o *v35; // x21
  _BOOL8 v36; // x0
  __int64 v37; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  int v39; // w8
  __int64 v40; // x0
  __int64 v41; // x3
  __int64 v42; // x8
  __int64 v43; // x19
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  int v48; // [xsp+0h] [xbp-40h]

  if ( (byte_42E9AB4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_Transform___, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v15, v16, v17);
    byte_42E9AB4 = 1;
  }
  EventUIRoot = (UnityEngine_Component_o *)EventInfoUIBase__GetEventUIRoot(this, (const MethodInfo *)name);
  if ( !EventUIRoot
    || (EventUIRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                   EventUIRoot,
                                                   (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Transform___)) == 0LL )
  {
    sub_B5D69C(EventUIRoot, v19);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)EventUIRoot, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v20);
  do
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        p_offset += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
    {
      gameObject = 0LL;
      v39 = 82;
      goto LABEL_29;
    }
    v28 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      v30 = (System_Collections_IEnumerator_c **)&v28->_1.interfaceOffsets->offset;
      while ( *(v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v29;
        v30 += 2;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v31 = (__int64)&v28->vtable[*(_DWORD *)v30 + 1].method;
    }
    else
    {
LABEL_17:
      v31 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v27);
    }
    v32 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v31)(
                                       Enumerator,
                                       *(_QWORD *)(v31 + 8));
    if ( !v32 )
      goto LABEL_41;
    v34 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v34
      || (UnityEngine_Transform_c *)v32->klass->_2.typeHierarchy[v34 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v32 = (UnityEngine_Transform_o *)sub_B5D990(v32);
LABEL_41:
      sub_B5D69C(v32, v33);
    }
    v35 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v32, name, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v36 = UnityEngine_Object__op_Equality(v35, 0LL, 0LL);
  }
  while ( v36 );
  if ( !v35 )
    sub_B5D69C(v36, v37);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v35, 0LL);
  v39 = 84;
LABEL_29:
  v48 = v39;
  v40 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v40 )
  {
    v42 = *(_QWORD *)v40;
    v43 = v40;
    if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
    {
      v44 = 0LL;
      v45 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
          goto LABEL_34;
      }
      v46 = v42 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_34:
      v46 = sub_AF54C0(v40, System_IDisposable_TypeInfo, 0LL, v41);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
  }
  if ( v48 == 82 )
    return 0LL;
  return gameObject;
}


System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataEffectPath(
        int32_t eventId,
        System_String_o *fileName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9AA6 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)fileName, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_5918/*"Effect/Event/{0}/{1}"*/, v6, v7, v8);
    byte_42E9AA6 = 1;
  }
  v11 = eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return System_String__Format_44573324((System_String_o *)StringLiteral_5918/*"Effect/Event/{0}/{1}"*/, v9, (Il2CppObject *)fileName, 0LL);
}


System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataPath(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9AA4 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v5, v6, v7);
    byte_42E9AA4 = 1;
  }
  v10 = eventId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format((System_String_o *)StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v8, 0LL);
}


System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataPath_27089516(
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+8h] [xbp-18h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9AA5 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, warId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_6287/*"EventUI/Prefabs/{0}/{1}"*/, v6, v7, v8);
    byte_42E9AA5 = 1;
  }
  v13 = eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v12 = warId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return System_String__Format_44573324((System_String_o *)StringLiteral_6287/*"EventUI/Prefabs/{0}/{1}"*/, v9, v10, 0LL);
}


UnityEngine_Transform_o *__fastcall EventInfoUIBase__GetEventUIRoot(EventInfoUIBase_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL )
    sub_B5D69C(transform, v3);
  return UnityEngine_Transform__get_parent(transform, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventInfoUIBase__GetGameObjectFromEventUIAssetData(
        EventInfoUIBase_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  AssetData_o *assetData; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  AssetData_o *assetData2; // x0

  if ( (byte_42E9AB2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E9AB2 = 1;
  }
  assetData = this->fields.assetData;
  if ( !assetData )
    goto LABEL_8;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             name,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  EventInfoUIBase___c__DisplayClass17_0_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_T__o *datas; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x20

  if ( (byte_42E9AA3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_EventInfoUIBase_Data___, valType, setType, method);
    sub_B5D5C4(&Method_System_Func_EventInfoUIBase_Data__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_EventInfoUIBase_Data__bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_EventInfoUIBase___c__DisplayClass17_0__HasMatchedType_b__0__, v13, v14, v15);
    sub_B5D5C4(&EventInfoUIBase___c__DisplayClass17_0_TypeInfo, v16, v17, v18);
    byte_42E9AA3 = 1;
  }
  v19 = (EventInfoUIBase___c__DisplayClass17_0_o *)sub_B5D694(EventInfoUIBase___c__DisplayClass17_0_TypeInfo);
  EventInfoUIBase___c__DisplayClass17_0___ctor(v19, 0LL);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  v19->fields.setType = setType;
  v19->fields.valType = valType;
  datas = (System_Collections_Generic_List_T__o *)this->fields.datas;
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventInfoUIBase_Data__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v19,
    Method_EventInfoUIBase___c__DisplayClass17_0__HasMatchedType_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_EventInfoUIBase_Data__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           datas,
           (System_Func_T__bool__o *)v23,
           (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_EventInfoUIBase_Data___);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x19
  bool v10; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_42E9AB3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E9AB3 = 1;
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
  v10 = UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL);
  result = 0LL;
  if ( !v10 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)GameObjectFromEventUIAssetData,
                                         (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return result;
}


bool __fastcall EventInfoUIBase__IsPlayAnim(EventInfoUIBase_o *this, int32_t type, const MethodInfo *method)
{
  return 0;
}


bool __fastcall EventInfoUIBase__IsTargetScene(EventInfoUIBase_o *this, int32_t targetType, const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E9AB5 & 1) == 0 )
  {
    sub_B5D5C4(&SceneList_TypeInfo, targetType, (_DWORD)method, v3);
    byte_42E9AB5 = 1;
  }
  m_Handle = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v7);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_o *AssetName; // x19
  AssetLoader_LoadEndDataHandler_o *v32; // x21

  if ( (byte_42E9AA7 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)eventUiEntity, (_DWORD)callback, method);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_EventInfoUIBase___c__DisplayClass29_0__LoadEventUIAssetData_b__0__, v10, v11, v12);
    sub_B5D5C4(&EventInfoUIBase___c__DisplayClass29_0_TypeInfo, v13, v14, v15);
    byte_42E9AA7 = 1;
  }
  v16 = sub_B5D694(EventInfoUIBase___c__DisplayClass29_0_TypeInfo);
  EventInfoUIBase___c__DisplayClass29_0___ctor((EventInfoUIBase___c__DisplayClass29_0_o *)v16, 0LL);
  if ( !v16 )
    sub_B5D69C(v17, v18);
  *(_QWORD *)(v16 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)callback, v25, v26, v27, v28, v29, v30);
  AssetName = TitleInfoEventUIComponent__GetAssetName(eventUiEntity, 0LL);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v16,
    Method_EventInfoUIBase___c__DisplayClass29_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetName, v32, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v16 + 24), 0LL);
}


void __fastcall EventInfoUIBase__LoadEventUIAssetData_27069044(
        EventInfoUIBase_o *this,
        int32_t eventId,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x2
  System_String_o *EventUIAssetDataPath_27089516; // x19
  AssetLoader_LoadEndDataHandler_o *v35; // x20

  if ( (byte_42E9AA8 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, eventId, warId, callback);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventInfoUIBase___c__DisplayClass30_0__LoadEventUIAssetData_b__0__, v12, v13, v14);
    sub_B5D5C4(&EventInfoUIBase___c__DisplayClass30_0_TypeInfo, v15, v16, v17);
    byte_42E9AA8 = 1;
  }
  v18 = sub_B5D694(EventInfoUIBase___c__DisplayClass30_0_TypeInfo);
  EventInfoUIBase___c__DisplayClass30_0___ctor((EventInfoUIBase___c__DisplayClass30_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)callback, v27, v28, v29, v30, v31, v32);
  EventUIAssetDataPath_27089516 = EventInfoUIBase__GetEventUIAssetDataPath_27089516(eventId, warId, v33);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v18,
    Method_EventInfoUIBase___c__DisplayClass30_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath_27089516, v35, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v18 + 24), 0LL);
}


void __fastcall EventInfoUIBase__LoadEventUIEffectPathAssetData(
        EventInfoUIBase_o *this,
        int32_t eventId,
        System_String_o *fileName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x2
  System_String_o *EventUIAssetDataEffectPath; // x19
  AssetLoader_LoadEndDataHandler_o *v35; // x20

  if ( (byte_42E9AA9 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, eventId, (_DWORD)fileName, callback);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventInfoUIBase___c__DisplayClass31_0__LoadEventUIEffectPathAssetData_b__0__, v12, v13, v14);
    sub_B5D5C4(&EventInfoUIBase___c__DisplayClass31_0_TypeInfo, v15, v16, v17);
    byte_42E9AA9 = 1;
  }
  v18 = sub_B5D694(EventInfoUIBase___c__DisplayClass31_0_TypeInfo);
  EventInfoUIBase___c__DisplayClass31_0___ctor((EventInfoUIBase___c__DisplayClass31_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)callback, v27, v28, v29, v30, v31, v32);
  EventUIAssetDataEffectPath = EventInfoUIBase__GetEventUIAssetDataEffectPath(eventId, fileName, v33);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v18,
    Method_EventInfoUIBase___c__DisplayClass31_0__LoadEventUIEffectPathAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataEffectPath, v35, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v18 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__LoadLocalAtlas(EventInfoUIBase_o *this, int32_t eventId, const MethodInfo *method)
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
  int i; // w22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v33; // [xsp+8h] [xbp-58h] BYREF
  int v34; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E9AAE & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_23812/*"{0:D2}"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5456/*"DownloadEventUIAtlas{0}{1}"*/, v21, v22, v23);
    byte_42E9AAE = 1;
  }
  if ( this->fields.assetData )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B5D69C(atlasList, *(_QWORD *)&eventId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v34 = i;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
      v28 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23812/*"{0:D2}"*/, v27, 0LL);
      v33 = eventId;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
      v30 = System_String__Format_44573324((System_String_o *)StringLiteral_5456/*"DownloadEventUIAtlas{0}{1}"*/, v29, v28, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v30,
                                                                 v31);
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
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__LoadLocalAtlasWithWarId(
        EventInfoUIBase_o *this,
        int32_t warId,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
  int i; // w23
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x22
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  const MethodInfo *v32; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v34; // [xsp+4h] [xbp-5Ch] BYREF
  int v35; // [xsp+8h] [xbp-58h] BYREF
  int v36; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E9AAF & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, warId, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_23812/*"{0:D2}"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5457/*"DownloadEventUIAtlas{0}{1}{2}"*/, v21, v22, v23);
    byte_42E9AAF = 1;
  }
  if ( this->fields.assetData2 )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B5D69C(atlasList, *(_QWORD *)&warId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v36 = i;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
      v28 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23812/*"{0:D2}"*/, v27, 0LL);
      v35 = 0;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
      v34 = warId;
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
      v31 = System_String__Format_44578852((System_String_o *)StringLiteral_5457/*"DownloadEventUIAtlas{0}{1}{2}"*/, v29, v30, v28, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v31,
                                                                 v32);
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
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
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
  __int64 v3; // x3
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_42E9AAA & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, eventId, (_DWORD)method, v3);
    byte_42E9AAA = 1;
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
void __fastcall EventInfoUIBase__ReleaseEventUIAssetData_27068556(
        EventInfoUIBase_o *this,
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath_27089516; // x19

  if ( (byte_42E9AAB & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, eventId, warId, method);
    byte_42E9AAB = 1;
  }
  if ( this->fields.assetData2 )
  {
    EventUIAssetDataPath_27089516 = EventInfoUIBase__GetEventUIAssetDataPath_27089516(
                                      eventId,
                                      warId,
                                      *(const MethodInfo **)&warId);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(EventUIAssetDataPath_27089516, 0LL);
  }
}


void __fastcall EventInfoUIBase__ReleaseEventUIEffectPathAssetData(
        EventInfoUIBase_o *this,
        int32_t eventId,
        System_String_o *fileName,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  const MethodInfo *v13; // x2
  System_String_o *EventUIAssetDataEffectPath; // x20
  __int64 v15; // x1
  struct System_Collections_Generic_List_AssetData__o *assetDataList; // x0

  if ( (byte_42E9AAC & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, eventId, (_DWORD)fileName, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_AssetData___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData__Clear__, v10, v11, v12);
    byte_42E9AAC = 1;
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.assetDataList,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_AssetData___) )
  {
    EventUIAssetDataEffectPath = EventInfoUIBase__GetEventUIAssetDataEffectPath(eventId, fileName, v13);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(EventUIAssetDataEffectPath, 0LL);
    assetDataList = this->fields.assetDataList;
    if ( !assetDataList )
      sub_B5D69C(0LL, v15);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)assetDataList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_AssetData__Clear__);
  }
}


void __fastcall EventInfoUIBase__ReleaseLocalAtlas(EventInfoUIBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0

  if ( (byte_42E9AAD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__Clear__, (_DWORD)method, v2, v3);
    byte_42E9AAD = 1;
  }
  atlasList = this->fields.atlasList;
  if ( !atlasList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v24; // x0
  __int64 v25; // x1
  bool v26; // w20
  int v27; // w21
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E9AB0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_UIAtlas___, (_DWORD)sprite, (_DWORD)spriteName, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v16, v17, v18);
    byte_42E9AB0 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
      &v29,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsNullOrEmpty,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v30 = v29;
    do
    {
      v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v30,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v21 )
      {
        v26 = 0;
        v27 = 8;
        goto LABEL_16;
      }
      current = v30.fields.current;
      if ( !v30.fields.current )
        sub_B5D69C(v21, v22);
      v24 = UIAtlas__GetSprite((UIAtlas_o *)v30.fields.current, spriteName, 0LL);
    }
    while ( !v24 );
    if ( !sprite )
      sub_B5D69C(v24, v25);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v26 = 1;
    v27 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v30,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v27 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B5D69C(IsNullOrEmpty, v20);
    }
  }
  return v26;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x1
  struct System_Collections_Generic_List_AssetData__o *assetDataList; // x0
  __int64 v27; // x1
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  _BOOL8 v29; // x0
  __int64 v30; // x1
  char v31; // w19
  int v32; // w20
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E9AB1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, (_DWORD)texture, (_DWORD)textureName, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_AssetData___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    byte_42E9AB1 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( System_String__IsNullOrEmpty(textureName, 0LL)
    || !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.assetDataList,
          (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_AssetData___) )
  {
    return 1;
  }
  assetDataList = this->fields.assetDataList;
  if ( !assetDataList )
    sub_B5D69C(0LL, v25);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)assetDataList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
  v35 = v34;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      v31 = 0;
      v32 = 3;
      goto LABEL_17;
    }
    if ( !v35.fields.current )
      sub_B5D69C(0LL, v27);
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               (AssetData_o *)v35.fields.current,
                                                               textureName,
                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v29 = UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  }
  while ( !v29 );
  if ( !texture )
    sub_B5D69C(v29, v30);
  ((void (__fastcall *)(UITexture_o *, UnityEngine_Object_o *, Il2CppMethodPointer))texture->klass->vtable._27_set_mainTexture.method)(
    texture,
    Object_WarBoardWaitTimeSetting,
    texture->klass->vtable._28_get_shader.methodPtr);
  v31 = 1;
  v32 = 8;
LABEL_17:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
  return (v32 == 8) & v31;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__SetValue(
        EventInfoUIBase_o *this,
        int32_t valType,
        Il2CppObject *val,
        int32_t setType,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  EventInfoUIBase___c__DisplayClass16_0_o *v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_T__o *datas; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x22
  int32_t v26; // w8
  void *image; // x2
  const MethodInfo *v28; // x3

  if ( (byte_42E9AA2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_EventInfoUIBase_Data___, valType, (_DWORD)val, *(_QWORD *)&setType);
    sub_B5D5C4(&Method_System_Func_EventInfoUIBase_Data__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_EventInfoUIBase_Data__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_EventInfoUIBase___c__DisplayClass16_0__SetValue_b__0__, v15, v16, v17);
    sub_B5D5C4(&EventInfoUIBase___c__DisplayClass16_0_TypeInfo, v18, v19, v20);
    byte_42E9AA2 = 1;
  }
  v21 = (EventInfoUIBase___c__DisplayClass16_0_o *)sub_B5D694(EventInfoUIBase___c__DisplayClass16_0_TypeInfo);
  EventInfoUIBase___c__DisplayClass16_0___ctor(v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  v21->fields.setType = setType;
  v21->fields.valType = valType;
  datas = (System_Collections_Generic_List_T__o *)this->fields.datas;
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventInfoUIBase_Data__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_EventInfoUIBase___c__DisplayClass16_0__SetValue_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_EventInfoUIBase_Data__bool___ctor__);
  if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
         datas,
         (System_Func_T__bool__o *)v25,
         (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_EventInfoUIBase_Data___) )
  {
    v26 = v21->fields.valType;
    switch ( v26 )
    {
      case 3:
        v28 = this->klass->vtable._14_SetTotalBoxGacha.method;
        image = this->klass[1]._1.image;
        goto LABEL_12;
      case 2:
        v28 = this->klass->vtable._13_SetConquestInfos.method;
        image = this->klass->vtable._14_SetTotalBoxGacha.methodPtr;
        goto LABEL_12;
      case 1:
        v28 = this->klass->vtable._12_SetEventId.method;
        image = this->klass->vtable._13_SetConquestInfos.methodPtr;
LABEL_12:
        ((void (__fastcall *)(EventInfoUIBase_o *, Il2CppObject *, void *))v28)(this, val, image);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(0LL, data);
  _4__this->fields.assetData = data;
  sub_B5D560(&_4__this->fields.assetData);
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
    sub_B5D69C(0LL, data);
  _4__this->fields.assetData2 = data;
  sub_B5D560(&_4__this->fields.assetData2);
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
  __int64 v3; // x3
  EventInfoUIBase___c__DisplayClass31_0_o *v5; // x19
  struct EventInfoUIBase_o *_4__this; // x8

  v5 = this;
  if ( (byte_42E6553 & 1) == 0 )
  {
    this = (EventInfoUIBase___c__DisplayClass31_0_o *)sub_B5D5C4(
                                                        &Method_System_Collections_Generic_List_AssetData__Add__,
                                                        (_DWORD)data,
                                                        (_DWORD)method,
                                                        v3);
    byte_42E6553 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this || (this = (EventInfoUIBase___c__DisplayClass31_0_o *)_4__this->fields.assetDataList) == 0LL )
    sub_B5D69C(this, data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AssetData__Add__);
  ActionExtensions__Call(v5->fields.callback, 0LL);
}