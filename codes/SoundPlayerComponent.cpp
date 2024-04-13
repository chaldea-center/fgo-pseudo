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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  SoundPlayerComponent_c *v4; // x0

  if ( (byte_42E797B & 1) == 0 )
  {
    sub_B5D5C4(&SoundPlayerComponent_TypeInfo, v1, v2, v3);
    byte_42E797B = 1;
  }
  v4 = SoundPlayerComponent_TypeInfo;
  if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
    v4 = SoundPlayerComponent_TypeInfo;
  }
  v4->static_fields->isContinueDevice = 1;
}


void __fastcall SoundPlayerComponent__DestroyMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7981 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7981 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseMyRoomSoundAtlas(0LL);
}


void __fastcall SoundPlayerComponent__LoginProcess(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  SoundPlayerComponent_c *v49; // x0
  DataManager_o *Instance; // x0
  const MethodInfo *v51; // x1
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x20
  System_Collections_Generic_List_int__o *v53; // x19
  int max_length; // w8
  int i; // w25
  Il2CppClass **v56; // x8
  Il2CppClass *v57; // x21
  int32_t element_class; // w22
  int size; // w21
  __int64 v60; // x0
  System_String_array *v61; // x20
  unsigned __int64 v62; // x23
  signed __int64 v63; // x24
  BattleServantConfConponent_o *v64; // x21
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x22
  System_String_o *v72; // x19
  SoundPlayerMenu_c *v73; // x8
  SoundPlayerComponent_c *v74; // x0
  __int64 v75; // x0
  __int64 v76; // x0
  int32_t v77; // [xsp+4h] [xbp-5Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E797C & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BgmMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BgmReleaseMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_BgmEntity___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v28, v29, v30);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&SoundPlayerComponent_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&SoundPlayerMenu_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&string___TypeInfo, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_707/*","*/, v46, v47, v48);
    byte_42E797C = 1;
  }
  entity = 0LL;
  v77 = 0;
  v49 = SoundPlayerComponent_TypeInfo;
  if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
    v49 = SoundPlayerComponent_TypeInfo;
  }
  if ( v49->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      Instance,
      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_46;
    Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                        (DataMasterBase_o *)Instance,
                                        (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_BgmEntity___);
    v53 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v53,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
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
          v75 = sub_B5D6C8(Instance);
          sub_B5D668(v75, 0LL);
        }
        v56 = &Entitys_WarQuestSelectionEntity->obj.klass + i;
        v57 = v56[4];
        if ( !v57 )
          goto LABEL_46;
        Instance = (DataManager_o *)BgmEntity__HasFlag((BgmEntity_o *)v56[4], 1, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          element_class = (int32_t)v57->_1.element_class;
          if ( !element_class )
            goto LABEL_24;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          Instance = (DataManager_o *)CondType__IsPurchaseShop(element_class, 1, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
LABEL_25:
            if ( !v53 )
              goto LABEL_46;
            System_Collections_Generic_List_int___Add(
              v53,
              (int32_t)v57->_1.name,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            goto LABEL_27;
          }
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_46;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
          if ( !Instance )
            goto LABEL_46;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        &entity,
                                        element_class,
                                        (const MethodInfo_23FAE6C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
LABEL_24:
            Instance = (DataManager_o *)SoundPlayerListViewItem__isBgmLock((int32_t)v57->_1.name, v51);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_25;
          }
        }
LABEL_27:
        max_length = Entitys_WarQuestSelectionEntity->max_length;
      }
    }
    if ( !v53 )
