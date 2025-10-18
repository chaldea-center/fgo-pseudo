void SkillUpResultWindowComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C47098 & 1) == 0 )
  {
    sub_1C37058(&SkillUpResultWindowComponent_TypeInfo);
    byte_4C47098 = 1;
  }
  *SkillUpResultWindowComponent_TypeInfo->static_fields = (struct SkillUpResultWindowComponent_StaticFields)xmmword_C0F7B0;
}


void SkillUpResultWindowComponent___ctor(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C47097 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C47097 = 1;
  }
  this->fields.svtTransformCount = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SkillUpResultWindowComponent__Close(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x0
  System_Action_o *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4C47090 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SkillUpResultWindowComponent_EndClose__);
    byte_4C47090 = 1;
  }
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0);
  SkillUpResultWindowComponent__Close_48686880(this, v4, v5);
}


void SkillUpResultWindowComponent__CloseToNext(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Action_o *v9; // x20

  if ( (byte_4C47092 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SkillUpResultWindowComponent___c__DisplayClass95_0__CloseToNext_b__0__);
    sub_1C37058(&SkillUpResultWindowComponent___c__DisplayClass95_0_TypeInfo);
    byte_4C47092 = 1;
  }
  v5 = sub_1C372A4(SkillUpResultWindowComponent___c__DisplayClass95_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v7, v8);
  v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SkillUpResultWindowComponent___c__DisplayClass95_0__CloseToNext_b__0__,
    0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v9, 0);
}


void SkillUpResultWindowComponent__Close_48686880(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_4C47091 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SkillUpResultWindowComponent_EndClose__);
    byte_4C47091 = 1;
  }
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void SkillUpResultWindowComponent__EndClose(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x2

  SkillUpResultWindowComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        SkillUpResultWindowComponent__SetChildrenActive(this, 0, v4),
        (gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0)) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
    sub_1C372B4(gameObject);
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
    sub_1C36FFC(p_openCallBack, 0, v2, v3);
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

  if ( (byte_4C47094 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C47094 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantSkillMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  return ServantSkillMaster__getEntityFromSkillId((ServantSkillMaster_o *)Instance, svtId, num, skillId, 0);
}


SkillEntity_o *SkillUpResultWindowComponent__GetSkillEntity(
        SkillUpResultWindowComponent_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C47093 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C47093 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    skillId,
    (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  return (SkillEntity_o *)entity;
}


void SkillUpResultWindowComponent__Init(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
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
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  UILabel_o *costumeChangeLabel; // x23
  System_String_o *v15; // x0

  if ( (byte_4C47096 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__);
    byte_4C47096 = 1;
  }
  v9 = Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C37070(Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetupWindowBg(this, v12);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v13);
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
  v15 = LocalizationManager__Get(formatKey, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v15, (Il2CppObject *)costumeName, 0);
  if ( !costumeChangeLabel )
LABEL_13:
    sub_1C372B4(gameObject);
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
  const MethodInfo *v12; // x2
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Text_StringBuilder_o *v15; // x20
  int32_t SvtId; // w22
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  System_Collections_Generic_List_object__o *v19; // x0
  Il2CppObject *current; // x23
  System_String_o *v21; // x0
  System_String_o *v22; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v24; // x0
  int32_t v25; // w23
  UILabel_o *friendshipLabel; // x22
  UnityEngine_GameObject_o *v27; // x20
  UILabel_o *friendshipCurrentLvLabel; // x20
  UILabel_o *friendshipResultLvLabel; // x20
  UIWidget_o *v30; // x20
  SkillUpResultWindowComponent_c *v31; // x8
  struct UILabel_o *v32; // x8
  System_Action_o *v33; // x20
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+0h] [xbp-90h] BYREF
  int32_t FriendShipRank; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF
  int32_t oldFriendShipRanka; // [xsp+3Ch] [xbp-54h] BYREF

  oldFriendShipRanka = oldFriendShipRank;
  if ( (byte_4C4708C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C37058(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_1C37058(&Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__);
    sub_1C37058(&SkillUpResultWindowComponent_TypeInfo);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&StringLiteral_11112/*"RESULT_BOUNDS_OPENQUEST"*/);
    sub_1C37058(&StringLiteral_11114/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/);
    sub_1C37058(&StringLiteral_11107/*"RESULT_BOUNDS_GETVOICE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4708C = 1;
  }
  memset(&v36, 0, sizeof(v36));
  FriendShipRank = 0;
  if ( !this->fields.state )
  {
    v9 = Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C37070(Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v12);
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
            sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v13, v14);
            gameObject = (UnityEngine_GameObject_o *)this->fields.friendshipLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
              v15 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v15, 0);
              if ( usrSvtData )
              {
                SvtId = UserServantEntity__getSvtId(usrSvtData, 0);
                gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  MasterData_object = DataManager__GetMasterData_object_(
                                        (DataManager_o *)gameObject,
                                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4C3CD62 )
                  {
                    sub_1C37058(&NetworkManager_TypeInfo);
                    byte_4C3CD62 = 1;
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
                    gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                    if ( gameObject )
                    {
                      v19 = (System_Collections_Generic_List_object__o *)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                                                                           (clsQuestCheck_o *)gameObject,
                                                                           SvtId,
                                                                           oldFriendShipRank,
                                                                           8,
                                                                           0);
                      if ( v19 )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v34,
                          v19,
                          (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
                        v36 = v34;
                        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v36,
                                  (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
                        {
                          current = v36.fields._current;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11112/*"RESULT_BOUNDS_OPENQUEST"*/, 0);
                          if ( !current )
                            sub_1C372B4(v21);
                          v22 = v21;
                          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0);
                          v24 = System_String__Format(v22, QuestName, 0);
                          if ( !v15 )
                            sub_1C372B4(v24);
                          System_Text_StringBuilder__AppendLine_63647944(v15, v24, 0);
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v36,
                          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
                      }
                      v25 = oldFriendShipRanka;
                      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                      gameObject = (UnityEngine_GameObject_o *)ServantCommentManager__IsOpenByServantFriendShip(
                                                                 SvtId,
                                                                 v25,
                                                                 0);
                      if ( ((unsigned __int8)gameObject & 1) != 0 )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_11114/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/,
                                                                   0);
                        if ( !v15 )
                          goto LABEL_60;
                        gameObject = (UnityEngine_GameObject_o *)System_Text_StringBuilder__AppendLine_63647944(
                                                                   v15,
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
                                                                   (System_String_o *)StringLiteral_11107/*"RESULT_BOUNDS_GETVOICE"*/,
                                                                   0);
                        if ( !v15 )
                          goto LABEL_60;
                        System_Text_StringBuilder__AppendLine_63647944(v15, (System_String_o *)gameObject, 0);
                      }
                      else if ( !v15 )
                      {
                        goto LABEL_60;
                      }
                      friendshipLabel = this->fields.friendshipLabel;
                      gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v15->klass->vtable._3_ToString.methodPtr)(
                                                                 v15,
                                                                 v15->klass->vtable._3_ToString.method);
                      if ( friendshipLabel )
                      {
                        UILabel__set_text(friendshipLabel, (System_String_o *)gameObject, 0);
                        gameObject = this->fields.friendshipLvInfo;
                        if ( gameObject )
                        {
                          v27 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
                          gameObject = (UnityEngine_GameObject_o *)UserServantCollectionEntity__getFriendShipRank(
                                                                     EntityDefinitely,
                                                                     0);
                          if ( v27 )
                          {
                            UnityEngine_GameObject__SetActive(v27, (int)gameObject > oldFriendShipRanka, 0);
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
                                                                             (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
                                  v30 = (UIWidget_o *)gameObject;
                                  v31 = SkillUpResultWindowComponent_TypeInfo;
                                  if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
                                    v31 = SkillUpResultWindowComponent_TypeInfo;
                                  }
                                  if ( v30 )
                                  {
                                    UIWidget__set_color(v30, v31->static_fields->COLOR_VAL, 0);
                                    v32 = this->fields.friendshipLabel;
                                    if ( v32 )
                                    {
                                      if ( !System_String__IsNullOrEmpty(v32->fields.mText, 0) )
                                      {
LABEL_58:
                                        v33 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v33,
                                          (Il2CppObject *)this,
                                          Method_SkillUpResultWindowComponent_EndOpen__,
                                          0);
                                        BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0, 0);
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
    sub_1C372B4(gameObject);
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
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x6

  if ( (byte_4C47089 & 1) == 0 )
  {
    sub_1C37058(&Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__);
    byte_4C47089 = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C37070(Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C3703C(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v16);
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
    sub_1C372B4(gameObject);
  }
  NpInfoAddResultComponent__SetDisplay(
    (NpInfoAddResultComponent_o *)gameObject,
    addManager,
    index,
    titleText,
    isRankUp,
    this->fields.svtTransformCount,
    v17);
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
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3

  if ( (byte_4C47087 & 1) == 0 )
  {
    sub_1C37058(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__);
    byte_4C47087 = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C37070(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C3703C(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v16);
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
    || (HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, oldTargetId, oldTargetLv, v17),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow) == 0) )
  {
LABEL_16:
    sub_1C372B4(gameObject);
  }
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, v18);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenNpUpResultInfo_48680368(
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
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  UnityEngine_Object_o *heroineNpChangeInfoExtra; // x23
  const MethodInfo *v27; // x3

  if ( (byte_4C47088 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78212520);
    byte_4C47088 = 1;
  }
  v18 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78212520;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78212520 + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1C37070(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78212520);
  v19 = (System_Reflection_MethodBase_o *)sub_1C3703C(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetupWindowBg(this, v21);
  SkillUpResultWindowComponent__SetupSpecialNpChange(this, svtCostumeEnt, v22);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v23);
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
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, oldTargetId, oldTargetLv, v24);
  gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow;
  if ( !gameObject )
    goto LABEL_23;
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, v25);
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
        HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, exTargetId, exTargetLv, v27);
        goto LABEL_22;
      }
