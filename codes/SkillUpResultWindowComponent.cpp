// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // s3
  float v5; // s4
  float v6; // s5
  float v7; // s6
  int v8; // s0
  int v9; // s1
  int v10; // s2
  struct SkillUpResultWindowComponent_StaticFields v11; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_42E78E3 & 1) == 0 )
  {
    sub_B5D5C4(&SkillUpResultWindowComponent_TypeInfo, v1, v2, v3);
    byte_42E78E3 = 1;
  }
  v8 = 1065185444;
  v9 = 1064430469;
  v10 = 1050790593;
  v11 = (struct SkillUpResultWindowComponent_StaticFields)0LL;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v11);
  *SkillUpResultWindowComponent_TypeInfo->static_fields = v11;
}


void __fastcall SkillUpResultWindowComponent___ctor(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E78E2 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E78E2 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SkillUpResultWindowComponent__Close(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x0
  System_Action_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_42E78DD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SkillUpResultWindowComponent_EndClose__, v5, v6, v7);
    byte_42E78DD = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  SkillUpResultWindowComponent__Close_23382124(this, v9, v10);
}


void __fastcall SkillUpResultWindowComponent__Close_23382124(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42E78DE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SkillUpResultWindowComponent_EndClose__, v5, v6, v7);
    byte_42E78DE = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
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
    sub_B5D69C(gameObject, v4);
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
    sub_B5D560(p_openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_42E78E0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, svtId, num, *(_QWORD *)&skillId);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E78E0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  return ServantSkillMaster__getEntityFromSkillId((ServantSkillMaster_o *)Instance, svtId, num, skillId, 0LL);
}


SkillEntity_o *__fastcall SkillUpResultWindowComponent__GetSkillEntity(
        SkillUpResultWindowComponent_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E78DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, skillId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E78DF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    skillId,
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  return (SkillEntity_o *)entity;
}


