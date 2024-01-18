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

  if ( (byte_41876D8 & 1) == 0 )
  {
    sub_B2C35C(&SoundPlayerComponent_TypeInfo, v1);
    byte_41876D8 = 1;
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
  if ( (byte_41876DE & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    byte_41876DE = 1;
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
  const MethodInfo *v19; // x1
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x20
  System_Collections_Generic_List_int__o *v21; // x19
  int max_length; // w8
  int i; // w25
  Il2CppClass **v24; // x8
  Il2CppClass *v25; // x21
  int32_t element_class; // w22
  int size; // w21
  __int64 v28; // x0
  System_String_array *v29; // x20
  unsigned __int64 v30; // x23
  signed __int64 v31; // x24
  BattleServantConfConponent_o *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x22
  System_String_o *v40; // x19
  SoundPlayerMenu_c *v41; // x8
  SoundPlayerComponent_c *v42; // x0
  __int64 v43; // x0
  __int64 v44; // x0
  int32_t v45; // [xsp+4h] [xbp-5Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_41876D9 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, v1);
    sub_B2C35C(&Method_DataManager_GetMasterData_BgmMaster___, v2);
    sub_B2C35C(&Method_DataManager_GetMasterData_BgmReleaseMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_BgmEntity___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&SoundPlayerComponent_TypeInfo, v13);
    sub_B2C35C(&SoundPlayerMenu_TypeInfo, v14);
    sub_B2C35C(&string___TypeInfo, v15);
    sub_B2C35C(&StringLiteral_699/*","*/, v16);
    byte_41876D9 = 1;
  }
  entity = 0LL;
  v45 = 0;
  v17 = SoundPlayerComponent_TypeInfo;
  if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
    v17 = SoundPlayerComponent_TypeInfo;
  }
  if ( v17->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      Instance,
      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_46;
    Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                        (DataMasterBase_o *)Instance,
                                        (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_BgmEntity___);
    v21 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v21,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
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
          v43 = sub_B2C460(Instance);
          sub_B2C400(v43, 0LL);
        }
        v24 = &Entitys_WarQuestSelectionEntity->obj.klass + i;
        v25 = v24[4];
        if ( !v25 )
          goto LABEL_46;
        Instance = (DataManager_o *)BgmEntity__HasFlag((BgmEntity_o *)v24[4], 1, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          element_class = (int32_t)v25->_1.element_class;
          if ( !element_class )
            goto LABEL_24;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          Instance = (DataManager_o *)CondType__IsPurchaseShop(element_class, 1, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
LABEL_25:
            if ( !v21 )
              goto LABEL_46;
            System_Collections_Generic_List_int___Add(
              v21,
              (int32_t)v25->_1.name,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            goto LABEL_27;
          }
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_46;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
          if ( !Instance )
            goto LABEL_46;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        &entity,
                                        element_class,
                                        (const MethodInfo_24E412C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
LABEL_24:
            Instance = (DataManager_o *)SoundPlayerListViewItem__isBgmLock((int32_t)v25->_1.name, v19);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_25;
          }
        }
LABEL_27:
        max_length = Entitys_WarQuestSelectionEntity->max_length;
      }
    }
    if ( !v21 )
LABEL_46:
      sub_B2C434(Instance, v19);
    size = v21->fields._size;
    v28 = sub_B2C374(string___TypeInfo, (unsigned int)size);
    v29 = (System_String_array *)v28;
    if ( size >= 1 )
    {
      v30 = 0LL;
      v31 = size;
      v32 = (BattleServantConfConponent_o *)(v28 + 32);
      do
      {
        if ( v30 >= (unsigned int)v21->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v45 = v21->fields._items->m_Items[v30 + 1];
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v45, 0LL);
        if ( !v29 )
          goto LABEL_46;
        v39 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = (DataManager_o *)sub_B2C41C(Instance, v29->obj.klass->_1.element_class);
          if ( !Instance )
          {
            v44 = sub_B2C454(0LL);
            sub_B2C400(v44, 0LL);
          }
        }
        if ( v30 >= v29->max_length )
          goto LABEL_47;
        v32->klass = (BattleServantConfConponent_c *)v39;
        sub_B2C2F8(v32, v39, v33, v34, v35, v36, v37, v38);
        ++v30;
        v32 = (BattleServantConfConponent_o *)((char *)v32 + 8);
      }
      while ( (__int64)v30 < v31 );
    }
    v40 = System_String__Join((System_String_o *)StringLiteral_699/*","*/, v29, 0LL);
    v41 = SoundPlayerMenu_TypeInfo;
    if ( (BYTE3(SoundPlayerMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v41 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v41->static_fields->SOUND_PLAYER_NEW_KEY, v40, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    v42 = SoundPlayerComponent_TypeInfo;
    if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
      v42 = SoundPlayerComponent_TypeInfo;
    }
    v42->static_fields->isContinueDevice = 0;
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
    sub_B2C434(this, enable);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, enable, 0LL);
}


