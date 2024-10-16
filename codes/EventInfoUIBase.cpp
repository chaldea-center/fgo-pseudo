void __fastcall EventInfoUIBase___ctor(EventInfoUIBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  Il2CppObject *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_List_object__o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_List_object__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_4AB7C8E & 1) == 0 )
  {
    sub_1BAB41C(&EventInfoUIBase_Data_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventInfoUIBase_Data__Add__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_AssetData___ctor__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventInfoUIBase_Data___ctor__, v6);
    sub_1BAB41C(&System_Collections_Generic_List_EventInfoUIBase_Data__TypeInfo, v7);
    sub_1BAB41C(&System_Collections_Generic_List_UIAtlas__TypeInfo, v8);
    sub_1BAB41C(&System_Collections_Generic_List_AssetData__TypeInfo, v9);
    byte_4AB7C8E = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_EventInfoUIBase_Data__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_EventInfoUIBase_Data___ctor__);
  v11 = (Il2CppObject *)sub_1BAB668(EventInfoUIBase_Data_TypeInfo);
  System_Object___ctor(v11, 0LL);
  if ( !v10
    || (items = v10->fields._items,
        v17 = Method_System_Collections_Generic_List_EventInfoUIBase_Data__Add__,
        ++v10->fields._version,
        !items) )
  {
    sub_1BAB678(v12, v13);
  }
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      v11,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v11;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
  }
  this->fields.datas = (struct System_Collections_Generic_List_EventInfoUIBase_Data__o *)v10;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.datas, (int32_t)v10, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.assetDataList = (struct System_Collections_Generic_List_AssetData__o *)v22;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.assetDataList, (int32_t)v22, v23, v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v25;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.atlasList, (int32_t)v25, v26, v27);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *EventUIRoot; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v17; // x8
  __int64 v18; // x9
  System_Collections_IEnumerator_c **v19; // x10
  __int64 v20; // x0
  UnityEngine_Transform_o *v21; // x0
  __int64 v22; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *v24; // x21
  _BOOL8 v25; // x0
  __int64 v26; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x19
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_4AB7C8C & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponentInChildren_Transform___, name);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v5);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v7);
    sub_1BAB41C(&UnityEngine_Transform_TypeInfo, v8);
    byte_4AB7C8C = 1;
  }
  EventUIRoot = (UnityEngine_Component_o *)EventInfoUIBase__GetEventUIRoot(this, (const MethodInfo *)name);
  if ( !EventUIRoot
    || (EventUIRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__49000572(
                                                   EventUIRoot,
                                                   (const MethodInfo_2EBB07C *)Method_UnityEngine_Component_GetComponentInChildren_Transform___)) == 0LL )
  {
    sub_1BAB678(EventUIRoot, v10);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)EventUIRoot, 0LL);
  if ( !Enumerator )
    sub_1BAB678(0LL, v11);
  do
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BFD3FC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
    {
      gameObject = 0LL;
      goto LABEL_28;
    }
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 2;
        if ( !v18 )
          goto LABEL_17;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
    }
    else
    {
LABEL_17:
      v20 = sub_1BFD3FC(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v21 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                       Enumerator,
                                       *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_38;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BAB938(v21);
LABEL_38:
      sub_1BAB678(v21, v22);
    }
    v24 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v21, name, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v25 = UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
  }
  while ( v25 );
  if ( !v24 )
    sub_1BAB678(v25, v26);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
LABEL_28:
  v28 = sub_1BAB558(Enumerator, System_IDisposable_TypeInfo);
  if ( v28 )
  {
    v29 = *(_QWORD *)v28;
    v30 = v28;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_33;
      }
      v33 = v29 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_33:
      v33 = sub_1BFD3FC(v28, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  }
  return gameObject;
}


