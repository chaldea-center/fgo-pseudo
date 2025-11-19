void SkillUpResultWindowComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4CBA466 & 1) == 0 )
  {
    sub_1C6BA08(&SkillUpResultWindowComponent_TypeInfo);
    byte_4CBA466 = 1;
  }
  *SkillUpResultWindowComponent_TypeInfo->static_fields = (struct SkillUpResultWindowComponent_StaticFields)xmmword_CED0E0;
}


void SkillUpResultWindowComponent___ctor(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CBA465 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CBA465 = 1;
  }
  this->fields.svtTransformCount = 1;
  *(_QWORD *)&this->fields.skillInfoOffset = 0x40C00000C1700000LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SkillUpResultWindowComponent__Close(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x0
  System_Action_o *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4CBA45E & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SkillUpResultWindowComponent_EndClose__);
    byte_4CBA45E = 1;
  }
  v3 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0);
  SkillUpResultWindowComponent__Close_48988992(this, v4, v5);
}


void SkillUpResultWindowComponent__CloseToNext(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4CBA460 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SkillUpResultWindowComponent___c__DisplayClass104_0__CloseToNext_b__0__);
    sub_1C6BA08(&SkillUpResultWindowComponent___c__DisplayClass104_0_TypeInfo);
    byte_4CBA460 = 1;
  }
  v5 = sub_1C6BC54(SkillUpResultWindowComponent___c__DisplayClass104_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v8, v9);
  v10 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)v5,
    Method_SkillUpResultWindowComponent___c__DisplayClass104_0__CloseToNext_b__0__,
    0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v10, 0);
}


void SkillUpResultWindowComponent__Close_48988992(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_4CBA45F & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SkillUpResultWindowComponent_EndClose__);
    byte_4CBA45F = 1;
  }
  v4 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void SkillUpResultWindowComponent__EndClose(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  SkillUpResultWindowComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        SkillUpResultWindowComponent__SetChildrenActive(this, 0, v5),
        (gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0)) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
    sub_1C6BC60(gameObject, v4);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void SkillUpResultWindowComponent__EndOpen(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *openCallBack; // x19
  CGThumbnailListItem_o *p_openCallBack; // x0

  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    p_openCallBack = (CGThumbnailListItem_o *)&this->fields.openCallBack;
    p_openCallBack->klass = 0;
    sub_1C6B9AC(p_openCallBack, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))openCallBack->fields.invoke_impl)(
      openCallBack->fields.method_code,
      openCallBack->fields.method);
  }
}


ServantSkillEntity_o *SkillUpResultWindowComponent__GetServantSkillEntity(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4CBA462 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA462 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantSkillMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v9);
  }
  return ServantSkillMaster__getEntityFromSkillId((ServantSkillMaster_o *)Instance, svtId, num, skillId, 0);
}


