void SkillUpResultWindowComponent___cctor(const MethodInfo *method)
{
  if ( (byte_596A1AD & 1) == 0 )
  {
    sub_2213A60(&SkillUpResultWindowComponent_TypeInfo);
    byte_596A1AD = 1;
  }
  *SkillUpResultWindowComponent_TypeInfo->static_fields = (struct SkillUpResultWindowComponent_StaticFields)xmmword_E9D290;
}


void SkillUpResultWindowComponent___ctor(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0
  int v5; // w8

  if ( (byte_596A1AC & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A1AC = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.svtTransformCount = 1;
  v5 = *(&v4->_2.cctor_finished + 1);
  *(_QWORD *)&this->fields.skillInfoOffset = 0x40C00000C1700000LL;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SkillUpResultWindowComponent__Close(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x0
  System_Action_o *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_596A1A5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SkillUpResultWindowComponent_EndClose__);
    byte_596A1A5 = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0);
  SkillUpResultWindowComponent__Close_37619876(this, v4, v5);
}


void SkillUpResultWindowComponent__CloseToNext(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_o *v14; // x20

  if ( (byte_596A1A7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SkillUpResultWindowComponent___c__DisplayClass104_0__CloseToNext_b__0__);
    sub_2213A60(&SkillUpResultWindowComponent___c__DisplayClass104_0_TypeInfo);
    byte_596A1A7 = 1;
  }
  v5 = sub_2213CCC(SkillUpResultWindowComponent___c__DisplayClass104_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_SkillUpResultWindowComponent___c__DisplayClass104_0__CloseToNext_b__0__,
    0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v14, 0);
}


void SkillUpResultWindowComponent__Close_37619876(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_596A1A6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SkillUpResultWindowComponent_EndClose__);
    byte_596A1A6 = 1;
  }
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
    sub_2213CDC(gameObject, v4);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void SkillUpResultWindowComponent__EndOpen(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *openCallBack; // x19
  MissionNaviTransitionBoardItem_o *p_openCallBack; // x0

  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    p_openCallBack = (MissionNaviTransitionBoardItem_o *)&this->fields.openCallBack;
    p_openCallBack->klass = 0;
    sub_2213A04(p_openCallBack, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_596A1A9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A1A9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantSkillMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v9);
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

  if ( (byte_596A1A8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A1A8 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v5);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    skillId,
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  return (SkillEntity_o *)entity;
}


void SkillUpResultWindowComponent__Init(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
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
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *costumeChangeLabel; // x23
  System_String_o *v18; // x0

  if ( (byte_596A1AB & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__);
    byte_596A1AB = 1;
  }
  v9 = Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_2213A78(Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__);
  v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
  v18 = LocalizationManager__Get(formatKey, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v18, (Il2CppObject *)costumeName, 0);
  if ( !costumeChangeLabel )
LABEL_13:
    sub_2213CDC(gameObject, v12);
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
  int32_t state; // w8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Text_StringBuilder_o *v21; // x20
  int32_t SvtId; // w22
  __int64 v23; // x2
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  System_Collections_Generic_List_object__o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *current; // x23
  System_String_o *v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v36; // x0
  int v37; // w23
  __int64 v38; // x2
  __int64 v39; // x2
  UILabel_o *friendshipLabel; // x22
  UnityEngine_GameObject_o *v41; // x20
  UILabel_o *friendshipCurrentLvLabel; // x20
  UILabel_o *friendshipResultLvLabel; // x20
  __int64 v44; // x2
  UIWidget_o *v45; // x20
  struct UILabel_o *v46; // x8
  System_Action_o *v47; // x20
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+0h] [xbp-90h] BYREF
  int32_t FriendShipRank; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-70h] BYREF
  int32_t oldFriendShipRanka; // [xsp+3Ch] [xbp-54h] BYREF

  oldFriendShipRanka = oldFriendShipRank;
  if ( (byte_596A1A1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_2213A60(&Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__);
    sub_2213A60(&SkillUpResultWindowComponent_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_11594/*"RESULT_BOUNDS_OPENQUEST"*/);
    sub_2213A60(&StringLiteral_11596/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/);
    sub_2213A60(&StringLiteral_11588/*"RESULT_BOUNDS_GETVOICE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A1A1 = 1;
  }
  state = this->fields.state;
  memset(&v50, 0, sizeof(v50));
  FriendShipRank = 0;
  if ( !state )
  {
    v10 = Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_2213A78(Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__);
    v11 = (System_Reflection_MethodBase_o *)sub_2213A44(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v14);
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
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.openCallBack,
              (int32_t)callback,
              v15,
              v16,
              v17,
              v18,
              v19,
              v20);
            gameObject = (UnityEngine_GameObject_o *)this->fields.friendshipLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
              v21 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v21, 0);
              if ( usrSvtData )
              {
                SvtId = UserServantEntity__getSvtId(usrSvtData, 0);
                gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  MasterData_object = DataManager__GetMasterData_object_(
                                        (DataManager_o *)gameObject,
                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13, v23);
                  if ( !byte_5969EF2 )
                  {
                    sub_2213A60(&NetworkManager_TypeInfo);
                    byte_5969EF2 = 1;
                  }
                  gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13, v23);
                    gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                  }
                  if ( MasterData_object )
                  {
                    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                         (UserServantCollectionMaster_o *)MasterData_object,
                                         *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 64),
                                         SvtId,
                                         0);
                    gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                    if ( gameObject )
                    {
                      v26 = (System_Collections_Generic_List_object__o *)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                                                                           (clsQuestCheck_o *)gameObject,
                                                                           SvtId,
                                                                           oldFriendShipRank,
                                                                           8,
                                                                           0);
                      if ( v26 )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v48,
                          v26,
                          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
                        v50 = v48;
                        v48.fields._list = 0;
                        *(_QWORD *)&v48.fields._index = &v50;
                        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v50,
                                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
                        {
                          current = v50.fields._current;
                          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
                          v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11594/*"RESULT_BOUNDS_OPENQUEST"*/, 0);
                          if ( !current )
                            sub_2213CDC(v32, v33);
                          v34 = v32;
                          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0);
                          v36 = System_String__Format(v34, QuestName, 0);
                          if ( !v21 )
                            sub_2213CDC(v36, v36);
                          System_Text_StringBuilder__AppendLine_75736300(v21, v36, 0);
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v50,
                          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
                      }
                      v37 = oldFriendShipRanka;
                      if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v27, v28);
                      gameObject = (UnityEngine_GameObject_o *)ServantCommentManager__IsOpenByServantFriendShip(
                                                                 SvtId,
                                                                 v37,
                                                                 0);
                      if ( ((unsigned __int8)gameObject & 1) != 0 )
                      {
                        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v38);
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_11596/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/,
                                                                   0);
                        if ( !v21 )
                          goto LABEL_60;
                        gameObject = (UnityEngine_GameObject_o *)System_Text_StringBuilder__AppendLine_75736300(
                                                                   v21,
                                                                   (System_String_o *)gameObject,
                                                                   0);
                      }
                      if ( !EntityDefinitely )
                        goto LABEL_60;
                      gameObject = (UnityEngine_GameObject_o *)ServantVoiceMaster__isOpenByServantFriendShip(
                                                                 SvtId,
                                                                 EntityDefinitely->fields.maxLimitCount,
                                                                 v37,
                                                                 0);
                      if ( ((unsigned __int8)gameObject & 1) != 0 )
                      {
                        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v39);
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_11588/*"RESULT_BOUNDS_GETVOICE"*/,
                                                                   0);
                        if ( !v21 )
                          goto LABEL_60;
                        System_Text_StringBuilder__AppendLine_75736300(v21, (System_String_o *)gameObject, 0);
                      }
                      else if ( !v21 )
                      {
                        goto LABEL_60;
                      }
                      friendshipLabel = this->fields.friendshipLabel;
                      gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v21->klass->vtable._3_ToString.methodPtr)(
                                                                 v21,
                                                                 v21->klass->vtable._3_ToString.method);
                      if ( friendshipLabel )
                      {
                        UILabel__set_text(friendshipLabel, (System_String_o *)gameObject, 0);
                        gameObject = this->fields.friendshipLvInfo;
                        if ( gameObject )
                        {
                          v41 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
                          gameObject = (UnityEngine_GameObject_o *)UserServantCollectionEntity__getFriendShipRank(
                                                                     EntityDefinitely,
                                                                     0);
                          if ( v41 )
                          {
                            UnityEngine_GameObject__SetActive(v41, (int)gameObject > v37, 0);
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
                                                                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
                                  v45 = (UIWidget_o *)gameObject;
                                  if ( !*(&SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo, v13, v44);
                                  if ( v45 )
                                  {
                                    UIWidget__set_color(
                                      v45,
                                      SkillUpResultWindowComponent_TypeInfo->static_fields->COLOR_VAL,
                                      0);
                                    v46 = this->fields.friendshipLabel;
                                    if ( v46 )
                                    {
                                      if ( !System_String__IsNullOrEmpty(v46->fields.mText, 0) )
                                      {
LABEL_58:
                                        v47 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v47,
                                          (Il2CppObject *)this,
                                          Method_SkillUpResultWindowComponent_EndOpen__,
                                          0);
                                        BaseDialog__Open((BaseDialog_o *)this, v47, 0, 0, 0);
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
    sub_2213CDC(gameObject, v13);
  }
}


void SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *addManager,
        int32_t index,
        System_String_o *titleText,
        bool isRankUp,
        UserServantEntity_o *userSvtData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x7

  if ( (byte_596A19E & 1) == 0 )
  {
    sub_2213A60(&Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__);
    byte_596A19E = 1;
  }
  v15 = Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_2213A78(Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__);
  v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v19);
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
    sub_2213CDC(gameObject, v18);
  }
  NpInfoAddResultComponent__SetDisplay(
    (NpInfoAddResultComponent_o *)gameObject,
    addManager,
    index,
    titleText,
    isRankUp,
    this->fields.svtTransformCount,
    userSvtData,
    v20);
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

  if ( (byte_596A19C & 1) == 0 )
  {
    sub_2213A60(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__);
    byte_596A19C = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_2213A78(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_2213A44(v13, v13[4]);
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
    sub_2213CDC(gameObject, v16);
  }
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, v19);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenNpUpResultInfo_37613224(
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
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *heroineNpChangeInfoExtra; // x23
  const MethodInfo *v30; // x3

  if ( (byte_596A19D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___91822888);
    byte_596A19D = 1;
  }
  v18 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___91822888;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___91822888 + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_2213A78(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___91822888);
  v19 = (System_Reflection_MethodBase_o *)sub_2213A44(v18, v18[4]);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
    if ( UnityEngine_Object__op_Inequality(heroineNpChangeInfoExtra, 0, 0) )
    {
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.heroineNpChangeInfoExtra, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoExtra;
      if ( gameObject )
      {
        HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, exTargetId, exTargetLv, v30);
        goto LABEL_22;
      }
LABEL_23:
      sub_2213CDC(gameObject, v21);
    }
  }
LABEL_22:
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenNpUpResultInfo_37614792(
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
  int32_t state; // w8
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  _BOOL4 v30; // w27
  _BOOL4 v31; // w8
  bool v32; // w28
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  bool v35; // w1
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x7
  const MethodInfo *v38; // x3
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x22
  __int64 v42; // x23
  int32_t v43; // w22
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  struct System_String_array *titles; // x8
  System_String_o *titleText; // x23
  const MethodInfo *v47; // x7
  System_Action_o *v48; // x20
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_596A19F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_2213A60(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___91822896);
    byte_596A19F = 1;
  }
  state = this->fields.state;
  transformInfo = 0;
  if ( !state )
  {
    v19 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___91822896;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___91822896 + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_2213A78(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___91822896);
    v20 = (System_Reflection_MethodBase_o *)sub_2213A44(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v23);
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
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.openCallBack,
              (int32_t)callback,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29);
            if ( usrSvtData )
            {
              this->fields.svtTransformCount = UserServantEntity__GetTransformCount(usrSvtData, 1, 0);
              if ( addManager )
                v30 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(addManager, 0) > 0;
              else
                v30 = 0;
              v31 = UserServantEntity__IsHeroine(usrSvtData, 0) && targetLvOld != targetLv;
              v32 = targetIdOld != targetId && v31;
              if ( targetIdOld == targetId && UserServantEntity__IsHeroine(usrSvtData, 0) )
                targetIdOld = 0;
              gameObject = this->fields.npInfoAddRoot;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, v30, 0);
                gameObject = this->fields.npInfoNormalRoot;
                if ( v32 )
                {
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                    gameObject = this->fields.npInfoHeroineNpChangeRoot;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                      gameObject = this->fields.npInfoNpChangeRoot;
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive(gameObject, kind == 18, 0);
                        gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld;
                        if ( gameObject )
                        {
                          HeroineNpChangeInfoComponent__Setup(
                            (HeroineNpChangeInfoComponent_o *)gameObject,
                            targetIdOld,
                            targetLvOld,
                            v33);
                          gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow;
                          if ( gameObject )
                          {
                            HeroineNpChangeInfoComponent__Setup(
                              (HeroineNpChangeInfoComponent_o *)gameObject,
                              targetId,
                              targetLv,
                              v34);
LABEL_58:
                            v48 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                            System_Action___ctor(
                              v48,
                              (Il2CppObject *)this,
                              Method_SkillUpResultWindowComponent_EndOpen__,
                              0);
                            BaseDialog__Open((BaseDialog_o *)this, v48, 0, 0, 0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
                else if ( gameObject )
                {
                  v35 = kind != 18 && !v30;
                  UnityEngine_GameObject__SetActive(gameObject, v35, 0);
                  gameObject = this->fields.npInfoHeroineNpChangeRoot;
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                    gameObject = this->fields.npInfoNpChangeRoot;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, kind == 18, 0);
                      if ( kind == 18 )
                      {
                        gameObject = (UnityEngine_GameObject_o *)this->fields.npChangeInfoOld;
                        if ( gameObject )
                        {
                          HeroineNpChangeInfoComponent__SetupForNpChange(
                            (HeroineNpChangeInfoComponent_o *)gameObject,
                            targetIdOld,
                            targetLvOld,
                            v36);
                          gameObject = (UnityEngine_GameObject_o *)this->fields.npChangeInfoNow;
                          if ( gameObject )
                          {
                            HeroineNpChangeInfoComponent__SetupForNpChange(
                              (HeroineNpChangeInfoComponent_o *)gameObject,
                              targetId,
                              targetLv,
                              v38);
                            goto LABEL_58;
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
                            v37);
                          goto LABEL_58;
                        }
                        gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0);
                        if ( gameObject )
                        {
                          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                          if ( gameObject )
                          {
                            gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       gameObject,
                                                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                            if ( gameObject )
                            {
                              UIWidget__set_height((UIWidget_o *)gameObject, 300, 0);
                              if ( UserServantEntity__get_IsSaveTransformServant(usrSvtData, 0) )
                              {
                                v41 = *(_QWORD *)&usrSvtData->fields.transformVal.fields.currentCryptoKey;
                                v42 = *(_QWORD *)&usrSvtData->fields.transformVal.fields.fakeValue;
                                if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                                  j_il2cpp_runtime_class_init_0(
                                    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    v39,
                                    v40);
                                *(_QWORD *)&v50.fields.currentCryptoKey = v41;
                                *(_QWORD *)&v50.fields.fakeValue = v42;
                                v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v50, 0);
                              }
                              else
                              {
                                v43 = 0;
                              }
                              gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformedServantInfo(
                                                                         usrSvtData,
                                                                         &transformInfo,
                                                                         v43,
                                                                         0);
                              if ( !addManager )
                                goto LABEL_53;
                              tdAddEntity_k__BackingField = addManager->fields._tdAddEntity_k__BackingField;
                              if ( !tdAddEntity_k__BackingField )
                                goto LABEL_53;
                              titles = tdAddEntity_k__BackingField->fields.titles;
                              if ( !titles )
                                goto LABEL_53;
                              if ( !LODWORD(titles->max_length) )
                                sub_2213CE4(gameObject);
                              titleText = titles->m_Items[0];
                              if ( !titleText )
                              {
LABEL_53:
                                if ( !transformInfo )
                                  goto LABEL_60;
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
                                    addManager,
                                    v43,
                                    titleText,
                                    kind == 8,
                                    this->fields.svtTransformCount,
                                    usrSvtData,
                                    v47);
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
LABEL_60:
    sub_2213CDC(gameObject, v22);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  __int64 v20; // x20
  __int64 v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *Entity; // x21
  UILabel_o *powerupLabel; // x20
  System_Action_o *v26; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_596A1A2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_2213A60(&Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__);
    sub_2213A60(&StringLiteral_11595/*"RESULT_BOUNDS_POWERUP"*/);
    byte_596A1A2 = 1;
  }
  if ( !this->fields.state )
  {
    v7 = Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_2213A78(Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__);
    v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.openCallBack,
      (int32_t)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !usrSvtData )
      goto LABEL_20;
    v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    v21 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v18);
    *(_QWORD *)&v27.fields.currentCryptoKey = v21;
    *(_QWORD *)&v27.fields.fakeValue = v20;
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v27, 0);
    if ( !v19 )
      goto LABEL_20;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v19,
               (int32_t)gameObject,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    powerupLabel = this->fields.powerupLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11595/*"RESULT_BOUNDS_POWERUP"*/, 0);
    if ( !Entity
      || (gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)Entity[4].monitor,
                                                     0),
          !powerupLabel) )
    {
LABEL_20:
      sub_2213CDC(gameObject, v10);
    }
    UILabel__set_text(powerupLabel, (System_String_o *)gameObject, 0);
    v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0, 0);
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
  __int64 v14; // x1
  __int64 v15; // x2
  UILabel_o *costumeChangeLabel; // x21
  Il2CppObject *v17; // x22
  System_String_o *v18; // x0

  if ( (byte_596A199 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__);
    sub_2213A60(&StringLiteral_3981/*"COSTUME_CHANGE_DESCRIPTION"*/);
    byte_596A199 = 1;
  }
  v7 = Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_2213A78(Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__);
  v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
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
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                             svtId,
                                             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_16;
  BattleName = ServantEntity__getBattleName((ServantEntity_o *)gameObject, 0, -1, 0);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  v17 = (Il2CppObject *)BattleName;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3981/*"COSTUME_CHANGE_DESCRIPTION"*/, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v18, v17, 0);
  if ( !costumeChangeLabel )
