// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  int v6; // s0
  int v7; // s1
  int v8; // s2
  struct SkillUpResultWindowComponent_StaticFields v9; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_4214A77 & 1) == 0 )
  {
    sub_B0D8A4(&SkillUpResultWindowComponent_TypeInfo, v1);
    byte_4214A77 = 1;
  }
  v6 = 1065185444;
  v7 = 1064430469;
  v8 = 1050790593;
  v9 = (struct SkillUpResultWindowComponent_StaticFields)0LL;
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v9);
  *SkillUpResultWindowComponent_TypeInfo->static_fields = v9;
}


void __fastcall SkillUpResultWindowComponent___ctor(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4214A76 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4214A76 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4214A71 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SkillUpResultWindowComponent_EndClose__, v4);
    byte_4214A71 = 1;
  }
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  SkillUpResultWindowComponent__Close_24968324(this, v6, v7);
}


void __fastcall SkillUpResultWindowComponent__Close_24968324(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4214A72 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_SkillUpResultWindowComponent_EndClose__, v4);
    byte_4214A72 = 1;
  }
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, callback, method);
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
    sub_B0D97C(gameObject);
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
    sub_B0D840(p_openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(openCallBack, 0LL);
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
  DataManager_o *Instance; // x0

  if ( (byte_4214A74 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantSkillMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4214A74 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantSkillMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  DataManager_o *Instance; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4214A73 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&skillId);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4214A73 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    skillId,
    (const MethodInfo_2669C30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  return (SkillEntity_o *)entity;
}


void __fastcall SkillUpResultWindowComponent__Init(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
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
  __int64 v28; // x1
  __int64 gameObject; // x0
  const MethodInfo *v30; // x2
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  System_Text_StringBuilder_o *v39; // x20
  int32_t SvtId; // w22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  System_Collections_Generic_List_QuestEntity__o *v43; // x0
  Il2CppObject *current; // x23
  System_String_o *v45; // x0
  System_String_o *v46; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v48; // x0
  int32_t v49; // w23
  UILabel_o *friendshipLabel; // x22
  UnityEngine_GameObject_o *v51; // x20
  UILabel_o *friendshipCurrentLvLabel; // x20
  UILabel_o *friendshipResultLvLabel; // x20
  UIWidget_o *v54; // x20
  SkillUpResultWindowComponent_c *v55; // x8
  struct UILabel_o *v56; // x8
  __int64 v57; // x1
  __int64 v58; // x2
  System_Action_o *v59; // x20
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+20h] [xbp-70h] BYREF
  int32_t FriendShipRank; // [xsp+48h] [xbp-48h] BYREF
  int32_t v63; // [xsp+4Ch] [xbp-44h] BYREF

  v63 = oldFriendShipRank;
  if ( (byte_4214A6F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, usrSvtData);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v14);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&NetworkManager_TypeInfo, v16);
    sub_B0D8A4(&ServantCommentManager_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v19);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v20);
    sub_B0D8A4(&Method_SkillUpResultWindowComponent_EndOpen__, v21);
    sub_B0D8A4(&SkillUpResultWindowComponent_TypeInfo, v22);
    sub_B0D8A4(&SoundManager_TypeInfo, v23);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v24);
    sub_B0D8A4(&StringLiteral_11132/*"RESULT_BOUNDS_OPENQUEST"*/, v25);
    sub_B0D8A4(&StringLiteral_11134/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, v26);
    sub_B0D8A4(&StringLiteral_11129/*"RESULT_BOUNDS_GETVOICE"*/, v27);
    sub_B0D8A4(&StringLiteral_1/*""*/, v28);
    byte_4214A6F = 1;
  }
  memset(&v61, 0, sizeof(v61));
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
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v30);
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
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.openCallBack,
              (System_Int32_array **)callback,
              v31,
              v32,
              v33,
              v34,
              v35,
              v36);
            gameObject = (__int64)this->fields.friendshipLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v39 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v37, v38);
              System_Text_StringBuilder___ctor(v39, 0LL);
              if ( usrSvtData )
              {
                SvtId = UserServantEntity__getSvtId(usrSvtData, 0LL);
                gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)gameObject,
                                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
                    gameObject = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                    if ( gameObject )
                    {
                      v43 = clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                              (clsQuestCheck_o *)gameObject,
                              SvtId,
                              oldFriendShipRank,
                              8,
                              0LL);
                      if ( v43 )
                      {
                        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                          &v60,
                          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v43,
                          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
                        v61 = v60;
                        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                  &v61,
                                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
                        {
                          current = v61.fields.current;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11132/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
                          if ( !current )
                            sub_B0D97C(v45);
                          v46 = v45;
                          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
                          v48 = System_String__Format(v46, QuestName, 0LL);
                          if ( !v39 )
                            sub_B0D97C(v48);
                          System_Text_StringBuilder__AppendLine_42156196(v39, v48, 0LL);
                        }
                        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                          &v61,
                          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
                      }
                      v49 = v63;
                      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                      }
                      gameObject = ServantCommentManager__IsOpenByServantFriendShip(SvtId, v49, 0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11134/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, 0LL);
                        if ( !v39 )
                          goto LABEL_66;
                        gameObject = (__int64)System_Text_StringBuilder__AppendLine_42156196(
                                                v39,
                                                (System_String_o *)gameObject,
                                                0LL);
                      }
                      if ( !EntityDefinitely )
                        goto LABEL_66;
                      gameObject = ServantVoiceMaster__isOpenByServantFriendShip(
                                     SvtId,
                                     EntityDefinitely->fields.maxLimitCount,
                                     v63,
                                     0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11129/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
                        if ( !v39 )
                          goto LABEL_66;
                        System_Text_StringBuilder__AppendLine_42156196(v39, (System_String_o *)gameObject, 0LL);
                      }
                      else if ( !v39 )
                      {
                        goto LABEL_66;
                      }
                      friendshipLabel = this->fields.friendshipLabel;
                      gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v39->klass->vtable._3_ToString.method)(
                                     v39,
                                     v39->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                      if ( friendshipLabel )
                      {
                        UILabel__set_text(friendshipLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (__int64)this->fields.friendshipLvInfo;
                        if ( gameObject )
                        {
                          v51 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
                          gameObject = UserServantCollectionEntity__getFriendShipRank(EntityDefinitely, 0LL);
                          if ( v51 )
                          {
                            UnityEngine_GameObject__SetActive(v51, (int)gameObject > v63, 0LL);
                            friendshipCurrentLvLabel = this->fields.friendshipCurrentLvLabel;
                            gameObject = (__int64)System_Int32__ToString((int32_t)&v63, 0LL);
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
                                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
                                  v54 = (UIWidget_o *)gameObject;
                                  v55 = SkillUpResultWindowComponent_TypeInfo;
                                  if ( (BYTE3(SkillUpResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
                                    v55 = SkillUpResultWindowComponent_TypeInfo;
                                  }
                                  if ( v54 )
                                  {
                                    UIWidget__set_color(v54, v55->static_fields->COLOR_VAL, 0LL);
                                    v56 = this->fields.friendshipLabel;
                                    if ( v56 )
                                    {
                                      if ( !System_String__IsNullOrEmpty(v56->fields.mText, 0LL) )
                                      {
LABEL_64:
                                        v59 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v57, v58);
                                        System_Action___ctor(
                                          v59,
                                          (Il2CppObject *)this,
                                          Method_SkillUpResultWindowComponent_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v59, 0, 0LL);
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
    sub_B0D97C(gameObject);
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
  const MethodInfo *v14; // x2

  if ( (byte_4214A6C & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, tdAddEntity);
    byte_4214A6C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, (const MethodInfo *)tdAddEntity);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v14);
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
    sub_B0D97C(gameObject);
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
  const MethodInfo *v14; // x2

  if ( (byte_4214A6B & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, *(_QWORD *)&oldTargetId);
    byte_4214A6B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, *(const MethodInfo **)&oldTargetId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v14);
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
    sub_B0D97C(gameObject);
  }
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__OpenNpUpResultInfo_24963200(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v24; // x2
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  ServantTreasureDeviceAddMaster_o *v31; // x26
  __int64 v32; // x27
  __int64 v33; // x28
  int32_t v34; // w27
  ServantTreasureDeviceAddEntity_o *v35; // x26
  int v36; // w27
  bool v37; // w1
  const MethodInfo *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  System_Action_o *v41; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4214A6D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, usrSvtData);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___, v17);
    sub_B0D8A4(&DataManager_TypeInfo, v18);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v19);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B0D8A4(&Method_SkillUpResultWindowComponent_EndOpen__, v21);
    sub_B0D8A4(&SoundManager_TypeInfo, v22);
    byte_4214A6D = 1;
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
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.openCallBack,
              (System_Int32_array **)callback,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30);
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
            if ( usrSvtData )
            {
              v31 = (ServantTreasureDeviceAddMaster_o *)gameObject;
              v33 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
              v32 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v42.fields.currentCryptoKey = v33;
              *(_QWORD *)&v42.fields.fakeValue = v32;
              v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v42, 0LL);
              gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                         usrSvtData->fields.limitCount,
                                                         0LL);
              if ( v31 )
              {
                gameObject = (UnityEngine_GameObject_o *)ServantTreasureDeviceAddMaster__GetEnableEntity(
                                                           v31,
                                                           v34,
                                                           (int32_t)gameObject,
                                                           0,
                                                           0LL);
                if ( this->fields.npInfoAddRoot )
                {
                  v35 = (ServantTreasureDeviceAddEntity_o *)gameObject;
                  UnityEngine_GameObject__SetActive(this->fields.npInfoAddRoot, gameObject != 0LL, 0LL);
                  v36 = (targetLvOld != targetLv) & (UserServantEntity__IsHeroine(usrSvtData, 0LL)
                                                  && targetIdOld != targetId);
                  if ( targetIdOld == targetId && UserServantEntity__IsHeroine(usrSvtData, 0LL) )
                    targetIdOld = 0;
                  gameObject = this->fields.npInfoNormalRoot;
                  if ( (v36 & 1) != 0 )
                  {
                    v37 = 0;
                    if ( !gameObject )
                      goto LABEL_45;
                  }
                  else
                  {
                    v37 = kind != 18 && v35 == 0LL;
                    if ( !gameObject )
                      goto LABEL_45;
                  }
                  UnityEngine_GameObject__SetActive(gameObject, v37, 0LL);
                  gameObject = this->fields.npInfoHeroineNpChangeRoot;
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive(gameObject, v36, 0LL);
                    gameObject = this->fields.npInfoNpChangeRoot;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, kind == 18, 0LL);
                      if ( v36 )
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
                            v41 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v39, v40);
                            System_Action___ctor(
                              v41,
                              (Il2CppObject *)this,
                              Method_SkillUpResultWindowComponent_EndOpen__,
                              0LL);
                            BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
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
                        if ( !v35 )
                        {
                          SkillUpResultWindowComponent__SetupNpUpResultInfoNormal(
                            this,
                            usrSvtData,
                            targetId,
                            targetLv,
                            targetIdOld,
                            targetLvOld,
                            kind,
                            v38);
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
                                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                            if ( gameObject )
                            {
                              UIWidget__set_height((UIWidget_o *)gameObject, 300, 0LL);
                              gameObject = (UnityEngine_GameObject_o *)this->fields.npInfoAddResultComponent;
                              if ( gameObject )
                              {
                                NpInfoAddResultComponent__SetDisplay(
                                  (NpInfoAddResultComponent_o *)gameObject,
                                  v35,
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
    sub_B0D97C(gameObject);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v16; // x2
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x21
  __int64 v24; // x20
  __int64 v25; // x22
  WarEntity_o *Entity; // x0
  UILabel_o *powerupLabel; // x20
  WarEntity_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_o *v31; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4214A70 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, usrSvtData);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&Method_SkillUpResultWindowComponent_EndOpen__, v12);
    sub_B0D8A4(&SoundManager_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_11133/*"RESULT_BOUNDS_POWERUP"*/, v14);
    byte_4214A70 = 1;
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
    SkillUpResultWindowComponent__SetChildrenActive(this, 0, v16);
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
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.openCallBack,
      (System_Int32_array **)callback,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_23;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !usrSvtData )
      goto LABEL_23;
    v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
    v25 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v32.fields.currentCryptoKey = v25;
    *(_QWORD *)&v32.fields.fakeValue = v24;
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                               v32,
                                               0LL);
    if ( !v23 )
      goto LABEL_23;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v23,
               (int32_t)gameObject,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    powerupLabel = this->fields.powerupLabel;
    v28 = Entity;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11133/*"RESULT_BOUNDS_POWERUP"*/, 0LL);
    if ( !v28
      || (gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)v28->fields.emptyMessage,
                                                     0LL),
          !powerupLabel) )
    {
LABEL_23:
      sub_B0D97C(gameObject);
    }
    UILabel__set_text(powerupLabel, (System_String_o *)gameObject, 0LL);
    v31 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v29, v30);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x2
  System_String_o *BattleName; // x0
  UILabel_o *costumeChangeLabel; // x21
  Il2CppObject *v16; // x22
  System_String_o *v17; // x0

  if ( (byte_4214A69 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&SoundManager_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_3408/*"COSTUME_CHANGE_DESCRIPTION"*/, v11);
    byte_4214A69 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, *(const MethodInfo **)&svtId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v13);
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
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                             svtId,
                                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_18;
  BattleName = ServantEntity__getBattleName((ServantEntity_o *)gameObject, 0, -1, 0LL);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  v16 = (Il2CppObject *)BattleName;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3408/*"COSTUME_CHANGE_DESCRIPTION"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v17, v16, 0LL);
  if ( !costumeChangeLabel )
LABEL_18:
    sub_B0D97C(gameObject);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v18; // x2
  UILabel_o *skillChangeInfoTitle; // x26
  System_String_o *v20; // x0
  const MethodInfo *v21; // x5

  if ( (byte_4214A6A & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId);
    sub_B0D8A4(&SoundManager_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_3409/*"COSTUME_CHANGE_SKILL_TITLE"*/, v16);
    byte_4214A6A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, *(const MethodInfo **)&oldSkillId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v18);
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
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3409/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v20, (Il2CppObject *)costumeName, 0LL);
  if ( !skillChangeInfoTitle )