SkillEntity_o *SkillUpResultWindowComponent__GetSkillEntity(
        SkillUpResultWindowComponent_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CBA461 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C6BA08(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA461 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v5);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    skillId,
    (const MethodInfo_33F9128 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  return (SkillEntity_o *)entity;
}


void SkillUpResultWindowComponent__Init(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SkillUpResultWindowComponent__OpenCostumeChangeMessage(
        SkillUpResultWindowComponent_o *this,
        System_String_o *costumeName,
        System_String_o *formatKey,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  UILabel_o *costumeChangeLabel; // x23
  System_String_o *v16; // x0

  if ( (byte_4CBA464 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__);
    byte_4CBA464 = 1;
  }
  v9 = Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C6BA20(Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetupWindowBg(this, v13);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v14);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.costumeChangeInfo, 0);
  if ( !gameObject )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.costumeChangeInfo;
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get(formatKey, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v16, (Il2CppObject *)costumeName, 0);
  if ( !costumeChangeLabel )
LABEL_13:
    sub_1C6BC60(gameObject, v12);
  UILabel__set_text(costumeChangeLabel, (System_String_o *)gameObject, 0);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t oldFriendShipRank,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Text_StringBuilder_o *v16; // x20
  int32_t SvtId; // w22
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  System_Collections_Generic_List_object__o *v20; // x0
  Il2CppObject *current; // x23
  System_String_o *v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v26; // x0
  int32_t v27; // w23
  UILabel_o *friendshipLabel; // x22
  UnityEngine_GameObject_o *v29; // x20
  UILabel_o *friendshipCurrentLvLabel; // x20
  UILabel_o *friendshipResultLvLabel; // x20
  UIWidget_o *v32; // x20
  SkillUpResultWindowComponent_c *v33; // x8
  struct UILabel_o *v34; // x8
  System_Action_o *v35; // x20
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+0h] [xbp-90h] BYREF
  int32_t FriendShipRank; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-70h] BYREF
  int32_t oldFriendShipRanka; // [xsp+3Ch] [xbp-54h] BYREF

  oldFriendShipRanka = oldFriendShipRank;
  if ( (byte_4CBA45A & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C6BA08(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_1C6BA08(&Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__);
    sub_1C6BA08(&SkillUpResultWindowComponent_TypeInfo);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&StringLiteral_11110/*"RESULT_BOUNDS_OPENQUEST"*/);
    sub_1C6BA08(&StringLiteral_11112/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/);
    sub_1C6BA08(&StringLiteral_11105/*"RESULT_BOUNDS_GETVOICE"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CBA45A = 1;
  }
  memset(&v38, 0, sizeof(v38));
  FriendShipRank = 0;
  if ( !this->fields.state )
  {
    v9 = Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C6BA20(Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v13);
      gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0);
      if ( gameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          gameObject = this->fields.friendshipInfo;
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0);
            this->fields.openCallBack = callback;
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v14, v15);
            gameObject = (UnityEngine_GameObject_o *)this->fields.friendshipLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
              v16 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v16, 0);
              if ( usrSvtData )
              {
                SvtId = UserServantEntity__getSvtId(usrSvtData, 0);
                gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  MasterData_object = DataManager__GetMasterData_object_(
                                        (DataManager_o *)gameObject,
                                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4CB002A )
                  {
                    sub_1C6BA08(&NetworkManager_TypeInfo);
                    byte_4CB002A = 1;
                  }
                  gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                  }
                  if ( MasterData_object )
                  {
                    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                         (UserServantCollectionMaster_o *)MasterData_object,
                                         *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 64),
                                         SvtId,
                                         0);
                    gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                    if ( gameObject )
                    {
                      v20 = (System_Collections_Generic_List_object__o *)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                                                                           (clsQuestCheck_o *)gameObject,
                                                                           SvtId,
                                                                           oldFriendShipRank,
                                                                           8,
                                                                           0);
                      if ( v20 )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v36,
                          v20,
                          (const MethodInfo_380146C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
                        v38 = v36;
                        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v38,
                                  (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
                        {
                          current = v38.fields._current;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11110/*"RESULT_BOUNDS_OPENQUEST"*/, 0);
                          if ( !current )
                            sub_1C6BC60(v22, v23);
                          v24 = v22;
                          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0);
                          v26 = System_String__Format(v24, QuestName, 0);
                          if ( !v16 )
                            sub_1C6BC60(v26, v26);
                          System_Text_StringBuilder__AppendLine_64051976(v16, v26, 0);
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v38,
                          (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
                      }
                      v27 = oldFriendShipRanka;
                      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                      gameObject = (UnityEngine_GameObject_o *)ServantCommentManager__IsOpenByServantFriendShip(
                                                                 SvtId,
                                                                 v27,
                                                                 0);
                      if ( ((unsigned __int8)gameObject & 1) != 0 )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_11112/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/,
                                                                   0);
                        if ( !v16 )
                          goto LABEL_60;
                        gameObject = (UnityEngine_GameObject_o *)System_Text_StringBuilder__AppendLine_64051976(
                                                                   v16,
                                                                   (System_String_o *)gameObject,
                                                                   0);
                      }
                      if ( !EntityDefinitely )
                        goto LABEL_60;
                      gameObject = (UnityEngine_GameObject_o *)ServantVoiceMaster__isOpenByServantFriendShip(
                                                                 SvtId,
                                                                 EntityDefinitely->fields.maxLimitCount,
                                                                 oldFriendShipRanka,
                                                                 0);
                      if ( ((unsigned __int8)gameObject & 1) != 0 )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_11105/*"RESULT_BOUNDS_GETVOICE"*/,
                                                                   0);
                        if ( !v16 )
                          goto LABEL_60;
                        System_Text_StringBuilder__AppendLine_64051976(v16, (System_String_o *)gameObject, 0);
                      }
                      else if ( !v16 )
                      {
                        goto LABEL_60;
                      }
                      friendshipLabel = this->fields.friendshipLabel;
                      gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v16->klass->vtable._3_ToString.methodPtr)(
                                                                 v16,
                                                                 v16->klass->vtable._3_ToString.method);
                      if ( friendshipLabel )
                      {
                        UILabel__set_text(friendshipLabel, (System_String_o *)gameObject, 0);
                        gameObject = this->fields.friendshipLvInfo;
                        if ( gameObject )
                        {
                          v29 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
                          gameObject = (UnityEngine_GameObject_o *)UserServantCollectionEntity__getFriendShipRank(
                                                                     EntityDefinitely,
                                                                     0);
                          if ( v29 )
                          {
                            UnityEngine_GameObject__SetActive(v29, (int)gameObject > oldFriendShipRanka, 0);
                            friendshipCurrentLvLabel = this->fields.friendshipCurrentLvLabel;
                            gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                       (int32_t)&oldFriendShipRanka,
                                                                       0);
                            if ( friendshipCurrentLvLabel )
                            {
                              UILabel__set_text(friendshipCurrentLvLabel, (System_String_o *)gameObject, 0);
                              friendshipResultLvLabel = this->fields.friendshipResultLvLabel;
                              FriendShipRank = UserServantCollectionEntity__getFriendShipRank(EntityDefinitely, 0);
                              gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                         (int32_t)&FriendShipRank,
                                                                         0);
                              if ( friendshipResultLvLabel )
                              {
                                UILabel__set_text(friendshipResultLvLabel, (System_String_o *)gameObject, 0);
                                gameObject = (UnityEngine_GameObject_o *)this->fields.friendshipResultLvLabel;
                                if ( gameObject )
                                {
                                  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                             (UnityEngine_Component_o *)gameObject,
                                                                             (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
                                  v32 = (UIWidget_o *)gameObject;
                                  v33 = SkillUpResultWindowComponent_TypeInfo;
                                  if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
                                    v33 = SkillUpResultWindowComponent_TypeInfo;
                                  }
                                  if ( v32 )
                                  {
                                    UIWidget__set_color(v32, v33->static_fields->COLOR_VAL, 0);
                                    v34 = this->fields.friendshipLabel;
                                    if ( v34 )
                                    {
                                      if ( !System_String__IsNullOrEmpty(v34->fields.mText, 0) )
                                      {
LABEL_58:
                                        v35 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v35,
                                          (Il2CppObject *)this,
                                          Method_SkillUpResultWindowComponent_EndOpen__,
                                          0);
                                        BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0, 0);
                                        return;
                                      }
                                      gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(
                                                                                 this->fields.friendshipInfo,
                                                                                 0);
                                      if ( gameObject )
                                      {
                                        gameObject = UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)gameObject,
                                                       0);
                                        if ( gameObject )
                                        {
                                          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                                          goto LABEL_58;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_60:
    sub_1C6BC60(gameObject, v12);
  }
}


void SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *addManager,
        int32_t index,
        System_String_o *titleText,
        bool isRankUp,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x6

  if ( (byte_4CBA457 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__);
    byte_4CBA457 = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C6BA20(Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v17);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfo;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfoAddRoot;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfoNormalRoot;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = this->fields.npInfoHeroineNpChangeRoot;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.npInfoNpChangeRoot) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.npInfoNpChangeRoot) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.npInfoAddResultComponent) == 0) )
  {
LABEL_16:
    sub_1C6BC60(gameObject, v16);
  }
  NpInfoAddResultComponent__SetDisplay(
    (NpInfoAddResultComponent_o *)gameObject,
    addManager,
    index,
    titleText,
    isRankUp,
    this->fields.svtTransformCount,
    v18);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenNpUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        int32_t oldTargetId,
        int32_t oldTargetLv,
        int32_t nowTargetId,
        int32_t nowTargetLv,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3

  if ( (byte_4CBA455 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__);
    byte_4CBA455 = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C6BA20(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v17);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfo;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfoNormalRoot;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = this->fields.npInfoHeroineNpChangeRoot;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfoNpChangeRoot;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.npInfoAddRoot) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld) == 0)
    || (HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, oldTargetId, oldTargetLv, v18),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow) == 0) )
  {
LABEL_16:
    sub_1C6BC60(gameObject, v16);
  }
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, v19);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenNpUpResultInfo_48982440(
        SkillUpResultWindowComponent_o *this,
        int32_t oldTargetId,
        int32_t oldTargetLv,
        int32_t nowTargetId,
        int32_t nowTargetLv,
        int32_t exTargetId,
        int32_t exTargetLv,
        System_Action_o *callback,
        ServantCostumeEntity_o *svtCostumeEnt,
        const MethodInfo *method)
{
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *heroineNpChangeInfoExtra; // x23
  const MethodInfo *v28; // x3

  if ( (byte_4CBA456 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78675784);
    byte_4CBA456 = 1;
  }
  v18 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78675784;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78675784 + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1C6BA20(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78675784);
  v19 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetupWindowBg(this, v22);
  SkillUpResultWindowComponent__SetupSpecialNpChange(this, svtCostumeEnt, v23);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v24);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfo;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfoNormalRoot;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = this->fields.npInfoHeroineNpChangeRoot;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfoNpChangeRoot;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = this->fields.npInfoAddRoot;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld;
  if ( !gameObject )
    goto LABEL_23;
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, oldTargetId, oldTargetLv, v25);
  gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow;
  if ( !gameObject )
    goto LABEL_23;
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, v26);
  if ( exTargetId >= 1 && this->fields.isSpecialEffect )
  {
    heroineNpChangeInfoExtra = (UnityEngine_Object_o *)this->fields.heroineNpChangeInfoExtra;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(heroineNpChangeInfoExtra, 0, 0) )
    {
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.heroineNpChangeInfoExtra, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoExtra;
      if ( gameObject )
      {
        HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, exTargetId, exTargetLv, v28);
        goto LABEL_22;
      }
LABEL_23:
      sub_1C6BC60(gameObject, v21);
    }
  }
