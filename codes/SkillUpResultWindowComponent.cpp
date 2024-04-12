// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent___cctor(const MethodInfo *method)
{
  int v1; // s3
  float v2; // s4
  float v3; // s5
  float v4; // s6
  int v5; // s0
  int v6; // s1
  int v7; // s2
  struct SkillUpResultWindowComponent_StaticFields v8; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_42AF3B9 & 1) == 0 )
  {
    sub_B52984(&SkillUpResultWindowComponent_TypeInfo);
    byte_42AF3B9 = 1;
  }
  v5 = 1065185444;
  v6 = 1064430469;
  v7 = 1050790593;
  v8 = (struct SkillUpResultWindowComponent_StaticFields)0LL;
  UnityEngine_Color___ctor_41463668(*(UnityEngine_Color_o *)(&v1 - 3), v2, v3, v4, (const MethodInfo *)&v8);
  *SkillUpResultWindowComponent_TypeInfo->static_fields = v8;
}


void __fastcall SkillUpResultWindowComponent___ctor(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42AF3B8 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42AF3B8 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SkillUpResultWindowComponent__Close(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x0
  System_Action_o *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_42AF3B3 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SkillUpResultWindowComponent_EndClose__);
    byte_42AF3B3 = 1;
  }
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  SkillUpResultWindowComponent__Close_23778932(this, v4, v5);
}


void __fastcall SkillUpResultWindowComponent__Close_23778932(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_42AF3B4 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SkillUpResultWindowComponent_EndClose__);
    byte_42AF3B4 = 1;
  }
  v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
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
    sub_B52A5C(gameObject, v4);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__EndOpen(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *openCallBack; // x19
  BattleServantConfConponent_o *p_openCallBack; // x0

  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    p_openCallBack = (BattleServantConfConponent_o *)&this->fields.openCallBack;
    p_openCallBack->klass = 0LL;
    sub_B52920(p_openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(openCallBack, 0LL);
  }
}


ServantSkillEntity_o *__fastcall SkillUpResultWindowComponent__GetServantSkillEntity(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42AF3B6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF3B6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantSkillMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v9);
  }
  return ServantSkillMaster__getEntityFromSkillId((ServantSkillMaster_o *)Instance, svtId, num, skillId, 0LL);
}


SkillEntity_o *__fastcall SkillUpResultWindowComponent__GetSkillEntity(
        SkillUpResultWindowComponent_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AF3B5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF3B5 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v5);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    skillId,
    (const MethodInfo_23E2334 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  return (SkillEntity_o *)entity;
}


