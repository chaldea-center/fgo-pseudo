void __fastcall EventInfoUIBase___ctor(EventInfoUIBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  Il2CppObject *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_List_object__o *v45; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Collections_Generic_List_object__o *v55; // x20
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7

  if ( (byte_4B1816F & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoUIBase_Data_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIBase_Data__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIBase_Data___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_EventInfoUIBase_Data__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_UIAtlas__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_AssetData__TypeInfo, v17, v18);
    byte_4B1816F = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventInfoUIBase_Data__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoUIBase_Data___ctor__);
  v23 = (Il2CppObject *)sub_1BCAA2C(EventInfoUIBase_Data_TypeInfo, v20, v21, v22);
  System_Object___ctor(v23, 0LL);
  if ( !v19
    || (items = v19->fields._items,
        v33 = Method_System_Collections_Generic_List_EventInfoUIBase_Data__Add__,
        ++v19->fields._version,
        !items) )
  {
    sub_1BCAA3C(v24, v25);
  }
  size = v19->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v19,
      v23,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    v19->fields._size = size + 1;
    v35[4] = (Il2CppClass *)v23;
    sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v23, v26, v27, v28, v29, v30, v31);
  }
  this->fields.datas = (struct System_Collections_Generic_List_EventInfoUIBase_Data__o *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.datas, (int64_t)v19, v36, v37, v38, v39, v40, v41);
  v45 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_AssetData__TypeInfo,
                                                       v42,
                                                       v43,
                                                       v44);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.assetDataList = (struct System_Collections_Generic_List_AssetData__o *)v45;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetDataList, (int64_t)v45, v46, v47, v48, v49, v50, v51);
  v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                       v52,
                                                       v53,
                                                       v54);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v55;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.atlasList, (int64_t)v55, v56, v57, v58, v59, v60, v61);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoUIBase__AfterRedisplay(EventInfoUIBase_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_GameObject_o *__fastcall EventInfoUIBase__FindEventUIObjcet(
        EventInfoUIBase_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Component_o *EventUIRoot; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v21; // x8
  __int64 v22; // x9
  System_Collections_IEnumerator_c **v23; // x10
  __int64 v24; // x0
  UnityEngine_Transform_o *v25; // x0
  __int64 v26; // x1
  __int64 methodPtr_low; // x9
  __int64 v28; // x1
  UnityEngine_Object_o *v29; // x21
  _BOOL8 v30; // x0
  __int64 v31; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x19
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0

  if ( (byte_4B1816D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_Transform___, name, method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v11, v12);
    byte_4B1816D = 1;
  }
  EventUIRoot = (UnityEngine_Component_o *)EventInfoUIBase__GetEventUIRoot(this, (const MethodInfo *)name);
  if ( !EventUIRoot
    || (EventUIRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__49322392(
                                                   EventUIRoot,
                                                   (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_Transform___)) == 0LL )
  {
    sub_1BCAA3C(EventUIRoot, v14);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)EventUIRoot, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v15);
  do
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
    {
      gameObject = 0LL;
      goto LABEL_28;
    }
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = (System_Collections_IEnumerator_c **)&v21->_1.interfaceOffsets->offset;
      while ( *(v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 2;
        if ( !v22 )
          goto LABEL_17;
      }
      v24 = (__int64)&v21->vtable[*(_DWORD *)v23 + 1].method;
    }
    else
    {
LABEL_17:
      v24 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v25 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v24)(
                                       Enumerator,
                                       *(_QWORD *)(v24 + 8));
    if ( !v25 )
      goto LABEL_38;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v25->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v25->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCACFC(v25);
LABEL_38:
      sub_1BCAA3C(v25, v26);
    }
    v29 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v25, name, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    v30 = UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
  }
  while ( v30 );
  if ( !v29 )
    sub_1BCAA3C(v30, v31);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29, 0LL);
LABEL_28:
  v33 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v33 )
  {
    v34 = *(_QWORD *)v33;
    v35 = v33;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_33;
      }
      v38 = v34 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_33:
      v38 = sub_1C1C7C0(v33, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
  }
  return gameObject;
}