LABEL_22:
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenNpUpResultInfo_48984000(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t targetId,
        int32_t targetLv,
        System_Action_o *callback,
        int32_t targetIdOld,
        int32_t targetLvOld,
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *addManager,
        int32_t kind,
        const MethodInfo *method)
{
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  _BOOL4 v25; // w26
  _BOOL4 v26; // w27
  _BOOL4 IsHeroine; // w28
  _BOOL4 v28; // w20
  int v29; // w27
  _BOOL4 v30; // w28
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x7
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  struct System_String_array *titles; // x8
  System_String_o *titleText; // x21
  const MethodInfo *v38; // x6
  System_Action_o *v39; // x20
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v40; // [xsp+0h] [xbp-70h]
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CBA458 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C6BA08(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_1C6BA08(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78675792);
    byte_4CBA458 = 1;
  }
  transformInfo = 0;
  if ( !this->fields.state )
  {
    v18 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78675792;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78675792 + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C6BA20(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78675792);
    v19 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v22);
      gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0);
      if ( gameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          gameObject = this->fields.npInfo;
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0);
            this->fields.openCallBack = callback;
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v23, v24);
            if ( usrSvtData )
            {
              gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformCount(usrSvtData, 1, 0);
              this->fields.svtTransformCount = (int)gameObject;
              if ( addManager )
              {
                v40 = addManager;
                v25 = addManager->fields._tdAddEntity_k__BackingField != 0;
                v26 = (int)gameObject > 1;
                IsHeroine = UserServantEntity__IsHeroine(usrSvtData, 0);
                v28 = targetIdOld != targetId;
                if ( targetIdOld == targetId && UserServantEntity__IsHeroine(usrSvtData, 0) )
                  targetIdOld = 0;
                gameObject = this->fields.npInfoAddRoot;
                if ( gameObject )
                {
                  v29 = v26 || v25;
                  UnityEngine_GameObject__SetActive(gameObject, v29, 0);
                  gameObject = this->fields.npInfoNormalRoot;
                  if ( gameObject )
                  {
                    v30 = targetLvOld != targetLv && IsHeroine && v28;
                    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)(v30 | (kind == 18) | v29) != 1, 0);
                    gameObject = this->fields.npInfoHeroineNpChangeRoot;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, v30, 0);
                      gameObject = this->fields.npInfoNpChangeRoot;
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive(gameObject, kind == 18, 0);
                        if ( v30 )
                        {
                          gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld;
                          if ( gameObject )
                          {
                            HeroineNpChangeInfoComponent__Setup(
                              (HeroineNpChangeInfoComponent_o *)gameObject,
                              targetIdOld,
                              targetLvOld,
                              v31);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow;
                            if ( gameObject )
                            {
                              HeroineNpChangeInfoComponent__Setup(
                                (HeroineNpChangeInfoComponent_o *)gameObject,
                                targetId,
                                targetLv,
                                v33);
LABEL_41:
                              v39 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                              System_Action___ctor(
                                v39,
                                (Il2CppObject *)this,
                                Method_SkillUpResultWindowComponent_EndOpen__,
                                0);
                              BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0, 0);
                              return;
                            }
                          }
                        }
                        else if ( kind == 18 )
                        {
                          gameObject = (UnityEngine_GameObject_o *)this->fields.npChangeInfoOld;
                          if ( gameObject )
                          {
                            HeroineNpChangeInfoComponent__SetupForNpChange(
                              (HeroineNpChangeInfoComponent_o *)gameObject,
                              targetIdOld,
                              targetLvOld,
                              v31);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.npChangeInfoNow;
                            if ( gameObject )
                            {
                              HeroineNpChangeInfoComponent__SetupForNpChange(
                                (HeroineNpChangeInfoComponent_o *)gameObject,
                                targetId,
                                targetLv,
                                v34);
                              goto LABEL_41;
                            }
                          }
                        }
                        else
                        {
                          if ( !v29 )
                          {
                            SkillUpResultWindowComponent__SetupNpUpResultInfoNormal(
                              this,
                              usrSvtData,
                              targetId,
                              targetLv,
                              targetIdOld,
                              targetLvOld,
                              kind,
                              v32);
                            goto LABEL_41;
                          }
                          gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(
                                                                     this->fields.npInfo,
                                                                     0);
                          if ( gameObject )
                          {
                            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                            if ( gameObject )
                            {
                              gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                         gameObject,
                                                                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( gameObject )
                              {
                                UIWidget__set_height((UIWidget_o *)gameObject, 300, 0);
                                gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformedServantInfo(
                                                                           usrSvtData,
                                                                           &transformInfo,
                                                                           0,
                                                                           0);
                                tdAddEntity_k__BackingField = v40->fields._tdAddEntity_k__BackingField;
                                if ( !tdAddEntity_k__BackingField )
                                  goto LABEL_35;
                                titles = tdAddEntity_k__BackingField->fields.titles;
                                if ( !titles )
                                  goto LABEL_35;
                                if ( !LODWORD(titles->max_length) )
                                  sub_1C6BC68(gameObject);
                                titleText = titles->m_Items[0];
                                if ( !titleText )
                                {
LABEL_35:
                                  if ( !transformInfo )
                                    goto LABEL_43;
                                  titleText = transformInfo->fields.titleText;
                                }
                                gameObject = (UnityEngine_GameObject_o *)this->fields.windowBgSprite;
                                if ( gameObject )
                                {
                                  UIWidget__set_height((UIWidget_o *)gameObject, 300, 0);
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.npInfoAddResultComponent;
                                  if ( gameObject )
                                  {
                                    NpInfoAddResultComponent__SetDisplay(
                                      (NpInfoAddResultComponent_o *)gameObject,
                                      v40,
                                      0,
                                      titleText,
                                      kind == 8,
                                      this->fields.svtTransformCount,
                                      v38);
                                    goto LABEL_41;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_43:
    sub_1C6BC60(gameObject, v21);
  }
}


void SkillUpResultWindowComponent__OpenPowerUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  __int64 v15; // x20
  __int64 v16; // x22
  Il2CppObject *Entity; // x0
  UILabel_o *powerupLabel; // x20
  Il2CppObject *v19; // x21
  System_Action_o *v20; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4CBA45B & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_1C6BA08(&Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__);
    sub_1C6BA08(&StringLiteral_11111/*"RESULT_BOUNDS_POWERUP"*/);
    byte_4CBA45B = 1;
  }
  if ( !this->fields.state )
  {
    v7 = Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C6BA20(Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    SkillUpResultWindowComponent__SetChildrenActive(this, 0, v11);
    gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = this->fields.powerupInfo;
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    this->fields.openCallBack = callback;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v12, v13);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !usrSvtData )
      goto LABEL_20;
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    v16 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v16;
    *(_QWORD *)&v21.fields.fakeValue = v15;
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v21, 0);
    if ( !v14 )
      goto LABEL_20;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v14,
               (int32_t)gameObject,
               (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    powerupLabel = this->fields.powerupLabel;
    v19 = Entity;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11111/*"RESULT_BOUNDS_POWERUP"*/, 0);
    if ( !v19
      || (gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)v19[4].monitor,
                                                     0),
          !powerupLabel) )
    {
LABEL_20:
      sub_1C6BC60(gameObject, v10);
    }
    UILabel__set_text(powerupLabel, (System_String_o *)gameObject, 0);
    v20 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0, 0);
  }
}


void SkillUpResultWindowComponent__OpenSkillChangeMessage(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  System_String_o *BattleName; // x0
  UILabel_o *costumeChangeLabel; // x21
  Il2CppObject *v15; // x22
  System_String_o *v16; // x0

  if ( (byte_4CBA452 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__);
    sub_1C6BA08(&StringLiteral_3829/*"COSTUME_CHANGE_DESCRIPTION"*/);
    byte_4CBA452 = 1;
  }
  v7 = Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C6BA20(Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetupWindowBg(this, v11);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v12);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.costumeChangeInfo, 0);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.costumeChangeInfo;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                             svtId,
                                             (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_16;
  BattleName = ServantEntity__getBattleName((ServantEntity_o *)gameObject, 0, -1, 0);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  v15 = (Il2CppObject *)BattleName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COSTUME_CHANGE_DESCRIPTION"*/, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v16, v15, 0);
  if ( !costumeChangeLabel )
LABEL_16:
    sub_1C6BC60(gameObject, v10);
  UILabel__set_text(costumeChangeLabel, (System_String_o *)gameObject, 0);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenSkillChangeMessage_48980628(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        System_String_o *formatKey,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  Il2CppObject *BattleName; // x22
  UILabel_o *costumeChangeLabel; // x23
  System_String_o *v17; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CBA453 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___78675816);
    sub_1C6BA08(&string_TypeInfo);
    byte_4CBA453 = 1;
  }
  v9 = Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___78675816;
  entity = 0;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___78675816 + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C6BA20(Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___78675816);
  v10 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetupWindowBg(this, v13);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v14);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.costumeChangeInfo, 0);
  if ( !gameObject )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.costumeChangeInfo;
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !gameObject )
    goto LABEL_20;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
         &entity,
         svtId,
         (const MethodInfo_33F9128 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    gameObject = (UnityEngine_GameObject_o *)entity;
    if ( !entity )
      goto LABEL_20;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)entity, 0, -1, 0);
  }
  else
  {
    BattleName = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
  }
  costumeChangeLabel = this->fields.costumeChangeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get(formatKey, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v17, BattleName, 0);
  if ( !costumeChangeLabel )