void __fastcall SkillUpResultWindowComponent__Init(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  __int64 gameObject; // x0
  __int64 v70; // x1
  const MethodInfo *v71; // x2
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Text_StringBuilder_o *v78; // x20
  int32_t SvtId; // w22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  System_Collections_Generic_List_QuestEntity__o *v82; // x0
  Il2CppObject *current; // x23
  System_String_o *v84; // x0
  __int64 v85; // x1
  System_String_o *v86; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v88; // x0
  int32_t v89; // w23
  UILabel_o *friendshipLabel; // x22
  UnityEngine_GameObject_o *v91; // x20
  UILabel_o *friendshipCurrentLvLabel; // x20
  UILabel_o *friendshipResultLvLabel; // x20
  UIWidget_o *v94; // x20
  SkillUpResultWindowComponent_c *v95; // x8
  struct UILabel_o *v96; // x8
  System_Action_o *v97; // x20
  System_Collections_Generic_List_Enumerator_T__o v98; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v99; // [xsp+20h] [xbp-70h] BYREF
  int32_t FriendShipRank; // [xsp+48h] [xbp-48h] BYREF
  int32_t v101; // [xsp+4Ch] [xbp-44h] BYREF

  v101 = oldFriendShipRank;
  if ( (byte_42E78DB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)usrSvtData, oldFriendShipRank, callback);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v24, v25, v26);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&NetworkManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_SkillUpResultWindowComponent_EndOpen__, v45, v46, v47);
    sub_B5D5C4(&SkillUpResultWindowComponent_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&SoundManager_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_11238/*"RESULT_BOUNDS_OPENQUEST"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_11240/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_11235/*"RESULT_BOUNDS_GETVOICE"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_1/*""*/, v66, v67, v68);
    byte_42E78DB = 1;
  }
  memset(&v99, 0, sizeof(v99));
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
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v71);
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
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.openCallBack,
              (System_Int32_array **)callback,
              v72,
              v73,
              v74,
              v75,
              v76,
              v77);
            gameObject = (__int64)this->fields.friendshipLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v78 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v78, 0LL);
              if ( usrSvtData )
              {
                SvtId = UserServantEntity__getSvtId(usrSvtData, 0LL);
                gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)gameObject,
                                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
                    gameObject = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                    if ( gameObject )
                    {
                      v82 = clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                              (clsQuestCheck_o *)gameObject,
                              SvtId,
                              oldFriendShipRank,
                              8,
                              0LL);
                      if ( v82 )
                      {
                        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                          &v98,
                          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v82,
                          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
                        v99 = v98;
                        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                  &v99,
                                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
                        {
                          current = v99.fields.current;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v84 = LocalizationManager__Get((System_String_o *)StringLiteral_11238/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
                          if ( !current )
                            sub_B5D69C(v84, v85);
                          v86 = v84;
                          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
                          v88 = System_String__Format(v86, QuestName, 0LL);
                          if ( !v78 )
                            sub_B5D69C(v88, v88);
                          System_Text_StringBuilder__AppendLine_42954540(v78, v88, 0LL);
                        }
                        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                          &v99,
                          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
                      }
                      v89 = v101;
                      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                      }
                      gameObject = ServantCommentManager__IsOpenByServantFriendShip(SvtId, v89, 0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11240/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, 0LL);
                        if ( !v78 )
                          goto LABEL_66;
                        gameObject = (__int64)System_Text_StringBuilder__AppendLine_42954540(
                                                v78,
                                                (System_String_o *)gameObject,
                                                0LL);
                      }
                      if ( !EntityDefinitely )
                        goto LABEL_66;
                      gameObject = ServantVoiceMaster__isOpenByServantFriendShip(
                                     SvtId,
                                     EntityDefinitely->fields.maxLimitCount,
                                     v101,
                                     0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11235/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
                        if ( !v78 )
                          goto LABEL_66;
                        System_Text_StringBuilder__AppendLine_42954540(v78, (System_String_o *)gameObject, 0LL);
                      }
                      else if ( !v78 )
                      {
                        goto LABEL_66;
                      }
                      friendshipLabel = this->fields.friendshipLabel;
                      gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v78->klass->vtable._3_ToString.method)(
                                     v78,
                                     v78->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                      if ( friendshipLabel )
                      {
                        UILabel__set_text(friendshipLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (__int64)this->fields.friendshipLvInfo;
                        if ( gameObject )
                        {
                          v91 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
                          gameObject = UserServantCollectionEntity__getFriendShipRank(EntityDefinitely, 0LL);
                          if ( v91 )
                          {
                            UnityEngine_GameObject__SetActive(v91, (int)gameObject > v101, 0LL);
                            friendshipCurrentLvLabel = this->fields.friendshipCurrentLvLabel;
                            gameObject = (__int64)System_Int32__ToString((int32_t)&v101, 0LL);
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
                                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
                                  v94 = (UIWidget_o *)gameObject;
                                  v95 = SkillUpResultWindowComponent_TypeInfo;
                                  if ( (BYTE3(SkillUpResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
                                    v95 = SkillUpResultWindowComponent_TypeInfo;
                                  }
                                  if ( v94 )
                                  {
                                    UIWidget__set_color(v94, v95->static_fields->COLOR_VAL, 0LL);
                                    v96 = this->fields.friendshipLabel;
                                    if ( v96 )
                                    {
                                      if ( !System_String__IsNullOrEmpty(v96->fields.mText, 0LL) )
                                      {
LABEL_64:
                                        v97 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v97,
                                          (Il2CppObject *)this,
                                          Method_SkillUpResultWindowComponent_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v97, 0, 0LL);
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
    sub_B5D69C(gameObject, v70);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_42E78D8 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)tdAddEntity, index, *(_QWORD *)&beforeLv);
    byte_42E78D8 = 1;
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
    sub_B5D69C(gameObject, v14);
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

  if ( (byte_42E78D7 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, oldTargetId, oldTargetLv, *(_QWORD *)&nowTargetId);
    byte_42E78D7 = 1;
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
    sub_B5D69C(gameObject, v14);
  }
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent__OpenNpUpResultInfo_23377000(
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL8 v36; // x1
  const MethodInfo *v37; // x2
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  ServantTreasureDeviceAddMaster_o *v44; // x26
  __int64 v45; // x27
  __int64 v46; // x28
  int32_t v47; // w27
  ServantTreasureDeviceAddEntity_o *v48; // x26
  int v49; // w27
  const MethodInfo *v50; // x7
  System_Action_o *v51; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_42E78D9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)usrSvtData, targetId, *(_QWORD *)&targetLv);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___, v17, v18, v19);
    sub_B5D5C4(&DataManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SkillUpResultWindowComponent_EndOpen__, v29, v30, v31);
    sub_B5D5C4(&SoundManager_TypeInfo, v32, v33, v34);
    byte_42E78D9 = 1;
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
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v37);
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
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.openCallBack,
              (System_Int32_array **)callback,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43);
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
            if ( usrSvtData )
            {
              v44 = (ServantTreasureDeviceAddMaster_o *)gameObject;
              v46 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
              v45 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v52.fields.currentCryptoKey = v46;
              *(_QWORD *)&v52.fields.fakeValue = v45;
              v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v52, 0LL);
              gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                         usrSvtData->fields.limitCount,
                                                         0LL);
              if ( v44 )
              {
                gameObject = (UnityEngine_GameObject_o *)ServantTreasureDeviceAddMaster__GetEnableEntity(
                                                           v44,
                                                           v47,
                                                           (int32_t)gameObject,
                                                           0,
                                                           0LL);
                if ( this->fields.npInfoAddRoot )
                {
                  v48 = (ServantTreasureDeviceAddEntity_o *)gameObject;
                  UnityEngine_GameObject__SetActive(this->fields.npInfoAddRoot, gameObject != 0LL, 0LL);
                  v49 = (targetLvOld != targetLv) & (UserServantEntity__IsHeroine(usrSvtData, 0LL)
                                                  && targetIdOld != targetId);
                  if ( targetIdOld == targetId && UserServantEntity__IsHeroine(usrSvtData, 0LL) )
                    targetIdOld = 0;
                  gameObject = this->fields.npInfoNormalRoot;
                  if ( (v49 & 1) != 0 )
                  {
                    v36 = 0LL;
                    if ( !gameObject )
                      goto LABEL_45;
                  }
                  else
                  {
                    v36 = (kind != 18) & (unsigned __int8)(v48 == 0LL);
                    if ( !gameObject )
                      goto LABEL_45;
                  }
                  UnityEngine_GameObject__SetActive(gameObject, v36, 0LL);
                  gameObject = this->fields.npInfoHeroineNpChangeRoot;
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive(gameObject, v49, 0LL);
                    gameObject = this->fields.npInfoNpChangeRoot;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, kind == 18, 0LL);
                      if ( v49 )
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
                            v51 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                            System_Action___ctor(
                              v51,
                              (Il2CppObject *)this,
                              Method_SkillUpResultWindowComponent_EndOpen__,
                              0LL);
                            BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0LL);
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
                        if ( !v48 )
                        {
                          SkillUpResultWindowComponent__SetupNpUpResultInfoNormal(
                            this,
                            usrSvtData,
                            targetId,
                            targetLv,
                            targetIdOld,
                            targetLvOld,
                            kind,
                            v50);
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
                                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                            if ( gameObject )
                            {
                              UIWidget__set_height((UIWidget_o *)gameObject, 300, 0LL);
                              gameObject = (UnityEngine_GameObject_o *)this->fields.npInfoAddResultComponent;
                              if ( gameObject )
                              {
                                NpInfoAddResultComponent__SetDisplay(
                                  (NpInfoAddResultComponent_o *)gameObject,
                                  v48,
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
    sub_B5D69C(gameObject, v36);
  }
}


void __fastcall SkillUpResultWindowComponent__OpenPowerUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        System_Action_o *callback,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v40; // x21
  __int64 v41; // x20
  __int64 v42; // x22
  WarEntity_o *Entity; // x0
  UILabel_o *powerupLabel; // x20
  WarEntity_o *v45; // x21
  System_Action_o *v46; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_42E78DC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)usrSvtData, (_DWORD)callback, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    sub_B5D5C4(&Method_SkillUpResultWindowComponent_EndOpen__, v22, v23, v24);
    sub_B5D5C4(&SoundManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_11239/*"RESULT_BOUNDS_POWERUP"*/, v28, v29, v30);
    byte_42E78DC = 1;
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
    SkillUpResultWindowComponent__SetChildrenActive(this, 0, v33);
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.openCallBack,
      (System_Int32_array **)callback,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_23;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !usrSvtData )
      goto LABEL_23;
    v40 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
    v42 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v41 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v47.fields.currentCryptoKey = v42;
    *(_QWORD *)&v47.fields.fakeValue = v41;
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                               v47,
                                               0LL);
    if ( !v40 )
      goto LABEL_23;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v40,
               (int32_t)gameObject,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    powerupLabel = this->fields.powerupLabel;
    v45 = Entity;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11239/*"RESULT_BOUNDS_POWERUP"*/, 0LL);
    if ( !v45
      || (gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)v45->fields.emptyMessage,
                                                     0LL),
          !powerupLabel) )
    {
LABEL_23:
      sub_B5D69C(gameObject, v32);
    }
    UILabel__set_text(powerupLabel, (System_String_o *)gameObject, 0LL);
    v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v46, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent__OpenSkillChangeMessage(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        System_Action_o *callback,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  System_String_o *BattleName; // x0
  UILabel_o *costumeChangeLabel; // x21
  Il2CppObject *v27; // x22
  System_String_o *v28; // x0

  if ( (byte_42E78D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, svtId, (_DWORD)callback, method);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&SoundManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_3461/*"COSTUME_CHANGE_DESCRIPTION"*/, v19, v20, v21);
    byte_42E78D5 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, *(const MethodInfo **)&svtId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v24);
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
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                             svtId,
                                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_18;
  BattleName = ServantEntity__getBattleName((ServantEntity_o *)gameObject, 0, -1, 0LL);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  v27 = (Il2CppObject *)BattleName;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3461/*"COSTUME_CHANGE_DESCRIPTION"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v28, v27, 0LL);
  if ( !costumeChangeLabel )
LABEL_18:
    sub_B5D69C(gameObject, v23);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  UILabel_o *skillChangeInfoTitle; // x26
  System_String_o *v25; // x0
  const MethodInfo *v26; // x5

  if ( (byte_42E78D6 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, oldSkillId, oldSkillLv, *(_QWORD *)&nowSkillId);
    sub_B5D5C4(&SoundManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_3462/*"COSTUME_CHANGE_SKILL_TITLE"*/, v18, v19, v20);
    byte_42E78D6 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, *(const MethodInfo **)&oldSkillId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v23);
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
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3462/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v25, (Il2CppObject *)costumeName, 0LL);
  if ( !skillChangeInfoTitle )
