void __fastcall SkillUpResultWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B05F0A & 1) == 0 )
  {
    sub_1BC3008(&SkillUpResultWindowComponent_TypeInfo, v1);
    byte_4B05F0A = 1;
  }
  *SkillUpResultWindowComponent_TypeInfo->static_fields = (struct SkillUpResultWindowComponent_StaticFields)xmmword_BDF2A0;
}


void __fastcall SkillUpResultWindowComponent___ctor(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B05F09 & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4B05F09 = 1;
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

  if ( (byte_4B05F02 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_SkillUpResultWindowComponent_EndClose__, v3);
    byte_4B05F02 = 1;
  }
  v4 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  SkillUpResultWindowComponent__Close_47457556(this, v5, v6);
}


void __fastcall SkillUpResultWindowComponent__CloseToNext(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20

  if ( (byte_4B05F04 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_SkillUpResultWindowComponent___c__DisplayClass95_0__CloseToNext_b__0__, v5);
    sub_1BC3008(&SkillUpResultWindowComponent___c__DisplayClass95_0_TypeInfo, v6);
    byte_4B05F04 = 1;
  }
  v7 = sub_1BC3254(SkillUpResultWindowComponent___c__DisplayClass95_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BC3264(v8, v9);
  *(_QWORD *)(v7 + 16) = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)callback, v10, v11);
  v12 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v7,
    Method_SkillUpResultWindowComponent___c__DisplayClass95_0__CloseToNext_b__0__,
    0LL);
  BaseDialog__SafeClose((BaseDialog_o *)this, v12, 0LL);
}