LABEL_20:
    sub_1C6BC60(gameObject, v12);
  UILabel__set_text(costumeChangeLabel, (System_String_o *)gameObject, 0);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenSkillChangeResultInfo(
        SkillUpResultWindowComponent_o *this,
        int32_t oldSkillId,
        int32_t oldSkillLv,
        int32_t nowSkillId,
        int32_t nowSkillLv,
        System_String_o *costumeName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  UILabel_o *skillChangeInfoTitle; // x26
  System_String_o *v22; // x0
  const MethodInfo *v23; // x5

  if ( (byte_4CBA454 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__);
    sub_1C6BA08(&StringLiteral_3836/*"COSTUME_CHANGE_SKILL_TITLE"*/);
    byte_4CBA454 = 1;
  }
  v15 = Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1C6BA20(Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__);
  v16 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetupWindowBg(this, v19);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v20);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.skillChangeInfo, 0);
  if ( !gameObject )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.skillChangeInfo;
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  skillChangeInfoTitle = this->fields.skillChangeInfoTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v22, (Il2CppObject *)costumeName, 0);
  if ( !skillChangeInfoTitle )
LABEL_13:
    sub_1C6BC60(gameObject, v18);
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)gameObject, 0);
  SkillUpResultWindowComponent__SetSkillInfo(this, oldSkillId, oldSkillLv, nowSkillId, nowSkillLv, v23);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        int32_t targetId,
        int32_t targetLv,
        System_Action_o *callback,
        int32_t targetIdOld,
        int32_t targetLvOld,
        int32_t baseSvtId,
        System_Int32_array *skillList,
        UserServantEntity_o *userServantEntity,
        bool isOpen,
        bool isRelease,
        bool isDispLv,
        System_String_o *dispBattleName,
        bool isForceRelease,
        UnityEngine_Color_o titleColor,
        UnityEngine_Color_o titleBgColor,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  float v21; // s12
  float v22; // s13
  float v23; // s14
  float v24; // s15
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  char v40; // w22
  UnityEngine_Object_o *titleBgSprite; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x29
  SkillEntity_o *v43; // x28
  int32_t v44; // w25
  int32_t max_length; // w8
  int32_t v46; // w9
  ServantSkillEntity_o *v47; // x27
  ServantLimitImageMaster_o *v48; // x21
  __int64 v49; // x20
  __int64 v50; // x26
  int32_t v51; // w26
  int32_t ServantImageLimitSealAfter; // w26
  Il2CppObject *Master_object; // x21
  int32_t v54; // w22
  int32_t v55; // w20
  int32_t v56; // w26
  int32_t v57; // w21
  int32_t skillNum; // w20
  int32_t IconCnt; // w22
  UnityEngine_GameObject_o *skillAfter; // x8
  UILabel_o *skillBefChargeTimeLb; // x22
  UnityEngine_GameObject_o *beforeChargeTimeInfo; // x22
  bool v63; // w24
  UILabel_o *skillAftChargeTimeLb; // x26
  UnityEngine_GameObject_o *AfterChargeTimeInfo; // x26
  System_String_o *v66; // x26
  System_String_o *v67; // x20
  Il2CppObject *v68; // x0
  System_String_o *v69; // x0
  UnityEngine_Object_o *skillAftForceReleaseLb; // x20
  System_String_o *v71; // x1
  UnityEngine_Object_o *servantSkillStrengthStatusAfter; // x20
  System_String_o *PATH; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  ServantSkillStrengthStatus_o *v78; // x22
  UILabel_o *skillAftTitleLb; // x26
  UnityEngine_Vector2Int_o v80; // x6
  UILabel_o *v81; // x22
  UILabel_o *v82; // x22
  UILabel_o *skillBefTitleLb; // x21
  System_String_o *v84; // x22
  System_String_o *v85; // x20
  int32_t v86; // w8
  Il2CppObject *v87; // x0
  System_String_o *v88; // x0
  int32_t v89; // w20
  int32_t v90; // w21
  ServantSkillEntity_o *EntityFromSkillId; // x0
  int32_t v92; // w20
  UnityEngine_Object_o *skillBefForceReleaseLb; // x20
  System_String_o *v94; // x1
  int32_t StrengthStatus; // w0
  int32_t v96; // w21
  int32_t v97; // w22
  ServantSkillEntity_o *v98; // x0
  ServantSkillEntity_o *v99; // x20
  int32_t v100; // w0
  UnityEngine_Object_o *servantSkillStrengthStatusBefore; // x23
  struct ServantSkillStrengthStatus_o **p_servantSkillStrengthStatusBefore; // x20
  System_String_o *v103; // x23
  UnityEngine_Transform_o *v104; // x0
  Il2CppObject *v105; // x0
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  UnityEngine_Vector2Int_o v108; // x6
  UILabel_o *v109; // x20
  UILabel_o *openAppendSkillDetailScrollLabel; // x0
  System_String_o *v111; // x1
  int32_t v112; // w2
  System_Action_o *v113; // x20
  ServantSkillMaster_o *v114; // [xsp+20h] [xbp-F0h]
  int32_t svtId; // [xsp+2Ch] [xbp-E4h]
  System_String_o *str1; // [xsp+30h] [xbp-E0h]
  int32_t v117; // [xsp+40h] [xbp-D0h]
  int32_t v118; // [xsp+48h] [xbp-C8h]
  int32_t v119; // [xsp+50h] [xbp-C0h] BYREF
  int32_t EffectChargeTurn; // [xsp+54h] [xbp-BCh] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+58h] [xbp-B8h] BYREF
  System_String_o *detail; // [xsp+60h] [xbp-B0h] BYREF
  System_String_o *name; // [xsp+68h] [xbp-A8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16
  UnityEngine_Color_o v125; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v126; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = titleBgColor.fields.a;
  b = titleBgColor.fields.b;
  g = titleBgColor.fields.g;
  r = titleBgColor.fields.r;
  v21 = titleColor.fields.a;
  v22 = titleColor.fields.b;
  v23 = titleColor.fields.g;
  v24 = titleColor.fields.r;
  if ( (byte_4CBA451 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C6BA08(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_1C6BA08(&Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__);
    sub_1C6BA08(&StringLiteral_2004/*"APPEND_SKILL_RESULT_AFTER_LV"*/);
    sub_1C6BA08(&StringLiteral_12226/*"SKILL_COMBINE_FORCE_RELEASE_NAME"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_12223/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/);
    sub_1C6BA08(&StringLiteral_2005/*"APPEND_SKILL_RESULT_LV"*/);
    byte_4CBA451 = 1;
  }
  detail = 0;
  name = 0;
  entity = 0;
  EffectChargeTurn = 0;
  if ( this->fields.state )
    return;
  v33 = Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__ + 83) & 2) != 0 )
    v33 = (_QWORD *)sub_1C6BA20(Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__);
  v34 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v33, v33[4]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_176;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v37);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.skillInfo, 0);
  if ( !gameObject )
    goto LABEL_176;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_176;
  v118 = targetLvOld;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.skillInfo;
  if ( !gameObject )
    goto LABEL_176;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.openCallBack = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v38, v39);
  gameObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(dispBattleName, 0);
  if ( !this->fields.titleLabel )
    goto LABEL_176;
  v40 = (char)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.titleLabel, 0);
  if ( !gameObject )
    goto LABEL_176;
  UnityEngine_GameObject__SetActive(gameObject, (v40 ^ 1) & 1, 0);
  if ( (v40 & 1) == 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_176;
    UILabel__set_text((UILabel_o *)gameObject, dispBattleName, 0);
    if ( (float)((float)(v21 * v21) + (float)((float)(v22 * v22) + (float)((float)(v24 * v24) + (float)(v23 * v23)))) >= 1.0e-10 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
      if ( !gameObject )
        goto LABEL_176;
      v125.fields.r = v24;
      v125.fields.g = v23;
      v125.fields.b = v22;
      v125.fields.a = v21;
      UIWidget__set_color((UIWidget_o *)gameObject, v125, 0);
    }
    if ( (float)((float)(a * a) + (float)((float)(b * b) + (float)((float)(r * r) + (float)(g * g)))) >= 1.0e-10 )
    {
      titleBgSprite = (UnityEngine_Object_o *)this->fields.titleBgSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(titleBgSprite, 0, 0) )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.titleBgSprite;
        if ( !gameObject )
          goto LABEL_176;
        v126.fields.a = a;
        v126.fields.r = r;
        v126.fields.g = g;
        v126.fields.b = b;
        UIWidget__set_color((UIWidget_o *)gameObject, v126, 0);
      }
    }
    if ( !this->fields.changedLayout )
    {
      GameObjectExtensions__AddLocalPositionY(this->fields.skillInfo, this->fields.skillInfoOffset, 0);
      GameObjectExtensions__AddLocalPositionY(this->fields.skillAfter, this->fields.afterSkillOffset, 0);
      this->fields.changedLayout = 1;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.windowBgSprite;
    if ( !gameObject )
      goto LABEL_176;
    UIWidget__set_height((UIWidget_o *)gameObject, 300, 0);
    GameObjectExtensions__SetLocalPositionY(this->fields.skillBefore, 81.0, 0);
    GameObjectExtensions__SetLocalPositionY(this->fields.skillAfter, -57.0, 0);
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)this->fields.changeArrowSprite, -1.0, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !gameObject )
    goto LABEL_176;
  v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                             targetId,
                                             (const MethodInfo_33F90DC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillList )
    goto LABEL_176;
  v43 = (SkillEntity_o *)gameObject;
  v44 = 0;
  max_length = skillList->max_length;
  while ( v44 < max_length )
  {
    if ( v44 >= (unsigned int)max_length )
      sub_1C6BC68(gameObject);
    v46 = skillList->m_Items[v44++];
    if ( v46 == targetId )
      goto LABEL_37;
  }
  v44 = 0;