LABEL_15:
    sub_B5D69C(gameObject, v22);
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)gameObject, 0LL);
  SkillUpResultWindowComponent__SetSkillInfo(this, oldSkillId, oldSkillLv, nowSkillId, nowSkillLv, v26);
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  void *gameObject; // x0
  __int64 v60; // x1
  const MethodInfo *v61; // x2
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v68; // x22
  SkillEntity_o *v69; // x28
  int32_t v70; // w24
  il2cpp_array_size_t max_length; // w8
  int32_t v72; // w9
  ServantSkillEntity_o *v73; // x25
  int32_t v74; // w21
  UILabel_o *skillBefChargeTimeLb; // x20
  UnityEngine_GameObject_o *beforeChargeTimeInfo; // x20
  UILabel_o *skillAftChargeTimeLb; // x20
  UnityEngine_GameObject_o *AfterChargeTimeInfo; // x20
  UILabel_o *skillAftTitleLb; // x26
  System_String_o *v80; // x20
  System_String_o *v81; // x21
  Il2CppObject *v82; // x0
  System_String_o *v83; // x0
  System_String_o *PATH; // x20
  UnityEngine_Transform_o *transform; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UILabel_o *v87; // x20
  ServantSkillStrengthStatus_o *v88; // x26
  int32_t v89; // w26
  int32_t v90; // w1
  UILabel_o *v91; // x20
  UILabel_o *skillBefTitleLb; // x21
  System_String_o *v93; // x22
  System_String_o *v94; // x20
  int32_t v95; // w8
  Il2CppObject *v96; // x0
  System_String_o *v97; // x0
  int32_t StrengthStatus; // w0
  int32_t v99; // w21
  int32_t skillNum; // w20
  System_String_o *v101; // x22
  UnityEngine_Transform_o *v102; // x0
  System_Action_o *v103; // x20
  __int64 v104; // x0
  int32_t v105; // [xsp+0h] [xbp-90h]
  ServantSkillMaster_o *v106; // [xsp+8h] [xbp-88h]
  int32_t svtId; // [xsp+14h] [xbp-7Ch]
  int key; // [xsp+18h] [xbp-78h]
  int32_t v109; // [xsp+24h] [xbp-6Ch]
  int32_t v110; // [xsp+28h] [xbp-68h] BYREF
  int32_t EffectChargeTurn; // [xsp+2Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+30h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector2Int_o v114; // 0:x6.8
  UnityEngine_Vector2Int_o v115; // 0:x6.8

  if ( (byte_42E78D4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, targetId, targetLv, callback);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v26, v27, v28);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v29, v30, v31);
    sub_B5D5C4(&int_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&ServantSkillStrengthStatus_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    sub_B5D5C4(&Method_SkillUpResultWindowComponent_EndOpen__, v44, v45, v46);
    sub_B5D5C4(&SoundManager_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_1739/*"APPEND_SKILL_RESULT_AFTER_LV"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_12394/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_1740/*"APPEND_SKILL_RESULT_LV"*/, v56, v57, v58);
    byte_42E78D4 = 1;
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
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v61);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.openCallBack,
    (System_Int32_array **)callback,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_89;
  gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !gameObject )
    goto LABEL_89;
  v109 = targetLvOld;
  v68 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
  gameObject = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                 targetId,
                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillList )
    goto LABEL_89;
  v69 = (SkillEntity_o *)gameObject;
  v70 = 0;
  max_length = skillList->max_length;
  while ( v70 < (int)max_length )
  {
    if ( v70 >= max_length )
    {
      v104 = sub_B5D6C8(gameObject);
      sub_B5D668(v104, 0LL);
    }
    v72 = skillList->m_Items[++v70];
    if ( v72 == targetId )
      goto LABEL_20;
  }
  v70 = 0;
