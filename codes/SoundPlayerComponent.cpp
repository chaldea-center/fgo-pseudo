void __fastcall SoundPlayerComponent___ctor(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SoundPlayerComponent__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49B6785 & 1) == 0 )
  {
    sub_1B4CF90(&SoundPlayerComponent_TypeInfo, v1);
    byte_49B6785 = 1;
  }
  SoundPlayerComponent_TypeInfo->static_fields->isContinueDevice = 1;
}


void __fastcall SoundPlayerComponent__DestroyMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_49B678B & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, method);
    byte_49B678B = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
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
  DataManager_o *Instance; // x0
  const MethodInfo *v18; // x1
  DataManager_o *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x20
  System_Collections_Generic_List_int__o *v22; // x19
  int v23; // w8
  unsigned int v24; // w25
  __int64 v25; // x8
  __int64 v26; // x21
  int32_t v27; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  __int64 v31; // x20
  __int64 v32; // x0
  System_String_array *v33; // x21
  unsigned __int64 v34; // x22
  CGThumbnailListItem_o *v35; // x23
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_String_o *v38; // x0
  SoundPlayerMenu_c *v39; // x8
  System_String_o *v40; // x19
  int32_t Item; // [xsp+4h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49B6786 & 1) == 0 )
  {
    sub_1B4CF90(&CondType_TypeInfo, v1);
    sub_1B4CF90(&Method_DataManager_GetMasterData_BgmMaster___, v2);
    sub_1B4CF90(&Method_DataManager_GetMasterData_BgmReleaseMaster___, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_1B4CF90(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v5);
    sub_1B4CF90(&Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys_BgmEntity___, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B4CF90(&SoundPlayerComponent_TypeInfo, v13);
    sub_1B4CF90(&SoundPlayerMenu_TypeInfo, v14);
    sub_1B4CF90(&string___TypeInfo, v15);
    sub_1B4CF90(&StringLiteral_816/*","*/, v16);
    byte_49B6786 = 1;
  }
  entity = 0LL;
  Item = 0;
  if ( SoundPlayerComponent_TypeInfo->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    DataManager__GetMasterData_object_(
      Instance,
      (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_37;
    v19 = Instance;
    v20 = sub_1B4D0C4(*((_QWORD *)&Instance->klass->vtable._1_Finalize.methodPtr
                      + 2
                      * *((unsigned __int16 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys_BgmEntity___
                        + 40)));
    v21 = (*(__int64 (__fastcall **)(DataManager_o *, __int64))(v20 + 8))(v19, v20);
    v22 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v22,
      (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v21 )
      goto LABEL_37;
    v23 = *(_DWORD *)(v21 + 24);
    if ( v23 >= 1 )
    {
      v24 = 0;
      while ( 1 )
      {
        if ( v24 >= v23 )
LABEL_38:
          sub_1B4D1F4(Instance, v18);
        v25 = v21 + 8LL * (int)v24;
        v26 = *(_QWORD *)(v25 + 32);
        if ( !v26 )
          goto LABEL_37;
        Instance = (DataManager_o *)BgmEntity__HasFlag(*(BgmEntity_o **)(v25 + 32), 1, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v27 = *(_DWORD *)(v26 + 64);
          if ( !v27 )
            break;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          Instance = (DataManager_o *)CondType__IsPurchaseShop(v27, 1, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            goto LABEL_21;
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_37;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ShopMaster___);
          if ( !Instance )
            goto LABEL_37;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        &entity,
                                        v27,
                                        (const MethodInfo_319D9E8 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            break;
        }
LABEL_26:
        v23 = *(_DWORD *)(v21 + 24);
        if ( (int)++v24 >= v23 )
          goto LABEL_27;
      }
      Instance = (DataManager_o *)SoundPlayerListViewItem__isBgmLock(*(_DWORD *)(v26 + 16), v18);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_26;
LABEL_21:
      if ( !v22 )
        goto LABEL_37;
      v18 = (const MethodInfo *)*(unsigned int *)(v26 + 16);
      items = v22->fields._items;
      v29 = Method_System_Collections_Generic_List_int__Add__;
      ++v22->fields._version;
      if ( !items )
        goto LABEL_37;
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v22,
          (int32_t)v18,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v22->fields._size = size + 1;
        items->m_Items[size + 1] = (int)v18;
      }
      goto LABEL_26;
    }
LABEL_27:
    if ( !v22 )
LABEL_37:
      sub_1B4D1EC(Instance, v18);
    v31 = (unsigned int)v22->fields._size;
    v32 = sub_1B4D038(string___TypeInfo, (unsigned int)v31);
    v33 = (System_String_array *)v32;
    if ( (int)v31 >= 1 )
    {
      v34 = 0LL;
      v35 = (CGThumbnailListItem_o *)(v32 + 32);
      do
      {
        Item = System_Collections_Generic_List_int___get_Item(
                 v22,
                 v34,
                 (const MethodInfo_3562EC8 *)Method_System_Collections_Generic_List_int__get_Item__);
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&Item, 0LL);
        if ( !v33 )
          goto LABEL_37;
        if ( v34 >= v33->max_length )
          goto LABEL_38;
        v35->klass = (CGThumbnailListItem_c *)Instance;
        sub_1B4CF34(v35, (int32_t)Instance, v36, v37);
        ++v34;
        v35 = (CGThumbnailListItem_o *)((char *)v35 + 8);
      }
      while ( v31 != v34 );
    }
    v38 = System_String__Join((System_String_o *)StringLiteral_816/*","*/, v33, 0LL);
    v39 = SoundPlayerMenu_TypeInfo;
    v40 = v38;
    if ( !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v39 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v39->static_fields->SOUND_PLAYER_NEW_KEY, v40, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    SoundPlayerComponent_TypeInfo->static_fields->isContinueDevice = 0;
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
    sub_1B4D1EC(this, enable);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, enable, 0LL);
}


void __fastcall SoundPlayerComponent___openMenu_b__10_0(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_49B678E & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_6861/*"GO_NEXT"*/, method);
    byte_49B678E = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6861/*"GO_NEXT"*/, 0LL),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0LL) )
  {
    sub_1B4D1EC(myRoomFsm, method);
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
  unsigned __int64 v10; // x25
  int32_t v11; // w22
  unsigned __int64 v12; // x27
  unsigned __int64 max_length; // x9
  int64_t v14; // x23
  Il2CppObject *MasterData_object; // x24
  __int64 v17; // [xsp+8h] [xbp-68h]

  v4 = releaseEntity;
  if ( (byte_49B6787 & 1) == 0 )
  {
    sub_1B4CF90(&CondType_TypeInfo, *(_QWORD *)&kind);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1B4CF90(&NetworkManager_TypeInfo, v6);
    releaseEntity = (BgmReleaseEntity_o *)sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49B6787 = 1;
  }
  if ( !v4 )
LABEL_31:
    sub_1B4D1EC(releaseEntity, *(_QWORD *)&kind);
  vals = v4->fields.vals;
  if ( !vals )
    return 0;
  targetIds = v4->fields.targetIds;
  if ( !targetIds || (int)*(_QWORD *)&targetIds->max_length < 1 )
    return 0;
  v17 = (unsigned int)*(_QWORD *)&targetIds->max_length;
  v10 = 0LL;
LABEL_8:
  if ( v10 >= targetIds->max_length )
LABEL_34:
    sub_1B4D1F4(releaseEntity, *(_QWORD *)&kind);
  v11 = targetIds->m_Items[v10 + 1];
  v12 = 0LL;
  while ( 1 )
  {
    max_length = vals->max_length;
    if ( (__int64)v12 >= (int)max_length )
    {
      if ( ++v10 == v17 )
        return 0;
      targetIds = v4->fields.targetIds;
      if ( !targetIds )
        goto LABEL_31;
      goto LABEL_8;
    }
    if ( v12 >= max_length )
      goto LABEL_34;
    v14 = vals->m_Items[v12 + 1];
    if ( kind != 17 )
      break;
    releaseEntity = (BgmReleaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !releaseEntity )
      goto LABEL_31;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)releaseEntity,
                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_49B57A5 )
    {
      sub_1B4CF90(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
      byte_49B57A5 = 1;
    }
    releaseEntity = (BgmReleaseEntity_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      releaseEntity = (BgmReleaseEntity_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_31;
    releaseEntity = (BgmReleaseEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                            (UserServantCollectionMaster_o *)MasterData_object,
                                            *(_QWORD *)(*(_QWORD *)&releaseEntity[3].fields.bgmId + 64LL),
                                            v11,
                                            0LL);
    if ( !releaseEntity )
      goto LABEL_31;
    releaseEntity = (BgmReleaseEntity_o *)UserServantCollectionEntity__IsPlayed(
                                            (UserServantCollectionEntity_o *)releaseEntity,
                                            v14,
                                            0LL);
    if ( ((unsigned __int8)releaseEntity & 1) != 0 )
      return 1;
LABEL_27:
    vals = v4->fields.vals;
    ++v12;
    if ( !vals )
      goto LABEL_31;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  releaseEntity = (BgmReleaseEntity_o *)CondType__IsOpen(kind, v11, v14, 0, 0LL, 0LL);
  if ( ((unsigned __int8)releaseEntity & 1) == 0 )
    goto LABEL_27;
  return 1;
}


bool __fastcall SoundPlayerComponent__closeMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BaseMenu_o *soundPlayerMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_49B6789 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SoundPlayerComponent_onClose__, v3);
    byte_49B6789 = 1;
  }
  soundPlayerMenu = (BaseMenu_o *)this->fields.soundPlayerMenu;
  v5 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SoundPlayerComponent_onClose__, 0LL);
  if ( !soundPlayerMenu )
    sub_1B4D1EC(v6, v7);
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
    sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(soundPlayerMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerMenu, 0, 0LL);
}