LABEL_37:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( !gameObject )
    goto LABEL_176;
  v114 = (ServantSkillMaster_o *)gameObject;
  svtId = baseSvtId;
  gameObject = (UnityEngine_GameObject_o *)ServantSkillMaster__getEntityFromSkillId(
                                             (ServantSkillMaster_o *)gameObject,
                                             baseSvtId,
                                             v44,
                                             targetId,
                                             0);
  if ( !v43 )
    goto LABEL_176;
  v47 = (ServantSkillEntity_o *)gameObject;
  v117 = targetIdOld;
  SkillEntity__getSkillMessageInfo(v43, &name, &detail, targetLv, 0);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !userServantEntity )
    goto LABEL_176;
  v48 = (ServantLimitImageMaster_o *)gameObject;
  v49 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v50 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v124.fields.currentCryptoKey = v49;
  *(_QWORD *)&v124.fields.fakeValue = v50;
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v124, 0);
  gameObject = (UnityEngine_GameObject_o *)UserServantEntity__getDispLimitCount(userServantEntity, 0, 0);
  if ( !v48 )
    goto LABEL_176;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(v48, v51, (int32_t)gameObject, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(userServantEntity->fields.svtId, 0);
  v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(userServantEntity->fields.limitCount, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)ImageLimitCount__GetLimitCountByDispLimit(ServantImageLimitSealAfter, v55, 0);
  if ( !Master_object )
    goto LABEL_176;
  v56 = v117;
  if ( ServantLimitAddMaster__TryGetEntity(
         (ServantLimitAddMaster_o *)Master_object,
         &entity,
         v54,
         (int32_t)gameObject,
         0) )
  {
    gameObject = (UnityEngine_GameObject_o *)entity;
    if ( !entity )
      goto LABEL_176;
    if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
    {
      gameObject = (UnityEngine_GameObject_o *)entity;
      if ( !entity )
        goto LABEL_176;
      name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v43->fields.id, name, 0);
    }
  }
  v57 = v117 >= 1 ? v118 : targetLv - 1;
  if ( v47 )
  {
    skillNum = v47->fields.skillNum;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    IconCnt = ServantSkillStrengthStatus__GetIconCnt(skillNum, 0);
  }
  else
  {
    IconCnt = 0;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12226/*"SKILL_COMBINE_FORCE_RELEASE_NAME"*/, 0);
  skillAfter = this->fields.skillAfter;
  str1 = (System_String_o *)gameObject;
  if ( !skillAfter )
    goto LABEL_176;
  if ( isOpen )
  {
    UnityEngine_GameObject__SetActive(skillAfter, 0, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
    if ( !gameObject )
      goto LABEL_176;
    SkillIconComponent__Set_41257104((SkillIconComponent_o *)gameObject, targetId, targetLv, 0);
    skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v43, targetLv, 0);
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&EffectChargeTurn, 0);
    if ( !skillBefChargeTimeLb )
      goto LABEL_176;
    UILabel__set_text(skillBefChargeTimeLb, (System_String_o *)gameObject, 0);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v43, v57, 0);
    v63 = isForceRelease;
    if ( !beforeChargeTimeInfo )
      goto LABEL_176;
  }
  else
  {
    UnityEngine_GameObject__SetActive(skillAfter, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconAft;
    if ( !gameObject )
      goto LABEL_176;
    SkillIconComponent__Set_41257104((SkillIconComponent_o *)gameObject, targetId, targetLv, 0);
    skillAftChargeTimeLb = this->fields.skillAftChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v43, targetLv, 0);
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&EffectChargeTurn, 0);
    if ( !skillAftChargeTimeLb )
      goto LABEL_176;
    UILabel__set_text(skillAftChargeTimeLb, (System_String_o *)gameObject, 0);
    AfterChargeTimeInfo = this->fields.AfterChargeTimeInfo;
    gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v43, targetLv, 0);
    if ( !AfterChargeTimeInfo )
      goto LABEL_176;
    UnityEngine_GameObject__SetActive(AfterChargeTimeInfo, (int)gameObject > 0, 0);
    if ( isDispLv )
    {
      v66 = name;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v67 = LocalizationManager__Get((System_String_o *)StringLiteral_2004/*"APPEND_SKILL_RESULT_AFTER_LV"*/, 0);
      v119 = targetLv;
      v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119);
      v69 = System_String__Format(v67, v68, 0);
      name = System_String__Concat_63966792(v66, v69, 0);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
    if ( !gameObject )
      goto LABEL_176;
    UILabel__set_text((UILabel_o *)gameObject, name, 0);
    skillAftForceReleaseLb = (UnityEngine_Object_o *)this->fields.skillAftForceReleaseLb;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillAftForceReleaseLb, 0, 0) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftForceReleaseLb;
      if ( !gameObject )
        goto LABEL_176;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive(gameObject, IconCnt > 0 && isForceRelease, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftForceReleaseLb;
      if ( !gameObject )
        goto LABEL_176;
      if ( isForceRelease )
        v71 = str1;
      else
        v71 = (System_String_o *)StringLiteral_1/*""*/;
      UILabel__set_text((UILabel_o *)gameObject, v71, 0);
    }
    if ( v47 && IconCnt >= 1 )
    {
      servantSkillStrengthStatusAfter = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusAfter;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(servantSkillStrengthStatusAfter, 0, 0) )
      {
        if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
        if ( !gameObject )
          goto LABEL_176;
        PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
        gameObject = BaseMonoBehaviour__createObject_41419124((BaseMonoBehaviour_o *)this, PATH, transform, 0, 0);
        if ( !gameObject )
          goto LABEL_176;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        this->fields.servantSkillStrengthStatusAfter = (struct ServantSkillStrengthStatus_o *)Component_object;
        sub_1C6B9AC(
          (CGThumbnailListItem_o *)&this->fields.servantSkillStrengthStatusAfter,
          (int32_t)Component_object,
          v76,
          v77);
      }
      v78 = this->fields.servantSkillStrengthStatusAfter;
      skillAftTitleLb = this->fields.skillAftTitleLb;
      gameObject = (UnityEngine_GameObject_o *)ServantSkillEntity__GetStrengthStatus(v47, 0);
      if ( !v78 )
        goto LABEL_176;
      v80 = (UnityEngine_Vector2Int_o)0x1200000014LL;
      ServantSkillStrengthStatus__Set(
        v78,
        skillAftTitleLb,
        (int32_t)gameObject,
        v47->fields.skillNum,
        20,
        -9,
        v80,
        280,
        this->fields.skillAftForceReleaseLb,
        0);
      v56 = v117;
    }
    else
    {
      v56 = v117;
      if ( !IconCnt && isForceRelease )
      {
        v81 = this->fields.skillAftTitleLb;
        gameObject = (UnityEngine_GameObject_o *)System_String__Concat_63966792(name, str1, 0);
        if ( !v81 )
          goto LABEL_176;
        UILabel__set_text(v81, (System_String_o *)gameObject, 0);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
      if ( !gameObject )
        goto LABEL_176;
      UILabel__SetCondensedScale((UILabel_o *)gameObject, 280, 0, 0);
    }
    UILabelHelper__SetLabelWithScroll(this->fields.skillAfterDetailScrollLabel, detail, 4, 0);
    if ( v56 < 1 )
    {
      SkillEntity__getSkillMessageInfo(v43, &name, &detail, v57, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_176;
      SkillIconComponent__Set_41257104((SkillIconComponent_o *)gameObject, targetId, v57, 0);
      v63 = isForceRelease;
    }
    else
    {
      gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v42,
                                                 v56,
                                                 (const MethodInfo_33F90DC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !gameObject )
        goto LABEL_176;
      v43 = (SkillEntity_o *)gameObject;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)gameObject, &name, &detail, v57, 0);
      v63 = isForceRelease;
      if ( !isRelease && !isForceRelease )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        detail = LocalizationManager__Get((System_String_o *)StringLiteral_12223/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, 0);
        UILabelHelper__SetLabelWithScroll(this->fields.skillAfterDetailScrollLabel, detail, 4, 0);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_176;
      SkillIconComponent__Set_41257104((SkillIconComponent_o *)gameObject, v56, v57, 0);
    }
    v82 = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v43, v57, 0);
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&EffectChargeTurn, 0);
    if ( !v82 )
      goto LABEL_176;
    UILabel__set_text(v82, (System_String_o *)gameObject, 0);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v43, v57, 0);
    if ( !beforeChargeTimeInfo )
      goto LABEL_176;
  }
  UnityEngine_GameObject__SetActive(beforeChargeTimeInfo, (int)gameObject > 0, 0);
  if ( entity && ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)entity;
    if ( !entity )
      goto LABEL_176;
    name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v43->fields.id, name, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
  if ( !gameObject )
