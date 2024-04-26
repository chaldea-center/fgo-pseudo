void __fastcall SoundPlayerComponent___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall SoundPlayerComponent___ctor(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SoundPlayerComponent__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  SoundPlayerComponent_c *v1; // x0

  if ( (byte_4350AF3 & 1) == 0 )
  {
    sub_B70694(&SoundPlayerComponent_TypeInfo);
    byte_4350AF3 = 1;
  }
  v1 = SoundPlayerComponent_TypeInfo;
  if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
    v1 = SoundPlayerComponent_TypeInfo;
  }
  v1->static_fields->isContinueDevice = 1;
}


void __fastcall SoundPlayerComponent__DestroyMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4350AF9 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    byte_4350AF9 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseMyRoomSoundAtlas(0LL);
}


void __fastcall SoundPlayerComponent__LoginProcess(const MethodInfo *method)
{
  SoundPlayerComponent_c *v1; // x0
  DataManager_o *Instance; // x0
  const MethodInfo *v3; // x1
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x20
  System_Collections_Generic_List_int__o *v5; // x19
  int max_length; // w8
  int i; // w25
  Il2CppClass **v8; // x8
  Il2CppClass *v9; // x21
  int32_t element_class; // w22
  int size; // w21
  __int64 v12; // x0
  System_String_array *v13; // x20
  unsigned __int64 v14; // x23
  signed __int64 v15; // x24
  BattleServantConfConponent_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x22
  System_String_o *v24; // x19
  SoundPlayerMenu_c *v25; // x8
  SoundPlayerComponent_c *v26; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  int32_t v29; // [xsp+4h] [xbp-5Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4350AF4 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_BgmReleaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B70694(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_getEntitys_BgmEntity___);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundPlayerComponent_TypeInfo);
    sub_B70694(&SoundPlayerMenu_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_712/*","*/);
    byte_4350AF4 = 1;
  }
  entity = 0LL;
  v29 = 0;
  v1 = SoundPlayerComponent_TypeInfo;
  if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
    v1 = SoundPlayerComponent_TypeInfo;
  }
  if ( v1->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      Instance,
      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_46;
    Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                        (DataMasterBase_o *)Instance,
                                        (const MethodInfo_1CA3E74 *)Method_DataMasterBase_getEntitys_BgmEntity___);
    v5 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v5,
      (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !Entitys_WarQuestSelectionEntity )
      goto LABEL_46;
    max_length = Entitys_WarQuestSelectionEntity->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
        {
LABEL_47:
          v27 = sub_B70798(Instance);
          sub_B70738(v27, 0LL);
        }
        v8 = &Entitys_WarQuestSelectionEntity->obj.klass + i;
        v9 = v8[4];
        if ( !v9 )
          goto LABEL_46;
        Instance = (DataManager_o *)BgmEntity__HasFlag((BgmEntity_o *)v8[4], 1, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          element_class = (int32_t)v9->_1.element_class;
          if ( !element_class )
            goto LABEL_24;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          Instance = (DataManager_o *)CondType__IsPurchaseShop(element_class, 1, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
LABEL_25:
            if ( !v5 )
              goto LABEL_46;
            System_Collections_Generic_List_int___Add(
              v5,
              (int32_t)v9->_1.name,
              (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
            goto LABEL_27;
          }
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_46;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopMaster___);
          if ( !Instance )
            goto LABEL_46;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        &entity,
                                        element_class,
                                        (const MethodInfo_21C049C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
LABEL_24:
            Instance = (DataManager_o *)SoundPlayerListViewItem__isBgmLock((int32_t)v9->_1.name, v3);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_25;
          }
        }
LABEL_27:
        max_length = Entitys_WarQuestSelectionEntity->max_length;
      }
    }
    if ( !v5 )