void __fastcall SkillUpResultWindowComponent__Init(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
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
  __int64 gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Text_StringBuilder_o *v18; // x20
  int32_t SvtId; // w22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  System_Collections_Generic_List_QuestEntity__o *v22; // x0
  Il2CppObject *current; // x23
  System_String_o *v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v28; // x0
  int32_t v29; // w23
  UILabel_o *friendshipLabel; // x22
  UnityEngine_GameObject_o *v31; // x20
  UILabel_o *friendshipCurrentLvLabel; // x20
  UILabel_o *friendshipResultLvLabel; // x20
  UIWidget_o *v34; // x20
  SkillUpResultWindowComponent_c *v35; // x8
  struct UILabel_o *v36; // x8
  System_Action_o *v37; // x20
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-70h] BYREF
  int32_t FriendShipRank; // [xsp+48h] [xbp-48h] BYREF
  int32_t v41; // [xsp+4Ch] [xbp-44h] BYREF

  v41 = oldFriendShipRank;
  if ( (byte_42AF3B1 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ServantCommentManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_B52984(&SkillUpResultWindowComponent_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&StringLiteral_11192/*"RESULT_BOUNDS_OPENQUEST"*/);
    sub_B52984(&StringLiteral_11194/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/);
    sub_B52984(&StringLiteral_11189/*"RESULT_BOUNDS_GETVOICE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF3B1 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  FriendShipRank = 0;
  if ( !this->fields.state )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(6, (const MethodInfo *)usrSvtData);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v11);
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
            sub_B52920(
              (BattleServantConfConponent_o *)&this->fields.openCallBack,
              (System_Int32_array **)callback,
              v12,
              v13,
              v14,
              v15,
              v16,
              v17);
            gameObject = (__int64)this->fields.friendshipLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v18 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v18, 0LL);
              if ( usrSvtData )
              {
                SvtId = UserServantEntity__getSvtId(usrSvtData, 0LL);
                gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)gameObject,
                                                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  }
                  gameObject = NetworkManager__get_UserId(0LL);
                  if ( MasterData_WarQuestSelectionMaster )
                  {
                    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                         MasterData_WarQuestSelectionMaster,
                                         gameObject,
                                         SvtId,
                                         0LL);
                    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
                    }
                    gameObject = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                    if ( gameObject )
                    {
                      v22 = clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                              (clsQuestCheck_o *)gameObject,
                              SvtId,
                              oldFriendShipRank,
                              8,
                              0LL);
                      if ( v22 )
                      {
                        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                          &v38,
                          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v22,
                          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
                        v39 = v38;
                        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                  &v39,
                                  (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
                        {
                          current = v39.fields.current;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11192/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
                          if ( !current )
                            sub_B52A5C(v24, v25);
                          v26 = v24;
                          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
                          v28 = System_String__Format(v26, QuestName, 0LL);
                          if ( !v18 )
                            sub_B52A5C(v28, v28);
                          System_Text_StringBuilder__AppendLine_42994844(v18, v28, 0LL);
                        }
                        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                          &v39,
                          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
                      }
                      v29 = v41;
                      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                      }
                      gameObject = ServantCommentManager__IsOpenByServantFriendShip(SvtId, v29, 0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11194/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, 0LL);
                        if ( !v18 )
                          goto LABEL_66;
                        gameObject = (__int64)System_Text_StringBuilder__AppendLine_42994844(
                                                v18,
                                                (System_String_o *)gameObject,
                                                0LL);
                      }
                      if ( !EntityDefinitely )
                        goto LABEL_66;
                      gameObject = ServantVoiceMaster__isOpenByServantFriendShip(
                                     SvtId,
                                     EntityDefinitely->fields.maxLimitCount,
                                     v41,
                                     0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11189/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
                        if ( !v18 )
                          goto LABEL_66;
                        System_Text_StringBuilder__AppendLine_42994844(v18, (System_String_o *)gameObject, 0LL);
                      }
                      else if ( !v18 )
                      {
                        goto LABEL_66;
                      }
                      friendshipLabel = this->fields.friendshipLabel;
                      gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v18->klass->vtable._3_ToString.method)(
                                     v18,
                                     v18->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                      if ( friendshipLabel )
                      {
                        UILabel__set_text(friendshipLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (__int64)this->fields.friendshipLvInfo;
                        if ( gameObject )
                        {
                          v31 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
                          gameObject = UserServantCollectionEntity__getFriendShipRank(EntityDefinitely, 0LL);
                          if ( v31 )
                          {
                            UnityEngine_GameObject__SetActive(v31, (int)gameObject > v41, 0LL);
                            friendshipCurrentLvLabel = this->fields.friendshipCurrentLvLabel;
                            gameObject = (__int64)System_Int32__ToString((int32_t)&v41, 0LL);
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
                                  gameObject = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
                                  v34 = (UIWidget_o *)gameObject;
                                  v35 = SkillUpResultWindowComponent_TypeInfo;
                                  if ( (BYTE3(SkillUpResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
                                    v35 = SkillUpResultWindowComponent_TypeInfo;
                                  }
                                  if ( v34 )
                                  {
                                    UIWidget__set_color(v34, v35->static_fields->COLOR_VAL, 0LL);
                                    v36 = this->fields.friendshipLabel;
                                    if ( v36 )
                                    {
                                      if ( !System_String__IsNullOrEmpty(v36->fields.mText, 0LL) )
                                      {
LABEL_64:
                                        v37 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v37,
                                          (Il2CppObject *)this,
                                          Method_SkillUpResultWindowComponent_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v37, 0, 0LL);
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
                                          goto LABEL_64;
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
LABEL_66:
    sub_B52A5C(gameObject, v10);
  }
}


void __fastcall SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        ServantTreasureDeviceAddEntity_o *tdAddEntity,
        int32_t index,
        int32_t beforeLv,
        int32_t afterLv,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_42AF3AE & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AF3AE = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, (const MethodInfo *)tdAddEntity);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v15);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfo;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoAddRoot;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoNormalRoot;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = this->fields.npInfoHeroineNpChangeRoot;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.npInfoNpChangeRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.npInfoNpChangeRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.npInfoAddResultComponent) == 0LL) )
  {
LABEL_17:
    sub_B52A5C(gameObject, v14);
  }
  NpInfoAddResultComponent__SetDisplay(
    (NpInfoAddResultComponent_o *)gameObject,
    tdAddEntity,
    index,
    beforeLv,
    afterLv,
    0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_42AF3AD & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AF3AD = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, *(const MethodInfo **)&oldTargetId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v15);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfo;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoNormalRoot;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = this->fields.npInfoHeroineNpChangeRoot;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoNpChangeRoot;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.npInfoAddRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld) == 0LL)
    || (HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, oldTargetId, oldTargetLv, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow) == 0LL) )
  {
LABEL_17:
    sub_B52A5C(gameObject, v14);
  }
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__OpenNpUpResultInfo_23773808(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t targetId,
        int32_t targetLv,
        System_Action_o *callback,
        int32_t targetIdOld,
        int32_t targetLvOld,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL8 v18; // x1
  const MethodInfo *v19; // x2
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  ServantTreasureDeviceAddMaster_o *v26; // x26
  __int64 v27; // x27
  __int64 v28; // x28
  int32_t v29; // w27
  ServantTreasureDeviceAddEntity_o *v30; // x26
  int v31; // w27
  const MethodInfo *v32; // x7
  System_Action_o *v33; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_42AF3AF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AF3AF = 1;
  }
  if ( !this->fields.state )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(6, (const MethodInfo *)usrSvtData);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v19);
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
            sub_B52920(
              (BattleServantConfConponent_o *)&this->fields.openCallBack,
              (System_Int32_array **)callback,
              v20,
              v21,
              v22,
              v23,
              v24,
              v25);
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
            if ( usrSvtData )
            {
              v26 = (ServantTreasureDeviceAddMaster_o *)gameObject;
              v28 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
              v27 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v34.fields.currentCryptoKey = v28;
              *(_QWORD *)&v34.fields.fakeValue = v27;
              v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v34, 0LL);
              gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                         usrSvtData->fields.limitCount,
                                                         0LL);
              if ( v26 )
              {
                gameObject = (UnityEngine_GameObject_o *)ServantTreasureDeviceAddMaster__GetEnableEntity(
                                                           v26,
                                                           v29,
                                                           (int32_t)gameObject,
                                                           0,
                                                           0LL);
                if ( this->fields.npInfoAddRoot )
                {
                  v30 = (ServantTreasureDeviceAddEntity_o *)gameObject;
                  UnityEngine_GameObject__SetActive(this->fields.npInfoAddRoot, gameObject != 0LL, 0LL);
                  v31 = (targetLvOld != targetLv) & (UserServantEntity__IsHeroine(usrSvtData, 0LL)
                                                  && targetIdOld != targetId);
                  if ( targetIdOld == targetId && UserServantEntity__IsHeroine(usrSvtData, 0LL) )
                    targetIdOld = 0;
                  gameObject = this->fields.npInfoNormalRoot;
                  if ( (v31 & 1) != 0 )
                  {
                    v18 = 0LL;
                    if ( !gameObject )
                      goto LABEL_45;
                  }
                  else
                  {
                    v18 = (kind != 18) & (unsigned __int8)(v30 == 0LL);
                    if ( !gameObject )
                      goto LABEL_45;
                  }
                  UnityEngine_GameObject__SetActive(gameObject, v18, 0LL);
                  gameObject = this->fields.npInfoHeroineNpChangeRoot;
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive(gameObject, v31, 0LL);
                    gameObject = this->fields.npInfoNpChangeRoot;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, kind == 18, 0LL);
                      if ( v31 )
                      {
                        gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld;
                        if ( gameObject )
                        {
                          HeroineNpChangeInfoComponent__Setup(
                            (HeroineNpChangeInfoComponent_o *)gameObject,
                            targetIdOld,
                            targetLvOld,
                            0LL);
                          gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow;
                          if ( gameObject )
                          {
                            HeroineNpChangeInfoComponent__Setup(
                              (HeroineNpChangeInfoComponent_o *)gameObject,
                              targetId,
                              targetLv,
                              0LL);
LABEL_44:
                            v33 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                            System_Action___ctor(
                              v33,
                              (Il2CppObject *)this,
                              Method_SkillUpResultWindowComponent_EndOpen__,
                              0LL);
                            BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0LL);
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
                            0LL);
                          gameObject = (UnityEngine_GameObject_o *)this->fields.npChangeInfoNow;
                          if ( gameObject )
                          {
                            HeroineNpChangeInfoComponent__SetupForNpChange(
                              (HeroineNpChangeInfoComponent_o *)gameObject,
                              targetId,
                              targetLv,
                              0LL);
                            goto LABEL_44;
                          }
                        }
                      }
                      else
                      {
                        if ( !v30 )
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
                            gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       gameObject,
                                                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                            if ( gameObject )
                            {
                              UIWidget__set_height((UIWidget_o *)gameObject, 300, 0LL);
                              gameObject = (UnityEngine_GameObject_o *)this->fields.npInfoAddResultComponent;
                              if ( gameObject )
                              {
                                NpInfoAddResultComponent__SetDisplay(
                                  (NpInfoAddResultComponent_o *)gameObject,
                                  v30,
                                  0,
                                  targetLvOld,
                                  targetLv,
                                  0LL);
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
LABEL_45:
    sub_B52A5C(gameObject, v18);
  }
}


void __fastcall SkillUpResultWindowComponent__OpenPowerUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x21
  __int64 v17; // x20
  __int64 v18; // x22
  WarEntity_o *Entity; // x0
  UILabel_o *powerupLabel; // x20
  WarEntity_o *v21; // x21
  System_Action_o *v22; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42AF3B2 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_11193/*"RESULT_BOUNDS_POWERUP"*/);
    byte_42AF3B2 = 1;
  }
  if ( !this->fields.state )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(6, (const MethodInfo *)usrSvtData);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SkillUpResultWindowComponent__SetChildrenActive(this, 0, v9);
    gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = this->fields.powerupInfo;
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.openCallBack = callback;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.openCallBack,
      (System_Int32_array **)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_23;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !usrSvtData )
      goto LABEL_23;
    v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
    v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v23.fields.currentCryptoKey = v18;
    *(_QWORD *)&v23.fields.fakeValue = v17;
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                               v23,
                                               0LL);
    if ( !v16 )
      goto LABEL_23;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v16,
               (int32_t)gameObject,
               (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    powerupLabel = this->fields.powerupLabel;
    v21 = Entity;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11193/*"RESULT_BOUNDS_POWERUP"*/, 0LL);
    if ( !v21
      || (gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)v21->fields.emptyMessage,
                                                     0LL),
          !powerupLabel) )
    {
LABEL_23:
      sub_B52A5C(gameObject, v8);
    }
    UILabel__set_text(powerupLabel, (System_String_o *)gameObject, 0LL);
    v22 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent__OpenSkillChangeMessage(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_String_o *BattleName; // x0
  UILabel_o *costumeChangeLabel; // x21
  Il2CppObject *v12; // x22
  System_String_o *v13; // x0

  if ( (byte_42AF3AB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_3428/*"COSTUME_CHANGE_DESCRIPTION"*/);
    byte_42AF3AB = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, *(const MethodInfo **)&svtId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v9);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.costumeChangeInfo, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.costumeChangeInfo;
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                             svtId,
                                             (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_18;
  BattleName = ServantEntity__getBattleName((ServantEntity_o *)gameObject, 0, -1, 0LL);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  v12 = (Il2CppObject *)BattleName;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3428/*"COSTUME_CHANGE_DESCRIPTION"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v13, v12, 0LL);
  if ( !costumeChangeLabel )
LABEL_18:
    sub_B52A5C(gameObject, v8);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  UILabel_o *skillChangeInfoTitle; // x26
  System_String_o *v19; // x0
  const MethodInfo *v20; // x5

  if ( (byte_42AF3AC & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_3429/*"COSTUME_CHANGE_SKILL_TITLE"*/);
    byte_42AF3AC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, *(const MethodInfo **)&oldSkillId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v17);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.skillChangeInfo, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.skillChangeInfo;
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  skillChangeInfoTitle = this->fields.skillChangeInfoTitle;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3429/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v19, (Il2CppObject *)costumeName, 0LL);
  if ( !skillChangeInfoTitle )
