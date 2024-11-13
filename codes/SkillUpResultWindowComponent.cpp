void __fastcall SkillUpResultWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B19BE8 & 1) == 0 )
  {
    sub_1BCA7E0(&SkillUpResultWindowComponent_TypeInfo, v1, v2);
    byte_4B19BE8 = 1;
  }
  *SkillUpResultWindowComponent_TypeInfo->static_fields = (struct SkillUpResultWindowComponent_StaticFields)xmmword_BD3590;
}


void __fastcall SkillUpResultWindowComponent___ctor(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19BE7 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B19BE7 = 1;
  }
  this->fields.svtTransformCount = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SkillUpResultWindowComponent__Close(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x0
  System_Action_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B19BE2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SkillUpResultWindowComponent_EndClose__, v5, v6);
    byte_4B19BE2 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  SkillUpResultWindowComponent__Close_45826316(this, v8, v9);
}


void __fastcall SkillUpResultWindowComponent__Close_45826316(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B19BE3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_SkillUpResultWindowComponent_EndClose__, v5, v6);
    byte_4B19BE3 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, callback, method, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
    sub_1BCAA3C(gameObject, v4);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__EndOpen(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o *openCallBack; // x19
  PartyOrganizationUtility_o *p_openCallBack; // x0

  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    p_openCallBack = (PartyOrganizationUtility_o *)&this->fields.openCallBack;
    p_openCallBack->klass = 0LL;
    sub_1BCA784(p_openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1

  if ( (byte_4B19BE5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, *(_QWORD *)&svtId, *(_QWORD *)&num);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19BE5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v11);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19BE4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&skillId, method);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B19BE4 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    skillId,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  return (SkillEntity_o *)entity;
}


