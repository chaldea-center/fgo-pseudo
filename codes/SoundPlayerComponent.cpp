void __fastcall SoundPlayerComponent___ctor(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SoundPlayerComponent__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFD7F8 & 1) == 0 )
  {
    sub_1BC3008(&SoundPlayerComponent_TypeInfo, v1);
    byte_4AFD7F8 = 1;
  }
  SoundPlayerComponent_TypeInfo->static_fields->isContinueDevice = 1;
}


void __fastcall SoundPlayerComponent__DestroyMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4AFD7FE & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    byte_4AFD7FE = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseMyRoomSoundAtlas(0LL);
}


void __fastcall SoundPlayerComponent__InitPlaySoundData(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu )
    sub_1BC3264(0LL, method);
  SoundPlayerMenu__InitPlaySoundData(soundPlayerMenu, method);
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
  const MethodInfo *name_low; // x1
  System_Object_array *Entitys; // x20
  System_Collections_Generic_List_int__o *v20; // x19
  __int64 v21; // x2
  int max_length; // w8
  unsigned int v23; // w25
  Il2CppClass **v24; // x8
  Il2CppClass *v25; // x21
  int32_t element_class; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  __int64 v30; // x20
  __int64 v31; // x0
  System_String_array *v32; // x21
  unsigned __int64 v33; // x22
  CGThumbnailListItem_o *v34; // x23
  const MethodInfo *v35; // x3
  System_String_o *v36; // x0
  SoundPlayerMenu_c *v37; // x8
  System_String_o *v38; // x19
  int32_t Item; // [xsp+4h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AFD7F9 & 1) == 0 )
  {
    sub_1BC3008(&CondType_TypeInfo, v1);
    sub_1BC3008(&Method_DataManager_GetMasterData_BgmMaster___, v2);
    sub_1BC3008(&Method_DataManager_GetMasterData_BgmReleaseMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_1BC3008(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v5);
    sub_1BC3008(&Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BC3008(&SoundPlayerComponent_TypeInfo, v13);
    sub_1BC3008(&SoundPlayerMenu_TypeInfo, v14);
    sub_1BC3008(&string___TypeInfo, v15);
    sub_1BC3008(&StringLiteral_806/*","*/, v16);
    byte_4AFD7F9 = 1;
  }
  entity = 0LL;
  Item = 0;
  if ( SoundPlayerComponent_TypeInfo->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    DataManager__GetMasterData_object_(
      Instance,
      (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_37;
    Entitys = DataMasterBase_object__object__int___getEntitys(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                (const MethodInfo_32AE2F4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys__);
    v20 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v20,
      (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !Entitys )
      goto LABEL_37;
    max_length = Entitys->max_length;
    if ( max_length >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        if ( v23 >= max_length )
LABEL_38:
          sub_1BC326C(Instance, name_low, v21);
        v24 = &Entitys->obj.klass + (int)v23;
        v25 = v24[4];
        if ( !v25 )
          goto LABEL_37;
        Instance = (DataManager_o *)BgmEntity__HasFlag((BgmEntity_o *)v24[4], 1, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          element_class = (int32_t)v25->_1.element_class;
          if ( !element_class )
            break;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          Instance = (DataManager_o *)CondType__IsPurchaseShop(element_class, 1, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            goto LABEL_21;
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_37;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ShopMaster___);
          if ( !Instance )
            goto LABEL_37;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        &entity,
                                        element_class,
                                        (const MethodInfo_32AF0BC *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            break;
        }
LABEL_26:
        max_length = Entitys->max_length;
        if ( (int)++v23 >= max_length )
          goto LABEL_27;
      }
      Instance = (DataManager_o *)SoundPlayerListViewItem__isBgmLock((int32_t)v25->_1.name, name_low);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_26;
LABEL_21:
      if ( !v20 )
        goto LABEL_37;
      name_low = (const MethodInfo *)LODWORD(v25->_1.name);
      items = v20->fields._items;
      v28 = Method_System_Collections_Generic_List_int__Add__;
      ++v20->fields._version;
      if ( !items )
        goto LABEL_37;
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v20,
          (int32_t)name_low,
          *(const MethodInfo_3683E1C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v20->fields._size = size + 1;
        items->m_Items[size + 1] = (int)name_low;
      }
      goto LABEL_26;
    }
LABEL_27:
    if ( !v20 )
LABEL_37:
      sub_1BC3264(Instance, name_low);
    v30 = (unsigned int)v20->fields._size;
    v31 = sub_1BC30B0(string___TypeInfo, (unsigned int)v30);
    v32 = (System_String_array *)v31;
    if ( (int)v30 >= 1 )
    {
      v33 = 0LL;
      v34 = (CGThumbnailListItem_o *)(v31 + 32);
      do
      {
        Item = System_Collections_Generic_List_int___get_Item(
                 v20,
                 v33,
                 (const MethodInfo_3683B2C *)Method_System_Collections_Generic_List_int__get_Item__);
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&Item, 0LL);
        if ( !v32 )
          goto LABEL_37;
        if ( v33 >= v32->max_length )
          goto LABEL_38;
        v34->klass = (CGThumbnailListItem_c *)Instance;
        sub_1BC2FAC(v34, (int32_t)Instance, v21, v35);
        ++v33;
        v34 = (CGThumbnailListItem_o *)((char *)v34 + 8);
      }
      while ( v30 != v33 );
    }
    v36 = System_String__Join((System_String_o *)StringLiteral_806/*","*/, v32, 0LL);
    v37 = SoundPlayerMenu_TypeInfo;
    v38 = v36;
    if ( !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v37 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v37->static_fields->SOUND_PLAYER_NEW_KEY, v38, 0LL);
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
    sub_1BC3264(this, enable);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, enable, 0LL);
}


void __fastcall SoundPlayerComponent___openMenu_b__10_0(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4AFD801 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6921/*"GO_NEXT"*/, method);
    byte_4AFD801 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6921/*"GO_NEXT"*/, 0LL),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0LL) )
  {
    sub_1BC3264(myRoomFsm, method);
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
  if ( (byte_4AFD7FA & 1) == 0 )
  {
    sub_1BC3008(&CondType_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    releaseEntity = (BgmReleaseEntity_o *)sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4AFD7FA = 1;
  }
  if ( !v4 )
LABEL_31:
    sub_1BC3264(releaseEntity, *(_QWORD *)&kind);
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
    sub_1BC326C(releaseEntity, *(_QWORD *)&kind, method);
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
    releaseEntity = (BgmReleaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !releaseEntity )
      goto LABEL_31;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)releaseEntity,
                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4AFC1F1 )
    {
      sub_1BC3008(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
      byte_4AFC1F1 = 1;
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

  if ( (byte_4AFD7FC & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_SoundPlayerComponent_onClose__, v3);
    byte_4AFD7FC = 1;
  }
  soundPlayerMenu = (BaseMenu_o *)this->fields.soundPlayerMenu;
  v5 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SoundPlayerComponent_onClose__, 0LL);
  if ( !soundPlayerMenu )
    sub_1BC3264(v6, v7);
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
    sub_1BC3264(this, method);
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
    sub_1BC3264(soundPlayerMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerMenu, 0, 0LL);
}