void __fastcall SkillUpResultWindowComponent__Close_47457556(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4B05F03 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_SkillUpResultWindowComponent_EndClose__, v4);
    byte_4B05F03 = 1;
  }
  v5 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
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
    sub_1BC3264(gameObject, v4);
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
    sub_1BC2FAC(p_openCallBack, 0, v2, v3);
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

  if ( (byte_4B05F06 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantSkillMaster___, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B05F06 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantSkillMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v10);
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

  if ( (byte_4B05F05 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&skillId);
    sub_1BC3008(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B05F05 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v7);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    skillId,
    (const MethodInfo_32AF0BC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  return (SkillEntity_o *)entity;
}


void __fastcall SkillUpResultWindowComponent__Init(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BC3264(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SkillUpResultWindowComponent__OpenCostumeChangeMessage(
        SkillUpResultWindowComponent_o *this,
        System_String_o *costumeName,
        System_String_o *formatKey,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  UILabel_o *costumeChangeLabel; // x23
  System_String_o *v17; // x0

  if ( (byte_4B05F08 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, costumeName);
    sub_1BC3008(&Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__, v9);
    byte_4B05F08 = 1;
  }
  v10 = Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BC3020(Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 6, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetupWindowBg(this, v14);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v15);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.costumeChangeInfo, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.costumeChangeInfo;
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get(formatKey, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v17, (Il2CppObject *)costumeName, 0LL);
  if ( !costumeChangeLabel )
LABEL_13:
    sub_1BC3264(gameObject, v13);
  UILabel__set_text(costumeChangeLabel, (System_String_o *)gameObject, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
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
  if ( (byte_4B05EFE & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, usrSvtData);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIWidget___, v9);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v14);
    sub_1BC3008(&LocalizationManager_TypeInfo, v15);
    sub_1BC3008(&NetworkManager_TypeInfo, v16);
    sub_1BC3008(&ServantCommentManager_TypeInfo, v17);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BC3008(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v19);
    sub_1BC3008(&Method_SkillUpResultWindowComponent_EndOpen__, v20);
    sub_1BC3008(&Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__, v21);
    sub_1BC3008(&SkillUpResultWindowComponent_TypeInfo, v22);
    sub_1BC3008(&System_Text_StringBuilder_TypeInfo, v23);
    sub_1BC3008(&StringLiteral_11004/*"RESULT_BOUNDS_OPENQUEST"*/, v24);
    sub_1BC3008(&StringLiteral_11006/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, v25);
    sub_1BC3008(&StringLiteral_10999/*"RESULT_BOUNDS_GETVOICE"*/, v26);
    sub_1BC3008(&StringLiteral_1/*""*/, v27);
    byte_4B05EFE = 1;
  }
  memset(&v57, 0, sizeof(v57));
  FriendShipRank = 0;
  if ( !this->fields.state )
  {
    v28 = Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1BC3020(Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__);
    v29 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v28, v28[4]);
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
            sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v33, v34);
            gameObject = (__int64)this->fields.friendshipLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v35 = (System_Text_StringBuilder_o *)sub_1BC3254(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v35, 0LL);
              if ( usrSvtData )
              {
                SvtId = UserServantEntity__getSvtId(usrSvtData, 0LL);
                gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  MasterData_object = DataManager__GetMasterData_object_(
                                        (DataManager_o *)gameObject,
                                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4AFC1F1 )
                  {
                    sub_1BC3008(&NetworkManager_TypeInfo, v31);
                    byte_4AFC1F1 = 1;
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
                    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
                          (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
                        v57 = v55;
                        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v57,
                                  (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
                        {
                          current = v57.fields._current;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11004/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
                          if ( !current )
                            sub_1BC3264(v41, v42);
                          v43 = v41;
                          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
                          v45 = System_String__Format(v43, QuestName, 0LL);
                          if ( !v35 )
                            sub_1BC3264(v45, v45);
                          System_Text_StringBuilder__AppendLine_62433816(v35, v45, 0LL);
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v57,
                          (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
                      }
                      v46 = oldFriendShipRanka;
                      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                      gameObject = ServantCommentManager__IsOpenByServantFriendShip(SvtId, v46, 0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11006/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, 0LL);
                        if ( !v35 )
                          goto LABEL_60;
                        gameObject = (__int64)System_Text_StringBuilder__AppendLine_62433816(
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
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10999/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
                        if ( !v35 )
                          goto LABEL_60;
                        System_Text_StringBuilder__AppendLine_62433816(v35, (System_String_o *)gameObject, 0LL);
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
                                                          (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                        v54 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
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
    sub_1BC3264(gameObject, v31);
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

  if ( (byte_4B05EFB & 1) == 0 )
  {
    sub_1BC3008(&Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__, addManager);
    byte_4B05EFB = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BC3020(Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v13, v13[4]);
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
    sub_1BC3264(gameObject, v16);
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

  if ( (byte_4B05EF9 & 1) == 0 )
  {
    sub_1BC3008(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__, *(_QWORD *)&oldTargetId);
    byte_4B05EF9 = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BC3020(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v13, v13[4]);
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
    sub_1BC3264(gameObject, v16);
  }
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, v19);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent__OpenNpUpResultInfo_47425384(
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
  __int64 v18; // x1
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  UnityEngine_Object_o *heroineNpChangeInfoExtra; // x23
  const MethodInfo *v29; // x3

  if ( (byte_4B05EFA & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&oldTargetId);
    sub_1BC3008(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76915072, v18);
    byte_4B05EFA = 1;
  }
  v19 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76915072;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76915072 + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1BC3020(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76915072);
  v20 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 6, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetupWindowBg(this, v23);
  SkillUpResultWindowComponent__SetupSpecialNpChange(this, svtCostumeEnt, v24);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v25);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfo;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoNormalRoot;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = this->fields.npInfoHeroineNpChangeRoot;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoNpChangeRoot;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = this->fields.npInfoAddRoot;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld;
  if ( !gameObject )
    goto LABEL_23;
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, oldTargetId, oldTargetLv, v26);
  gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow;
  if ( !gameObject )
    goto LABEL_23;
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, v27);
  if ( exTargetId >= 1 && this->fields.isSpecialEffect )
  {
    heroineNpChangeInfoExtra = (UnityEngine_Object_o *)this->fields.heroineNpChangeInfoExtra;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(heroineNpChangeInfoExtra, 0LL, 0LL) )
    {
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.heroineNpChangeInfoExtra, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoExtra;
      if ( gameObject )
      {
        HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, exTargetId, exTargetLv, v29);
        goto LABEL_22;
      }
LABEL_23:
      sub_1BC3264(gameObject, v22);
    }
  }
LABEL_22:
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__OpenNpUpResultInfo_47452616(
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
  __int64 v38; // x2
  const MethodInfo *v39; // x6
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  struct System_String_array *titles; // x8
  System_String_o *titleText; // x3
  System_Action_o *v43; // x20
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v44; // [xsp+0h] [xbp-70h]
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B05EFC & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, usrSvtData);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v18);
    sub_1BC3008(&Method_SkillUpResultWindowComponent_EndOpen__, v19);
    sub_1BC3008(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76915080, v20);
    byte_4B05EFC = 1;
  }
  transformInfo = 0LL;
  if ( !this->fields.state )
  {
    v21 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76915080;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76915080 + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1BC3020(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76915080);
    v22 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v21, v21[4]);
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
            sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v26, v27);
            if ( usrSvtData )
            {
              gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformCount(usrSvtData, 1, 0LL);
              this->fields.svtTransformCount = (int)gameObject;
              if ( addManager )
              {
                v44 = addManager;
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
                              v43 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                              System_Action___ctor(
                                v43,
                                (Il2CppObject *)this,
                                Method_SkillUpResultWindowComponent_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0LL);
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
                                                                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( gameObject )
                              {
                                UIWidget__set_height((UIWidget_o *)gameObject, 300, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformedServantInfo(
                                                                           usrSvtData,
                                                                           &transformInfo,
                                                                           0,
                                                                           0LL);
                                tdAddEntity_k__BackingField = v44->fields._tdAddEntity_k__BackingField;
                                if ( !tdAddEntity_k__BackingField )
                                  goto LABEL_35;
                                titles = tdAddEntity_k__BackingField->fields.titles;
                                if ( !titles )
                                  goto LABEL_35;
                                if ( !titles->max_length )
                                  sub_1BC326C(gameObject, v24, v38);
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
                                    v44,
                                    0,
                                    titleText,
                                    kind == 8,
                                    this->fields.svtTransformCount,
                                    v39);
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
    sub_1BC3264(gameObject, v24);
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

  if ( (byte_4B05EFF & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, usrSvtData);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BC3008(&LocalizationManager_TypeInfo, v9);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BC3008(&Method_SkillUpResultWindowComponent_EndOpen__, v12);
    sub_1BC3008(&Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__, v13);
    sub_1BC3008(&StringLiteral_11005/*"RESULT_BOUNDS_POWERUP"*/, v14);
    byte_4B05EFF = 1;
  }
  if ( !this->fields.state )
  {
    v15 = Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1BC3020(Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__);
    v16 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v15, v15[4]);
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
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v20, v21);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !usrSvtData )
      goto LABEL_20;
    v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    v24 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v29.fields.currentCryptoKey = v24;
    *(_QWORD *)&v29.fields.fakeValue = v23;
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                               v29,
                                               0LL);
    if ( !v22 )
      goto LABEL_20;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v22,
               (int32_t)gameObject,
               (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    powerupLabel = this->fields.powerupLabel;
    v27 = Entity;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11005/*"RESULT_BOUNDS_POWERUP"*/, 0LL);
    if ( !v27
      || (gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)v27[4].monitor,
                                                     0LL),
          !powerupLabel) )
    {
LABEL_20:
      sub_1BC3264(gameObject, v18);
    }
    UILabel__set_text(powerupLabel, (System_String_o *)gameObject, 0LL);
    v28 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
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
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  System_String_o *BattleName; // x0
  UILabel_o *costumeChangeLabel; // x21
  Il2CppObject *v20; // x22
  System_String_o *v21; // x0

  if ( (byte_4B05EF6 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BC3008(&LocalizationManager_TypeInfo, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BC3008(&Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__, v10);
    sub_1BC3008(&StringLiteral_3798/*"COSTUME_CHANGE_DESCRIPTION"*/, v11);
    byte_4B05EF6 = 1;
  }
  v12 = Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BC3020(Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 6, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetupWindowBg(this, v16);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v17);
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
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                             svtId,
                                             (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_16;
  BattleName = ServantEntity__getBattleName((ServantEntity_o *)gameObject, 0, -1, 0LL);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  v20 = (Il2CppObject *)BattleName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COSTUME_CHANGE_DESCRIPTION"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v21, v20, 0LL);
  if ( !costumeChangeLabel )
LABEL_16:
    sub_1BC3264(gameObject, v15);
  UILabel__set_text(costumeChangeLabel, (System_String_o *)gameObject, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent__OpenSkillChangeMessage_47420912(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        System_String_o *formatKey,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  Il2CppObject *BattleName; // x22
  UILabel_o *costumeChangeLabel; // x23
  System_String_o *v22; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B05EF7 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&svtId);
    sub_1BC3008(&DataManager_TypeInfo, v9);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___76915104, v12);
    sub_1BC3008(&string_TypeInfo, v13);
    byte_4B05EF7 = 1;
  }
  v14 = Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___76915104;
  entity = 0LL;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___76915104 + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1BC3020(Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___76915104);
  v15 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 6, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetupWindowBg(this, v18);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v19);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.costumeChangeInfo, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.costumeChangeInfo;
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !gameObject )
    goto LABEL_20;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
         &entity,
         svtId,
         (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    gameObject = (UnityEngine_GameObject_o *)entity;
    if ( !entity )
      goto LABEL_20;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)entity, 0, -1, 0LL);
  }
  else
  {
    BattleName = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
  }
  costumeChangeLabel = this->fields.costumeChangeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get(formatKey, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v22, BattleName, 0LL);
  if ( !costumeChangeLabel )