LABEL_20:
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_89;
  gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  if ( !gameObject )
    goto LABEL_89;
  v106 = (ServantSkillMaster_o *)gameObject;
  svtId = baseSvtId;
  gameObject = ServantSkillMaster__getEntityFromSkillId(
                 (ServantSkillMaster_o *)gameObject,
                 baseSvtId,
                 v70,
                 targetId,
                 0LL);
  if ( !v69 )
    goto LABEL_89;
  v73 = (ServantSkillEntity_o *)gameObject;
  SkillEntity__getSkillMessageInfo(v69, &name, &detail, targetLv, 0LL);
  gameObject = this->fields.skillAfter;
  v74 = targetIdOld >= 1 ? v109 : targetLv - 1;
  if ( !gameObject )
    goto LABEL_89;
  if ( isOpen )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = this->fields.skillIconBef;
    if ( !gameObject )
      goto LABEL_89;
    SkillIconComponent__Set_26822028((SkillIconComponent_o *)gameObject, targetId, targetLv, 0LL);
    skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v69, targetLv, 0LL);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !skillBefChargeTimeLb )
      goto LABEL_89;
    UILabel__set_text(skillBefChargeTimeLb, (System_String_o *)gameObject, 0LL);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v69, v74, 0LL);
    if ( !beforeChargeTimeInfo )
      goto LABEL_89;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = this->fields.skillIconAft;
    if ( !gameObject )
      goto LABEL_89;
    SkillIconComponent__Set_26822028((SkillIconComponent_o *)gameObject, targetId, targetLv, 0LL);
    skillAftChargeTimeLb = this->fields.skillAftChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v69, targetLv, 0LL);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !skillAftChargeTimeLb )
      goto LABEL_89;
    UILabel__set_text(skillAftChargeTimeLb, (System_String_o *)gameObject, 0LL);
    AfterChargeTimeInfo = this->fields.AfterChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v69, targetLv, 0LL);
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
      v105 = v74;
      skillAftTitleLb = this->fields.skillAftTitleLb;
      v80 = name;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v81 = LocalizationManager__Get((System_String_o *)StringLiteral_1739/*"APPEND_SKILL_RESULT_AFTER_LV"*/, 0LL);
      v110 = targetLv;
      v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v110);
      v83 = System_String__Format(v81, v82, 0LL);
      gameObject = System_String__Concat_44577788(v80, v83, 0LL);
      if ( !skillAftTitleLb )
        goto LABEL_89;
      UILabel__set_text(skillAftTitleLb, (System_String_o *)gameObject, 0LL);
      v74 = v105;
    }
    gameObject = this->fields.skillAftTitleLb;
    if ( !gameObject )
      goto LABEL_89;
    UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
    if ( v73 )
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
      gameObject = BaseMonoBehaviour__createObject_21082944((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
      if ( !gameObject )
        goto LABEL_89;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)gameObject,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
      v87 = this->fields.skillAftTitleLb;
      v88 = (ServantSkillStrengthStatus_o *)Component_srcLineSprite;
      gameObject = (void *)ServantSkillEntity__GetStrengthStatus(v73, 0LL);
      if ( !v88 )
        goto LABEL_89;
      v114 = (UnityEngine_Vector2Int_o)0x1200000014LL;
      ServantSkillStrengthStatus__Set(v88, v87, (int32_t)gameObject, v73->fields.skillNum, 20, -9, v114, 0LL);
    }
    gameObject = this->fields.skillAftdetailLb;
    if ( !gameObject )
      goto LABEL_89;
    v89 = *((_DWORD *)gameObject + 104);
    WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, v89, 0, 0, 0LL);
    if ( key < 1 )
    {
      SkillEntity__getSkillMessageInfo(v69, &name, &detail, v74, 0LL);
      gameObject = this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_89;
      v90 = targetId;
    }
    else
    {
      gameObject = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v68,
                     key,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !gameObject )
        goto LABEL_89;
      v69 = (SkillEntity_o *)gameObject;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)gameObject, &name, &detail, v74, 0LL);
      if ( !isRelease )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        detail = LocalizationManager__Get((System_String_o *)StringLiteral_12394/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, 0LL);
        WrapControlText__textBBCodeAdjust(this->fields.skillAftdetailLb, detail, v89, 0, 0, 0LL);
      }
      gameObject = this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_89;
      v90 = key;
    }
    SkillIconComponent__Set_26822028((SkillIconComponent_o *)gameObject, v90, v74, 0LL);
    v91 = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v69, v74, 0LL);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !v91 )
      goto LABEL_89;
    UILabel__set_text(v91, (System_String_o *)gameObject, 0LL);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v69, v74, 0LL);
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
    v93 = name;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v94 = LocalizationManager__Get((System_String_o *)StringLiteral_1740/*"APPEND_SKILL_RESULT_LV"*/, 0LL);
    v95 = v109;
    if ( isOpen )
      v95 = targetLv;
    v110 = v95;
    v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v110);
    v97 = System_String__Format(v94, v96, 0LL);
    gameObject = System_String__Concat_44577788(v93, v97, 0LL);
    if ( !skillBefTitleLb )
      goto LABEL_89;
    UILabel__set_text(skillBefTitleLb, (System_String_o *)gameObject, 0LL);
  }
  gameObject = this->fields.skillBefTitleLb;
  if ( !gameObject )
    goto LABEL_89;
  UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
  if ( !v73 )
    goto LABEL_86;
  StrengthStatus = ServantSkillEntity__GetStrengthStatus(v73, 0LL);
  if ( targetIdOld >= 1 )
  {
    gameObject = ServantSkillMaster__getEntityFromSkillId(v106, svtId, v70, targetIdOld, 0LL);
    if ( !gameObject )
      goto LABEL_89;
    v73 = (ServantSkillEntity_o *)gameObject;
    StrengthStatus = ServantSkillEntity__GetStrengthStatus((ServantSkillEntity_o *)gameObject, 0LL);
  }
  v99 = StrengthStatus;
  skillNum = v73->fields.skillNum;
  if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  }
  gameObject = this->fields.skillBefTitleLb;
  if ( !gameObject
    || (v101 = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH,
        v102 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL),
        (gameObject = BaseMonoBehaviour__createObject_21082944((BaseMonoBehaviour_o *)this, v101, v102, 0LL, 0LL)) == 0LL)
    || (gameObject = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___)) == 0LL )
  {
LABEL_89:
    sub_B5D69C(gameObject, v60);
  }
  v115 = (UnityEngine_Vector2Int_o)0x1200000014LL;
  ServantSkillStrengthStatus__Set(
    (ServantSkillStrengthStatus_o *)gameObject,
    this->fields.skillBefTitleLb,
    v99,
    skillNum,
    20,
    -9,
    v115,
    0LL);