LABEL_15:
    sub_B52A5C(gameObject, v16);
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)gameObject, 0LL);
  SkillUpResultWindowComponent__SetSkillInfo(this, oldSkillId, oldSkillLv, nowSkillId, nowSkillLv, v20);
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
        const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x22
  SkillEntity_o *v30; // x28
  int32_t v31; // w24
  il2cpp_array_size_t max_length; // w8
  int32_t v33; // w9
  ServantSkillEntity_o *v34; // x25
  int32_t v35; // w21
  UILabel_o *skillBefChargeTimeLb; // x20
  UnityEngine_GameObject_o *beforeChargeTimeInfo; // x20
  UILabel_o *skillAftChargeTimeLb; // x20
  UnityEngine_GameObject_o *AfterChargeTimeInfo; // x20
  UILabel_o *skillAftTitleLb; // x26
  System_String_o *v41; // x20
  System_String_o *v42; // x21
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  System_String_o *PATH; // x20
  UnityEngine_Transform_o *transform; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UILabel_o *v48; // x20
  ServantSkillStrengthStatus_o *v49; // x26
  int32_t v50; // w26
  int32_t v51; // w1
  UILabel_o *v52; // x20
  UILabel_o *skillBefTitleLb; // x21
  System_String_o *v54; // x22
  System_String_o *v55; // x20
  int32_t v56; // w8
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0
  int32_t StrengthStatus; // w0
  int32_t v60; // w21
  int32_t skillNum; // w20
  System_String_o *v62; // x22
  UnityEngine_Transform_o *v63; // x0
  System_Action_o *v64; // x20
  __int64 v65; // x0
  int32_t v66; // [xsp+0h] [xbp-90h]
  ServantSkillMaster_o *v67; // [xsp+8h] [xbp-88h]
  int32_t svtId; // [xsp+14h] [xbp-7Ch]
  int key; // [xsp+18h] [xbp-78h]
  int32_t v70; // [xsp+24h] [xbp-6Ch]
  int32_t v71; // [xsp+28h] [xbp-68h] BYREF
  int32_t EffectChargeTurn; // [xsp+2Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+30h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector2Int_o v75; // 0:x6.8
  UnityEngine_Vector2Int_o v76; // 0:x6.8

  if ( (byte_42AF3AA & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&ServantSkillStrengthStatus_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_1734/*"APPEND_SKILL_RESULT_AFTER_LV"*/);
    sub_B52984(&StringLiteral_12336/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/);
    sub_B52984(&StringLiteral_1735/*"APPEND_SKILL_RESULT_LV"*/);
    byte_42AF3AA = 1;
  }
  detail = 0LL;
  name = 0LL;
  EffectChargeTurn = 0;
  if ( this->fields.state )
    return;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, *(const MethodInfo **)&targetId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v22);
  gameObject = GameObjectExtensions__GetParent(this->fields.skillInfo, 0LL);
  if ( !gameObject )
    goto LABEL_89;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = this->fields.skillInfo;
  if ( !gameObject )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.openCallBack = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.openCallBack,
    (System_Int32_array **)callback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_89;
  gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !gameObject )
    goto LABEL_89;
  v70 = targetLvOld;
  v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
  gameObject = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                 targetId,
                 (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillList )
    goto LABEL_89;
  v30 = (SkillEntity_o *)gameObject;
  v31 = 0;
  max_length = skillList->max_length;
  while ( v31 < (int)max_length )
  {
    if ( v31 >= max_length )
    {
      v65 = sub_B52A88(gameObject);
      sub_B52A28(v65, 0LL);
    }
    v33 = skillList->m_Items[++v31];
    if ( v33 == targetId )
      goto LABEL_20;
  }
  v31 = 0;