LABEL_46:
      sub_B5D69C(Instance, v51);
    size = v53->fields._size;
    v60 = sub_B5D5DC(string___TypeInfo, (unsigned int)size);
    v61 = (System_String_array *)v60;
    if ( size >= 1 )
    {
      v62 = 0LL;
      v63 = size;
      v64 = (BattleServantConfConponent_o *)(v60 + 32);
      do
      {
        if ( v62 >= (unsigned int)v53->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v77 = v53->fields._items->m_Items[v62 + 1];
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v77, 0LL);
        if ( !v61 )
          goto LABEL_46;
        v71 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = (DataManager_o *)sub_B5D684(Instance, v61->obj.klass->_1.element_class);
          if ( !Instance )
          {
            v76 = sub_B5D6BC();
            sub_B5D668(v76, 0LL);
          }
        }
        if ( v62 >= v61->max_length )
          goto LABEL_47;
        v64->klass = (BattleServantConfConponent_c *)v71;
        sub_B5D560(v64, v71, v65, v66, v67, v68, v69, v70);
        ++v62;
        v64 = (BattleServantConfConponent_o *)((char *)v64 + 8);
      }
      while ( (__int64)v62 < v63 );
    }
    v72 = System_String__Join((System_String_o *)StringLiteral_707/*","*/, v61, 0LL);
    v73 = SoundPlayerMenu_TypeInfo;
    if ( (BYTE3(SoundPlayerMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v73 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v73->static_fields->SOUND_PLAYER_NEW_KEY, v72, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    v74 = SoundPlayerComponent_TypeInfo;
    if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
      v74 = SoundPlayerComponent_TypeInfo;
    }
    v74->static_fields->isContinueDevice = 0;
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
    sub_B5D69C(this, enable);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, enable, 0LL);
}


void __fastcall SoundPlayerComponent___openMenu_b__10_0(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E7984 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, (_DWORD)method, v2, v3);
    byte_42E7984 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/, 0LL),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0LL) )
  {
    sub_B5D69C(myRoomFsm, method);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SoundPlayerComponent__checkOpen(
        BgmReleaseEntity_o *releaseEntity,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BgmReleaseEntity_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *targetIds; // x9
  __int64 v17; // x10
  unsigned __int64 v18; // x24
  int32_t v19; // w21
  unsigned __int64 v20; // x26
  unsigned __int64 max_length; // x9
  int64_t v22; // x22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v25; // x0
  signed __int64 v26; // [xsp+8h] [xbp-58h]

  v5 = releaseEntity;
  if ( (byte_42E797D & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, kind, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    releaseEntity = (BgmReleaseEntity_o *)sub_B5D5C4(
                                            &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                            v12,
                                            v13,
                                            v14);
    byte_42E797D = 1;
  }
  if ( !v5 )
LABEL_29:
    sub_B5D69C(releaseEntity, *(_QWORD *)&kind);
  vals = v5->fields.vals;
  if ( !vals )
    return 0;
  targetIds = v5->fields.targetIds;
  if ( !targetIds )
    return 0;
  v17 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v17 < 1 )
    return 0;
  v26 = (int)v17;
  v18 = 0LL;
LABEL_8:
  if ( v18 >= targetIds->max_length )
  {
LABEL_32:
    v25 = sub_B5D6C8(releaseEntity);
    sub_B5D668(v25, 0LL);
  }
  v19 = targetIds->m_Items[v18 + 1];
  v20 = 0LL;
  while ( 1 )
  {
    max_length = vals->max_length;
    if ( (__int64)v20 >= (int)max_length )
    {
      if ( (__int64)++v18 >= v26 )
        return 0;
      targetIds = v5->fields.targetIds;
      if ( !targetIds )
        goto LABEL_29;
      goto LABEL_8;
    }
    if ( v20 >= max_length )
      goto LABEL_32;
    v22 = vals->m_Items[v20 + 1];
    if ( kind != 17 )
      break;
    releaseEntity = (BgmReleaseEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !releaseEntity )
      goto LABEL_29;
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)releaseEntity,
                                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
                                            v19,
                                            0LL);
    if ( !releaseEntity )
      goto LABEL_29;
    releaseEntity = (BgmReleaseEntity_o *)UserServantCollectionEntity__IsPlayed(
                                            (UserServantCollectionEntity_o *)releaseEntity,
                                            v22,
                                            0LL);
    if ( ((unsigned __int8)releaseEntity & 1) != 0 )
      return 1;
LABEL_25:
    vals = v5->fields.vals;
    ++v20;
    if ( !vals )
      goto LABEL_29;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  releaseEntity = (BgmReleaseEntity_o *)CondType__IsOpen(kind, v19, v22, 0, 0LL);
  if ( ((unsigned __int8)releaseEntity & 1) == 0 )
    goto LABEL_25;
  return 1;
}


