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

  if ( (byte_4186DFA & 1) == 0 )
  {
    sub_B2C35C(&SkillUpResultWindowComponent_TypeInfo, v1);
    byte_4186DFA = 1;
  }
  v6 = 1065185444;
  v7 = 1064430469;
  v8 = 1050790593;
  v9 = (struct SkillUpResultWindowComponent_StaticFields)0LL;
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v9);
  *SkillUpResultWindowComponent_TypeInfo->static_fields = v9;
}


void __fastcall SkillUpResultWindowComponent___ctor(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4186DF9 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4186DF9 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SkillUpResultWindowComponent__Close(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x0
  System_Action_o *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4186DF4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SkillUpResultWindowComponent_EndClose__, v3);
    byte_4186DF4 = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  SkillUpResultWindowComponent__Close_23827424(this, v5, v6);
}


void __fastcall SkillUpResultWindowComponent__Close_23827424(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4186DF5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_SkillUpResultWindowComponent_EndClose__, v4);
    byte_4186DF5 = 1;
  }
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
    sub_B2C434(gameObject, v4);
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
    sub_B2C2F8(p_openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v10; // x1

  if ( (byte_4186DF7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4186DF7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v10);
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
  __int64 v7; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4186DF6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&skillId);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4186DF6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    skillId,
    (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  return (SkillEntity_o *)entity;
}


void __fastcall SkillUpResultWindowComponent__Init(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
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
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Text_StringBuilder_o *v38; // x20
  int32_t SvtId; // w22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  System_Collections_Generic_List_QuestEntity__o *v42; // x0
  Il2CppObject *current; // x23
  System_String_o *v44; // x0
  __int64 v45; // x1
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
  System_Action_o *v57; // x20
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+20h] [xbp-70h] BYREF
  int32_t FriendShipRank; // [xsp+48h] [xbp-48h] BYREF
  int32_t v61; // [xsp+4Ch] [xbp-44h] BYREF

  v61 = oldFriendShipRank;
  if ( (byte_4186DF2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, usrSvtData);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&NetworkManager_TypeInfo, v16);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v19);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v20);
    sub_B2C35C(&Method_SkillUpResultWindowComponent_EndOpen__, v21);
    sub_B2C35C(&SkillUpResultWindowComponent_TypeInfo, v22);
    sub_B2C35C(&SoundManager_TypeInfo, v23);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v24);
    sub_B2C35C(&StringLiteral_11105/*"RESULT_BOUNDS_OPENQUEST"*/, v25);
    sub_B2C35C(&StringLiteral_11107/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, v26);
    sub_B2C35C(&StringLiteral_11102/*"RESULT_BOUNDS_GETVOICE"*/, v27);
    sub_B2C35C(&StringLiteral_1/*""*/, v28);
    byte_4186DF2 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  FriendShipRank = 0;
  if ( !this->fields.state )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(6, 0LL);
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
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.openCallBack,
              (System_Int32_array **)callback,
              v32,
              v33,
              v34,
              v35,
              v36,
              v37);
            gameObject = (__int64)this->fields.friendshipLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v38 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v38, 0LL);
              if ( usrSvtData )
              {
                SvtId = UserServantEntity__getSvtId(usrSvtData, 0LL);
                gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)gameObject,
                                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
                    gameObject = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                    if ( gameObject )
                    {
                      v42 = clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                              (clsQuestCheck_o *)gameObject,
                              SvtId,
                              oldFriendShipRank,
                              8,
                              0LL);
                      if ( v42 )
                      {
                        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                          &v58,
                          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v42,
                          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
                        v59 = v58;
                        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                  &v59,
                                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
                        {
                          current = v59.fields.current;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11105/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
                          if ( !current )
                            sub_B2C434(v44, v45);
                          v46 = v44;
                          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
                          v48 = System_String__Format(v46, QuestName, 0LL);
                          if ( !v38 )
                            sub_B2C434(v48, v48);
                          System_Text_StringBuilder__AppendLine_42409496(v38, v48, 0LL);
                        }
                        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                          &v59,
                          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
                      }
                      v49 = v61;
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
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11107/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, 0LL);
                        if ( !v38 )
                          goto LABEL_66;
                        gameObject = (__int64)System_Text_StringBuilder__AppendLine_42409496(
                                                v38,
                                                (System_String_o *)gameObject,
                                                0LL);
                      }
                      if ( !EntityDefinitely )
                        goto LABEL_66;
                      gameObject = ServantVoiceMaster__isOpenByServantFriendShip(
                                     SvtId,
                                     EntityDefinitely->fields.maxLimitCount,
                                     v61,
                                     0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11102/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
                        if ( !v38 )
                          goto LABEL_66;
                        System_Text_StringBuilder__AppendLine_42409496(v38, (System_String_o *)gameObject, 0LL);
                      }
                      else if ( !v38 )
                      {
                        goto LABEL_66;
                      }
                      friendshipLabel = this->fields.friendshipLabel;
                      gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v38->klass->vtable._3_ToString.method)(
                                     v38,
                                     v38->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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
                            UnityEngine_GameObject__SetActive(v51, (int)gameObject > v61, 0LL);
                            friendshipCurrentLvLabel = this->fields.friendshipCurrentLvLabel;
                            gameObject = (__int64)System_Int32__ToString((int32_t)&v61, 0LL);
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
                                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                        v57 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v57,
                                          (Il2CppObject *)this,
                                          Method_SkillUpResultWindowComponent_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0LL);
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
    sub_B2C434(gameObject, v30);
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

  if ( (byte_4186DEF & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, tdAddEntity);
    byte_4186DEF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
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
    sub_B2C434(gameObject, v14);
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

  if ( (byte_4186DEE & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&oldTargetId);
    byte_4186DEE = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
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
    sub_B2C434(gameObject, v14);
  }
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__OpenNpUpResultInfo_23822288(
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
  _BOOL8 v24; // x1
  const MethodInfo *v25; // x2
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  ServantTreasureDeviceAddMaster_o *v32; // x26
  __int64 v33; // x27
  __int64 v34; // x28
  int32_t v35; // w27
  ServantTreasureDeviceAddEntity_o *v36; // x26
  int v37; // w27
  const MethodInfo *v38; // x7
  System_Action_o *v39; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4186DF0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, usrSvtData);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___, v17);
    sub_B2C35C(&DataManager_TypeInfo, v18);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B2C35C(&Method_SkillUpResultWindowComponent_EndOpen__, v21);
    sub_B2C35C(&SoundManager_TypeInfo, v22);
    byte_4186DF0 = 1;
  }
  if ( !this->fields.state )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(6, 0LL);
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
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.openCallBack,
              (System_Int32_array **)callback,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31);
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
            if ( usrSvtData )
            {
              v32 = (ServantTreasureDeviceAddMaster_o *)gameObject;
              v34 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
              v33 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v40.fields.currentCryptoKey = v34;
              *(_QWORD *)&v40.fields.fakeValue = v33;
              v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v40, 0LL);
              gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                         usrSvtData->fields.limitCount,
                                                         0LL);
              if ( v32 )
              {
                gameObject = (UnityEngine_GameObject_o *)ServantTreasureDeviceAddMaster__GetEnableEntity(
                                                           v32,
                                                           v35,
                                                           (int32_t)gameObject,
                                                           0,
                                                           0LL);
                if ( this->fields.npInfoAddRoot )
                {
                  v36 = (ServantTreasureDeviceAddEntity_o *)gameObject;
                  UnityEngine_GameObject__SetActive(this->fields.npInfoAddRoot, gameObject != 0LL, 0LL);
                  v37 = (targetLvOld != targetLv) & (UserServantEntity__IsHeroine(usrSvtData, 0LL)
                                                  && targetIdOld != targetId);
                  if ( targetIdOld == targetId && UserServantEntity__IsHeroine(usrSvtData, 0LL) )
                    targetIdOld = 0;
                  gameObject = this->fields.npInfoNormalRoot;
                  if ( (v37 & 1) != 0 )
                  {
                    v24 = 0LL;
                    if ( !gameObject )
                      goto LABEL_45;
                  }
                  else
                  {
                    v24 = (kind != 18) & (unsigned __int8)(v36 == 0LL);
                    if ( !gameObject )
                      goto LABEL_45;
                  }
                  UnityEngine_GameObject__SetActive(gameObject, v24, 0LL);
                  gameObject = this->fields.npInfoHeroineNpChangeRoot;
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive(gameObject, v37, 0LL);
                    gameObject = this->fields.npInfoNpChangeRoot;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, kind == 18, 0LL);
                      if ( v37 )
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
                            v39 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                            System_Action___ctor(
                              v39,
                              (Il2CppObject *)this,
                              Method_SkillUpResultWindowComponent_EndOpen__,
                              0LL);
                            BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0LL);
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
                        if ( !v36 )
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
                                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                            if ( gameObject )
                            {
                              UIWidget__set_height((UIWidget_o *)gameObject, 300, 0LL);
                              gameObject = (UnityEngine_GameObject_o *)this->fields.npInfoAddResultComponent;
                              if ( gameObject )
                              {
                                NpInfoAddResultComponent__SetDisplay(
                                  (NpInfoAddResultComponent_o *)gameObject,
                                  v36,
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
    sub_B2C434(gameObject, v24);
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
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x21
  __int64 v25; // x20
  __int64 v26; // x22
  WarEntity_o *Entity; // x0
  UILabel_o *powerupLabel; // x20
  WarEntity_o *v29; // x21
  System_Action_o *v30; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4186DF3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, usrSvtData);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_SkillUpResultWindowComponent_EndOpen__, v12);
    sub_B2C35C(&SoundManager_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_11106/*"RESULT_BOUNDS_POWERUP"*/, v14);
    byte_4186DF3 = 1;
  }
  if ( !this->fields.state )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(6, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SkillUpResultWindowComponent__SetChildrenActive(this, 0, v17);
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.openCallBack,
      (System_Int32_array **)callback,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_23;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !usrSvtData )
      goto LABEL_23;
    v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
    v26 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v31.fields.currentCryptoKey = v26;
    *(_QWORD *)&v31.fields.fakeValue = v25;
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                               v31,
                                               0LL);
    if ( !v24 )
      goto LABEL_23;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v24,
               (int32_t)gameObject,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    powerupLabel = this->fields.powerupLabel;
    v29 = Entity;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11106/*"RESULT_BOUNDS_POWERUP"*/, 0LL);
    if ( !v29
      || (gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)v29->fields.emptyMessage,
                                                     0LL),
          !powerupLabel) )
    {
LABEL_23:
      sub_B2C434(gameObject, v16);
    }
    UILabel__set_text(powerupLabel, (System_String_o *)gameObject, 0LL);
    v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v30, 0, 0LL);
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
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  System_String_o *BattleName; // x0
  UILabel_o *costumeChangeLabel; // x21
  Il2CppObject *v17; // x22
  System_String_o *v18; // x0

  if ( (byte_4186DEC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_3395/*"COSTUME_CHANGE_DESCRIPTION"*/, v11);
    byte_4186DEC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v14);
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
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                             svtId,
                                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_18;
  BattleName = ServantEntity__getBattleName((ServantEntity_o *)gameObject, 0, -1, 0LL);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  v17 = (Il2CppObject *)BattleName;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3395/*"COSTUME_CHANGE_DESCRIPTION"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v18, v17, 0LL);
  if ( !costumeChangeLabel )
LABEL_18:
    sub_B2C434(gameObject, v13);
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
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  UILabel_o *skillChangeInfoTitle; // x26
  System_String_o *v21; // x0
  const MethodInfo *v22; // x5

  if ( (byte_4186DED & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId);
    sub_B2C35C(&SoundManager_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_3396/*"COSTUME_CHANGE_SKILL_TITLE"*/, v16);
    byte_4186DED = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v19);
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
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3396/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v21, (Il2CppObject *)costumeName, 0LL);
  if ( !skillChangeInfoTitle )
