void __fastcall EventInfoUIBase___ctor(EventInfoUIBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  Il2CppObject *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A5D166 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoUIBase_Data_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIBase_Data__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIBase_Data___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventInfoUIBase_Data__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_4A5D166 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventInfoUIBase_Data__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventInfoUIBase_Data___ctor__);
  v4 = (Il2CppObject *)sub_1B887FC(EventInfoUIBase_Data_TypeInfo);
  System_Object___ctor(v4, 0LL);
  if ( !v3
    || (items = v3->fields._items,
        v10 = Method_System_Collections_Generic_List_EventInfoUIBase_Data__Add__,
        ++v3->fields._version,
        !items) )
  {
    sub_1B8880C(v5, v6);
  }
  size = v3->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      v4,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v12[4] = (Il2CppClass *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 4), (int32_t)v4, v7, v8);
  }
  this->fields.datas = (struct System_Collections_Generic_List_EventInfoUIBase_Data__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.datas, (int32_t)v3, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.assetDataList = (struct System_Collections_Generic_List_AssetData__o *)v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.assetDataList, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.atlasList, (int32_t)v18, v19, v20);
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
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *v20; // x21
  _BOOL8 v21; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x19
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0

  if ( (byte_4A5D164 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_Transform___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    byte_4A5D164 = 1;
  }
  EventUIRoot = (UnityEngine_Component_o *)EventInfoUIBase__GetEventUIRoot(this, (const MethodInfo *)name);
  if ( !EventUIRoot
    || (EventUIRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__48719376(
                                                   EventUIRoot,
                                                   (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_Transform___)) == 0LL )
  {
    sub_1B8880C(EventUIRoot, v6);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)EventUIRoot, 0LL);
  if ( !Enumerator )
    sub_1B8880C(0LL, v7);
  do
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
    {
      gameObject = 0LL;
      goto LABEL_28;
    }
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
    }
    else
    {
LABEL_17:
      v16 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_38;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B88ACC(v17);
LABEL_38:
      sub_1B8880C(v17, v18);
    }
    v20 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v17, name, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v21 = UnityEngine_Object__op_Equality(v20, 0LL, 0LL);
  }
  while ( v21 );
  if ( !v20 )
    sub_1B8880C(v21, v22);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0LL);
LABEL_28:
  v24 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
  if ( v24 )
  {
    v25 = *(_QWORD *)v24;
    v26 = v24;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_33;
      }
      v29 = v25 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_33:
      v29 = sub_1BDA590(v24, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
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
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5D155 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_5841/*"Effect/Event/{0}/{1}"*/);
    byte_4A5D155 = 1;
  }
  v9 = eventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, method, v3, v4);
  return System_String__Format_61721404((System_String_o *)StringLiteral_5841/*"Effect/Event/{0}/{1}"*/, v7, (Il2CppObject *)fileName, 0LL);
}


System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataPath(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5D153 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_6234/*"EventUI/Prefabs/{0}"*/);
    byte_4A5D153 = 1;
  }
  v8 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_6234/*"EventUI/Prefabs/{0}"*/, v6, 0LL);
}


System_String_o *__fastcall EventInfoUIBase__GetEventUIAssetDataPath_42141112(
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v7; // x20
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  int32_t v13; // [xsp+8h] [xbp-38h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5D154 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_6235/*"EventUI/Prefabs/{0}/{1}"*/);
    byte_4A5D154 = 1;
  }
  v14 = eventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, method, v3, v4);
  v13 = warId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v8, v9, v10);
  return System_String__Format_61721404((System_String_o *)StringLiteral_6235/*"EventUI/Prefabs/{0}/{1}"*/, v7, v11, 0LL);
}