LABEL_176:
    sub_1C6BC60(gameObject, v36);
  UILabel__set_text((UILabel_o *)gameObject, name, 0);
  if ( isDispLv )
  {
    skillBefTitleLb = this->fields.skillBefTitleLb;
    v84 = name;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v85 = LocalizationManager__Get((System_String_o *)StringLiteral_2005/*"APPEND_SKILL_RESULT_LV"*/, 0);
    v86 = v118;
    if ( isOpen )
      v86 = targetLv;
    v119 = v86;
    v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119);
    v88 = System_String__Format(v85, v87, 0);
    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_63966792(v84, v88, 0);
    if ( !skillBefTitleLb )
      goto LABEL_176;
    UILabel__set_text(skillBefTitleLb, (System_String_o *)gameObject, 0);
  }
  if ( v47 )
  {
    v89 = v47->fields.skillNum;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    v90 = ServantSkillStrengthStatus__GetIconCnt(v89, 0);
    if ( v56 >= 1 )
    {
      EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v114, svtId, v44, v56, 0);
      if ( EntityFromSkillId )
      {
        v92 = EntityFromSkillId->fields.skillNum;
        if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
        v90 = ServantSkillStrengthStatus__GetIconCnt(v92, 0);
      }
    }
  }
  else
  {
    v90 = 0;
  }
  skillBefForceReleaseLb = (UnityEngine_Object_o *)this->fields.skillBefForceReleaseLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillBefForceReleaseLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefForceReleaseLb;
    if ( !gameObject )
      goto LABEL_176;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_176;
    UnityEngine_GameObject__SetActive(gameObject, v90 > 0 && v63, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefForceReleaseLb;
    if ( !gameObject )
      goto LABEL_176;
    if ( v63 )
      v94 = str1;
    else
      v94 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v94, 0);
  }
  if ( v47 && v90 >= 1 )
  {
    StrengthStatus = ServantSkillEntity__GetStrengthStatus(v47, 0);
    v96 = v47->fields.skillNum;
    v97 = StrengthStatus;
    if ( v56 >= 1 )
    {
      v98 = ServantSkillMaster__getEntityFromSkillId(v114, svtId, v44, v56, 0);
      if ( v98 )
      {
        v99 = v98;
        v100 = ServantSkillEntity__GetStrengthStatus(v98, 0);
        v96 = v99->fields.skillNum;
        v97 = v100;
      }
    }
    servantSkillStrengthStatusBefore = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusBefore;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_servantSkillStrengthStatusBefore = &this->fields.servantSkillStrengthStatusBefore;
    if ( !UnityEngine_Object__op_Equality(servantSkillStrengthStatusBefore, 0, 0) )
      goto LABEL_162;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
    if ( gameObject )
    {
      v103 = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
      v104 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      gameObject = BaseMonoBehaviour__createObject_41419124((BaseMonoBehaviour_o *)this, v103, v104, 0, 0);
      if ( gameObject )
      {
        v105 = UnityEngine_GameObject__GetComponent_object_(
                 gameObject,
                 (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        *p_servantSkillStrengthStatusBefore = (struct ServantSkillStrengthStatus_o *)v105;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantSkillStrengthStatusBefore, (int32_t)v105, v106, v107);
LABEL_162:
        gameObject = (UnityEngine_GameObject_o *)*p_servantSkillStrengthStatusBefore;
        if ( !*p_servantSkillStrengthStatusBefore )
          goto LABEL_176;
        v108 = (UnityEngine_Vector2Int_o)0x1200000014LL;
        ServantSkillStrengthStatus__Set(
          (ServantSkillStrengthStatus_o *)gameObject,
          this->fields.skillBefTitleLb,
          v97,
          v96,
          20,
          -9,
          v108,
          280,
          this->fields.skillBefForceReleaseLb,
          0);
        goto LABEL_170;
      }
    }
    goto LABEL_176;
  }
  if ( !v90 && v63 )
  {
    v109 = this->fields.skillBefTitleLb;
    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_63966792(name, str1, 0);
    if ( !v109 )
      goto LABEL_176;
    UILabel__set_text(v109, (System_String_o *)gameObject, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
  if ( !gameObject )
    goto LABEL_176;
  UILabel__SetCondensedScale((UILabel_o *)gameObject, 280, 0, 0);
LABEL_170:
  gameObject = this->fields.openAppendSkillDetailScrollLabelRoot;
  if ( !gameObject )
    goto LABEL_176;
  UnityEngine_GameObject__SetActive(gameObject, isOpen, 0);
  if ( isOpen )
  {
    openAppendSkillDetailScrollLabel = this->fields.openAppendSkillDetailScrollLabel;
    v111 = detail;
    v112 = 10;
  }
  else
  {
    openAppendSkillDetailScrollLabel = this->fields.skillBeforeDetailScrollLabel;
    v111 = detail;
    v112 = 4;
  }
  UILabelHelper__SetLabelWithScroll(openAppendSkillDetailScrollLabel, v111, v112, 0);
  v113 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v113, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v113, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SkillUpResultWindowComponent__SetChildrenActive(
        SkillUpResultWindowComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *skillInfo; // x0
  bool v5; // w21
  bool v7; // w20

  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_8;
  v5 = enable;
  UnityEngine_GameObject__SetActive(skillInfo, enable, 0);
  skillInfo = this->fields.skillChangeInfo;
  if ( !skillInfo )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(skillInfo, v5, 0);
  skillInfo = this->fields.npInfo;
  if ( !skillInfo
    || (UnityEngine_GameObject__SetActive(skillInfo, enable, 0), (skillInfo = this->fields.friendshipInfo) == 0)
    || (UnityEngine_GameObject__SetActive(skillInfo, enable, 0), (skillInfo = this->fields.powerupInfo) == 0)
    || (v7 = enable,
        UnityEngine_GameObject__SetActive(skillInfo, v7, 0),
        (skillInfo = this->fields.costumeChangeInfo) == 0) )
  {
LABEL_8:
    sub_1C6BC60(skillInfo, enable);
  }
  UnityEngine_GameObject__SetActive(skillInfo, v7, 0);
}


void SkillUpResultWindowComponent__SetSkillInfo(
        SkillUpResultWindowComponent_o *this,
        int32_t oldSkillId,
        int32_t oldSkillLv,
        int32_t nowSkillId,
        int32_t nowSkillLv,
        const MethodInfo *method)
{
  UILabel_o *skillChangeInfoSubTitleOld; // x24
  System_String_o *SkillEntity; // x0
  __int64 v13; // x1
  SkillUpResultWindowComponent_o *v14; // x0
  const MethodInfo *v15; // x2
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v17; // x0
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  SkillUpResultWindowComponent_o *v19; // x0
  const MethodInfo *v20; // x2
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v22; // x0
  System_String_o *text; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *v24; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4CBA463 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_6955/*"GET_SKILL_NAME"*/);
    sub_1C6BA08(&StringLiteral_1920/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/);
    sub_1C6BA08(&StringLiteral_2895/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/);
    byte_4CBA463 = 1;
  }
  detail = 0;
  name = 0;
  text = 0;
  v24 = 0;
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_2895/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleOld, SkillEntity, 0);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v14, oldSkillId, v15);
  if ( !SkillEntity )
    goto LABEL_14;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &name, &detail, oldSkillLv, 0);
  skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6955/*"GET_SKILL_NAME"*/, 0);
  SkillEntity = System_String__Format(v17, (Il2CppObject *)name, 0);
  if ( !skillChangeInfoNameOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoNameOld, SkillEntity, 0);
  SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailOld;
  if ( !SkillEntity )
    goto LABEL_14;
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, detail, SkillEntity[17].fields._stringLength, 0, 0);
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_1920/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleNow, SkillEntity, 0);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v19, nowSkillId, v20);
  if ( !SkillEntity
    || (SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &v24, &text, nowSkillLv, 0),
        skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow,
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_6955/*"GET_SKILL_NAME"*/, 0),
        SkillEntity = System_String__Format(v22, (Il2CppObject *)v24, 0),
        !skillChangeInfoNameNow)
    || (UILabel__set_text(skillChangeInfoNameNow, SkillEntity, 0),
        (SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailNow) == 0) )
  {
LABEL_14:
    sub_1C6BC60(SkillEntity, v13);
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, text, SkillEntity[17].fields._stringLength, 0, 0);
}