LABEL_15:
    sub_B2C434(gameObject, v18);
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)gameObject, 0LL);
  SkillUpResultWindowComponent__SetSkillInfo(this, oldSkillId, oldSkillLv, nowSkillId, nowSkillLv, v22);
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
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x22
  SkillEntity_o *v43; // x28
  int32_t v44; // w24
  il2cpp_array_size_t max_length; // w8
  int32_t v46; // w9
  const MethodInfo *v47; // x4
  ServantSkillEntity_o *v48; // x25
  int32_t v49; // w21
  const MethodInfo *v50; // x5
  UILabel_o *skillBefChargeTimeLb; // x20
  const MethodInfo *v52; // x2
  UnityEngine_GameObject_o *beforeChargeTimeInfo; // x20
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x5
  UILabel_o *skillAftChargeTimeLb; // x20
  const MethodInfo *v57; // x2
  UnityEngine_GameObject_o *AfterChargeTimeInfo; // x20
  const MethodInfo *v59; // x2
  UILabel_o *skillAftTitleLb; // x26
  System_String_o *v61; // x20
  System_String_o *v62; // x21
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  System_String_o *PATH; // x20
  UnityEngine_Transform_o *transform; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UILabel_o *v68; // x20
  ServantSkillStrengthStatus_o *v69; // x26
  int32_t v70; // w26
  const MethodInfo *v71; // x4
  const MethodInfo *v72; // x4
  const MethodInfo *v73; // x5
  int32_t v74; // w1
  UILabel_o *v75; // x20
  const MethodInfo *v76; // x2
  const MethodInfo *v77; // x2
  UILabel_o *skillBefTitleLb; // x21
  System_String_o *v79; // x22
  System_String_o *v80; // x20
  int32_t v81; // w8
  Il2CppObject *v82; // x0
  System_String_o *v83; // x0
  int32_t StrengthStatus; // w0
  int32_t v85; // w21
  int32_t skillNum; // w20
  System_String_o *v87; // x22
  UnityEngine_Transform_o *v88; // x0
  System_Action_o *v89; // x20
  __int64 v90; // x0
  int32_t v91; // [xsp+0h] [xbp-90h]
  ServantSkillMaster_o *v92; // [xsp+8h] [xbp-88h]
  int32_t svtId; // [xsp+14h] [xbp-7Ch]
  int key; // [xsp+18h] [xbp-78h]
  int32_t v95; // [xsp+24h] [xbp-6Ch]
  int32_t v96; // [xsp+28h] [xbp-68h] BYREF
  int32_t EffectChargeTurn; // [xsp+2Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+30h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector2Int_o v100; // 0:x6.8
  UnityEngine_Vector2Int_o v101; // 0:x6.8

  if ( (byte_4186DEB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&targetId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v21);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v22);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v23);
    sub_B2C35C(&int_TypeInfo, v24);
    sub_B2C35C(&LocalizationManager_TypeInfo, v25);
    sub_B2C35C(&ServantSkillStrengthStatus_TypeInfo, v26);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B2C35C(&Method_SkillUpResultWindowComponent_EndOpen__, v28);
    sub_B2C35C(&SoundManager_TypeInfo, v29);
    sub_B2C35C(&StringLiteral_1714/*"APPEND_SKILL_RESULT_AFTER_LV"*/, v30);
    sub_B2C35C(&StringLiteral_12247/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, v31);
    sub_B2C35C(&StringLiteral_1715/*"APPEND_SKILL_RESULT_LV"*/, v32);
    byte_4186DEB = 1;
  }
  detail = 0LL;
  name = 0LL;
  EffectChargeTurn = 0;
  if ( this->fields.state )
    return;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v35);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.openCallBack,
    (System_Int32_array **)callback,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_89;
  gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !gameObject )
    goto LABEL_89;
  v95 = targetLvOld;
  v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
  gameObject = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                 targetId,
                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillList )
    goto LABEL_89;
  v43 = (SkillEntity_o *)gameObject;
  v44 = 0;
  max_length = skillList->max_length;
  while ( v44 < (int)max_length )
  {
    if ( v44 >= max_length )
    {
      v90 = sub_B2C460(gameObject);
      sub_B2C400(v90, 0LL);
    }
    v46 = skillList->m_Items[++v44];
    if ( v46 == targetId )
      goto LABEL_20;
  }
  v44 = 0;