UnityEngine_Transform_o *__fastcall EventInfoUIBase__GetEventUIRoot(EventInfoUIBase_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL )
    sub_1B8880C(transform, v3);
  return UnityEngine_Transform__get_parent(transform, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventInfoUIBase__GetGameObjectFromEventUIAssetData(
        EventInfoUIBase_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *assetData; // x0
  Il2CppObject *Object_object__48635516; // x21
  AssetData_o *assetData2; // x0

  if ( (byte_4A5D162 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D162 = 1;
  }
  assetData = this->fields.assetData;
  if ( !assetData )
    goto LABEL_7;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              assetData,
                              name,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
  {
LABEL_7:
    assetData2 = this->fields.assetData2;
    if ( !assetData2 )
      return 0LL;
    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                assetData2,
                                name,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
      return 0LL;
  }
  return (UnityEngine_GameObject_o *)Object_object__48635516;
}


bool __fastcall EventInfoUIBase__HasMatchedType(
        EventInfoUIBase_o *this,
        int32_t valType,
        int32_t setType,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_T__o *datas; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4A5D152 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_EventInfoUIBase_Data___);
    sub_1B885B0(&System_Func_EventInfoUIBase_Data__bool__TypeInfo);
    sub_1B885B0(&Method_EventInfoUIBase___c__DisplayClass17_0__HasMatchedType_b__0__);
    sub_1B885B0(&EventInfoUIBase___c__DisplayClass17_0_TypeInfo);
    byte_4A5D152 = 1;
  }
  v7 = sub_1B887FC(EventInfoUIBase___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_DWORD *)(v7 + 16) = setType;
  *(_DWORD *)(v7 + 20) = valType;
  datas = (System_Collections_Generic_List_T__o *)this->fields.datas;
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventInfoUIBase_Data__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_EventInfoUIBase___c__DisplayClass17_0__HasMatchedType_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           datas,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_EventInfoUIBase_Data___);
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

  if ( (byte_4A5D163 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D163 = 1;
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
                                       (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D165 & 1) == 0 )
  {
    sub_1B885B0(&SceneList_TypeInfo);
    byte_4A5D165 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v6);
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
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *AssetName; // x19
  AssetLoader_LoadEndDataHandler_o *v15; // x20

  if ( (byte_4A5D156 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_EventInfoUIBase___c__DisplayClass30_0__LoadEventUIAssetData_b__0__);
    sub_1B885B0(&EventInfoUIBase___c__DisplayClass30_0_TypeInfo);
    byte_4A5D156 = 1;
  }
  v7 = sub_1B887FC(EventInfoUIBase___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  AssetName = TitleInfoEventUIComponent__GetAssetName(eventUiEntity, 0LL);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v7,
    Method_EventInfoUIBase___c__DisplayClass30_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetName, v15, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0LL);
}