LABEL_20:
    sub_1BC3264(gameObject, v17);
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
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  UILabel_o *skillChangeInfoTitle; // x26
  System_String_o *v24; // x0
  const MethodInfo *v25; // x5

  if ( (byte_4B05EF8 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId);
    sub_1BC3008(&Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__, v15);
    sub_1BC3008(&StringLiteral_3805/*"COSTUME_CHANGE_SKILL_TITLE"*/, v16);
    byte_4B05EF8 = 1;
  }
  v17 = Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1BC3020(Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__);
  v18 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v17, v17[4]);
  OverwriteAssetSoundName__PlaySystemSe(v18, 6, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetupWindowBg(this, v21);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v22);
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
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3805/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v24, (Il2CppObject *)costumeName, 0LL);
  if ( !skillChangeInfoTitle )
LABEL_13:
    sub_1BC3264(gameObject, v20);
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)gameObject, 0LL);
  SkillUpResultWindowComponent__SetSkillInfo(this, oldSkillId, oldSkillLv, nowSkillId, nowSkillLv, v25);
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
        UnityEngine_Color_o titleColor,
        UnityEngine_Color_o titleBgColor,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  float v20; // s12
  float v21; // s13
  float v22; // s14
  float v23; // s15
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x2
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  char v55; // w21
  UnityEngine_Object_o *titleBgSprite; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v57; // x21
  __int64 v58; // x2
  SkillEntity_o *v59; // x29
  int32_t v60; // w24
  il2cpp_array_size_t max_length; // w8
  int32_t v62; // w9
  bool v63; // w26
  ServantSkillEntity_o *v64; // x27
  int32_t v65; // w28
  int32_t skillNum; // w22
  int32_t IconCnt; // w22
  UnityEngine_GameObject_o *skillAfter; // x8
  UILabel_o *skillBefChargeTimeLb; // x21
  SkillEntity_o *v70; // x0
  int32_t v71; // w1
  UILabel_o *skillAftChargeTimeLb; // x26
  UnityEngine_GameObject_o *AfterChargeTimeInfo; // x26
  System_String_o *v74; // x26
  System_String_o *v75; // x20
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  Il2CppObject *v79; // x0
  System_String_o *v80; // x0
  UnityEngine_Object_o *skillAftForceReleaseLb; // x26
  bool v82; // w0
  System_String_o *v83; // x1
  UnityEngine_Object_o *servantSkillStrengthStatusAfter; // x22
  System_String_o *PATH; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  ServantSkillStrengthStatus_o *v90; // x22
  UILabel_o *skillAftTitleLb; // x26
  UILabel_o *v92; // x22
  int32_t m_CachedPtr; // w22
  int32_t v94; // w1
  UnityEngine_GameObject_o *beforeChargeTimeInfo; // x21
  UILabel_o *skillBefTitleLb; // x21
  System_String_o *v97; // x22
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  System_String_o *v101; // x20
  int32_t v102; // w8
  Il2CppObject *v103; // x0
  System_String_o *v104; // x0
  int32_t v105; // w21
  int32_t v106; // w21
  ServantSkillEntity_o *EntityFromSkillId; // x0
  int32_t v108; // w21
  UnityEngine_Object_o *skillBefForceReleaseLb; // x22
  System_String_o *v110; // x1
  int32_t StrengthStatus; // w0
  int32_t v112; // w21
  int32_t v113; // w22
  ServantSkillEntity_o *v114; // x0
  ServantSkillEntity_o *v115; // x20
  int32_t v116; // w0
  UnityEngine_Object_o *servantSkillStrengthStatusBefore; // x23
  struct ServantSkillStrengthStatus_o **p_servantSkillStrengthStatusBefore; // x20
  System_String_o *v119; // x23
  UnityEngine_Transform_o *v120; // x0
  Il2CppObject *v121; // x0
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  UILabel_o *v124; // x20
  System_Action_o *v125; // x20
  ServantSkillMaster_o *v126; // [xsp+28h] [xbp-E8h]
  int32_t svtId; // [xsp+34h] [xbp-DCh]
  System_String_o *str1; // [xsp+38h] [xbp-D8h]
  int32_t v129; // [xsp+4Ch] [xbp-C4h]
  int value; // [xsp+54h] [xbp-BCh]
  int32_t v131; // [xsp+58h] [xbp-B8h] BYREF
  int32_t EffectChargeTurn; // [xsp+5Ch] [xbp-B4h] BYREF
  System_String_o *detail; // [xsp+60h] [xbp-B0h] BYREF
  System_String_o *name; // [xsp+68h] [xbp-A8h] BYREF
  UnityEngine_Vector2Int_o v135; // 0:x6.8
  UnityEngine_Vector2Int_o v136; // 0:x6.8
  UnityEngine_Color_o v137; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v138; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = titleBgColor.fields.a;
  b = titleBgColor.fields.b;
  g = titleBgColor.fields.g;
  r = titleBgColor.fields.r;
  v20 = titleColor.fields.a;
  v21 = titleColor.fields.b;
  v22 = titleColor.fields.g;
  v23 = titleColor.fields.r;
  if ( (byte_4B05EF5 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&targetId);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantSkillMaster___, v32);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillMaster___, v33);
    sub_1BC3008(&DataManager_TypeInfo, v34);
    sub_1BC3008(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v35);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v36);
    sub_1BC3008(&int_TypeInfo, v37);
    sub_1BC3008(&LocalizationManager_TypeInfo, v38);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v39);
    sub_1BC3008(&ServantSkillStrengthStatus_TypeInfo, v40);
    sub_1BC3008(&Method_SkillUpResultWindowComponent_EndOpen__, v41);
    sub_1BC3008(&Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__, v42);
    sub_1BC3008(&StringLiteral_1999/*"APPEND_SKILL_RESULT_AFTER_LV"*/, v43);
    sub_1BC3008(&StringLiteral_12113/*"SKILL_COMBINE_FORCE_RELEASE_NAME"*/, v44);
    sub_1BC3008(&StringLiteral_1/*""*/, v45);
    sub_1BC3008(&StringLiteral_12110/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, v46);
    sub_1BC3008(&StringLiteral_2000/*"APPEND_SKILL_RESULT_LV"*/, v47);
    byte_4B05EF5 = 1;
  }
  detail = 0LL;
  name = 0LL;
  EffectChargeTurn = 0;
  if ( !this->fields.state )
  {
    v48 = Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__ + 83) & 2) != 0 )
      v48 = (_QWORD *)sub_1BC3020(Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__);
    v49 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v48, v48[4]);
    OverwriteAssetSoundName__PlaySystemSe(v49, 6, 0, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_155;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SkillUpResultWindowComponent__SetChildrenActive(this, 0, v52);
    gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.skillInfo, 0LL);
    if ( !gameObject )
      goto LABEL_155;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_155;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = this->fields.skillInfo;
    if ( !gameObject )
      goto LABEL_155;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.openCallBack = callback;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v53, v54);
    gameObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(dispBattleName, 0LL);
    if ( !this->fields.titleLabel )
      goto LABEL_155;
    v55 = (char)gameObject;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.titleLabel, 0LL);
    if ( !gameObject )
      goto LABEL_155;
    UnityEngine_GameObject__SetActive(gameObject, (v55 ^ 1) & 1, 0LL);
    if ( (v55 & 1) == 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
      if ( !gameObject )
        goto LABEL_155;
      UILabel__set_text((UILabel_o *)gameObject, dispBattleName, 0LL);
      if ( (float)((float)(v20 * v20) + (float)((float)(v21 * v21) + (float)((float)(v23 * v23) + (float)(v22 * v22)))) >= 1.0e-10 )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
        if ( !gameObject )
          goto LABEL_155;
        v137.fields.r = v23;
        v137.fields.g = v22;
        v137.fields.b = v21;
        v137.fields.a = v20;
        UIWidget__set_color((UIWidget_o *)gameObject, v137, 0LL);
      }
      if ( (float)((float)(a * a) + (float)((float)(b * b) + (float)((float)(r * r) + (float)(g * g)))) >= 1.0e-10 )
      {
        titleBgSprite = (UnityEngine_Object_o *)this->fields.titleBgSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(titleBgSprite, 0LL, 0LL) )
        {
          gameObject = (UnityEngine_GameObject_o *)this->fields.titleBgSprite;
          if ( !gameObject )
            goto LABEL_155;
          v138.fields.a = a;
          v138.fields.r = r;
          v138.fields.g = g;
          v138.fields.b = b;
          UIWidget__set_color((UIWidget_o *)gameObject, v138, 0LL);
        }
      }
      if ( !this->fields.changedLayout )
      {
        GameObjectExtensions__AddLocalPositionY(this->fields.skillInfo, this->fields.skillInfoOffset, 0LL);
        this->fields.changedLayout = 1;
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !gameObject )
      goto LABEL_155;
    v129 = targetLvOld;
    v57 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                               targetId,
                                               (const MethodInfo_32AF070 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !skillList )
      goto LABEL_155;
    v59 = (SkillEntity_o *)gameObject;
    v60 = 0;
    max_length = skillList->max_length;
    while ( v60 < (int)max_length )
    {
      if ( v60 >= max_length )
        sub_1BC326C(gameObject, v51, v58);
      v62 = skillList->m_Items[++v60];
      if ( v62 == targetId )
        goto LABEL_35;
    }
    v60 = 0;
