void SoundPlayerComponent___ctor(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SoundPlayerComponent__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  if ( (byte_596BCE1 & 1) == 0 )
  {
    sub_2213A60(&SoundPlayerComponent_TypeInfo);
    byte_596BCE1 = 1;
  }
  SoundPlayerComponent_TypeInfo->static_fields->isContinueDevice = 1;
}


void SoundPlayerComponent__DestroyMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596BCE7 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_596BCE7 = 1;
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
  AtlasManager__ReleaseMyRoomSoundAtlas(0);
}


void SoundPlayerComponent__InitPlaySoundData(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu )
    sub_2213CDC(0, method);
  SoundPlayerMenu__InitPlaySoundData(soundPlayerMenu, method);
}


void SoundPlayerComponent__LoginProcess(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *name_low; // x1
  System_Object_array *Entitys; // x20
  System_Collections_Generic_List_int__o *v4; // x19
  int max_length; // w8
  unsigned int v6; // w29
  Il2CppClass **v7; // x8
  Il2CppClass *v8; // x21
  __int64 v9; // x2
  int32_t element_class; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x21
  unsigned __int64 v17; // x22
  MissionNaviTransitionBoardItem_o *v18; // x23
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  SoundPlayerMenu_c *v28; // x8
  System_String_o *v29; // x19
  int32_t Item; // [xsp+4h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596BCE2 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_BgmReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SoundPlayerComponent_TypeInfo);
    sub_2213A60(&SoundPlayerMenu_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_869/*","*/);
    byte_596BCE2 = 1;
  }
  entity = 0;
  Item = 0;
  if ( SoundPlayerComponent_TypeInfo->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    DataManager__GetMasterData_object_(
      Instance,
      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_37;
    Entitys = DataMasterBase_object__object__int___getEntitys(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                (const MethodInfo_3F0FEAC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys__);
    v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v4,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !Entitys )
      goto LABEL_37;
    max_length = Entitys->max_length;
    if ( max_length >= 1 )
    {
      v6 = 0;
      while ( 1 )
      {
        if ( v6 >= max_length )
LABEL_38:
          sub_2213CE4(Instance);
        v7 = &Entitys->obj.klass + (int)v6;
        v8 = v7[4];
        if ( !v8 )
          goto LABEL_37;
        Instance = (DataManager_o *)BgmEntity__HasFlag((BgmEntity_o *)v7[4], 1, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          element_class = (int32_t)v8->_1.element_class;
          if ( !element_class )
            break;
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, name_low, v9);
          Instance = (DataManager_o *)CondType__IsPurchaseShop(element_class, 1, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            goto LABEL_21;
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_37;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
          if ( !Instance )
            goto LABEL_37;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        &entity,
                                        element_class,
                                        (const MethodInfo_3F10B80 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            break;
        }
LABEL_26:
        max_length = Entitys->max_length;
        if ( (int)++v6 >= max_length )
          goto LABEL_27;
      }
      Instance = (DataManager_o *)SoundPlayerListViewItem__isBgmLock((int32_t)v8->_1.name, name_low);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_26;
LABEL_21:
      if ( !v4 )
        goto LABEL_37;
      items = v4->fields._items;
      name_low = (const MethodInfo *)LODWORD(v8->_1.name);
      v12 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        goto LABEL_37;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          (int32_t)name_low,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = (int)name_low;
      }
      goto LABEL_26;
    }
LABEL_27:
    if ( !v4 )
LABEL_37:
      sub_2213CDC(Instance, name_low);
    v14 = (unsigned int)v4->fields._size;
    v15 = sub_2213B20(string___TypeInfo, (unsigned int)v14);
    v16 = v15;
    if ( (int)v14 >= 1 )
    {
      v17 = 0;
      v18 = (MissionNaviTransitionBoardItem_o *)(v15 + 32);
      do
      {
        Item = System_Collections_Generic_List_int___get_Item(
                 v4,
                 v17,
                 (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&Item, 0);
        if ( !v16 )
          goto LABEL_37;
        if ( v17 >= *(unsigned int *)(v16 + 24) )
          goto LABEL_38;
        v18->klass = (MissionNaviTransitionBoardItem_c *)Instance;
        sub_2213A04(v18, (int32_t)Instance, v19, v20, v21, v22, v23, v24);
        ++v17;
        v18 = (MissionNaviTransitionBoardItem_o *)((char *)v18 + 8);
      }
      while ( v14 != v17 );
    }
    v25 = System_String__Join((System_String_o *)StringLiteral_869/*","*/, (System_String_array *)v16, 0);
    v28 = SoundPlayerMenu_TypeInfo;
    v29 = v25;
    if ( !*(&SoundPlayerMenu_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo, v26, v27);
      v28 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v28->static_fields->SOUND_PLAYER_NEW_KEY, v29, 0);
    UnityEngine_PlayerPrefs__Save(0);
    SoundPlayerComponent_TypeInfo->static_fields->isContinueDevice = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void SoundPlayerComponent__SetEnableBlockTouch(SoundPlayerComponent_o *this, bool enable, const MethodInfo *method)
{
  struct SoundPlayerMenu_o *soundPlayerMenu; // x8

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu || (this = (SoundPlayerComponent_o *)soundPlayerMenu->fields.maskColl) == 0 )
    sub_2213CDC(this, enable);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, enable, 0);
}


void SoundPlayerComponent___openMenu_b__10_0(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_596BCEA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7273/*"GO_NEXT"*/);
    byte_596BCEA = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7273/*"GO_NEXT"*/, 0),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0) )
  {
    sub_2213CDC(myRoomFsm, method);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool SoundPlayerComponent__checkOpen(BgmReleaseEntity_o *releaseEntity, int32_t kind, const MethodInfo *method)
{
  BgmReleaseEntity_o *v4; // x20
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *targetIds; // x9
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v8; // x25
  struct System_Int32_array *v9; // x9
  unsigned __int64 v10; // x26
  int32_t v11; // w22
  unsigned __int64 max_length_low; // x9
  int64_t v13; // x23
  __int64 v14; // x2
  Il2CppObject *MasterData_object; // x24
  __int64 v17; // [xsp+8h] [xbp-68h]

  v4 = releaseEntity;
  if ( (byte_596BCE3 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    releaseEntity = (BgmReleaseEntity_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596BCE3 = 1;
  }
  if ( !v4 )
    goto LABEL_34;
  vals = v4->fields.vals;
  if ( vals )
  {
    targetIds = v4->fields.targetIds;
    if ( targetIds )
    {
      max_length = targetIds->max_length;
      if ( (int)max_length >= 1 )
      {
        v8 = 0;
        v17 = (unsigned int)max_length;
        while ( 1 )
        {
          v9 = v4->fields.targetIds;
          if ( !v9 )
            break;
          if ( v8 >= LODWORD(v9->max_length) )
LABEL_35:
            sub_2213CE4(releaseEntity);
          v10 = 0;
          v11 = v9->m_Items[v8];
          while ( 1 )
          {
            max_length_low = LODWORD(vals->max_length);
            if ( (__int64)v10 >= (int)max_length_low )
              break;
            if ( v10 >= max_length_low )
              goto LABEL_35;
            v13 = vals->m_Items[v10];
            if ( kind == 17 )
            {
              releaseEntity = (BgmReleaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !releaseEntity )
                goto LABEL_34;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)releaseEntity,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&kind, v14);
              if ( !byte_5969EF2 )
              {
                sub_2213A60(&NetworkManager_TypeInfo);
                byte_5969EF2 = 1;
              }
              releaseEntity = (BgmReleaseEntity_o *)NetworkManager_TypeInfo;
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&kind, v14);
                releaseEntity = (BgmReleaseEntity_o *)NetworkManager_TypeInfo;
              }
              if ( !MasterData_object )
                goto LABEL_34;
              releaseEntity = (BgmReleaseEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                      (UserServantCollectionMaster_o *)MasterData_object,
                                                      *(_QWORD *)(*(_QWORD *)&releaseEntity[3].fields.bgmId + 64LL),
                                                      v11,
                                                      0);
              if ( !releaseEntity )
                goto LABEL_34;
              releaseEntity = (BgmReleaseEntity_o *)UserServantCollectionEntity__IsPlayed(
                                                      (UserServantCollectionEntity_o *)releaseEntity,
                                                      v13,
                                                      0);
              if ( ((unsigned __int8)releaseEntity & 1) != 0 )
                goto LABEL_33;
            }
            else
            {
              if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&kind, method);
              releaseEntity = (BgmReleaseEntity_o *)CondType__IsOpen(kind, v11, v13, 0, 0, 0);
              if ( ((unsigned __int8)releaseEntity & 1) != 0 )
              {
LABEL_33:
                LOBYTE(releaseEntity) = 1;
                return (char)releaseEntity;
              }
            }
            vals = v4->fields.vals;
            ++v10;
            if ( !vals )
              goto LABEL_34;
          }
          ++v8;
          releaseEntity = 0;
          if ( v8 == v17 )
            return (char)releaseEntity;
        }
LABEL_34:
        sub_2213CDC(releaseEntity, *(_QWORD *)&kind);
      }
    }
  }
  LOBYTE(releaseEntity) = 0;
  return (char)releaseEntity;
}