LABEL_20:
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_89;
  gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  if ( !gameObject )
    goto LABEL_89;
  v92 = (ServantSkillMaster_o *)gameObject;
  svtId = baseSvtId;
  gameObject = ServantSkillMaster__getEntityFromSkillId(
                 (ServantSkillMaster_o *)gameObject,
                 baseSvtId,
                 v44,
                 targetId,
                 0LL);
  if ( !v43 )
    goto LABEL_89;
  v48 = (ServantSkillEntity_o *)gameObject;
  SkillEntity__getSkillMessageInfo(v43, &name, &detail, targetLv, v47);
  gameObject = this->fields.skillAfter;
  v49 = targetIdOld >= 1 ? v95 : targetLv - 1;
  if ( !gameObject )
    goto LABEL_89;
  if ( isOpen )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = this->fields.skillIconBef;
    if ( !gameObject )
      goto LABEL_89;
    SkillIconComponent__Set_23786384((SkillIconComponent_o *)gameObject, targetId, targetLv, 0, 0, v50);
    skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v43, targetLv, v52);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !skillBefChargeTimeLb )
      goto LABEL_89;
    UILabel__set_text(skillBefChargeTimeLb, (System_String_o *)gameObject, 0LL);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v43, v49, v54);
    if ( !beforeChargeTimeInfo )
      goto LABEL_89;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = this->fields.skillIconAft;
    if ( !gameObject )
      goto LABEL_89;
    SkillIconComponent__Set_23786384((SkillIconComponent_o *)gameObject, targetId, targetLv, 0, 0, v55);
    skillAftChargeTimeLb = this->fields.skillAftChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v43, targetLv, v57);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !skillAftChargeTimeLb )
      goto LABEL_89;
    UILabel__set_text(skillAftChargeTimeLb, (System_String_o *)gameObject, 0LL);
    AfterChargeTimeInfo = this->fields.AfterChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v43, targetLv, v59);
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
      v91 = v49;
      skillAftTitleLb = this->fields.skillAftTitleLb;
      v61 = name;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__Get((System_String_o *)StringLiteral_1714/*"APPEND_SKILL_RESULT_AFTER_LV"*/, 0LL);
      v96 = targetLv;
      v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96);
      v64 = System_String__Format(v62, v63, 0LL);
      gameObject = System_String__Concat_44305532(v61, v64, 0LL);
      if ( !skillAftTitleLb )
        goto LABEL_89;
      UILabel__set_text(skillAftTitleLb, (System_String_o *)gameObject, 0LL);
      v49 = v91;
    }
    gameObject = this->fields.skillAftTitleLb;
    if ( !gameObject )
      goto LABEL_89;
    UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
    if ( v48 )
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
      gameObject = BaseMonoBehaviour__createObject_19214240((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
      if ( !gameObject )
        goto LABEL_89;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)gameObject,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
      v68 = this->fields.skillAftTitleLb;
      v69 = (ServantSkillStrengthStatus_o *)Component_srcLineSprite;
      gameObject = (void *)ServantSkillEntity__GetStrengthStatus(v48, 0LL);
      if ( !v69 )
        goto LABEL_89;
      v100 = (UnityEngine_Vector2Int_o)0x1200000014LL;
      ServantSkillStrengthStatus__Set(v69, v68, (int32_t)gameObject, v48->fields.skillNum, 20, -9, v100, 0LL);
    }
    gameObject = this->fields.skillAftdetailLb;
    if ( !gameObject )
      goto LABEL_89;
    v70 = *((_DWORD *)gameObject + 104);
    WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, v70, 0, 0, 0LL);
    if ( key < 1 )
    {
      SkillEntity__getSkillMessageInfo(v43, &name, &detail, v49, v71);
      gameObject = this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_89;
      v74 = targetId;
    }
    else
    {
      gameObject = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v42,
                     key,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !gameObject )
        goto LABEL_89;
      v43 = (SkillEntity_o *)gameObject;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)gameObject, &name, &detail, v49, v72);
      if ( !isRelease )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        detail = LocalizationManager__Get((System_String_o *)StringLiteral_12247/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, 0LL);
        WrapControlText__textBBCodeAdjust(this->fields.skillAftdetailLb, detail, v70, 0, 0, 0LL);
      }
      gameObject = this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_89;
      v74 = key;
    }
    SkillIconComponent__Set_23786384((SkillIconComponent_o *)gameObject, v74, v49, 0, 0, v73);
    v75 = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v43, v49, v76);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !v75 )
      goto LABEL_89;
    UILabel__set_text(v75, (System_String_o *)gameObject, 0LL);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v43, v49, v77);
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
    v79 = name;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v80 = LocalizationManager__Get((System_String_o *)StringLiteral_1715/*"APPEND_SKILL_RESULT_LV"*/, 0LL);
    v81 = v95;
    if ( isOpen )
      v81 = targetLv;
    v96 = v81;
    v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96);
    v83 = System_String__Format(v80, v82, 0LL);
    gameObject = System_String__Concat_44305532(v79, v83, 0LL);
    if ( !skillBefTitleLb )
      goto LABEL_89;
    UILabel__set_text(skillBefTitleLb, (System_String_o *)gameObject, 0LL);
  }
  gameObject = this->fields.skillBefTitleLb;
  if ( !gameObject )
    goto LABEL_89;
  UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
  if ( !v48 )
    goto LABEL_86;
  StrengthStatus = ServantSkillEntity__GetStrengthStatus(v48, 0LL);
  if ( targetIdOld >= 1 )
  {
    gameObject = ServantSkillMaster__getEntityFromSkillId(v92, svtId, v44, targetIdOld, 0LL);
    if ( !gameObject )
      goto LABEL_89;
    v48 = (ServantSkillEntity_o *)gameObject;
    StrengthStatus = ServantSkillEntity__GetStrengthStatus((ServantSkillEntity_o *)gameObject, 0LL);
  }
  v85 = StrengthStatus;
  skillNum = v48->fields.skillNum;
  if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  }
  gameObject = this->fields.skillBefTitleLb;
  if ( !gameObject
    || (v87 = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH,
        v88 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL),
        (gameObject = BaseMonoBehaviour__createObject_19214240((BaseMonoBehaviour_o *)this, v87, v88, 0LL, 0LL)) == 0LL)
    || (gameObject = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___)) == 0LL )
  {
LABEL_89:
    sub_B2C434(gameObject, v34);
  }
  v101 = (UnityEngine_Vector2Int_o)0x1200000014LL;
  ServantSkillStrengthStatus__Set(
    (ServantSkillStrengthStatus_o *)gameObject,
    this->fields.skillBefTitleLb,
    v85,
    skillNum,
    20,
    -9,
    v101,
    0LL);