LABEL_23:
      sub_1C372B4(gameObject);
    }
  }
LABEL_22:
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenNpUpResultInfo_48681928(
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
  const MethodInfo *v21; // x2
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL4 v24; // w26
  _BOOL4 v25; // w27
  _BOOL4 IsHeroine; // w28
  _BOOL4 v27; // w20
  int v28; // w27
  _BOOL4 v29; // w28
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x7
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x6
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  struct System_String_array *titles; // x8
  System_String_o *titleText; // x3
  System_Action_o *v38; // x20
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v39; // [xsp+0h] [xbp-70h]
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C4708A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_1C37058(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78212528);
    byte_4C4708A = 1;
  }
  transformInfo = 0;
  if ( !this->fields.state )
  {
    v18 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78212528;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78212528 + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C37070(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78212528);
    v19 = (System_Reflection_MethodBase_o *)sub_1C3703C(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v21);
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
            sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v22, v23);
            if ( usrSvtData )
            {
              gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformCount(usrSvtData, 1, 0);
              this->fields.svtTransformCount = (int)gameObject;
              if ( addManager )
              {
                v39 = addManager;
                v24 = addManager->fields._tdAddEntity_k__BackingField != 0;
                v25 = (int)gameObject > 1;
                IsHeroine = UserServantEntity__IsHeroine(usrSvtData, 0);
                v27 = targetIdOld != targetId;
                if ( targetIdOld == targetId && UserServantEntity__IsHeroine(usrSvtData, 0) )
                  targetIdOld = 0;
                gameObject = this->fields.npInfoAddRoot;
                if ( gameObject )
                {
                  v28 = v25 || v24;
                  UnityEngine_GameObject__SetActive(gameObject, v28, 0);
                  gameObject = this->fields.npInfoNormalRoot;
                  if ( gameObject )
                  {
                    v29 = targetLvOld != targetLv && IsHeroine && v27;
                    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)(v29 | (kind == 18) | v28) != 1, 0);
                    gameObject = this->fields.npInfoHeroineNpChangeRoot;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, v29, 0);
                      gameObject = this->fields.npInfoNpChangeRoot;
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive(gameObject, kind == 18, 0);
                        if ( v29 )
                        {
                          gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld;
                          if ( gameObject )
                          {
                            HeroineNpChangeInfoComponent__Setup(
                              (HeroineNpChangeInfoComponent_o *)gameObject,
                              targetIdOld,
                              targetLvOld,
                              v30);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow;
                            if ( gameObject )
                            {
                              HeroineNpChangeInfoComponent__Setup(
                                (HeroineNpChangeInfoComponent_o *)gameObject,
                                targetId,
                                targetLv,
                                v32);
LABEL_40:
                              v38 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                              System_Action___ctor(
                                v38,
                                (Il2CppObject *)this,
                                Method_SkillUpResultWindowComponent_EndOpen__,
                                0);
                              BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0, 0);
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
                              v30);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.npChangeInfoNow;
                            if ( gameObject )
                            {
                              HeroineNpChangeInfoComponent__SetupForNpChange(
                                (HeroineNpChangeInfoComponent_o *)gameObject,
                                targetId,
                                targetLv,
                                v33);
                              goto LABEL_40;
                            }
                          }
                        }
                        else
                        {
                          if ( !v28 )
                          {
                            SkillUpResultWindowComponent__SetupNpUpResultInfoNormal(
                              this,
                              usrSvtData,
                              targetId,
                              targetLv,
                              targetIdOld,
                              targetLvOld,
                              kind,
                              v31);
                            goto LABEL_40;
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
                                                                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( gameObject )
                              {
                                UIWidget__set_height((UIWidget_o *)gameObject, 300, 0);
                                gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformedServantInfo(
                                                                           usrSvtData,
                                                                           &transformInfo,
                                                                           0,
                                                                           0);
                                tdAddEntity_k__BackingField = v39->fields._tdAddEntity_k__BackingField;
                                if ( !tdAddEntity_k__BackingField )
                                  goto LABEL_35;
                                titles = tdAddEntity_k__BackingField->fields.titles;
                                if ( !titles )
                                  goto LABEL_35;
                                if ( !LODWORD(titles->max_length) )
                                  sub_1C372BC(gameObject);
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
                                    v39,
                                    0,
                                    titleText,
                                    kind == 8,
                                    this->fields.svtTransformCount,
                                    v34);
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
    sub_1C372B4(gameObject);
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
  const MethodInfo *v10; // x2
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  __int64 v14; // x20
  __int64 v15; // x22
  Il2CppObject *Entity; // x0
  UILabel_o *powerupLabel; // x20
  Il2CppObject *v18; // x21
  System_Action_o *v19; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4C4708D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_1C37058(&Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__);
    sub_1C37058(&StringLiteral_11113/*"RESULT_BOUNDS_POWERUP"*/);
    byte_4C4708D = 1;
  }
  if ( !this->fields.state )
  {
    v7 = Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C37070(Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    SkillUpResultWindowComponent__SetChildrenActive(this, 0, v10);
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
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v11, v12);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !usrSvtData )
      goto LABEL_20;
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    v15 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = v15;
    *(_QWORD *)&v20.fields.fakeValue = v14;
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v20, 0);
    if ( !v13 )
      goto LABEL_20;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v13,
               (int32_t)gameObject,
               (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    powerupLabel = this->fields.powerupLabel;
    v18 = Entity;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11113/*"RESULT_BOUNDS_POWERUP"*/, 0);
    if ( !v18
      || (gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)v18[4].monitor,
                                                     0),
          !powerupLabel) )
    {
LABEL_20:
      sub_1C372B4(gameObject);
    }
    UILabel__set_text(powerupLabel, (System_String_o *)gameObject, 0);
    v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0, 0);
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
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  System_String_o *BattleName; // x0
  UILabel_o *costumeChangeLabel; // x21
  Il2CppObject *v14; // x22
  System_String_o *v15; // x0

  if ( (byte_4C47084 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__);
    sub_1C37058(&StringLiteral_3837/*"COSTUME_CHANGE_DESCRIPTION"*/);
    byte_4C47084 = 1;
  }
  v7 = Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C37070(Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetupWindowBg(this, v10);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v11);
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
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                             svtId,
                                             (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_16;
  BattleName = ServantEntity__getBattleName((ServantEntity_o *)gameObject, 0, -1, 0);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  v14 = (Il2CppObject *)BattleName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3837/*"COSTUME_CHANGE_DESCRIPTION"*/, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v15, v14, 0);
  if ( !costumeChangeLabel )
