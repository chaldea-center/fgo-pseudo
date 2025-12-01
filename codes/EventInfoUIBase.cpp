void EventInfoUIBase___ctor(EventInfoUIBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  Il2CppObject *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Collections_Generic_List_object__o *v30; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7

  if ( (byte_4CC92C1 & 1) == 0 )
  {
    sub_1C713B0(&EventInfoUIBase_Data_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoUIBase_Data__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoUIBase_Data___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventInfoUIBase_Data__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_4CC92C1 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventInfoUIBase_Data__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventInfoUIBase_Data___ctor__);
  v4 = (Il2CppObject *)sub_1C715FC(EventInfoUIBase_Data_TypeInfo);
  System_Object___ctor(v4, 0);
  if ( !v3
    || (items = v3->fields._items,
        v14 = Method_System_Collections_Generic_List_EventInfoUIBase_Data__Add__,
        ++v3->fields._version,
        !items) )
  {
    sub_1C71608(v5, v6);
  }
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      v4,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v4;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 4), (int32_t)v4, v7, v8, v9, v10, v11, v12);
  }
  this->fields.datas = (struct System_Collections_Generic_List_EventInfoUIBase_Data__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.datas, (int32_t)v3, v17, v18, v19, v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.assetDataList = (struct System_Collections_Generic_List_AssetData__o *)v23;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.assetDataList, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v30;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.atlasList, (int32_t)v30, v31, v32, v33, v34, v35, v36);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoUIBase__AfterRedisplay(EventInfoUIBase_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_GameObject_o *EventInfoUIBase__FindEventUIObjcet(
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
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  __int64 v18; // x1
  __int64 naturalAligment; // x9
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

  if ( (byte_4CC92BF & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentInChildren_Transform___);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UnityEngine_Transform_TypeInfo);
    byte_4CC92BF = 1;
  }
  EventUIRoot = (UnityEngine_Component_o *)EventInfoUIBase__GetEventUIRoot(this, (const MethodInfo *)name);
  if ( !EventUIRoot
    || (EventUIRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__51649344(
                                                   EventUIRoot,
                                                   (const MethodInfo_3141B40 *)Method_UnityEngine_Component_GetComponentInChildren_Transform___)) == 0 )
  {
    sub_1C71608(EventUIRoot, v6);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)EventUIRoot, 0);
  if ( !Enumerator )
    sub_1C71608(0, v7);
  do
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(Enumerator, *(_QWORD *)(v12 + 8))
        & 1) == 0 )
    {
      gameObject = 0;
      goto LABEL_28;
    }
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_17:
      v16 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_38;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C719A4(v17);
LABEL_38:
      sub_1C71608(v17, v18);
    }
    v20 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v17, name, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v21 = UnityEngine_Object__op_Equality(v20, 0, 0);
  }
  while ( v21 );
  if ( !v20 )
    sub_1C71608(v21, v22);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0);
LABEL_28:
  v24 = sub_1C714EC(Enumerator, System_IDisposable_TypeInfo);
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
      v29 = sub_1C47738(v24, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  }
  return gameObject;
}


System_String_o *EventInfoUIBase__GetEventUIAssetDataEffectPath(
        int32_t eventId,
        System_String_o *fileName,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC92B0 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_5873/*"Effect/Event/{0}/{1}"*/);
    byte_4CC92B0 = 1;
  }
  v7 = eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Format_64073032((System_String_o *)StringLiteral_5873/*"Effect/Event/{0}/{1}"*/, v5, (Il2CppObject *)fileName, 0);
}


System_String_o *EventInfoUIBase__GetEventUIAssetDataPath(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CC92AE & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_6266/*"EventUI/Prefabs/{0}"*/);
    byte_4CC92AE = 1;
  }
  v5 = eventId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v5);
  return System_String__Format((System_String_o *)StringLiteral_6266/*"EventUI/Prefabs/{0}"*/, v3, 0);
}


System_String_o *EventInfoUIBase__GetEventUIAssetDataPath_45017468(
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+8h] [xbp-38h] BYREF
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC92AF & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_6267/*"EventUI/Prefabs/{0}/{1}"*/);
    byte_4CC92AF = 1;
  }
  v9 = eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v8 = warId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format_64073032((System_String_o *)StringLiteral_6267/*"EventUI/Prefabs/{0}/{1}"*/, v5, v6, 0);
}