LABEL_86:
  gameObject = this->fields.skillBefdetailLb;
  if ( !gameObject )
    goto LABEL_89;
  WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, *((_DWORD *)gameObject + 104), 0, 0, 0LL);
  v89 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v89, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v89, 0, 0LL);
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
    sub_B2C434(skillInfo, enable);
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
  __int64 v16; // x1
  SkillUpResultWindowComponent_o *v17; // x0
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x4
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v21; // x0
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  SkillUpResultWindowComponent_o *v23; // x0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x4
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v27; // x0
  System_String_o *text; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *v29; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4186DF8 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId);
    sub_B2C35C(&StringLiteral_6876/*"GET_SKILL_NAME"*/, v11);
    sub_B2C35C(&StringLiteral_1661/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, v12);
    sub_B2C35C(&StringLiteral_2543/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, v13);
    byte_4186DF8 = 1;
  }
  name = 0LL;
  v29 = 0LL;
  detail = 0LL;
  text = 0LL;
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_2543/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)SkillEntity, 0LL);
  SkillEntity = SkillUpResultWindowComponent__GetSkillEntity(v17, oldSkillId, v18);
  if ( !SkillEntity )
    goto LABEL_15;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &name, &detail, oldSkillLv, v19);
  skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_6876/*"GET_SKILL_NAME"*/, 0LL);
  SkillEntity = System_String__Format(v21, (Il2CppObject *)name, 0LL);
  if ( !skillChangeInfoNameOld )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoNameOld, (System_String_o *)SkillEntity, 0LL);
  SkillEntity = this->fields.skillChangeInfoDetailOld;
  if ( !SkillEntity )
    goto LABEL_15;
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, detail, *((_DWORD *)SkillEntity + 104), 0, 0, 0LL);
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_1661/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)SkillEntity, 0LL);
  SkillEntity = SkillUpResultWindowComponent__GetSkillEntity(v23, nowSkillId, v24);
  if ( !SkillEntity
    || (SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &v29, &text, nowSkillLv, v25),
        skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow,
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_6876/*"GET_SKILL_NAME"*/, 0LL),
        SkillEntity = System_String__Format(v27, (Il2CppObject *)v29, 0LL),
        !skillChangeInfoNameNow)
    || (UILabel__set_text(skillChangeInfoNameNow, (System_String_o *)SkillEntity, 0LL),
        (SkillEntity = this->fields.skillChangeInfoDetailNow) == 0LL) )
  {
LABEL_15:
    sub_B2C434(SkillEntity, v16);
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
  System_String_o *v34; // x1
  System_String_o **v35; // x8
  UIWidget_o *v36; // x24
  SkillUpResultWindowComponent_c *v37; // x8
  UILabel_o *npBefDetailLb; // x20
  struct UILabel_o *v39; // x8
  System_String_o *DetalShort_28585128; // x21
  TreasureDvcLvEntity_o *v41; // x0
  int32_t mFontSize; // w2
  System_String_o *v43; // x1
  UILabel_o *resNpLvFirstLb; // x24
  struct UILabel_o *v45; // x20
  struct UILabel_o *v46; // x8
  UILabel_o *npAftDetailLb; // x20
  struct UILabel_o *v48; // x8
  int32_t v49; // [xsp+Ch] [xbp-64h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  lv = targetLv;
  if ( (byte_4186DF1 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, usrSvtData);
    sub_B2C35C(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMaster_TreasureDvcMaster___, v16);
    sub_B2C35C(&DataManager_TypeInfo, v17);
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B2C35C(&SkillUpResultWindowComponent_TypeInfo, v20);
    sub_B2C35C(&StringLiteral_1/*""*/, v21);
    byte_4186DF1 = 1;
  }
  entity = 0LL;
  v49 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !usrSvtData )
    goto LABEL_74;
  v24 = (TreasureDvcMaster_o *)Master_WarQuestSelectionMaster;
  v26 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v52.fields.currentCryptoKey = v26;
  *(_QWORD *)&v52.fields.fakeValue = v25;
  Master_WarQuestSelectionMaster = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v52, 0LL);
  if ( !v24 )
    goto LABEL_74;
  v27 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v24, (int32_t)Master_WarQuestSelectionMaster, targetId, 0LL);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !v27 || !Master_WarQuestSelectionMaster )
    goto LABEL_74;
  v28 = TreasureDvcLvMaster__GetEntity(
          (TreasureDvcLvMaster_o *)Master_WarQuestSelectionMaster,
          v27->fields.id,
          targetLv,
          0LL);
  Master_WarQuestSelectionMaster = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)v24,
                                             &entity,
                                             targetIdOld,
                                             (const MethodInfo_24E412C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    targetIdOld = 0;
  if ( !this->fields.npRubyNameLb )
    goto LABEL_74;
  UILabel__set_text(this->fields.npRubyNameLb, v27->fields.ruby, 0LL);
  Master_WarQuestSelectionMaster = this->fields.npNameLb;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_74;
  v29 = kind != 5;
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v27->fields.name, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(usrSvtData, this->fields.npNameLb, this->fields.npRubyNameLb, 0LL);
  v49 = targetLvOld;
  if ( targetIdOld > 0 || kind == 5 )
  {
    Master_WarQuestSelectionMaster = this->fields.npRankInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v29, 0LL);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v29, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npRankupBeforeLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    v35 = entity ? &entity->fields.longName : (System_String_o **)&StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, *v35, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npRankupAfterLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v27->fields.rank, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npRankupAfterLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    Master_WarQuestSelectionMaster = UnityEngine_Component__GetComponent_WebViewObject_(
                                       (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v36 = (UIWidget_o *)Master_WarQuestSelectionMaster;
    v37 = SkillUpResultWindowComponent_TypeInfo;
    if ( (BYTE3(SkillUpResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v37 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v36 )
      goto LABEL_74;
    UIWidget__set_color(v36, v37->static_fields->COLOR_VAL, 0LL);
    v49 = targetLvOld;
    if ( !v28 )
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
    if ( !v28 )
    {
LABEL_31:
      Master_WarQuestSelectionMaster = this->fields.npBefDetailLb;
      if ( Master_WarQuestSelectionMaster )
      {
        UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        Master_WarQuestSelectionMaster = this->fields.npAftDetailLb;
        if ( Master_WarQuestSelectionMaster )
        {
          v34 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_53:
          UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v34, 0LL);
          return;
        }
      }
      goto LABEL_74;
    }
  }
  else
  {
    currentNpLvLb = this->fields.currentNpLvLb;
    Master_WarQuestSelectionMaster = System_Int32__ToString((int32_t)&v49, 0LL);
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
                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v32 = (UIWidget_o *)Master_WarQuestSelectionMaster;
    v33 = SkillUpResultWindowComponent_TypeInfo;
    if ( (BYTE3(SkillUpResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v33 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v32 )
      goto LABEL_74;
    UIWidget__set_color(v32, v33->static_fields->COLOR_VAL, 0LL);
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
    if ( !v28 )
      goto LABEL_31;
  }
  if ( kind == 5 )
  {
    npBefDetailLb = this->fields.npBefDetailLb;
    Master_WarQuestSelectionMaster = TreasureDvcLvEntity__getDetalShort_28585128(v28, lv, 0LL);
    v39 = this->fields.npBefDetailLb;
    if ( v39 )
    {
      WrapControlText__textAdjust(
        npBefDetailLb,
        (System_String_o *)Master_WarQuestSelectionMaster,
        v39->fields.mFontSize,
        0,
        0,
        0LL);
      Master_WarQuestSelectionMaster = this->fields.npAftDetailLb;
      if ( Master_WarQuestSelectionMaster )
      {
        v34 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_53;
      }
    }
LABEL_74:
    sub_B2C434(Master_WarQuestSelectionMaster, v23);
  }
  if ( targetIdOld < 1 )
  {
    v45 = this->fields.npBefDetailLb;
    Master_WarQuestSelectionMaster = TreasureDvcLvEntity__getDetalShort_28585128(v28, v49, 0LL);
    v46 = this->fields.npBefDetailLb;
    if ( !v46 )
      goto LABEL_74;
    mFontSize = v46->fields.mFontSize;
    v43 = (System_String_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = v45;
  }
  else
  {
    DetalShort_28585128 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    v41 = TreasureDvcLvMaster__GetEntity(
            (TreasureDvcLvMaster_o *)Master_WarQuestSelectionMaster,
            targetIdOld,
            targetLvOld,
            0LL);
    if ( v41 )
      DetalShort_28585128 = TreasureDvcLvEntity__getDetalShort_28585128(v41, v49, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npBefDetailLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    mFontSize = *((_DWORD *)Master_WarQuestSelectionMaster + 104);
    v43 = DetalShort_28585128;
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)Master_WarQuestSelectionMaster, v43, mFontSize, 0, 0, 0LL);
  npAftDetailLb = this->fields.npAftDetailLb;
  Master_WarQuestSelectionMaster = TreasureDvcLvEntity__getDetalShort_28585128(v28, lv, 0LL);
  v48 = this->fields.npAftDetailLb;
  if ( !v48 )
    goto LABEL_74;
  WrapControlText__textBBCodeAdjust(
    npAftDetailLb,
    (System_String_o *)Master_WarQuestSelectionMaster,
    v48->fields.mFontSize,
    0,
    0,
    0LL);
}