void __fastcall EventInfoUIBase__LoadEventUIAssetData_42141428(
        EventInfoUIBase_o *this,
        int32_t eventId,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x2
  System_String_o *EventUIAssetDataPath_42141112; // x19
  AssetLoader_LoadEndDataHandler_o *v18; // x20

  if ( (byte_4A5D157 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_EventInfoUIBase___c__DisplayClass31_0__LoadEventUIAssetData_b__0__);
    sub_1B885B0(&EventInfoUIBase___c__DisplayClass31_0_TypeInfo);
    byte_4A5D157 = 1;
  }
  v9 = sub_1B887FC(EventInfoUIBase___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)callback, v14, v15);
  EventUIAssetDataPath_42141112 = EventInfoUIBase__GetEventUIAssetDataPath_42141112(eventId, warId, v16);
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_EventInfoUIBase___c__DisplayClass31_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath_42141112, v18, 1, 0LL) )
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x2
  System_String_o *EventUIAssetDataEffectPath; // x19
  AssetLoader_LoadEndDataHandler_o *v18; // x20

  if ( (byte_4A5D158 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_EventInfoUIBase___c__DisplayClass32_0__LoadEventUIEffectPathAssetData_b__0__);
    sub_1B885B0(&EventInfoUIBase___c__DisplayClass32_0_TypeInfo);
    byte_4A5D158 = 1;
  }
  v9 = sub_1B887FC(EventInfoUIBase___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)callback, v14, v15);
  EventUIAssetDataEffectPath = EventInfoUIBase__GetEventUIAssetDataEffectPath(eventId, fileName, v16);
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_EventInfoUIBase___c__DisplayClass32_0__LoadEventUIEffectPathAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataEffectPath, v18, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v9 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIBase__LoadLocalAtlas(EventInfoUIBase_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  EventInfoUIBase_o *v6; // x20
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  __int64 size; // x2
  int v9; // w9
  int i; // w28
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v26; // x8
  int32_t v27; // [xsp+8h] [xbp-58h] BYREF
  int v28; // [xsp+Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_4A5D15E & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_24945/*"{0:D2}"*/);
    this = (EventInfoUIBase_o *)sub_1B885B0(&StringLiteral_5380/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_4A5D15E = 1;
  }
  if ( v6->fields.assetData )
  {
    atlasList = v6->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1B8880C(this, *(_QWORD *)&eventId);
    size = (unsigned int)atlasList->fields._size;
    v9 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v9;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v28 = i;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, size, v3, v4);
      v12 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_24945/*"{0:D2}"*/, v11, 0LL);
      v27 = eventId;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v13, v14, v15);
      v17 = System_String__Format_61721404((System_String_o *)StringLiteral_5380/*"DownloadEventUIAtlas{0}{1}"*/, v16, v12, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                                 v6,
                                                                 v17,
                                                                 v18);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (EventInfoUIBase_o *)UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (EventInfoUIBase_o *)v6->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v23 = *(_QWORD *)&this->fields.m_CachedPtr;
      v24 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v23 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v23 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = v23 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v26 + 32) = Component_object;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)Component_object, v21, v22);
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
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  __int64 size; // x2
  int v9; // w9
  int i; // w29
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x22
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v30; // x8
  int32_t v31; // [xsp+4h] [xbp-6Ch] BYREF
  int v32; // [xsp+8h] [xbp-68h] BYREF
  int v33; // [xsp+Ch] [xbp-64h] BYREF

  v6 = this;
  if ( (byte_4A5D15F & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_24945/*"{0:D2}"*/);
    this = (EventInfoUIBase_o *)sub_1B885B0(&StringLiteral_5381/*"DownloadEventUIAtlas{0}{1}{2}"*/);
    byte_4A5D15F = 1;
  }
  if ( v6->fields.assetData2 )
  {
    atlasList = v6->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1B8880C(this, *(_QWORD *)&warId);
    size = (unsigned int)atlasList->fields._size;
    v9 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v9;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v33 = i;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, size, v3, v4);
      v12 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_24945/*"{0:D2}"*/, v11, 0LL);
      v32 = 0;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v13, v14, v15);
      v31 = warId;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v17, v18, v19);
      v21 = System_String__Format_61721472((System_String_o *)StringLiteral_5381/*"DownloadEventUIAtlas{0}{1}{2}"*/, v16, v20, v12, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                                 v6,
                                                                 v21,
                                                                 v22);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (EventInfoUIBase_o *)UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (EventInfoUIBase_o *)v6->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v27 = *(_QWORD *)&this->fields.m_CachedPtr;
      v28 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v27 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v27 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = v27 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v30 + 32) = Component_object;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)Component_object, v25, v26);
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

  if ( (byte_4A5D159 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5D159 = 1;
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
void __fastcall EventInfoUIBase__ReleaseEventUIAssetData_42142132(
        EventInfoUIBase_o *this,
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath_42141112; // x19

  if ( (byte_4A5D15A & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5D15A = 1;
  }
  if ( this->fields.assetData2 )
  {
    EventUIAssetDataPath_42141112 = EventInfoUIBase__GetEventUIAssetDataPath_42141112(
                                      eventId,
                                      warId,
                                      *(const MethodInfo **)&warId);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(EventUIAssetDataPath_42141112, 0LL);
  }
}


void __fastcall EventInfoUIBase__ReleaseEventUIAssetData_42142280(
        EventInfoUIBase_o *this,
        EventUiEntity_o *eventUiEntity,
        const MethodInfo *method)
{
  System_String_o *AssetName; // x19

  if ( (byte_4A5D15B & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5D15B = 1;
  }
  if ( this->fields.assetData || this->fields.assetData2 )
  {
    AssetName = TitleInfoEventUIComponent__GetAssetName(eventUiEntity, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(AssetName, 0LL);
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
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_AssetData__o *assetDataList; // x8
  int32_t size; // w2
  int v13; // w9

  if ( (byte_4A5D15C & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_AssetData___);
    sub_1B885B0(&Method_System_Collections_Generic_List_AssetData__Clear__);
    byte_4A5D15C = 1;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.assetDataList,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_AssetData___) )
  {
    EventUIAssetDataEffectPath = EventInfoUIBase__GetEventUIAssetDataEffectPath(eventId, fileName, v7);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(EventUIAssetDataEffectPath, 0LL);
    assetDataList = this->fields.assetDataList;
    if ( !assetDataList )
      sub_1B8880C(v9, v10);
    size = assetDataList->fields._size;
    v13 = assetDataList->fields._version + 1;
    assetDataList->fields._size = 0;
    assetDataList->fields._version = v13;
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
  if ( (byte_4A5D15D & 1) == 0 )
  {
    this = (EventInfoUIBase_o *)sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_4A5D15D = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_1B8880C(this, method);
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
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5D160 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4A5D160 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v16 = v15;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1B8880C(IsNullOrEmpty, v8);
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1B8880C(v9, v10);
    v12 = UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, spriteName, 0LL);
  }
  while ( !v12 );
  if ( !sprite )
    sub_1B8880C(v12, v13);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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
  struct System_Collections_Generic_List_AssetData__o *assetDataList; // x0
  __int64 v9; // x1
  bool v10; // w21
  Il2CppObject *Object_object__48635516; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  int v14; // w19
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5D161 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_AssetData___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D161 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( System_String__IsNullOrEmpty(textureName, 0LL)
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.assetDataList,
          (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_AssetData___) )
  {
    return 1;
  }
  assetDataList = this->fields.assetDataList;
  if ( !assetDataList )
    sub_1B8880C(0LL, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)assetDataList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
  v17 = v16;
  do
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    if ( !v10 )
    {
      v14 = 7;
      goto LABEL_16;
    }
    if ( !v17.fields._current )
      sub_1B8880C(0LL, v9);
    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                (AssetData_o *)v17.fields._current,
                                textureName,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL);
  }
  while ( !v12 );
  if ( !texture )
    sub_1B8880C(v12, v13);
  ((void (__fastcall *)(UITexture_o *, Il2CppObject *, Il2CppMethodPointer))texture->klass->vtable._27_set_mainTexture.method)(
    texture,
    Object_object__48635516,
    texture->klass->vtable._28_get_shader.methodPtr);
  v14 = 6;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
  return v10 && v14 == 6;
}


void __fastcall EventInfoUIBase__SetValue(
        EventInfoUIBase_o *this,
        int32_t valType,
        Il2CppObject *val,
        int32_t setType,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_T__o *datas; // x21
  System_Func_object__bool__o *v13; // x22
  int v14; // w8
  const MethodInfo *v15; // x3
  void *image; // x2

  if ( (byte_4A5D151 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_EventInfoUIBase_Data___);
    sub_1B885B0(&System_Func_EventInfoUIBase_Data__bool__TypeInfo);
    sub_1B885B0(&Method_EventInfoUIBase___c__DisplayClass16_0__SetValue_b__0__);
    sub_1B885B0(&EventInfoUIBase___c__DisplayClass16_0_TypeInfo);
    byte_4A5D151 = 1;
  }
  v9 = sub_1B887FC(EventInfoUIBase___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  *(_DWORD *)(v9 + 16) = setType;
  *(_DWORD *)(v9 + 20) = valType;
  datas = (System_Collections_Generic_List_T__o *)this->fields.datas;
  v13 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventInfoUIBase_Data__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_EventInfoUIBase___c__DisplayClass16_0__SetValue_b__0__,
    0LL);
  if ( BasicHelper__Any_object_(
         datas,
         (System_Func_T__bool__o *)v13,
         (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_EventInfoUIBase_Data___) )
  {
    v14 = *(_DWORD *)(v9 + 20);
    switch ( v14 )
    {
      case 3:
        v15 = this->klass->vtable._15_SetTotalBoxGacha.method;
        image = this->klass[1]._1.image;
        goto LABEL_12;
      case 2:
        v15 = this->klass->vtable._14_SetConquestInfos.method;
        image = this->klass->vtable._15_SetTotalBoxGacha.methodPtr;
        goto LABEL_12;
      case 1:
        v15 = this->klass->vtable._13_SetEventId.method;
        image = this->klass->vtable._14_SetConquestInfos.methodPtr;
LABEL_12:
        ((void (__fastcall *)(EventInfoUIBase_o *, Il2CppObject *, void *))v15)(this, val, image);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  setType = data->fields.setType;
  return (!setType || setType == this->fields.setType) && data->fields.valType == this->fields.valType;
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
  int32_t v3; // w3
  struct EventInfoUIBase_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, data);
  _4__this->fields.assetData = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.assetData, (int32_t)data, (int32_t)method, v3);
  ActionExtensions__Call(this->fields.callback, 0LL);
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
    sub_1B8880C(0LL, data);
  _4__this->fields.assetData2 = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.assetData2, (int32_t)data, (int32_t)method, v3);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoUIBase___c__DisplayClass32_0___ctor(
        EventInfoUIBase___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoUIBase___c__DisplayClass32_0___LoadEventUIEffectPathAssetData_b__0(
        EventInfoUIBase___c__DisplayClass32_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  EventInfoUIBase___c__DisplayClass32_0_o *v5; // x19
  struct EventInfoUIBase_o *_4__this; // x8
  struct EventInfoUIBase_o *v7; // x8
  _QWORD *v8; // x9
  __int64 callback_low; // x10
  EventInfoUIBase_c **v10; // x8

  v5 = this;
  if ( (byte_4A5D167 & 1) == 0 )
  {
    this = (EventInfoUIBase___c__DisplayClass32_0_o *)sub_1B885B0(&Method_System_Collections_Generic_List_AssetData__Add__);
    byte_4A5D167 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this
    || (this = (EventInfoUIBase___c__DisplayClass32_0_o *)_4__this->fields.assetDataList) == 0LL
    || (v7 = this->fields.__4__this,
        v8 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++HIDWORD(this->fields.callback),
        !v7) )
  {
    sub_1B8880C(this, data);
  }
  callback_low = SLODWORD(this->fields.callback);
  if ( (unsigned int)callback_low >= LODWORD(v7->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)data,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &v7->klass + callback_low;
    LODWORD(this->fields.callback) = callback_low + 1;
    v10[4] = (EventInfoUIBase_c *)data;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)data, (int32_t)method, v3);
  }
  ActionExtensions__Call(v5->fields.callback, 0LL);
}