void __fastcall SkillUpResultWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49BEA5A & 1) == 0 )
  {
    sub_1B4CF90(&SkillUpResultWindowComponent_TypeInfo, v1);
    byte_49BEA5A = 1;
  }
  *SkillUpResultWindowComponent_TypeInfo->static_fields = (struct SkillUpResultWindowComponent_StaticFields)xmmword_BAAD20;
}


void __fastcall SkillUpResultWindowComponent___ctor(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_49BEA59 & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    byte_49BEA59 = 1;
  }
  this->fields.svtTransformCount = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SkillUpResultWindowComponent__Close(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x0
  System_Action_o *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_49BEA54 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SkillUpResultWindowComponent_EndClose__, v3);
    byte_49BEA54 = 1;
  }
  v4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  SkillUpResultWindowComponent__Close_45829920(this, v5, v6);
}


void __fastcall SkillUpResultWindowComponent__Close_45829920(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_49BEA55 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, callback);
    sub_1B4CF90(&Method_SkillUpResultWindowComponent_EndClose__, v4);
    byte_49BEA55 = 1;
  }
  v5 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall SkillUpResultWindowComponent__EndClose(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  SkillUpResultWindowComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        SkillUpResultWindowComponent__SetChildrenActive(this, 0, v5),
        (gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0LL)) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
    sub_1B4D1EC(gameObject, v4);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__EndOpen(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *openCallBack; // x19
  CGThumbnailListItem_o *p_openCallBack; // x0

  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    p_openCallBack = (CGThumbnailListItem_o *)&this->fields.openCallBack;
    p_openCallBack->klass = 0LL;
    sub_1B4CF34(p_openCallBack, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallBack->fields.m_target)(
      openCallBack->fields.original_method_info,
      *(_QWORD *)&openCallBack->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_o *__fastcall SkillUpResultWindowComponent__GetServantSkillEntity(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_49BEA57 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantSkillMaster___, *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49BEA57 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantSkillMaster___)) == 0LL )
  {
    sub_1B4D1EC(Instance, v10);
  }
  return ServantSkillMaster__getEntityFromSkillId((ServantSkillMaster_o *)Instance, svtId, num, skillId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_o *__fastcall SkillUpResultWindowComponent__GetSkillEntity(
        SkillUpResultWindowComponent_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BEA56 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&skillId);
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49BEA56 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1B4D1EC(Instance, v7);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    skillId,
    (const MethodInfo_319D9E8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  return (SkillEntity_o *)entity;
}


void __fastcall SkillUpResultWindowComponent__Init(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B4D1EC(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t oldFriendShipRank,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  __int64 gameObject; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Text_StringBuilder_o *v35; // x20
  int32_t SvtId; // w22
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  System_Collections_Generic_List_object__o *v39; // x0
  Il2CppObject *current; // x23
  System_String_o *v41; // x0
  __int64 v42; // x1
  System_String_o *v43; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v45; // x0
  int32_t v46; // w23
  UILabel_o *friendshipLabel; // x22
  UnityEngine_GameObject_o *v48; // x20
  UILabel_o *friendshipCurrentLvLabel; // x20
  UILabel_o *friendshipResultLvLabel; // x20
  UIWidget_o *v51; // x20
  SkillUpResultWindowComponent_c *v52; // x8
  struct UILabel_o *v53; // x8
  System_Action_o *v54; // x20
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+0h] [xbp-90h] BYREF
  int32_t FriendShipRank; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-70h] BYREF
  int32_t oldFriendShipRanka; // [xsp+3Ch] [xbp-54h] BYREF

  oldFriendShipRanka = oldFriendShipRank;
  if ( (byte_49BEA52 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, usrSvtData);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIWidget___, v9);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v14);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v15);
    sub_1B4CF90(&NetworkManager_TypeInfo, v16);
    sub_1B4CF90(&ServantCommentManager_TypeInfo, v17);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B4CF90(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v19);
    sub_1B4CF90(&Method_SkillUpResultWindowComponent_EndOpen__, v20);
    sub_1B4CF90(&Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__, v21);
    sub_1B4CF90(&SkillUpResultWindowComponent_TypeInfo, v22);
    sub_1B4CF90(&System_Text_StringBuilder_TypeInfo, v23);
    sub_1B4CF90(&StringLiteral_10874/*"RESULT_BOUNDS_OPENQUEST"*/, v24);
    sub_1B4CF90(&StringLiteral_10876/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, v25);
    sub_1B4CF90(&StringLiteral_10870/*"RESULT_BOUNDS_GETVOICE"*/, v26);
    sub_1B4CF90(&StringLiteral_1/*""*/, v27);
    byte_49BEA52 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  FriendShipRank = 0;
  if ( !this->fields.state )
  {
    v28 = Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1B4CFA8(Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__);
    v29 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 6, 0, 0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v32);
      gameObject = (__int64)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0LL);
      if ( gameObject )
      {
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = (__int64)this->fields.friendshipInfo;
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            this->fields.openCallBack = callback;
            sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v33, v34);
            gameObject = (__int64)this->fields.friendshipLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v35 = (System_Text_StringBuilder_o *)sub_1B4D1DC(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v35, 0LL);
              if ( usrSvtData )
              {
                SvtId = UserServantEntity__getSvtId(usrSvtData, 0LL);
                gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  MasterData_object = DataManager__GetMasterData_object_(
                                        (DataManager_o *)gameObject,
                                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_49B57A5 )
                  {
                    sub_1B4CF90(&NetworkManager_TypeInfo, v31);
                    byte_49B57A5 = 1;
                  }
                  gameObject = (__int64)NetworkManager_TypeInfo;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    gameObject = (__int64)NetworkManager_TypeInfo;
                  }
                  if ( MasterData_object )
                  {
                    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                         (UserServantCollectionMaster_o *)MasterData_object,
                                         *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                                         SvtId,
                                         0LL);
                    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                    if ( gameObject )
                    {
                      v39 = (System_Collections_Generic_List_object__o *)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                                                                           (clsQuestCheck_o *)gameObject,
                                                                           SvtId,
                                                                           oldFriendShipRank,
                                                                           8,
                                                                           0LL);
                      if ( v39 )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v55,
                          v39,
                          (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
                        v57 = v55;
                        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v57,
                                  (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
                        {
                          current = v57.fields._current;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v41 = LocalizationManager__Get((System_String_o *)StringLiteral_10874/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
                          if ( !current )
                            sub_1B4D1EC(v41, v42);
                          v43 = v41;
                          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
                          v45 = System_String__Format(v43, QuestName, 0LL);
                          if ( !v35 )
                            sub_1B4D1EC(v45, v45);
                          System_Text_StringBuilder__AppendLine_61179876(v35, v45, 0LL);
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v57,
                          (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
                      }
                      v46 = oldFriendShipRanka;
                      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                      gameObject = ServantCommentManager__IsOpenByServantFriendShip(SvtId, v46, 0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10876/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, 0LL);
                        if ( !v35 )
                          goto LABEL_60;
                        gameObject = (__int64)System_Text_StringBuilder__AppendLine_61179876(
                                                v35,
                                                (System_String_o *)gameObject,
                                                0LL);
                      }
                      if ( !EntityDefinitely )
                        goto LABEL_60;
                      gameObject = ServantVoiceMaster__isOpenByServantFriendShip(
                                     SvtId,
                                     EntityDefinitely->fields.maxLimitCount,
                                     oldFriendShipRanka,
                                     0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10870/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
                        if ( !v35 )
                          goto LABEL_60;
                        System_Text_StringBuilder__AppendLine_61179876(v35, (System_String_o *)gameObject, 0LL);
                      }
                      else if ( !v35 )
                      {
                        goto LABEL_60;
                      }
                      friendshipLabel = this->fields.friendshipLabel;
                      gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v35->klass->vtable._3_ToString.method)(
                                     v35,
                                     v35->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                      if ( friendshipLabel )
                      {
                        UILabel__set_text(friendshipLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (__int64)this->fields.friendshipLvInfo;
                        if ( gameObject )
                        {
                          v48 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
                          gameObject = UserServantCollectionEntity__getFriendShipRank(EntityDefinitely, 0LL);
                          if ( v48 )
                          {
                            UnityEngine_GameObject__SetActive(v48, (int)gameObject > oldFriendShipRanka, 0LL);
                            friendshipCurrentLvLabel = this->fields.friendshipCurrentLvLabel;
                            gameObject = (__int64)System_Int32__ToString((int32_t)&oldFriendShipRanka, 0LL);
                            if ( friendshipCurrentLvLabel )
                            {
                              UILabel__set_text(friendshipCurrentLvLabel, (System_String_o *)gameObject, 0LL);
                              friendshipResultLvLabel = this->fields.friendshipResultLvLabel;
                              FriendShipRank = UserServantCollectionEntity__getFriendShipRank(EntityDefinitely, 0LL);
                              gameObject = (__int64)System_Int32__ToString((int32_t)&FriendShipRank, 0LL);
                              if ( friendshipResultLvLabel )
                              {
                                UILabel__set_text(friendshipResultLvLabel, (System_String_o *)gameObject, 0LL);
                                gameObject = (__int64)this->fields.friendshipResultLvLabel;
                                if ( gameObject )
                                {
                                  gameObject = (__int64)UnityEngine_Component__GetComponent_object_(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
                                  v51 = (UIWidget_o *)gameObject;
                                  v52 = SkillUpResultWindowComponent_TypeInfo;
                                  if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
                                    v52 = SkillUpResultWindowComponent_TypeInfo;
                                  }
                                  if ( v51 )
                                  {
                                    UIWidget__set_color(v51, v52->static_fields->COLOR_VAL, 0LL);
                                    v53 = this->fields.friendshipLabel;
                                    if ( v53 )
                                    {
                                      if ( !System_String__IsNullOrEmpty(v53->fields.mText, 0LL) )
                                      {
LABEL_58:
                                        v54 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v54,
                                          (Il2CppObject *)this,
                                          Method_SkillUpResultWindowComponent_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v54, 0, 0LL);
                                        return;
                                      }
                                      gameObject = (__int64)GameObjectExtensions__GetParent(
                                                              this->fields.friendshipInfo,
                                                              0LL);
                                      if ( gameObject )
                                      {
                                        gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)gameObject,
                                                                0LL);
                                        if ( gameObject )
                                        {
                                          UnityEngine_GameObject__SetActive(
                                            (UnityEngine_GameObject_o *)gameObject,
                                            0,
                                            0LL);
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
    sub_1B4D1EC(gameObject, v31);
  }
}


void __fastcall SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
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

  if ( (byte_49BEA4F & 1) == 0 )
  {
    sub_1B4CF90(&Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__, addManager);
    byte_49BEA4F = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B4CFA8(Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v17);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfo;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoAddRoot;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoNormalRoot;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = this->fields.npInfoHeroineNpChangeRoot;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.npInfoNpChangeRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.npInfoNpChangeRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.npInfoAddResultComponent) == 0LL) )
  {
LABEL_16:
    sub_1B4D1EC(gameObject, v16);
  }
  NpInfoAddResultComponent__SetDisplay(
    (NpInfoAddResultComponent_o *)gameObject,
    addManager,
    index,
    titleText,
    isRankUp,
    this->fields.svtTransformCount,
    v18);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent__OpenNpUpResultInfo(
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

  if ( (byte_49BEA4E & 1) == 0 )
  {
    sub_1B4CF90(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__, *(_QWORD *)&oldTargetId);
    byte_49BEA4E = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B4CFA8(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v17);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfo;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoNormalRoot;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = this->fields.npInfoHeroineNpChangeRoot;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoNpChangeRoot;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.npInfoAddRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld) == 0LL)
    || (HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, oldTargetId, oldTargetLv, v18),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow) == 0LL) )
  {
LABEL_16:
    sub_1B4D1EC(gameObject, v16);
  }
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, v19);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__OpenNpUpResultInfo_45824980(
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  _BOOL4 v28; // w26
  _BOOL4 v29; // w27
  _BOOL4 IsHeroine; // w28
  _BOOL4 v31; // w20
  int v32; // w27
  int v33; // w28
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x7
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x6
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  struct System_String_array *titles; // x8
  System_String_o *titleText; // x3
  System_Action_o *v42; // x20
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v43; // [xsp+0h] [xbp-70h]
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49BEA50 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, usrSvtData);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v18);
    sub_1B4CF90(&Method_SkillUpResultWindowComponent_EndOpen__, v19);
    sub_1B4CF90(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___75594104, v20);
    byte_49BEA50 = 1;
  }
  transformInfo = 0LL;
  if ( !this->fields.state )
  {
    v21 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___75594104;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___75594104 + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1B4CFA8(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___75594104);
    v22 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, 6, 0, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v25);
      gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0LL);
      if ( gameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          gameObject = this->fields.npInfo;
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            this->fields.openCallBack = callback;
            sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v26, v27);
            if ( usrSvtData )
            {
              gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformCount(usrSvtData, 1, 0LL);
              this->fields.svtTransformCount = (int)gameObject;
              if ( addManager )
              {
                v43 = addManager;
                v28 = addManager->fields._tdAddEntity_k__BackingField != 0LL;
                v29 = (int)gameObject > 1;
                IsHeroine = UserServantEntity__IsHeroine(usrSvtData, 0LL);
                v31 = targetIdOld != targetId;
                if ( targetIdOld == targetId && UserServantEntity__IsHeroine(usrSvtData, 0LL) )
                  targetIdOld = 0;
                gameObject = this->fields.npInfoAddRoot;
                if ( gameObject )
                {
                  v32 = v29 || v28;
                  UnityEngine_GameObject__SetActive(gameObject, v32, 0LL);
                  gameObject = this->fields.npInfoNormalRoot;
                  if ( gameObject )
                  {
                    v33 = targetLvOld != targetLv && IsHeroine && v31;
                    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)(v33 | (kind == 18) | v32) != 1, 0LL);
                    gameObject = this->fields.npInfoHeroineNpChangeRoot;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, v33, 0LL);
                      gameObject = this->fields.npInfoNpChangeRoot;
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive(gameObject, kind == 18, 0LL);
                        if ( v33 )
                        {
                          gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld;
                          if ( gameObject )
                          {
                            HeroineNpChangeInfoComponent__Setup(
                              (HeroineNpChangeInfoComponent_o *)gameObject,
                              targetIdOld,
                              targetLvOld,
                              v34);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow;
                            if ( gameObject )
                            {
                              HeroineNpChangeInfoComponent__Setup(
                                (HeroineNpChangeInfoComponent_o *)gameObject,
                                targetId,
                                targetLv,
                                v36);
LABEL_40:
                              v42 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
                              System_Action___ctor(
                                v42,
                                (Il2CppObject *)this,
                                Method_SkillUpResultWindowComponent_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0LL);
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
                              v34);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.npChangeInfoNow;
                            if ( gameObject )
                            {
                              HeroineNpChangeInfoComponent__SetupForNpChange(
                                (HeroineNpChangeInfoComponent_o *)gameObject,
                                targetId,
                                targetLv,
                                v37);
                              goto LABEL_40;
                            }
                          }
                        }
                        else
                        {
                          if ( !v32 )
                          {
                            SkillUpResultWindowComponent__SetupNpUpResultInfoNormal(
                              this,
                              usrSvtData,
                              targetId,
                              targetLv,
                              targetIdOld,
                              targetLvOld,
                              kind,
                              v35);
                            goto LABEL_40;
                          }
                          gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(
                                                                     this->fields.npInfo,
                                                                     0LL);
                          if ( gameObject )
                          {
                            gameObject = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                            if ( gameObject )
                            {
                              gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                         gameObject,
                                                                         (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( gameObject )
                              {
                                UIWidget__set_height((UIWidget_o *)gameObject, 300, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformedServantInfo(
                                                                           usrSvtData,
                                                                           &transformInfo,
                                                                           0,
                                                                           0LL);
                                tdAddEntity_k__BackingField = v43->fields._tdAddEntity_k__BackingField;
                                if ( !tdAddEntity_k__BackingField )
                                  goto LABEL_35;
                                titles = tdAddEntity_k__BackingField->fields.titles;
                                if ( !titles )
                                  goto LABEL_35;
                                if ( !titles->max_length )
                                  sub_1B4D1F4(gameObject, v24);
                                titleText = titles->m_Items[0];
                                if ( !titleText )
                                {
LABEL_35:
                                  if ( !transformInfo )
                                    goto LABEL_42;
                                  titleText = transformInfo->fields.titleText;
                                }
                                gameObject = (UnityEngine_GameObject_o *)this->fields.npInfoAddResultComponent;
                                if ( gameObject )
                                {
                                  NpInfoAddResultComponent__SetDisplay(
                                    (NpInfoAddResultComponent_o *)gameObject,
                                    v43,
                                    0,
                                    titleText,
                                    kind == 8,
                                    this->fields.svtTransformCount,
                                    v38);
                                  goto LABEL_40;
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
LABEL_42:
    sub_1B4D1EC(gameObject, v24);
  }
}


void __fastcall SkillUpResultWindowComponent__OpenPowerUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x21
  __int64 v23; // x20
  __int64 v24; // x22
  Il2CppObject *Entity; // x0
  UILabel_o *powerupLabel; // x20
  Il2CppObject *v27; // x21
  System_Action_o *v28; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_49BEA53 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, usrSvtData);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v9);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B4CF90(&Method_SkillUpResultWindowComponent_EndOpen__, v12);
    sub_1B4CF90(&Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__, v13);
    sub_1B4CF90(&StringLiteral_10875/*"RESULT_BOUNDS_POWERUP"*/, v14);
    byte_49BEA53 = 1;
  }
  if ( !this->fields.state )
  {
    v15 = Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1B4CFA8(Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__);
    v16 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 6, 0, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SkillUpResultWindowComponent__SetChildrenActive(this, 0, v19);
    gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = this->fields.powerupInfo;
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.openCallBack = callback;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v20, v21);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !usrSvtData )
      goto LABEL_20;
    v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    v24 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v29.fields.currentCryptoKey = v24;
    *(_QWORD *)&v29.fields.fakeValue = v23;
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                               v29,
                                               0LL);
    if ( !v22 )
      goto LABEL_20;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v22,
               (int32_t)gameObject,
               (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    powerupLabel = this->fields.powerupLabel;
    v27 = Entity;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10875/*"RESULT_BOUNDS_POWERUP"*/, 0LL);
    if ( !v27
      || (gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)v27[4].monitor,
                                                     0LL),
          !powerupLabel) )
    {
LABEL_20:
      sub_1B4D1EC(gameObject, v18);
    }
    UILabel__set_text(powerupLabel, (System_String_o *)gameObject, 0LL);
    v28 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v28, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent__OpenSkillChangeMessage(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_String_o *BattleName; // x0
  UILabel_o *costumeChangeLabel; // x21
  Il2CppObject *v19; // x22
  System_String_o *v20; // x0

  if ( (byte_49BEA4C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B4CF90(&Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__, v10);
    sub_1B4CF90(&StringLiteral_3797/*"COSTUME_CHANGE_DESCRIPTION"*/, v11);
    byte_49BEA4C = 1;
  }
  v12 = Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B4CFA8(Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 6, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v16);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.costumeChangeInfo, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.costumeChangeInfo;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                             svtId,
                                             (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_16;
  BattleName = ServantEntity__getBattleName((ServantEntity_o *)gameObject, 0, -1, 0LL);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  v19 = (Il2CppObject *)BattleName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3797/*"COSTUME_CHANGE_DESCRIPTION"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v20, v19, 0LL);
  if ( !costumeChangeLabel )
LABEL_16:
    sub_1B4D1EC(gameObject, v15);
  UILabel__set_text(costumeChangeLabel, (System_String_o *)gameObject, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent__OpenSkillChangeResultInfo(
        SkillUpResultWindowComponent_o *this,
        int32_t oldSkillId,
        int32_t oldSkillLv,
        int32_t nowSkillId,
        int32_t nowSkillLv,
        System_String_o *costumeName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  UILabel_o *skillChangeInfoTitle; // x26
  System_String_o *v23; // x0
  const MethodInfo *v24; // x5

  if ( (byte_49BEA4D & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId);
    sub_1B4CF90(&Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__, v15);
    sub_1B4CF90(&StringLiteral_3798/*"COSTUME_CHANGE_SKILL_TITLE"*/, v16);
    byte_49BEA4D = 1;
  }
  v17 = Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1B4CFA8(Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__);
  v18 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v17, v17[4]);
  OverwriteAssetSoundName__PlaySystemSe(v18, 6, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v21);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.skillChangeInfo, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.skillChangeInfo;
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  skillChangeInfoTitle = this->fields.skillChangeInfoTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v23, (Il2CppObject *)costumeName, 0LL);
  if ( !skillChangeInfoTitle )