UnityEngine_Transform_o *EventInfoUIBase__GetEventUIRoot(EventInfoUIBase_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0 )
    sub_1C71608(transform, v3);
  return UnityEngine_Transform__get_parent(transform, 0);
}


UnityEngine_GameObject_o *EventInfoUIBase__GetGameObjectFromEventUIAssetData(
        EventInfoUIBase_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *assetData; // x0
  Il2CppObject *Object_object__51560868; // x21
  AssetData_o *assetData2; // x0

  if ( (byte_4CC92BD & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_GameObject____78636968);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC92BD = 1;
  }
  assetData = this->fields.assetData;
  if ( !assetData )
    goto LABEL_7;
  Object_object__51560868 = AssetData__GetObject_object__51560868(
                              assetData,
                              name,
                              (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51560868, 0, 0) )
  {
LABEL_7:
    assetData2 = this->fields.assetData2;
    if ( !assetData2 )
      return 0;
    Object_object__51560868 = AssetData__GetObject_object__51560868(
                                assetData2,
                                name,
                                (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51560868, 0, 0) )
      return 0;
  }
  return (UnityEngine_GameObject_o *)Object_object__51560868;
}


bool EventInfoUIBase__HasMatchedType(
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

  if ( (byte_4CC92AD & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_EventInfoUIBase_Data___);
    sub_1C713B0(&System_Func_EventInfoUIBase_Data__bool__TypeInfo);
    sub_1C713B0(&Method_EventInfoUIBase___c__DisplayClass17_0__HasMatchedType_b__0__);
    sub_1C713B0(&EventInfoUIBase___c__DisplayClass17_0_TypeInfo);
    byte_4CC92AD = 1;
  }
  v7 = sub_1C715FC(EventInfoUIBase___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  *(_DWORD *)(v7 + 16) = setType;
  *(_DWORD *)(v7 + 20) = valType;
  datas = (System_Collections_Generic_List_T__o *)this->fields.datas;
  v11 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_EventInfoUIBase_Data__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_EventInfoUIBase___c__DisplayClass17_0__HasMatchedType_b__0__,
    0);
  return BasicHelper__Any_object_(
           datas,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_31341D4 *)Method_BasicHelper_Any_EventInfoUIBase_Data___);
}


void EventInfoUIBase__Initialization(EventInfoUIBase_o *this, EventUiEntity_o *entity, const MethodInfo *method)
{
  ;
}


UnityEngine_GameObject_o *EventInfoUIBase__InstantiateFromEventUIAssetData(
        EventInfoUIBase_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x19

  if ( (byte_4CC92BE & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC92BE = 1;
  }
  GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                             this,
                                                             name,
                                                             method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       (Il2CppObject *)GameObjectFromEventUIAssetData,
                                       (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


bool EventInfoUIBase__IsBusy(EventInfoUIBase_o *this, const MethodInfo *method)
{
  return 0;
}


bool EventInfoUIBase__IsDisplaying(EventInfoUIBase_o *this, const MethodInfo *method)
{
  return 1;
}


bool EventInfoUIBase__IsPlayAnim(EventInfoUIBase_o *this, int32_t type, const MethodInfo *method)
{
  return 0;
}


bool EventInfoUIBase__IsTargetScene(EventInfoUIBase_o *this, int32_t targetType, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC92C0 & 1) == 0 )
  {
    sub_1C713B0(&SceneList_TypeInfo);
    byte_4CC92C0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v6);
  m_Handle = UnityEngine_GameObject__get_scene(gameObject, 0).fields.m_Handle;
  p_m_Handle = &m_Handle;
  name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(targetType, 0);
  return System_String__op_Equality(name, SceneName, 0);
}


void EventInfoUIBase__LoadEventUIAssetData(
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
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_String_o *AssetName; // x19
  AssetLoader_LoadEndDataHandler_o *v23; // x20

  if ( (byte_4CC92B1 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&Method_EventInfoUIBase___c__DisplayClass31_0__LoadEventUIAssetData_b__0__);
    sub_1C713B0(&EventInfoUIBase___c__DisplayClass31_0_TypeInfo);
    byte_4CC92B1 = 1;
  }
  v7 = sub_1C715FC(EventInfoUIBase___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  AssetName = TitleInfoEventUIComponent__GetAssetName(eventUiEntity, 0);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v7,
    Method_EventInfoUIBase___c__DisplayClass31_0__LoadEventUIAssetData_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetName, v23, 1, 0) )
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
}