void SkillUpResultWindowComponent__SetupNpUpResultInfoNormal(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t targetId,
        int32_t targetLv,
        int32_t targetIdOld,
        int32_t targetLvOld,
        int32_t kind,
        const MethodInfo *method)
{
  TreasureDvcMaster_o *Master_object; // x0
  __int64 v16; // x1
  TreasureDvcMaster_o *v17; // x26
  __int64 v18; // x27
  __int64 v19; // x28
  TreasureDvcEntity_o *v20; // x25
  TreasureDvcLvEntity_o *v21; // x22
  bool v22; // w26
  UILabel_o *currentNpLvLb; // x24
  UILabel_o *resNpLvLb; // x24
  UIWidget_o *v25; // x24
  SkillUpResultWindowComponent_c *v26; // x8
  System_String_o **v27; // x8
  UIWidget_o *v28; // x24
  SkillUpResultWindowComponent_c *v29; // x8
  System_String_o *v30; // x1
  int32_t v31; // w2
  UILabel_o *openNpDetailScrollLabel; // x0
  System_String_o *v33; // x21
  TreasureDvcLvEntity_o *v34; // x0
  UILabel_o *v35; // x0
  System_String_o *DetalShort_43232016; // x1
  UILabel_o *resNpLvFirstLb; // x24
  struct UILabel_o *npBefDetailLabelScroll; // x20
  struct UILabel_o *npAftDetailLabelScroll; // x19
  int32_t v40; // [xsp+Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  lv = targetLv;
  if ( (byte_4CBA459 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C6BA08(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&SkillUpResultWindowComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CBA459 = 1;
  }
  entity = 0;
  v40 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !usrSvtData )
    goto LABEL_63;
  v17 = Master_object;
  v19 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v19;
  *(_QWORD *)&v43.fields.fakeValue = v18;
  Master_object = (TreasureDvcMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v43, 0);
  if ( !v17 )
    goto LABEL_63;
  v20 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v17, (int32_t)Master_object, targetId, 0);
  Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !v20 || !Master_object )
    goto LABEL_63;
  v21 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v20->fields.id, targetLv, 0);
  Master_object = (TreasureDvcMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                                           &entity,
                                           targetIdOld,
                                           (const MethodInfo_33F9128 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    targetIdOld = 0;
  if ( !this->fields.npRubyNameLb )
    goto LABEL_63;
  UILabel__set_text(this->fields.npRubyNameLb, v20->fields.ruby, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npNameLb;
  if ( !Master_object )
    goto LABEL_63;
  v22 = kind != 5;
  UILabel__set_text((UILabel_o *)Master_object, v20->fields.name, 0);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(usrSvtData, this->fields.npNameLb, this->fields.npRubyNameLb, 0);
  v40 = targetLvOld;
  if ( targetIdOld <= 0 && kind != 5 )
  {
    if ( targetLvOld > 0 )
    {
      currentNpLvLb = this->fields.currentNpLvLb;
      Master_object = (TreasureDvcMaster_o *)System_Int32__ToString((int32_t)&v40, 0);
      if ( !currentNpLvLb )
        goto LABEL_63;
      UILabel__set_text(currentNpLvLb, (System_String_o *)Master_object, 0);
      resNpLvLb = this->fields.resNpLvLb;
      Master_object = (TreasureDvcMaster_o *)System_Int32__ToString((int32_t)&lv, 0);
      if ( !resNpLvLb )
        goto LABEL_63;
      UILabel__set_text(resNpLvLb, (System_String_o *)Master_object, 0);
      Master_object = (TreasureDvcMaster_o *)this->fields.resNpLvLb;
      if ( !Master_object )
        goto LABEL_63;
      Master_object = (TreasureDvcMaster_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)Master_object,
                                               (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      v25 = (UIWidget_o *)Master_object;
      v26 = SkillUpResultWindowComponent_TypeInfo;
      if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
        v26 = SkillUpResultWindowComponent_TypeInfo;
      }
      if ( !v25 )
        goto LABEL_63;
      UIWidget__set_color(v25, v26->static_fields->COLOR_VAL, 0);
      Master_object = (TreasureDvcMaster_o *)this->fields.npRankInfo;
      if ( !Master_object )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      Master_object = (TreasureDvcMaster_o *)this->fields.npLvInfo;
      if ( !Master_object )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      Master_object = (TreasureDvcMaster_o *)this->fields.npLvFirstInfo;
      if ( !Master_object )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      if ( !v21 )
        goto LABEL_59;
      goto LABEL_43;
    }
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankInfo;
    if ( !Master_object )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvInfo;
    if ( !Master_object )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvFirstInfo;
    if ( !Master_object )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = (TreasureDvcMaster_o *)this->fields.npChangeSp;
    if ( !Master_object )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    resNpLvFirstLb = this->fields.resNpLvFirstLb;
    Master_object = (TreasureDvcMaster_o *)System_Int32__ToString((int32_t)&lv, 0);
    if ( !resNpLvFirstLb )
      goto LABEL_63;
    UILabel__set_text(resNpLvFirstLb, (System_String_o *)Master_object, 0);
    if ( v21 )
      goto LABEL_43;
LABEL_59:
    UILabelHelper__SetLabelWithScroll(this->fields.npBefDetailLabelScroll, (System_String_o *)StringLiteral_1/*""*/, 4, 0);
    UILabelHelper__SetLabelWithScroll(this->fields.npAftDetailLabelScroll, (System_String_o *)StringLiteral_1/*""*/, 4, 0);
    openNpDetailScrollLabel = this->fields.openNpDetailScrollLabel;
    v30 = (System_String_o *)StringLiteral_1/*""*/;
    v31 = 4;
    goto LABEL_62;
  }
  Master_object = (TreasureDvcMaster_o *)this->fields.npRankInfo;
  if ( !Master_object )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v22, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npLvInfo;
  if ( !Master_object )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npLvFirstInfo;
  if ( !Master_object )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npChangeSp;
  if ( !Master_object )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v22, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npRankupBeforeLb;
  if ( !Master_object )
    goto LABEL_63;
  v27 = entity ? (System_String_o **)&entity[2].monitor : (System_String_o **)&StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)Master_object, *v27, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npRankupAfterLb;
  if ( !Master_object )
    goto LABEL_63;
  UILabel__set_text((UILabel_o *)Master_object, v20->fields.rank, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npRankupAfterLb;
  if ( !Master_object )
    goto LABEL_63;
  Master_object = (TreasureDvcMaster_o *)UnityEngine_Component__GetComponent_object_(
                                           (UnityEngine_Component_o *)Master_object,
                                           (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v28 = (UIWidget_o *)Master_object;
  v29 = SkillUpResultWindowComponent_TypeInfo;
  if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
    v29 = SkillUpResultWindowComponent_TypeInfo;
  }
  if ( !v28 )
    goto LABEL_63;
  UIWidget__set_color(v28, v29->static_fields->COLOR_VAL, 0);
  v40 = targetLvOld;
  if ( !v21 )
    goto LABEL_59;
LABEL_43:
  Master_object = (TreasureDvcMaster_o *)this->fields.openNpDetailScrollLabelRoot;
  if ( !Master_object )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, kind == 5, 0);
  if ( kind != 5 )
  {
    if ( targetIdOld < 1 )
    {
      npBefDetailLabelScroll = this->fields.npBefDetailLabelScroll;
      DetalShort_43232016 = TreasureDvcLvEntity__getDetalShort_43232016(v21, v40, 0);
      v35 = npBefDetailLabelScroll;
LABEL_61:
      UILabelHelper__SetLabelWithScroll(v35, DetalShort_43232016, 4, 0);
      npAftDetailLabelScroll = this->fields.npAftDetailLabelScroll;
      v30 = TreasureDvcLvEntity__getDetalShort_43232016(v21, lv, 0);
      v31 = 4;
      openNpDetailScrollLabel = npAftDetailLabelScroll;
      goto LABEL_62;
    }
    v33 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( Master_object )
    {
      v34 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, targetIdOld, targetLvOld, 0);
      if ( v34 )
        v33 = TreasureDvcLvEntity__getDetalShort_43232016(v34, v40, 0);
      v35 = this->fields.npBefDetailLabelScroll;
      DetalShort_43232016 = v33;
      goto LABEL_61;
    }
LABEL_63:
    sub_1C6BC60(Master_object, v16);
  }
  UILabelHelper__SetLabelWithScroll(this->fields.npBefDetailLabelScroll, (System_String_o *)StringLiteral_1/*""*/, 4, 0);
  UILabelHelper__SetLabelWithScroll(this->fields.npAftDetailLabelScroll, (System_String_o *)StringLiteral_1/*""*/, 4, 0);
  v30 = TreasureDvcLvEntity__getDetalShort_43232016(v21, lv, 0);
  v31 = 10;
  openNpDetailScrollLabel = this->fields.openNpDetailScrollLabel;
LABEL_62:
  UILabelHelper__SetLabelWithScroll(openNpDetailScrollLabel, v30, v31, 0);
}


void SkillUpResultWindowComponent__SetupSpecialNpChange(
        SkillUpResultWindowComponent_o *this,
        ServantCostumeEntity_o *svtCostumeEnt,
        const MethodInfo *method)
{
  UnityEngine_Object_o *heroineNpChangeInfoTitle; // x21
  bool v6; // w0
  UILabel_o *v7; // x21
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_T__o *heroineNpChangeArrowSprites; // x20
  SkillUpResultWindowComponent___c_c *v12; // x0
  System_Action_object__o *_9__99_0; // x21
  Il2CppObject *v14; // x22
  struct SkillUpResultWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *heroineNpChangeExtraArrowSprite; // x20
  UISprite_o *v19; // x19

  if ( (byte_4CBA45D & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_UISprite__TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SkillUpResultWindowComponent___c__SetupSpecialNpChange_b__99_0__);
    sub_1C6BA08(&SkillUpResultWindowComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_3833/*"COSTUME_CHANGE_NOBLE_PHANTASM_TITLE"*/);
    sub_1C6BA08(&StringLiteral_20367/*"img_arrow_change"*/);
    byte_4CBA45D = 1;
  }
  if ( this->fields.isSpecialEffect )
  {
    heroineNpChangeInfoTitle = (UnityEngine_Object_o *)this->fields.heroineNpChangeInfoTitle;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(heroineNpChangeInfoTitle, 0, 0);
    if ( svtCostumeEnt && v6 )
    {
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.heroineNpChangeInfoTitle, 1, 0);
      v7 = this->fields.heroineNpChangeInfoTitle;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3833/*"COSTUME_CHANGE_NOBLE_PHANTASM_TITLE"*/, 0);
      v9 = System_String__Format(v8, (Il2CppObject *)svtCostumeEnt->fields.name, 0);
      if ( !v7 )
        sub_1C6BC60(v9, v10);
      UILabel__set_text(v7, v9, 0);
    }
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.heroineNpChangeArrowSprites, 0) )
    {
      heroineNpChangeArrowSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.heroineNpChangeArrowSprites;
      v12 = SkillUpResultWindowComponent___c_TypeInfo;
      if ( !SkillUpResultWindowComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent___c_TypeInfo);
        v12 = SkillUpResultWindowComponent___c_TypeInfo;
      }
      _9__99_0 = (System_Action_object__o *)v12->static_fields->__9__99_0;
      if ( !_9__99_0 )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          v12 = SkillUpResultWindowComponent___c_TypeInfo;
        }
        v14 = (Il2CppObject *)v12->static_fields->__9;
        _9__99_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_UISprite__TypeInfo);
        System_Action_object____ctor(
          _9__99_0,
          v14,
          Method_SkillUpResultWindowComponent___c__SetupSpecialNpChange_b__99_0__,
          0);
        static_fields = SkillUpResultWindowComponent___c_TypeInfo->static_fields;
        static_fields->__9__99_0 = (struct System_Action_UISprite__o *)_9__99_0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__99_0, (int32_t)_9__99_0, v16, v17);
      }
      BasicHelper__ForEach_object_(
        heroineNpChangeArrowSprites,
        (System_Action_T__o *)_9__99_0,
        (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_UISprite___);
    }
    heroineNpChangeExtraArrowSprite = (UnityEngine_Object_o *)this->fields.heroineNpChangeExtraArrowSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(heroineNpChangeExtraArrowSprite, 0, 0) )
    {
      v19 = this->fields.heroineNpChangeExtraArrowSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetDownloadCommonSprite(v19, (System_String_o *)StringLiteral_20367/*"img_arrow_change"*/, 0);
    }
  }
}


