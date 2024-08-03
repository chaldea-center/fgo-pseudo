void __fastcall SkillUpResultWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FFCAE & 1) == 0 )
  {
    sub_1B640C8(&SkillUpResultWindowComponent_TypeInfo, v1);
    byte_49FFCAE = 1;
  }
  *SkillUpResultWindowComponent_TypeInfo->static_fields = (struct SkillUpResultWindowComponent_StaticFields)xmmword_BA3BD0;
}


void __fastcall SkillUpResultWindowComponent___ctor(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_49FFCAD & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49FFCAD = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SkillUpResultWindowComponent__Close(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x0
  System_Action_o *v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_49FFCA8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SkillUpResultWindowComponent_EndClose__, v4);
    byte_49FFCA8 = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  SkillUpResultWindowComponent__Close_44644036(this, v6, v7);
}


void __fastcall SkillUpResultWindowComponent__Close_44644036(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_49FFCA9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_SkillUpResultWindowComponent_EndClose__, v4);
    byte_49FFCA9 = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, callback, method);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall SkillUpResultWindowComponent__EndClose(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x2

  SkillUpResultWindowComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        SkillUpResultWindowComponent__SetChildrenActive(this, 0, v4),
        (gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0LL)) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
    sub_1B64324(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__EndOpen(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *openCallBack; // x19
  ServantStatusBattleListViewItem_o *p_openCallBack; // x0

  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    p_openCallBack = (ServantStatusBattleListViewItem_o *)&this->fields.openCallBack;
    p_openCallBack->klass = 0LL;
    sub_1B6406C(p_openCallBack, 0, v2, v3);
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

  if ( (byte_49FFCAB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FFCAB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FFCAA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&skillId);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFCAA = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    skillId,
    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  return (SkillEntity_o *)entity;
}


void __fastcall SkillUpResultWindowComponent__Init(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
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
  const MethodInfo *v31; // x2
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x1
  __int64 v35; // x2
  System_Text_StringBuilder_o *v36; // x21
  int32_t SvtId; // w22
  Il2CppObject *MasterData_object; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x20
  System_Collections_Generic_List_object__o *v40; // x0
  Il2CppObject *current; // x23
  System_String_o *v42; // x0
  System_String_o *v43; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v45; // x0
  int32_t v46; // w23
  UILabel_o *friendshipLabel; // x22
  UnityEngine_GameObject_o *v48; // x21
  UILabel_o *friendshipCurrentLvLabel; // x21
  UILabel_o *friendshipResultLvLabel; // x21
  UIWidget_o *v51; // x20
  SkillUpResultWindowComponent_c *v52; // x8
  struct UILabel_o *v53; // x8
  __int64 v54; // x1
  __int64 v55; // x2
  System_Action_o *v56; // x20
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+0h] [xbp-90h] BYREF
  int32_t FriendShipRank; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-70h] BYREF
  int32_t oldFriendShipRanka; // [xsp+3Ch] [xbp-54h] BYREF

  oldFriendShipRanka = oldFriendShipRank;
  if ( (byte_49FFCA6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, usrSvtData);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&NetworkManager_TypeInfo, v16);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v19);
    sub_1B640C8(&Method_SkillUpResultWindowComponent_EndOpen__, v20);
    sub_1B640C8(&Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__, v21);
    sub_1B640C8(&SkillUpResultWindowComponent_TypeInfo, v22);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v23);
    sub_1B640C8(&StringLiteral_11032/*"RESULT_BOUNDS_OPENQUEST"*/, v24);
    sub_1B640C8(&StringLiteral_11034/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, v25);
    sub_1B640C8(&StringLiteral_11029/*"RESULT_BOUNDS_GETVOICE"*/, v26);
    sub_1B640C8(&StringLiteral_1/*""*/, v27);
    byte_49FFCA6 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  FriendShipRank = 0;
  if ( !this->fields.state )
  {
    v28 = Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1B640E0(Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__);
    v29 = (System_Reflection_MethodBase_o *)sub_1B640AC(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 6, 0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v31);
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
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, (int32_t)callback, v32, v33);
            gameObject = (__int64)this->fields.friendshipLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v36 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v34, v35);
              System_Text_StringBuilder___ctor(v36, 0LL);
              if ( usrSvtData )
              {
                SvtId = UserServantEntity__getSvtId(usrSvtData, 0LL);
                gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  MasterData_object = DataManager__GetMasterData_object_(
                                        (DataManager_o *)gameObject,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  gameObject = NetworkManager__get_UserId(0LL);
                  if ( MasterData_object )
                  {
                    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                         (UserServantCollectionMaster_o *)MasterData_object,
                                         gameObject,
                                         SvtId,
                                         0LL);
                    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                    if ( gameObject )
                    {
                      v40 = (System_Collections_Generic_List_object__o *)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                                                                           (clsQuestCheck_o *)gameObject,
                                                                           SvtId,
                                                                           oldFriendShipRank,
                                                                           8,
                                                                           0LL);
                      if ( v40 )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v57,
                          v40,
                          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
                        v59 = v57;
                        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v59,
                                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
                        {
                          current = v59.fields._current;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v42 = LocalizationManager__Get((System_String_o *)StringLiteral_11032/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
                          if ( !current )
                            sub_1B64324(v42);
                          v43 = v42;
                          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
                          v45 = System_String__Format(v43, QuestName, 0LL);
                          if ( !v36 )
                            sub_1B64324(v45);
                          System_Text_StringBuilder__AppendLine_60537772(v36, v45, 0LL);
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v59,
                          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
                      }
                      v46 = oldFriendShipRanka;
                      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                      gameObject = ServantCommentManager__IsOpenByServantFriendShip(SvtId, v46, 0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11034/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, 0LL);
                        if ( !v36 )
                          goto LABEL_56;
                        gameObject = (__int64)System_Text_StringBuilder__AppendLine_60537772(
                                                v36,
                                                (System_String_o *)gameObject,
                                                0LL);
                      }
                      if ( !EntityDefinitely )
                        goto LABEL_56;
                      gameObject = ServantVoiceMaster__isOpenByServantFriendShip(
                                     SvtId,
                                     EntityDefinitely->fields.maxLimitCount,
                                     oldFriendShipRanka,
                                     0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11029/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
                        if ( !v36 )
                          goto LABEL_56;
                        System_Text_StringBuilder__AppendLine_60537772(v36, (System_String_o *)gameObject, 0LL);
                      }
                      else if ( !v36 )
                      {
                        goto LABEL_56;
                      }
                      friendshipLabel = this->fields.friendshipLabel;
                      gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v36->klass->vtable._3_ToString.method)(
                                     v36,
                                     v36->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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
                                                          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
LABEL_54:
                                        v56 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v54, v55);
                                        System_Action___ctor(
                                          v56,
                                          (Il2CppObject *)this,
                                          Method_SkillUpResultWindowComponent_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v56, 0, 0LL);
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
                                          goto LABEL_54;
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
LABEL_56:
    sub_1B64324(gameObject);
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
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x5

  if ( (byte_49FFCA3 & 1) == 0 )
  {
    sub_1B640C8(&Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__, addManager);
    byte_49FFCA3 = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B640E0(Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B640AC(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v16);
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
    sub_1B64324(gameObject);
  }
  NpInfoAddResultComponent__SetDisplay(
    (NpInfoAddResultComponent_o *)gameObject,
    addManager,
    index,
    titleText,
    isRankUp,
    v17);
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
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3

  if ( (byte_49FFCA2 & 1) == 0 )
  {
    sub_1B640C8(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__, *(_QWORD *)&oldTargetId);
    byte_49FFCA2 = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B640E0(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B640AC(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v16);
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
    || (HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, oldTargetId, oldTargetLv, v17),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow) == 0LL) )
  {
LABEL_16:
    sub_1B64324(gameObject);
  }
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, v18);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__OpenNpUpResultInfo_44602348(
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
  const MethodInfo *v24; // x2
  int32_t v25; // w2
  int32_t v26; // w3
  int v27; // w27
  _BOOL4 IsHeroine; // w28
  _BOOL4 v29; // w20
  int v30; // w28
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x7
  const MethodInfo *v33; // x3
  __int64 v34; // x1
  __int64 v35; // x2
  const MethodInfo *v36; // x3
  __int64 v37; // x1
  const MethodInfo *v38; // x5
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  struct System_String_array *titles; // x8
  System_String_o *titleText; // x3
  System_Action_o *v42; // x20
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v43; // [xsp+0h] [xbp-70h]
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FFCA4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, usrSvtData);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v18);
    sub_1B640C8(&Method_SkillUpResultWindowComponent_EndOpen__, v19);
    sub_1B640C8(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___75813848, v20);
    byte_49FFCA4 = 1;
  }
  transformInfo = 0LL;
  if ( !this->fields.state )
  {
    v21 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___75813848;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___75813848 + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1B640E0(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___75813848);
    v22 = (System_Reflection_MethodBase_o *)sub_1B640AC(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, 6, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v24);
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
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, (int32_t)callback, v25, v26);
            if ( addManager )
            {
              v43 = addManager;
              if ( addManager->fields._tdAddEntity_k__BackingField )
              {
                if ( !usrSvtData )
                  goto LABEL_46;
                v27 = 1;
              }
              else
              {
                if ( !usrSvtData )
                  goto LABEL_46;
                v27 = UserServantEntity__GetTransformCount(usrSvtData, 1, 0LL) > 1;
              }
              IsHeroine = UserServantEntity__IsHeroine(usrSvtData, 0LL);
              v29 = targetIdOld != targetId;
              if ( targetIdOld == targetId && UserServantEntity__IsHeroine(usrSvtData, 0LL) )
                targetIdOld = 0;
              gameObject = this->fields.npInfoAddRoot;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, v27, 0LL);
                gameObject = this->fields.npInfoNormalRoot;
                if ( gameObject )
                {
                  v30 = targetLvOld != targetLv && IsHeroine && v29;
                  UnityEngine_GameObject__SetActive(gameObject, (v27 == 0) & (kind != 18) & ~(_BYTE)v30, 0LL);
                  gameObject = this->fields.npInfoHeroineNpChangeRoot;
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive(gameObject, v30, 0LL);
                    gameObject = this->fields.npInfoNpChangeRoot;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, kind == 18, 0LL);
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
LABEL_44:
                            v42 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v34, v35);
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
                            v31);
                          gameObject = (UnityEngine_GameObject_o *)this->fields.npChangeInfoNow;
                          if ( gameObject )
                          {
                            HeroineNpChangeInfoComponent__SetupForNpChange(
                              (HeroineNpChangeInfoComponent_o *)gameObject,
                              targetId,
                              targetLv,
                              v36);
                            goto LABEL_44;
                          }
                        }
                      }
                      else
                      {
                        if ( !v27 )
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
                          goto LABEL_44;
                        }
                        gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(
                                                                   this->fields.npInfo,
                                                                   0LL);
                        if ( gameObject )
                        {
                          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                          if ( gameObject )
                          {
                            gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       gameObject,
                                                                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                                goto LABEL_39;
                              titles = tdAddEntity_k__BackingField->fields.titles;
                              if ( !titles )
                                goto LABEL_39;
                              if ( !titles->max_length )
                                sub_1B6432C(gameObject, v37);
                              titleText = titles->m_Items[0];
                              if ( !titleText )
                              {
LABEL_39:
                                if ( !transformInfo )
                                  goto LABEL_46;
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
                                  v38);
                                goto LABEL_44;
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
LABEL_46:
    sub_1B64324(gameObject);
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
  const MethodInfo *v18; // x2
  int32_t v19; // w2
  int32_t v20; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  __int64 v22; // x20
  __int64 v23; // x22
  Il2CppObject *Entity; // x0
  UILabel_o *powerupLabel; // x20
  Il2CppObject *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_o *v29; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_49FFCA7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, usrSvtData);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&Method_SkillUpResultWindowComponent_EndOpen__, v12);
    sub_1B640C8(&Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__, v13);
    sub_1B640C8(&StringLiteral_11033/*"RESULT_BOUNDS_POWERUP"*/, v14);
    byte_49FFCA7 = 1;
  }
  if ( !this->fields.state )
  {
    v15 = Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1B640E0(Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__);
    v16 = (System_Reflection_MethodBase_o *)sub_1B640AC(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 6, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SkillUpResultWindowComponent__SetChildrenActive(this, 0, v18);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, (int32_t)callback, v19, v20);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !usrSvtData )
      goto LABEL_20;
    v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    v23 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v30.fields.currentCryptoKey = v23;
    *(_QWORD *)&v30.fields.fakeValue = v22;
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                               v30,
                                               0LL);
    if ( !v21 )
      goto LABEL_20;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v21,
               (int32_t)gameObject,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    powerupLabel = this->fields.powerupLabel;
    v26 = Entity;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11033/*"RESULT_BOUNDS_POWERUP"*/, 0LL);
    if ( !v26
      || (gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)v26[4].monitor,
                                                     0LL),
          !powerupLabel) )
    {
LABEL_20:
      sub_1B64324(gameObject);
    }
    UILabel__set_text(powerupLabel, (System_String_o *)gameObject, 0LL);
    v29 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v27, v28);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0LL);
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
  const MethodInfo *v15; // x2
  System_String_o *BattleName; // x0
  UILabel_o *costumeChangeLabel; // x21
  Il2CppObject *v18; // x22
  System_String_o *v19; // x0

  if ( (byte_49FFCA0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__, v10);
    sub_1B640C8(&StringLiteral_3869/*"COSTUME_CHANGE_DESCRIPTION"*/, v11);
    byte_49FFCA0 = 1;
  }
  v12 = Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B640E0(Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v15);
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
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                             svtId,
                                             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_16;
  BattleName = ServantEntity__getBattleName((ServantEntity_o *)gameObject, 0, -1, 0LL);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  v18 = (Il2CppObject *)BattleName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3869/*"COSTUME_CHANGE_DESCRIPTION"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v19, v18, 0LL);
  if ( !costumeChangeLabel )
LABEL_16:
    sub_1B64324(gameObject);
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
  const MethodInfo *v20; // x2
  UILabel_o *skillChangeInfoTitle; // x26
  System_String_o *v22; // x0
  const MethodInfo *v23; // x5

  if ( (byte_49FFCA1 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId);
    sub_1B640C8(&Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__, v15);
    sub_1B640C8(&StringLiteral_3870/*"COSTUME_CHANGE_SKILL_TITLE"*/, v16);
    byte_49FFCA1 = 1;
  }
  v17 = Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1B640E0(Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__);
  v18 = (System_Reflection_MethodBase_o *)sub_1B640AC(v17, v17[4]);
  OverwriteAssetSoundName__PlaySystemSe(v18, 6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v20);
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
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3870/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v22, (Il2CppObject *)costumeName, 0LL);
  if ( !skillChangeInfoTitle )