bool SoundPlayerComponent__closeMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  BaseMenu_o *soundPlayerMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596BCE5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SoundPlayerComponent_onClose__);
    byte_596BCE5 = 1;
  }
  soundPlayerMenu = (BaseMenu_o *)this->fields.soundPlayerMenu;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SoundPlayerComponent_onClose__, 0);
  if ( !soundPlayerMenu )
    sub_2213CDC(v5, v6);
  BaseMenu__Close(soundPlayerMenu, v4, 0);
  return 1;
}


System_String_o *SoundPlayerComponent__getPlaySoundName(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  struct SoundPlayerMenu_o *soundPlayerMenu; // x8

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu )
    sub_2213CDC(this, method);
  return soundPlayerMenu->fields.playSoundName;
}


void SoundPlayerComponent__hideMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu
    || (SoundPlayerMenu__hideMenu(soundPlayerMenu, method),
        (soundPlayerMenu = (SoundPlayerMenu_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0)) == 0) )
  {
    sub_2213CDC(soundPlayerMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerMenu, 0, 0);
}


void SoundPlayerComponent__initMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_596BCE6 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_596BCE6 = 1;
  }
  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu
    || (SoundPlayerMenu__Init(soundPlayerMenu, method), (soundPlayerMenu = this->fields.soundPlayerMenu) == 0) )
  {
    sub_2213CDC(soundPlayerMenu, method);
  }
  SoundPlayerMenu__resetPlaySoundData(soundPlayerMenu, method);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4, v5);
  AtlasManager__LoadMyRoomSoundAtlas(0, 1, 0);
}