LABEL_15:
    sub_B0D97C(gameObject);
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)gameObject, 0LL);
  SkillUpResultWindowComponent__SetSkillInfo(this, oldSkillId, oldSkillLv, nowSkillId, nowSkillLv, v21);
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
  __int64 v20; // x1
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
  void *gameObject; // x0
  const MethodInfo *v34; // x2
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v41; // x22
  SkillEntity_o *v42; // x28
  int32_t v43; // w24
  il2cpp_array_size_t max_length; // w8
  int32_t v45; // w9
  ServantSkillEntity_o *v46; // x25
  int32_t v47; // w21
  UILabel_o *skillBefChargeTimeLb; // x20
  UnityEngine_GameObject_o *beforeChargeTimeInfo; // x20
  UILabel_o *skillAftChargeTimeLb; // x20
  UnityEngine_GameObject_o *AfterChargeTimeInfo; // x20
  UILabel_o *skillAftTitleLb; // x26
  System_String_o *v53; // x20
  System_String_o *v54; // x21
  Il2CppObject *v55; // x0
  System_String_o *v56; // x0
  System_String_o *PATH; // x20
  UnityEngine_Transform_o *transform; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UILabel_o *v60; // x20
  ServantSkillStrengthStatus_o *v61; // x26
  int32_t v62; // w26
  int32_t v63; // w1
  UILabel_o *v64; // x20
  UILabel_o *skillBefTitleLb; // x21
  System_String_o *v66; // x22
  System_String_o *v67; // x20
  int32_t v68; // w8
  Il2CppObject *v69; // x0
  System_String_o *v70; // x0
  int32_t StrengthStatus; // w0
  int32_t v72; // w21
  int32_t skillNum; // w20
  System_String_o *v74; // x22
  UnityEngine_Transform_o *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  System_Action_o *v78; // x20
  __int64 v79; // x0
  int32_t v80; // [xsp+0h] [xbp-90h]
  ServantSkillMaster_o *v81; // [xsp+8h] [xbp-88h]
  int32_t svtId; // [xsp+14h] [xbp-7Ch]
  int key; // [xsp+18h] [xbp-78h]
  int32_t v84; // [xsp+24h] [xbp-6Ch]
  int32_t v85; // [xsp+28h] [xbp-68h] BYREF
  int32_t EffectChargeTurn; // [xsp+2Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+30h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector2Int_o v89; // 0:x6.8
  UnityEngine_Vector2Int_o v90; // 0:x6.8

  if ( (byte_4214A68 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&targetId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v21);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v22);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v23);
    sub_B0D8A4(&int_TypeInfo, v24);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v25);
    sub_B0D8A4(&ServantSkillStrengthStatus_TypeInfo, v26);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B0D8A4(&Method_SkillUpResultWindowComponent_EndOpen__, v28);
    sub_B0D8A4(&SoundManager_TypeInfo, v29);
    sub_B0D8A4(&StringLiteral_1722/*"APPEND_SKILL_RESULT_AFTER_LV"*/, v30);
    sub_B0D8A4(&StringLiteral_12285/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, v31);
    sub_B0D8A4(&StringLiteral_1723/*"APPEND_SKILL_RESULT_LV"*/, v32);
    byte_4214A68 = 1;
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
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v34);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.openCallBack,
    (System_Int32_array **)callback,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_89;
  gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !gameObject )
    goto LABEL_89;
  v84 = targetLvOld;
  v41 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
  gameObject = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                 targetId,
                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillList )
    goto LABEL_89;
  v42 = (SkillEntity_o *)gameObject;
  v43 = 0;
  max_length = skillList->max_length;
  while ( v43 < (int)max_length )
  {
    if ( v43 >= max_length )
    {
      v79 = sub_B0D9A8(gameObject);
      sub_B0D948(v79, 0LL);
    }
    v45 = skillList->m_Items[++v43];
    if ( v45 == targetId )
      goto LABEL_20;
  }
  v43 = 0;
