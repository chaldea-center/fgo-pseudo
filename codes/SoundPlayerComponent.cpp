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
  __int64 v1; // x1
  SoundPlayerComponent_c *v2; // x0

  if ( (byte_4214B0F & 1) == 0 )
  {
    sub_B0D8A4(&SoundPlayerComponent_TypeInfo, v1);
    byte_4214B0F = 1;
  }
  v2 = SoundPlayerComponent_TypeInfo;
  if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
    v2 = SoundPlayerComponent_TypeInfo;
  }
  v2->static_fields->isContinueDevice = 1;
}


void __fastcall SoundPlayerComponent__DestroyMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4214B15 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    byte_4214B15 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseMyRoomSoundAtlas(0LL);
}


void __fastcall SoundPlayerComponent__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  SoundPlayerComponent_c *v17; // x0
  DataManager_o *Instance; // x0
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_int__o *v22; // x19
  int max_length; // w8
  int i; // w25
  Il2CppClass **v25; // x8
  Il2CppClass *v26; // x21
  const MethodInfo *v27; // x1
  int32_t element_class; // w22
  int size; // w21
  __int64 v30; // x0
  System_String_array *v31; // x20
  unsigned __int64 v32; // x23
  signed __int64 v33; // x24
  BattleServantConfConponent_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x22
  System_String_o *v42; // x19
  SoundPlayerMenu_c *v43; // x8
  SoundPlayerComponent_c *v44; // x0
  __int64 v45; // x0
  __int64 v46; // x0
  int32_t v47; // [xsp+4h] [xbp-5Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4214B10 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, v1);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BgmMaster___, v2);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BgmReleaseMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&Method_DataMasterBase_getEntitys_BgmEntity___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&SoundPlayerComponent_TypeInfo, v13);
    sub_B0D8A4(&SoundPlayerMenu_TypeInfo, v14);
    sub_B0D8A4(&string___TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_705/*","*/, v16);
    byte_4214B10 = 1;
  }
  entity = 0LL;
  v47 = 0;
  v17 = SoundPlayerComponent_TypeInfo;
  if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
    v17 = SoundPlayerComponent_TypeInfo;
  }
  if ( v17->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      Instance,
      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_46;
    Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                        (DataMasterBase_o *)Instance,
                                        (const MethodInfo_1714E7C *)Method_DataMasterBase_getEntitys_BgmEntity___);
    v22 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v20, v21);
    System_Collections_Generic_List_int____ctor(
      v22,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
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
          v45 = sub_B0D9A8(Instance);
          sub_B0D948(v45, 0LL);
        }
        v25 = &Entitys_WarQuestSelectionEntity->obj.klass + i;
        v26 = v25[4];
        if ( !v26 )
          goto LABEL_46;
        Instance = (DataManager_o *)BgmEntity__HasFlag((BgmEntity_o *)v25[4], 1, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          element_class = (int32_t)v26->_1.element_class;
          if ( !element_class )
            goto LABEL_24;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          Instance = (DataManager_o *)CondType__IsPurchaseShop(element_class, 1, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
LABEL_25:
            if ( !v22 )
              goto LABEL_46;
            System_Collections_Generic_List_int___Add(
              v22,
              (int32_t)v26->_1.name,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
            goto LABEL_27;
          }
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_46;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___);
          if ( !Instance )
            goto LABEL_46;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        &entity,
                                        element_class,
                                        (const MethodInfo_2669C30 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
LABEL_24:
            Instance = (DataManager_o *)SoundPlayerListViewItem__isBgmLock((int32_t)v26->_1.name, v27);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_25;
          }
        }
LABEL_27:
        max_length = Entitys_WarQuestSelectionEntity->max_length;
      }
    }
    if ( !v22 )