System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataEffectPath(
        int32_t eventId,
        System_String_o *fileName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1815E & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, fileName, method);
    sub_1BCA7E0(&StringLiteral_5954/*"Effect/Event/{0}/{1}"*/, v5, v6);
    byte_4B1815E = 1;
  }
  v9 = eventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format_62415592((System_String_o *)StringLiteral_5954/*"Effect/Event/{0}/{1}"*/, v7, (Il2CppObject *)fileName, 0LL);
}


System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataPath(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1815C & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v4, v5);
    byte_4B1815C = 1;
  }
  v8 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format((System_String_o *)StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataPath_42780756(
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+8h] [xbp-38h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1815D & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&warId, method);
    sub_1BCA7E0(&StringLiteral_6356/*"EventUI/Prefabs/{0}/{1}"*/, v5, v6);
    byte_4B1815D = 1;
  }
  v11 = eventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v10 = warId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format_62415592((System_String_o *)StringLiteral_6356/*"EventUI/Prefabs/{0}/{1}"*/, v7, v8, 0LL);
}


UnityEngine_Transform_o *__fastcall EventInfoUIBase__GetEventUIRoot(EventInfoUIBase_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL )
    sub_1BCAA3C(transform, v3);
  return UnityEngine_Transform__get_parent(transform, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventInfoUIBase__GetGameObjectFromEventUIAssetData(
        EventInfoUIBase_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  AssetData_o *assetData; // x0
  __int64 v8; // x1
  Il2CppObject *Object_object__49237568; // x21
  AssetData_o *assetData2; // x0
  __int64 v11; // x1

  if ( (byte_4B1816B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, name, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B1816B = 1;
  }
  assetData = this->fields.assetData;
  if ( !assetData )
    goto LABEL_7;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              assetData,
                              name,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
  {
LABEL_7:
    assetData2 = this->fields.assetData2;
    if ( !assetData2 )
      return 0LL;
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                assetData2,
                                name,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
      return 0LL;
  }
  return (UnityEngine_GameObject_o *)Object_object__49237568;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoUIBase__HasMatchedType(
        EventInfoUIBase_o *this,
        int32_t valType,
        int32_t setType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Generic_List_T__o *datas; // x19
  System_Func_object__bool__o *v19; // x20

  if ( (byte_4B1815B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_EventInfoUIBase_Data___, *(_QWORD *)&valType, *(_QWORD *)&setType);
    sub_1BCA7E0(&System_Func_EventInfoUIBase_Data__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventInfoUIBase___c__DisplayClass17_0__HasMatchedType_b__0__, v9, v10);
    sub_1BCA7E0(&EventInfoUIBase___c__DisplayClass17_0_TypeInfo, v11, v12);
    byte_4B1815B = 1;
  }
  v13 = sub_1BCAA2C(EventInfoUIBase___c__DisplayClass17_0_TypeInfo, *(_QWORD *)&valType, *(_QWORD *)&setType, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_DWORD *)(v13 + 16) = setType;
  *(_DWORD *)(v13 + 20) = valType;
  datas = (System_Collections_Generic_List_T__o *)this->fields.datas;
  v19 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventInfoUIBase_Data__bool__TypeInfo, v15, v16, v17);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v13,
    Method_EventInfoUIBase___c__DisplayClass17_0__HasMatchedType_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           datas,
           (System_Func_T__bool__o *)v19,
           (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_EventInfoUIBase_Data___);
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
  __int64 v6; // x2
  __int64 v7; // x1
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x19
  __int64 v9; // x1

  if ( (byte_4B1816C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, name, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B1816C = 1;
  }
  GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                             this,
                                                             name,
                                                             method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL) )
    return 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       (Il2CppObject *)GameObjectFromEventUIAssetData,
                                       (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


bool __fastcall EventInfoUIBase__IsBusy(EventInfoUIBase_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall EventInfoUIBase__IsDisplaying(EventInfoUIBase_o *this, const MethodInfo *method)
{
  return 1;
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
  __int64 v8; // x1
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1816E & 1) == 0 )
  {
    sub_1BCA7E0(&SceneList_TypeInfo, *(_QWORD *)&targetType, method);
    byte_4B1816E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v6);
  m_Handle = UnityEngine_GameObject__get_scene(gameObject, 0LL).fields.m_Handle;
  p_m_Handle = &m_Handle;
  name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v8);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_String_o *AssetName; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  AssetLoader_LoadEndDataHandler_o *v32; // x20
  __int64 v33; // x1

  if ( (byte_4B1815F & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, eventUiEntity, callback);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventInfoUIBase___c__DisplayClass31_0__LoadEventUIAssetData_b__0__, v9, v10);
    sub_1BCA7E0(&EventInfoUIBase___c__DisplayClass31_0_TypeInfo, v11, v12);
    byte_4B1815F = 1;
  }
  v13 = sub_1BCAA2C(EventInfoUIBase___c__DisplayClass31_0_TypeInfo, eventUiEntity, callback, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)callback, v22, v23, v24, v25, v26, v27);
  AssetName = TitleInfoEventUIComponent__GetAssetName(eventUiEntity, 0LL);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v29, v30, v31);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v13,
    Method_EventInfoUIBase___c__DisplayClass31_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v33);
  if ( !AssetManager__loadAssetStorage(AssetName, v32, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v13 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__LoadEventUIAssetData_42781072(
        EventInfoUIBase_o *this,
        int32_t eventId,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x2
  System_String_o *EventUIAssetDataPath_42780756; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  AssetLoader_LoadEndDataHandler_o *v35; // x20
  __int64 v36; // x1

  if ( (byte_4B18160 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&warId);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventInfoUIBase___c__DisplayClass32_0__LoadEventUIAssetData_b__0__, v11, v12);
    sub_1BCA7E0(&EventInfoUIBase___c__DisplayClass32_0_TypeInfo, v13, v14);
    byte_4B18160 = 1;
  }
  v15 = sub_1BCAA2C(EventInfoUIBase___c__DisplayClass32_0_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&warId, callback);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)callback, v24, v25, v26, v27, v28, v29);
  EventUIAssetDataPath_42780756 = EventInfoUIBase__GetEventUIAssetDataPath_42780756(eventId, warId, v30);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v32, v33, v34);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v15,
    Method_EventInfoUIBase___c__DisplayClass32_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v36);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath_42780756, v35, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v15 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__LoadEventUIEffectPathAssetData(
        EventInfoUIBase_o *this,
        int32_t eventId,
        System_String_o *fileName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x2
  System_String_o *EventUIAssetDataEffectPath; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  AssetLoader_LoadEndDataHandler_o *v35; // x20
  __int64 v36; // x1

  if ( (byte_4B18161 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&eventId, fileName);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventInfoUIBase___c__DisplayClass33_0__LoadEventUIEffectPathAssetData_b__0__, v11, v12);
    sub_1BCA7E0(&EventInfoUIBase___c__DisplayClass33_0_TypeInfo, v13, v14);
    byte_4B18161 = 1;
  }
  v15 = sub_1BCAA2C(EventInfoUIBase___c__DisplayClass33_0_TypeInfo, *(_QWORD *)&eventId, fileName, callback);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)callback, v24, v25, v26, v27, v28, v29);
  EventUIAssetDataEffectPath = EventInfoUIBase__GetEventUIAssetDataEffectPath(eventId, fileName, v30);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v32, v33, v34);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v15,
    Method_EventInfoUIBase___c__DisplayClass33_0__LoadEventUIEffectPathAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v36);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataEffectPath, v35, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v15 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__LoadLocalAtlas(EventInfoUIBase_o *this, int32_t eventId, const MethodInfo *method)
{
  EventInfoUIBase_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v19; // w9
  int i; // w28
  Il2CppObject *v21; // x0
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  const MethodInfo *v25; // x2
  __int64 v26; // x1
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  __int64 v28; // x1
  Il2CppObject *Component_object; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v39; // x8
  int32_t v40; // [xsp+8h] [xbp-58h] BYREF
  int v41; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4B18167 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_25200/*"{0:D2}"*/, v13, v14);
    this = (EventInfoUIBase_o *)sub_1BCA7E0(&StringLiteral_5455/*"DownloadEventUIAtlas{0}{1}"*/, v15, v16);
    byte_4B18167 = 1;
  }
  if ( v4->fields.assetData )
  {
    atlasList = v4->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1BCAA3C(this, *(_QWORD *)&eventId);
    size = atlasList->fields._size;
    v19 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v19;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v41 = i;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
      v22 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25200/*"{0:D2}"*/, v21, 0LL);
      v40 = eventId;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
      v24 = System_String__Format_62415592((System_String_o *)StringLiteral_5455/*"DownloadEventUIAtlas{0}{1}"*/, v23, v22, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                                 v4,
                                                                 v24,
                                                                 v25);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      this = (EventInfoUIBase_o *)UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (EventInfoUIBase_o *)v4->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v36 = *(_QWORD *)&this->fields.m_CachedPtr;
      v37 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v36 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v36 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = v36 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v39 + 32) = Component_object;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)Component_object, v30, v31, v32, v33, v34, v35);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__LoadLocalAtlasWithWarId(
        EventInfoUIBase_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  EventInfoUIBase_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v19; // w9
  int i; // w29
  Il2CppObject *v21; // x0
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x22
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  const MethodInfo *v26; // x2
  __int64 v27; // x1
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  __int64 v29; // x1
  Il2CppObject *Component_object; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v40; // x8
  int32_t v41; // [xsp+4h] [xbp-6Ch] BYREF
  int v42; // [xsp+8h] [xbp-68h] BYREF
  int v43; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4B18168 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&warId, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_25200/*"{0:D2}"*/, v13, v14);
    this = (EventInfoUIBase_o *)sub_1BCA7E0(&StringLiteral_5456/*"DownloadEventUIAtlas{0}{1}{2}"*/, v15, v16);
    byte_4B18168 = 1;
  }
  if ( v4->fields.assetData2 )
  {
    atlasList = v4->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1BCAA3C(this, *(_QWORD *)&warId);
    size = atlasList->fields._size;
    v19 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v19;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v43 = i;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
      v22 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25200/*"{0:D2}"*/, v21, 0LL);
      v42 = 0;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
      v41 = warId;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
      v25 = System_String__Format_62415660((System_String_o *)StringLiteral_5456/*"DownloadEventUIAtlas{0}{1}{2}"*/, v23, v24, v22, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                                 v4,
                                                                 v25,
                                                                 v26);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
      this = (EventInfoUIBase_o *)UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (EventInfoUIBase_o *)v4->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v37 = *(_QWORD *)&this->fields.m_CachedPtr;
      v38 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v37 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v37 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = v37 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v40 + 32) = Component_object;
        sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 32), (int64_t)Component_object, v31, v32, v33, v34, v35, v36);
      }
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
  __int64 v5; // x1
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_4B18162 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&eventId, method);
    byte_4B18162 = 1;
  }
  if ( this->fields.assetData )
  {
    EventUIAssetDataPath = EventInfoUIBase__GetEventUIAssetDataPath(eventId, *(const MethodInfo **)&eventId);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__ReleaseEventUIAssetData_42781776(
        EventInfoUIBase_o *this,
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *EventUIAssetDataPath_42780756; // x19

  if ( (byte_4B18163 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&warId);
    byte_4B18163 = 1;
  }
  if ( this->fields.assetData2 )
  {
    EventUIAssetDataPath_42780756 = EventInfoUIBase__GetEventUIAssetDataPath_42780756(
                                      eventId,
                                      warId,
                                      *(const MethodInfo **)&warId);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
    AssetManager__releaseAssetStorage(EventUIAssetDataPath_42780756, 0LL);
  }
}


void __fastcall EventInfoUIBase__ReleaseEventUIAssetData_42781924(
        EventInfoUIBase_o *this,
        EventUiEntity_o *eventUiEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *AssetName; // x19

  if ( (byte_4B18164 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, eventUiEntity, method);
    byte_4B18164 = 1;
  }
  if ( this->fields.assetData || this->fields.assetData2 )
  {
    AssetName = TitleInfoEventUIComponent__GetAssetName(eventUiEntity, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
    AssetManager__releaseAssetStorage(AssetName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__ReleaseEventUIEffectPathAssetData(
        EventInfoUIBase_o *this,
        int32_t eventId,
        System_String_o *fileName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  System_String_o *EventUIAssetDataEffectPath; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_AssetData__o *assetDataList; // x8
  int32_t size; // w2
  int v18; // w9

  if ( (byte_4B18165 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&eventId, fileName);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_AssetData___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData__Clear__, v9, v10);
    byte_4B18165 = 1;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.assetDataList,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_AssetData___) )
  {
    EventUIAssetDataEffectPath = EventInfoUIBase__GetEventUIAssetDataEffectPath(eventId, fileName, v11);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v12);
    AssetManager__releaseAssetStorage(EventUIAssetDataEffectPath, 0LL);
    assetDataList = this->fields.assetDataList;
    if ( !assetDataList )
      sub_1BCAA3C(v14, v15);
    size = assetDataList->fields._size;
    v18 = assetDataList->fields._version + 1;
    assetDataList->fields._size = 0;
    assetDataList->fields._version = v18;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)assetDataList->fields._items, 0, size, 0LL);
  }
}