LABEL_16:
    sub_1C372B4(gameObject);
  UILabel__set_text(costumeChangeLabel, (System_String_o *)gameObject, 0);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenSkillChangeMessage_48678556(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        System_String_o *formatKey,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  Il2CppObject *BattleName; // x22
  UILabel_o *costumeChangeLabel; // x23
  System_String_o *v16; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C47085 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___78212552);
    sub_1C37058(&string_TypeInfo);
    byte_4C47085 = 1;
  }
  v9 = Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___78212552;
  entity = 0;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___78212552 + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C37070(Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___78212552);
  v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetupWindowBg(this, v12);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v13);
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
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !gameObject )
    goto LABEL_20;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
         &entity,
         svtId,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
  v16 = LocalizationManager__Get(formatKey, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v16, BattleName, 0);
  if ( !costumeChangeLabel )
LABEL_20:
    sub_1C372B4(gameObject);
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
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  UILabel_o *skillChangeInfoTitle; // x26
  System_String_o *v21; // x0
  const MethodInfo *v22; // x5

  if ( (byte_4C47086 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__);
    sub_1C37058(&StringLiteral_3844/*"COSTUME_CHANGE_SKILL_TITLE"*/);
    byte_4C47086 = 1;
  }
  v15 = Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1C37070(Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__);
  v16 = (System_Reflection_MethodBase_o *)sub_1C3703C(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetupWindowBg(this, v18);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v19);
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
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3844/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v21, (Il2CppObject *)costumeName, 0);
  if ( !skillChangeInfoTitle )