void __fastcall SkillUpResultWindowComponent__Init(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t oldFriendShipRank,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  __int64 gameObject; // x0
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Text_StringBuilder_o *v61; // x21
  int32_t SvtId; // w22
  __int64 v63; // x1
  Il2CppObject *MasterData_object; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x20
  System_Collections_Generic_List_object__o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x1
  Il2CppObject *current; // x23
  System_String_o *v70; // x0
  __int64 v71; // x1
  System_String_o *v72; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v74; // x0
  int32_t v75; // w23
  UILabel_o *friendshipLabel; // x22
  UnityEngine_GameObject_o *v77; // x21
  UILabel_o *friendshipCurrentLvLabel; // x21
  UILabel_o *friendshipResultLvLabel; // x21
  UIWidget_o *v80; // x20
  SkillUpResultWindowComponent_c *v81; // x8
  struct UILabel_o *v82; // x8
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  System_Action_o *v86; // x20
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+0h] [xbp-90h] BYREF
  int32_t FriendShipRank; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+20h] [xbp-70h] BYREF
  int32_t oldFriendShipRanka; // [xsp+3Ch] [xbp-54h] BYREF

  oldFriendShipRanka = oldFriendShipRank;
  if ( (byte_4B19BE0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, usrSvtData, *(_QWORD *)&oldFriendShipRank);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_SkillUpResultWindowComponent_EndOpen__, v31, v32);
    sub_1BCA7E0(&Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__, v33, v34);
    sub_1BCA7E0(&SkillUpResultWindowComponent_TypeInfo, v35, v36);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v37, v38);
    sub_1BCA7E0(&StringLiteral_11223/*"RESULT_BOUNDS_OPENQUEST"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_11225/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_11220/*"RESULT_BOUNDS_GETVOICE"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v45, v46);
    byte_4B19BE0 = 1;
  }
  memset(&v89, 0, sizeof(v89));
  FriendShipRank = 0;
  if ( !this->fields.state )
  {
    v47 = Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__ + 83) & 2) != 0 )
      v47 = (_QWORD *)sub_1BCA7F8(Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__);
    v48 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v47, v47[4]);
    OverwriteAssetSoundName__PlaySystemSe(v48, 6, 0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v51);
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
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.openCallBack,
              (int64_t)callback,
              v52,
              v53,
              v54,
              v55,
              v56,
              v57);
            gameObject = (__int64)this->fields.friendshipLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v61 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v58, v59, v60);
              System_Text_StringBuilder___ctor(v61, 0LL);
              if ( usrSvtData )
              {
                SvtId = UserServantEntity__getSvtId(usrSvtData, 0LL);
                gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  MasterData_object = DataManager__GetMasterData_object_(
                                        (DataManager_o *)gameObject,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v63);
                  gameObject = NetworkManager__get_UserId(0LL);
                  if ( MasterData_object )
                  {
                    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                         (UserServantCollectionMaster_o *)MasterData_object,
                                         gameObject,
                                         SvtId,
                                         0LL);
                    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                    if ( gameObject )
                    {
                      v66 = (System_Collections_Generic_List_object__o *)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                                                                           (clsQuestCheck_o *)gameObject,
                                                                           SvtId,
                                                                           oldFriendShipRank,
                                                                           8,
                                                                           0LL);
                      if ( v66 )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v87,
                          v66,
                          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
                        v89 = v87;
                        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v89,
                                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
                        {
                          current = v89.fields._current;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68);
                          v70 = LocalizationManager__Get((System_String_o *)StringLiteral_11223/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
                          if ( !current )
                            sub_1BCAA3C(v70, v71);
                          v72 = v70;
                          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
                          v74 = System_String__Format(v72, QuestName, 0LL);
                          if ( !v61 )
                            sub_1BCAA3C(v74, v74);
                          System_Text_StringBuilder__AppendLine_61564340(v61, v74, 0LL);
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v89,
                          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
                      }
                      v75 = oldFriendShipRanka;
                      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v67);
                      gameObject = ServantCommentManager__IsOpenByServantFriendShip(SvtId, v75, 0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11225/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, 0LL);
                        if ( !v61 )
                          goto LABEL_56;
                        gameObject = (__int64)System_Text_StringBuilder__AppendLine_61564340(
                                                v61,
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
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11220/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
                        if ( !v61 )
                          goto LABEL_56;
                        System_Text_StringBuilder__AppendLine_61564340(v61, (System_String_o *)gameObject, 0LL);
                      }
                      else if ( !v61 )
                      {
                        goto LABEL_56;
                      }
                      friendshipLabel = this->fields.friendshipLabel;
                      gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v61->klass->vtable._3_ToString.method)(
                                     v61,
                                     v61->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                      if ( friendshipLabel )
                      {
                        UILabel__set_text(friendshipLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (__int64)this->fields.friendshipLvInfo;
                        if ( gameObject )
                        {
                          v77 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
                          gameObject = UserServantCollectionEntity__getFriendShipRank(EntityDefinitely, 0LL);
                          if ( v77 )
                          {
                            UnityEngine_GameObject__SetActive(v77, (int)gameObject > oldFriendShipRanka, 0LL);
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
                                                          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
                                  v80 = (UIWidget_o *)gameObject;
                                  v81 = SkillUpResultWindowComponent_TypeInfo;
                                  if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo, v50);
                                    v81 = SkillUpResultWindowComponent_TypeInfo;
                                  }
                                  if ( v80 )
                                  {
                                    UIWidget__set_color(v80, v81->static_fields->COLOR_VAL, 0LL);
                                    v82 = this->fields.friendshipLabel;
                                    if ( v82 )
                                    {
                                      if ( !System_String__IsNullOrEmpty(v82->fields.mText, 0LL) )
                                      {
LABEL_54:
                                        v86 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v83, v84, v85);
                                        System_Action___ctor(
                                          v86,
                                          (Il2CppObject *)this,
                                          Method_SkillUpResultWindowComponent_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v86, 0, 0LL);
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
    sub_1BCAA3C(gameObject, v50);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B19BDD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__, addManager, *(_QWORD *)&index);
    byte_4B19BDD = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BCA7F8(Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0LL);
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
    sub_1BCAA3C(gameObject, v16);
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

  if ( (byte_4B19BDC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__,
      *(_QWORD *)&oldTargetId,
      *(_QWORD *)&oldTargetLv);
    byte_4B19BDC = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BCA7F8(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0LL);
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
    sub_1BCAA3C(gameObject, v16);
  }
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, v19);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent__OpenNpUpResultInfo_45821424(
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
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  _BOOL4 v35; // w26
  _BOOL4 v36; // w27
  _BOOL4 IsHeroine; // w28
  _BOOL4 v38; // w20
  int v39; // w27
  int v40; // w28
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x7
  const MethodInfo *v43; // x3
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x6
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  struct System_String_array *titles; // x8
  System_String_o *titleText; // x3
  System_Action_o *v52; // x20
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v53; // [xsp+0h] [xbp-70h]
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B19BDE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, usrSvtData, *(_QWORD *)&targetId);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v18, v19);
    sub_1BCA7E0(&Method_SkillUpResultWindowComponent_EndOpen__, v20, v21);
    sub_1BCA7E0(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76947072, v22, v23);
    byte_4B19BDE = 1;
  }
  transformInfo = 0LL;
  if ( !this->fields.state )
  {
    v24 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76947072;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76947072 + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_1BCA7F8(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76947072);
    v25 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 6, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v28);
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
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.openCallBack,
              (int64_t)callback,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
            if ( usrSvtData )
            {
              gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformCount(usrSvtData, 1, 0LL);
              this->fields.svtTransformCount = (int)gameObject;
              if ( addManager )
              {
                v53 = addManager;
                v35 = addManager->fields._tdAddEntity_k__BackingField != 0LL;
                v36 = (int)gameObject > 1;
                IsHeroine = UserServantEntity__IsHeroine(usrSvtData, 0LL);
                v38 = targetIdOld != targetId;
                if ( targetIdOld == targetId && UserServantEntity__IsHeroine(usrSvtData, 0LL) )
                  targetIdOld = 0;
                gameObject = this->fields.npInfoAddRoot;
                if ( gameObject )
                {
                  v39 = v36 || v35;
                  UnityEngine_GameObject__SetActive(gameObject, v39, 0LL);
                  gameObject = this->fields.npInfoNormalRoot;
                  if ( gameObject )
                  {
                    v40 = targetLvOld != targetLv && IsHeroine && v38;
                    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)(v40 | (kind == 18) | v39) != 1, 0LL);
                    gameObject = this->fields.npInfoHeroineNpChangeRoot;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, v40, 0LL);
                      gameObject = this->fields.npInfoNpChangeRoot;
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive(gameObject, kind == 18, 0LL);
                        if ( v40 )
                        {
                          gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld;
                          if ( gameObject )
                          {
                            HeroineNpChangeInfoComponent__Setup(
                              (HeroineNpChangeInfoComponent_o *)gameObject,
                              targetIdOld,
                              targetLvOld,
                              v41);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow;
                            if ( gameObject )
                            {
                              HeroineNpChangeInfoComponent__Setup(
                                (HeroineNpChangeInfoComponent_o *)gameObject,
                                targetId,
                                targetLv,
                                v43);
LABEL_40:
                              v52 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v44, v45, v46);
                              System_Action___ctor(
                                v52,
                                (Il2CppObject *)this,
                                Method_SkillUpResultWindowComponent_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0LL);
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
                              v41);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.npChangeInfoNow;
                            if ( gameObject )
                            {
                              HeroineNpChangeInfoComponent__SetupForNpChange(
                                (HeroineNpChangeInfoComponent_o *)gameObject,
                                targetId,
                                targetLv,
                                v47);
                              goto LABEL_40;
                            }
                          }
                        }
                        else
                        {
                          if ( !v39 )
                          {
                            SkillUpResultWindowComponent__SetupNpUpResultInfoNormal(
                              this,
                              usrSvtData,
                              targetId,
                              targetLv,
                              targetIdOld,
                              targetLvOld,
                              kind,
                              v42);
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
                                                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( gameObject )
                              {
                                UIWidget__set_height((UIWidget_o *)gameObject, 300, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformedServantInfo(
                                                                           usrSvtData,
                                                                           &transformInfo,
                                                                           0,
                                                                           0LL);
                                tdAddEntity_k__BackingField = v53->fields._tdAddEntity_k__BackingField;
                                if ( !tdAddEntity_k__BackingField )
                                  goto LABEL_35;
                                titles = tdAddEntity_k__BackingField->fields.titles;
                                if ( !titles )
                                  goto LABEL_35;
                                if ( !titles->max_length )
                                  sub_1BCAA44(gameObject, v27);
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
                                    v53,
                                    0,
                                    titleText,
                                    kind == 8,
                                    this->fields.svtTransformCount,
                                    v48);
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
    sub_1BCAA3C(gameObject, v27);
  }
}


void __fastcall SkillUpResultWindowComponent__OpenPowerUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x21
  __int64 v35; // x20
  __int64 v36; // x22
  Il2CppObject *Entity; // x0
  __int64 v38; // x1
  UILabel_o *powerupLabel; // x20
  Il2CppObject *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Action_o *v44; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4B19BE1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, usrSvtData, callback);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_SkillUpResultWindowComponent_EndOpen__, v17, v18);
    sub_1BCA7E0(&Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__, v19, v20);
    sub_1BCA7E0(&StringLiteral_11224/*"RESULT_BOUNDS_POWERUP"*/, v21, v22);
    byte_4B19BE1 = 1;
  }
  if ( !this->fields.state )
  {
    v23 = Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__ + 83) & 2) != 0 )
      v23 = (_QWORD *)sub_1BCA7F8(Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__);
    v24 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v23, v23[4]);
    OverwriteAssetSoundName__PlaySystemSe(v24, 6, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SkillUpResultWindowComponent__SetChildrenActive(this, 0, v27);
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.openCallBack,
      (int64_t)callback,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !usrSvtData )
      goto LABEL_20;
    v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    v36 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v35 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    *(_QWORD *)&v45.fields.currentCryptoKey = v36;
    *(_QWORD *)&v45.fields.fakeValue = v35;
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                               v45,
                                               0LL);
    if ( !v34 )
      goto LABEL_20;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v34,
               (int32_t)gameObject,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    powerupLabel = this->fields.powerupLabel;
    v40 = Entity;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11224/*"RESULT_BOUNDS_POWERUP"*/, 0LL);
    if ( !v40
      || (gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)v40[4].monitor,
                                                     0LL),
          !powerupLabel) )
    {
LABEL_20:
      sub_1BCAA3C(gameObject, v26);
    }
    UILabel__set_text(powerupLabel, (System_String_o *)gameObject, 0LL);
    v44 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v41, v42, v43);
    System_Action___ctor(v44, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v44, 0, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  System_String_o *BattleName; // x0
  __int64 v23; // x1
  UILabel_o *costumeChangeLabel; // x21
  Il2CppObject *v25; // x22
  System_String_o *v26; // x0

  if ( (byte_4B19BDA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId, callback);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__, v13, v14);
    sub_1BCA7E0(&StringLiteral_3925/*"COSTUME_CHANGE_DESCRIPTION"*/, v15, v16);
    byte_4B19BDA = 1;
  }
  v17 = Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1BCA7F8(Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__);
  v18 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v17, v17[4]);
  OverwriteAssetSoundName__PlaySystemSe(v18, 6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v21);
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
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                             svtId,
                                             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_16;
  BattleName = ServantEntity__getBattleName((ServantEntity_o *)gameObject, 0, -1, 0LL);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  v25 = (Il2CppObject *)BattleName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3925/*"COSTUME_CHANGE_DESCRIPTION"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v26, v25, 0LL);
  if ( !costumeChangeLabel )
LABEL_16:
    sub_1BCAA3C(gameObject, v20);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  __int64 v24; // x1
  UILabel_o *skillChangeInfoTitle; // x26
  System_String_o *v26; // x0
  const MethodInfo *v27; // x5

  if ( (byte_4B19BDB & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId, *(_QWORD *)&oldSkillLv);
    sub_1BCA7E0(&Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__, v15, v16);
    sub_1BCA7E0(&StringLiteral_3926/*"COSTUME_CHANGE_SKILL_TITLE"*/, v17, v18);
    byte_4B19BDB = 1;
  }
  v19 = Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1BCA7F8(Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__);
  v20 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v23);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3926/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v26, (Il2CppObject *)costumeName, 0LL);
  if ( !skillChangeInfoTitle )