LABEL_46:
      sub_B0D97C(Instance);
    size = v22->fields._size;
    v30 = sub_B0D8BC(string___TypeInfo, (unsigned int)size);
    v31 = (System_String_array *)v30;
    if ( size >= 1 )
    {
      v32 = 0LL;
      v33 = size;
      v34 = (BattleServantConfConponent_o *)(v30 + 32);
      do
      {
        if ( v32 >= (unsigned int)v22->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v47 = v22->fields._items->m_Items[v32 + 1];
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v47, 0LL);
        if ( !v31 )
          goto LABEL_46;
        v41 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = (DataManager_o *)sub_B0D964(Instance, v31->obj.klass->_1.element_class);
          if ( !Instance )
          {
            v46 = sub_B0D99C(0LL);
            sub_B0D948(v46, 0LL);
          }
        }
        if ( v32 >= v31->max_length )
          goto LABEL_47;
        v34->klass = (BattleServantConfConponent_c *)v41;
        sub_B0D840(v34, v41, v35, v36, v37, v38, v39, v40);
        ++v32;
        v34 = (BattleServantConfConponent_o *)((char *)v34 + 8);
      }
      while ( (__int64)v32 < v33 );
    }
    v42 = System_String__Join((System_String_o *)StringLiteral_705/*","*/, v31, 0LL);
    v43 = SoundPlayerMenu_TypeInfo;
    if ( (BYTE3(SoundPlayerMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v43 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v43->static_fields->SOUND_PLAYER_NEW_KEY, v42, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    v44 = SoundPlayerComponent_TypeInfo;
    if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
      v44 = SoundPlayerComponent_TypeInfo;
    }
    v44->static_fields->isContinueDevice = 0;
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
    sub_B0D97C(this);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, enable, 0LL);
}


void __fastcall SoundPlayerComponent___openMenu_b__10_0(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4214B18 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, method);
    byte_4214B18 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6912/*"GO_NEXT"*/, 0LL),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0LL) )
  {
    sub_B0D97C(myRoomFsm);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *targetIds; // x9
  __int64 v10; // x10
  unsigned __int64 v11; // x24
  int32_t v12; // w21
  unsigned __int64 v13; // x26
  unsigned __int64 max_length; // x9
  int64_t v15; // x22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v18; // x0
  signed __int64 v19; // [xsp+8h] [xbp-58h]

  v4 = releaseEntity;
  if ( (byte_4214B11 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    releaseEntity = (BgmReleaseEntity_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4214B11 = 1;
  }
  if ( !v4 )
LABEL_29:
    sub_B0D97C(releaseEntity);
  vals = v4->fields.vals;
  if ( !vals )
    return 0;
  targetIds = v4->fields.targetIds;
  if ( !targetIds )
    return 0;
  v10 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v10 < 1 )
    return 0;
  v19 = (int)v10;
  v11 = 0LL;
LABEL_8:
  if ( v11 >= targetIds->max_length )
  {
LABEL_32:
    v18 = sub_B0D9A8(releaseEntity);
    sub_B0D948(v18, 0LL);
  }
  v12 = targetIds->m_Items[v11 + 1];
  v13 = 0LL;
  while ( 1 )
  {
    max_length = vals->max_length;
    if ( (__int64)v13 >= (int)max_length )
    {
      if ( (__int64)++v11 >= v19 )
        return 0;
      targetIds = v4->fields.targetIds;
      if ( !targetIds )
        goto LABEL_29;
      goto LABEL_8;
    }
    if ( v13 >= max_length )
      goto LABEL_32;
    v15 = vals->m_Items[v13 + 1];
    if ( kind != 17 )
      break;
    releaseEntity = (BgmReleaseEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !releaseEntity )
      goto LABEL_29;
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)releaseEntity,
                                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
                                            v12,
                                            0LL);
    if ( !releaseEntity )
      goto LABEL_29;
    releaseEntity = (BgmReleaseEntity_o *)UserServantCollectionEntity__IsPlayed(
                                            (UserServantCollectionEntity_o *)releaseEntity,
                                            v15,
                                            0LL);
    if ( ((unsigned __int8)releaseEntity & 1) != 0 )
      return 1;
LABEL_25:
    vals = v4->fields.vals;
    ++v13;
    if ( !vals )
      goto LABEL_29;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  releaseEntity = (BgmReleaseEntity_o *)CondType__IsOpen(kind, v12, v15, 0, 0LL);
  if ( ((unsigned __int8)releaseEntity & 1) == 0 )
    goto LABEL_25;
  return 1;
}