void EventInfoUIBase__LoadEventUIAssetData_44988872(
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
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x2
  System_String_o *EventUIAssetDataPath_45017468; // x19
  AssetLoader_LoadEndDataHandler_o *v26; // x20

  if ( (byte_4CC92B2 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&Method_EventInfoUIBase___c__DisplayClass32_0__LoadEventUIAssetData_b__0__);
    sub_1C713B0(&EventInfoUIBase___c__DisplayClass32_0_TypeInfo);
    byte_4CC92B2 = 1;
  }
  v9 = sub_1C715FC(EventInfoUIBase___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C71608(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)callback, v18, v19, v20, v21, v22, v23);
  EventUIAssetDataPath_45017468 = EventInfoUIBase__GetEventUIAssetDataPath_45017468(eventId, warId, v24);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v9,
    Method_EventInfoUIBase___c__DisplayClass32_0__LoadEventUIAssetData_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath_45017468, v26, 1, 0) )
    ActionExtensions__Call(*(System_Action_o **)(v9 + 24), 0);
}


void EventInfoUIBase__LoadEventUIEffectPathAssetData(
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
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x2
  System_String_o *EventUIAssetDataEffectPath; // x19
  AssetLoader_LoadEndDataHandler_o *v26; // x20

  if ( (byte_4CC92B3 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&Method_EventInfoUIBase___c__DisplayClass33_0__LoadEventUIEffectPathAssetData_b__0__);
    sub_1C713B0(&EventInfoUIBase___c__DisplayClass33_0_TypeInfo);
    byte_4CC92B3 = 1;
  }
  v9 = sub_1C715FC(EventInfoUIBase___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C71608(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)callback, v18, v19, v20, v21, v22, v23);
  EventUIAssetDataEffectPath = EventInfoUIBase__GetEventUIAssetDataEffectPath(eventId, fileName, v24);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v9,
    Method_EventInfoUIBase___c__DisplayClass33_0__LoadEventUIEffectPathAssetData_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataEffectPath, v26, 1, 0) )
    ActionExtensions__Call(*(System_Action_o **)(v9 + 24), 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoUIBase__LoadLocalAtlas(EventInfoUIBase_o *this, int32_t eventId, const MethodInfo *method)
{
  EventInfoUIBase_o *v4; // x20
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v7; // w9
  int i; // w28
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v25; // x8
  int32_t v26; // [xsp+8h] [xbp-58h] BYREF
  int v27; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4CC92B9 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_25195/*"{0:D2}"*/);
    this = (EventInfoUIBase_o *)sub_1C713B0(&StringLiteral_5338/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_4CC92B9 = 1;
  }
  if ( v4->fields.assetData )
  {
    atlasList = v4->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1C71608(this, *(_QWORD *)&eventId);
    size = atlasList->fields._size;
    v7 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
    for ( i = 1; ; ++i )
    {
      v27 = i;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
      v10 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25195/*"{0:D2}"*/, v9, 0);
      v26 = eventId;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
      v12 = System_String__Format_64073032((System_String_o *)StringLiteral_5338/*"DownloadEventUIAtlas{0}{1}"*/, v11, v10, 0);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                                 v4,
                                                                 v12,
                                                                 v13);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (EventInfoUIBase_o *)UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
        break;
      this = (EventInfoUIBase_o *)v4->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      m_CachedPtr = this->fields.m_CachedPtr;
      v23 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v25 + 32) = Component_object;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 32), (int32_t)Component_object, v16, v17, v18, v19, v20, v21);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoUIBase__LoadLocalAtlasWithWarId(EventInfoUIBase_o *this, int32_t warId, const MethodInfo *method)
{
  EventInfoUIBase_o *v4; // x20
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v7; // w9
  int i; // w29
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x21
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v26; // x8
  int32_t v27; // [xsp+4h] [xbp-6Ch] BYREF
  int v28; // [xsp+8h] [xbp-68h] BYREF
  int v29; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4CC92BA & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_25195/*"{0:D2}"*/);
    this = (EventInfoUIBase_o *)sub_1C713B0(&StringLiteral_5339/*"DownloadEventUIAtlas{0}{1}{2}"*/);
    byte_4CC92BA = 1;
  }
  if ( v4->fields.assetData2 )
  {
    atlasList = v4->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1C71608(this, *(_QWORD *)&warId);
    size = atlasList->fields._size;
    v7 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
    for ( i = 1; ; ++i )
    {
      v29 = i;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
      v10 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25195/*"{0:D2}"*/, v9, 0);
      v28 = 0;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
      v27 = warId;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
      v13 = System_String__Format_64073100((System_String_o *)StringLiteral_5339/*"DownloadEventUIAtlas{0}{1}{2}"*/, v11, v12, v10, 0);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                                                 v4,
                                                                 v13,
                                                                 v14);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (EventInfoUIBase_o *)UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
        break;
      this = (EventInfoUIBase_o *)v4->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      m_CachedPtr = this->fields.m_CachedPtr;
      v24 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v26 + 32) = Component_object;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v26 + 32), (int32_t)Component_object, v17, v18, v19, v20, v21, v22);
      }
    }
  }
}