LABEL_16:
    sub_2213CDC(gameObject, v10);
  UILabel__set_text(costumeChangeLabel, (System_String_o *)gameObject, 0);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenSkillChangeMessage_37611424(
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x2
  Il2CppObject *BattleName; // x22
  UILabel_o *costumeChangeLabel; // x23
  System_String_o *v20; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596A19A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___91822920);
    byte_596A19A = 1;
  }
  v9 = Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___91822920;
  entity = 0;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___91822920 + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_2213A78(Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___91822920);
  v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
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
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v16);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !gameObject )
    goto LABEL_20;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
         &entity,
         svtId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    gameObject = (UnityEngine_GameObject_o *)entity;
    if ( !entity )
      goto LABEL_20;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)entity, 0, -1, 0);
  }
  else
  {
    BattleName = **(Il2CppObject ***)(qword_5984390 + 184);
  }
  costumeChangeLabel = this->fields.costumeChangeLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v17);
  v20 = LocalizationManager__Get(formatKey, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v20, BattleName, 0);
  if ( !costumeChangeLabel )
LABEL_20:
    sub_2213CDC(gameObject, v12);
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
  __int64 v21; // x1
  __int64 v22; // x2
  UILabel_o *skillChangeInfoTitle; // x26
  System_String_o *v24; // x0
  const MethodInfo *v25; // x5

  if ( (byte_596A19B & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__);
    sub_2213A60(&StringLiteral_3988/*"COSTUME_CHANGE_SKILL_TITLE"*/);
    byte_596A19B = 1;
  }
  v15 = Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_2213A78(Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__);
  v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v15, v15[4]);
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3988/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v24, (Il2CppObject *)costumeName, 0);
  if ( !skillChangeInfoTitle )