LABEL_20:
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_89;
  gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  if ( !gameObject )
    goto LABEL_89;
  v81 = (ServantSkillMaster_o *)gameObject;
  svtId = baseSvtId;
  gameObject = ServantSkillMaster__getEntityFromSkillId(
                 (ServantSkillMaster_o *)gameObject,
                 baseSvtId,
                 v43,
                 targetId,
                 0LL);
  if ( !v42 )
    goto LABEL_89;
  v46 = (ServantSkillEntity_o *)gameObject;
  SkillEntity__getSkillMessageInfo(v42, &name, &detail, targetLv, 0LL);
  gameObject = this->fields.skillAfter;
  v47 = targetIdOld >= 1 ? v84 : targetLv - 1;
  if ( !gameObject )
    goto LABEL_89;
  if ( isOpen )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = this->fields.skillIconBef;
    if ( !gameObject )
      goto LABEL_89;
    SkillIconComponent__Set_26129364((SkillIconComponent_o *)gameObject, targetId, targetLv, 0LL);
    skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v42, targetLv, 0LL);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !skillBefChargeTimeLb )
      goto LABEL_89;
    UILabel__set_text(skillBefChargeTimeLb, (System_String_o *)gameObject, 0LL);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v42, v47, 0LL);
    if ( !beforeChargeTimeInfo )
      goto LABEL_89;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = this->fields.skillIconAft;
    if ( !gameObject )
      goto LABEL_89;
    SkillIconComponent__Set_26129364((SkillIconComponent_o *)gameObject, targetId, targetLv, 0LL);
    skillAftChargeTimeLb = this->fields.skillAftChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v42, targetLv, 0LL);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !skillAftChargeTimeLb )
      goto LABEL_89;
    UILabel__set_text(skillAftChargeTimeLb, (System_String_o *)gameObject, 0LL);
    AfterChargeTimeInfo = this->fields.AfterChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v42, targetLv, 0LL);
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
      v80 = v47;
      skillAftTitleLb = this->fields.skillAftTitleLb;
      v53 = name;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_1722/*"APPEND_SKILL_RESULT_AFTER_LV"*/, 0LL);
      v85 = targetLv;
      v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v85);
      v56 = System_String__Format(v54, v55, 0LL);
      gameObject = System_String__Concat_43849904(v53, v56, 0LL);
      if ( !skillAftTitleLb )
        goto LABEL_89;
      UILabel__set_text(skillAftTitleLb, (System_String_o *)gameObject, 0LL);
      v47 = v80;
    }
    gameObject = this->fields.skillAftTitleLb;
    if ( !gameObject )
      goto LABEL_89;
    UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
    if ( v46 )
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
      gameObject = BaseMonoBehaviour__createObject_18711800((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
      if ( !gameObject )
        goto LABEL_89;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)gameObject,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
      v60 = this->fields.skillAftTitleLb;
      v61 = (ServantSkillStrengthStatus_o *)Component_srcLineSprite;
      gameObject = (void *)ServantSkillEntity__GetStrengthStatus(v46, 0LL);
      if ( !v61 )
        goto LABEL_89;
      v89 = (UnityEngine_Vector2Int_o)0x1200000014LL;
      ServantSkillStrengthStatus__Set(v61, v60, (int32_t)gameObject, v46->fields.skillNum, 20, -9, v89, 0LL);
    }
    gameObject = this->fields.skillAftdetailLb;
    if ( !gameObject )
      goto LABEL_89;
    v62 = *((_DWORD *)gameObject + 104);
    WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, v62, 0, 0, 0LL);
    if ( key < 1 )
    {
      SkillEntity__getSkillMessageInfo(v42, &name, &detail, v47, 0LL);
      gameObject = this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_89;
      v63 = targetId;
    }
    else
    {
      gameObject = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v41,
                     key,
                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !gameObject )
        goto LABEL_89;
      v42 = (SkillEntity_o *)gameObject;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)gameObject, &name, &detail, v47, 0LL);
      if ( !isRelease )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        detail = LocalizationManager__Get((System_String_o *)StringLiteral_12285/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, 0LL);
        WrapControlText__textBBCodeAdjust(this->fields.skillAftdetailLb, detail, v62, 0, 0, 0LL);
      }
      gameObject = this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_89;
      v63 = key;
    }
    SkillIconComponent__Set_26129364((SkillIconComponent_o *)gameObject, v63, v47, 0LL);
    v64 = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v42, v47, 0LL);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !v64 )
      goto LABEL_89;
    UILabel__set_text(v64, (System_String_o *)gameObject, 0LL);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v42, v47, 0LL);
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
    v66 = name;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_1723/*"APPEND_SKILL_RESULT_LV"*/, 0LL);
    v68 = v84;
    if ( isOpen )
      v68 = targetLv;
    v85 = v68;
    v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v85);
    v70 = System_String__Format(v67, v69, 0LL);
    gameObject = System_String__Concat_43849904(v66, v70, 0LL);
    if ( !skillBefTitleLb )
      goto LABEL_89;
    UILabel__set_text(skillBefTitleLb, (System_String_o *)gameObject, 0LL);
  }
  gameObject = this->fields.skillBefTitleLb;
  if ( !gameObject )
    goto LABEL_89;
  UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
  if ( !v46 )
    goto LABEL_86;
  StrengthStatus = ServantSkillEntity__GetStrengthStatus(v46, 0LL);
  if ( targetIdOld >= 1 )
  {
    gameObject = ServantSkillMaster__getEntityFromSkillId(v81, svtId, v43, targetIdOld, 0LL);
    if ( !gameObject )
      goto LABEL_89;
    v46 = (ServantSkillEntity_o *)gameObject;
    StrengthStatus = ServantSkillEntity__GetStrengthStatus((ServantSkillEntity_o *)gameObject, 0LL);
  }
  v72 = StrengthStatus;
  skillNum = v46->fields.skillNum;
  if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  }
  gameObject = this->fields.skillBefTitleLb;
  if ( !gameObject
    || (v74 = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH,
        v75 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL),
        (gameObject = BaseMonoBehaviour__createObject_18711800((BaseMonoBehaviour_o *)this, v74, v75, 0LL, 0LL)) == 0LL)
    || (gameObject = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___)) == 0LL )
  {
LABEL_89:
    sub_B0D97C(gameObject);
  }
  v90 = (UnityEngine_Vector2Int_o)0x1200000014LL;
  ServantSkillStrengthStatus__Set(
    (ServantSkillStrengthStatus_o *)gameObject,
    this->fields.skillBefTitleLb,
    v72,
    skillNum,
    20,
    -9,
    v90,
    0LL);