void EventInfoUIBase__PlayAnim(
        EventInfoUIBase_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  ActionExtensions__Call(callback, 0);
}


void EventInfoUIBase__Redisplay(EventInfoUIBase_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoUIBase__ReleaseAsset(EventInfoUIBase_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void EventInfoUIBase__ReleaseEventUIAssetData(EventInfoUIBase_o *this, int32_t eventId, const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_4CC92B4 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    byte_4CC92B4 = 1;
  }
  if ( this->fields.assetData )
  {
    EventUIAssetDataPath = EventInfoUIBase__GetEventUIAssetDataPath(eventId, *(const MethodInfo **)&eventId);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoUIBase__ReleaseEventUIAssetData_44988396(
        EventInfoUIBase_o *this,
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath_45017468; // x19

  if ( (byte_4CC92B5 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    byte_4CC92B5 = 1;
  }
  if ( this->fields.assetData2 )
  {
    EventUIAssetDataPath_45017468 = EventInfoUIBase__GetEventUIAssetDataPath_45017468(
                                      eventId,
                                      warId,
                                      *(const MethodInfo **)&warId);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(EventUIAssetDataPath_45017468, 0);
  }
}


void EventInfoUIBase__ReleaseEventUIAssetData_45018144(
        EventInfoUIBase_o *this,
        EventUiEntity_o *eventUiEntity,
        const MethodInfo *method)
{
  System_String_o *AssetName; // x19

  if ( (byte_4CC92B6 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    byte_4CC92B6 = 1;
  }
  if ( this->fields.assetData || this->fields.assetData2 )
  {
    AssetName = TitleInfoEventUIComponent__GetAssetName(eventUiEntity, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(AssetName, 0);
  }
}


void EventInfoUIBase__ReleaseEventUIEffectPathAssetData(
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

  if ( (byte_4CC92B7 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_AssetData___);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssetData__Clear__);
    byte_4CC92B7 = 1;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.assetDataList,
         (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_AssetData___) )
  {
    EventUIAssetDataEffectPath = EventInfoUIBase__GetEventUIAssetDataEffectPath(eventId, fileName, v7);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(EventUIAssetDataEffectPath, 0);
    assetDataList = this->fields.assetDataList;
    if ( !assetDataList )
      sub_1C71608(v9, v10);
    size = assetDataList->fields._size;
    v13 = assetDataList->fields._version + 1;
    assetDataList->fields._size = 0;
    assetDataList->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)assetDataList->fields._items, 0, size, 0);
  }
}


void EventInfoUIBase__ReleaseLocalAtlas(EventInfoUIBase_o *this, const MethodInfo *method)
{
  EventInfoUIBase_o *v2; // x19
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4CC92B8 & 1) == 0 )
  {
    this = (EventInfoUIBase_o *)sub_1C713B0(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_4CC92B8 = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_1C71608(this, method);
  size = atlasList->fields._size;
  v5 = atlasList->fields._version + 1;
  atlasList->fields._size = 0;
  atlasList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
}


void EventInfoUIBase__SetConquestInfos(EventInfoUIBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  ;
}


void EventInfoUIBase__SetEventId(EventInfoUIBase_o *this, Il2CppObject *val, const MethodInfo *method)
{
  ;
}


bool EventInfoUIBase__SetSpriteByLocalAtlas(
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

  if ( (byte_4CC92BB & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4CC92BB = 1;
  }
  memset(&v16, 0, sizeof(v16));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( sprite )
    {
      UISprite__set_spriteName(sprite, 0, 0);
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
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v16 = v15;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0, 0);
        return 0;
      }
LABEL_19:
      sub_1C71608(IsNullOrEmpty, v8);
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1C71608(v9, v10);
    v12 = UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, spriteName, 0);
  }
  while ( !v12 );
  if ( !sprite )
    sub_1C71608(v12, v13);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0);
  UISprite__set_spriteName(sprite, spriteName, 0);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void EventInfoUIBase__SetTotalBoxGacha(EventInfoUIBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  ;
}


void EventInfoUIBase__SetUIDisp(EventInfoUIBase_o *this, bool isDisp, const MethodInfo *method)
{
  ;
}


bool EventInfoUIBase__SetUITexture(
        EventInfoUIBase_o *this,
        UITexture_o *texture,
        System_String_o *textureName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_List_AssetData__o *assetDataList; // x0
  __int64 v9; // x1
  bool v10; // w21
  Il2CppObject *Object_object__51560868; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  int v14; // w19
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC92BC & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_Texture2D____78637000);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_AssetData___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC92BC = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( System_String__IsNullOrEmpty(textureName, 0)
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.assetDataList,
          (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_AssetData___) )
  {
    return 1;
  }
  assetDataList = this->fields.assetDataList;
  if ( !assetDataList )
    sub_1C71608(0, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)assetDataList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
  v17 = v16;
  do
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    if ( !v10 )
    {
      v14 = 7;
      goto LABEL_16;
    }
    if ( !v17.fields._current )
      sub_1C71608(0, v9);
    Object_object__51560868 = AssetData__GetObject_object__51560868(
                                (AssetData_o *)v17.fields._current,
                                textureName,
                                (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_Texture2D____78637000);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51560868, 0, 0);
  }
  while ( !v12 );
  if ( !texture )
    sub_1C71608(v12, v13);
  ((void (__fastcall *)(UITexture_o *, Il2CppObject *, const MethodInfo *))texture->klass->vtable._27_set_mainTexture.methodPtr)(
    texture,
    Object_object__51560868,
    texture->klass->vtable._27_set_mainTexture.method);
  v14 = 6;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
  return v10 && v14 == 6;
}