System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataEffectPath(
        int32_t eventId,
        System_String_o *fileName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4AB7C7D & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, fileName);
    sub_1BAB41C(&StringLiteral_5844/*"Effect/Event/{0}/{1}"*/, v7);
    byte_4AB7C7D = 1;
  }
  v10 = eventId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, method, v3, v4);
  return System_String__Format_62062500((System_String_o *)StringLiteral_5844/*"Effect/Event/{0}/{1}"*/, v8, (Il2CppObject *)fileName, 0LL);
}


System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataPath(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4AB7C7B & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_6238/*"EventUI/Prefabs/{0}"*/, v6);
    byte_4AB7C7B = 1;
  }
  v9 = eventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_6238/*"EventUI/Prefabs/{0}"*/, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataPath_42426788(
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  int32_t v14; // [xsp+8h] [xbp-38h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4AB7C7C & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&warId);
    sub_1BAB41C(&StringLiteral_6239/*"EventUI/Prefabs/{0}/{1}"*/, v7);
    byte_4AB7C7C = 1;
  }
  v15 = eventId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, method, v3, v4);
  v14 = warId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return System_String__Format_62062500((System_String_o *)StringLiteral_6239/*"EventUI/Prefabs/{0}/{1}"*/, v8, v12, 0LL);
}