LABEL_13:
    sub_1C372B4(gameObject);
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)gameObject, 0);
  SkillUpResultWindowComponent__SetSkillInfo(this, oldSkillId, oldSkillLv, nowSkillId, nowSkillLv, v22);
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
  void *gameObject; // x0
  const MethodInfo *v36; // x2
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  char v39; // w22
  UnityEngine_Object_o *titleBgSprite; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // x29
  SkillEntity_o *v42; // x28
  int32_t v43; // w24
  int32_t max_length; // w8
  int32_t v45; // w9
  ServantSkillEntity_o *v46; // x27
  ServantLimitImageMaster_o *v47; // x21
  __int64 v48; // x20
  __int64 v49; // x26
  int32_t v50; // w26
  int32_t ServantImageLimitSealAfter; // w26
  Il2CppObject *Master_object; // x21
  int32_t v53; // w22
  int32_t v54; // w20
  int32_t v55; // w26
  int32_t v56; // w21
  int32_t skillNum; // w20
  int32_t IconCnt; // w22
  UnityEngine_GameObject_o *skillAfter; // x8
  UILabel_o *skillBefChargeTimeLb; // x22
  UnityEngine_GameObject_o *beforeChargeTimeInfo; // x22
  bool v62; // w25
  UILabel_o *skillAftChargeTimeLb; // x26
  UnityEngine_GameObject_o *AfterChargeTimeInfo; // x26
  System_String_o *v65; // x26
  System_String_o *v66; // x20
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x5
  __int64 v71; // x6
  __int64 v72; // x7
  Il2CppObject *v73; // x0
  System_String_o *v74; // x0
  UnityEngine_Object_o *skillAftForceReleaseLb; // x20
  System_String_o *v76; // x1
  UnityEngine_Object_o *servantSkillStrengthStatusAfter; // x20
  System_String_o *PATH; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  ServantSkillStrengthStatus_o *v83; // x22
  UILabel_o *skillAftTitleLb; // x26
  UnityEngine_Vector2Int_o v85; // x6
  UILabel_o *v86; // x22
  int32_t v87; // w22
  UILabel_o *v88; // x22
  UILabel_o *skillBefTitleLb; // x21
  System_String_o *v90; // x22
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  __int64 v94; // x5
  __int64 v95; // x6
  __int64 v96; // x7
  System_String_o *v97; // x20
  int32_t v98; // w8
  Il2CppObject *v99; // x0
  System_String_o *v100; // x0
  int32_t v101; // w20
  int32_t v102; // w21
  ServantSkillEntity_o *EntityFromSkillId; // x0
  int32_t v104; // w20
  UnityEngine_Object_o *skillBefForceReleaseLb; // x20
  System_String_o *v106; // x1
  int32_t StrengthStatus; // w0
  int32_t v108; // w21
  int32_t v109; // w22
  ServantSkillEntity_o *v110; // x0
  ServantSkillEntity_o *v111; // x20
  int32_t v112; // w0
  UnityEngine_Object_o *servantSkillStrengthStatusBefore; // x23
  struct ServantSkillStrengthStatus_o **p_servantSkillStrengthStatusBefore; // x20
  System_String_o *v115; // x23
  UnityEngine_Transform_o *v116; // x0
  Il2CppObject *v117; // x0
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  UnityEngine_Vector2Int_o v120; // x6
  UILabel_o *v121; // x20
  System_Action_o *v122; // x20
  ServantSkillMaster_o *v123; // [xsp+20h] [xbp-F0h]
  int32_t svtId; // [xsp+2Ch] [xbp-E4h]
  System_String_o *str1; // [xsp+30h] [xbp-E0h]
  int32_t v126; // [xsp+40h] [xbp-D0h]
  int32_t v127; // [xsp+4Ch] [xbp-C4h]
  int32_t v128; // [xsp+50h] [xbp-C0h] BYREF
  int32_t EffectChargeTurn; // [xsp+54h] [xbp-BCh] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+58h] [xbp-B8h] BYREF
  System_String_o *detail; // [xsp+60h] [xbp-B0h] BYREF
  System_String_o *name; // [xsp+68h] [xbp-A8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16
  UnityEngine_Color_o v134; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v135; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = titleBgColor.fields.a;
  b = titleBgColor.fields.b;
  g = titleBgColor.fields.g;
  r = titleBgColor.fields.r;
  v21 = titleColor.fields.a;
  v22 = titleColor.fields.b;
  v23 = titleColor.fields.g;
  v24 = titleColor.fields.r;
  if ( (byte_4C47083 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C37058(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_1C37058(&Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__);
    sub_1C37058(&StringLiteral_2011/*"APPEND_SKILL_RESULT_AFTER_LV"*/);
    sub_1C37058(&StringLiteral_12227/*"SKILL_COMBINE_FORCE_RELEASE_NAME"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_12224/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/);
    sub_1C37058(&StringLiteral_2012/*"APPEND_SKILL_RESULT_LV"*/);
    byte_4C47083 = 1;
  }
  detail = 0;
  name = 0;
  entity = 0;
  EffectChargeTurn = 0;
  if ( this->fields.state )
    return;
  v33 = Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__ + 83) & 2) != 0 )
    v33 = (_QWORD *)sub_1C37070(Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__);
  v34 = (System_Reflection_MethodBase_o *)sub_1C3703C(v33, v33[4]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_172;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v36);
  gameObject = GameObjectExtensions__GetParent(this->fields.skillInfo, 0);
  if ( !gameObject )
    goto LABEL_172;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_172;
  v127 = targetLvOld;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = this->fields.skillInfo;
  if ( !gameObject )
    goto LABEL_172;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  this->fields.openCallBack = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v37, v38);
  gameObject = (void *)System_String__IsNullOrEmpty(dispBattleName, 0);
  if ( !this->fields.titleLabel )
    goto LABEL_172;
  v39 = (char)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.titleLabel, 0);
  if ( !gameObject )
    goto LABEL_172;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (v39 ^ 1) & 1, 0);
  if ( (v39 & 1) == 0 )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_172;
    UILabel__set_text((UILabel_o *)gameObject, dispBattleName, 0);
    if ( (float)((float)(v21 * v21) + (float)((float)(v22 * v22) + (float)((float)(v24 * v24) + (float)(v23 * v23)))) >= 1.0e-10 )
    {
      gameObject = this->fields.titleLabel;
      if ( !gameObject )
        goto LABEL_172;
      v134.fields.r = v24;
      v134.fields.g = v23;
      v134.fields.b = v22;
      v134.fields.a = v21;
      UIWidget__set_color((UIWidget_o *)gameObject, v134, 0);
    }
    if ( (float)((float)(a * a) + (float)((float)(b * b) + (float)((float)(r * r) + (float)(g * g)))) >= 1.0e-10 )
    {
      titleBgSprite = (UnityEngine_Object_o *)this->fields.titleBgSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(titleBgSprite, 0, 0) )
      {
        gameObject = this->fields.titleBgSprite;
        if ( !gameObject )
          goto LABEL_172;
        v135.fields.a = a;
        v135.fields.r = r;
        v135.fields.g = g;
        v135.fields.b = b;
        UIWidget__set_color((UIWidget_o *)gameObject, v135, 0);
      }
    }
    if ( !this->fields.changedLayout )
    {
      GameObjectExtensions__AddLocalPositionY(this->fields.skillInfo, this->fields.skillInfoOffset, 0);
      this->fields.changedLayout = 1;
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !gameObject )
    goto LABEL_172;
  v41 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
  gameObject = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                 targetId,
                 (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillList )
    goto LABEL_172;
  v42 = (SkillEntity_o *)gameObject;
  v43 = 0;
  max_length = skillList->max_length;
  while ( v43 < max_length )
  {
    if ( v43 >= (unsigned int)max_length )
      sub_1C372BC(gameObject);
    v45 = skillList->m_Items[v43++];
    if ( v45 == targetId )
      goto LABEL_35;
  }
  v43 = 0;