void EventInfoUIBase__SetValue(
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
  Il2CppMethodPointer methodPtr; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4CC92AC & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_EventInfoUIBase_Data___);
    sub_1C713B0(&System_Func_EventInfoUIBase_Data__bool__TypeInfo);
    sub_1C713B0(&Method_EventInfoUIBase___c__DisplayClass16_0__SetValue_b__0__);
    sub_1C713B0(&EventInfoUIBase___c__DisplayClass16_0_TypeInfo);
    byte_4CC92AC = 1;
  }
  v9 = sub_1C715FC(EventInfoUIBase___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C71608(v10, v11);
  *(_DWORD *)(v9 + 16) = setType;
  *(_DWORD *)(v9 + 20) = valType;
  datas = (System_Collections_Generic_List_T__o *)this->fields.datas;
  v13 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_EventInfoUIBase_Data__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_EventInfoUIBase___c__DisplayClass16_0__SetValue_b__0__,
    0);
  if ( BasicHelper__Any_object_(
         datas,
         (System_Func_T__bool__o *)v13,
         (const MethodInfo_31341D4 *)Method_BasicHelper_Any_EventInfoUIBase_Data___) )
  {
    v14 = *(_DWORD *)(v9 + 20);
    switch ( v14 )
    {
      case 3:
        methodPtr = this->klass->vtable._16_SetTotalBoxGacha.methodPtr;
        v16 = this->klass->vtable._16_SetTotalBoxGacha.method;
        goto LABEL_12;
      case 2:
        methodPtr = this->klass->vtable._15_SetConquestInfos.methodPtr;
        v16 = this->klass->vtable._15_SetConquestInfos.method;
        goto LABEL_12;
      case 1:
        methodPtr = this->klass->vtable._14_SetEventId.methodPtr;
        v16 = this->klass->vtable._14_SetEventId.method;
LABEL_12:
        ((void (__fastcall *)(EventInfoUIBase_o *, Il2CppObject *, const MethodInfo *))methodPtr)(this, val, v16);
        break;
    }
  }
}