LABEL_13:
    sub_2213CDC(gameObject, v18);
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)gameObject, 0);
  SkillUpResultWindowComponent__SetSkillInfo(this, oldSkillId, oldSkillLv, nowSkillId, nowSkillLv, v25);
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
        System_String_o *multiSkillDisplayTitle,
        bool isForceRelease,
        UnityEngine_Color_o multiSkillDisplayTitleColor,
        UnityEngine_Color_o multiSkillDisplayTitleBgColor,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  float v22; // s12
  float v23; // s13
  float v25; // s14
  float v26; // s15
  int32_t state; // w8
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x2
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  char v46; // w21
  __int64 v47; // x2
  __int64 v48; // x2
  UnityEngine_Object_o *multiSkillDisplayTitleBgSprite; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // x21
  __int64 v51; // x2
  int max_length; // w8
  SkillEntity_o *v53; // x29
  int32_t v54; // w24
  char *v55; // x10
  UnityEngine_GameObject_o *v56; // x20
  ServantSkillEntity_o *v57; // x27
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w22
  __int64 v59; // x2
  int32_t v60; // w20
  int32_t skillNum; // w22
  int32_t IconCnt; // w22
  bool v63; // w26
  UnityEngine_GameObject_o *skillAfter; // x8
  bool v65; // w22
  ServantSkillMaster_o *v66; // x26
  UILabel_o *skillBefChargeTimeLb; // x21
  UnityEngine_GameObject_o *beforeChargeTimeInfo; // x21
  bool v69; // w25
  UILabel_o *skillAftChargeTimeLb; // x28
  UnityEngine_GameObject_o *AfterChargeTimeInfo; // x28
  __int64 v72; // x2
  System_String_o *v73; // x28
  System_String_o *v74; // x20
  Il2CppObject *v75; // x0
  System_String_o *v76; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  UnityEngine_Object_o *skillAftForceReleaseLb; // x28
  bool v80; // w0
  __int64 v81; // x2
  System_String_o *v82; // x1
  UnityEngine_Object_o *servantSkillStrengthStatusAfter; // x22
  __int64 v84; // x2
  System_String_o *PATH; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  ServantSkillStrengthStatus_o *v94; // x22
  UILabel_o *skillAftTitleLb; // x28
  int32_t v96; // w20
  UILabel_o *v97; // x22
  __int64 v98; // x2
  System_String_o *v99; // x1
  UILabel_o *skillAfterDetailScrollLabel; // x0
  UILabel_o *v101; // x21
  __int64 v102; // x1
  __int64 v103; // x2
  UILabel_o *skillBefTitleLb; // x21
  System_String_o *v105; // x22
  System_String_o *v106; // x20
  int32_t v107; // w9
  Il2CppObject *v108; // x0
  System_String_o *v109; // x0
  int32_t v110; // w21
  int32_t v111; // w21
  ServantSkillEntity_o *EntityFromSkillId; // x0
  int32_t v113; // w21
  UnityEngine_Object_o *skillBefForceReleaseLb; // x22
  System_String_o *v115; // x1
  int32_t StrengthStatus; // w0
  __int64 v117; // x1
  __int64 v118; // x2
  int32_t v119; // w21
  int32_t v120; // w22
  ServantSkillEntity_o *v121; // x0
  ServantSkillEntity_o *v122; // x20
  int32_t v123; // w0
  UnityEngine_Object_o *servantSkillStrengthStatusBefore; // x23
  struct ServantSkillStrengthStatus_o **p_servantSkillStrengthStatusBefore; // x20
  __int64 v126; // x2
  System_String_o *v127; // x23
  UnityEngine_Transform_o *v128; // x0
  Il2CppObject *v129; // x0
  System_String_o *v130; // x2
  System_String_o *v131; // x3
  int32_t v132; // w4
  int32_t v133; // w5
  bool v134; // w6
  bool v135; // w7
  UILabel_o *v136; // x20
  __int64 v137; // x21
  int32_t v138; // w20
  System_Action_o *v139; // x20
  int v140; // [xsp+20h] [xbp-F0h]
  int32_t v141; // [xsp+24h] [xbp-ECh]
  ServantSkillMaster_o *v142; // [xsp+28h] [xbp-E8h]
  int32_t lv; // [xsp+34h] [xbp-DCh]
  System_String_o *str1; // [xsp+38h] [xbp-D8h]
  int32_t svtId; // [xsp+44h] [xbp-CCh]
  int skillLv; // [xsp+48h] [xbp-C8h]
  int32_t v147; // [xsp+50h] [xbp-C0h] BYREF
  int32_t EffectChargeTurn; // [xsp+54h] [xbp-BCh] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+58h] [xbp-B8h] BYREF
  System_String_o *detail; // [xsp+60h] [xbp-B0h] BYREF
  System_String_o *name; // [xsp+68h] [xbp-A8h] BYREF
  UnityEngine_Color_o v152; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v153; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = multiSkillDisplayTitleBgColor.fields.a;
  b = multiSkillDisplayTitleBgColor.fields.b;
  g = multiSkillDisplayTitleBgColor.fields.g;
  r = multiSkillDisplayTitleBgColor.fields.r;
  v22 = multiSkillDisplayTitleColor.fields.a;
  v23 = multiSkillDisplayTitleColor.fields.b;
  v25 = multiSkillDisplayTitleColor.fields.g;
  v26 = multiSkillDisplayTitleColor.fields.r;
  if ( (byte_596A198 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantSkillStrengthStatus_TypeInfo);
    sub_2213A60(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_2213A60(&Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__);
    sub_2213A60(&StringLiteral_2107/*"APPEND_SKILL_RESULT_AFTER_LV"*/);
    sub_2213A60(&StringLiteral_12743/*"SKILL_COMBINE_FORCE_RELEASE_NAME"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_12740/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/);
    sub_2213A60(&StringLiteral_2108/*"APPEND_SKILL_RESULT_LV"*/);
    byte_596A198 = 1;
  }
  state = this->fields.state;
  detail = 0;
  name = 0;
  entity = 0;
  EffectChargeTurn = 0;
  if ( state )
    return;
  v35 = Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__ + 83) & 2) != 0 )
    v35 = (_QWORD *)sub_2213A78(Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__);
  v36 = (System_Reflection_MethodBase_o *)sub_2213A44(v35, v35[4]);
  OverwriteAssetSoundName__PlaySystemSe(v36, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_175;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v39);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.skillInfo, 0);
  if ( !gameObject )
    goto LABEL_175;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_175;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.skillInfo;
  if ( !gameObject )
    goto LABEL_175;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.openCallBack = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallBack,
    (int32_t)callback,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  gameObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(multiSkillDisplayTitle, 0);
  if ( !this->fields.multiSkillDisplayTitleLabel )
    goto LABEL_175;
  v46 = (char)gameObject;
  gameObject = UnityEngine_Component__get_gameObject(
                 (UnityEngine_Component_o *)this->fields.multiSkillDisplayTitleLabel,
                 0);
  if ( !gameObject )
    goto LABEL_175;
  UnityEngine_GameObject__SetActive(gameObject, (v46 ^ 1) & 1, 0);
  if ( (v46 & 1) == 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.multiSkillDisplayTitleLabel;
    if ( !gameObject )
      goto LABEL_175;
    UILabel__set_text((UILabel_o *)gameObject, multiSkillDisplayTitle, 0);
    if ( (float)((float)(v22 * v22) + (float)((float)(v23 * v23) + (float)((float)(v26 * v26) + (float)(v25 * v25)))) >= 1.0e-10 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.multiSkillDisplayTitleLabel;
      if ( !gameObject )
        goto LABEL_175;
      v152.fields.r = v26;
      v152.fields.g = v25;
      v152.fields.b = v23;
      v152.fields.a = v22;
      UIWidget__set_color((UIWidget_o *)gameObject, v152, 0);
    }
    if ( (float)((float)(a * a) + (float)((float)(b * b) + (float)((float)(r * r) + (float)(g * g)))) >= 1.0e-10 )
    {
      multiSkillDisplayTitleBgSprite = (UnityEngine_Object_o *)this->fields.multiSkillDisplayTitleBgSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38, v48);
      if ( UnityEngine_Object__op_Inequality(multiSkillDisplayTitleBgSprite, 0, 0) )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.multiSkillDisplayTitleBgSprite;
        if ( !gameObject )
          goto LABEL_175;
        v153.fields.r = r;
        v153.fields.g = g;
        v153.fields.a = a;
        v153.fields.b = b;
        UIWidget__set_color((UIWidget_o *)gameObject, v153, 0);
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
      goto LABEL_175;
    UIWidget__set_height((UIWidget_o *)gameObject, 300, 0);
    GameObjectExtensions__SetLocalPositionY(this->fields.skillBefore, 81.0, 0);
    GameObjectExtensions__SetLocalPositionY(this->fields.skillAfter, -57.0, 0);
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)this->fields.changeArrowSprite, -1.0, 0);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38, v47);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !gameObject )
    goto LABEL_175;
  v50 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                             targetId,
                                             (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillList )
    goto LABEL_175;
  max_length = skillList->max_length;
  v53 = (SkillEntity_o *)gameObject;
  skillLv = targetLvOld;
  if ( max_length < 1 )
  {
LABEL_36:
    v54 = 0;
  }
  else
  {
    v54 = 0;
    while ( 1 )
    {
      if ( max_length == v54 )
        sub_2213CE4(gameObject);
      v55 = (char *)skillList + 4 * v54++;
      if ( *((_DWORD *)v55 + 8) == targetId )
        break;
      if ( (max_length & ~(max_length >> 31)) == v54 )
        goto LABEL_36;
    }
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38, v51);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( !gameObject )
    goto LABEL_175;
  v56 = gameObject;
  svtId = baseSvtId;
  gameObject = (UnityEngine_GameObject_o *)ServantSkillMaster__getEntityFromSkillId(
                                             (ServantSkillMaster_o *)gameObject,
                                             baseSvtId,
                                             v54,
                                             targetId,
                                             0);
  if ( !v53 )
    goto LABEL_175;
  v57 = (ServantSkillEntity_o *)gameObject;
  SkillEntity__getSkillMessageInfo(v53, &name, &detail, targetLv, 0);
  if ( !userServantEntity )
    goto LABEL_175;
  DispLimitCountStageSealAfterAtStageLimitCount = UserServantEntity__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                    userServantEntity,
                                                    overrideTransformVal,
                                                    0,
                                                    0,
                                                    0);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !gameObject )
    goto LABEL_175;
  if ( ServantLimitAddMaster__TryGetEntity(
         (ServantLimitAddMaster_o *)gameObject,
         &entity,
         svtId,
         DispLimitCountStageSealAfterAtStageLimitCount,
         0) )
  {
    gameObject = (UnityEngine_GameObject_o *)entity;
    if ( !entity )
      goto LABEL_175;
    if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
    {
      gameObject = (UnityEngine_GameObject_o *)entity;
      if ( !entity )
        goto LABEL_175;
      name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v53->fields.id, name, 0);
    }
  }
  v142 = (ServantSkillMaster_o *)v56;
  v140 = targetLv - 1;
  v60 = targetIdOld >= 1 ? skillLv : targetLv - 1;
  lv = v60;
  if ( v57 )
  {
    skillNum = v57->fields.skillNum;
    if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v38, v59);
    IconCnt = ServantSkillStrengthStatus__GetIconCnt(skillNum, 0);
  }
  else
  {
    IconCnt = 0;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38, v59);
  v63 = isDispLv;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12743/*"SKILL_COMBINE_FORCE_RELEASE_NAME"*/, 0);
  skillAfter = this->fields.skillAfter;
  str1 = (System_String_o *)gameObject;
  if ( isOpen )
  {
    if ( !skillAfter )
      goto LABEL_175;
    v65 = isDispLv;
    UnityEngine_GameObject__SetActive(skillAfter, 0, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
    v66 = v142;
    if ( !gameObject )
      goto LABEL_175;
    SkillIconComponent__Set_48067596((SkillIconComponent_o *)gameObject, targetId, targetLv, 0);
    skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v53, targetLv, 0);
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&EffectChargeTurn, 0);
    if ( !skillBefChargeTimeLb )
      goto LABEL_175;
    UILabel__set_text(skillBefChargeTimeLb, (System_String_o *)gameObject, 0);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v53, v60, 0);
    v69 = isForceRelease;
    if ( !beforeChargeTimeInfo )
      goto LABEL_175;
  }
  else
  {
    if ( !skillAfter )
      goto LABEL_175;
    v141 = targetIdOld;
    UnityEngine_GameObject__SetActive(skillAfter, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconAft;
    if ( !gameObject )
      goto LABEL_175;
    SkillIconComponent__Set_48067596((SkillIconComponent_o *)gameObject, targetId, targetLv, 0);
    skillAftChargeTimeLb = this->fields.skillAftChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v53, targetLv, 0);
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&EffectChargeTurn, 0);
    if ( !skillAftChargeTimeLb )
      goto LABEL_175;
    UILabel__set_text(skillAftChargeTimeLb, (System_String_o *)gameObject, 0);
    AfterChargeTimeInfo = this->fields.AfterChargeTimeInfo;
    gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v53, targetLv, 0);
    if ( !AfterChargeTimeInfo )
      goto LABEL_175;
    UnityEngine_GameObject__SetActive(AfterChargeTimeInfo, (int)gameObject > 0, 0);
    if ( isDispLv )
    {
      v73 = name;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38, v72);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_2107/*"APPEND_SKILL_RESULT_AFTER_LV"*/, 0);
      v147 = targetLv;
      v75 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v147);
      v76 = System_String__Format(v74, v75, 0);
      name = System_String__Concat_75651716(v73, v76, 0);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
    if ( !gameObject )
      goto LABEL_175;
    UILabel__set_text((UILabel_o *)gameObject, name, 0);
    skillAftForceReleaseLb = (UnityEngine_Object_o *)this->fields.skillAftForceReleaseLb;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77, v78);
    v80 = UnityEngine_Object__op_Inequality(skillAftForceReleaseLb, 0, 0);
    targetIdOld = v141;
    if ( v80 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftForceReleaseLb;
      if ( !gameObject )
        goto LABEL_175;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_175;
      UnityEngine_GameObject__SetActive(gameObject, isForceRelease && IconCnt > 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftForceReleaseLb;
      if ( !gameObject )
        goto LABEL_175;
      if ( isForceRelease )
        v82 = str1;
      else
        v82 = (System_String_o *)StringLiteral_1/*""*/;
      UILabel__set_text((UILabel_o *)gameObject, v82, 0);
      v63 = isDispLv;
      targetIdOld = v141;
    }
    if ( v57 && IconCnt >= 1 )
    {
      servantSkillStrengthStatusAfter = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusAfter;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38, v81);
      if ( UnityEngine_Object__op_Equality(servantSkillStrengthStatusAfter, 0, 0) )
      {
        if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v38, v84);
        gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
        if ( !gameObject )
          goto LABEL_175;
        PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
        gameObject = BaseMonoBehaviour__createObject_48153028((BaseMonoBehaviour_o *)this, PATH, transform, 0, 0);
        if ( !gameObject )
          goto LABEL_175;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        this->fields.servantSkillStrengthStatusAfter = (struct ServantSkillStrengthStatus_o *)Component_object;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.servantSkillStrengthStatusAfter,
          (int32_t)Component_object,
          v88,
          v89,
          v90,
          v91,
          v92,
          v93);
      }
      v94 = this->fields.servantSkillStrengthStatusAfter;
      skillAftTitleLb = this->fields.skillAftTitleLb;
      gameObject = (UnityEngine_GameObject_o *)ServantSkillEntity__GetStrengthStatus(v57, -1, 0);
      v96 = lv;
      if ( !v94 )
        goto LABEL_175;
      ServantSkillStrengthStatus__Set(
        v94,
        skillAftTitleLb,
        (int32_t)gameObject,
        v57->fields.skillNum,
        20,
        -9,
        (UnityEngine_Vector2Int_o)0x1200000014LL,
        280,
        this->fields.skillAftForceReleaseLb,
        0);
      targetIdOld = v141;
    }
    else
    {
      v96 = lv;
      if ( isForceRelease && !IconCnt )
      {
        v97 = this->fields.skillAftTitleLb;
        gameObject = (UnityEngine_GameObject_o *)System_String__Concat_75651716(name, str1, 0);
        if ( !v97 )
          goto LABEL_175;
        UILabel__set_text(v97, (System_String_o *)gameObject, 0);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
      if ( !gameObject )
        goto LABEL_175;
      UILabel__SetCondensedScale((UILabel_o *)gameObject, 280, 0, 0);
    }
    UILabelHelper__SetLabelWithScroll(this->fields.skillAfterDetailScrollLabel, detail, 4, 0);
    if ( targetIdOld < 1 )
    {
      v65 = v63;
      SkillEntity__getSkillMessageInfo(v53, &name, &detail, v140, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_175;
      SkillIconComponent__Set_48067596((SkillIconComponent_o *)gameObject, targetId, v140, 0);
      v66 = v142;
      v69 = isForceRelease;
    }
    else
    {
      v65 = v63;
      gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v50,
                                                 targetIdOld,
                                                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !gameObject )
        goto LABEL_175;
      v53 = (SkillEntity_o *)gameObject;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)gameObject, &name, &detail, skillLv, 0);
      v66 = v142;
      v69 = isForceRelease;
      if ( !isRelease && !isForceRelease )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38, v98);
        v99 = LocalizationManager__Get((System_String_o *)StringLiteral_12740/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, 0);
        skillAfterDetailScrollLabel = this->fields.skillAfterDetailScrollLabel;
        detail = v99;
        UILabelHelper__SetLabelWithScroll(skillAfterDetailScrollLabel, v99, 4, 0);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_175;
      SkillIconComponent__Set_48067596((SkillIconComponent_o *)gameObject, targetIdOld, skillLv, 0);
    }
    v101 = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v53, v96, 0);
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&EffectChargeTurn, 0);
    if ( !v101 )
      goto LABEL_175;
    UILabel__set_text(v101, (System_String_o *)gameObject, 0);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v53, v96, 0);
    if ( !beforeChargeTimeInfo )
      goto LABEL_175;
  }
  UnityEngine_GameObject__SetActive(beforeChargeTimeInfo, (int)gameObject > 0, 0);
  if ( entity && ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)entity;
    if ( !entity )
      goto LABEL_175;
    name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v53->fields.id, name, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
  if ( !gameObject )