bool __fastcall SoundPlayerComponent__closeMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BaseMenu_o *soundPlayerMenu; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4214B13 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SoundPlayerComponent_onClose__, v4);
    byte_4214B13 = 1;
  }
  soundPlayerMenu = (BaseMenu_o *)this->fields.soundPlayerMenu;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SoundPlayerComponent_onClose__, 0LL);
  if ( !soundPlayerMenu )
    sub_B0D97C(v7);
  BaseMenu__Close(soundPlayerMenu, v6, 0LL);
  return 1;
}


System_String_o *__fastcall SoundPlayerComponent__getPlaySoundName(
        SoundPlayerComponent_o *this,
        const MethodInfo *method)
{
  struct SoundPlayerMenu_o *soundPlayerMenu; // x8

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu )
    sub_B0D97C(this);
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
    sub_B0D97C(soundPlayerMenu);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerMenu, 0, 0LL);
}


void __fastcall SoundPlayerComponent__initMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4214B14 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    byte_4214B14 = 1;
  }
  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu
    || (SoundPlayerMenu__Init(soundPlayerMenu, method), (soundPlayerMenu = this->fields.soundPlayerMenu) == 0LL) )
  {
    sub_B0D97C(soundPlayerMenu);
  }
  SoundPlayerMenu__resetPlaySoundData(soundPlayerMenu, v4);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadMyRoomSoundAtlas(0LL, 1, 0LL);
}


void __fastcall SoundPlayerComponent__onClose(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4214B16 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3115/*"CLOSE_MENU"*/, method);
    byte_4214B16 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3115/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall SoundPlayerComponent__onEndMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4214B17 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3120/*"CLOSE_SOUND_PLAYER"*/, method);
    byte_4214B17 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3120/*"CLOSE_SOUND_PLAYER"*/, 0LL);
}


bool __fastcall SoundPlayerComponent__openMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *titleInfo; // x0
  const MethodInfo *v7; // x1
  SoundPlayerMenu_o *soundPlayerMenu; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x3

  if ( (byte_4214B12 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SoundPlayerComponent__openMenu_b__10_0__, v3);
    sub_B0D8A4(&Method_SoundPlayerComponent_onEndMenu__, v4);
    byte_4214B12 = 1;
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
  TitleInfoControl__changeTitleInfo_17425792((TitleInfoControl_o *)titleInfo, 1, 51, 0, 0LL);
  titleInfo = (UnityEngine_GameObject_o *)this->fields.soundPlayerMenu;
  if ( !titleInfo
    || (SoundPlayerMenu__analyzeNewList((SoundPlayerMenu_o *)titleInfo, v7),
        soundPlayerMenu = this->fields.soundPlayerMenu,
        v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10),
        System_Action___ctor(v11, (Il2CppObject *)this, Method_SoundPlayerComponent__openMenu_b__10_0__, 0LL),
        v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13),
        System_Action___ctor(v14, (Il2CppObject *)this, Method_SoundPlayerComponent_onEndMenu__, 0LL),
        !soundPlayerMenu) )
  {
LABEL_8:
    sub_B0D97C(titleInfo);
  }
  SoundPlayerMenu__open(soundPlayerMenu, v11, v14, v15);
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
    sub_B0D97C(gameObject);
  }
  SoundPlayerMenu__Init((SoundPlayerMenu_o *)gameObject, v4);
}