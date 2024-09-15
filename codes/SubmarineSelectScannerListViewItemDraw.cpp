void __fastcall SubmarineSelectScannerListViewItemDraw___ctor(
        SubmarineSelectScannerListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A2AC00 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_1B761C0(&System_Collections_Generic_List_UIAtlas__TypeInfo, v3);
    byte_4A2AC00 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v4;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.atlasList, (int32_t)v4, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SubmarineSelectScannerListViewItemDraw__Awake(
        SubmarineSelectScannerListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


System_String_o *__fastcall SubmarineSelectScannerListViewItemDraw__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A2ABF9 & 1) == 0 )
  {
    sub_1B761C0(&int_TypeInfo, method);
    sub_1B761C0(&StringLiteral_6233/*"EventUI/Prefabs/{0}"*/, v6);
    byte_4A2ABF9 = 1;
  }
  v9 = eventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_6233/*"EventUI/Prefabs/{0}"*/, v7, 0LL);
}


UnityEngine_GameObject_o *__fastcall SubmarineSelectScannerListViewItemDraw__GetGameObjectFromEventUIAssetData(
        SubmarineSelectScannerListViewItemDraw_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4A2ABFF & 1) == 0 )
  {
    sub_1B761C0(&Method_AssetData_GetObject_GameObject____75903216, name);
    byte_4A2ABFF = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.eventAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__48515452(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineSelectScannerListViewItemDraw__LoadEventUIAssetData(
        SubmarineSelectScannerListViewItemDraw_o *this,
        int32_t eventId,
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
  const MethodInfo *v17; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v19; // x20

  if ( (byte_4A2ABFA & 1) == 0 )
  {
    sub_1B761C0(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B761C0(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B761C0(&Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0__LoadEventUIAssetData_b__0__, v8);
    sub_1B761C0(&SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_TypeInfo, v9);
    byte_4A2ABFA = 1;
  }
  v10 = sub_1B7640C(SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B7641C(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = callback;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)callback, v15, v16);
  EventUIAssetDataPath = SubmarineSelectScannerListViewItemDraw__GetEventUIAssetDataPath(eventId, v17);
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1B7640C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)v10,
    Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v19, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v10 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineSelectScannerListViewItemDraw__LoadLocalAtlas(
        SubmarineSelectScannerListViewItemDraw_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  SubmarineSelectScannerListViewItemDraw_o *v6; // x20
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
  if ( (byte_4A2ABFD & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_1B761C0(&int_TypeInfo, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_UIAtlas__Add__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v9);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v10);
    sub_1B761C0(&StringLiteral_24932/*"{0:D2}"*/, v11);
    this = (SubmarineSelectScannerListViewItemDraw_o *)sub_1B761C0(&StringLiteral_5379/*"DownloadEventUIAtlas{0}{1}"*/, v12);
    byte_4A2ABFD = 1;
  }
  if ( v6->fields.eventAssetData )
  {
    atlasList = v6->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1B7641C(this, *(_QWORD *)&eventId);
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
      v18 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_24932/*"{0:D2}"*/, v17, 0LL);
      v33 = eventId;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v19, v20, v21);
      v23 = System_String__Format_61549432((System_String_o *)StringLiteral_5379/*"DownloadEventUIAtlas{0}{1}"*/, v22, v18, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)SubmarineSelectScannerListViewItemDraw__GetGameObjectFromEventUIAssetData(
                                                                 v6,
                                                                 v23,
                                                                 v24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (SubmarineSelectScannerListViewItemDraw_o *)UnityEngine_Object__op_Equality(
                                                           GameObjectFromEventUIAssetData,
                                                           0LL,
                                                           0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (SubmarineSelectScannerListViewItemDraw_o *)v6->fields.atlasList;
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
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = v29 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v32 + 32) = Component_object;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v32 + 32), (int32_t)Component_object, v27, v28);
      }
    }
  }
}


void __fastcall SubmarineSelectScannerListViewItemDraw__OnDestroy(
        SubmarineSelectScannerListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  SubmarineSelectScannerListViewItemDraw__ReleaseEventUIAssetData(this, this->fields.eventId, v2);
  SubmarineSelectScannerListViewItemDraw__ReleaseLocalAtlas(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineSelectScannerListViewItemDraw__ReleaseEventUIAssetData(
        SubmarineSelectScannerListViewItemDraw_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_4A2ABFB & 1) == 0 )
  {
    sub_1B761C0(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4A2ABFB = 1;
  }
  if ( this->fields.eventAssetData )
  {
    EventUIAssetDataPath = SubmarineSelectScannerListViewItemDraw__GetEventUIAssetDataPath(
                             eventId,
                             *(const MethodInfo **)&eventId);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0LL);
  }
}


void __fastcall SubmarineSelectScannerListViewItemDraw__ReleaseLocalAtlas(
        SubmarineSelectScannerListViewItemDraw_o *this,
        const MethodInfo *method)
{
  SubmarineSelectScannerListViewItemDraw_o *v2; // x19
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4A2ABFC & 1) == 0 )
  {
    this = (SubmarineSelectScannerListViewItemDraw_o *)sub_1B761C0(
                                                         &Method_System_Collections_Generic_List_UIAtlas__Clear__,
                                                         method);
    byte_4A2ABFC = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_1B7641C(this, method);
  size = atlasList->fields._size;
  v5 = atlasList->fields._version + 1;
  atlasList->fields._size = 0;
  atlasList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
}


