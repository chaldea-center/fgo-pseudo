void __fastcall SubmarineNewScannerDialog___ctor(SubmarineNewScannerDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F7CA4 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_UIAtlas__TypeInfo, v7);
    byte_40F7CA4 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.atlasList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


System_String_o *__fastcall SubmarineNewScannerDialog__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F7C9D & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6189, v3);
    byte_40F7C9D = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_6189, v4, 0LL);
}


UnityEngine_GameObject_o *__fastcall SubmarineNewScannerDialog__GetGameObjectFromEventUIAssetData(
        SubmarineNewScannerDialog_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_40F7CA3 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, name);
    byte_40F7CA3 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.eventAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  return result;
}


void __fastcall SubmarineNewScannerDialog__Init(SubmarineNewScannerDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *upperMessageLabel; // x0
  UILabel_o *lowerMessageLabel; // x0
  UILabel_o *closeLabel; // x20
  System_String_o *v8; // x0

  if ( (byte_40F7C99 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3252, v3);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40F7C99 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  upperMessageLabel = this->fields.upperMessageLabel;
  if ( !upperMessageLabel )
    goto LABEL_10;
  UILabel__set_text(upperMessageLabel, (System_String_o *)StringLiteral_1, 0LL);
  lowerMessageLabel = this->fields.lowerMessageLabel;
  if ( !lowerMessageLabel )
    goto LABEL_10;
  UILabel__set_text(lowerMessageLabel, (System_String_o *)StringLiteral_1, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL);
  if ( !closeLabel )
LABEL_10:
    sub_B170D4();
  UILabel__set_text(closeLabel, v8, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineNewScannerDialog__LoadEventUIAssetData(
        SubmarineNewScannerDialog_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
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
  const MethodInfo *v24; // x1
  System_String_o *EventUIAssetDataPath; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  AssetLoader_LoadEndDataHandler_o *v30; // x21

  if ( (byte_40F7C9E & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B16FFC(&Method_SubmarineNewScannerDialog___c__DisplayClass16_0__LoadEventUIAssetData_b__0__, v9);
    sub_B16FFC(&SubmarineNewScannerDialog___c__DisplayClass16_0_TypeInfo, v10);
    byte_40F7C9E = 1;
  }
  v11 = sub_B170CC(SubmarineNewScannerDialog___c__DisplayClass16_0_TypeInfo, *(_QWORD *)&eventId, callback, method, v4);
  SubmarineNewScannerDialog___c__DisplayClass16_0___ctor((SubmarineNewScannerDialog___c__DisplayClass16_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
  EventUIAssetDataPath = SubmarineNewScannerDialog__GetEventUIAssetDataPath(eventId, v24);
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v26, v27, v28, v29);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)v11,
    Method_SubmarineNewScannerDialog___c__DisplayClass16_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v30, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineNewScannerDialog__LoadLocalAtlas(
        SubmarineNewScannerDialog_o *this,
        int32_t eventId,
        const MethodInfo *method)
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
  struct System_Collections_Generic_List_UIAtlas__o *v14; // x0
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v21; // [xsp+8h] [xbp-58h] BYREF
  int v22; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F7CA1 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_23407, v9);
    sub_B16FFC(&StringLiteral_5361, v10);
    byte_40F7CA1 = 1;
  }
  if ( this->fields.eventAssetData )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v22 = i;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v16 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23407, v15, 0LL);
      v21 = eventId;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v18 = System_String__Format_43739268((System_String_o *)StringLiteral_5361, v17, v16, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)SubmarineNewScannerDialog__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v18,
                                                                 v19);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL) )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_18;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        break;
      v14 = this->fields.atlasList;
      if ( !v14 )
        goto LABEL_18;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v14,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
    }
  }
}


void __fastcall SubmarineNewScannerDialog__OnClickCloseButton(
        SubmarineNewScannerDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F7C9B & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F7C9B = 1;
  }
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, this->fields.closedAction, 0LL);
}