LABEL_35:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantSkillMaster___);
    v63 = isForceRelease;
    if ( !gameObject )
      goto LABEL_155;
    v126 = (ServantSkillMaster_o *)gameObject;
    svtId = baseSvtId;
    gameObject = (UnityEngine_GameObject_o *)ServantSkillMaster__getEntityFromSkillId(
                                               (ServantSkillMaster_o *)gameObject,
                                               baseSvtId,
                                               v60,
                                               targetId,
                                               0LL);
    if ( !v59 )
      goto LABEL_155;
    v64 = (ServantSkillEntity_o *)gameObject;
    SkillEntity__getSkillMessageInfo(v59, &name, &detail, targetLv, 0LL);
    value = targetIdOld;
    v65 = targetIdOld >= 1 ? v129 : targetLv - 1;
    if ( v64 )
    {
      skillNum = v64->fields.skillNum;
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12113/*"SKILL_COMBINE_FORCE_RELEASE_NAME"*/, 0LL);
    skillAfter = this->fields.skillAfter;
    str1 = (System_String_o *)gameObject;
    if ( !skillAfter )
      goto LABEL_155;
    if ( isOpen )
    {
      UnityEngine_GameObject__SetActive(skillAfter, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_155;
      SkillIconComponent__Set_40054368((SkillIconComponent_o *)gameObject, targetId, targetLv, 0LL);
      skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
      v70 = v59;
      v71 = targetLv;
    }
    else
    {
      UnityEngine_GameObject__SetActive(skillAfter, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconAft;
      if ( !gameObject )
        goto LABEL_155;
      SkillIconComponent__Set_40054368((SkillIconComponent_o *)gameObject, targetId, targetLv, 0LL);
      skillAftChargeTimeLb = this->fields.skillAftChargeTimeLb;
      EffectChargeTurn = SkillEntity__getEffectChargeTurn(v59, targetLv, 0LL);
      gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
      if ( !skillAftChargeTimeLb )
        goto LABEL_155;
      UILabel__set_text(skillAftChargeTimeLb, (System_String_o *)gameObject, 0LL);
      AfterChargeTimeInfo = this->fields.AfterChargeTimeInfo;
      gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v59, targetLv, 0LL);
      if ( !AfterChargeTimeInfo )
        goto LABEL_155;
      UnityEngine_GameObject__SetActive(AfterChargeTimeInfo, (int)gameObject > 0, 0LL);
      if ( isDispLv )
      {
        v74 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v75 = LocalizationManager__Get((System_String_o *)StringLiteral_1999/*"APPEND_SKILL_RESULT_AFTER_LV"*/, 0LL);
        v131 = targetLv;
        v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131, v76, v77, v78);
        v80 = System_String__Format(v75, v79, 0LL);
        name = System_String__Concat_62348648(v74, v80, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
      if ( !gameObject )
        goto LABEL_155;
      UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
      skillAftForceReleaseLb = (UnityEngine_Object_o *)this->fields.skillAftForceReleaseLb;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v82 = UnityEngine_Object__op_Inequality(skillAftForceReleaseLb, 0LL, 0LL);
      v63 = isForceRelease;
      if ( v82 )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftForceReleaseLb;
        if ( !gameObject )
          goto LABEL_155;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_155;
        UnityEngine_GameObject__SetActive(gameObject, IconCnt > 0 && isForceRelease, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftForceReleaseLb;
        if ( !gameObject )
          goto LABEL_155;
        if ( isForceRelease )
          v83 = str1;
        else
          v83 = (System_String_o *)StringLiteral_1/*""*/;
        UILabel__set_text((UILabel_o *)gameObject, v83, 0LL);
      }
      if ( v64 && IconCnt >= 1 )
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
            goto LABEL_155;
          PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
          gameObject = BaseMonoBehaviour__createObject_40210276((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
          if ( !gameObject )
            goto LABEL_155;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               gameObject,
                               (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
          this->fields.servantSkillStrengthStatusAfter = (struct ServantSkillStrengthStatus_o *)Component_object;
          sub_1BC2FAC(
            (CGThumbnailListItem_o *)&this->fields.servantSkillStrengthStatusAfter,
            (int32_t)Component_object,
            v88,
            v89);
        }
        v90 = this->fields.servantSkillStrengthStatusAfter;
        skillAftTitleLb = this->fields.skillAftTitleLb;
        gameObject = (UnityEngine_GameObject_o *)ServantSkillEntity__GetStrengthStatus(v64, 0LL);
        if ( !v90 )
          goto LABEL_155;
        v135 = (UnityEngine_Vector2Int_o)0x1200000014LL;
        ServantSkillStrengthStatus__Set(
          v90,
          skillAftTitleLb,
          (int32_t)gameObject,
          v64->fields.skillNum,
          20,
          -9,
          v135,
          280,
          this->fields.skillAftForceReleaseLb,
          0LL);
        v63 = isForceRelease;
      }
      else
      {
        if ( !IconCnt && isForceRelease )
        {
          v92 = this->fields.skillAftTitleLb;
          gameObject = (UnityEngine_GameObject_o *)System_String__Concat_62348648(name, str1, 0LL);
          if ( !v92 )
            goto LABEL_155;
          UILabel__set_text(v92, (System_String_o *)gameObject, 0LL);
        }
        gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
        if ( !gameObject )
          goto LABEL_155;
        UILabel__SetCondensedScale((UILabel_o *)gameObject, 280, 0, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftdetailLb;
      if ( !gameObject )
        goto LABEL_155;
      m_CachedPtr = gameObject[17].fields.m_CachedPtr;
      WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, m_CachedPtr, 0, 0LL);
      if ( value < 1 )
      {
        SkillEntity__getSkillMessageInfo(v59, &name, &detail, v65, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
        if ( !gameObject )
          goto LABEL_155;
        v94 = targetId;
      }
      else
      {
        gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                   v57,
                                                   value,
                                                   (const MethodInfo_32AF070 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !gameObject )
          goto LABEL_155;
        v59 = (SkillEntity_o *)gameObject;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)gameObject, &name, &detail, v65, 0LL);
        if ( !isRelease && !v63 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          detail = LocalizationManager__Get((System_String_o *)StringLiteral_12110/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, 0LL);
          WrapControlText__textBBCodeAdjust(this->fields.skillAftdetailLb, detail, m_CachedPtr, 0, 0LL);
        }
        gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
        if ( !gameObject )
          goto LABEL_155;
        v94 = value;
      }
      SkillIconComponent__Set_40054368((SkillIconComponent_o *)gameObject, v94, v65, 0LL);
      skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
      v70 = v59;
      v71 = v65;
    }
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v70, v71, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !skillBefChargeTimeLb )
      goto LABEL_155;
    UILabel__set_text(skillBefChargeTimeLb, (System_String_o *)gameObject, 0LL);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v59, v65, 0LL);
    if ( !beforeChargeTimeInfo )
      goto LABEL_155;
    UnityEngine_GameObject__SetActive(beforeChargeTimeInfo, (int)gameObject > 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
    if ( !gameObject )
      goto LABEL_155;
    UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
    if ( isDispLv )
    {
      skillBefTitleLb = this->fields.skillBefTitleLb;
      v97 = name;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v101 = LocalizationManager__Get((System_String_o *)StringLiteral_2000/*"APPEND_SKILL_RESULT_LV"*/, 0LL);
      v102 = v129;
      if ( isOpen )
        v102 = targetLv;
      v131 = v102;
      v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131, v98, v99, v100);
      v104 = System_String__Format(v101, v103, 0LL);
      gameObject = (UnityEngine_GameObject_o *)System_String__Concat_62348648(v97, v104, 0LL);
      if ( !skillBefTitleLb )
        goto LABEL_155;
      UILabel__set_text(skillBefTitleLb, (System_String_o *)gameObject, 0LL);
    }
    if ( v64 )
    {
      v105 = v64->fields.skillNum;
      if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
      v106 = ServantSkillStrengthStatus__GetIconCnt(v105, 0LL);
      if ( value >= 1 )
      {
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v126, svtId, v60, value, 0LL);
        if ( EntityFromSkillId )
        {
          v108 = EntityFromSkillId->fields.skillNum;
          if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
          v106 = ServantSkillStrengthStatus__GetIconCnt(v108, 0LL);
        }
      }
    }
    else
    {
      v106 = 0;
    }
    skillBefForceReleaseLb = (UnityEngine_Object_o *)this->fields.skillBefForceReleaseLb;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillBefForceReleaseLb, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefForceReleaseLb;
      if ( !gameObject )
        goto LABEL_155;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_155;
      UnityEngine_GameObject__SetActive(gameObject, v106 > 0 && v63, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefForceReleaseLb;
      if ( !gameObject )
        goto LABEL_155;
      if ( v63 )
        v110 = str1;
      else
        v110 = (System_String_o *)StringLiteral_1/*""*/;
      UILabel__set_text((UILabel_o *)gameObject, v110, 0LL);
    }
    if ( v64 && v106 >= 1 )
    {
      StrengthStatus = ServantSkillEntity__GetStrengthStatus(v64, 0LL);
      v112 = v64->fields.skillNum;
      v113 = StrengthStatus;
      if ( value >= 1 )
      {
        v114 = ServantSkillMaster__getEntityFromSkillId(v126, svtId, v60, value, 0LL);
        if ( v114 )
        {
          v115 = v114;
          v116 = ServantSkillEntity__GetStrengthStatus(v114, 0LL);
          v112 = v115->fields.skillNum;
          v113 = v116;
        }
      }
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
          goto LABEL_155;
        v119 = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
        v120 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = BaseMonoBehaviour__createObject_40210276((BaseMonoBehaviour_o *)this, v119, v120, 0LL, 0LL);
        if ( !gameObject )
          goto LABEL_155;
        v121 = UnityEngine_GameObject__GetComponent_object_(
                 gameObject,
                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        *p_servantSkillStrengthStatusBefore = (struct ServantSkillStrengthStatus_o *)v121;
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.servantSkillStrengthStatusBefore, (int32_t)v121, v122, v123);
      }
      gameObject = (UnityEngine_GameObject_o *)*p_servantSkillStrengthStatusBefore;
      if ( !*p_servantSkillStrengthStatusBefore )
        goto LABEL_155;
      v136 = (UnityEngine_Vector2Int_o)0x1200000014LL;
      ServantSkillStrengthStatus__Set(
        (ServantSkillStrengthStatus_o *)gameObject,
        this->fields.skillBefTitleLb,
        v113,
        v112,
        20,
        -9,
        v136,
        280,
        this->fields.skillBefForceReleaseLb,
        0LL);
      goto LABEL_152;
    }
    if ( !v106 && v63 )
    {
      v124 = this->fields.skillBefTitleLb;
      gameObject = (UnityEngine_GameObject_o *)System_String__Concat_62348648(name, str1, 0LL);
      if ( !v124 )
        goto LABEL_155;
      UILabel__set_text(v124, (System_String_o *)gameObject, 0LL);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
    if ( gameObject )
    {
      UILabel__SetCondensedScale((UILabel_o *)gameObject, 280, 0, 0LL);
LABEL_152:
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefdetailLb;
      if ( gameObject )
      {
        WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, gameObject[17].fields.m_CachedPtr, 0, 0LL);
        v125 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(v125, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
        BaseDialog__Open((BaseDialog_o *)this, v125, 0, 0LL);
        return;
      }
    }
LABEL_155:
    sub_1BC3264(gameObject, v51);
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
    sub_1BC3264(skillInfo, enable);
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

  if ( (byte_4B05F07 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId);
    sub_1BC3008(&StringLiteral_6904/*"GET_SKILL_NAME"*/, v11);
    sub_1BC3008(&StringLiteral_1917/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, v12);
    sub_1BC3008(&StringLiteral_2882/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, v13);
    byte_4B05F07 = 1;
  }
  detail = 0LL;
  name = 0LL;
  text = 0LL;
  v27 = 0LL;
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_2882/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleOld, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v17, oldSkillId, v18);
  if ( !SkillEntity )
    goto LABEL_14;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &name, &detail, oldSkillLv, 0LL);
  skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_6904/*"GET_SKILL_NAME"*/, 0LL);
  SkillEntity = System_String__Format(v20, (Il2CppObject *)name, 0LL);
  if ( !skillChangeInfoNameOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoNameOld, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailOld;
  if ( !SkillEntity )
    goto LABEL_14;
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, detail, SkillEntity[17].fields._stringLength, 0, 0LL);
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_1917/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleNow, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v22, nowSkillId, v23);
  if ( !SkillEntity
    || (SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &v27, &text, nowSkillLv, 0LL),
        skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow,
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6904/*"GET_SKILL_NAME"*/, 0LL),
        SkillEntity = System_String__Format(v25, (Il2CppObject *)v27, 0LL),
        !skillChangeInfoNameNow)
    || (UILabel__set_text(skillChangeInfoNameNow, SkillEntity, 0LL),
        (SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailNow) == 0LL) )
  {
LABEL_14:
    sub_1BC3264(SkillEntity, v16);
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
  System_String_o *DetalShort_41966112; // x21
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
  if ( (byte_4B05EFD & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIWidget___, usrSvtData);
    sub_1BC3008(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v15);
    sub_1BC3008(&Method_DataManager_GetMaster_TreasureDvcMaster___, v16);
    sub_1BC3008(&DataManager_TypeInfo, v17);
    sub_1BC3008(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v18);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1BC3008(&SkillUpResultWindowComponent_TypeInfo, v20);
    sub_1BC3008(&StringLiteral_1/*""*/, v21);
    byte_4B05EFD = 1;
  }
  entity = 0LL;
  v49 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !usrSvtData )
    goto LABEL_69;
  v24 = (TreasureDvcMaster_o *)Master_object;
  v26 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v26;
  *(_QWORD *)&v52.fields.fakeValue = v25;
  Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v52, 0LL);
  if ( !v24 )
    goto LABEL_69;
  v27 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v24, (int32_t)Master_object, targetId, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !v27 || !Master_object )
    goto LABEL_69;
  v28 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v27->fields.id, targetLv, 0LL);
  Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v24,
                            &entity,
                            targetIdOld,
                            (const MethodInfo_32AF0BC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
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
                      (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                      (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    Master_object = TreasureDvcLvEntity__getDetalShort_41966112(v28, lv, 0LL);
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
    sub_1BC3264(Master_object, v23);
  }
  if ( targetIdOld < 1 )
  {
    v45 = this->fields.npBefDetailLb;
    Master_object = TreasureDvcLvEntity__getDetalShort_41966112(v28, v49, 0LL);
    v46 = this->fields.npBefDetailLb;
    if ( !v46 )
      goto LABEL_69;
    mFontSize = v46->fields.mFontSize;
    v43 = (System_String_o *)Master_object;
    Master_object = v45;
  }
  else
  {
    DetalShort_41966112 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !Master_object )
      goto LABEL_69;
    v41 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, targetIdOld, targetLvOld, 0LL);
    if ( v41 )
      DetalShort_41966112 = TreasureDvcLvEntity__getDetalShort_41966112(v41, v49, 0LL);
    Master_object = this->fields.npBefDetailLb;
    if ( !Master_object )
      goto LABEL_69;
    mFontSize = *((_DWORD *)Master_object + 106);
    v43 = DetalShort_41966112;
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)Master_object, v43, mFontSize, 0, 0LL);
  npAftDetailLb = this->fields.npAftDetailLb;
  Master_object = TreasureDvcLvEntity__getDetalShort_41966112(v28, lv, 0LL);
  v48 = this->fields.npAftDetailLb;
  if ( !v48 )
    goto LABEL_69;
  WrapControlText__textBBCodeAdjust(npAftDetailLb, (System_String_o *)Master_object, v48->fields.mFontSize, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__SetupSpecialNpChange(
        SkillUpResultWindowComponent_o *this,
        ServantCostumeEntity_o *svtCostumeEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *heroineNpChangeInfoTitle; // x21
  bool v14; // w0
  UILabel_o *v15; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_T__o *heroineNpChangeArrowSprites; // x20
  SkillUpResultWindowComponent___c_c *v20; // x0
  System_Action_object__o *_9__90_0; // x21
  Il2CppObject *v22; // x22
  struct SkillUpResultWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_Object_o *heroineNpChangeExtraArrowSprite; // x20
  UISprite_o *v27; // x19

  if ( (byte_4B05F01 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_UISprite__TypeInfo, svtCostumeEnt);
    sub_1BC3008(&AtlasManager_TypeInfo, v5);
    sub_1BC3008(&Method_BasicHelper_ForEach_UISprite___, v6);
    sub_1BC3008(&LocalizationManager_TypeInfo, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    sub_1BC3008(&Method_SkillUpResultWindowComponent___c__SetupSpecialNpChange_b__90_0__, v9);
    sub_1BC3008(&SkillUpResultWindowComponent___c_TypeInfo, v10);
    sub_1BC3008(&StringLiteral_3802/*"COSTUME_CHANGE_NOBLE_PHANTASM_TITLE"*/, v11);
    sub_1BC3008(&StringLiteral_20105/*"img_arrow_change"*/, v12);
    byte_4B05F01 = 1;
  }
  if ( this->fields.isSpecialEffect )
  {
    heroineNpChangeInfoTitle = (UnityEngine_Object_o *)this->fields.heroineNpChangeInfoTitle;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__op_Inequality(heroineNpChangeInfoTitle, 0LL, 0LL);
    if ( svtCostumeEnt && v14 )
    {
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.heroineNpChangeInfoTitle, 1, 0LL);
      v15 = this->fields.heroineNpChangeInfoTitle;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3802/*"COSTUME_CHANGE_NOBLE_PHANTASM_TITLE"*/, 0LL);
      v17 = System_String__Format(v16, (Il2CppObject *)svtCostumeEnt->fields.name, 0LL);
      if ( !v15 )
        sub_1BC3264(v17, v18);
      UILabel__set_text(v15, v17, 0LL);
    }
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.heroineNpChangeArrowSprites, 0LL) )
    {
      heroineNpChangeArrowSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.heroineNpChangeArrowSprites;
      v20 = SkillUpResultWindowComponent___c_TypeInfo;
      if ( !SkillUpResultWindowComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent___c_TypeInfo);
        v20 = SkillUpResultWindowComponent___c_TypeInfo;
      }
      _9__90_0 = (System_Action_object__o *)v20->static_fields->__9__90_0;
      if ( !_9__90_0 )
      {
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = SkillUpResultWindowComponent___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v20->static_fields->__9;
        _9__90_0 = (System_Action_object__o *)sub_1BC3254(System_Action_UISprite__TypeInfo);
        System_Action_object____ctor(
          _9__90_0,
          v22,
          Method_SkillUpResultWindowComponent___c__SetupSpecialNpChange_b__90_0__,
          0LL);
        static_fields = SkillUpResultWindowComponent___c_TypeInfo->static_fields;
        static_fields->__9__90_0 = (struct System_Action_UISprite__o *)_9__90_0;
        sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__90_0, (int32_t)_9__90_0, v24, v25);
      }
      BasicHelper__ForEach_object_(
        heroineNpChangeArrowSprites,
        (System_Action_T__o *)_9__90_0,
        (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_UISprite___);
    }
    heroineNpChangeExtraArrowSprite = (UnityEngine_Object_o *)this->fields.heroineNpChangeExtraArrowSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(heroineNpChangeExtraArrowSprite, 0LL, 0LL) )
    {
      v27 = this->fields.heroineNpChangeExtraArrowSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetDownloadCommonSprite(v27, (System_String_o *)StringLiteral_20105/*"img_arrow_change"*/, 0LL);
    }
  }
}