LABEL_86:
  gameObject = this->fields.skillBefdetailLb;
  if ( !gameObject )
    goto LABEL_89;
  WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, *((_DWORD *)gameObject + 104), 0, 0, 0LL);
  v78 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v76, v77);
  System_Action___ctor(v78, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v78, 0, 0LL);
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
    sub_B0D97C(skillInfo);
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
  void *SkillEntity; // x0
  SkillUpResultWindowComponent_o *v16; // x0
  const MethodInfo *v17; // x2
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v19; // x0
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  SkillUpResultWindowComponent_o *v21; // x0
  const MethodInfo *v22; // x2
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v24; // x0
  System_String_o *text; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *v26; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4214A75 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId);
    sub_B0D8A4(&StringLiteral_6896/*"GET_SKILL_NAME"*/, v11);
    sub_B0D8A4(&StringLiteral_1669/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, v12);
    sub_B0D8A4(&StringLiteral_2554/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, v13);
    byte_4214A75 = 1;
  }
  name = 0LL;
  v26 = 0LL;
  detail = 0LL;
  text = 0LL;
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_2554/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)SkillEntity, 0LL);
  SkillEntity = SkillUpResultWindowComponent__GetSkillEntity(v16, oldSkillId, v17);
  if ( !SkillEntity )
    goto LABEL_15;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &name, &detail, oldSkillLv, 0LL);
  skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_6896/*"GET_SKILL_NAME"*/, 0LL);
  SkillEntity = System_String__Format(v19, (Il2CppObject *)name, 0LL);
  if ( !skillChangeInfoNameOld )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoNameOld, (System_String_o *)SkillEntity, 0LL);
  SkillEntity = this->fields.skillChangeInfoDetailOld;
  if ( !SkillEntity )
    goto LABEL_15;
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, detail, *((_DWORD *)SkillEntity + 104), 0, 0, 0LL);
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_1669/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)SkillEntity, 0LL);
  SkillEntity = SkillUpResultWindowComponent__GetSkillEntity(v21, nowSkillId, v22);
  if ( !SkillEntity
    || (SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &v26, &text, nowSkillLv, 0LL),
        skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow,
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6896/*"GET_SKILL_NAME"*/, 0LL),
        SkillEntity = System_String__Format(v24, (Il2CppObject *)v26, 0LL),
        !skillChangeInfoNameNow)
    || (UILabel__set_text(skillChangeInfoNameNow, (System_String_o *)SkillEntity, 0LL),
        (SkillEntity = this->fields.skillChangeInfoDetailNow) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(SkillEntity);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  void *Master_WarQuestSelectionMaster; // x0
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
  System_String_o *v33; // x1
  System_String_o **v34; // x8
  UIWidget_o *v35; // x24
  SkillUpResultWindowComponent_c *v36; // x8
  UILabel_o *npBefDetailLb; // x20
  struct UILabel_o *v38; // x8
  System_String_o *DetalShort_28055856; // x21
  TreasureDvcLvEntity_o *v40; // x0
  int32_t mFontSize; // w2
  System_String_o *v42; // x1
  UILabel_o *resNpLvFirstLb; // x24
  struct UILabel_o *v44; // x20
  struct UILabel_o *v45; // x8
  UILabel_o *npAftDetailLb; // x20
  struct UILabel_o *v47; // x8
  int32_t v48; // [xsp+Ch] [xbp-64h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  lv = targetLv;
  if ( (byte_4214A6E & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, usrSvtData);
    sub_B0D8A4(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMaster_TreasureDvcMaster___, v16);
    sub_B0D8A4(&DataManager_TypeInfo, v17);
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v18);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B0D8A4(&SkillUpResultWindowComponent_TypeInfo, v20);
    sub_B0D8A4(&StringLiteral_1/*""*/, v21);
    byte_4214A6E = 1;
  }
  entity = 0LL;
  v48 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !usrSvtData )
    goto LABEL_74;
  v23 = (TreasureDvcMaster_o *)Master_WarQuestSelectionMaster;
  v25 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v51.fields.currentCryptoKey = v25;
  *(_QWORD *)&v51.fields.fakeValue = v24;
  Master_WarQuestSelectionMaster = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v51, 0LL);
  if ( !v23 )
    goto LABEL_74;
  v26 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v23, (int32_t)Master_WarQuestSelectionMaster, targetId, 0LL);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !v26 || !Master_WarQuestSelectionMaster )
    goto LABEL_74;
  v27 = TreasureDvcLvMaster__GetEntity(
          (TreasureDvcLvMaster_o *)Master_WarQuestSelectionMaster,
          v26->fields.id,
          targetLv,
          0LL);
  Master_WarQuestSelectionMaster = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)v23,
                                             &entity,
                                             targetIdOld,
                                             (const MethodInfo_2669C30 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    targetIdOld = 0;
  if ( !this->fields.npRubyNameLb )
    goto LABEL_74;
  UILabel__set_text(this->fields.npRubyNameLb, v26->fields.ruby, 0LL);
  Master_WarQuestSelectionMaster = this->fields.npNameLb;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_74;
  v28 = kind != 5;
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v26->fields.name, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(usrSvtData, this->fields.npNameLb, this->fields.npRubyNameLb, 0LL);
  v48 = targetLvOld;
  if ( targetIdOld > 0 || kind == 5 )
  {
    Master_WarQuestSelectionMaster = this->fields.npRankInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v28, 0LL);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v28, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npRankupBeforeLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    v34 = entity ? &entity->fields.longName : (System_String_o **)&StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, *v34, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npRankupAfterLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v26->fields.rank, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npRankupAfterLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    Master_WarQuestSelectionMaster = UnityEngine_Component__GetComponent_WebViewObject_(
                                       (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                       (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v35 = (UIWidget_o *)Master_WarQuestSelectionMaster;
    v36 = SkillUpResultWindowComponent_TypeInfo;
    if ( (BYTE3(SkillUpResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v36 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v35 )
      goto LABEL_74;
    UIWidget__set_color(v35, v36->static_fields->COLOR_VAL, 0LL);
    v48 = targetLvOld;
    if ( !v27 )
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
    if ( !v27 )
    {
LABEL_31:
      Master_WarQuestSelectionMaster = this->fields.npBefDetailLb;
      if ( Master_WarQuestSelectionMaster )
      {
        UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        Master_WarQuestSelectionMaster = this->fields.npAftDetailLb;
        if ( Master_WarQuestSelectionMaster )
        {
          v33 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_53:
          UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v33, 0LL);
          return;
        }
      }
      goto LABEL_74;
    }
  }
  else
  {
    currentNpLvLb = this->fields.currentNpLvLb;
    Master_WarQuestSelectionMaster = System_Int32__ToString((int32_t)&v48, 0LL);
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
                                       (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v31 = (UIWidget_o *)Master_WarQuestSelectionMaster;
    v32 = SkillUpResultWindowComponent_TypeInfo;
    if ( (BYTE3(SkillUpResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v32 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v31 )
      goto LABEL_74;
    UIWidget__set_color(v31, v32->static_fields->COLOR_VAL, 0LL);
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
    if ( !v27 )
      goto LABEL_31;
  }
  if ( kind == 5 )
  {
    npBefDetailLb = this->fields.npBefDetailLb;
    Master_WarQuestSelectionMaster = TreasureDvcLvEntity__getDetalShort_28055856(v27, lv, 0LL);
    v38 = this->fields.npBefDetailLb;
    if ( v38 )
    {
      WrapControlText__textAdjust(
        npBefDetailLb,
        (System_String_o *)Master_WarQuestSelectionMaster,
        v38->fields.mFontSize,
        0,
        0,
        0LL);
      Master_WarQuestSelectionMaster = this->fields.npAftDetailLb;
      if ( Master_WarQuestSelectionMaster )
      {
        v33 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_53;
      }
    }
LABEL_74:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  if ( targetIdOld < 1 )
  {
    v44 = this->fields.npBefDetailLb;
    Master_WarQuestSelectionMaster = TreasureDvcLvEntity__getDetalShort_28055856(v27, v48, 0LL);
    v45 = this->fields.npBefDetailLb;
    if ( !v45 )
      goto LABEL_74;
    mFontSize = v45->fields.mFontSize;
    v42 = (System_String_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = v44;
  }
  else
  {
    DetalShort_28055856 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    v40 = TreasureDvcLvMaster__GetEntity(
            (TreasureDvcLvMaster_o *)Master_WarQuestSelectionMaster,
            targetIdOld,
            targetLvOld,
            0LL);
    if ( v40 )
      DetalShort_28055856 = TreasureDvcLvEntity__getDetalShort_28055856(v40, v48, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npBefDetailLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    mFontSize = *((_DWORD *)Master_WarQuestSelectionMaster + 104);
    v42 = DetalShort_28055856;
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)Master_WarQuestSelectionMaster, v42, mFontSize, 0, 0, 0LL);
  npAftDetailLb = this->fields.npAftDetailLb;
  Master_WarQuestSelectionMaster = TreasureDvcLvEntity__getDetalShort_28055856(v27, lv, 0LL);
  v47 = this->fields.npAftDetailLb;
  if ( !v47 )
    goto LABEL_74;
  WrapControlText__textBBCodeAdjust(
    npAftDetailLb,
    (System_String_o *)Master_WarQuestSelectionMaster,
    v47->fields.mFontSize,
    0,
    0,
    0LL);
}