LABEL_175:
    sub_2213CDC(gameObject, v38);
  UILabel__set_text((UILabel_o *)gameObject, name, 0);
  if ( v65 )
  {
    skillBefTitleLb = this->fields.skillBefTitleLb;
    v105 = name;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v102, v103);
    v106 = LocalizationManager__Get((System_String_o *)StringLiteral_2108/*"APPEND_SKILL_RESULT_LV"*/, 0);
    v107 = skillLv;
    if ( isOpen )
      v107 = targetLv;
    v147 = v107;
    v108 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v147);
    v109 = System_String__Format(v106, v108, 0);
    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_75651716(v105, v109, 0);
    if ( !skillBefTitleLb )
      goto LABEL_175;
    UILabel__set_text(skillBefTitleLb, (System_String_o *)gameObject, 0);
  }
  if ( v57 )
  {
    v110 = v57->fields.skillNum;
    if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v102, v103);
    v111 = ServantSkillStrengthStatus__GetIconCnt(v110, 0);
    if ( targetIdOld >= 1 )
    {
      EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v66, svtId, v54, targetIdOld, 0);
      if ( EntityFromSkillId )
      {
        v113 = EntityFromSkillId->fields.skillNum;
        if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v102, v103);
        v111 = ServantSkillStrengthStatus__GetIconCnt(v113, 0);
      }
    }
  }
  else
  {
    v111 = 0;
  }
  skillBefForceReleaseLb = (UnityEngine_Object_o *)this->fields.skillBefForceReleaseLb;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102, v103);
  if ( UnityEngine_Object__op_Inequality(skillBefForceReleaseLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefForceReleaseLb;
    if ( !gameObject )
      goto LABEL_175;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_175;
    UnityEngine_GameObject__SetActive(gameObject, v69 && v111 > 0, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefForceReleaseLb;
    if ( !gameObject )
      goto LABEL_175;
    if ( v69 )
      v115 = str1;
    else
      v115 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v115, 0);
  }
  if ( v57 && v111 >= 1 )
  {
    StrengthStatus = ServantSkillEntity__GetStrengthStatus(v57, -1, 0);
    v119 = v57->fields.skillNum;
    v120 = StrengthStatus;
    if ( targetIdOld >= 1 )
    {
      v121 = ServantSkillMaster__getEntityFromSkillId(v66, svtId, v54, targetIdOld, 0);
      if ( v121 )
      {
        v122 = v121;
        v123 = ServantSkillEntity__GetStrengthStatus(v121, -1, 0);
        v119 = v122->fields.skillNum;
        v120 = v123;
      }
    }
    servantSkillStrengthStatusBefore = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusBefore;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v117, v118);
    p_servantSkillStrengthStatusBefore = &this->fields.servantSkillStrengthStatusBefore;
    if ( !UnityEngine_Object__op_Equality(servantSkillStrengthStatusBefore, 0, 0) )
      goto LABEL_158;
    if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v38, v126);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
    if ( gameObject )
    {
      v127 = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
      v128 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      gameObject = BaseMonoBehaviour__createObject_48153028((BaseMonoBehaviour_o *)this, v127, v128, 0, 0);
      if ( gameObject )
      {
        v129 = UnityEngine_GameObject__GetComponent_object_(
                 gameObject,
                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        *p_servantSkillStrengthStatusBefore = (struct ServantSkillStrengthStatus_o *)v129;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.servantSkillStrengthStatusBefore,
          (int32_t)v129,
          v130,
          v131,
          v132,
          v133,
          v134,
          v135);
LABEL_158:
        gameObject = (UnityEngine_GameObject_o *)*p_servantSkillStrengthStatusBefore;
        if ( !*p_servantSkillStrengthStatusBefore )
          goto LABEL_175;
        ServantSkillStrengthStatus__Set(
          (ServantSkillStrengthStatus_o *)gameObject,
          this->fields.skillBefTitleLb,
          v120,
          v119,
          20,
          -9,
          (UnityEngine_Vector2Int_o)0x1200000014LL,
          280,
          this->fields.skillBefForceReleaseLb,
          0);
        goto LABEL_166;
      }
    }
    goto LABEL_175;
  }
  if ( v69 && !v111 )
  {
    v136 = this->fields.skillBefTitleLb;
    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_75651716(name, str1, 0);
    if ( !v136 )
      goto LABEL_175;
    UILabel__set_text(v136, (System_String_o *)gameObject, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
  if ( !gameObject )
    goto LABEL_175;
  UILabel__SetCondensedScale((UILabel_o *)gameObject, 280, 0, 0);
LABEL_166:
  gameObject = this->fields.openAppendSkillDetailScrollLabelRoot;
  if ( !gameObject )
    goto LABEL_175;
  if ( isOpen )
    v137 = 216;
  else
    v137 = 168;
  if ( isOpen )
    v138 = 10;
  else
    v138 = 4;
  UnityEngine_GameObject__SetActive(gameObject, isOpen, 0);
  UILabelHelper__SetLabelWithScroll(*(UILabel_o **)((char *)&this->klass + v137), detail, v138, 0);
  v139 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v139, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v139, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SkillUpResultWindowComponent__SetChildrenActive(
        SkillUpResultWindowComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *skillInfo; // x0

  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(skillInfo, enable, 0);
  skillInfo = this->fields.skillChangeInfo;
  if ( !skillInfo )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(skillInfo, enable, 0);
  skillInfo = this->fields.npInfo;
  if ( !skillInfo
    || (UnityEngine_GameObject__SetActive(skillInfo, enable, 0), (skillInfo = this->fields.friendshipInfo) == 0)
    || (UnityEngine_GameObject__SetActive(skillInfo, enable, 0), (skillInfo = this->fields.powerupInfo) == 0)
    || (UnityEngine_GameObject__SetActive(skillInfo, enable, 0), (skillInfo = this->fields.costumeChangeInfo) == 0) )
  {
LABEL_8:
    sub_2213CDC(skillInfo, enable);
  }
  UnityEngine_GameObject__SetActive(skillInfo, enable, 0);
}


// local variable allocation has failed, the output may be wrong!
void SkillUpResultWindowComponent__SetSkillInfo(
        SkillUpResultWindowComponent_o *this,
        int32_t oldSkillId,
        int32_t oldSkillLv,
        int32_t nowSkillId,
        int32_t nowSkillLv,
        const MethodInfo *method)
{
  UILabel_o *skillChangeInfoSubTitleOld; // x24
  int v12; // w8
  System_String_o *SkillEntity; // x0
  __int64 v14; // x1
  SkillUpResultWindowComponent_o *v15; // x0
  const MethodInfo *v16; // x2
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v18; // x0
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  SkillUpResultWindowComponent_o *v20; // x0
  const MethodInfo *v21; // x2
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v23; // x0
  System_String_o *text; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *v25; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596A1AA & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7255/*"GET_SKILL_NAME"*/);
    sub_2213A60(&StringLiteral_2009/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/);
    sub_2213A60(&StringLiteral_3019/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/);
    byte_596A1AA = 1;
  }
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  detail = 0;
  name = 0;
  v12 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  text = 0;
  v25 = 0;
  if ( !v12 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId, *(_QWORD *)&oldSkillLv);
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_3019/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleOld, SkillEntity, 0);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v15, oldSkillId, v16);
  if ( !SkillEntity )
    goto LABEL_14;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &name, &detail, oldSkillLv, 0);
  skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_7255/*"GET_SKILL_NAME"*/, 0);
  SkillEntity = System_String__Format(v18, (Il2CppObject *)name, 0);
  if ( !skillChangeInfoNameOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoNameOld, SkillEntity, 0);
  SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailOld;
  if ( !SkillEntity )
    goto LABEL_14;
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, detail, SkillEntity[17].fields._stringLength, 0, 0);
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_2009/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleNow, SkillEntity, 0);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v20, nowSkillId, v21);
  if ( !SkillEntity
    || (SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &v25, &text, nowSkillLv, 0),
        skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow,
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_7255/*"GET_SKILL_NAME"*/, 0),
        SkillEntity = System_String__Format(v23, (Il2CppObject *)v25, 0),
        !skillChangeInfoNameNow)
    || (UILabel__set_text(skillChangeInfoNameNow, SkillEntity, 0),
        (SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailNow) == 0) )
  {
LABEL_14:
    sub_2213CDC(SkillEntity, v14);
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, text, SkillEntity[17].fields._stringLength, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  int v15; // w8
  TreasureDvcMaster_o *Master_object; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  TreasureDvcMaster_o *v19; // x26
  __int64 v20; // x27
  __int64 v21; // x28
  TreasureDvcEntity_o *v22; // x25
  TreasureDvcLvEntity_o *v23; // x22
  bool v24; // w8
  bool v25; // w24
  UILabel_o *currentNpLvLb; // x24
  UILabel_o *resNpLvLb; // x24
  __int64 v28; // x2
  UIWidget_o *v29; // x24
  System_String_o **v30; // x8
  __int64 v31; // x2
  UIWidget_o *v32; // x24
  __int64 v33; // x1
  __int64 v34; // x2
  System_String_o *v35; // x1
  int32_t v36; // w2
  UILabel_o *openNpDetailScrollLabel; // x0
  System_String_o *v38; // x21
  TreasureDvcLvEntity_o *v39; // x0
  UILabel_o *v40; // x0
  System_String_o *DetalShort_50010268; // x1
  UILabel_o *resNpLvFirstLb; // x24
  struct UILabel_o *npBefDetailLabelScroll; // x20
  struct UILabel_o *npAftDetailLabelScroll; // x19
  int32_t v45; // [xsp+Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  lv = targetLv;
  if ( (byte_596A1A0 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&SkillUpResultWindowComponent_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A1A0 = 1;
  }
  v15 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  v45 = 0;
  if ( !v15 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, usrSvtData, *(_QWORD *)&targetId);
  Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !usrSvtData )
    goto LABEL_64;
  v19 = Master_object;
  v20 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
  *(_QWORD *)&v48.fields.currentCryptoKey = v20;
  *(_QWORD *)&v48.fields.fakeValue = v21;
  Master_object = (TreasureDvcMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v48, 0);
  if ( !v19 )
    goto LABEL_64;
  v22 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v19, (int32_t)Master_object, targetId, 0);
  Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !v22 || !Master_object )
    goto LABEL_64;
  v23 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v22->fields.id, targetLv, 0);
  v24 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
          &entity,
          targetIdOld,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  Master_object = (TreasureDvcMaster_o *)this->fields.npRubyNameLb;
  if ( !v24 )
    targetIdOld = 0;
  if ( !Master_object )
    goto LABEL_64;
  UILabel__set_text((UILabel_o *)Master_object, v22->fields.ruby, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npNameLb;
  if ( !Master_object )
    goto LABEL_64;
  UILabel__set_text((UILabel_o *)Master_object, v22->fields.name, 0);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(usrSvtData, this->fields.npNameLb, this->fields.npRubyNameLb, 0);
  v45 = targetLvOld;
  v25 = kind != 5;
  if ( kind != 5 && targetIdOld < 1 )
  {
    if ( targetLvOld > 0 )
    {
      currentNpLvLb = this->fields.currentNpLvLb;
      Master_object = (TreasureDvcMaster_o *)System_Int32__ToString((int32_t)&v45, 0);
      if ( !currentNpLvLb )
        goto LABEL_64;
      UILabel__set_text(currentNpLvLb, (System_String_o *)Master_object, 0);
      resNpLvLb = this->fields.resNpLvLb;
      Master_object = (TreasureDvcMaster_o *)System_Int32__ToString((int32_t)&lv, 0);
      if ( !resNpLvLb )
        goto LABEL_64;
      UILabel__set_text(resNpLvLb, (System_String_o *)Master_object, 0);
      Master_object = (TreasureDvcMaster_o *)this->fields.resNpLvLb;
      if ( !Master_object )
        goto LABEL_64;
      Master_object = (TreasureDvcMaster_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)Master_object,
                                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      v29 = (UIWidget_o *)Master_object;
      if ( !*(&SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo, v17, v28);
      if ( !v29 )
        goto LABEL_64;
      UIWidget__set_color(v29, SkillUpResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0);
      Master_object = (TreasureDvcMaster_o *)this->fields.npRankInfo;
      if ( !Master_object )
        goto LABEL_64;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      Master_object = (TreasureDvcMaster_o *)this->fields.npLvInfo;
      if ( !Master_object )
        goto LABEL_64;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      Master_object = (TreasureDvcMaster_o *)this->fields.npLvFirstInfo;
      if ( !Master_object )
        goto LABEL_64;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      if ( !v23 )
        goto LABEL_59;
      goto LABEL_43;
    }
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankInfo;
    if ( !Master_object )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvInfo;
    if ( !Master_object )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvFirstInfo;
    if ( !Master_object )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = (TreasureDvcMaster_o *)this->fields.npChangeSp;
    if ( !Master_object )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    resNpLvFirstLb = this->fields.resNpLvFirstLb;
    Master_object = (TreasureDvcMaster_o *)System_Int32__ToString((int32_t)&lv, 0);
    if ( !resNpLvFirstLb )
      goto LABEL_64;
    UILabel__set_text(resNpLvFirstLb, (System_String_o *)Master_object, 0);
    if ( v23 )
      goto LABEL_43;
LABEL_59:
    UILabelHelper__SetLabelWithScroll(this->fields.npBefDetailLabelScroll, (System_String_o *)StringLiteral_1/*""*/, 4, 0);
    UILabelHelper__SetLabelWithScroll(this->fields.npAftDetailLabelScroll, (System_String_o *)StringLiteral_1/*""*/, 4, 0);
    openNpDetailScrollLabel = this->fields.openNpDetailScrollLabel;
    v35 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_62:
    v36 = 4;
    goto LABEL_63;
  }
  Master_object = (TreasureDvcMaster_o *)this->fields.npRankInfo;
  if ( !Master_object )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v25, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npLvInfo;
  if ( !Master_object )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npLvFirstInfo;
  if ( !Master_object )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npChangeSp;
  if ( !Master_object )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v25, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npRankupBeforeLb;
  if ( !Master_object )
    goto LABEL_64;
  v30 = entity ? (System_String_o **)&entity[2].monitor : (System_String_o **)&StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)Master_object, *v30, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npRankupAfterLb;
  if ( !Master_object )
    goto LABEL_64;
  UILabel__set_text((UILabel_o *)Master_object, v22->fields.rank, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npRankupAfterLb;
  if ( !Master_object )
    goto LABEL_64;
  Master_object = (TreasureDvcMaster_o *)UnityEngine_Component__GetComponent_object_(
                                           (UnityEngine_Component_o *)Master_object,
                                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v32 = (UIWidget_o *)Master_object;
  if ( !*(&SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo, v17, v31);
  if ( !v32 )
    goto LABEL_64;
  UIWidget__set_color(v32, SkillUpResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0);
  v45 = targetLvOld;
  if ( !v23 )
    goto LABEL_59;
LABEL_43:
  Master_object = (TreasureDvcMaster_o *)this->fields.openNpDetailScrollLabelRoot;
  if ( !Master_object )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, kind == 5, 0);
  if ( kind != 5 )
  {
    if ( targetIdOld < 1 )
    {
      npBefDetailLabelScroll = this->fields.npBefDetailLabelScroll;
      DetalShort_50010268 = TreasureDvcLvEntity__getDetalShort_50010268(v23, v45, 0);
      v40 = npBefDetailLabelScroll;
LABEL_61:
      UILabelHelper__SetLabelWithScroll(v40, DetalShort_50010268, 4, 0);
      npAftDetailLabelScroll = this->fields.npAftDetailLabelScroll;
      v35 = TreasureDvcLvEntity__getDetalShort_50010268(v23, lv, 0);
      openNpDetailScrollLabel = npAftDetailLabelScroll;
      goto LABEL_62;
    }
    v38 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33, v34);
    Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( Master_object )
    {
      v39 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, targetIdOld, targetLvOld, 0);
      if ( v39 )
        v38 = TreasureDvcLvEntity__getDetalShort_50010268(v39, v45, 0);
      v40 = this->fields.npBefDetailLabelScroll;
      DetalShort_50010268 = v38;
      goto LABEL_61;
    }
LABEL_64:
    sub_2213CDC(Master_object, v17);
  }
  UILabelHelper__SetLabelWithScroll(this->fields.npBefDetailLabelScroll, (System_String_o *)StringLiteral_1/*""*/, 4, 0);
  UILabelHelper__SetLabelWithScroll(this->fields.npAftDetailLabelScroll, (System_String_o *)StringLiteral_1/*""*/, 4, 0);
  v35 = TreasureDvcLvEntity__getDetalShort_50010268(v23, lv, 0);
  v36 = 10;
  openNpDetailScrollLabel = this->fields.openNpDetailScrollLabel;
LABEL_63:
  UILabelHelper__SetLabelWithScroll(openNpDetailScrollLabel, v35, v36, 0);
}