void __fastcall SoundPlayerComponent__initMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0

  if ( (byte_49B678A & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, method);
    byte_49B678A = 1;
  }
  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu
    || (SoundPlayerMenu__Init(soundPlayerMenu, method), (soundPlayerMenu = this->fields.soundPlayerMenu) == 0LL) )
  {
    sub_1B4D1EC(soundPlayerMenu, method);
  }
  SoundPlayerMenu__resetPlaySoundData(soundPlayerMenu, method);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadMyRoomSoundAtlas(0LL, 1, 0LL);
}


void __fastcall SoundPlayerComponent__onClose(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_49B678C & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_3493/*"CLOSE_MENU"*/, method);
    byte_49B678C = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B4D1EC(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3493/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall SoundPlayerComponent__onEndMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_49B678D & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_3498/*"CLOSE_SOUND_PLAYER"*/, method);
    byte_49B678D = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B4D1EC(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3498/*"CLOSE_SOUND_PLAYER"*/, 0LL);
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

  if ( (byte_49B6788 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SoundPlayerComponent__openMenu_b__10_0__, v3);
    sub_1B4CF90(&Method_SoundPlayerComponent_onEndMenu__, v4);
    byte_49B6788 = 1;
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
  TitleInfoControl__changeTitleInfo_37679628((TitleInfoControl_o *)titleInfo, 1, 52, 0, 0LL);
  titleInfo = (UnityEngine_GameObject_o *)this->fields.soundPlayerMenu;
  if ( !titleInfo
    || (SoundPlayerMenu__analyzeNewList((SoundPlayerMenu_o *)titleInfo, v7),
        soundPlayerMenu = this->fields.soundPlayerMenu,
        v9 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_SoundPlayerComponent__openMenu_b__10_0__, 0LL),
        v10 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_SoundPlayerComponent_onEndMenu__, 0LL),
        !soundPlayerMenu) )
  {
LABEL_8:
    sub_1B4D1EC(titleInfo, v7);
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
    sub_1B4D1EC(gameObject, v4);
  }
  SoundPlayerMenu__Init((SoundPlayerMenu_o *)gameObject, v4);
}