void SkillUpResultWindowComponent__SetupWindowBg(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *windowBgSprite; // x20
  UISprite_o *v4; // x19

  if ( (byte_4CBA45C & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_20643/*"img_skillwindow_sp"*/);
    byte_4CBA45C = 1;
  }
  if ( this->fields.isSpecialEffect )
  {
    windowBgSprite = (UnityEngine_Object_o *)this->fields.windowBgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(windowBgSprite, 0, 0) )
    {
      v4 = this->fields.windowBgSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetDownloadCommonSprite(v4, (System_String_o *)StringLiteral_20643/*"img_skillwindow_sp"*/, 0);
    }
  }
}


void SkillUpResultWindowComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CBA467 & 1) == 0 )
  {
    sub_1C6BA08(&SkillUpResultWindowComponent___c_TypeInfo);
    byte_4CBA467 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(SkillUpResultWindowComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillUpResultWindowComponent___c_TypeInfo->static_fields->__9 = (struct SkillUpResultWindowComponent___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)SkillUpResultWindowComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SkillUpResultWindowComponent___c___ctor(SkillUpResultWindowComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SkillUpResultWindowComponent___c___SetupSpecialNpChange_b__99_0(
        SkillUpResultWindowComponent___c_o *this,
        UISprite_o *sp,
        const MethodInfo *method)
{
  if ( (byte_4CBA468 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_20427/*"img_combine_arrow_sp"*/);
    byte_4CBA468 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(sp, (System_String_o *)StringLiteral_20427/*"img_combine_arrow_sp"*/, 0);
}


void SkillUpResultWindowComponent___c__DisplayClass104_0___ctor(
        SkillUpResultWindowComponent___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SkillUpResultWindowComponent___c__DisplayClass104_0___CloseToNext_b__0(
        SkillUpResultWindowComponent___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}