void EventInfoUIBase__Setup(EventInfoUIBase_o *this, EventUiValueEntity_array *entitys, const MethodInfo *method)
{
  ;
}


void EventInfoUIBase__SwitchSpotState(EventInfoUIBase_o *this, bool isOpen, const MethodInfo *method)
{
  ;
}


System_Collections_Generic_List_UIAtlas__o *EventInfoUIBase__get_AtlasList(
        EventInfoUIBase_o *this,
        const MethodInfo *method)
{
  return this->fields.atlasList;
}


void EventInfoUIBase_Data___ctor(EventInfoUIBase_Data_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoUIBase___c__DisplayClass16_0___ctor(
        EventInfoUIBase___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoUIBase___c__DisplayClass16_0___SetValue_b__0(
        EventInfoUIBase___c__DisplayClass16_0_o *this,
        EventInfoUIBase_Data_o *data,
        const MethodInfo *method)
{
  int32_t setType; // w8

  if ( !data )
    sub_1C71608(this, 0);
  setType = data->fields.setType;
  return (!setType || setType == this->fields.setType) && data->fields.valType == this->fields.valType;
}


void EventInfoUIBase___c__DisplayClass17_0___ctor(
        EventInfoUIBase___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoUIBase___c__DisplayClass17_0___HasMatchedType_b__0(
        EventInfoUIBase___c__DisplayClass17_0_o *this,
        EventInfoUIBase_Data_o *data,
        const MethodInfo *method)
{
  int32_t setType; // w8

  if ( !data )
    sub_1C71608(this, 0);
  setType = data->fields.setType;
  return (!setType || setType == this->fields.setType) && data->fields.valType == this->fields.valType;
}


void EventInfoUIBase___c__DisplayClass31_0___ctor(
        EventInfoUIBase___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoUIBase___c__DisplayClass31_0___LoadEventUIAssetData_b__0(
        EventInfoUIBase___c__DisplayClass31_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EventInfoUIBase_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, data);
  _4__this->fields.assetData = data;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.assetData,
    (int32_t)data,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventInfoUIBase___c__DisplayClass32_0___ctor(
        EventInfoUIBase___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoUIBase___c__DisplayClass32_0___LoadEventUIAssetData_b__0(
        EventInfoUIBase___c__DisplayClass32_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EventInfoUIBase_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, data);
  _4__this->fields.assetData2 = data;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.assetData2,
    (int32_t)data,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventInfoUIBase___c__DisplayClass33_0___ctor(
        EventInfoUIBase___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoUIBase___c__DisplayClass33_0___LoadEventUIEffectPathAssetData_b__0(
        EventInfoUIBase___c__DisplayClass33_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  EventInfoUIBase___c__DisplayClass33_0_o *v9; // x19
  struct EventInfoUIBase_o *_4__this; // x8
  struct EventInfoUIBase_o *v11; // x8
  _QWORD *v12; // x9
  __int64 callback_low; // x10
  EventInfoUIBase_c **v14; // x8

  v9 = this;
  if ( (byte_4CC92C2 & 1) == 0 )
  {
    this = (EventInfoUIBase___c__DisplayClass33_0_o *)sub_1C713B0(&Method_System_Collections_Generic_List_AssetData__Add__);
    byte_4CC92C2 = 1;
  }
  _4__this = v9->fields.__4__this;
  if ( !_4__this
    || (this = (EventInfoUIBase___c__DisplayClass33_0_o *)_4__this->fields.assetDataList) == 0
    || (v11 = this->fields.__4__this,
        v12 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++HIDWORD(this->fields.callback),
        !v11) )
  {
    sub_1C71608(this, data);
  }
  callback_low = SLODWORD(this->fields.callback);
  if ( (unsigned int)callback_low >= LODWORD(v11->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)data,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &v11->klass + callback_low;
    LODWORD(this->fields.callback) = callback_low + 1;
    v14[4] = (EventInfoUIBase_c *)data;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v14 + 4), (int32_t)data, (int32_t)method, v3, v4, v5, v6, v7);
  }
  ActionExtensions__Call(v9->fields.callback, 0);
}