void __fastcall SubmarineNewScannerDialog__OnDestroy(SubmarineNewScannerDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  SubmarineNewScannerDialog__ReleaseEventUIAssetData(this, this->fields.eventId, v2);
  SubmarineNewScannerDialog__ReleaseLocalAtlas(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineNewScannerDialog__Open(
        SubmarineNewScannerDialog_o *this,
        int32_t scanId,
        System_Action_o *closedAction,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v27; // x23
  UILabel_o *upperMessageLabel; // x22
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  UILabel_o *lowerMessageLabel; // x22
  System_String_o *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int32_t v43; // w20
  System_Action_o *v44; // x22
  const MethodInfo *v45; // x3
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Action_o *v50; // x20

  if ( (byte_40F7C9A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&scanId);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SubmarineNewScannerDialog___c__DisplayClass10_0__Open_b__0__, v12);
    sub_B16FFC(&Method_SubmarineNewScannerDialog___c__DisplayClass10_0__Open_b__1__, v13);
    sub_B16FFC(&SubmarineNewScannerDialog___c__DisplayClass10_0_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_5704, v15);
    sub_B16FFC(&StringLiteral_5703, v16);
    byte_40F7C9A = 1;
  }
  v17 = sub_B170CC(
          SubmarineNewScannerDialog___c__DisplayClass10_0_TypeInfo,
          *(_QWORD *)&scanId,
          closedAction,
          method,
          v4);
  SubmarineNewScannerDialog___c__DisplayClass10_0___ctor((SubmarineNewScannerDialog___c__DisplayClass10_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_16;
  *(_QWORD *)(v17 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  SubmarineNewScannerDialog__Init(this, v24);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_16;
  v27 = v17 + 24;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         (WarEntity_o **)(v17 + 24),
         scanId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__TryGetEntity__) )
  {
    upperMessageLabel = this->fields.upperMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5704, 0LL);
    if ( *(_QWORD *)v27 )
    {
      v30 = System_String__Format(v29, *(Il2CppObject **)(*(_QWORD *)v27 + 24LL), 0LL);
      if ( upperMessageLabel )
      {
        UILabel__set_text(upperMessageLabel, v30, 0LL);
        lowerMessageLabel = this->fields.lowerMessageLabel;
        v32 = LocalizationManager__Get((System_String_o *)StringLiteral_5703, 0LL);
        if ( lowerMessageLabel )
        {
          UILabel__set_text(lowerMessageLabel, v32, 0LL);
          this->fields.closedAction = closedAction;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.closedAction,
            (System_Int32_array **)closedAction,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
          if ( *(_QWORD *)v27 )
          {
            v43 = *(_DWORD *)(*(_QWORD *)v27 + 20LL);
            v44 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42);
            System_Action___ctor(
              v44,
              (Il2CppObject *)v17,
              Method_SubmarineNewScannerDialog___c__DisplayClass10_0__Open_b__0__,
              0LL);
            SubmarineNewScannerDialog__LoadEventUIAssetData(this, v43, v44, v45);
            v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v46, v47, v48, v49);
            System_Action___ctor(
              v50,
              (Il2CppObject *)v17,
              Method_SubmarineNewScannerDialog___c__DisplayClass10_0__Open_b__1__,
              0LL);
            BaseDialog__Open((BaseDialog_o *)this, v50, 2, 0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineNewScannerDialog__ReleaseEventUIAssetData(
        SubmarineNewScannerDialog_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_40F7C9F & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    byte_40F7C9F = 1;
  }
  if ( this->fields.eventAssetData )
  {
    EventUIAssetDataPath = SubmarineNewScannerDialog__GetEventUIAssetDataPath(eventId, *(const MethodInfo **)&eventId);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0LL);
  }
}


void __fastcall SubmarineNewScannerDialog__ReleaseLocalAtlas(
        SubmarineNewScannerDialog_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0

  if ( (byte_40F7CA0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Clear__, method);
    byte_40F7CA0 = 1;
  }
  atlasList = this->fields.atlasList;
  if ( !atlasList )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
}


bool __fastcall SubmarineNewScannerDialog__SetSpriteByLocalAtlas(
        SubmarineNewScannerDialog_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
  Il2CppObject *current; // x21
  bool v13; // w20
  int v14; // w21
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F7CA2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_40F7CA2 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( System_String__IsNullOrEmpty(spriteName, 0LL)
    || !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_UIAtlas___) )
  {
    if ( !sprite )
      goto LABEL_20;
    UISprite__set_spriteName(sprite, 0LL, 0LL);
    return 1;
  }
  else
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)atlasList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v17 = v16;
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v17,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__) )
      {
        v13 = 0;
        v14 = 8;
        goto LABEL_16;
      }
      current = v17.fields.current;
      if ( !v17.fields.current )
        sub_B170D4();
    }
    while ( !UIAtlas__GetSprite((UIAtlas_o *)v17.fields.current, spriteName, 0LL) );
    if ( !sprite )
      sub_B170D4();
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v13 = 1;
    v14 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v17,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v14 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B170D4();
    }
  }
  return v13;
}


UnityEngine_GameObject_o *__fastcall SubmarineNewScannerDialog__get_closeBtnObject(
        SubmarineNewScannerDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40F7C9C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7C9C = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}


void __fastcall SubmarineNewScannerDialog___c__DisplayClass10_0___ctor(
        SubmarineNewScannerDialog___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineNewScannerDialog___c__DisplayClass10_0___Open_b__0(
        SubmarineNewScannerDialog___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct EventPanelScanEntity_o *scanEntity; // x8
  SubmarineNewScannerDialog_o *_4__this; // x0
  struct SubmarineNewScannerDialog_o *v6; // x20
  struct EventPanelScanEntity_o *v7; // x8
  UISprite_o *iconSprite; // x19
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int32_t iconImageId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F7A7A & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_21804, v3);
    byte_40F7A7A = 1;
  }
  scanEntity = this->fields.scanEntity;
  if ( !scanEntity
    || (_4__this = this->fields.__4__this) == 0LL
    || (SubmarineNewScannerDialog__LoadLocalAtlas(_4__this, scanEntity->fields.eventId, 0LL),
        (v6 = this->fields.__4__this) == 0LL)
    || (v7 = this->fields.scanEntity) == 0LL )
  {
    sub_B170D4();
  }
  iconSprite = v6->fields.iconSprite;
  iconImageId = v7->fields.iconImageId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconImageId);
  v10 = System_String__Format((System_String_o *)StringLiteral_21804, v9, 0LL);
  SubmarineNewScannerDialog__SetSpriteByLocalAtlas(v6, iconSprite, v10, 0LL);
}


void __fastcall SubmarineNewScannerDialog___c__DisplayClass10_0___Open_b__1(
        SubmarineNewScannerDialog___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  BaseDialog_o *_4__this; // x0

  _4__this = (BaseDialog_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  BaseDialog__SetMaskTouchCloseEnabled(_4__this, 1, 0LL);
}


void __fastcall SubmarineNewScannerDialog___c__DisplayClass16_0___ctor(
        SubmarineNewScannerDialog___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineNewScannerDialog___c__DisplayClass16_0___LoadEventUIAssetData_b__0(
        SubmarineNewScannerDialog___c__DisplayClass16_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct SubmarineNewScannerDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  _4__this->fields.eventAssetData = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.eventAssetData,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0LL);
}