void __fastcall SoundPlayerComponent___openMenu_b__10_0(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_41876E1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, method);
    byte_41876E1 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/, 0LL),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0LL) )
  {
    sub_B2C434(myRoomFsm, method);
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
  if ( (byte_41876DA & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    releaseEntity = (BgmReleaseEntity_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_41876DA = 1;
  }
  if ( !v4 )
LABEL_29:
    sub_B2C434(releaseEntity, *(_QWORD *)&kind);
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
    v18 = sub_B2C460(releaseEntity);
    sub_B2C400(v18, 0LL);
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
    releaseEntity = (BgmReleaseEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !releaseEntity )
      goto LABEL_29;
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)releaseEntity,
                                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  __int64 v3; // x1
  BaseMenu_o *soundPlayerMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_41876DC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SoundPlayerComponent_onClose__, v3);
    byte_41876DC = 1;
  }
  soundPlayerMenu = (BaseMenu_o *)this->fields.soundPlayerMenu;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SoundPlayerComponent_onClose__, 0LL);
  if ( !soundPlayerMenu )
    sub_B2C434(v6, v7);
  BaseMenu__Close(soundPlayerMenu, v5, 0LL);
  return 1;
}


System_String_o *__fastcall SoundPlayerComponent__getPlaySoundName(
        SoundPlayerComponent_o *this,
        const MethodInfo *method)
{
  struct SoundPlayerMenu_o *soundPlayerMenu; // x8

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu )
    sub_B2C434(this, method);
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
    sub_B2C434(soundPlayerMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerMenu, 0, 0LL);
}


void __fastcall SoundPlayerComponent__initMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0

  if ( (byte_41876DD & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    byte_41876DD = 1;
  }
  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu
    || (SoundPlayerMenu__Init(soundPlayerMenu, method), (soundPlayerMenu = this->fields.soundPlayerMenu) == 0LL) )
  {
    sub_B2C434(soundPlayerMenu, method);
  }
  SoundPlayerMenu__resetPlaySoundData(soundPlayerMenu, method);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadMyRoomSoundAtlas(0LL, 1, 0LL);
}


void __fastcall SoundPlayerComponent__onClose(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_41876DF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3103/*"CLOSE_MENU"*/, method);
    byte_41876DF = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3103/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall SoundPlayerComponent__onEndMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_41876E0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3108/*"CLOSE_SOUND_PLAYER"*/, method);
    byte_41876E0 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3108/*"CLOSE_SOUND_PLAYER"*/, 0LL);
}


bool __fastcall SoundPlayerComponent__openMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *titleInfo; // x0
  const MethodInfo *v7; // x1
  SoundPlayerMenu_o *soundPlayerMenu; // x20
  System_Action_o *v9; // x21
  System_Action_o *v10; // x22
  const MethodInfo *v11; // x3

  if ( (byte_41876DB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SoundPlayerComponent__openMenu_b__10_0__, v3);
    sub_B2C35C(&Method_SoundPlayerComponent_onEndMenu__, v4);
    byte_41876DB = 1;
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
  TitleInfoControl__changeTitleInfo_19533564((TitleInfoControl_o *)titleInfo, 1, 51, 0, 0LL);
  titleInfo = (UnityEngine_GameObject_o *)this->fields.soundPlayerMenu;
  if ( !titleInfo
    || (SoundPlayerMenu__analyzeNewList((SoundPlayerMenu_o *)titleInfo, v7),
        soundPlayerMenu = this->fields.soundPlayerMenu,
        v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_SoundPlayerComponent__openMenu_b__10_0__, 0LL),
        v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_SoundPlayerComponent_onEndMenu__, 0LL),
        !soundPlayerMenu) )
  {
LABEL_8:
    sub_B2C434(titleInfo, v7);
  }
  SoundPlayerMenu__open(soundPlayerMenu, v9, v10, v11);
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
    sub_B2C434(gameObject, v4);
  }
  SoundPlayerMenu__Init((SoundPlayerMenu_o *)gameObject, v4);
}