void SoundPlayerComponent__onClose(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_596BCE8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3656/*"CLOSE_MENU"*/);
    byte_596BCE8 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3656/*"CLOSE_MENU"*/, 0);
}


void SoundPlayerComponent__onEndMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_596BCE9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3661/*"CLOSE_SOUND_PLAYER"*/);
    byte_596BCE9 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3661/*"CLOSE_SOUND_PLAYER"*/, 0);
}


bool SoundPlayerComponent__openMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *titleInfo; // x0
  const MethodInfo *v5; // x1
  SoundPlayerMenu_o *soundPlayerMenu; // x20
  System_Action_o *v7; // x21
  System_Action_o *v8; // x22
  const MethodInfo *v9; // x3

  if ( (byte_596BCE4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SoundPlayerComponent__openMenu_b__10_0__);
    sub_2213A60(&Method_SoundPlayerComponent_onEndMenu__);
    byte_596BCE4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__ResetPosition(gameObject, 0);
  titleInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !titleInfo )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(titleInfo, 1, 0);
  titleInfo = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_8;
  TitleInfoControl__changeTitleInfo_46863248((TitleInfoControl_o *)titleInfo, 1, 55, 0, 0);
  titleInfo = (UnityEngine_GameObject_o *)this->fields.soundPlayerMenu;
  if ( !titleInfo
    || (SoundPlayerMenu__analyzeNewList((SoundPlayerMenu_o *)titleInfo, v5),
        soundPlayerMenu = this->fields.soundPlayerMenu,
        v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)this, Method_SoundPlayerComponent__openMenu_b__10_0__, 0),
        v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_SoundPlayerComponent_onEndMenu__, 0),
        !soundPlayerMenu) )
  {
LABEL_8:
    sub_2213CDC(titleInfo, v5);
  }
  SoundPlayerMenu__open(soundPlayerMenu, v7, v8, v9);
  return 1;
}


void SoundPlayerComponent__showMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.soundPlayerMenu) == 0) )
  {
    sub_2213CDC(gameObject, v4);
  }
  SoundPlayerMenu__Init((SoundPlayerMenu_o *)gameObject, v4);
}