void SkillUpResultWindowComponent__SetupSpecialNpChange(
        SkillUpResultWindowComponent_o *this,
        ServantCostumeEntity_o *svtCostumeEnt,
        const MethodInfo *method)
{
  UnityEngine_Object_o *heroineNpChangeInfoTitle; // x21
  bool v6; // w0
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *v9; // x21
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_IEnumerable_T__o *heroineNpChangeArrowSprites; // x20
  SkillUpResultWindowComponent___c_c *v16; // x0
  struct SkillUpResultWindowComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__99_0; // x21
  Il2CppObject *v19; // x22
  struct SkillUpResultWindowComponent___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  UnityEngine_Object_o *heroineNpChangeExtraArrowSprite; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  UISprite_o *v30; // x19

  if ( (byte_596A1A4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_UISprite__TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_UISprite___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SkillUpResultWindowComponent___c__SetupSpecialNpChange_b__99_0__);
    sub_2213A60(&SkillUpResultWindowComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_3985/*"COSTUME_CHANGE_NOBLE_PHANTASM_TITLE"*/);
    sub_2213A60(&StringLiteral_21285/*"img_arrow_change"*/);
    byte_596A1A4 = 1;
  }
  if ( this->fields.isSpecialEffect )
  {
    heroineNpChangeInfoTitle = (UnityEngine_Object_o *)this->fields.heroineNpChangeInfoTitle;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtCostumeEnt, method);
    v6 = UnityEngine_Object__op_Inequality(heroineNpChangeInfoTitle, 0, 0);
    if ( svtCostumeEnt && v6 )
    {
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.heroineNpChangeInfoTitle, 1, 0);
      v9 = this->fields.heroineNpChangeInfoTitle;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3985/*"COSTUME_CHANGE_NOBLE_PHANTASM_TITLE"*/, 0);
      v11 = System_String__Format(v10, (Il2CppObject *)svtCostumeEnt->fields.name, 0);
      if ( !v9 )
        sub_2213CDC(v11, v12);
      UILabel__set_text(v9, v11, 0);
    }
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.heroineNpChangeArrowSprites, 0) )
    {
      heroineNpChangeArrowSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.heroineNpChangeArrowSprites;
      v16 = SkillUpResultWindowComponent___c_TypeInfo;
      if ( !*(&SkillUpResultWindowComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent___c_TypeInfo, v13, v14);
        v16 = SkillUpResultWindowComponent___c_TypeInfo;
      }
      static_fields = v16->static_fields;
      _9__99_0 = (System_Action_object__o *)static_fields->__9__99_0;
      if ( !_9__99_0 )
      {
        if ( !*(&v16->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v16, v13, v14);
          static_fields = SkillUpResultWindowComponent___c_TypeInfo->static_fields;
        }
        v19 = (Il2CppObject *)static_fields->__9;
        _9__99_0 = (System_Action_object__o *)sub_2213CCC(System_Action_UISprite__TypeInfo);
        System_Action_object____ctor(
          _9__99_0,
          v19,
          Method_SkillUpResultWindowComponent___c__SetupSpecialNpChange_b__99_0__,
          0);
        v20 = SkillUpResultWindowComponent___c_TypeInfo->static_fields;
        v20->__9__99_0 = (struct System_Action_UISprite__o *)_9__99_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v20->__9__99_0,
          (int32_t)_9__99_0,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
      BasicHelper__ForEach_object_(
        heroineNpChangeArrowSprites,
        (System_Action_T__o *)_9__99_0,
        (const MethodInfo_381282C *)Method_BasicHelper_ForEach_UISprite___);
    }
    heroineNpChangeExtraArrowSprite = (UnityEngine_Object_o *)this->fields.heroineNpChangeExtraArrowSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    if ( UnityEngine_Object__op_Inequality(heroineNpChangeExtraArrowSprite, 0, 0) )
    {
      v30 = this->fields.heroineNpChangeExtraArrowSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v28, v29);
      AtlasManager__SetDownloadCommonSprite(v30, (System_String_o *)StringLiteral_21285/*"img_arrow_change"*/, 0);
    }
  }
}