UnityEngine_Transform_o *__fastcall EventInfoUIBase__GetEventUIRoot(EventInfoUIBase_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL )
    sub_1BAB678(transform, v3);
  return UnityEngine_Transform__get_parent(transform, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventInfoUIBase__GetGameObjectFromEventUIAssetData(
        EventInfoUIBase_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  AssetData_o *assetData; // x0
  Il2CppObject *Object_object__48916712; // x21
  AssetData_o *assetData2; // x0

  if ( (byte_4AB7C8A & 1) == 0 )
  {
    sub_1BAB41C(&Method_AssetData_GetObject_GameObject____76450888, name);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    byte_4AB7C8A = 1;
  }
  assetData = this->fields.assetData;
  if ( !assetData )
    goto LABEL_7;
  Object_object__48916712 = AssetData__GetObject_object__48916712(
                              assetData,
                              name,
                              (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48916712, 0LL, 0LL) )
  {
LABEL_7:
    assetData2 = this->fields.assetData2;
    if ( !assetData2 )
      return 0LL;
    Object_object__48916712 = AssetData__GetObject_object__48916712(
                                assetData2,
                                name,
                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48916712, 0LL, 0LL) )
      return 0LL;
  }
  return (UnityEngine_GameObject_o *)Object_object__48916712;
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
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_T__o *datas; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4AB7C7A & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_Any_EventInfoUIBase_Data___, *(_QWORD *)&valType);
    sub_1BAB41C(&System_Func_EventInfoUIBase_Data__bool__TypeInfo, v7);
    sub_1BAB41C(&Method_EventInfoUIBase___c__DisplayClass17_0__HasMatchedType_b__0__, v8);
    sub_1BAB41C(&EventInfoUIBase___c__DisplayClass17_0_TypeInfo, v9);
    byte_4AB7C7A = 1;
  }
  v10 = sub_1BAB668(EventInfoUIBase___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BAB678(v11, v12);
  *(_DWORD *)(v10 + 16) = setType;
  *(_DWORD *)(v10 + 20) = valType;
  datas = (System_Collections_Generic_List_T__o *)this->fields.datas;
  v14 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_EventInfoUIBase_Data__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_EventInfoUIBase___c__DisplayClass17_0__HasMatchedType_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           datas,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_2EAF73C *)Method_BasicHelper_Any_EventInfoUIBase_Data___);
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

  if ( (byte_4AB7C8B & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_GameObject___, name);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    byte_4AB7C8B = 1;
  }
  GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                             this,
                                                             name,
                                                             method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL) )
    return 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       (Il2CppObject *)GameObjectFromEventUIAssetData,
                                       (const MethodInfo_2F483D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AB7C8D & 1) == 0 )
  {
    sub_1BAB41C(&SceneList_TypeInfo, *(_QWORD *)&targetType);
    byte_4AB7C8D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BAB678(0LL, v6);
  m_Handle = UnityEngine_GameObject__get_scene(gameObject, 0LL).fields.m_Handle;
  p_m_Handle = &m_Handle;
  name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *AssetName; // x19
  AssetLoader_LoadEndDataHandler_o *v18; // x20

  if ( (byte_4AB7C7E & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, eventUiEntity);
    sub_1BAB41C(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BAB41C(&Method_EventInfoUIBase___c__DisplayClass31_0__LoadEventUIAssetData_b__0__, v8);
    sub_1BAB41C(&EventInfoUIBase___c__DisplayClass31_0_TypeInfo, v9);
    byte_4AB7C7E = 1;
  }
  v10 = sub_1BAB668(EventInfoUIBase___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BAB678(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = callback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)callback, v15, v16);
  AssetName = TitleInfoEventUIComponent__GetAssetName(eventUiEntity, 0LL);
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    (Il2CppObject *)v10,
    Method_EventInfoUIBase___c__DisplayClass31_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetName, v18, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v10 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__LoadEventUIAssetData_42427104(
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
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2
  System_String_o *EventUIAssetDataPath_42426788; // x19
  AssetLoader_LoadEndDataHandler_o *v21; // x20

  if ( (byte_4AB7C7F & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BAB41C(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1BAB41C(&Method_EventInfoUIBase___c__DisplayClass32_0__LoadEventUIAssetData_b__0__, v10);
    sub_1BAB41C(&EventInfoUIBase___c__DisplayClass32_0_TypeInfo, v11);
    byte_4AB7C7F = 1;
  }
  v12 = sub_1BAB668(EventInfoUIBase___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BAB678(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 24) = callback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)callback, v17, v18);
  EventUIAssetDataPath_42426788 = EventInfoUIBase__GetEventUIAssetDataPath_42426788(eventId, warId, v19);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)v12,
    Method_EventInfoUIBase___c__DisplayClass32_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath_42426788, v21, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v12 + 24), 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x23
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2
  System_String_o *EventUIAssetDataEffectPath; // x19
  AssetLoader_LoadEndDataHandler_o *v21; // x20

  if ( (byte_4AB7C80 & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BAB41C(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1BAB41C(&Method_EventInfoUIBase___c__DisplayClass33_0__LoadEventUIEffectPathAssetData_b__0__, v10);
    sub_1BAB41C(&EventInfoUIBase___c__DisplayClass33_0_TypeInfo, v11);
    byte_4AB7C80 = 1;
  }
  v12 = sub_1BAB668(EventInfoUIBase___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BAB678(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 24) = callback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)callback, v17, v18);
  EventUIAssetDataEffectPath = EventInfoUIBase__GetEventUIAssetDataEffectPath(eventId, fileName, v19);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)v12,
    Method_EventInfoUIBase___c__DisplayClass33_0__LoadEventUIEffectPathAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataEffectPath, v21, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v12 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__LoadLocalAtlas(EventInfoUIBase_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  EventInfoUIBase_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  __int64 size; // x2
  int v15; // w9
  int i; // w28
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v32; // x8
  int32_t v33; // [xsp+8h] [xbp-58h] BYREF
  int v34; // [xsp+Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_4AB7C86 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_1BAB41C(&int_TypeInfo, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIAtlas__Add__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    sub_1BAB41C(&StringLiteral_24988/*"{0:D2}"*/, v11);
    this = (EventInfoUIBase_o *)sub_1BAB41C(&StringLiteral_5381/*"DownloadEventUIAtlas{0}{1}"*/, v12);
    byte_4AB7C86 = 1;
  }
  if ( v6->fields.assetData )
  {
    atlasList = v6->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1BAB678(this, *(_QWORD *)&eventId);
    size = (unsigned int)atlasList->fields._size;
    v15 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v15;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v34 = i;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, size, v3, v4);
      v18 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_24988/*"{0:D2}"*/, v17, 0LL);
      v33 = eventId;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v19, v20, v21);
      v23 = System_String__Format_62062500((System_String_o *)StringLiteral_5381/*"DownloadEventUIAtlas{0}{1}"*/, v22, v18, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                                 v6,
                                                                 v23,
                                                                 v24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (EventInfoUIBase_o *)UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (EventInfoUIBase_o *)v6->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v29 = *(_QWORD *)&this->fields.m_CachedPtr;
      v30 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v29 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v29 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = v29 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v32 + 32) = Component_object;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v32 + 32), (int32_t)Component_object, v27, v28);
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
  __int64 v3; // x3
  __int64 v4; // x4
  EventInfoUIBase_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  __int64 size; // x2
  int v15; // w9
  int i; // w29
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x22
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v36; // x8
  int32_t v37; // [xsp+4h] [xbp-6Ch] BYREF
  int v38; // [xsp+8h] [xbp-68h] BYREF
  int v39; // [xsp+Ch] [xbp-64h] BYREF

  v6 = this;
  if ( (byte_4AB7C87 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&warId);
    sub_1BAB41C(&int_TypeInfo, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIAtlas__Add__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    sub_1BAB41C(&StringLiteral_24988/*"{0:D2}"*/, v11);
    this = (EventInfoUIBase_o *)sub_1BAB41C(&StringLiteral_5382/*"DownloadEventUIAtlas{0}{1}{2}"*/, v12);
    byte_4AB7C87 = 1;
  }
  if ( v6->fields.assetData2 )
  {
    atlasList = v6->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1BAB678(this, *(_QWORD *)&warId);
    size = (unsigned int)atlasList->fields._size;
    v15 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v15;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v39 = i;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, size, v3, v4);
      v18 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_24988/*"{0:D2}"*/, v17, 0LL);
      v38 = 0;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v19, v20, v21);
      v37 = warId;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v23, v24, v25);
      v27 = System_String__Format_62062568((System_String_o *)StringLiteral_5382/*"DownloadEventUIAtlas{0}{1}{2}"*/, v22, v26, v18, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                                 v6,
                                                                 v27,
                                                                 v28);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (EventInfoUIBase_o *)UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (EventInfoUIBase_o *)v6->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v33 = *(_QWORD *)&this->fields.m_CachedPtr;
      v34 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v33 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v33 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = v33 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v36 + 32) = Component_object;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v36 + 32), (int32_t)Component_object, v31, v32);
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
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_4AB7C81 & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4AB7C81 = 1;
  }
  if ( this->fields.assetData )
  {
    EventUIAssetDataPath = EventInfoUIBase__GetEventUIAssetDataPath(eventId, *(const MethodInfo **)&eventId);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__ReleaseEventUIAssetData_42427808(
        EventInfoUIBase_o *this,
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath_42426788; // x19

  if ( (byte_4AB7C82 & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4AB7C82 = 1;
  }
  if ( this->fields.assetData2 )
  {
    EventUIAssetDataPath_42426788 = EventInfoUIBase__GetEventUIAssetDataPath_42426788(
                                      eventId,
                                      warId,
                                      *(const MethodInfo **)&warId);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(EventUIAssetDataPath_42426788, 0LL);
  }
}


void __fastcall EventInfoUIBase__ReleaseEventUIAssetData_42427956(
        EventInfoUIBase_o *this,
        EventUiEntity_o *eventUiEntity,
        const MethodInfo *method)
{
  System_String_o *AssetName; // x19

  if ( (byte_4AB7C83 & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, eventUiEntity);
    byte_4AB7C83 = 1;
  }
  if ( this->fields.assetData || this->fields.assetData2 )
  {
    AssetName = TitleInfoEventUIComponent__GetAssetName(eventUiEntity, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_String_o *EventUIAssetDataEffectPath; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_AssetData__o *assetDataList; // x8
  int32_t size; // w2
  int v15; // w9

  if ( (byte_4AB7C84 & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Any_AssetData___, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_AssetData__Clear__, v8);
    byte_4AB7C84 = 1;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.assetDataList,
         (const MethodInfo_2ED117C *)Method_System_Linq_Enumerable_Any_AssetData___) )
  {
    EventUIAssetDataEffectPath = EventInfoUIBase__GetEventUIAssetDataEffectPath(eventId, fileName, v9);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(EventUIAssetDataEffectPath, 0LL);
    assetDataList = this->fields.assetDataList;
    if ( !assetDataList )
      sub_1BAB678(v11, v12);
    size = assetDataList->fields._size;
    v15 = assetDataList->fields._version + 1;
    assetDataList->fields._size = 0;
    assetDataList->fields._version = v15;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)assetDataList->fields._items, 0, size, 0LL);
  }
}


void __fastcall EventInfoUIBase__ReleaseLocalAtlas(EventInfoUIBase_o *this, const MethodInfo *method)
{
  EventInfoUIBase_o *v2; // x19
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4AB7C85 & 1) == 0 )
  {
    this = (EventInfoUIBase_o *)sub_1BAB41C(&Method_System_Collections_Generic_List_UIAtlas__Clear__, method);
    byte_4AB7C85 = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_1BAB678(this, method);
  size = atlasList->fields._size;
  v5 = atlasList->fields._version + 1;
  atlasList->fields._size = 0;
  atlasList->fields._version = v5;
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
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4AB7C88 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_4AB7C88 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2ED117C *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v20 = v19;
  do
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v13 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1BAB678(IsNullOrEmpty, v12);
    }
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1BAB678(v13, v14);
    v16 = UIAtlas__GetSprite((UIAtlas_o *)v20.fields._current, spriteName, 0LL);
  }
  while ( !v16 );
  if ( !sprite )
    sub_1BAB678(v16, v17);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Collections_Generic_List_AssetData__o *assetDataList; // x0
  __int64 v15; // x1
  bool v16; // w21
  Il2CppObject *Object_object__48916712; // x22
  _BOOL8 v18; // x0
  __int64 v19; // x1
  int v20; // w19
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4AB7C89 & 1) == 0 )
  {
    sub_1BAB41C(&Method_AssetData_GetObject_Texture2D____76450912, texture);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Any_AssetData___, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v11);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v12);
    byte_4AB7C89 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( System_String__IsNullOrEmpty(textureName, 0LL)
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.assetDataList,
          (const MethodInfo_2ED117C *)Method_System_Linq_Enumerable_Any_AssetData___) )
  {
    return 1;
  }
  assetDataList = this->fields.assetDataList;
  if ( !assetDataList )
    sub_1BAB678(0LL, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)assetDataList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
  v23 = v22;
  do
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    if ( !v16 )
    {
      v20 = 7;
      goto LABEL_16;
    }
    if ( !v23.fields._current )
      sub_1BAB678(0LL, v15);
    Object_object__48916712 = AssetData__GetObject_object__48916712(
                                (AssetData_o *)v23.fields._current,
                                textureName,
                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_Texture2D____76450912);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48916712, 0LL, 0LL);
  }
  while ( !v18 );
  if ( !texture )
    sub_1BAB678(v18, v19);
  ((void (__fastcall *)(UITexture_o *, Il2CppObject *, Il2CppMethodPointer))texture->klass->vtable._27_set_mainTexture.method)(
    texture,
    Object_object__48916712,
    texture->klass->vtable._28_get_shader.methodPtr);
  v20 = 6;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
  return v16 && v20 == 6;
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
  __int64 v12; // x23
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_T__o *datas; // x21
  System_Func_object__bool__o *v16; // x22
  int v17; // w8
  const MethodInfo *v18; // x3
  Il2CppMethodPointer methodPtr; // x2

  if ( (byte_4AB7C79 & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_Any_EventInfoUIBase_Data___, *(_QWORD *)&valType);
    sub_1BAB41C(&System_Func_EventInfoUIBase_Data__bool__TypeInfo, v9);
    sub_1BAB41C(&Method_EventInfoUIBase___c__DisplayClass16_0__SetValue_b__0__, v10);
    sub_1BAB41C(&EventInfoUIBase___c__DisplayClass16_0_TypeInfo, v11);
    byte_4AB7C79 = 1;
  }
  v12 = sub_1BAB668(EventInfoUIBase___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BAB678(v13, v14);
  *(_DWORD *)(v12 + 16) = setType;
  *(_DWORD *)(v12 + 20) = valType;
  datas = (System_Collections_Generic_List_T__o *)this->fields.datas;
  v16 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_EventInfoUIBase_Data__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v12,
    Method_EventInfoUIBase___c__DisplayClass16_0__SetValue_b__0__,
    0LL);
  if ( BasicHelper__Any_object_(
         datas,
         (System_Func_T__bool__o *)v16,
         (const MethodInfo_2EAF73C *)Method_BasicHelper_Any_EventInfoUIBase_Data___) )
  {
    v17 = *(_DWORD *)(v12 + 20);
    switch ( v17 )
    {
      case 3:
        v18 = this->klass->vtable._16_SetTotalBoxGacha.method;
        methodPtr = this->klass->vtable._17_IsBusy.methodPtr;
        goto LABEL_12;
      case 2:
        v18 = this->klass->vtable._15_SetConquestInfos.method;
        methodPtr = this->klass->vtable._16_SetTotalBoxGacha.methodPtr;
        goto LABEL_12;
      case 1:
        v18 = this->klass->vtable._14_SetEventId.method;
        methodPtr = this->klass->vtable._15_SetConquestInfos.methodPtr;
LABEL_12:
        ((void (__fastcall *)(EventInfoUIBase_o *, Il2CppObject *, Il2CppMethodPointer))v18)(this, val, methodPtr);
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
    sub_1BAB678(this, 0LL);
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
    sub_1BAB678(this, 0LL);
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
  struct EventInfoUIBase_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BAB678(0LL, data);
  _4__this->fields.assetData = data;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&_4__this->fields.assetData, (int32_t)data, (int32_t)method, v3);
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
  struct EventInfoUIBase_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BAB678(0LL, data);
  _4__this->fields.assetData2 = data;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&_4__this->fields.assetData2, (int32_t)data, (int32_t)method, v3);
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
  EventInfoUIBase___c__DisplayClass33_0_o *v5; // x19
  struct EventInfoUIBase_o *_4__this; // x8
  struct EventInfoUIBase_o *v7; // x8
  _QWORD *v8; // x9
  __int64 callback_low; // x10
  EventInfoUIBase_c **v10; // x8

  v5 = this;
  if ( (byte_4AB7C8F & 1) == 0 )
  {
    this = (EventInfoUIBase___c__DisplayClass33_0_o *)sub_1BAB41C(
                                                        &Method_System_Collections_Generic_List_AssetData__Add__,
                                                        data);
    byte_4AB7C8F = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this
    || (this = (EventInfoUIBase___c__DisplayClass33_0_o *)_4__this->fields.assetDataList) == 0LL
    || (v7 = this->fields.__4__this,
        v8 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++HIDWORD(this->fields.callback),
        !v7) )
  {
    sub_1BAB678(this, data);
  }
  callback_low = SLODWORD(this->fields.callback);
  if ( (unsigned int)callback_low >= LODWORD(v7->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)data,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &v7->klass + callback_low;
    LODWORD(this->fields.callback) = callback_low + 1;
    v10[4] = (EventInfoUIBase_c *)data;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)data, (int32_t)method, v3);
  }
  ActionExtensions__Call(v5->fields.callback, 0LL);
}