void SubmarineNewScannerDialog___ctor(SubmarineNewScannerDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2908E & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C94098(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    byte_4D2908E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.atlasList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


System_String_o *SubmarineNewScannerDialog__GetEventUIAssetDataPath(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D29087 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_6279/*"EventUI/Prefabs/{0}"*/);
    byte_4D29087 = 1;
  }
  v5 = eventId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v5);
  return System_String__Format((System_String_o *)StringLiteral_6279/*"EventUI/Prefabs/{0}"*/, v3, 0);
}


UnityEngine_GameObject_o *SubmarineNewScannerDialog__GetGameObjectFromEventUIAssetData(
        SubmarineNewScannerDialog_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4D2908D & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    byte_4D2908D = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.eventAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51893132(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
  return result;
}


void SubmarineNewScannerDialog__Init(SubmarineNewScannerDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *upperMessageLabel; // x0
  UILabel_o *closeLabel; // x20

  if ( (byte_4D29083 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D29083 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  upperMessageLabel = this->fields.upperMessageLabel;
  if ( !upperMessageLabel )
    goto LABEL_9;
  UILabel__set_text(upperMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  upperMessageLabel = this->fields.lowerMessageLabel;
  if ( !upperMessageLabel )
    goto LABEL_9;
  UILabel__set_text(upperMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  upperMessageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
LABEL_9:
    sub_1C942F0(upperMessageLabel, v3);
  UILabel__set_text(closeLabel, (System_String_o *)upperMessageLabel, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
}


void SubmarineNewScannerDialog__LoadEventUIAssetData(
        SubmarineNewScannerDialog_o *this,
        int32_t eventId,
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
  const MethodInfo *v22; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v24; // x20

  if ( (byte_4D29088 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_SubmarineNewScannerDialog___c__DisplayClass16_0__LoadEventUIAssetData_b__0__);
    sub_1C94098(&SubmarineNewScannerDialog___c__DisplayClass16_0_TypeInfo);
    byte_4D29088 = 1;
  }
  v7 = sub_1C942E4(SubmarineNewScannerDialog___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C942F0(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  EventUIAssetDataPath = SubmarineNewScannerDialog__GetEventUIAssetDataPath(eventId, v22);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v7,
    Method_SubmarineNewScannerDialog___c__DisplayClass16_0__LoadEventUIAssetData_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v24, 1, 0) )
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
}


// local variable allocation has failed, the output may be wrong!
void SubmarineNewScannerDialog__LoadLocalAtlas(
        SubmarineNewScannerDialog_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  SubmarineNewScannerDialog_o *v4; // x20
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
  if ( (byte_4D2908B & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_25317/*"{0:D2}"*/);
    this = (SubmarineNewScannerDialog_o *)sub_1C94098(&StringLiteral_5348/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_4D2908B = 1;
  }
  if ( v4->fields.eventAssetData )
  {
    atlasList = v4->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1C942F0(this, *(_QWORD *)&eventId);
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
      v10 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25317/*"{0:D2}"*/, v9, 0);
      v26 = eventId;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
      v12 = System_String__Format_64459052((System_String_o *)StringLiteral_5348/*"DownloadEventUIAtlas{0}{1}"*/, v11, v10, 0);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)SubmarineNewScannerDialog__GetGameObjectFromEventUIAssetData(
                                                                 v4,
                                                                 v12,
                                                                 v13);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (SubmarineNewScannerDialog_o *)UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
        break;
      this = (SubmarineNewScannerDialog_o *)v4->fields.atlasList;
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
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v25 + 32) = Component_object;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 32), (int32_t)Component_object, v16, v17, v18, v19, v20, v21);
      }
    }
  }
}


void SubmarineNewScannerDialog__OnClickCloseButton(SubmarineNewScannerDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4D29085 & 1) == 0 )
  {
    sub_1C94098(&Method_SubmarineNewScannerDialog_OnClickCloseButton__);
    byte_4D29085 = 1;
  }
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v3 = Method_SubmarineNewScannerDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_SubmarineNewScannerDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_SubmarineNewScannerDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  BaseDialog__Close((BaseDialog_o *)this, this->fields.closedAction, 0);
}