LABEL_35:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( !gameObject )
    goto LABEL_172;
  v123 = (ServantSkillMaster_o *)gameObject;
  svtId = baseSvtId;
  gameObject = ServantSkillMaster__getEntityFromSkillId((ServantSkillMaster_o *)gameObject, baseSvtId, v43, targetId, 0);
  if ( !v42 )
    goto LABEL_172;
  v46 = (ServantSkillEntity_o *)gameObject;
  v126 = targetIdOld;
  SkillEntity__getSkillMessageInfo(v42, &name, &detail, targetLv, 0);
  gameObject = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !userServantEntity )
    goto LABEL_172;
  v47 = (ServantLimitImageMaster_o *)gameObject;
  v48 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v49 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v133.fields.currentCryptoKey = v48;
  *(_QWORD *)&v133.fields.fakeValue = v49;
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v133, 0);
  gameObject = (void *)UserServantEntity__getDispLimitCount(userServantEntity, 0, 0);
  if ( !v47 )
    goto LABEL_172;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(v47, v50, (int32_t)gameObject, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(userServantEntity->fields.svtId, 0);
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(userServantEntity->fields.limitCount, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  gameObject = (void *)ImageLimitCount__GetLimitCountByDispLimit(ServantImageLimitSealAfter, v54, 0);
  if ( !Master_object )
    goto LABEL_172;
  v55 = v126;
  if ( ServantLimitAddMaster__TryGetEntity(
         (ServantLimitAddMaster_o *)Master_object,
         &entity,
         v53,
         (int32_t)gameObject,
         0) )
  {
    gameObject = entity;
    if ( !entity )
      goto LABEL_172;
    if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
    {
      gameObject = entity;
      if ( !entity )
        goto LABEL_172;
      name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v42->fields.id, name, 0);
    }
  }
  v56 = v126 >= 1 ? v127 : targetLv - 1;
  if ( v46 )
  {
    skillNum = v46->fields.skillNum;
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
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_12227/*"SKILL_COMBINE_FORCE_RELEASE_NAME"*/, 0);
  skillAfter = this->fields.skillAfter;
  str1 = (System_String_o *)gameObject;
  if ( !skillAfter )
    goto LABEL_172;
  if ( isOpen )
  {
    UnityEngine_GameObject__SetActive(skillAfter, 0, 0);
    gameObject = this->fields.skillIconBef;
    if ( !gameObject )
      goto LABEL_172;
    SkillIconComponent__Set_41023284((SkillIconComponent_o *)gameObject, targetId, targetLv, 0);
    skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v42, targetLv, 0);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0);
    if ( !skillBefChargeTimeLb )
      goto LABEL_172;
    UILabel__set_text(skillBefChargeTimeLb, (System_String_o *)gameObject, 0);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v42, v56, 0);
    v62 = isForceRelease;
    if ( !beforeChargeTimeInfo )
      goto LABEL_172;
  }
  else
  {
    UnityEngine_GameObject__SetActive(skillAfter, 1, 0);
    gameObject = this->fields.skillIconAft;
    if ( !gameObject )
      goto LABEL_172;
    SkillIconComponent__Set_41023284((SkillIconComponent_o *)gameObject, targetId, targetLv, 0);
    skillAftChargeTimeLb = this->fields.skillAftChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v42, targetLv, 0);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0);
    if ( !skillAftChargeTimeLb )
      goto LABEL_172;
    UILabel__set_text(skillAftChargeTimeLb, (System_String_o *)gameObject, 0);
    AfterChargeTimeInfo = this->fields.AfterChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v42, targetLv, 0);
    if ( !AfterChargeTimeInfo )
      goto LABEL_172;
    UnityEngine_GameObject__SetActive(AfterChargeTimeInfo, (int)gameObject > 0, 0);
    if ( isDispLv )
    {
      v65 = name;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_2011/*"APPEND_SKILL_RESULT_AFTER_LV"*/, 0);
      v128 = targetLv;
      v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v128, v67, v68, v69, v70, v71, v72);
      v74 = System_String__Format(v66, v73, 0);
      name = System_String__Concat_63561656(v65, v74, 0);
    }
    gameObject = this->fields.skillAftTitleLb;
    if ( !gameObject )
      goto LABEL_172;
    UILabel__set_text((UILabel_o *)gameObject, name, 0);
    skillAftForceReleaseLb = (UnityEngine_Object_o *)this->fields.skillAftForceReleaseLb;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillAftForceReleaseLb, 0, 0) )
    {
      gameObject = this->fields.skillAftForceReleaseLb;
      if ( !gameObject )
        goto LABEL_172;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_172;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, IconCnt > 0 && isForceRelease, 0);
      gameObject = this->fields.skillAftForceReleaseLb;
      if ( !gameObject )
        goto LABEL_172;
      if ( isForceRelease )
        v76 = str1;
      else
        v76 = (System_String_o *)StringLiteral_1/*""*/;
      UILabel__set_text((UILabel_o *)gameObject, v76, 0);
    }
    if ( v46 && IconCnt >= 1 )
    {
      servantSkillStrengthStatusAfter = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusAfter;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(servantSkillStrengthStatusAfter, 0, 0) )
      {
        if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
        gameObject = this->fields.skillAftTitleLb;
        if ( !gameObject )
          goto LABEL_172;
        PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
        gameObject = BaseMonoBehaviour__createObject_41185212((BaseMonoBehaviour_o *)this, PATH, transform, 0, 0);
        if ( !gameObject )
          goto LABEL_172;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)gameObject,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        this->fields.servantSkillStrengthStatusAfter = (struct ServantSkillStrengthStatus_o *)Component_object;
        sub_1C36FFC(
          (CGThumbnailListItem_o *)&this->fields.servantSkillStrengthStatusAfter,
          (int32_t)Component_object,
          v81,
          v82);
      }
      v83 = this->fields.servantSkillStrengthStatusAfter;
      skillAftTitleLb = this->fields.skillAftTitleLb;
      gameObject = (void *)ServantSkillEntity__GetStrengthStatus(v46, 0);
      if ( !v83 )
        goto LABEL_172;
      v85 = (UnityEngine_Vector2Int_o)0x1200000014LL;
      ServantSkillStrengthStatus__Set(
        v83,
        skillAftTitleLb,
        (int32_t)gameObject,
        v46->fields.skillNum,
        20,
        -9,
        v85,
        280,
        this->fields.skillAftForceReleaseLb,
        0);
      v55 = v126;
    }
    else
    {
      v55 = v126;
      if ( !IconCnt && isForceRelease )
      {
        v86 = this->fields.skillAftTitleLb;
        gameObject = System_String__Concat_63561656(name, str1, 0);
        if ( !v86 )
          goto LABEL_172;
        UILabel__set_text(v86, (System_String_o *)gameObject, 0);
      }
      gameObject = this->fields.skillAftTitleLb;
      if ( !gameObject )
        goto LABEL_172;
      UILabel__SetCondensedScale((UILabel_o *)gameObject, 280, 0, 0);
    }
    gameObject = this->fields.skillAftdetailLb;
    if ( !gameObject )
      goto LABEL_172;
    v87 = *((_DWORD *)gameObject + 106);
    WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, v87, 0, 0);
    if ( v55 < 1 )
    {
      SkillEntity__getSkillMessageInfo(v42, &name, &detail, v56, 0);
      gameObject = this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_172;
      SkillIconComponent__Set_41023284((SkillIconComponent_o *)gameObject, targetId, v56, 0);
      v62 = isForceRelease;
    }
    else
    {
      gameObject = DataMasterBase_object__object__int___GetEntity(
                     v41,
                     v55,
                     (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !gameObject )
        goto LABEL_172;
      v42 = (SkillEntity_o *)gameObject;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)gameObject, &name, &detail, v56, 0);
      v62 = isForceRelease;
      if ( !isRelease && !isForceRelease )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        detail = LocalizationManager__Get((System_String_o *)StringLiteral_12224/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, 0);
        WrapControlText__textBBCodeAdjust(this->fields.skillAftdetailLb, detail, v87, 0, 0);
      }
      gameObject = this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_172;
      SkillIconComponent__Set_41023284((SkillIconComponent_o *)gameObject, v55, v56, 0);
    }
    v88 = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v42, v56, 0);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0);
    if ( !v88 )
      goto LABEL_172;
    UILabel__set_text(v88, (System_String_o *)gameObject, 0);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v42, v56, 0);
    if ( !beforeChargeTimeInfo )
      goto LABEL_172;
  }
  UnityEngine_GameObject__SetActive(beforeChargeTimeInfo, (int)gameObject > 0, 0);
  if ( entity && ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
  {
    gameObject = entity;
    if ( !entity )
      goto LABEL_172;
    name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v42->fields.id, name, 0);
  }
  gameObject = this->fields.skillBefTitleLb;
  if ( !gameObject )
