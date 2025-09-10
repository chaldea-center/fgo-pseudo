void SubmarineSelectScannerListViewItemDraw___ctor(
        SubmarineSelectScannerListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C23CA3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    byte_4C23CA3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.atlasList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SubmarineSelectScannerListViewItemDraw__Awake(
        SubmarineSelectScannerListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


System_String_o *SubmarineSelectScannerListViewItemDraw__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C23C9C & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_6265/*"EventUI/Prefabs/{0}"*/);
    byte_4C23C9C = 1;
  }
  v8 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_6265/*"EventUI/Prefabs/{0}"*/, v6, 0);
}


UnityEngine_GameObject_o *SubmarineSelectScannerListViewItemDraw__GetGameObjectFromEventUIAssetData(
        SubmarineSelectScannerListViewItemDraw_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4C23CA2 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    byte_4C23CA2 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.eventAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51051712(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  return result;
}


void SubmarineSelectScannerListViewItemDraw__LoadEventUIAssetData(
        SubmarineSelectScannerListViewItemDraw_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v16; // x20

  if ( (byte_4C23C9D & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0__LoadEventUIAssetData_b__0__);
    sub_1C2D490(&SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_TypeInfo);
    byte_4C23C9D = 1;
  }
  v7 = sub_1C2D6DC(SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  EventUIAssetDataPath = SubmarineSelectScannerListViewItemDraw__GetEventUIAssetDataPath(eventId, v14);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0__LoadEventUIAssetData_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v16, 1, 0) )
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
}


// local variable allocation has failed, the output may be wrong!
void SubmarineSelectScannerListViewItemDraw__LoadLocalAtlas(
        SubmarineSelectScannerListViewItemDraw_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  SubmarineSelectScannerListViewItemDraw_o *v6; // x20
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
  const MethodInfo *v22; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v26; // x8
  int32_t v27; // [xsp+8h] [xbp-58h] BYREF
  int v28; // [xsp+Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_4C23CA0 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_25042/*"{0:D2}"*/);
    this = (SubmarineSelectScannerListViewItemDraw_o *)sub_1C2D490(&StringLiteral_5338/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_4C23CA0 = 1;
  }
  if ( v6->fields.eventAssetData )
  {
    atlasList = v6->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1C2D6EC(this, *(_QWORD *)&eventId);
    size = (unsigned int)atlasList->fields._size;
    v9 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v9;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
    for ( i = 1; ; ++i )
    {
      v28 = i;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, size, v3, v4);
      v12 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25042/*"{0:D2}"*/, v11, 0);
      v27 = eventId;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v13, v14, v15);
      v17 = System_String__Format_63499156((System_String_o *)StringLiteral_5338/*"DownloadEventUIAtlas{0}{1}"*/, v16, v12, 0);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)SubmarineSelectScannerListViewItemDraw__GetGameObjectFromEventUIAssetData(
                                                                 v6,
                                                                 v17,
                                                                 v18);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (SubmarineSelectScannerListViewItemDraw_o *)UnityEngine_Object__op_Equality(
                                                           GameObjectFromEventUIAssetData,
                                                           0,
                                                           0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
        break;
      this = (SubmarineSelectScannerListViewItemDraw_o *)v6->fields.atlasList;
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
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v26 + 32) = Component_object;
        sub_1C2D434((CGThumbnailListItem_o *)(v26 + 32), (int32_t)Component_object, v21, v22);
      }
    }
  }
}


void SubmarineSelectScannerListViewItemDraw__OnDestroy(
        SubmarineSelectScannerListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  SubmarineSelectScannerListViewItemDraw__ReleaseEventUIAssetData(this, this->fields.eventId, v2);
  SubmarineSelectScannerListViewItemDraw__ReleaseLocalAtlas(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void SubmarineSelectScannerListViewItemDraw__ReleaseEventUIAssetData(
        SubmarineSelectScannerListViewItemDraw_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_4C23C9E & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C23C9E = 1;
  }
  if ( this->fields.eventAssetData )
  {
    EventUIAssetDataPath = SubmarineSelectScannerListViewItemDraw__GetEventUIAssetDataPath(
                             eventId,
                             *(const MethodInfo **)&eventId);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0);
  }
}