LABEL_20:
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_89;
  gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  if ( !gameObject )
    goto LABEL_89;
  v67 = (ServantSkillMaster_o *)gameObject;
  svtId = baseSvtId;
  gameObject = ServantSkillMaster__getEntityFromSkillId(
                 (ServantSkillMaster_o *)gameObject,
                 baseSvtId,
                 v31,
                 targetId,
                 0LL);
  if ( !v30 )
    goto LABEL_89;
  v34 = (ServantSkillEntity_o *)gameObject;
  SkillEntity__getSkillMessageInfo(v30, &name, &detail, targetLv, 0LL);
  gameObject = this->fields.skillAfter;
  v35 = targetIdOld >= 1 ? v70 : targetLv - 1;
  if ( !gameObject )
    goto LABEL_89;
  if ( isOpen )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = this->fields.skillIconBef;
    if ( !gameObject )
      goto LABEL_89;
    SkillIconComponent__Set_26537744((SkillIconComponent_o *)gameObject, targetId, targetLv, 0LL);
    skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v30, targetLv, 0LL);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !skillBefChargeTimeLb )
      goto LABEL_89;
    UILabel__set_text(skillBefChargeTimeLb, (System_String_o *)gameObject, 0LL);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v30, v35, 0LL);
    if ( !beforeChargeTimeInfo )
      goto LABEL_89;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = this->fields.skillIconAft;
    if ( !gameObject )
      goto LABEL_89;
    SkillIconComponent__Set_26537744((SkillIconComponent_o *)gameObject, targetId, targetLv, 0LL);
    skillAftChargeTimeLb = this->fields.skillAftChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v30, targetLv, 0LL);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !skillAftChargeTimeLb )
      goto LABEL_89;
    UILabel__set_text(skillAftChargeTimeLb, (System_String_o *)gameObject, 0LL);
    AfterChargeTimeInfo = this->fields.AfterChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v30, targetLv, 0LL);
    if ( !AfterChargeTimeInfo )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive(AfterChargeTimeInfo, (int)gameObject > 0, 0LL);
    gameObject = this->fields.skillAftTitleLb;
    if ( !gameObject )
      goto LABEL_89;
    UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
    key = targetIdOld;
    if ( isDispLv )
    {
      v66 = v35;
      skillAftTitleLb = this->fields.skillAftTitleLb;
      v41 = name;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_1734/*"APPEND_SKILL_RESULT_AFTER_LV"*/, 0LL);
      v71 = targetLv;
      v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
      v44 = System_String__Format(v42, v43, 0LL);
      gameObject = System_String__Concat_44568316(v41, v44, 0LL);
      if ( !skillAftTitleLb )
        goto LABEL_89;
      UILabel__set_text(skillAftTitleLb, (System_String_o *)gameObject, 0LL);
      v35 = v66;
    }
    gameObject = this->fields.skillAftTitleLb;
    if ( !gameObject )
      goto LABEL_89;
    UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
    if ( v34 )
    {
      if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
      }
      gameObject = this->fields.skillAftTitleLb;
      if ( !gameObject )
        goto LABEL_89;
      PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = BaseMonoBehaviour__createObject_19346208((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
      if ( !gameObject )
        goto LABEL_89;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)gameObject,
                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
      v48 = this->fields.skillAftTitleLb;
      v49 = (ServantSkillStrengthStatus_o *)Component_srcLineSprite;
      gameObject = (void *)ServantSkillEntity__GetStrengthStatus(v34, 0LL);
      if ( !v49 )
        goto LABEL_89;
      v75 = (UnityEngine_Vector2Int_o)0x1200000014LL;
      ServantSkillStrengthStatus__Set(v49, v48, (int32_t)gameObject, v34->fields.skillNum, 20, -9, v75, 0LL);
    }
    gameObject = this->fields.skillAftdetailLb;
    if ( !gameObject )
      goto LABEL_89;
    v50 = *((_DWORD *)gameObject + 104);
    WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, v50, 0, 0, 0LL);
    if ( key < 1 )
    {
      SkillEntity__getSkillMessageInfo(v30, &name, &detail, v35, 0LL);
      gameObject = this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_89;
      v51 = targetId;
    }
    else
    {
      gameObject = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v29,
                     key,
                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !gameObject )
        goto LABEL_89;
      v30 = (SkillEntity_o *)gameObject;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)gameObject, &name, &detail, v35, 0LL);
      if ( !isRelease )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        detail = LocalizationManager__Get((System_String_o *)StringLiteral_12336/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, 0LL);
        WrapControlText__textBBCodeAdjust(this->fields.skillAftdetailLb, detail, v50, 0, 0, 0LL);
      }
      gameObject = this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_89;
      v51 = key;
    }
    SkillIconComponent__Set_26537744((SkillIconComponent_o *)gameObject, v51, v35, 0LL);
    v52 = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v30, v35, 0LL);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !v52 )
      goto LABEL_89;
    UILabel__set_text(v52, (System_String_o *)gameObject, 0LL);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v30, v35, 0LL);
    targetIdOld = key;
    if ( !beforeChargeTimeInfo )
      goto LABEL_89;
  }
  UnityEngine_GameObject__SetActive(beforeChargeTimeInfo, (int)gameObject > 0, 0LL);
  gameObject = this->fields.skillBefTitleLb;
  if ( !gameObject )
    goto LABEL_89;
  UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
  if ( isDispLv )
  {
    skillBefTitleLb = this->fields.skillBefTitleLb;
    v54 = name;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_1735/*"APPEND_SKILL_RESULT_LV"*/, 0LL);
    v56 = v70;
    if ( isOpen )
      v56 = targetLv;
    v71 = v56;
    v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
    v58 = System_String__Format(v55, v57, 0LL);
    gameObject = System_String__Concat_44568316(v54, v58, 0LL);
    if ( !skillBefTitleLb )
      goto LABEL_89;
    UILabel__set_text(skillBefTitleLb, (System_String_o *)gameObject, 0LL);
  }
  gameObject = this->fields.skillBefTitleLb;
  if ( !gameObject )
    goto LABEL_89;
  UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
  if ( !v34 )
    goto LABEL_86;
  StrengthStatus = ServantSkillEntity__GetStrengthStatus(v34, 0LL);
  if ( targetIdOld >= 1 )
  {
    gameObject = ServantSkillMaster__getEntityFromSkillId(v67, svtId, v31, targetIdOld, 0LL);
    if ( !gameObject )
      goto LABEL_89;
    v34 = (ServantSkillEntity_o *)gameObject;
    StrengthStatus = ServantSkillEntity__GetStrengthStatus((ServantSkillEntity_o *)gameObject, 0LL);
  }
  v60 = StrengthStatus;
  skillNum = v34->fields.skillNum;
  if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  }
  gameObject = this->fields.skillBefTitleLb;
  if ( !gameObject
    || (v62 = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH,
        v63 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL),
        (gameObject = BaseMonoBehaviour__createObject_19346208((BaseMonoBehaviour_o *)this, v62, v63, 0LL, 0LL)) == 0LL)
    || (gameObject = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___)) == 0LL )
  {
LABEL_89:
    sub_B52A5C(gameObject, v21);
  }
  v76 = (UnityEngine_Vector2Int_o)0x1200000014LL;
  ServantSkillStrengthStatus__Set(
    (ServantSkillStrengthStatus_o *)gameObject,
    this->fields.skillBefTitleLb,
    v60,
    skillNum,
    20,
    -9,
    v76,
    0LL);