LABEL_13:
    sub_1BCAA3C(gameObject, v22);
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)gameObject, 0LL);
  SkillUpResultWindowComponent__SetSkillInfo(this, oldSkillId, oldSkillLv, nowSkillId, nowSkillLv, v27);
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
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  _QWORD *v49; // x0
  System_Reflection_MethodBase_o *v50; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v52; // x1
  const MethodInfo *v53; // x2
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  char v60; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v61; // x21
  bool v62; // w22
  SkillEntity_o *v63; // x28
  il2cpp_array_size_t max_length; // w8
  int32_t v65; // w25
  int32_t v66; // w9
  ServantSkillEntity_o *v67; // x26
  int32_t v68; // w29
  UILabel_o *skillBefChargeTimeLb; // x21
  SkillEntity_o *v70; // x0
  int32_t v71; // w1
  UILabel_o *skillAftChargeTimeLb; // x22
  UnityEngine_GameObject_o *AfterChargeTimeInfo; // x22
  UILabel_o *skillAftTitleLb; // x22
  System_String_o *v75; // x27
  System_String_o *v76; // x20
  Il2CppObject *v77; // x0
  System_String_o *v78; // x0
  UnityEngine_Object_o *servantSkillStrengthStatusAfter; // x22
  System_String_o *PATH; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int32_t v89; // w20
  ServantSkillStrengthStatus_o *v90; // x22
  UILabel_o *v91; // x27
  int32_t m_CachedPtr; // w22
  int32_t v93; // w1
  UnityEngine_GameObject_o *beforeChargeTimeInfo; // x21
  bool v95; // w28
  UILabel_o *skillBefTitleLb; // x21
  System_String_o *v97; // x22
  System_String_o *v98; // x20
  int32_t v99; // w8
  Il2CppObject *v100; // x0
  System_String_o *v101; // x0
  int32_t StrengthStatus; // w0
  __int64 v103; // x1
  int32_t v104; // w21
  int32_t skillNum; // w20
  UnityEngine_Object_o *servantSkillStrengthStatusBefore; // x23
  struct ServantSkillStrengthStatus_o **p_servantSkillStrengthStatusBefore; // x22
  System_String_o *v108; // x23
  UnityEngine_Transform_o *v109; // x0
  Il2CppObject *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  System_Action_o *v120; // x20
  int32_t v121; // [xsp+4h] [xbp-9Ch]
  ServantSkillMaster_o *v122; // [xsp+10h] [xbp-90h]
  int32_t v123; // [xsp+1Ch] [xbp-84h]
  int32_t v124; // [xsp+24h] [xbp-7Ch]
  int32_t v125; // [xsp+28h] [xbp-78h] BYREF
  int32_t EffectChargeTurn; // [xsp+2Ch] [xbp-74h] BYREF
  System_String_o *detail; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *name; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector2Int_o v129; // 0:x6.8
  UnityEngine_Vector2Int_o v130; // 0:x6.8

  if ( (byte_4B19BD9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&targetLv);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v25, v26);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v27, v28);
    sub_1BCA7E0(&int_TypeInfo, v29, v30);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v33, v34);
    sub_1BCA7E0(&ServantSkillStrengthStatus_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    sub_1BCA7E0(&Method_SkillUpResultWindowComponent_EndOpen__, v39, v40);
    sub_1BCA7E0(&Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__, v41, v42);
    sub_1BCA7E0(&StringLiteral_2129/*"APPEND_SKILL_RESULT_AFTER_LV"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_12300/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_2130/*"APPEND_SKILL_RESULT_LV"*/, v47, v48);
    byte_4B19BD9 = 1;
  }
  detail = 0LL;
  name = 0LL;
  EffectChargeTurn = 0;
  if ( !this->fields.state )
  {
    v49 = Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__ + 83) & 2) != 0 )
      v49 = (_QWORD *)sub_1BCA7F8(Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__);
    v50 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v49, v49[4]);
    OverwriteAssetSoundName__PlaySystemSe(v50, 6, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v53);
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
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.openCallBack,
              (int64_t)callback,
              v54,
              v55,
              v56,
              v57,
              v58,
              v59);
            gameObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(dispBattleName, 0LL);
            if ( this->fields.titleLabel )
            {
              v60 = (char)gameObject;
              gameObject = UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.titleLabel,
                             0LL);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, (v60 ^ 1) & 1, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
                if ( gameObject )
                {
                  UILabel__set_text((UILabel_o *)gameObject, dispBattleName, 0LL);
                  if ( (v60 & 1) == 0 && !this->fields.changedLayout )
                  {
                    GameObjectExtensions__AddLocalPositionY(this->fields.skillInfo, this->fields.skillInfoOffset, 0LL);
                    this->fields.changedLayout = 1;
                  }
                  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( gameObject )
                  {
                    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)gameObject,
                                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
                    if ( gameObject )
                    {
                      v124 = targetLvOld;
                      v61 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
                      gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                                 targetId,
                                                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                      if ( skillList )
                      {
                        v62 = isOpen;
                        v63 = (SkillEntity_o *)gameObject;
                        max_length = skillList->max_length;
                        v65 = 0;
                        while ( v65 < (int)max_length )
                        {
                          if ( v65 >= max_length )
                            sub_1BCAA44(gameObject, v52);
                          v66 = skillList->m_Items[++v65];
                          if ( v66 == targetId )
                            goto LABEL_25;
                        }
                        v65 = 0;
LABEL_25:
                        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( gameObject )
                        {
                          gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                                     (DataManager_o *)gameObject,
                                                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
                          if ( gameObject )
                          {
                            v122 = (ServantSkillMaster_o *)gameObject;
                            v123 = baseSvtId;
                            gameObject = (UnityEngine_GameObject_o *)ServantSkillMaster__getEntityFromSkillId(
                                                                       (ServantSkillMaster_o *)gameObject,
                                                                       baseSvtId,
                                                                       v65,
                                                                       targetId,
                                                                       0LL);
                            if ( v63 )
                            {
                              v67 = (ServantSkillEntity_o *)gameObject;
                              SkillEntity__getSkillMessageInfo(v63, &name, &detail, targetLv, 0LL);
                              gameObject = this->fields.skillAfter;
                              v68 = targetIdOld >= 1 ? v124 : targetLv - 1;
                              if ( gameObject )
                              {
                                if ( isOpen )
                                {
                                  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
                                  if ( !gameObject )
                                    goto LABEL_96;
                                  SkillIconComponent__Set_38947272(
                                    (SkillIconComponent_o *)gameObject,
                                    targetId,
                                    targetLv,
                                    0LL);
                                  skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
                                  v70 = v63;
                                  v71 = targetLv;
                                }
                                else
                                {
                                  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconAft;
                                  if ( !gameObject )
                                    goto LABEL_96;
                                  SkillIconComponent__Set_38947272(
                                    (SkillIconComponent_o *)gameObject,
                                    targetId,
                                    targetLv,
                                    0LL);
                                  skillAftChargeTimeLb = this->fields.skillAftChargeTimeLb;
                                  EffectChargeTurn = SkillEntity__getEffectChargeTurn(v63, targetLv, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                             (int32_t)&EffectChargeTurn,
                                                                             0LL);
                                  if ( !skillAftChargeTimeLb )
                                    goto LABEL_96;
                                  UILabel__set_text(skillAftChargeTimeLb, (System_String_o *)gameObject, 0LL);
                                  AfterChargeTimeInfo = this->fields.AfterChargeTimeInfo;
                                  gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(
                                                                             v63,
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
                                    v121 = targetIdOld;
                                    skillAftTitleLb = this->fields.skillAftTitleLb;
                                    v75 = name;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
                                    v76 = LocalizationManager__Get((System_String_o *)StringLiteral_2129/*"APPEND_SKILL_RESULT_AFTER_LV"*/, 0LL);
                                    v125 = targetLv;
                                    v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125);
                                    v78 = System_String__Format(v76, v77, 0LL);
                                    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_62401220(
                                                                               v75,
                                                                               v78,
                                                                               0LL);
                                    if ( !skillAftTitleLb )
                                      goto LABEL_96;
                                    UILabel__set_text(skillAftTitleLb, (System_String_o *)gameObject, 0LL);
                                    targetIdOld = v121;
                                  }
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
                                  if ( !gameObject )
                                    goto LABEL_96;
                                  UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
                                  if ( v67 )
                                  {
                                    servantSkillStrengthStatusAfter = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusAfter;
                                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
                                    if ( UnityEngine_Object__op_Equality(servantSkillStrengthStatusAfter, 0LL, 0LL) )
                                    {
                                      if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v52);
                                      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
                                      if ( !gameObject )
                                        goto LABEL_96;
                                      PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
                                      transform = UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)gameObject,
                                                    0LL);
                                      gameObject = BaseMonoBehaviour__createObject_38952608(
                                                     (BaseMonoBehaviour_o *)this,
                                                     PATH,
                                                     transform,
                                                     0LL,
                                                     0LL);
                                      if ( !gameObject )
                                        goto LABEL_96;
                                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                                           gameObject,
                                                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                                      this->fields.servantSkillStrengthStatusAfter = (struct ServantSkillStrengthStatus_o *)Component_object;
                                      sub_1BCA784(
                                        (PartyOrganizationUtility_o *)&this->fields.servantSkillStrengthStatusAfter,
                                        (int64_t)Component_object,
                                        v83,
                                        v84,
                                        v85,
                                        v86,
                                        v87,
                                        v88);
                                    }
                                    v89 = targetIdOld;
                                    v90 = this->fields.servantSkillStrengthStatusAfter;
                                    v91 = this->fields.skillAftTitleLb;
                                    gameObject = (UnityEngine_GameObject_o *)ServantSkillEntity__GetStrengthStatus(
                                                                               v67,
                                                                               0LL);
                                    if ( !v90 )
                                      goto LABEL_96;
                                    v129 = (UnityEngine_Vector2Int_o)0x1200000014LL;
                                    ServantSkillStrengthStatus__Set(
                                      v90,
                                      v91,
                                      (int32_t)gameObject,
                                      v67->fields.skillNum,
                                      20,
                                      -9,
                                      v129,
                                      0LL);
                                    targetIdOld = v89;
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
                                    SkillEntity__getSkillMessageInfo(v63, &name, &detail, v68, 0LL);
                                    gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v93 = targetId;
                                  }
                                  else
                                  {
                                    gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                                               v61,
                                                                               targetIdOld,
                                                                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v63 = (SkillEntity_o *)gameObject;
                                    SkillEntity__getSkillMessageInfo(
                                      (SkillEntity_o *)gameObject,
                                      &name,
                                      &detail,
                                      v68,
                                      0LL);
                                    if ( !isRelease )
                                    {
                                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
                                      detail = LocalizationManager__Get((System_String_o *)StringLiteral_12300/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, 0LL);
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
                                    v93 = targetIdOld;
                                  }
                                  SkillIconComponent__Set_38947272((SkillIconComponent_o *)gameObject, v93, v68, 0LL);
                                  v62 = isOpen;
                                  skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
                                  v70 = v63;
                                  v71 = v68;
                                }
                                EffectChargeTurn = SkillEntity__getEffectChargeTurn(v70, v71, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                           (int32_t)&EffectChargeTurn,
                                                                           0LL);
                                if ( !skillBefChargeTimeLb )
                                  goto LABEL_96;
                                UILabel__set_text(skillBefChargeTimeLb, (System_String_o *)gameObject, 0LL);
                                beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
                                gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v63, v68, 0LL);
                                if ( !beforeChargeTimeInfo )
                                  goto LABEL_96;
                                UnityEngine_GameObject__SetActive(beforeChargeTimeInfo, (int)gameObject > 0, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
                                if ( !gameObject )
                                  goto LABEL_96;
                                UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
                                if ( isDispLv )
                                {
                                  v95 = v62;
                                  skillBefTitleLb = this->fields.skillBefTitleLb;
                                  v97 = name;
                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
                                  v98 = LocalizationManager__Get((System_String_o *)StringLiteral_2130/*"APPEND_SKILL_RESULT_LV"*/, 0LL);
                                  v99 = v124;
                                  if ( v95 )
                                    v99 = targetLv;
                                  v125 = v99;
                                  v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125);
                                  v101 = System_String__Format(v98, v100, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)System_String__Concat_62401220(
                                                                             v97,
                                                                             v101,
                                                                             0LL);
                                  if ( !skillBefTitleLb )
                                    goto LABEL_96;
                                  UILabel__set_text(skillBefTitleLb, (System_String_o *)gameObject, 0LL);
                                }
                                gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
                                if ( !gameObject )
                                  goto LABEL_96;
                                UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
                                if ( v67 )
                                {
                                  StrengthStatus = ServantSkillEntity__GetStrengthStatus(v67, 0LL);
                                  if ( targetIdOld >= 1 )
                                  {
                                    gameObject = (UnityEngine_GameObject_o *)ServantSkillMaster__getEntityFromSkillId(
                                                                               v122,
                                                                               v123,
                                                                               v65,
                                                                               targetIdOld,
                                                                               0LL);
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v67 = (ServantSkillEntity_o *)gameObject;
                                    StrengthStatus = ServantSkillEntity__GetStrengthStatus(
                                                       (ServantSkillEntity_o *)gameObject,
                                                       0LL);
                                  }
                                  v104 = StrengthStatus;
                                  skillNum = v67->fields.skillNum;
                                  servantSkillStrengthStatusBefore = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusBefore;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v103);
                                  p_servantSkillStrengthStatusBefore = &this->fields.servantSkillStrengthStatusBefore;
                                  if ( UnityEngine_Object__op_Equality(servantSkillStrengthStatusBefore, 0LL, 0LL) )
                                  {
                                    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v52);
                                    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v108 = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
                                    v109 = UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
                                    gameObject = BaseMonoBehaviour__createObject_38952608(
                                                   (BaseMonoBehaviour_o *)this,
                                                   v108,
                                                   v109,
                                                   0LL,
                                                   0LL);
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v110 = UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                                    *p_servantSkillStrengthStatusBefore = (struct ServantSkillStrengthStatus_o *)v110;
                                    sub_1BCA784(
                                      (PartyOrganizationUtility_o *)&this->fields.servantSkillStrengthStatusBefore,
                                      (int64_t)v110,
                                      v111,
                                      v112,
                                      v113,
                                      v114,
                                      v115,
                                      v116);
                                  }
                                  gameObject = (UnityEngine_GameObject_o *)*p_servantSkillStrengthStatusBefore;
                                  if ( !*p_servantSkillStrengthStatusBefore )
                                    goto LABEL_96;
                                  v130 = (UnityEngine_Vector2Int_o)0x1200000014LL;
                                  ServantSkillStrengthStatus__Set(
                                    (ServantSkillStrengthStatus_o *)gameObject,
                                    this->fields.skillBefTitleLb,
                                    v104,
                                    skillNum,
                                    20,
                                    -9,
                                    v130,
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
                                  v120 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v117, v118, v119);
                                  System_Action___ctor(
                                    v120,
                                    (Il2CppObject *)this,
                                    Method_SkillUpResultWindowComponent_EndOpen__,
                                    0LL);
                                  BaseDialog__Open((BaseDialog_o *)this, v120, 0, 0LL);
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
    sub_1BCAA3C(gameObject, v52);
  }
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
    sub_1BCAA3C(skillInfo, enable);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *skillChangeInfoSubTitleOld; // x24
  System_String_o *SkillEntity; // x0
  __int64 v19; // x1
  SkillUpResultWindowComponent_o *v20; // x0
  const MethodInfo *v21; // x2
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v23; // x0
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  SkillUpResultWindowComponent_o *v25; // x0
  const MethodInfo *v26; // x2
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v28; // x0
  System_String_o *text; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *v30; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B19BE6 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId, *(_QWORD *)&oldSkillLv);
    sub_1BCA7E0(&StringLiteral_7044/*"GET_SKILL_NAME"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_2050/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3029/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, v15, v16);
    byte_4B19BE6 = 1;
  }
  detail = 0LL;
  name = 0LL;
  text = 0LL;
  v30 = 0LL;
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId);
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_3029/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleOld, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v20, oldSkillId, v21);
  if ( !SkillEntity )
    goto LABEL_14;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &name, &detail, oldSkillLv, 0LL);
  skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_7044/*"GET_SKILL_NAME"*/, 0LL);
  SkillEntity = System_String__Format(v23, (Il2CppObject *)name, 0LL);
  if ( !skillChangeInfoNameOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoNameOld, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailOld;
  if ( !SkillEntity )
    goto LABEL_14;
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, detail, SkillEntity[17].fields._stringLength, 0, 0, 0LL);
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_2050/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleNow, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v25, nowSkillId, v26);
  if ( !SkillEntity
    || (SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &v30, &text, nowSkillLv, 0LL),
        skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow,
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_7044/*"GET_SKILL_NAME"*/, 0LL),
        SkillEntity = System_String__Format(v28, (Il2CppObject *)v30, 0LL),
        !skillChangeInfoNameNow)
    || (UILabel__set_text(skillChangeInfoNameNow, SkillEntity, 0LL),
        (SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailNow) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(SkillEntity, v19);
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, text, SkillEntity[17].fields._stringLength, 0, 0, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  TreasureDvcMaster_o *Master_object; // x0
  __int64 v30; // x1
  TreasureDvcMaster_o *v31; // x26
  __int64 v32; // x27
  __int64 v33; // x28
  TreasureDvcEntity_o *v34; // x25
  TreasureDvcLvEntity_o *v35; // x22
  bool v36; // w26
  UILabel_o *currentNpLvLb; // x24
  UILabel_o *resNpLvLb; // x24
  UIWidget_o *v39; // x24
  SkillUpResultWindowComponent_c *v40; // x8
  System_String_o **v41; // x8
  UIWidget_o *v42; // x24
  SkillUpResultWindowComponent_c *v43; // x8
  UILabel_o *npBefDetailLb; // x20
  struct UILabel_o *v45; // x8
  System_String_o *v46; // x1
  System_String_o *DetalShort_40762616; // x21
  TreasureDvcLvEntity_o *v48; // x0
  int32_t mFontSize; // w2
  System_String_o *v50; // x1
  UILabel_o *resNpLvFirstLb; // x24
  struct UILabel_o *v52; // x20
  struct UILabel_o *v53; // x8
  UILabel_o *npAftDetailLb; // x20
  struct UILabel_o *v55; // x8
  int32_t v56; // [xsp+Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  lv = targetLv;
  if ( (byte_4B19BDF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, usrSvtData, *(_QWORD *)&targetId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_TreasureDvcMaster___, v17, v18);
    sub_1BCA7E0(&DataManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24);
    sub_1BCA7E0(&SkillUpResultWindowComponent_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v27, v28);
    byte_4B19BDF = 1;
  }
  entity = 0LL;
  v56 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, usrSvtData);
  Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !usrSvtData )
    goto LABEL_69;
  v31 = Master_object;
  v33 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
  *(_QWORD *)&v59.fields.currentCryptoKey = v33;
  *(_QWORD *)&v59.fields.fakeValue = v32;
  Master_object = (TreasureDvcMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v59, 0LL);
  if ( !v31 )
    goto LABEL_69;
  v34 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v31, (int32_t)Master_object, targetId, 0LL);
  Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !v34 || !Master_object )
    goto LABEL_69;
  v35 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v34->fields.id, targetLv, 0LL);
  Master_object = (TreasureDvcMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)v31,
                                           &entity,
                                           targetIdOld,
                                           (const MethodInfo_31B2E94 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    targetIdOld = 0;
  if ( !this->fields.npRubyNameLb )
    goto LABEL_69;
  UILabel__set_text(this->fields.npRubyNameLb, v34->fields.ruby, 0LL);
  Master_object = (TreasureDvcMaster_o *)this->fields.npNameLb;
  if ( !Master_object )
    goto LABEL_69;
  v36 = kind != 5;
  UILabel__set_text((UILabel_o *)Master_object, v34->fields.name, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(usrSvtData, this->fields.npNameLb, this->fields.npRubyNameLb, 0LL);
  v56 = targetLvOld;
  if ( targetIdOld > 0 || kind == 5 )
  {
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v36, 0LL);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v36, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankupBeforeLb;
    if ( !Master_object )
      goto LABEL_69;
    v41 = (System_String_o **)(entity ? &entity[2].monitor : &StringLiteral_1/*""*/);
    UILabel__set_text((UILabel_o *)Master_object, *v41, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankupAfterLb;
    if ( !Master_object )
      goto LABEL_69;
    UILabel__set_text((UILabel_o *)Master_object, v34->fields.rank, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankupAfterLb;
    if ( !Master_object )
      goto LABEL_69;
    Master_object = (TreasureDvcMaster_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)Master_object,
                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v42 = (UIWidget_o *)Master_object;
    v43 = SkillUpResultWindowComponent_TypeInfo;
    if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo, v30);
      v43 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v42 )
      goto LABEL_69;
    UIWidget__set_color(v42, v43->static_fields->COLOR_VAL, 0LL);
    v56 = targetLvOld;
    if ( !v35 )
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
    if ( !v35 )
    {
LABEL_61:
      Master_object = (TreasureDvcMaster_o *)this->fields.npBefDetailLb;
      if ( Master_object )
      {
        UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        Master_object = (TreasureDvcMaster_o *)this->fields.npAftDetailLb;
        if ( Master_object )
        {
          v46 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_64;
        }
      }
      goto LABEL_69;
    }
  }
  else
  {
    currentNpLvLb = this->fields.currentNpLvLb;
    Master_object = (TreasureDvcMaster_o *)System_Int32__ToString((int32_t)&v56, 0LL);
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
                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v39 = (UIWidget_o *)Master_object;
    v40 = SkillUpResultWindowComponent_TypeInfo;
    if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo, v30);
      v40 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v39 )
      goto LABEL_69;
    UIWidget__set_color(v39, v40->static_fields->COLOR_VAL, 0LL);
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
    if ( !v35 )
      goto LABEL_61;
  }
  if ( kind == 5 )
  {
    npBefDetailLb = this->fields.npBefDetailLb;
    Master_object = (TreasureDvcMaster_o *)TreasureDvcLvEntity__getDetalShort_40762616(v35, lv, 0LL);
    v45 = this->fields.npBefDetailLb;
    if ( v45 )
    {
      WrapControlText__textAdjust(npBefDetailLb, (System_String_o *)Master_object, v45->fields.mFontSize, 0, 0, 0LL);
      Master_object = (TreasureDvcMaster_o *)this->fields.npAftDetailLb;
      if ( Master_object )
      {
        v46 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_64:
        UILabel__set_text((UILabel_o *)Master_object, v46, 0LL);
        return;
      }
    }
LABEL_69:
    sub_1BCAA3C(Master_object, v30);
  }
  if ( targetIdOld < 1 )
  {
    v52 = this->fields.npBefDetailLb;
    Master_object = (TreasureDvcMaster_o *)TreasureDvcLvEntity__getDetalShort_40762616(v35, v56, 0LL);
    v53 = this->fields.npBefDetailLb;
    if ( !v53 )
      goto LABEL_69;
    mFontSize = v53->fields.mFontSize;
    v50 = (System_String_o *)Master_object;
    Master_object = (TreasureDvcMaster_o *)v52;
  }
  else
  {
    DetalShort_40762616 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
    Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !Master_object )
      goto LABEL_69;
    v48 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, targetIdOld, targetLvOld, 0LL);
    if ( v48 )
      DetalShort_40762616 = TreasureDvcLvEntity__getDetalShort_40762616(v48, v56, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npBefDetailLb;
    if ( !Master_object )
      goto LABEL_69;
    mFontSize = Master_object[5].fields.revision;
    v50 = DetalShort_40762616;
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)Master_object, v50, mFontSize, 0, 0, 0LL);
  npAftDetailLb = this->fields.npAftDetailLb;
  Master_object = (TreasureDvcMaster_o *)TreasureDvcLvEntity__getDetalShort_40762616(v35, lv, 0LL);
  v55 = this->fields.npAftDetailLb;
  if ( !v55 )
    goto LABEL_69;
  WrapControlText__textBBCodeAdjust(npAftDetailLb, (System_String_o *)Master_object, v55->fields.mFontSize, 0, 0, 0LL);
}