LABEL_13:
    sub_1B64324(gameObject);
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)gameObject, 0LL);
  SkillUpResultWindowComponent__SetSkillInfo(this, oldSkillId, oldSkillLv, nowSkillId, nowSkillLv, v23);
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
        const MethodInfo *method)
{
  __int64 v21; // x1
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
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v38; // x2
  int32_t v39; // w2
  int32_t v40; // w3
  char v41; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x21
  __int64 v43; // x1
  bool v44; // w22
  SkillEntity_o *v45; // x28
  il2cpp_array_size_t max_length; // w8
  int32_t v47; // w25
  int32_t v48; // w9
  ServantSkillEntity_o *v49; // x26
  int32_t v50; // w29
  UILabel_o *skillBefChargeTimeLb; // x21
  SkillEntity_o *v52; // x0
  int32_t v53; // w1
  UILabel_o *skillAftChargeTimeLb; // x22
  UnityEngine_GameObject_o *AfterChargeTimeInfo; // x22
  UILabel_o *skillAftTitleLb; // x22
  System_String_o *v57; // x27
  System_String_o *v58; // x20
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  UnityEngine_Object_o *servantSkillStrengthStatusAfter; // x22
  System_String_o *PATH; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w20
  ServantSkillStrengthStatus_o *v68; // x22
  UILabel_o *v69; // x27
  int32_t m_CachedPtr; // w22
  int32_t v71; // w1
  UnityEngine_GameObject_o *beforeChargeTimeInfo; // x21
  bool v73; // w28
  UILabel_o *skillBefTitleLb; // x21
  System_String_o *v75; // x22
  System_String_o *v76; // x20
  int32_t v77; // w8
  Il2CppObject *v78; // x0
  System_String_o *v79; // x0
  int32_t StrengthStatus; // w0
  int32_t v81; // w21
  int32_t skillNum; // w20
  UnityEngine_Object_o *servantSkillStrengthStatusBefore; // x23
  struct ServantSkillStrengthStatus_o **p_servantSkillStrengthStatusBefore; // x22
  System_String_o *v85; // x23
  UnityEngine_Transform_o *v86; // x0
  Il2CppObject *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  __int64 v90; // x1
  __int64 v91; // x2
  System_Action_o *v92; // x20
  int32_t v93; // [xsp+4h] [xbp-9Ch]
  ServantSkillMaster_o *v94; // [xsp+10h] [xbp-90h]
  int32_t v95; // [xsp+1Ch] [xbp-84h]
  int32_t v96; // [xsp+24h] [xbp-7Ch]
  int32_t v97; // [xsp+28h] [xbp-78h] BYREF
  int32_t EffectChargeTurn; // [xsp+2Ch] [xbp-74h] BYREF
  System_String_o *detail; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *name; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector2Int_o v101; // 0:x6.8
  UnityEngine_Vector2Int_o v102; // 0:x6.8

  if ( (byte_49FFC9F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&targetId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v21);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v22);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v23);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v24);
    sub_1B640C8(&int_TypeInfo, v25);
    sub_1B640C8(&LocalizationManager_TypeInfo, v26);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v27);
    sub_1B640C8(&ServantSkillStrengthStatus_TypeInfo, v28);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1B640C8(&Method_SkillUpResultWindowComponent_EndOpen__, v30);
    sub_1B640C8(&Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__, v31);
    sub_1B640C8(&StringLiteral_2111/*"APPEND_SKILL_RESULT_AFTER_LV"*/, v32);
    sub_1B640C8(&StringLiteral_12089/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, v33);
    sub_1B640C8(&StringLiteral_2112/*"APPEND_SKILL_RESULT_LV"*/, v34);
    byte_49FFC9F = 1;
  }
  detail = 0LL;
  name = 0LL;
  EffectChargeTurn = 0;
  if ( !this->fields.state )
  {
    v35 = Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__ + 83) & 2) != 0 )
      v35 = (_QWORD *)sub_1B640E0(Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__);
    v36 = (System_Reflection_MethodBase_o *)sub_1B640AC(v35, v35[4]);
    OverwriteAssetSoundName__PlaySystemSe(v36, 6, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v38);
      gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.skillInfo, 0LL);
      if ( gameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          gameObject = this->fields.skillInfo;
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            this->fields.openCallBack = callback;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, (int32_t)callback, v39, v40);
            gameObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(dispBattleName, 0LL);
            if ( this->fields.titleLabel )
            {
              v41 = (char)gameObject;
              gameObject = UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.titleLabel,
                             0LL);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, (v41 ^ 1) & 1, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
                if ( gameObject )
                {
                  UILabel__set_text((UILabel_o *)gameObject, dispBattleName, 0LL);
                  if ( (v41 & 1) == 0 && !this->fields.changedLayout )
                  {
                    GameObjectExtensions__AddLocalPositionY(this->fields.skillInfo, this->fields.skillInfoOffset, 0LL);
                    this->fields.changedLayout = 1;
                  }
                  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( gameObject )
                  {
                    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)gameObject,
                                                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
                    if ( gameObject )
                    {
                      v96 = targetLvOld;
                      v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
                      gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                                 targetId,
                                                                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                      if ( skillList )
                      {
                        v44 = isOpen;
                        v45 = (SkillEntity_o *)gameObject;
                        max_length = skillList->max_length;
                        v47 = 0;
                        while ( v47 < (int)max_length )
                        {
                          if ( v47 >= max_length )
                            sub_1B6432C(gameObject, v43);
                          v48 = skillList->m_Items[++v47];
                          if ( v48 == targetId )
                            goto LABEL_25;
                        }
                        v47 = 0;
LABEL_25:
                        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( gameObject )
                        {
                          gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                                     (DataManager_o *)gameObject,
                                                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
                          if ( gameObject )
                          {
                            v94 = (ServantSkillMaster_o *)gameObject;
                            v95 = baseSvtId;
                            gameObject = (UnityEngine_GameObject_o *)ServantSkillMaster__getEntityFromSkillId(
                                                                       (ServantSkillMaster_o *)gameObject,
                                                                       baseSvtId,
                                                                       v47,
                                                                       targetId,
                                                                       0LL);
                            if ( v45 )
                            {
                              v49 = (ServantSkillEntity_o *)gameObject;
                              SkillEntity__getSkillMessageInfo(v45, &name, &detail, targetLv, 0LL);
                              gameObject = this->fields.skillAfter;
                              v50 = targetIdOld >= 1 ? v96 : targetLv - 1;
                              if ( gameObject )
                              {
                                if ( isOpen )
                                {
                                  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
                                  if ( !gameObject )
                                    goto LABEL_96;
                                  SkillIconComponent__Set_37921136(
                                    (SkillIconComponent_o *)gameObject,
                                    targetId,
                                    targetLv,
                                    0LL);
                                  skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
                                  v52 = v45;
                                  v53 = targetLv;
                                }
                                else
                                {
                                  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconAft;
                                  if ( !gameObject )
                                    goto LABEL_96;
                                  SkillIconComponent__Set_37921136(
                                    (SkillIconComponent_o *)gameObject,
                                    targetId,
                                    targetLv,
                                    0LL);
                                  skillAftChargeTimeLb = this->fields.skillAftChargeTimeLb;
                                  EffectChargeTurn = SkillEntity__getEffectChargeTurn(v45, targetLv, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                             (int32_t)&EffectChargeTurn,
                                                                             0LL);
                                  if ( !skillAftChargeTimeLb )
                                    goto LABEL_96;
                                  UILabel__set_text(skillAftChargeTimeLb, (System_String_o *)gameObject, 0LL);
                                  AfterChargeTimeInfo = this->fields.AfterChargeTimeInfo;
                                  gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(
                                                                             v45,
                                                                             targetLv,
                                                                             0LL);
                                  if ( !AfterChargeTimeInfo )
                                    goto LABEL_96;
                                  UnityEngine_GameObject__SetActive(AfterChargeTimeInfo, (int)gameObject > 0, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
                                  if ( !gameObject )
                                    goto LABEL_96;
                                  UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
                                  if ( isDispLv )
                                  {
                                    v93 = targetIdOld;
                                    skillAftTitleLb = this->fields.skillAftTitleLb;
                                    v57 = name;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_2111/*"APPEND_SKILL_RESULT_AFTER_LV"*/, 0LL);
                                    v97 = targetLv;
                                    v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97);
                                    v60 = System_String__Format(v58, v59, 0LL);
                                    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_61375396(
                                                                               v57,
                                                                               v60,
                                                                               0LL);
                                    if ( !skillAftTitleLb )
                                      goto LABEL_96;
                                    UILabel__set_text(skillAftTitleLb, (System_String_o *)gameObject, 0LL);
                                    targetIdOld = v93;
                                  }
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
                                  if ( !gameObject )
                                    goto LABEL_96;
                                  UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
                                  if ( v49 )
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
                                        goto LABEL_96;
                                      PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
                                      transform = UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)gameObject,
                                                    0LL);
                                      gameObject = BaseMonoBehaviour__createObject_37994916(
                                                     (BaseMonoBehaviour_o *)this,
                                                     PATH,
                                                     transform,
                                                     0LL,
                                                     0LL);
                                      if ( !gameObject )
                                        goto LABEL_96;
                                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                                           gameObject,
                                                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                                      this->fields.servantSkillStrengthStatusAfter = (struct ServantSkillStrengthStatus_o *)Component_object;
                                      sub_1B6406C(
                                        (ServantStatusBattleListViewItem_o *)&this->fields.servantSkillStrengthStatusAfter,
                                        (int32_t)Component_object,
                                        v65,
                                        v66);
                                    }
                                    v67 = targetIdOld;
                                    v68 = this->fields.servantSkillStrengthStatusAfter;
                                    v69 = this->fields.skillAftTitleLb;
                                    gameObject = (UnityEngine_GameObject_o *)ServantSkillEntity__GetStrengthStatus(
                                                                               v49,
                                                                               0LL);
                                    if ( !v68 )
                                      goto LABEL_96;
                                    v101 = (UnityEngine_Vector2Int_o)0x1200000014LL;
                                    ServantSkillStrengthStatus__Set(
                                      v68,
                                      v69,
                                      (int32_t)gameObject,
                                      v49->fields.skillNum,
                                      20,
                                      -9,
                                      v101,
                                      0LL);
                                    targetIdOld = v67;
                                  }
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftdetailLb;
                                  if ( !gameObject )
                                    goto LABEL_96;
                                  m_CachedPtr = gameObject[17].fields.m_CachedPtr;
                                  WrapControlText__textBBCodeAdjust(
                                    (UILabel_o *)gameObject,
                                    detail,
                                    m_CachedPtr,
                                    0,
                                    0,
                                    0LL);
                                  if ( targetIdOld < 1 )
                                  {
                                    SkillEntity__getSkillMessageInfo(v45, &name, &detail, v50, 0LL);
                                    gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v71 = targetId;
                                  }
                                  else
                                  {
                                    gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                                               v42,
                                                                               targetIdOld,
                                                                               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v45 = (SkillEntity_o *)gameObject;
                                    SkillEntity__getSkillMessageInfo(
                                      (SkillEntity_o *)gameObject,
                                      &name,
                                      &detail,
                                      v50,
                                      0LL);
                                    if ( !isRelease )
                                    {
                                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                      detail = LocalizationManager__Get((System_String_o *)StringLiteral_12089/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, 0LL);
                                      WrapControlText__textBBCodeAdjust(
                                        this->fields.skillAftdetailLb,
                                        detail,
                                        m_CachedPtr,
                                        0,
                                        0,
                                        0LL);
                                    }
                                    gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v71 = targetIdOld;
                                  }
                                  SkillIconComponent__Set_37921136((SkillIconComponent_o *)gameObject, v71, v50, 0LL);
                                  v44 = isOpen;
                                  skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
                                  v52 = v45;
                                  v53 = v50;
                                }
                                EffectChargeTurn = SkillEntity__getEffectChargeTurn(v52, v53, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                           (int32_t)&EffectChargeTurn,
                                                                           0LL);
                                if ( !skillBefChargeTimeLb )
                                  goto LABEL_96;
                                UILabel__set_text(skillBefChargeTimeLb, (System_String_o *)gameObject, 0LL);
                                beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
                                gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v45, v50, 0LL);
                                if ( !beforeChargeTimeInfo )
                                  goto LABEL_96;
                                UnityEngine_GameObject__SetActive(beforeChargeTimeInfo, (int)gameObject > 0, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
                                if ( !gameObject )
                                  goto LABEL_96;
                                UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
                                if ( isDispLv )
                                {
                                  v73 = v44;
                                  skillBefTitleLb = this->fields.skillBefTitleLb;
                                  v75 = name;
                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_2112/*"APPEND_SKILL_RESULT_LV"*/, 0LL);
                                  v77 = v96;
                                  if ( v73 )
                                    v77 = targetLv;
                                  v97 = v77;
                                  v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97);
                                  v79 = System_String__Format(v76, v78, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)System_String__Concat_61375396(v75, v79, 0LL);
                                  if ( !skillBefTitleLb )
                                    goto LABEL_96;
                                  UILabel__set_text(skillBefTitleLb, (System_String_o *)gameObject, 0LL);
                                }
                                gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
                                if ( !gameObject )
                                  goto LABEL_96;
                                UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
                                if ( v49 )
                                {
                                  StrengthStatus = ServantSkillEntity__GetStrengthStatus(v49, 0LL);
                                  if ( targetIdOld >= 1 )
                                  {
                                    gameObject = (UnityEngine_GameObject_o *)ServantSkillMaster__getEntityFromSkillId(
                                                                               v94,
                                                                               v95,
                                                                               v47,
                                                                               targetIdOld,
                                                                               0LL);
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v49 = (ServantSkillEntity_o *)gameObject;
                                    StrengthStatus = ServantSkillEntity__GetStrengthStatus(
                                                       (ServantSkillEntity_o *)gameObject,
                                                       0LL);
                                  }
                                  v81 = StrengthStatus;
                                  skillNum = v49->fields.skillNum;
                                  servantSkillStrengthStatusBefore = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusBefore;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  p_servantSkillStrengthStatusBefore = &this->fields.servantSkillStrengthStatusBefore;
                                  if ( UnityEngine_Object__op_Equality(servantSkillStrengthStatusBefore, 0LL, 0LL) )
                                  {
                                    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                                    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v85 = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
                                    v86 = UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)gameObject,
                                            0LL);
                                    gameObject = BaseMonoBehaviour__createObject_37994916(
                                                   (BaseMonoBehaviour_o *)this,
                                                   v85,
                                                   v86,
                                                   0LL,
                                                   0LL);
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v87 = UnityEngine_GameObject__GetComponent_object_(
                                            gameObject,
                                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                                    *p_servantSkillStrengthStatusBefore = (struct ServantSkillStrengthStatus_o *)v87;
                                    sub_1B6406C(
                                      (ServantStatusBattleListViewItem_o *)&this->fields.servantSkillStrengthStatusBefore,
                                      (int32_t)v87,
                                      v88,
                                      v89);
                                  }
                                  gameObject = (UnityEngine_GameObject_o *)*p_servantSkillStrengthStatusBefore;
                                  if ( !*p_servantSkillStrengthStatusBefore )
                                    goto LABEL_96;
                                  v102 = (UnityEngine_Vector2Int_o)0x1200000014LL;
                                  ServantSkillStrengthStatus__Set(
                                    (ServantSkillStrengthStatus_o *)gameObject,
                                    this->fields.skillBefTitleLb,
                                    v81,
                                    skillNum,
                                    20,
                                    -9,
                                    v102,
                                    0LL);
                                }
                                gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefdetailLb;
                                if ( gameObject )
                                {
                                  WrapControlText__textBBCodeAdjust(
                                    (UILabel_o *)gameObject,
                                    detail,
                                    gameObject[17].fields.m_CachedPtr,
                                    0,
                                    0,
                                    0LL);
                                  v92 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v90, v91);
                                  System_Action___ctor(
                                    v92,
                                    (Il2CppObject *)this,
                                    Method_SkillUpResultWindowComponent_EndOpen__,
                                    0LL);
                                  BaseDialog__Open((BaseDialog_o *)this, v92, 0, 0LL);
                                  return;
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
LABEL_96:
    sub_1B64324(gameObject);
  }
}


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
    sub_1B64324(skillInfo);
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
  SkillUpResultWindowComponent_o *v16; // x0
  const MethodInfo *v17; // x2
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v19; // x0
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  SkillUpResultWindowComponent_o *v21; // x0
  const MethodInfo *v22; // x2
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v24; // x0
  System_String_o *text; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *v26; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_49FFCAC & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId);
    sub_1B640C8(&StringLiteral_6893/*"GET_SKILL_NAME"*/, v11);
    sub_1B640C8(&StringLiteral_2055/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, v12);
    sub_1B640C8(&StringLiteral_2988/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, v13);
    byte_49FFCAC = 1;
  }
  detail = 0LL;
  name = 0LL;
  text = 0LL;
  v26 = 0LL;
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_2988/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleOld, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v16, oldSkillId, v17);
  if ( !SkillEntity )
    goto LABEL_14;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &name, &detail, oldSkillLv, 0LL);
  skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_6893/*"GET_SKILL_NAME"*/, 0LL);
  SkillEntity = System_String__Format(v19, (Il2CppObject *)name, 0LL);
  if ( !skillChangeInfoNameOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoNameOld, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailOld;
  if ( !SkillEntity )
    goto LABEL_14;
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, detail, SkillEntity[17].fields._stringLength, 0, 0, 0LL);
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_2055/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleNow, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v21, nowSkillId, v22);
  if ( !SkillEntity
    || (SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &v26, &text, nowSkillLv, 0LL),
        skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow,
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6893/*"GET_SKILL_NAME"*/, 0LL),
        SkillEntity = System_String__Format(v24, (Il2CppObject *)v26, 0LL),
        !skillChangeInfoNameNow)
    || (UILabel__set_text(skillChangeInfoNameNow, SkillEntity, 0LL),
        (SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailNow) == 0LL) )
  {
LABEL_14:
    sub_1B64324(SkillEntity);
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, text, SkillEntity[17].fields._stringLength, 0, 0, 0LL);
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
  TreasureDvcMaster_o *Master_object; // x0
  TreasureDvcMaster_o *v23; // x26
  __int64 v24; // x27
  __int64 v25; // x28
  TreasureDvcEntity_o *v26; // x25
  TreasureDvcLvEntity_o *v27; // x22
  bool v28; // w26
  UILabel_o *currentNpLvLb; // x24
  UILabel_o *resNpLvLb; // x24
  UIWidget_o *v31; // x24
  SkillUpResultWindowComponent_c *v32; // x8
  System_String_o **v33; // x8
  UIWidget_o *v34; // x24
  SkillUpResultWindowComponent_c *v35; // x8
  UILabel_o *npBefDetailLb; // x20
  struct UILabel_o *v37; // x8
  System_String_o *v38; // x1
  System_String_o *DetalShort_39616640; // x21
  TreasureDvcLvEntity_o *v40; // x0
  int32_t mFontSize; // w2
  System_String_o *v42; // x1
  UILabel_o *resNpLvFirstLb; // x24
  struct UILabel_o *v44; // x20
  struct UILabel_o *v45; // x8
  UILabel_o *npAftDetailLb; // x20
  struct UILabel_o *v47; // x8
  int32_t v48; // [xsp+Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  lv = targetLv;
  if ( (byte_49FFCA5 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, usrSvtData);
    sub_1B640C8(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMaster_TreasureDvcMaster___, v16);
    sub_1B640C8(&DataManager_TypeInfo, v17);
    sub_1B640C8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v18);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1B640C8(&SkillUpResultWindowComponent_TypeInfo, v20);
    sub_1B640C8(&StringLiteral_1/*""*/, v21);
    byte_49FFCA5 = 1;
  }
  entity = 0LL;
  v48 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !usrSvtData )
    goto LABEL_69;
  v23 = Master_object;
  v25 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = v25;
  *(_QWORD *)&v51.fields.fakeValue = v24;
  Master_object = (TreasureDvcMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v51, 0LL);
  if ( !v23 )
    goto LABEL_69;
  v26 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v23, (int32_t)Master_object, targetId, 0LL);
  Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !v26 || !Master_object )
    goto LABEL_69;
  v27 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v26->fields.id, targetLv, 0LL);
  Master_object = (TreasureDvcMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)v23,
                                           &entity,
                                           targetIdOld,
                                           (const MethodInfo_30D3EF8 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    targetIdOld = 0;
  if ( !this->fields.npRubyNameLb )
    goto LABEL_69;
  UILabel__set_text(this->fields.npRubyNameLb, v26->fields.ruby, 0LL);
  Master_object = (TreasureDvcMaster_o *)this->fields.npNameLb;
  if ( !Master_object )
    goto LABEL_69;
  v28 = kind != 5;
  UILabel__set_text((UILabel_o *)Master_object, v26->fields.name, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(usrSvtData, this->fields.npNameLb, this->fields.npRubyNameLb, 0LL);
  v48 = targetLvOld;
  if ( targetIdOld > 0 || kind == 5 )
  {
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v28, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvFirstInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npChangeSp;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v28, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankupBeforeLb;
    if ( !Master_object )
      goto LABEL_69;
    v33 = (System_String_o **)(entity ? &entity[2].monitor : &StringLiteral_1/*""*/);
    UILabel__set_text((UILabel_o *)Master_object, *v33, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankupAfterLb;
    if ( !Master_object )
      goto LABEL_69;
    UILabel__set_text((UILabel_o *)Master_object, v26->fields.rank, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankupAfterLb;
    if ( !Master_object )
      goto LABEL_69;
    Master_object = (TreasureDvcMaster_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)Master_object,
                                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v34 = (UIWidget_o *)Master_object;
    v35 = SkillUpResultWindowComponent_TypeInfo;
    if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v35 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v34 )
      goto LABEL_69;
    UIWidget__set_color(v34, v35->static_fields->COLOR_VAL, 0LL);
    v48 = targetLvOld;
    if ( !v27 )
      goto LABEL_61;
  }
  else if ( targetLvOld <= 0 )
  {
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvFirstInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npChangeSp;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    resNpLvFirstLb = this->fields.resNpLvFirstLb;
    Master_object = (TreasureDvcMaster_o *)System_Int32__ToString((int32_t)&lv, 0LL);
    if ( !resNpLvFirstLb )
      goto LABEL_69;
    UILabel__set_text(resNpLvFirstLb, (System_String_o *)Master_object, 0LL);
    if ( !v27 )
    {
LABEL_61:
      Master_object = (TreasureDvcMaster_o *)this->fields.npBefDetailLb;
      if ( Master_object )
      {
        UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        Master_object = (TreasureDvcMaster_o *)this->fields.npAftDetailLb;
        if ( Master_object )
        {
          v38 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_64;
        }
      }
      goto LABEL_69;
    }
  }
  else
  {
    currentNpLvLb = this->fields.currentNpLvLb;
    Master_object = (TreasureDvcMaster_o *)System_Int32__ToString((int32_t)&v48, 0LL);
    if ( !currentNpLvLb )
      goto LABEL_69;
    UILabel__set_text(currentNpLvLb, (System_String_o *)Master_object, 0LL);
    resNpLvLb = this->fields.resNpLvLb;
    Master_object = (TreasureDvcMaster_o *)System_Int32__ToString((int32_t)&lv, 0LL);
    if ( !resNpLvLb )
      goto LABEL_69;
    UILabel__set_text(resNpLvLb, (System_String_o *)Master_object, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.resNpLvLb;
    if ( !Master_object )
      goto LABEL_69;
    Master_object = (TreasureDvcMaster_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)Master_object,
                                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v31 = (UIWidget_o *)Master_object;
    v32 = SkillUpResultWindowComponent_TypeInfo;
    if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v32 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v31 )
      goto LABEL_69;
    UIWidget__set_color(v31, v32->static_fields->COLOR_VAL, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvFirstInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    if ( !v27 )
      goto LABEL_61;
  }
  if ( kind == 5 )
  {
    npBefDetailLb = this->fields.npBefDetailLb;
    Master_object = (TreasureDvcMaster_o *)TreasureDvcLvEntity__getDetalShort_39616640(v27, lv, 0LL);
    v37 = this->fields.npBefDetailLb;
    if ( v37 )
    {
      WrapControlText__textAdjust(npBefDetailLb, (System_String_o *)Master_object, v37->fields.mFontSize, 0, 0, 0LL);
      Master_object = (TreasureDvcMaster_o *)this->fields.npAftDetailLb;
      if ( Master_object )
      {
        v38 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_64:
        UILabel__set_text((UILabel_o *)Master_object, v38, 0LL);
        return;
      }
    }
LABEL_69:
    sub_1B64324(Master_object);
  }
  if ( targetIdOld < 1 )
  {
    v44 = this->fields.npBefDetailLb;
    Master_object = (TreasureDvcMaster_o *)TreasureDvcLvEntity__getDetalShort_39616640(v27, v48, 0LL);
    v45 = this->fields.npBefDetailLb;
    if ( !v45 )
      goto LABEL_69;
    mFontSize = v45->fields.mFontSize;
    v42 = (System_String_o *)Master_object;
    Master_object = (TreasureDvcMaster_o *)v44;
  }
  else
  {
    DetalShort_39616640 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !Master_object )
      goto LABEL_69;
    v40 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, targetIdOld, targetLvOld, 0LL);
    if ( v40 )
      DetalShort_39616640 = TreasureDvcLvEntity__getDetalShort_39616640(v40, v48, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npBefDetailLb;
    if ( !Master_object )
      goto LABEL_69;
    mFontSize = Master_object[5].fields.revision;
    v42 = DetalShort_39616640;
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)Master_object, v42, mFontSize, 0, 0, 0LL);
  npAftDetailLb = this->fields.npAftDetailLb;
  Master_object = (TreasureDvcMaster_o *)TreasureDvcLvEntity__getDetalShort_39616640(v27, lv, 0LL);
  v47 = this->fields.npAftDetailLb;
  if ( !v47 )
    goto LABEL_69;
  WrapControlText__textBBCodeAdjust(npAftDetailLb, (System_String_o *)Master_object, v47->fields.mFontSize, 0, 0, 0LL);
}