LABEL_172:
    sub_1C372B4(gameObject);
  UILabel__set_text((UILabel_o *)gameObject, name, 0);
  if ( isDispLv )
  {
    skillBefTitleLb = this->fields.skillBefTitleLb;
    v90 = name;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v97 = LocalizationManager__Get((System_String_o *)StringLiteral_2012/*"APPEND_SKILL_RESULT_LV"*/, 0);
    v98 = v127;
    if ( isOpen )
      v98 = targetLv;
    v128 = v98;
    v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v128, v91, v92, v93, v94, v95, v96);
    v100 = System_String__Format(v97, v99, 0);
    gameObject = System_String__Concat_63561656(v90, v100, 0);
    if ( !skillBefTitleLb )
      goto LABEL_172;
    UILabel__set_text(skillBefTitleLb, (System_String_o *)gameObject, 0);
  }
  if ( v46 )
  {
    v101 = v46->fields.skillNum;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    v102 = ServantSkillStrengthStatus__GetIconCnt(v101, 0);
    if ( v55 >= 1 )
    {
      EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v123, svtId, v43, v55, 0);
      if ( EntityFromSkillId )
      {
        v104 = EntityFromSkillId->fields.skillNum;
        if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
        v102 = ServantSkillStrengthStatus__GetIconCnt(v104, 0);
      }
    }
  }
  else
  {
    v102 = 0;
  }
  skillBefForceReleaseLb = (UnityEngine_Object_o *)this->fields.skillBefForceReleaseLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillBefForceReleaseLb, 0, 0) )
  {
    gameObject = this->fields.skillBefForceReleaseLb;
    if ( !gameObject )
      goto LABEL_172;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_172;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v102 > 0 && v62, 0);
    gameObject = this->fields.skillBefForceReleaseLb;
    if ( !gameObject )
      goto LABEL_172;
    if ( v62 )
      v106 = str1;
    else
      v106 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v106, 0);
  }
  if ( v46 && v102 >= 1 )
  {
    StrengthStatus = ServantSkillEntity__GetStrengthStatus(v46, 0);
    v108 = v46->fields.skillNum;
    v109 = StrengthStatus;
    if ( v55 >= 1 )
    {
      v110 = ServantSkillMaster__getEntityFromSkillId(v123, svtId, v43, v55, 0);
      if ( v110 )
      {
        v111 = v110;
        v112 = ServantSkillEntity__GetStrengthStatus(v110, 0);
        v108 = v111->fields.skillNum;
        v109 = v112;
      }
    }
    servantSkillStrengthStatusBefore = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusBefore;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_servantSkillStrengthStatusBefore = &this->fields.servantSkillStrengthStatusBefore;
    if ( !UnityEngine_Object__op_Equality(servantSkillStrengthStatusBefore, 0, 0) )
      goto LABEL_161;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    gameObject = this->fields.skillBefTitleLb;
    if ( gameObject )
    {
      v115 = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
      v116 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      gameObject = BaseMonoBehaviour__createObject_41185212((BaseMonoBehaviour_o *)this, v115, v116, 0, 0);
      if ( gameObject )
      {
        v117 = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        *p_servantSkillStrengthStatusBefore = (struct ServantSkillStrengthStatus_o *)v117;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.servantSkillStrengthStatusBefore, (int32_t)v117, v118, v119);
LABEL_161:
        gameObject = *p_servantSkillStrengthStatusBefore;
        if ( !*p_servantSkillStrengthStatusBefore )
          goto LABEL_172;
        v120 = (UnityEngine_Vector2Int_o)0x1200000014LL;
        ServantSkillStrengthStatus__Set(
          (ServantSkillStrengthStatus_o *)gameObject,
          this->fields.skillBefTitleLb,
          v109,
          v108,
          20,
          -9,
          v120,
          280,
          this->fields.skillBefForceReleaseLb,
          0);
        goto LABEL_169;
      }
    }
    goto LABEL_172;
  }
  if ( !v102 && v62 )
  {
    v121 = this->fields.skillBefTitleLb;
    gameObject = System_String__Concat_63561656(name, str1, 0);
    if ( !v121 )
      goto LABEL_172;
    UILabel__set_text(v121, (System_String_o *)gameObject, 0);
  }
  gameObject = this->fields.skillBefTitleLb;
  if ( !gameObject )
    goto LABEL_172;
  UILabel__SetCondensedScale((UILabel_o *)gameObject, 280, 0, 0);