void SkillUpResultWindowComponent__SetupWindowBg(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *windowBgSprite; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UISprite_o *v7; // x19

  if ( (byte_596A1A3 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21572/*"img_skillwindow_sp"*/);
    byte_596A1A3 = 1;
  }
  if ( this->fields.isSpecialEffect )
  {
    windowBgSprite = (UnityEngine_Object_o *)this->fields.windowBgSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( UnityEngine_Object__op_Inequality(windowBgSprite, 0, 0) )
    {
      v7 = this->fields.windowBgSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5, v6);
      AtlasManager__SetDownloadCommonSprite(v7, (System_String_o *)StringLiteral_21572/*"img_skillwindow_sp"*/, 0);
    }
  }
}


void SkillUpResultWindowComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A1AE & 1) == 0 )
  {
    sub_2213A60(&SkillUpResultWindowComponent___c_TypeInfo);
    byte_596A1AE = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SkillUpResultWindowComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillUpResultWindowComponent___c_TypeInfo->static_fields->__9 = (struct SkillUpResultWindowComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SkillUpResultWindowComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_596A1AF & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_21345/*"img_combine_arrow_sp"*/);
    byte_596A1AF = 1;
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sp, method);
  AtlasManager__SetDownloadCommonSprite(sp, (System_String_o *)StringLiteral_21345/*"img_combine_arrow_sp"*/, 0);
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