LABEL_46:
      sub_B7076C(Instance, v3);
    size = v5->fields._size;
    v12 = sub_B706AC(string___TypeInfo, (unsigned int)size);
    v13 = (System_String_array *)v12;
    if ( size >= 1 )
    {
      v14 = 0LL;
      v15 = size;
      v16 = (BattleServantConfConponent_o *)(v12 + 32);
      do
      {
        if ( v14 >= (unsigned int)v5->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v29 = v5->fields._items->m_Items[v14 + 1];
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v29, 0LL);
        if ( !v13 )
          goto LABEL_46;
        v23 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = (DataManager_o *)sub_B70754(Instance, v13->obj.klass->_1.element_class);
          if ( !Instance )
          {
            v28 = sub_B7078C(0LL);
            sub_B70738(v28, 0LL);
          }
        }
        if ( v14 >= v13->max_length )
          goto LABEL_47;
        v16->klass = (BattleServantConfConponent_c *)v23;
        sub_B70630(v16, v23, v17, v18, v19, v20, v21, v22);
        ++v14;
        v16 = (BattleServantConfConponent_o *)((char *)v16 + 8);
      }
      while ( (__int64)v14 < v15 );
    }
    v24 = System_String__Join((System_String_o *)StringLiteral_712/*","*/, v13, 0LL);
    v25 = SoundPlayerMenu_TypeInfo;
    if ( (BYTE3(SoundPlayerMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v25 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v25->static_fields->SOUND_PLAYER_NEW_KEY, v24, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    v26 = SoundPlayerComponent_TypeInfo;
    if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
      v26 = SoundPlayerComponent_TypeInfo;
    }
    v26->static_fields->isContinueDevice = 0;
  }
}


void __fastcall SoundPlayerComponent__SetEnableBlockTouch(
        SoundPlayerComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  struct SoundPlayerMenu_o *soundPlayerMenu; // x8

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu || (this = (SoundPlayerComponent_o *)soundPlayerMenu->fields.maskColl) == 0LL )
    sub_B7076C(this, enable);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, enable, 0LL);
}


void __fastcall SoundPlayerComponent___openMenu_b__10_0(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4350AFC & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6989/*"GO_NEXT"*/);
    byte_4350AFC = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6989/*"GO_NEXT"*/, 0LL),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0LL) )
  {
    sub_B7076C(myRoomFsm, method);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SoundPlayerComponent__checkOpen(
        BgmReleaseEntity_o *releaseEntity,
        int32_t kind,
        const MethodInfo *method)
{
  BgmReleaseEntity_o *v4; // x20
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *targetIds; // x9
  __int64 v7; // x10
  unsigned __int64 v8; // x24
  int32_t v9; // w21
  unsigned __int64 v10; // x26
  unsigned __int64 max_length; // x9
  int64_t v12; // x22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v15; // x0
  signed __int64 v16; // [xsp+8h] [xbp-58h]

  v4 = releaseEntity;
  if ( (byte_4350AF5 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    releaseEntity = (BgmReleaseEntity_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350AF5 = 1;
  }
  if ( !v4 )
LABEL_29:
    sub_B7076C(releaseEntity, *(_QWORD *)&kind);
  vals = v4->fields.vals;
  if ( !vals )
    return 0;
  targetIds = v4->fields.targetIds;
  if ( !targetIds )
    return 0;
  v7 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v7 < 1 )
    return 0;
  v16 = (int)v7;
  v8 = 0LL;
LABEL_8:
  if ( v8 >= targetIds->max_length )
  {
LABEL_32:
    v15 = sub_B70798(releaseEntity);
    sub_B70738(v15, 0LL);
  }
  v9 = targetIds->m_Items[v8 + 1];
  v10 = 0LL;
  while ( 1 )
  {
    max_length = vals->max_length;
    if ( (__int64)v10 >= (int)max_length )
    {
      if ( (__int64)++v8 >= v16 )
        return 0;
      targetIds = v4->fields.targetIds;
      if ( !targetIds )
        goto LABEL_29;
      goto LABEL_8;
    }
    if ( v10 >= max_length )
      goto LABEL_32;
    v12 = vals->m_Items[v10 + 1];
    if ( kind != 17 )
      break;
    releaseEntity = (BgmReleaseEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !releaseEntity )
      goto LABEL_29;
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)releaseEntity,
                                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    releaseEntity = (BgmReleaseEntity_o *)NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_29;
    releaseEntity = (BgmReleaseEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                            MasterData_WarQuestSelectionMaster,
                                            (int64_t)releaseEntity,
                                            v9,
                                            0LL);
    if ( !releaseEntity )
      goto LABEL_29;
    releaseEntity = (BgmReleaseEntity_o *)UserServantCollectionEntity__IsPlayed(
                                            (UserServantCollectionEntity_o *)releaseEntity,
                                            v12,
                                            0LL);
    if ( ((unsigned __int8)releaseEntity & 1) != 0 )
      return 1;
LABEL_25:
    vals = v4->fields.vals;
    ++v10;
    if ( !vals )
      goto LABEL_29;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  releaseEntity = (BgmReleaseEntity_o *)CondType__IsOpen(kind, v9, v12, 0, 0LL);
  if ( ((unsigned __int8)releaseEntity & 1) == 0 )
    goto LABEL_25;
  return 1;
}


bool __fastcall SoundPlayerComponent__closeMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  BaseMenu_o *soundPlayerMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4350AF7 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SoundPlayerComponent_onClose__);
    byte_4350AF7 = 1;
  }
  soundPlayerMenu = (BaseMenu_o *)this->fields.soundPlayerMenu;
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SoundPlayerComponent_onClose__, 0LL);
  if ( !soundPlayerMenu )
    sub_B7076C(v5, v6);
  BaseMenu__Close(soundPlayerMenu, v4, 0LL);
  return 1;
}