bool __fastcall SoundPlayerComponent__closeMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BaseMenu_o *soundPlayerMenu; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E797F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SoundPlayerComponent_onClose__, v5, v6, v7);
    byte_42E797F = 1;
  }
  soundPlayerMenu = (BaseMenu_o *)this->fields.soundPlayerMenu;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SoundPlayerComponent_onClose__, 0LL);
  if ( !soundPlayerMenu )
    sub_B5D69C(v10, v11);
  BaseMenu__Close(soundPlayerMenu, v9, 0LL);
  return 1;
}


System_String_o *__fastcall SoundPlayerComponent__getPlaySoundName(
        SoundPlayerComponent_o *this,
        const MethodInfo *method)
{
  struct SoundPlayerMenu_o *soundPlayerMenu; // x8

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu )
    sub_B5D69C(this, method);
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
    sub_B5D69C(soundPlayerMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerMenu, 0, 0LL);
}


void __fastcall SoundPlayerComponent__initMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SoundPlayerMenu_o *soundPlayerMenu; // x0

  if ( (byte_42E7980 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7980 = 1;
  }
  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu
    || (SoundPlayerMenu__Init(soundPlayerMenu, method), (soundPlayerMenu = this->fields.soundPlayerMenu) == 0LL) )
  {
    sub_B5D69C(soundPlayerMenu, method);
  }
  SoundPlayerMenu__resetPlaySoundData(soundPlayerMenu, method);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadMyRoomSoundAtlas(0LL, 1, 0LL);
}


void __fastcall SoundPlayerComponent__onClose(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E7982 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3168/*"CLOSE_MENU"*/, (_DWORD)method, v2, v3);
    byte_42E7982 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3168/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall SoundPlayerComponent__onEndMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E7983 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3173/*"CLOSE_SOUND_PLAYER"*/, (_DWORD)method, v2, v3);
    byte_42E7983 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3173/*"CLOSE_SOUND_PLAYER"*/, 0LL);
}


bool __fastcall SoundPlayerComponent__openMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *titleInfo; // x0
  const MethodInfo *v13; // x1
  SoundPlayerMenu_o *soundPlayerMenu; // x20
  System_Action_o *v15; // x21
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x3

  if ( (byte_42E797E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SoundPlayerComponent__openMenu_b__10_0__, v5, v6, v7);
    sub_B5D5C4(&Method_SoundPlayerComponent_onEndMenu__, v8, v9, v10);
    byte_42E797E = 1;
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
  TitleInfoControl__changeTitleInfo_18299236((TitleInfoControl_o *)titleInfo, 1, 51, 0, 0LL);
  titleInfo = (UnityEngine_GameObject_o *)this->fields.soundPlayerMenu;
  if ( !titleInfo
    || (SoundPlayerMenu__analyzeNewList((SoundPlayerMenu_o *)titleInfo, v13),
        soundPlayerMenu = this->fields.soundPlayerMenu,
        v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v15, (Il2CppObject *)this, Method_SoundPlayerComponent__openMenu_b__10_0__, 0LL),
        v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v16, (Il2CppObject *)this, Method_SoundPlayerComponent_onEndMenu__, 0LL),
        !soundPlayerMenu) )
  {
LABEL_8:
    sub_B5D69C(titleInfo, v13);
  }
  SoundPlayerMenu__open(soundPlayerMenu, v15, v16, v17);
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
    sub_B5D69C(gameObject, v4);
  }
  SoundPlayerMenu__Init((SoundPlayerMenu_o *)gameObject, v4);
}