void __fastcall SoundPlayerComponent__initMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0

  if ( (byte_4AFD7FD & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    byte_4AFD7FD = 1;
  }
  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu
    || (SoundPlayerMenu__Init(soundPlayerMenu, method), (soundPlayerMenu = this->fields.soundPlayerMenu) == 0LL) )
  {
    sub_1BC3264(soundPlayerMenu, method);
  }
  SoundPlayerMenu__resetPlaySoundData(soundPlayerMenu, method);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadMyRoomSoundAtlas(0LL, 1, 0LL);
}


void __fastcall SoundPlayerComponent__onClose(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4AFD7FF & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_3477/*"CLOSE_MENU"*/, method);
    byte_4AFD7FF = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BC3264(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3477/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall SoundPlayerComponent__onEndMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4AFD800 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_3482/*"CLOSE_SOUND_PLAYER"*/, method);
    byte_4AFD800 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BC3264(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3482/*"CLOSE_SOUND_PLAYER"*/, 0LL);
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

  if ( (byte_4AFD7FB & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_SoundPlayerComponent__openMenu_b__10_0__, v3);
    sub_1BC3008(&Method_SoundPlayerComponent_onEndMenu__, v4);
    byte_4AFD7FB = 1;
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
  TitleInfoControl__changeTitleInfo_38910764((TitleInfoControl_o *)titleInfo, 1, 54, 0, 0LL);
  titleInfo = (UnityEngine_GameObject_o *)this->fields.soundPlayerMenu;
  if ( !titleInfo
    || (SoundPlayerMenu__analyzeNewList((SoundPlayerMenu_o *)titleInfo, v7),
        soundPlayerMenu = this->fields.soundPlayerMenu,
        v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_SoundPlayerComponent__openMenu_b__10_0__, 0LL),
        v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_SoundPlayerComponent_onEndMenu__, 0LL),
        !soundPlayerMenu) )
  {
LABEL_8:
    sub_1BC3264(titleInfo, v7);
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
    sub_1BC3264(gameObject, v4);
  }
  SoundPlayerMenu__Init((SoundPlayerMenu_o *)gameObject, v4);
}