LABEL_13:
    sub_1B4D1EC(gameObject, v20);
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)gameObject, 0LL);
  SkillUpResultWindowComponent__SetSkillInfo(this, oldSkillId, oldSkillLv, nowSkillId, nowSkillLv, v24);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        int32_t targetId,
        int32_t targetLv,
        System_Action_o *callback,
        int32_t targetIdOld,
        int32_t targetLvOld,
        int32_t baseSvtId,
        System_Int32_array *skillList,
        bool isOpen,
        bool isRelease,
        bool isDispLv,
        System_String_o *dispBattleName,
        bool isForceRelease,
        const MethodInfo *method)
{
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  char v45; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v46; // x21
  SkillEntity_o *v47; // x29
  int32_t v48; // w24
  il2cpp_array_size_t max_length; // w8
  int32_t v50; // w9
  ServantSkillMaster_o *v51; // x20
  ServantSkillEntity_o *v52; // x26
  int32_t v53; // w28
  int32_t skillNum; // w22
  int32_t IconCnt; // w22
  UnityEngine_GameObject_o *skillAfter; // x8
  UILabel_o *skillBefChargeTimeLb; // x21
  UnityEngine_GameObject_o *beforeChargeTimeInfo; // x21
  bool v59; // w27
  UILabel_o *skillAftChargeTimeLb; // x25
  UnityEngine_GameObject_o *AfterChargeTimeInfo; // x25
  System_String_o *v62; // x25
  System_String_o *v63; // x20
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  UnityEngine_Object_o *skillAftForceReleaseLb; // x25
  System_String_o *v70; // x1
  UnityEngine_Object_o *servantSkillStrengthStatusAfter; // x22
  System_String_o *PATH; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  ServantSkillStrengthStatus_o *v77; // x22
  UILabel_o *skillAftTitleLb; // x25
  UILabel_o *v79; // x22
  int32_t m_CachedPtr; // w22
  UILabel_o *v81; // x21
  UILabel_o *skillBefTitleLb; // x21
  System_String_o *v83; // x22
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  System_String_o *v87; // x20
  int32_t v88; // w8
  Il2CppObject *v89; // x0
  System_String_o *v90; // x0
  int32_t v91; // w21
  int32_t v92; // w21
  ServantSkillEntity_o *EntityFromSkillId; // x0
  int32_t v94; // w21
  UnityEngine_Object_o *skillBefForceReleaseLb; // x22
  System_String_o *v96; // x1
  int32_t StrengthStatus; // w0
  int32_t v98; // w21
  int32_t v99; // w22
  ServantSkillEntity_o *v100; // x0
  ServantSkillEntity_o *v101; // x20
  int32_t v102; // w0
  UnityEngine_Object_o *servantSkillStrengthStatusBefore; // x23
  struct ServantSkillStrengthStatus_o **p_servantSkillStrengthStatusBefore; // x20
  System_String_o *v105; // x23
  UnityEngine_Transform_o *v106; // x0
  Il2CppObject *v107; // x0
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  UILabel_o *v110; // x20
  System_Action_o *v111; // x20
  ServantSkillMaster_o *v112; // [xsp+18h] [xbp-A8h]
  int32_t svtId; // [xsp+24h] [xbp-9Ch]
  System_String_o *str1; // [xsp+28h] [xbp-98h]
  int32_t v115; // [xsp+40h] [xbp-80h]
  int key; // [xsp+44h] [xbp-7Ch]
  int32_t v117; // [xsp+48h] [xbp-78h] BYREF
  int32_t EffectChargeTurn; // [xsp+4Ch] [xbp-74h] BYREF
  System_String_o *detail; // [xsp+50h] [xbp-70h] BYREF
  System_String_o *name; // [xsp+58h] [xbp-68h] BYREF
  UnityEngine_Vector2Int_o v121; // 0:x6.8
  UnityEngine_Vector2Int_o v122; // 0:x6.8

  if ( (byte_49BEA4B & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&targetId);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantSkillMaster___, v22);
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillMaster___, v23);
    sub_1B4CF90(&DataManager_TypeInfo, v24);
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v25);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v26);
    sub_1B4CF90(&int_TypeInfo, v27);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v28);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v29);
    sub_1B4CF90(&ServantSkillStrengthStatus_TypeInfo, v30);
    sub_1B4CF90(&Method_SkillUpResultWindowComponent_EndOpen__, v31);
    sub_1B4CF90(&Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__, v32);
    sub_1B4CF90(&StringLiteral_2022/*"APPEND_SKILL_RESULT_AFTER_LV"*/, v33);
    sub_1B4CF90(&StringLiteral_11950/*"SKILL_COMBINE_FORCE_RELEASE_NAME"*/, v34);
    sub_1B4CF90(&StringLiteral_1/*""*/, v35);
    sub_1B4CF90(&StringLiteral_11947/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, v36);
    sub_1B4CF90(&StringLiteral_2023/*"APPEND_SKILL_RESULT_LV"*/, v37);
    byte_49BEA4B = 1;
  }
  detail = 0LL;
  name = 0LL;
  EffectChargeTurn = 0;
  if ( this->fields.state )
    return;
  v38 = Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__ + 83) & 2) != 0 )
    v38 = (_QWORD *)sub_1B4CFA8(Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__);
  v39 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v38, v38[4]);
  OverwriteAssetSoundName__PlaySystemSe(v39, 6, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v42);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.skillInfo, 0LL);
  if ( !gameObject )
    goto LABEL_147;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.skillInfo;
  if ( !gameObject )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.openCallBack = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v43, v44);
  gameObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(dispBattleName, 0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_147;
  v45 = (char)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.titleLabel, 0LL);
  if ( !gameObject )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive(gameObject, (v45 ^ 1) & 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_147;
  UILabel__set_text((UILabel_o *)gameObject, dispBattleName, 0LL);
  if ( (v45 & 1) == 0 && !this->fields.changedLayout )
  {
    GameObjectExtensions__AddLocalPositionY(this->fields.skillInfo, this->fields.skillInfoOffset, 0LL);
    this->fields.changedLayout = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !gameObject )
    goto LABEL_147;
  v115 = targetLvOld;
  v46 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                             targetId,
                                             (const MethodInfo_319D99C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillList )
    goto LABEL_147;
  v47 = (SkillEntity_o *)gameObject;
  v48 = 0;
  max_length = skillList->max_length;
  while ( v48 < (int)max_length )
  {
    if ( v48 >= max_length )
      sub_1B4D1F4(gameObject, v41);
    v50 = skillList->m_Items[++v48];
    if ( v50 == targetId )
      goto LABEL_26;
  }
  v48 = 0;
LABEL_26:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( !gameObject )
    goto LABEL_147;
  v51 = (ServantSkillMaster_o *)gameObject;
  svtId = baseSvtId;
  gameObject = (UnityEngine_GameObject_o *)ServantSkillMaster__getEntityFromSkillId(
                                             (ServantSkillMaster_o *)gameObject,
                                             baseSvtId,
                                             v48,
                                             targetId,
                                             0LL);
  if ( !v47 )
    goto LABEL_147;
  v52 = (ServantSkillEntity_o *)gameObject;
  SkillEntity__getSkillMessageInfo(v47, &name, &detail, targetLv, 0LL);
  key = targetIdOld;
  v53 = targetIdOld >= 1 ? v115 : targetLv - 1;
  if ( v52 )
  {
    skillNum = v52->fields.skillNum;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    IconCnt = ServantSkillStrengthStatus__GetIconCnt(skillNum, 0LL);
  }
  else
  {
    IconCnt = 0;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11950/*"SKILL_COMBINE_FORCE_RELEASE_NAME"*/, 0LL);
  skillAfter = this->fields.skillAfter;
  str1 = (System_String_o *)gameObject;
  if ( !skillAfter )
    goto LABEL_147;
  v112 = v51;
  if ( isOpen )
  {
    UnityEngine_GameObject__SetActive(skillAfter, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
    if ( !gameObject )
      goto LABEL_147;
    SkillIconComponent__Set_38776180((SkillIconComponent_o *)gameObject, targetId, targetLv, 0LL);
    skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v47, targetLv, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !skillBefChargeTimeLb )
      goto LABEL_147;
    UILabel__set_text(skillBefChargeTimeLb, (System_String_o *)gameObject, 0LL);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v47, v53, 0LL);
    v59 = isForceRelease;
    if ( !beforeChargeTimeInfo )
      goto LABEL_147;
  }
  else
  {
    UnityEngine_GameObject__SetActive(skillAfter, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconAft;
    if ( !gameObject )
      goto LABEL_147;
    SkillIconComponent__Set_38776180((SkillIconComponent_o *)gameObject, targetId, targetLv, 0LL);
    skillAftChargeTimeLb = this->fields.skillAftChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v47, targetLv, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !skillAftChargeTimeLb )
      goto LABEL_147;
    UILabel__set_text(skillAftChargeTimeLb, (System_String_o *)gameObject, 0LL);
    AfterChargeTimeInfo = this->fields.AfterChargeTimeInfo;
    gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v47, targetLv, 0LL);
    if ( !AfterChargeTimeInfo )
      goto LABEL_147;
    UnityEngine_GameObject__SetActive(AfterChargeTimeInfo, (int)gameObject > 0, 0LL);
    if ( isDispLv )
    {
      v62 = name;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v63 = LocalizationManager__Get((System_String_o *)StringLiteral_2022/*"APPEND_SKILL_RESULT_AFTER_LV"*/, 0LL);
      v117 = targetLv;
      v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v117, v64, v65, v66);
      v68 = System_String__Format(v63, v67, 0LL);
      name = System_String__Concat_61093468(v62, v68, 0LL);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
    if ( !gameObject )
      goto LABEL_147;
    UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
    skillAftForceReleaseLb = (UnityEngine_Object_o *)this->fields.skillAftForceReleaseLb;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillAftForceReleaseLb, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftForceReleaseLb;
      if ( !gameObject )
        goto LABEL_147;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_147;
      UnityEngine_GameObject__SetActive(gameObject, IconCnt > 0 && isForceRelease, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftForceReleaseLb;
      if ( !gameObject )
        goto LABEL_147;
      if ( isForceRelease )
        v70 = str1;
      else
        v70 = (System_String_o *)StringLiteral_1/*""*/;
      UILabel__set_text((UILabel_o *)gameObject, v70, 0LL);
    }
    if ( v52 && IconCnt >= 1 )
    {
      servantSkillStrengthStatusAfter = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusAfter;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(servantSkillStrengthStatusAfter, 0LL, 0LL) )
      {
        if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
        if ( !gameObject )
          goto LABEL_147;
        PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = BaseMonoBehaviour__createObject_38781524((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
        if ( !gameObject )
          goto LABEL_147;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        this->fields.servantSkillStrengthStatusAfter = (struct ServantSkillStrengthStatus_o *)Component_object;
        sub_1B4CF34(
          (CGThumbnailListItem_o *)&this->fields.servantSkillStrengthStatusAfter,
          (int32_t)Component_object,
          v75,
          v76);
      }
      v77 = this->fields.servantSkillStrengthStatusAfter;
      skillAftTitleLb = this->fields.skillAftTitleLb;
      gameObject = (UnityEngine_GameObject_o *)ServantSkillEntity__GetStrengthStatus(v52, 0LL);
      if ( !v77 )
        goto LABEL_147;
      v121 = (UnityEngine_Vector2Int_o)0x1200000014LL;
      ServantSkillStrengthStatus__Set(
        v77,
        skillAftTitleLb,
        (int32_t)gameObject,
        v52->fields.skillNum,
        20,
        -9,
        v121,
        280,
        this->fields.skillAftForceReleaseLb,
        0LL);
    }
    else
    {
      if ( !IconCnt && isForceRelease )
      {
        v79 = this->fields.skillAftTitleLb;
        gameObject = (UnityEngine_GameObject_o *)System_String__Concat_61093468(name, str1, 0LL);
        if ( !v79 )
          goto LABEL_147;
        UILabel__set_text(v79, (System_String_o *)gameObject, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
      if ( !gameObject )
        goto LABEL_147;
      UILabel__SetCondensedScale((UILabel_o *)gameObject, 280, 0, 0LL);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftdetailLb;
    if ( !gameObject )
      goto LABEL_147;
    m_CachedPtr = gameObject[17].fields.m_CachedPtr;
    WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, m_CachedPtr, 0, 0LL);
    if ( key < 1 )
    {
      SkillEntity__getSkillMessageInfo(v47, &name, &detail, v53, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_147;
      SkillIconComponent__Set_38776180((SkillIconComponent_o *)gameObject, targetId, v53, 0LL);
      v59 = isForceRelease;
    }
    else
    {
      gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v46,
                                                 key,
                                                 (const MethodInfo_319D99C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !gameObject )
        goto LABEL_147;
      v47 = (SkillEntity_o *)gameObject;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)gameObject, &name, &detail, v53, 0LL);
      v59 = isForceRelease;
      if ( !isRelease && !isForceRelease )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        detail = LocalizationManager__Get((System_String_o *)StringLiteral_11947/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, 0LL);
        WrapControlText__textBBCodeAdjust(this->fields.skillAftdetailLb, detail, m_CachedPtr, 0, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_147;
      SkillIconComponent__Set_38776180((SkillIconComponent_o *)gameObject, key, v53, 0LL);
    }
    v81 = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v47, v53, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !v81 )
      goto LABEL_147;
    UILabel__set_text(v81, (System_String_o *)gameObject, 0LL);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v47, v53, 0LL);
    if ( !beforeChargeTimeInfo )
      goto LABEL_147;
  }
  UnityEngine_GameObject__SetActive(beforeChargeTimeInfo, (int)gameObject > 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
  if ( !gameObject )
    goto LABEL_147;
  UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
  if ( isDispLv )
  {
    skillBefTitleLb = this->fields.skillBefTitleLb;
    v83 = name;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v87 = LocalizationManager__Get((System_String_o *)StringLiteral_2023/*"APPEND_SKILL_RESULT_LV"*/, 0LL);
    v88 = v115;
    if ( isOpen )
      v88 = targetLv;
    v117 = v88;
    v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v117, v84, v85, v86);
    v90 = System_String__Format(v87, v89, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_61093468(v83, v90, 0LL);
    if ( !skillBefTitleLb )
      goto LABEL_147;
    UILabel__set_text(skillBefTitleLb, (System_String_o *)gameObject, 0LL);
  }
  if ( v52 )
  {
    v91 = v52->fields.skillNum;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    v92 = ServantSkillStrengthStatus__GetIconCnt(v91, 0LL);
    if ( key >= 1 )
    {
      EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v112, svtId, v48, key, 0LL);
      if ( EntityFromSkillId )
      {
        v94 = EntityFromSkillId->fields.skillNum;
        if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
        v92 = ServantSkillStrengthStatus__GetIconCnt(v94, 0LL);
      }
    }
  }
  else
  {
    v92 = 0;
  }
  skillBefForceReleaseLb = (UnityEngine_Object_o *)this->fields.skillBefForceReleaseLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillBefForceReleaseLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefForceReleaseLb;
    if ( !gameObject )
      goto LABEL_147;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_147;
    UnityEngine_GameObject__SetActive(gameObject, v92 > 0 && v59, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefForceReleaseLb;
    if ( !gameObject )
      goto LABEL_147;
    if ( v59 )
      v96 = str1;
    else
      v96 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v96, 0LL);
  }
  if ( v52 && v92 >= 1 )
  {
    StrengthStatus = ServantSkillEntity__GetStrengthStatus(v52, 0LL);
    v98 = v52->fields.skillNum;
    v99 = StrengthStatus;
    if ( key >= 1 )
    {
      v100 = ServantSkillMaster__getEntityFromSkillId(v112, svtId, v48, key, 0LL);
      if ( v100 )
      {
        v101 = v100;
        v102 = ServantSkillEntity__GetStrengthStatus(v100, 0LL);
        v98 = v101->fields.skillNum;
        v99 = v102;
      }
    }
    servantSkillStrengthStatusBefore = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusBefore;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_servantSkillStrengthStatusBefore = &this->fields.servantSkillStrengthStatusBefore;
    if ( !UnityEngine_Object__op_Equality(servantSkillStrengthStatusBefore, 0LL, 0LL) )
      goto LABEL_136;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
    if ( gameObject )
    {
      v105 = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
      v106 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = BaseMonoBehaviour__createObject_38781524((BaseMonoBehaviour_o *)this, v105, v106, 0LL, 0LL);
      if ( gameObject )
      {
        v107 = UnityEngine_GameObject__GetComponent_object_(
                 gameObject,
                 (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        *p_servantSkillStrengthStatusBefore = (struct ServantSkillStrengthStatus_o *)v107;
        sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.servantSkillStrengthStatusBefore, (int32_t)v107, v108, v109);
LABEL_136:
        gameObject = (UnityEngine_GameObject_o *)*p_servantSkillStrengthStatusBefore;
        if ( !*p_servantSkillStrengthStatusBefore )
          goto LABEL_147;
        v122 = (UnityEngine_Vector2Int_o)0x1200000014LL;
        ServantSkillStrengthStatus__Set(
          (ServantSkillStrengthStatus_o *)gameObject,
          this->fields.skillBefTitleLb,
          v99,
          v98,
          20,
          -9,
          v122,
          280,
          this->fields.skillBefForceReleaseLb,
          0LL);
        goto LABEL_144;
      }
    }
LABEL_147:
    sub_1B4D1EC(gameObject, v41);
  }
  if ( !v92 && v59 )
  {
    v110 = this->fields.skillBefTitleLb;
    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_61093468(name, str1, 0LL);
    if ( !v110 )
      goto LABEL_147;
    UILabel__set_text(v110, (System_String_o *)gameObject, 0LL);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
  if ( !gameObject )
    goto LABEL_147;
  UILabel__SetCondensedScale((UILabel_o *)gameObject, 280, 0, 0LL);
LABEL_144:
  gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefdetailLb;
  if ( !gameObject )
    goto LABEL_147;
  WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, gameObject[17].fields.m_CachedPtr, 0, 0LL);
  v111 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v111, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v111, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent__SetChildrenActive(
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
  UnityEngine_GameObject__SetActive(skillInfo, enable, 0LL);
  skillInfo = this->fields.skillChangeInfo;
  if ( !skillInfo )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(skillInfo, v5, 0LL);
  skillInfo = this->fields.npInfo;
  if ( !skillInfo
    || (UnityEngine_GameObject__SetActive(skillInfo, enable, 0LL), (skillInfo = this->fields.friendshipInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(skillInfo, enable, 0LL), (skillInfo = this->fields.powerupInfo) == 0LL)
    || (v7 = enable,
        UnityEngine_GameObject__SetActive(skillInfo, v7, 0LL),
        (skillInfo = this->fields.costumeChangeInfo) == 0LL) )
  {
LABEL_8:
    sub_1B4D1EC(skillInfo, enable);
  }
  UnityEngine_GameObject__SetActive(skillInfo, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent__SetSkillInfo(
        SkillUpResultWindowComponent_o *this,
        int32_t oldSkillId,
        int32_t oldSkillLv,
        int32_t nowSkillId,
        int32_t nowSkillLv,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UILabel_o *skillChangeInfoSubTitleOld; // x24
  System_String_o *SkillEntity; // x0
  __int64 v16; // x1
  SkillUpResultWindowComponent_o *v17; // x0
  const MethodInfo *v18; // x2
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v20; // x0
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  SkillUpResultWindowComponent_o *v22; // x0
  const MethodInfo *v23; // x2
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v25; // x0
  System_String_o *text; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *v27; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_49BEA58 & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId);
    sub_1B4CF90(&StringLiteral_6844/*"GET_SKILL_NAME"*/, v11);
    sub_1B4CF90(&StringLiteral_1937/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, v12);
    sub_1B4CF90(&StringLiteral_2900/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, v13);
    byte_49BEA58 = 1;
  }
  detail = 0LL;
  name = 0LL;
  text = 0LL;
  v27 = 0LL;
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_2900/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleOld, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v17, oldSkillId, v18);
  if ( !SkillEntity )
    goto LABEL_14;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &name, &detail, oldSkillLv, 0LL);
  skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_6844/*"GET_SKILL_NAME"*/, 0LL);
  SkillEntity = System_String__Format(v20, (Il2CppObject *)name, 0LL);
  if ( !skillChangeInfoNameOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoNameOld, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailOld;
  if ( !SkillEntity )
    goto LABEL_14;
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, detail, SkillEntity[17].fields._stringLength, 0, 0LL);
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_1937/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleNow, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v22, nowSkillId, v23);
  if ( !SkillEntity
    || (SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &v27, &text, nowSkillLv, 0LL),
        skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow,
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6844/*"GET_SKILL_NAME"*/, 0LL),
        SkillEntity = System_String__Format(v25, (Il2CppObject *)v27, 0LL),
        !skillChangeInfoNameNow)
    || (UILabel__set_text(skillChangeInfoNameNow, SkillEntity, 0LL),
        (SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailNow) == 0LL) )
  {
LABEL_14:
    sub_1B4D1EC(SkillEntity, v16);
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, text, SkillEntity[17].fields._stringLength, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__SetupNpUpResultInfoNormal(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t targetId,
        int32_t targetLv,
        int32_t targetIdOld,
        int32_t targetLvOld,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  void *Master_object; // x0
  __int64 v23; // x1
  TreasureDvcMaster_o *v24; // x26
  __int64 v25; // x27
  __int64 v26; // x28
  TreasureDvcEntity_o *v27; // x25
  TreasureDvcLvEntity_o *v28; // x22
  bool v29; // w26
  UILabel_o *currentNpLvLb; // x24
  UILabel_o *resNpLvLb; // x24
  UIWidget_o *v32; // x24
  SkillUpResultWindowComponent_c *v33; // x8
  System_String_o **v34; // x8
  UIWidget_o *v35; // x24
  SkillUpResultWindowComponent_c *v36; // x8
  UILabel_o *npBefDetailLb; // x20
  struct UILabel_o *v38; // x8
  System_String_o *v39; // x1
  System_String_o *DetalShort_40630472; // x21
  TreasureDvcLvEntity_o *v41; // x0
  int32_t mFontSize; // w2
  System_String_o *v43; // x1
  UILabel_o *resNpLvFirstLb; // x24
  struct UILabel_o *v45; // x20
  struct UILabel_o *v46; // x8
  UILabel_o *npAftDetailLb; // x20
  struct UILabel_o *v48; // x8
  int32_t v49; // [xsp+Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  lv = targetLv;
  if ( (byte_49BEA51 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIWidget___, usrSvtData);
    sub_1B4CF90(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v15);
    sub_1B4CF90(&Method_DataManager_GetMaster_TreasureDvcMaster___, v16);
    sub_1B4CF90(&DataManager_TypeInfo, v17);
    sub_1B4CF90(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v18);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1B4CF90(&SkillUpResultWindowComponent_TypeInfo, v20);
    sub_1B4CF90(&StringLiteral_1/*""*/, v21);
    byte_49BEA51 = 1;
  }
  entity = 0LL;
  v49 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !usrSvtData )
    goto LABEL_69;
  v24 = (TreasureDvcMaster_o *)Master_object;
  v26 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v26;
  *(_QWORD *)&v52.fields.fakeValue = v25;
  Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v52, 0LL);
  if ( !v24 )
    goto LABEL_69;
  v27 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v24, (int32_t)Master_object, targetId, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !v27 || !Master_object )
    goto LABEL_69;
  v28 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v27->fields.id, targetLv, 0LL);
  Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v24,
                            &entity,
                            targetIdOld,
                            (const MethodInfo_319D9E8 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    targetIdOld = 0;
  if ( !this->fields.npRubyNameLb )
    goto LABEL_69;
  UILabel__set_text(this->fields.npRubyNameLb, v27->fields.ruby, 0LL);
  Master_object = this->fields.npNameLb;
  if ( !Master_object )
    goto LABEL_69;
  v29 = kind != 5;
  UILabel__set_text((UILabel_o *)Master_object, v27->fields.name, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(usrSvtData, this->fields.npNameLb, this->fields.npRubyNameLb, 0LL);
  v49 = targetLvOld;
  if ( targetIdOld > 0 || kind == 5 )
  {
    Master_object = this->fields.npRankInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v29, 0LL);
    Master_object = this->fields.npLvInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = this->fields.npLvFirstInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = this->fields.npChangeSp;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v29, 0LL);
    Master_object = this->fields.npRankupBeforeLb;
    if ( !Master_object )
      goto LABEL_69;
    v34 = (System_String_o **)(entity ? &entity[2].monitor : &StringLiteral_1/*""*/);
    UILabel__set_text((UILabel_o *)Master_object, *v34, 0LL);
    Master_object = this->fields.npRankupAfterLb;
    if ( !Master_object )
      goto LABEL_69;
    UILabel__set_text((UILabel_o *)Master_object, v27->fields.rank, 0LL);
    Master_object = this->fields.npRankupAfterLb;
    if ( !Master_object )
      goto LABEL_69;
    Master_object = UnityEngine_Component__GetComponent_object_(
                      (UnityEngine_Component_o *)Master_object,
                      (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v35 = (UIWidget_o *)Master_object;
    v36 = SkillUpResultWindowComponent_TypeInfo;
    if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v36 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v35 )
      goto LABEL_69;
    UIWidget__set_color(v35, v36->static_fields->COLOR_VAL, 0LL);
    v49 = targetLvOld;
    if ( !v28 )
      goto LABEL_61;
  }
  else if ( targetLvOld <= 0 )
  {
    Master_object = this->fields.npRankInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = this->fields.npLvInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = this->fields.npLvFirstInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
    Master_object = this->fields.npChangeSp;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    resNpLvFirstLb = this->fields.resNpLvFirstLb;
    Master_object = System_Int32__ToString((int32_t)&lv, 0LL);
    if ( !resNpLvFirstLb )
      goto LABEL_69;
    UILabel__set_text(resNpLvFirstLb, (System_String_o *)Master_object, 0LL);
    if ( !v28 )
    {
LABEL_61:
      Master_object = this->fields.npBefDetailLb;
      if ( Master_object )
      {
        UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        Master_object = this->fields.npAftDetailLb;
        if ( Master_object )
        {
          v39 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_64;
        }
      }
      goto LABEL_69;
    }
  }
  else
  {
    currentNpLvLb = this->fields.currentNpLvLb;
    Master_object = System_Int32__ToString((int32_t)&v49, 0LL);
    if ( !currentNpLvLb )
      goto LABEL_69;
    UILabel__set_text(currentNpLvLb, (System_String_o *)Master_object, 0LL);
    resNpLvLb = this->fields.resNpLvLb;
    Master_object = System_Int32__ToString((int32_t)&lv, 0LL);
    if ( !resNpLvLb )
      goto LABEL_69;
    UILabel__set_text(resNpLvLb, (System_String_o *)Master_object, 0LL);
    Master_object = this->fields.resNpLvLb;
    if ( !Master_object )
      goto LABEL_69;
    Master_object = UnityEngine_Component__GetComponent_object_(
                      (UnityEngine_Component_o *)Master_object,
                      (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v32 = (UIWidget_o *)Master_object;
    v33 = SkillUpResultWindowComponent_TypeInfo;
    if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v33 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v32 )
      goto LABEL_69;
    UIWidget__set_color(v32, v33->static_fields->COLOR_VAL, 0LL);
    Master_object = this->fields.npRankInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = this->fields.npLvInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
    Master_object = this->fields.npLvFirstInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    if ( !v28 )
      goto LABEL_61;
  }
  if ( kind == 5 )
  {
    npBefDetailLb = this->fields.npBefDetailLb;
    Master_object = TreasureDvcLvEntity__getDetalShort_40630472(v28, lv, 0LL);
    v38 = this->fields.npBefDetailLb;
    if ( v38 )
    {
      WrapControlText__textAdjust(npBefDetailLb, (System_String_o *)Master_object, v38->fields.mFontSize, 0, 0LL);
      Master_object = this->fields.npAftDetailLb;
      if ( Master_object )
      {
        v39 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_64:
        UILabel__set_text((UILabel_o *)Master_object, v39, 0LL);
        return;
      }
    }
LABEL_69:
    sub_1B4D1EC(Master_object, v23);
  }
  if ( targetIdOld < 1 )
  {
    v45 = this->fields.npBefDetailLb;
    Master_object = TreasureDvcLvEntity__getDetalShort_40630472(v28, v49, 0LL);
    v46 = this->fields.npBefDetailLb;
    if ( !v46 )
      goto LABEL_69;
    mFontSize = v46->fields.mFontSize;
    v43 = (System_String_o *)Master_object;
    Master_object = v45;
  }
  else
  {
    DetalShort_40630472 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !Master_object )
      goto LABEL_69;
    v41 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, targetIdOld, targetLvOld, 0LL);
    if ( v41 )
      DetalShort_40630472 = TreasureDvcLvEntity__getDetalShort_40630472(v41, v49, 0LL);
    Master_object = this->fields.npBefDetailLb;
    if ( !Master_object )
      goto LABEL_69;
    mFontSize = *((_DWORD *)Master_object + 106);
    v43 = DetalShort_40630472;
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)Master_object, v43, mFontSize, 0, 0LL);
  npAftDetailLb = this->fields.npAftDetailLb;
  Master_object = TreasureDvcLvEntity__getDetalShort_40630472(v28, lv, 0LL);
  v48 = this->fields.npAftDetailLb;
  if ( !v48 )
    goto LABEL_69;
  WrapControlText__textBBCodeAdjust(npAftDetailLb, (System_String_o *)Master_object, v48->fields.mFontSize, 0, 0LL);
}