void SubmarineNewScannerDialog__OnDestroy(SubmarineNewScannerDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  SubmarineNewScannerDialog__ReleaseEventUIAssetData(this, this->fields.eventId, v2);
  SubmarineNewScannerDialog__ReleaseLocalAtlas(this, v4);
}


void SubmarineNewScannerDialog__Open(
        SubmarineNewScannerDialog_o *this,
        int32_t scanId,
        System_Action_o *closedAction,
        const MethodInfo *method)
{
  __int64 v7; // x21
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x1
  __int64 v17; // x23
  UILabel_o *upperMessageLabel; // x22
  UILabel_o *lowerMessageLabel; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w20
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x3
  System_Action_o *v29; // x20

  if ( (byte_4D29084 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1C94098(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__TryGetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SubmarineNewScannerDialog___c__DisplayClass10_0__Open_b__0__);
    sub_1C94098(&Method_SubmarineNewScannerDialog___c__DisplayClass10_0__Open_b__1__);
    sub_1C94098(&SubmarineNewScannerDialog___c__DisplayClass10_0_TypeInfo);
    sub_1C94098(&StringLiteral_5724/*"EVENT_SUBMARINE_NEW_SCAN_ADDED_MESSAGE_UPPER"*/);
    sub_1C94098(&StringLiteral_5723/*"EVENT_SUBMARINE_NEW_SCAN_ADDED_MESSAGE_LOWER"*/);
    byte_4D29084 = 1;
  }
  v7 = sub_1C942E4(SubmarineNewScannerDialog___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  SubmarineNewScannerDialog__Init(this, v16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_15;
  v17 = v7 + 24;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         (Il2CppObject **)(v7 + 24),
         scanId,
         (const MethodInfo_345B50C *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__TryGetEntity__) )
  {
    upperMessageLabel = this->fields.upperMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5724/*"EVENT_SUBMARINE_NEW_SCAN_ADDED_MESSAGE_UPPER"*/, 0);
    if ( *(_QWORD *)v17 )
    {
      Instance = (DataManager_o *)System_String__Format(
                                    (System_String_o *)Instance,
                                    *(Il2CppObject **)(*(_QWORD *)v17 + 24LL),
                                    0);
      if ( upperMessageLabel )
      {
        UILabel__set_text(upperMessageLabel, (System_String_o *)Instance, 0);
        lowerMessageLabel = this->fields.lowerMessageLabel;
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5723/*"EVENT_SUBMARINE_NEW_SCAN_ADDED_MESSAGE_LOWER"*/, 0);
        if ( lowerMessageLabel )
        {
          UILabel__set_text(lowerMessageLabel, (System_String_o *)Instance, 0);
          this->fields.closedAction = closedAction;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&this->fields.closedAction,
            (int32_t)closedAction,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          if ( *(_QWORD *)v17 )
          {
            v26 = *(_DWORD *)(*(_QWORD *)v17 + 20LL);
            v27 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
            System_Action___ctor(
              v27,
              (Il2CppObject *)v7,
              Method_SubmarineNewScannerDialog___c__DisplayClass10_0__Open_b__0__,
              0);
            SubmarineNewScannerDialog__LoadEventUIAssetData(this, v26, v27, v28);
            v29 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
            System_Action___ctor(
              v29,
              (Il2CppObject *)v7,
              Method_SubmarineNewScannerDialog___c__DisplayClass10_0__Open_b__1__,
              0);
            BaseDialog__Open((BaseDialog_o *)this, v29, 2, 0, 0);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1C942F0(Instance, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void SubmarineNewScannerDialog__ReleaseEventUIAssetData(
        SubmarineNewScannerDialog_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_4D29089 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    byte_4D29089 = 1;
  }
  if ( this->fields.eventAssetData )
  {
    EventUIAssetDataPath = SubmarineNewScannerDialog__GetEventUIAssetDataPath(eventId, *(const MethodInfo **)&eventId);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0);
  }
}


void SubmarineNewScannerDialog__ReleaseLocalAtlas(SubmarineNewScannerDialog_o *this, const MethodInfo *method)
{
  SubmarineNewScannerDialog_o *v2; // x19
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4D2908A & 1) == 0 )
  {
    this = (SubmarineNewScannerDialog_o *)sub_1C94098(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_4D2908A = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_1C942F0(this, method);
  size = atlasList->fields._size;
  v5 = atlasList->fields._version + 1;
  atlasList->fields._size = 0;
  atlasList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
}


bool SubmarineNewScannerDialog__SetSpriteByLocalAtlas(
        SubmarineNewScannerDialog_o *this,
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

  if ( (byte_4D2908C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4D2908C = 1;
  }
  memset(&v16, 0, sizeof(v16));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v16 = v15;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0, 0);
        return 0;
      }
LABEL_19:
      sub_1C942F0(IsNullOrEmpty, v8);
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1C942F0(v9, v10);
    v12 = UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, spriteName, 0);
  }
  while ( !v12 );
  if ( !sprite )
    sub_1C942F0(v12, v13);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0);
  UISprite__set_spriteName(sprite, spriteName, 0);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


UnityEngine_GameObject_o *SubmarineNewScannerDialog__get_closeBtnObject(
        SubmarineNewScannerDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4D29086 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D29086 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C942F0(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void SubmarineNewScannerDialog___c__DisplayClass10_0___ctor(
        SubmarineNewScannerDialog___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineNewScannerDialog___c__DisplayClass10_0___Open_b__0(
        SubmarineNewScannerDialog___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineNewScannerDialog___c__DisplayClass10_0_o *v3; // x19
  struct EventPanelScanEntity_o *scanEntity; // x8
  SubmarineNewScannerDialog_o *_4__this; // x20
  struct EventPanelScanEntity_o *v6; // x8
  UISprite_o *iconSprite; // x19
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3
  int32_t iconImageId; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_4D2908F & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    this = (SubmarineNewScannerDialog___c__DisplayClass10_0_o *)sub_1C94098(&StringLiteral_23428/*"scan_icon_{0}"*/);
    byte_4D2908F = 1;
  }
  scanEntity = v3->fields.scanEntity;
  if ( !scanEntity
    || (this = (SubmarineNewScannerDialog___c__DisplayClass10_0_o *)v3->fields.__4__this) == 0
    || (SubmarineNewScannerDialog__LoadLocalAtlas((SubmarineNewScannerDialog_o *)this, scanEntity->fields.eventId, v2),
        (_4__this = v3->fields.__4__this) == 0)
    || (v6 = v3->fields.scanEntity) == 0 )
  {
    sub_1C942F0(this, method);
  }
  iconSprite = _4__this->fields.iconSprite;
  iconImageId = v6->fields.iconImageId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconImageId);
  v9 = System_String__Format((System_String_o *)StringLiteral_23428/*"scan_icon_{0}"*/, v8, 0);
  SubmarineNewScannerDialog__SetSpriteByLocalAtlas(_4__this, iconSprite, v9, v10);
}


void SubmarineNewScannerDialog___c__DisplayClass10_0___Open_b__1(
        SubmarineNewScannerDialog___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  BaseDialog_o *_4__this; // x0

  _4__this = (BaseDialog_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(0, method);
  BaseDialog__SetMaskTouchCloseEnabled(_4__this, 1, 0);
}


void SubmarineNewScannerDialog___c__DisplayClass16_0___ctor(
        SubmarineNewScannerDialog___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineNewScannerDialog___c__DisplayClass16_0___LoadEventUIAssetData_b__0(
        SubmarineNewScannerDialog___c__DisplayClass16_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct SubmarineNewScannerDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(0, data);
  _4__this->fields.eventAssetData = data;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.eventAssetData,
    (int32_t)data,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0);
}