void SubmarineSelectScannerListViewItemDraw__ReleaseLocalAtlas(
        SubmarineSelectScannerListViewItemDraw_o *this,
        const MethodInfo *method)
{
  SubmarineSelectScannerListViewItemDraw_o *v2; // x19
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4C23C9F & 1) == 0 )
  {
    this = (SubmarineSelectScannerListViewItemDraw_o *)sub_1C2D490(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_4C23C9F = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_1C2D6EC(this, method);
  size = atlasList->fields._size;
  v5 = atlasList->fields._version + 1;
  atlasList->fields._size = 0;
  atlasList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
}


bool SubmarineSelectScannerListViewItemDraw__SetSpriteByLocalAtlas(
        SubmarineSelectScannerListViewItemDraw_o *this,
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

  if ( (byte_4C23CA1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4C23CA1 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v16 = v15;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0, 0);
        return 0;
      }
LABEL_19:
      sub_1C2D6EC(IsNullOrEmpty, v8);
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1C2D6EC(v9, v10);
    v12 = UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, spriteName, 0);
  }
  while ( !v12 );
  if ( !sprite )
    sub_1C2D6EC(v12, v13);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0);
  UISprite__set_spriteName(sprite, spriteName, 0);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void SubmarineSelectScannerListViewItemDraw__UpdateUi(
        SubmarineSelectScannerListViewItemDraw_o *this,
        SubmarineSelectScannerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x22
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w21
  System_Action_o *v14; // x23
  const MethodInfo *v15; // x3
  EventPanelScanMaster_o *v16; // x21
  Il2CppObject *Entity; // x0
  char v18; // w21
  UILabel_o *itemDescLabel; // x22
  System_String_o **v20; // x8

  if ( (byte_4C23C9B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0__UpdateUi_b__0__);
    sub_1C2D490(&SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_TypeInfo);
    sub_1C2D490(&StringLiteral_5718/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_PREFIX"*/);
    sub_1C2D490(&StringLiteral_5721/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/);
    byte_4C23C9B = 1;
  }
  v5 = sub_1C2D6DC(SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = item;
  v10 = v5 + 24;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)item, v11, v12);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_20;
  v13 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 120LL);
  this->fields.eventId = v13;
  v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0__UpdateUi_b__0__,
    0);
  SubmarineSelectScannerListViewItemDraw__LoadEventUIAssetData(this, v13, v14, v15);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !*(_QWORD *)v10 )
    goto LABEL_20;
  v16 = (EventPanelScanMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_20;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             *(_DWORD *)(*(_QWORD *)v10 + 124LL),
             (const MethodInfo_3387D98 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  Instance = (DataManager_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(v16, (EventPanelScanEntity_o *)Entity, 0);
  if ( !*(_QWORD *)v10 )
    goto LABEL_20;
  v18 = (char)Instance;
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)Instance, *(System_String_o **)(*(_QWORD *)v10 + 136LL), 0);
  itemDescLabel = this->fields.itemDescLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = (System_String_o **)((v18 & 1) != 0 ? &StringLiteral_5718/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_PREFIX"*/ : &StringLiteral_5721/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/);
  Instance = (DataManager_o *)LocalizationManager__Get(*v20, 0);
  if ( !itemDescLabel
    || (UILabel__set_text(itemDescLabel, (System_String_o *)Instance, 0),
        (Instance = (DataManager_o *)this->fields.darkMask) == 0)
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0),
        !*(_QWORD *)v10)
    || !Instance )
  {
LABEL_20:
    sub_1C2D6EC(Instance, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, *(_BYTE *)(*(_QWORD *)v10 + 152LL) == 0, 0);
}


void SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0___ctor(
        SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0___UpdateUi_b__0(
        SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *v3; // x19
  struct SubmarineSelectScannerListViewItem_o *item; // x8
  const MethodInfo *v5; // x3
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  SubmarineSelectScannerListViewItemDraw_o *_4__this; // x20
  struct SubmarineSelectScannerListViewItem_o *v10; // x8
  UISprite_o *icon; // x19
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x3
  int32_t iconImageId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_4C23CA4 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_23177/*"scan_icon_{0}"*/);
    this = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)sub_1C2D490(&StringLiteral_20413/*"img_list_bg02"*/);
    byte_4C23CA4 = 1;
  }
  item = v3->fields.item;
  if ( !item
    || (this = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)v3->fields.__4__this) == 0
    || (SubmarineSelectScannerListViewItemDraw__LoadLocalAtlas(
          (SubmarineSelectScannerListViewItemDraw_o *)this,
          item->fields._eventId_k__BackingField,
          v2),
        (this = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)v3->fields.__4__this) == 0)
    || (this = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)SubmarineSelectScannerListViewItemDraw__SetSpriteByLocalAtlas(
                                                                                   (SubmarineSelectScannerListViewItemDraw_o *)this,
                                                                                   (UISprite_o *)this[1].klass,
                                                                                   (System_String_o *)StringLiteral_20413/*"img_list_bg02"*/,
                                                                                   v5),
        (_4__this = v3->fields.__4__this) == 0)
    || (v10 = v3->fields.item) == 0 )
  {
    sub_1C2D6EC(this, method);
  }
  icon = _4__this->fields.icon;
  iconImageId_k__BackingField = v10->fields._iconImageId_k__BackingField;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconImageId_k__BackingField, v6, v7, v8);
  v13 = System_String__Format((System_String_o *)StringLiteral_23177/*"scan_icon_{0}"*/, v12, 0);
  SubmarineSelectScannerListViewItemDraw__SetSpriteByLocalAtlas(_4__this, icon, v13, v14);
}


void SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0___ctor(
        SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0___LoadEventUIAssetData_b__0(
        SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct SubmarineSelectScannerListViewItemDraw_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, data);
  _4__this->fields.eventAssetData = data;
  sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.eventAssetData, (int32_t)data, (int32_t)method, v3);
  ActionExtensions__Call(this->fields.callback, 0);
}