LABEL_169:
  gameObject = this->fields.skillBefdetailLb;
  if ( !gameObject )
    goto LABEL_172;
  WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, *((_DWORD *)gameObject + 106), 0, 0);
  v122 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v122, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v122, 0, 0, 0);
}


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
    sub_1C372B4(skillInfo);
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
  SkillUpResultWindowComponent_o *v13; // x0
  const MethodInfo *v14; // x2
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v16; // x0
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  SkillUpResultWindowComponent_o *v18; // x0
  const MethodInfo *v19; // x2
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v21; // x0
  System_String_o *text; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *v23; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C47095 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_6962/*"GET_SKILL_NAME"*/);
    sub_1C37058(&StringLiteral_1928/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/);
    sub_1C37058(&StringLiteral_2903/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/);
    byte_4C47095 = 1;
  }
  detail = 0;
  name = 0;
  text = 0;
  v23 = 0;
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_2903/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleOld, SkillEntity, 0);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v13, oldSkillId, v14);
  if ( !SkillEntity )
    goto LABEL_14;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &name, &detail, oldSkillLv, 0);
  skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_6962/*"GET_SKILL_NAME"*/, 0);
  SkillEntity = System_String__Format(v16, (Il2CppObject *)name, 0);
  if ( !skillChangeInfoNameOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoNameOld, SkillEntity, 0);
  SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailOld;
  if ( !SkillEntity )
    goto LABEL_14;
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, detail, SkillEntity[17].fields._stringLength, 0, 0);
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_1928/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleNow, SkillEntity, 0);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v18, nowSkillId, v19);
  if ( !SkillEntity
    || (SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &v23, &text, nowSkillLv, 0),
        skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow,
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_6962/*"GET_SKILL_NAME"*/, 0),
        SkillEntity = System_String__Format(v21, (Il2CppObject *)v23, 0),
        !skillChangeInfoNameNow)
    || (UILabel__set_text(skillChangeInfoNameNow, SkillEntity, 0),
        (SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailNow) == 0) )
  {
LABEL_14:
    sub_1C372B4(SkillEntity);
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
  void *Master_object; // x0
  TreasureDvcMaster_o *v16; // x26
  __int64 v17; // x27
  __int64 v18; // x28
  TreasureDvcEntity_o *v19; // x25
  TreasureDvcLvEntity_o *v20; // x22
  bool v21; // w26
  UILabel_o *currentNpLvLb; // x24
  UILabel_o *resNpLvLb; // x24
  UIWidget_o *v24; // x24
  SkillUpResultWindowComponent_c *v25; // x8
  System_String_o **v26; // x8
  UIWidget_o *v27; // x24
  SkillUpResultWindowComponent_c *v28; // x8
  UILabel_o *npBefDetailLb; // x20
  struct UILabel_o *v30; // x8
  System_String_o *v31; // x1
  System_String_o *DetalShort_42989840; // x21
  TreasureDvcLvEntity_o *v33; // x0
  int32_t mFontSize; // w2
  System_String_o *v35; // x1
  UILabel_o *resNpLvFirstLb; // x24
  struct UILabel_o *v37; // x20
  struct UILabel_o *v38; // x8
  UILabel_o *npAftDetailLb; // x20
  struct UILabel_o *v40; // x8
  int32_t v41; // [xsp+Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  lv = targetLv;
  if ( (byte_4C4708B & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C37058(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&SkillUpResultWindowComponent_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4708B = 1;
  }
  entity = 0;
  v41 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !usrSvtData )
    goto LABEL_69;
  v16 = (TreasureDvcMaster_o *)Master_object;
  v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v18;
  *(_QWORD *)&v44.fields.fakeValue = v17;
  Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v44, 0);
  if ( !v16 )
    goto LABEL_69;
  v19 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v16, (int32_t)Master_object, targetId, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !v19 || !Master_object )
    goto LABEL_69;
  v20 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v19->fields.id, targetLv, 0);
  Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v16,
                            &entity,
                            targetIdOld,
                            (const MethodInfo_33A10EC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    targetIdOld = 0;
  if ( !this->fields.npRubyNameLb )
    goto LABEL_69;
  UILabel__set_text(this->fields.npRubyNameLb, v19->fields.ruby, 0);
  Master_object = this->fields.npNameLb;
  if ( !Master_object )
    goto LABEL_69;
  v21 = kind != 5;
  UILabel__set_text((UILabel_o *)Master_object, v19->fields.name, 0);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(usrSvtData, this->fields.npNameLb, this->fields.npRubyNameLb, 0);
  v41 = targetLvOld;
  if ( targetIdOld > 0 || kind == 5 )
  {
    Master_object = this->fields.npRankInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v21, 0);
    Master_object = this->fields.npLvInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = this->fields.npLvFirstInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = this->fields.npChangeSp;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v21, 0);
    Master_object = this->fields.npRankupBeforeLb;
    if ( !Master_object )
      goto LABEL_69;
    v26 = entity ? (System_String_o **)&entity[2].monitor : (System_String_o **)&StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)Master_object, *v26, 0);
    Master_object = this->fields.npRankupAfterLb;
    if ( !Master_object )
      goto LABEL_69;
    UILabel__set_text((UILabel_o *)Master_object, v19->fields.rank, 0);
    Master_object = this->fields.npRankupAfterLb;
    if ( !Master_object )
      goto LABEL_69;
    Master_object = UnityEngine_Component__GetComponent_object_(
                      (UnityEngine_Component_o *)Master_object,
                      (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v27 = (UIWidget_o *)Master_object;
    v28 = SkillUpResultWindowComponent_TypeInfo;
    if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v28 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v27 )
      goto LABEL_69;
    UIWidget__set_color(v27, v28->static_fields->COLOR_VAL, 0);
    v41 = targetLvOld;
    if ( !v20 )
      goto LABEL_61;
  }
  else if ( targetLvOld <= 0 )
  {
    Master_object = this->fields.npRankInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = this->fields.npLvInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = this->fields.npLvFirstInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = this->fields.npChangeSp;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    resNpLvFirstLb = this->fields.resNpLvFirstLb;
    Master_object = System_Int32__ToString((int32_t)&lv, 0);
    if ( !resNpLvFirstLb )
      goto LABEL_69;
    UILabel__set_text(resNpLvFirstLb, (System_String_o *)Master_object, 0);
    if ( !v20 )
    {
LABEL_61:
      Master_object = this->fields.npBefDetailLb;
      if ( Master_object )
      {
        UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
        Master_object = this->fields.npAftDetailLb;
        if ( Master_object )
        {
          v31 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_64;
        }
      }
      goto LABEL_69;
    }
  }
  else
  {
    currentNpLvLb = this->fields.currentNpLvLb;
    Master_object = System_Int32__ToString((int32_t)&v41, 0);
    if ( !currentNpLvLb )
      goto LABEL_69;
    UILabel__set_text(currentNpLvLb, (System_String_o *)Master_object, 0);
    resNpLvLb = this->fields.resNpLvLb;
    Master_object = System_Int32__ToString((int32_t)&lv, 0);
    if ( !resNpLvLb )
      goto LABEL_69;
    UILabel__set_text(resNpLvLb, (System_String_o *)Master_object, 0);
    Master_object = this->fields.resNpLvLb;
    if ( !Master_object )
      goto LABEL_69;
    Master_object = UnityEngine_Component__GetComponent_object_(
                      (UnityEngine_Component_o *)Master_object,
                      (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v24 = (UIWidget_o *)Master_object;
    v25 = SkillUpResultWindowComponent_TypeInfo;
    if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v25 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v24 )
      goto LABEL_69;
    UIWidget__set_color(v24, v25->static_fields->COLOR_VAL, 0);
    Master_object = this->fields.npRankInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = this->fields.npLvInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = this->fields.npLvFirstInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    if ( !v20 )
      goto LABEL_61;
  }
  if ( kind == 5 )
  {
    npBefDetailLb = this->fields.npBefDetailLb;
    Master_object = TreasureDvcLvEntity__getDetalShort_42989840(v20, lv, 0);
    v30 = this->fields.npBefDetailLb;
    if ( v30 )
    {
      WrapControlText__textAdjust(npBefDetailLb, (System_String_o *)Master_object, v30->fields.mFontSize, 0, 0);
      Master_object = this->fields.npAftDetailLb;
      if ( Master_object )
      {
        v31 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_64:
        UILabel__set_text((UILabel_o *)Master_object, v31, 0);
        return;
      }
    }
LABEL_69:
    sub_1C372B4(Master_object);
  }
  if ( targetIdOld < 1 )
  {
    v37 = this->fields.npBefDetailLb;
    Master_object = TreasureDvcLvEntity__getDetalShort_42989840(v20, v41, 0);
    v38 = this->fields.npBefDetailLb;
    if ( !v38 )
      goto LABEL_69;
    mFontSize = v38->fields.mFontSize;
    v35 = (System_String_o *)Master_object;
    Master_object = v37;
  }
  else
  {
    DetalShort_42989840 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !Master_object )
      goto LABEL_69;
    v33 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, targetIdOld, targetLvOld, 0);
    if ( v33 )
      DetalShort_42989840 = TreasureDvcLvEntity__getDetalShort_42989840(v33, v41, 0);
    Master_object = this->fields.npBefDetailLb;
    if ( !Master_object )
      goto LABEL_69;
    mFontSize = *((_DWORD *)Master_object + 106);
    v35 = DetalShort_42989840;
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)Master_object, v35, mFontSize, 0, 0);
  npAftDetailLb = this->fields.npAftDetailLb;
  Master_object = TreasureDvcLvEntity__getDetalShort_42989840(v20, lv, 0);
  v40 = this->fields.npAftDetailLb;
  if ( !v40 )
    goto LABEL_69;
  WrapControlText__textBBCodeAdjust(npAftDetailLb, (System_String_o *)Master_object, v40->fields.mFontSize, 0, 0);
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
  System_Collections_Generic_IEnumerable_T__o *heroineNpChangeArrowSprites; // x20
  SkillUpResultWindowComponent___c_c *v11; // x0
  System_Action_object__o *_9__90_0; // x21
  Il2CppObject *v13; // x22
  struct SkillUpResultWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *heroineNpChangeExtraArrowSprite; // x20
  UISprite_o *v18; // x19

  if ( (byte_4C4708F & 1) == 0 )
  {
    sub_1C37058(&System_Action_UISprite__TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SkillUpResultWindowComponent___c__SetupSpecialNpChange_b__90_0__);
    sub_1C37058(&SkillUpResultWindowComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_3841/*"COSTUME_CHANGE_NOBLE_PHANTASM_TITLE"*/);
    sub_1C37058(&StringLiteral_20302/*"img_arrow_change"*/);
    byte_4C4708F = 1;
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
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3841/*"COSTUME_CHANGE_NOBLE_PHANTASM_TITLE"*/, 0);
      v9 = System_String__Format(v8, (Il2CppObject *)svtCostumeEnt->fields.name, 0);
      if ( !v7 )
        sub_1C372B4(v9);
      UILabel__set_text(v7, v9, 0);
    }
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.heroineNpChangeArrowSprites, 0) )
    {
      heroineNpChangeArrowSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.heroineNpChangeArrowSprites;
      v11 = SkillUpResultWindowComponent___c_TypeInfo;
      if ( !SkillUpResultWindowComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent___c_TypeInfo);
        v11 = SkillUpResultWindowComponent___c_TypeInfo;
      }
      _9__90_0 = (System_Action_object__o *)v11->static_fields->__9__90_0;
      if ( !_9__90_0 )
      {
        if ( !v11->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v11);
          v11 = SkillUpResultWindowComponent___c_TypeInfo;
        }
        v13 = (Il2CppObject *)v11->static_fields->__9;
        _9__90_0 = (System_Action_object__o *)sub_1C372A4(System_Action_UISprite__TypeInfo);
        System_Action_object____ctor(
          _9__90_0,
          v13,
          Method_SkillUpResultWindowComponent___c__SetupSpecialNpChange_b__90_0__,
          0);
        static_fields = SkillUpResultWindowComponent___c_TypeInfo->static_fields;
        static_fields->__9__90_0 = (struct System_Action_UISprite__o *)_9__90_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__90_0, (int32_t)_9__90_0, v15, v16);
      }
      BasicHelper__ForEach_object_(
        heroineNpChangeArrowSprites,
        (System_Action_T__o *)_9__90_0,
        (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_UISprite___);
    }
    heroineNpChangeExtraArrowSprite = (UnityEngine_Object_o *)this->fields.heroineNpChangeExtraArrowSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(heroineNpChangeExtraArrowSprite, 0, 0) )
    {
      v18 = this->fields.heroineNpChangeExtraArrowSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetDownloadCommonSprite(v18, (System_String_o *)StringLiteral_20302/*"img_arrow_change"*/, 0);
    }
  }
}