bool __fastcall SubmarineSelectScannerListViewItemDraw__SetSpriteByLocalAtlas(
        SubmarineSelectScannerListViewItemDraw_o *this,
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

  if ( (byte_4A2ABFE & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_4A2ABFE = 1;
  }
  memset(&v20, 0, sizeof(v20));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2E6FDDC *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v20 = v19;
  do
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v13 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1B7641C(IsNullOrEmpty, v12);
    }
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1B7641C(v13, v14);
    v16 = UIAtlas__GetSprite((UIAtlas_o *)v20.fields._current, spriteName, 0LL);
  }
  while ( !v16 );
  if ( !sprite )
    sub_1B7641C(v16, v17);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void __fastcall SubmarineSelectScannerListViewItemDraw__UpdateUi(
        SubmarineSelectScannerListViewItemDraw_o *this,
        SubmarineSelectScannerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x22
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w21
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x3
  EventPanelScanMaster_o *v24; // x21
  Il2CppObject *Entity; // x0
  char v26; // w21
  UILabel_o *itemDescLabel; // x22
  System_String_o **v28; // x8

  if ( (byte_4A2ABF8 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, item);
    sub_1B761C0(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v5);
    sub_1B761C0(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v6);
    sub_1B761C0(&LocalizationManager_TypeInfo, v7);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B761C0(&Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0__UpdateUi_b__0__, v9);
    sub_1B761C0(&SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_TypeInfo, v10);
    sub_1B761C0(&StringLiteral_5721/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_PREFIX"*/, v11);
    sub_1B761C0(&StringLiteral_5724/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, v12);
    byte_4A2ABF8 = 1;
  }
  v13 = sub_1B7640C(SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_20;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = item;
  v18 = v13 + 24;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)item, v19, v20);
  if ( !*(_QWORD *)(v13 + 24) )
    goto LABEL_20;
  v21 = *(_DWORD *)(*(_QWORD *)(v13 + 24) + 112LL);
  this->fields.eventId = v21;
  v22 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v13,
    Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0__UpdateUi_b__0__,
    0LL);
  SubmarineSelectScannerListViewItemDraw__LoadEventUIAssetData(this, v21, v22, v23);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !*(_QWORD *)v18 )
    goto LABEL_20;
  v24 = (EventPanelScanMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_20;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             *(_DWORD *)(*(_QWORD *)v18 + 116LL),
             (const MethodInfo_30FF780 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  Instance = (DataManager_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                v24,
                                (EventPanelScanEntity_o *)Entity,
                                0LL);
  if ( !*(_QWORD *)v18 )
    goto LABEL_20;
  v26 = (char)Instance;
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)Instance, *(System_String_o **)(*(_QWORD *)v18 + 128LL), 0LL);
  itemDescLabel = this->fields.itemDescLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v28 = (System_String_o **)((v26 & 1) != 0 ? &StringLiteral_5721/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_PREFIX"*/ : &StringLiteral_5724/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/);
  Instance = (DataManager_o *)LocalizationManager__Get(*v28, 0LL);
  if ( !itemDescLabel
    || (UILabel__set_text(itemDescLabel, (System_String_o *)Instance, 0LL),
        (Instance = (DataManager_o *)this->fields.darkMask) == 0LL)
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
        !*(_QWORD *)v18)
    || !Instance )
  {
LABEL_20:
    sub_1B7641C(Instance, v15);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, *(_BYTE *)(*(_QWORD *)v18 + 144LL) == 0, 0LL);
}


void __fastcall SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0___ctor(
        SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0___UpdateUi_b__0(
        SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct SubmarineSelectScannerListViewItem_o *item; // x8
  const MethodInfo *v7; // x3
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  SubmarineSelectScannerListViewItemDraw_o *_4__this; // x20
  struct SubmarineSelectScannerListViewItem_o *v12; // x8
  UISprite_o *icon; // x19
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x3
  int32_t iconImageId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_4A2AC01 & 1) == 0 )
  {
    sub_1B761C0(&int_TypeInfo, method);
    sub_1B761C0(&StringLiteral_23006/*"scan_icon_{0}"*/, v4);
    this = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)sub_1B761C0(&StringLiteral_20326/*"img_list_bg02"*/, v5);
    byte_4A2AC01 = 1;
  }
  item = v3->fields.item;
  if ( !item
    || (this = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)v3->fields.__4__this) == 0LL
    || (SubmarineSelectScannerListViewItemDraw__LoadLocalAtlas(
          (SubmarineSelectScannerListViewItemDraw_o *)this,
          item->fields._eventId_k__BackingField,
          v2),
        (this = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)v3->fields.__4__this) == 0LL)
    || (this = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)SubmarineSelectScannerListViewItemDraw__SetSpriteByLocalAtlas(
                                                                                   (SubmarineSelectScannerListViewItemDraw_o *)this,
                                                                                   (UISprite_o *)this[1].klass,
                                                                                   (System_String_o *)StringLiteral_20326/*"img_list_bg02"*/,
                                                                                   v7),
        (_4__this = v3->fields.__4__this) == 0LL)
    || (v12 = v3->fields.item) == 0LL )
  {
    sub_1B7641C(this, method);
  }
  icon = _4__this->fields.icon;
  iconImageId_k__BackingField = v12->fields._iconImageId_k__BackingField;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconImageId_k__BackingField, v8, v9, v10);
  v15 = System_String__Format((System_String_o *)StringLiteral_23006/*"scan_icon_{0}"*/, v14, 0LL);
  SubmarineSelectScannerListViewItemDraw__SetSpriteByLocalAtlas(_4__this, icon, v15, v16);
}


void __fastcall SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0___ctor(
        SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0___LoadEventUIAssetData_b__0(
        SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct SubmarineSelectScannerListViewItemDraw_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B7641C(0LL, data);
  _4__this->fields.eventAssetData = data;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&_4__this->fields.eventAssetData, (int32_t)data, (int32_t)method, v3);
  ActionExtensions__Call(this->fields.callback, 0LL);
}