void __fastcall SkillUpResultWindowComponent__SetupWindowBg(
        SkillUpResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *windowBgSprite; // x20
  UISprite_o *v6; // x19

  if ( (byte_4B05F00 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_20376/*"img_skillwindow_sp"*/, v4);
    byte_4B05F00 = 1;
  }
  if ( this->fields.isSpecialEffect )
  {
    windowBgSprite = (UnityEngine_Object_o *)this->fields.windowBgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(windowBgSprite, 0LL, 0LL) )
    {
      v6 = this->fields.windowBgSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetDownloadCommonSprite(v6, (System_String_o *)StringLiteral_20376/*"img_skillwindow_sp"*/, 0LL);
    }
  }
}


void __fastcall SkillUpResultWindowComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B05F0B & 1) == 0 )
  {
    sub_1BC3008(&SkillUpResultWindowComponent___c_TypeInfo, v1);
    byte_4B05F0B = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(SkillUpResultWindowComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SkillUpResultWindowComponent___c_TypeInfo->static_fields->__9 = (struct SkillUpResultWindowComponent___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)SkillUpResultWindowComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SkillUpResultWindowComponent___c___ctor(
        SkillUpResultWindowComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SkillUpResultWindowComponent___c___SetupSpecialNpChange_b__90_0(
        SkillUpResultWindowComponent___c_o *this,
        UISprite_o *sp,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_4B05F0C & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, sp);
    sub_1BC3008(&StringLiteral_20165/*"img_combine_arrow_sp"*/, v4);
    byte_4B05F0C = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(sp, (System_String_o *)StringLiteral_20165/*"img_combine_arrow_sp"*/, 0LL);
}


void __fastcall SkillUpResultWindowComponent___c__DisplayClass95_0___ctor(
        SkillUpResultWindowComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SkillUpResultWindowComponent___c__DisplayClass95_0___CloseToNext_b__0(
        SkillUpResultWindowComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}