void __fastcall EventInfoUIBase__ReleaseLocalAtlas(EventInfoUIBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoUIBase_o *v3; // x19
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v6; // w9

  v3 = this;
  if ( (byte_4B18166 & 1) == 0 )
  {
    this = (EventInfoUIBase_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__Clear__, method, v2);
    byte_4B18166 = 1;
  }
  atlasList = v3->fields.atlasList;
  if ( !atlasList )
    sub_1BCAA3C(this, method);
  size = atlasList->fields._size;
  v6 = atlasList->fields._version + 1;
  atlasList->fields._size = 0;
  atlasList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v16; // x1
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B18169 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite, spriteName);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v13, v14);
    byte_4B18169 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( sprite )
    {
      UISprite__set_spriteName(sprite, 0LL, 0LL);
      return 1;
    }
    goto LABEL_19;
  }
  IsNullOrEmpty = this->fields.atlasList;
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v24 = v23;
  do
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v17 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1BCAA3C(IsNullOrEmpty, v16);
    }
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_1BCAA3C(v17, v18);
    v20 = UIAtlas__GetSprite((UIAtlas_o *)v24.fields._current, spriteName, 0LL);
  }
  while ( !v20 );
  if ( !sprite )
    sub_1BCAA3C(v20, v21);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void __fastcall EventInfoUIBase__SetTotalBoxGacha(EventInfoUIBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoUIBase__SetUIDisp(EventInfoUIBase_o *this, bool isDisp, const MethodInfo *method)
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  struct System_Collections_Generic_List_AssetData__o *assetDataList; // x0
  __int64 v21; // x1
  bool v22; // w21
  __int64 v23; // x1
  Il2CppObject *Object_object__49237568; // x22
  _BOOL8 v25; // x0
  __int64 v26; // x1
  int v27; // w19
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1816A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, texture, textureName);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_AssetData___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    byte_4B1816A = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( System_String__IsNullOrEmpty(textureName, 0LL)
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.assetDataList,
          (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_AssetData___) )
  {
    return 1;
  }
  assetDataList = this->fields.assetDataList;
  if ( !assetDataList )
    sub_1BCAA3C(0LL, v19);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)assetDataList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
  v30 = v29;
  do
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    if ( !v22 )
    {
      v27 = 7;
      goto LABEL_16;
    }
    if ( !v30.fields._current )
      sub_1BCAA3C(0LL, v21);
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                (AssetData_o *)v30.fields._current,
                                textureName,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    v25 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL);
  }
  while ( !v25 );
  if ( !texture )
    sub_1BCAA3C(v25, v26);
  ((void (__fastcall *)(UITexture_o *, Il2CppObject *, Il2CppMethodPointer))texture->klass->vtable._27_set_mainTexture.method)(
    texture,
    Object_object__49237568,
    texture->klass->vtable._28_get_shader.methodPtr);
  v27 = 6;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
  return v22 && v27 == 6;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_List_T__o *datas; // x21
  System_Func_object__bool__o *v21; // x22
  int v22; // w8
  const MethodInfo *v23; // x3
  Il2CppMethodPointer methodPtr; // x2

  if ( (byte_4B1815A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_EventInfoUIBase_Data___, *(_QWORD *)&valType, val);
    sub_1BCA7E0(&System_Func_EventInfoUIBase_Data__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventInfoUIBase___c__DisplayClass16_0__SetValue_b__0__, v11, v12);
    sub_1BCA7E0(&EventInfoUIBase___c__DisplayClass16_0_TypeInfo, v13, v14);
    byte_4B1815A = 1;
  }
  v15 = sub_1BCAA2C(EventInfoUIBase___c__DisplayClass16_0_TypeInfo, *(_QWORD *)&valType, val, *(_QWORD *)&setType);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_DWORD *)(v15 + 16) = setType;
  *(_DWORD *)(v15 + 20) = valType;
  datas = (System_Collections_Generic_List_T__o *)this->fields.datas;
  v21 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventInfoUIBase_Data__bool__TypeInfo, v17, v18, v19);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v15,
    Method_EventInfoUIBase___c__DisplayClass16_0__SetValue_b__0__,
    0LL);
  if ( BasicHelper__Any_object_(
         datas,
         (System_Func_T__bool__o *)v21,
         (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_EventInfoUIBase_Data___) )
  {
    v22 = *(_DWORD *)(v15 + 20);
    switch ( v22 )
    {
      case 3:
        v23 = this->klass->vtable._16_SetTotalBoxGacha.method;
        methodPtr = this->klass->vtable._17_IsBusy.methodPtr;
        goto LABEL_12;
      case 2:
        v23 = this->klass->vtable._15_SetConquestInfos.method;
        methodPtr = this->klass->vtable._16_SetTotalBoxGacha.methodPtr;
        goto LABEL_12;
      case 1:
        v23 = this->klass->vtable._14_SetEventId.method;
        methodPtr = this->klass->vtable._15_SetConquestInfos.methodPtr;
LABEL_12:
        ((void (__fastcall *)(EventInfoUIBase_o *, Il2CppObject *, Il2CppMethodPointer))v23)(this, val, methodPtr);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  setType = data->fields.setType;
  return (!setType || setType == this->fields.setType) && data->fields.valType == this->fields.valType;
}


void __fastcall EventInfoUIBase___c__DisplayClass31_0___ctor(
        EventInfoUIBase___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoUIBase___c__DisplayClass31_0___LoadEventUIAssetData_b__0(
        EventInfoUIBase___c__DisplayClass31_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventInfoUIBase_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, data);
  _4__this->fields.assetData = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.assetData,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoUIBase___c__DisplayClass32_0___ctor(
        EventInfoUIBase___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoUIBase___c__DisplayClass32_0___LoadEventUIAssetData_b__0(
        EventInfoUIBase___c__DisplayClass32_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventInfoUIBase_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, data);
  _4__this->fields.assetData2 = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.assetData2,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoUIBase___c__DisplayClass33_0___ctor(
        EventInfoUIBase___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoUIBase___c__DisplayClass33_0___LoadEventUIEffectPathAssetData_b__0(
        EventInfoUIBase___c__DisplayClass33_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventInfoUIBase___c__DisplayClass33_0_o *v9; // x19
  struct EventInfoUIBase_o *_4__this; // x8
  struct EventInfoUIBase_o *v11; // x8
  _QWORD *v12; // x9
  __int64 callback_low; // x10
  EventInfoUIBase_c **v14; // x8

  v9 = this;
  if ( (byte_4B18170 & 1) == 0 )
  {
    this = (EventInfoUIBase___c__DisplayClass33_0_o *)sub_1BCA7E0(
                                                        &Method_System_Collections_Generic_List_AssetData__Add__,
                                                        data,
                                                        method);
    byte_4B18170 = 1;
  }
  _4__this = v9->fields.__4__this;
  if ( !_4__this
    || (this = (EventInfoUIBase___c__DisplayClass33_0_o *)_4__this->fields.assetDataList) == 0LL
    || (v11 = this->fields.__4__this,
        v12 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++HIDWORD(this->fields.callback),
        !v11) )
  {
    sub_1BCAA3C(this, data);
  }
  callback_low = SLODWORD(this->fields.callback);
  if ( (unsigned int)callback_low >= LODWORD(v11->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)data,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &v11->klass + callback_low;
    LODWORD(this->fields.callback) = callback_low + 1;
    v14[4] = (EventInfoUIBase_c *)data;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  }
  ActionExtensions__Call(v9->fields.callback, 0LL);
}