LABEL_86:
  gameObject = this->fields.skillBefdetailLb;
  if ( !gameObject )
    goto LABEL_89;
  WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, *((_DWORD *)gameObject + 104), 0, 0, 0LL);
  v103 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v103, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v103, 0, 0LL);
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
    sub_B5D69C(skillInfo, enable);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UILabel_o *skillChangeInfoSubTitleOld; // x24
  void *SkillEntity; // x0
  __int64 v22; // x1
  SkillUpResultWindowComponent_o *v23; // x0
  const MethodInfo *v24; // x2
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v26; // x0
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  SkillUpResultWindowComponent_o *v28; // x0
  const MethodInfo *v29; // x2
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v31; // x0
  System_String_o *text; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *v33; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42E78E1 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, oldSkillId, oldSkillLv, *(_QWORD *)&nowSkillId);
    sub_B5D5C4(&StringLiteral_6959/*"GET_SKILL_NAME"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1686/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_2597/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, v17, v18, v19);
    byte_42E78E1 = 1;
  }
  name = 0LL;
  v33 = 0LL;
  detail = 0LL;
  text = 0LL;
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_2597/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)SkillEntity, 0LL);
  SkillEntity = SkillUpResultWindowComponent__GetSkillEntity(v23, oldSkillId, v24);
  if ( !SkillEntity )
    goto LABEL_15;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &name, &detail, oldSkillLv, 0LL);
  skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6959/*"GET_SKILL_NAME"*/, 0LL);
  SkillEntity = System_String__Format(v26, (Il2CppObject *)name, 0LL);
  if ( !skillChangeInfoNameOld )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoNameOld, (System_String_o *)SkillEntity, 0LL);
  SkillEntity = this->fields.skillChangeInfoDetailOld;
  if ( !SkillEntity )
    goto LABEL_15;
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, detail, *((_DWORD *)SkillEntity + 104), 0, 0, 0LL);
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_1686/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)SkillEntity, 0LL);
  SkillEntity = SkillUpResultWindowComponent__GetSkillEntity(v28, nowSkillId, v29);
  if ( !SkillEntity
    || (SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &v33, &text, nowSkillLv, 0LL),
        skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow,
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_6959/*"GET_SKILL_NAME"*/, 0LL),
        SkillEntity = System_String__Format(v31, (Il2CppObject *)v33, 0LL),
        !skillChangeInfoNameNow)
    || (UILabel__set_text(skillChangeInfoNameNow, (System_String_o *)SkillEntity, 0LL),
        (SkillEntity = this->fields.skillChangeInfoDetailNow) == 0LL) )
  {
LABEL_15:
    sub_B5D69C(SkillEntity, v22);
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, text, *((_DWORD *)SkillEntity + 104), 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v37; // x1
  TreasureDvcMaster_o *v38; // x26
  __int64 v39; // x27
  __int64 v40; // x28
  TreasureDvcEntity_o *v41; // x25
  TreasureDvcLvEntity_o *v42; // x22
  bool v43; // w26
  UILabel_o *currentNpLvLb; // x24
  UILabel_o *resNpLvLb; // x24
  UIWidget_o *v46; // x24
  SkillUpResultWindowComponent_c *v47; // x8
  System_String_o *v48; // x1
  System_String_o **v49; // x8
  UIWidget_o *v50; // x24
  SkillUpResultWindowComponent_c *v51; // x8
  UILabel_o *npBefDetailLb; // x20
  struct UILabel_o *v53; // x8
  System_String_o *DetalShort_29262732; // x21
  TreasureDvcLvEntity_o *v55; // x0
  int32_t mFontSize; // w2
  System_String_o *v57; // x1
  UILabel_o *resNpLvFirstLb; // x24
  struct UILabel_o *v59; // x20
  struct UILabel_o *v60; // x8
  UILabel_o *npAftDetailLb; // x20
  struct UILabel_o *v62; // x8
  int32_t v63; // [xsp+Ch] [xbp-64h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  lv = targetLv;
  if ( (byte_42E78DA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponent_UIWidget___,
      (_DWORD)usrSvtData,
      targetId,
      *(_QWORD *)&targetLv);
    sub_B5D5C4(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_TreasureDvcMaster___, v18, v19, v20);
    sub_B5D5C4(&DataManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&SkillUpResultWindowComponent_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_1/*""*/, v33, v34, v35);
    byte_42E78DA = 1;
  }
  entity = 0LL;
  v63 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !usrSvtData )
    goto LABEL_74;
  v38 = (TreasureDvcMaster_o *)Master_WarQuestSelectionMaster;
  v40 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v66.fields.currentCryptoKey = v40;
  *(_QWORD *)&v66.fields.fakeValue = v39;
  Master_WarQuestSelectionMaster = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v66, 0LL);
  if ( !v38 )
    goto LABEL_74;
  v41 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v38, (int32_t)Master_WarQuestSelectionMaster, targetId, 0LL);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !v41 || !Master_WarQuestSelectionMaster )
    goto LABEL_74;
  v42 = TreasureDvcLvMaster__GetEntity(
          (TreasureDvcLvMaster_o *)Master_WarQuestSelectionMaster,
          v41->fields.id,
          targetLv,
          0LL);
  Master_WarQuestSelectionMaster = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)v38,
                                             &entity,
                                             targetIdOld,
                                             (const MethodInfo_23FAE6C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    targetIdOld = 0;
  if ( !this->fields.npRubyNameLb )
    goto LABEL_74;
  UILabel__set_text(this->fields.npRubyNameLb, v41->fields.ruby, 0LL);
  Master_WarQuestSelectionMaster = this->fields.npNameLb;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_74;
  v43 = kind != 5;
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v41->fields.name, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(usrSvtData, this->fields.npNameLb, this->fields.npRubyNameLb, 0LL);
  v63 = targetLvOld;
  if ( targetIdOld > 0 || kind == 5 )
  {
    Master_WarQuestSelectionMaster = this->fields.npRankInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v43, 0LL);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v43, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npRankupBeforeLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    v49 = entity ? &entity->fields.longName : (System_String_o **)&StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, *v49, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npRankupAfterLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v41->fields.rank, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npRankupAfterLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    Master_WarQuestSelectionMaster = UnityEngine_Component__GetComponent_WebViewObject_(
                                       (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                       (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v50 = (UIWidget_o *)Master_WarQuestSelectionMaster;
    v51 = SkillUpResultWindowComponent_TypeInfo;
    if ( (BYTE3(SkillUpResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v51 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v50 )
      goto LABEL_74;
    UIWidget__set_color(v50, v51->static_fields->COLOR_VAL, 0LL);
    v63 = targetLvOld;
    if ( !v42 )
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
    if ( !v42 )
    {
LABEL_31:
      Master_WarQuestSelectionMaster = this->fields.npBefDetailLb;
      if ( Master_WarQuestSelectionMaster )
      {
        UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        Master_WarQuestSelectionMaster = this->fields.npAftDetailLb;
        if ( Master_WarQuestSelectionMaster )
        {
          v48 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_53:
          UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v48, 0LL);
          return;
        }
      }
      goto LABEL_74;
    }
  }
  else
  {
    currentNpLvLb = this->fields.currentNpLvLb;
    Master_WarQuestSelectionMaster = System_Int32__ToString((int32_t)&v63, 0LL);
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
                                       (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v46 = (UIWidget_o *)Master_WarQuestSelectionMaster;
    v47 = SkillUpResultWindowComponent_TypeInfo;
    if ( (BYTE3(SkillUpResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v47 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v46 )
      goto LABEL_74;
    UIWidget__set_color(v46, v47->static_fields->COLOR_VAL, 0LL);
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
    if ( !v42 )
      goto LABEL_31;
  }
  if ( kind == 5 )
  {
    npBefDetailLb = this->fields.npBefDetailLb;
    Master_WarQuestSelectionMaster = TreasureDvcLvEntity__getDetalShort_29262732(v42, lv, 0LL);
    v53 = this->fields.npBefDetailLb;
    if ( v53 )
    {
      WrapControlText__textAdjust(
        npBefDetailLb,
        (System_String_o *)Master_WarQuestSelectionMaster,
        v53->fields.mFontSize,
        0,
        0,
        0LL);
      Master_WarQuestSelectionMaster = this->fields.npAftDetailLb;
      if ( Master_WarQuestSelectionMaster )
      {
        v48 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_53;
      }
    }
LABEL_74:
    sub_B5D69C(Master_WarQuestSelectionMaster, v37);
  }
  if ( targetIdOld < 1 )
  {
    v59 = this->fields.npBefDetailLb;
    Master_WarQuestSelectionMaster = TreasureDvcLvEntity__getDetalShort_29262732(v42, v63, 0LL);
    v60 = this->fields.npBefDetailLb;
    if ( !v60 )
      goto LABEL_74;
    mFontSize = v60->fields.mFontSize;
    v57 = (System_String_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = v59;
  }
  else
  {
    DetalShort_29262732 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    v55 = TreasureDvcLvMaster__GetEntity(
            (TreasureDvcLvMaster_o *)Master_WarQuestSelectionMaster,
            targetIdOld,
            targetLvOld,
            0LL);
    if ( v55 )
      DetalShort_29262732 = TreasureDvcLvEntity__getDetalShort_29262732(v55, v63, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npBefDetailLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    mFontSize = *((_DWORD *)Master_WarQuestSelectionMaster + 104);
    v57 = DetalShort_29262732;
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)Master_WarQuestSelectionMaster, v57, mFontSize, 0, 0, 0LL);
  npAftDetailLb = this->fields.npAftDetailLb;
  Master_WarQuestSelectionMaster = TreasureDvcLvEntity__getDetalShort_29262732(v42, lv, 0LL);
  v62 = this->fields.npAftDetailLb;
  if ( !v62 )
    goto LABEL_74;
  WrapControlText__textBBCodeAdjust(
    npAftDetailLb,
    (System_String_o *)Master_WarQuestSelectionMaster,
    v62->fields.mFontSize,
    0,
    0,
    0LL);
}