System_String_o *__fastcall SoundPlayerComponent__getPlaySoundName(
        SoundPlayerComponent_o *this,
        const MethodInfo *method)
{
  struct SoundPlayerMenu_o *soundPlayerMenu; // x8

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu )
    sub_B7076C(this, method);
  return soundPlayerMenu->fields.playSoundName;
}


void __fastcall SoundPlayerComponent__hideMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu
    || (SoundPlayerMenu__hideMenu(soundPlayerMenu, method),
        (soundPlayerMenu = (SoundPlayerMenu_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL)) == 0LL) )
  {
    sub_B7076C(soundPlayerMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerMenu, 0, 0LL);
}


void __fastcall SoundPlayerComponent__initMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0

  if ( (byte_4350AF8 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    byte_4350AF8 = 1;
  }
  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu
    || (SoundPlayerMenu__Init(soundPlayerMenu, method), (soundPlayerMenu = this->fields.soundPlayerMenu) == 0LL) )
  {
    sub_B7076C(soundPlayerMenu, method);
  }
  SoundPlayerMenu__resetPlaySoundData(soundPlayerMenu, method);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadMyRoomSoundAtlas(0LL, 1, 0LL);
}


void __fastcall SoundPlayerComponent__onClose(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4350AFA & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3177/*"CLOSE_MENU"*/);
    byte_4350AFA = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3177/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall SoundPlayerComponent__onEndMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4350AFB & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3182/*"CLOSE_SOUND_PLAYER"*/);
    byte_4350AFB = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3182/*"CLOSE_SOUND_PLAYER"*/, 0LL);
}


bool __fastcall SoundPlayerComponent__openMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *titleInfo; // x0
  const MethodInfo *v5; // x1
  SoundPlayerMenu_o *soundPlayerMenu; // x20
  System_Action_o *v7; // x21
  System_Action_o *v8; // x22
  const MethodInfo *v9; // x3

  if ( (byte_4350AF6 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SoundPlayerComponent__openMenu_b__10_0__);
    sub_B70694(&Method_SoundPlayerComponent_onEndMenu__);
    byte_4350AF6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetPosition(gameObject, 0LL);
  titleInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleInfo )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(titleInfo, 1, 0LL);
  titleInfo = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_8;
  TitleInfoControl__changeTitleInfo_18518488((TitleInfoControl_o *)titleInfo, 1, 51, 0, 0LL);
  titleInfo = (UnityEngine_GameObject_o *)this->fields.soundPlayerMenu;
  if ( !titleInfo
    || (SoundPlayerMenu__analyzeNewList((SoundPlayerMenu_o *)titleInfo, v5),
        soundPlayerMenu = this->fields.soundPlayerMenu,
        v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)this, Method_SoundPlayerComponent__openMenu_b__10_0__, 0LL),
        v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_SoundPlayerComponent_onEndMenu__, 0LL),
        !soundPlayerMenu) )
  {
LABEL_8:
    sub_B7076C(titleInfo, v5);
  }
  SoundPlayerMenu__open(soundPlayerMenu, v7, v8, v9);
  return 1;
}


void __fastcall SoundPlayerComponent__showMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.soundPlayerMenu) == 0LL) )
  {
    sub_B7076C(gameObject, v4);
  }
  SoundPlayerMenu__Init((SoundPlayerMenu_o *)gameObject, v4);
}