void SkillUpResultWindowComponent__SetupWindowBg(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *windowBgSprite; // x20
  UISprite_o *v4; // x19

  if ( (byte_4C4708E & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_20578/*"img_skillwindow_sp"*/);
    byte_4C4708E = 1;
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
      AtlasManager__SetDownloadCommonSprite(v4, (System_String_o *)StringLiteral_20578/*"img_skillwindow_sp"*/, 0);
    }
  }
}


void SkillUpResultWindowComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C47099 & 1) == 0 )
  {
    sub_1C37058(&SkillUpResultWindowComponent___c_TypeInfo);
    byte_4C47099 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(SkillUpResultWindowComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillUpResultWindowComponent___c_TypeInfo->static_fields->__9 = (struct SkillUpResultWindowComponent___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)SkillUpResultWindowComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SkillUpResultWindowComponent___c___ctor(SkillUpResultWindowComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SkillUpResultWindowComponent___c___SetupSpecialNpChange_b__90_0(
        SkillUpResultWindowComponent___c_o *this,
        UISprite_o *sp,
        const MethodInfo *method)
{
  if ( (byte_4C4709A & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&StringLiteral_20362/*"img_combine_arrow_sp"*/);
    byte_4C4709A = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(sp, (System_String_o *)StringLiteral_20362/*"img_combine_arrow_sp"*/, 0);
}


void SkillUpResultWindowComponent___c__DisplayClass95_0___ctor(
        SkillUpResultWindowComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SkillUpResultWindowComponent___c__DisplayClass95_0___CloseToNext_b__0(
        SkillUpResultWindowComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}