LABEL_86:
  gameObject = this->fields.skillBefdetailLb;
  if ( !gameObject )
    goto LABEL_89;
  WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, *((_DWORD *)gameObject + 104), 0, 0, 0LL);
  v64 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v64, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v64, 0, 0LL);
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
    sub_B52A5C(skillInfo, enable);
  }
  UnityEngine_GameObject__SetActive(skillInfo, v7, 0LL);
}


void __fastcall SkillUpResultWindowComponent__SetSkillInfo(
        SkillUpResultWindowComponent_o *this,
        int32_t oldSkillId,
        int32_t oldSkillLv,
        int32_t nowSkillId,
        int32_t nowSkillLv,
        const MethodInfo *method)
{
  UILabel_o *skillChangeInfoSubTitleOld; // x24
  void *SkillEntity; // x0
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
  System_String_o *text; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *v24; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42AF3B7 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_6923/*"GET_SKILL_NAME"*/);
    sub_B52984(&StringLiteral_1681/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/);
    sub_B52984(&StringLiteral_2575/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/);
    byte_42AF3B7 = 1;
  }
  name = 0LL;
  v24 = 0LL;
  detail = 0LL;
  text = 0LL;
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_2575/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)SkillEntity, 0LL);
  SkillEntity = SkillUpResultWindowComponent__GetSkillEntity(v14, oldSkillId, v15);
  if ( !SkillEntity )
    goto LABEL_15;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &name, &detail, oldSkillLv, 0LL);
  skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6923/*"GET_SKILL_NAME"*/, 0LL);
  SkillEntity = System_String__Format(v17, (Il2CppObject *)name, 0LL);
  if ( !skillChangeInfoNameOld )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoNameOld, (System_String_o *)SkillEntity, 0LL);
  SkillEntity = this->fields.skillChangeInfoDetailOld;
  if ( !SkillEntity )
    goto LABEL_15;
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, detail, *((_DWORD *)SkillEntity + 104), 0, 0, 0LL);
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_1681/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)SkillEntity, 0LL);
  SkillEntity = SkillUpResultWindowComponent__GetSkillEntity(v19, nowSkillId, v20);
  if ( !SkillEntity
    || (SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &v24, &text, nowSkillLv, 0LL),
        skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow,
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_6923/*"GET_SKILL_NAME"*/, 0LL),
        SkillEntity = System_String__Format(v22, (Il2CppObject *)v24, 0LL),
        !skillChangeInfoNameNow)
    || (UILabel__set_text(skillChangeInfoNameNow, (System_String_o *)SkillEntity, 0LL),
        (SkillEntity = this->fields.skillChangeInfoDetailNow) == 0LL) )
  {
LABEL_15:
    sub_B52A5C(SkillEntity, v13);
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, text, *((_DWORD *)SkillEntity + 104), 0, 0, 0LL);
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
  void *Master_WarQuestSelectionMaster; // x0
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
  System_String_o *v27; // x1
  System_String_o **v28; // x8
  UIWidget_o *v29; // x24
  SkillUpResultWindowComponent_c *v30; // x8
  UILabel_o *npBefDetailLb; // x20
  struct UILabel_o *v32; // x8
  System_String_o *DetalShort_29185304; // x21
  TreasureDvcLvEntity_o *v34; // x0
  int32_t mFontSize; // w2
  System_String_o *v36; // x1
  UILabel_o *resNpLvFirstLb; // x24
  struct UILabel_o *v38; // x20
  struct UILabel_o *v39; // x8
  UILabel_o *npAftDetailLb; // x20
  struct UILabel_o *v41; // x8
  int32_t v42; // [xsp+Ch] [xbp-64h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  lv = targetLv;
  if ( (byte_42AF3B0 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B52984(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_B52984(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&SkillUpResultWindowComponent_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF3B0 = 1;
  }
  entity = 0LL;
  v42 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !usrSvtData )
    goto LABEL_74;
  v17 = (TreasureDvcMaster_o *)Master_WarQuestSelectionMaster;
  v19 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v19;
  *(_QWORD *)&v45.fields.fakeValue = v18;
  Master_WarQuestSelectionMaster = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v45, 0LL);
  if ( !v17 )
    goto LABEL_74;
  v20 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v17, (int32_t)Master_WarQuestSelectionMaster, targetId, 0LL);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !v20 || !Master_WarQuestSelectionMaster )
    goto LABEL_74;
  v21 = TreasureDvcLvMaster__GetEntity(
          (TreasureDvcLvMaster_o *)Master_WarQuestSelectionMaster,
          v20->fields.id,
          targetLv,
          0LL);
  Master_WarQuestSelectionMaster = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)v17,
                                             &entity,
                                             targetIdOld,
                                             (const MethodInfo_23E2334 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    targetIdOld = 0;
  if ( !this->fields.npRubyNameLb )
    goto LABEL_74;
  UILabel__set_text(this->fields.npRubyNameLb, v20->fields.ruby, 0LL);
  Master_WarQuestSelectionMaster = this->fields.npNameLb;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_74;
  v22 = kind != 5;
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v20->fields.name, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(usrSvtData, this->fields.npNameLb, this->fields.npRubyNameLb, 0LL);
  v42 = targetLvOld;
  if ( targetIdOld > 0 || kind == 5 )
  {
    Master_WarQuestSelectionMaster = this->fields.npRankInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v22, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npLvInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npLvFirstInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npChangeSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v22, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npRankupBeforeLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    v28 = entity ? &entity->fields.longName : (System_String_o **)&StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, *v28, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npRankupAfterLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v20->fields.rank, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npRankupAfterLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    Master_WarQuestSelectionMaster = UnityEngine_Component__GetComponent_WebViewObject_(
                                       (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                       (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v29 = (UIWidget_o *)Master_WarQuestSelectionMaster;
    v30 = SkillUpResultWindowComponent_TypeInfo;
    if ( (BYTE3(SkillUpResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v30 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v29 )
      goto LABEL_74;
    UIWidget__set_color(v29, v30->static_fields->COLOR_VAL, 0LL);
    v42 = targetLvOld;
    if ( !v21 )
      goto LABEL_31;
  }
  else if ( targetLvOld <= 0 )
  {
    Master_WarQuestSelectionMaster = this->fields.npRankInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npLvInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npLvFirstInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npChangeSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    resNpLvFirstLb = this->fields.resNpLvFirstLb;
    Master_WarQuestSelectionMaster = System_Int32__ToString((int32_t)&lv, 0LL);
    if ( !resNpLvFirstLb )
      goto LABEL_74;
    UILabel__set_text(resNpLvFirstLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    if ( !v21 )
    {
LABEL_31:
      Master_WarQuestSelectionMaster = this->fields.npBefDetailLb;
      if ( Master_WarQuestSelectionMaster )
      {
        UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        Master_WarQuestSelectionMaster = this->fields.npAftDetailLb;
        if ( Master_WarQuestSelectionMaster )
        {
          v27 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_53:
          UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v27, 0LL);
          return;
        }
      }
      goto LABEL_74;
    }
  }
  else
  {
    currentNpLvLb = this->fields.currentNpLvLb;
    Master_WarQuestSelectionMaster = System_Int32__ToString((int32_t)&v42, 0LL);
    if ( !currentNpLvLb )
      goto LABEL_74;
    UILabel__set_text(currentNpLvLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    resNpLvLb = this->fields.resNpLvLb;
    Master_WarQuestSelectionMaster = System_Int32__ToString((int32_t)&lv, 0LL);
    if ( !resNpLvLb )
      goto LABEL_74;
    UILabel__set_text(resNpLvLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    Master_WarQuestSelectionMaster = this->fields.resNpLvLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    Master_WarQuestSelectionMaster = UnityEngine_Component__GetComponent_WebViewObject_(
                                       (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                       (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v25 = (UIWidget_o *)Master_WarQuestSelectionMaster;
    v26 = SkillUpResultWindowComponent_TypeInfo;
    if ( (BYTE3(SkillUpResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v26 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v25 )
      goto LABEL_74;
    UIWidget__set_color(v25, v26->static_fields->COLOR_VAL, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npRankInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npLvInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npLvFirstInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    if ( !v21 )
      goto LABEL_31;
  }
  if ( kind == 5 )
  {
    npBefDetailLb = this->fields.npBefDetailLb;
    Master_WarQuestSelectionMaster = TreasureDvcLvEntity__getDetalShort_29185304(v21, lv, 0LL);
    v32 = this->fields.npBefDetailLb;
    if ( v32 )
    {
      WrapControlText__textAdjust(
        npBefDetailLb,
        (System_String_o *)Master_WarQuestSelectionMaster,
        v32->fields.mFontSize,
        0,
        0,
        0LL);
      Master_WarQuestSelectionMaster = this->fields.npAftDetailLb;
      if ( Master_WarQuestSelectionMaster )
      {
        v27 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_53;
      }
    }
LABEL_74:
    sub_B52A5C(Master_WarQuestSelectionMaster, v16);
  }
  if ( targetIdOld < 1 )
  {
    v38 = this->fields.npBefDetailLb;
    Master_WarQuestSelectionMaster = TreasureDvcLvEntity__getDetalShort_29185304(v21, v42, 0LL);
    v39 = this->fields.npBefDetailLb;
    if ( !v39 )
      goto LABEL_74;
    mFontSize = v39->fields.mFontSize;
    v36 = (System_String_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = v38;
  }
  else
  {
    DetalShort_29185304 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    v34 = TreasureDvcLvMaster__GetEntity(
            (TreasureDvcLvMaster_o *)Master_WarQuestSelectionMaster,
            targetIdOld,
            targetLvOld,
            0LL);
    if ( v34 )
      DetalShort_29185304 = TreasureDvcLvEntity__getDetalShort_29185304(v34, v42, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npBefDetailLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    mFontSize = *((_DWORD *)Master_WarQuestSelectionMaster + 104);
    v36 = DetalShort_29185304;
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)Master_WarQuestSelectionMaster, v36, mFontSize, 0, 0, 0LL);
  npAftDetailLb = this->fields.npAftDetailLb;
  Master_WarQuestSelectionMaster = TreasureDvcLvEntity__getDetalShort_29185304(v21, lv, 0LL);
  v41 = this->fields.npAftDetailLb;
  if ( !v41 )
    goto LABEL_74;
  WrapControlText__textBBCodeAdjust(
    npAftDetailLb,
    (System_String_o *)Master_WarQuestSelectionMaster,
    v41->fields.mFontSize,
    0,
    0,
    0LL);
}