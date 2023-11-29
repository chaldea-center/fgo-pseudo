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

  if ( (byte_40F928D & 1) == 0 )
  {
    sub_B16FFC(&SkillUpResultWindowComponent_TypeInfo, v1);
    byte_40F928D = 1;
  }
  v6 = 1065185444;
  v7 = 1064430469;
  v8 = 1050790593;
  v9 = (struct SkillUpResultWindowComponent_StaticFields)0LL;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v9);
  *SkillUpResultWindowComponent_TypeInfo->static_fields = v9;
}


void __fastcall SkillUpResultWindowComponent___ctor(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40F928C & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F928C = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SkillUpResultWindowComponent__Close(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x0
  System_Action_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_40F9287 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SkillUpResultWindowComponent_EndClose__, v6);
    byte_40F9287 = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  SkillUpResultWindowComponent__Close_23653448(this, v8, v9);
}


void __fastcall SkillUpResultWindowComponent__Close_23653448(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40F9288 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_SkillUpResultWindowComponent_EndClose__, v6);
    byte_40F9288 = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, callback, method, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall SkillUpResultWindowComponent__EndClose(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x2
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v6; // x0

  SkillUpResultWindowComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        SkillUpResultWindowComponent__SetChildrenActive(this, 0, v4),
        (Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0LL)) == 0LL)
    || (v6 = UnityEngine_Component__get_gameObject(Parent, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v6, 0, 0LL);
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
    sub_B16F98(p_openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
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
  WebViewManager_o *Instance; // x0
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40F928A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F928A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return ServantSkillMaster__getEntityFromSkillId(MasterData_WarQuestSelectionMaster, svtId, num, skillId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_o *__fastcall SkillUpResultWindowComponent__GetSkillEntity(
        SkillUpResultWindowComponent_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F9289 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&skillId);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F9289 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    skillId,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  return (SkillEntity_o *)entity;
}


void __fastcall SkillUpResultWindowComponent__Init(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v30; // x2
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *friendshipInfo; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UILabel_o *friendshipLabel; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Text_StringBuilder_o *v45; // x20
  int32_t SvtId; // w22
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  clsQuestCheck_o *v51; // x0
  System_Collections_Generic_List_QuestEntity__o *v52; // x0
  Il2CppObject *current; // x23
  System_String_o *v54; // x0
  System_String_o *v55; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v57; // x1
  int32_t v58; // w23
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  UILabel_o *v61; // x22
  System_String_o *v62; // x0
  UnityEngine_GameObject_o *friendshipLvInfo; // x0
  UnityEngine_GameObject_o *v64; // x20
  int32_t FriendShipRank; // w0
  UILabel_o *friendshipCurrentLvLabel; // x20
  System_String_o *v67; // x0
  UILabel_o *friendshipResultLvLabel; // x20
  System_String_o *v69; // x0
  UnityEngine_Component_o *v70; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  SkillUpResultWindowComponent_c *v72; // x8
  struct UILabel_o *v73; // x8
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  UnityEngine_Component_o *v78; // x0
  UnityEngine_GameObject_o *v79; // x0
  System_Action_o *v80; // x20
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+20h] [xbp-70h] BYREF
  int32_t v83; // [xsp+48h] [xbp-48h] BYREF
  int32_t v84; // [xsp+4Ch] [xbp-44h] BYREF

  v84 = oldFriendShipRank;
  if ( (byte_40F9285 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, usrSvtData);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v19);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v20);
    sub_B16FFC(&Method_SkillUpResultWindowComponent_EndOpen__, v21);
    sub_B16FFC(&SkillUpResultWindowComponent_TypeInfo, v22);
    sub_B16FFC(&SoundManager_TypeInfo, v23);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v24);
    sub_B16FFC(&StringLiteral_11069, v25);
    sub_B16FFC(&StringLiteral_11071, v26);
    sub_B16FFC(&StringLiteral_11066, v27);
    sub_B16FFC(&StringLiteral_1, v28);
    byte_40F9285 = 1;
  }
  memset(&v82, 0, sizeof(v82));
  v83 = 0;
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
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v30);
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0LL);
      if ( Parent )
      {
        v32 = UnityEngine_Component__get_gameObject(Parent, 0LL);
        if ( v32 )
        {
          UnityEngine_GameObject__SetActive(v32, 1, 0LL);
          friendshipInfo = this->fields.friendshipInfo;
          if ( friendshipInfo )
          {
            UnityEngine_GameObject__SetActive(friendshipInfo, 1, 0LL);
            this->fields.openCallBack = callback;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.openCallBack,
              (System_Int32_array **)callback,
              v34,
              v35,
              v36,
              v37,
              v38,
              v39);
            friendshipLabel = this->fields.friendshipLabel;
            if ( friendshipLabel )
            {
              UILabel__set_text(friendshipLabel, (System_String_o *)StringLiteral_1, 0LL);
              v45 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v41, v42, v43, v44);
              System_Text_StringBuilder___ctor(v45, 0LL);
              if ( usrSvtData )
              {
                SvtId = UserServantEntity__getSvtId(usrSvtData, 0LL);
                Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( Instance )
                {
                  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  }
                  UserId = NetworkManager__get_UserId(0LL);
                  if ( MasterData_WarQuestSelectionMaster )
                  {
                    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                         MasterData_WarQuestSelectionMaster,
                                         UserId,
                                         SvtId,
                                         0LL);
                    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
                    }
                    v51 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                    if ( v51 )
                    {
                      v52 = clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                              v51,
                              SvtId,
                              oldFriendShipRank,
                              8,
                              0LL);
                      if ( v52 )
                      {
                        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                          &v81,
                          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v52,
                          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
                        v82 = v81;
                        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                  &v82,
                                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
                        {
                          current = v82.fields.current;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11069, 0LL);
                          if ( !current )
                            sub_B170D4();
                          v55 = v54;
                          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
                          v57 = System_String__Format(v55, QuestName, 0LL);
                          if ( !v45 )
                            sub_B170D4();
                          System_Text_StringBuilder__AppendLine_41915036(v45, v57, 0LL);
                        }
                        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                          &v82,
                          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
                      }
                      v58 = v84;
                      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                      }
                      if ( ServantCommentManager__IsOpenByServantFriendShip(SvtId, v58, 0LL) )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v59 = LocalizationManager__Get((System_String_o *)StringLiteral_11071, 0LL);
                        if ( !v45 )
                          goto LABEL_66;
                        System_Text_StringBuilder__AppendLine_41915036(v45, v59, 0LL);
                      }
                      if ( !EntityDefinitely )
                        goto LABEL_66;
                      if ( ServantVoiceMaster__isOpenByServantFriendShip(
                             SvtId,
                             EntityDefinitely->fields.maxLimitCount,
                             v84,
                             0LL) )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v60 = LocalizationManager__Get((System_String_o *)StringLiteral_11066, 0LL);
                        if ( !v45 )
                          goto LABEL_66;
                        System_Text_StringBuilder__AppendLine_41915036(v45, v60, 0LL);
                      }
                      else if ( !v45 )
                      {
                        goto LABEL_66;
                      }
                      v61 = this->fields.friendshipLabel;
                      v62 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v45->klass->vtable._3_ToString.method)(
                                                 v45,
                                                 v45->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                      if ( v61 )
                      {
                        UILabel__set_text(v61, v62, 0LL);
                        friendshipLvInfo = this->fields.friendshipLvInfo;
                        if ( friendshipLvInfo )
                        {
                          v64 = UnityEngine_GameObject__get_gameObject(friendshipLvInfo, 0LL);
                          FriendShipRank = UserServantCollectionEntity__getFriendShipRank(EntityDefinitely, 0LL);
                          if ( v64 )
                          {
                            UnityEngine_GameObject__SetActive(v64, FriendShipRank > v84, 0LL);
                            friendshipCurrentLvLabel = this->fields.friendshipCurrentLvLabel;
                            v67 = System_Int32__ToString((int32_t)&v84, 0LL);
                            if ( friendshipCurrentLvLabel )
                            {
                              UILabel__set_text(friendshipCurrentLvLabel, v67, 0LL);
                              friendshipResultLvLabel = this->fields.friendshipResultLvLabel;
                              v83 = UserServantCollectionEntity__getFriendShipRank(EntityDefinitely, 0LL);
                              v69 = System_Int32__ToString((int32_t)&v83, 0LL);
                              if ( friendshipResultLvLabel )
                              {
                                UILabel__set_text(friendshipResultLvLabel, v69, 0LL);
                                v70 = (UnityEngine_Component_o *)this->fields.friendshipResultLvLabel;
                                if ( v70 )
                                {
                                  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                                              v70,
                                                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
                                  v72 = SkillUpResultWindowComponent_TypeInfo;
                                  if ( (BYTE3(SkillUpResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
                                    v72 = SkillUpResultWindowComponent_TypeInfo;
                                  }
                                  if ( Component_WebViewObject )
                                  {
                                    UIWidget__set_color(
                                      (UIWidget_o *)Component_WebViewObject,
                                      v72->static_fields->COLOR_VAL,
                                      0LL);
                                    v73 = this->fields.friendshipLabel;
                                    if ( v73 )
                                    {
                                      if ( !System_String__IsNullOrEmpty(v73->fields.mText, 0LL) )
                                      {
LABEL_64:
                                        v80 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v74, v75, v76, v77);
                                        System_Action___ctor(
                                          v80,
                                          (Il2CppObject *)this,
                                          Method_SkillUpResultWindowComponent_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v80, 0, 0LL);
                                        return;
                                      }
                                      v78 = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(
                                                                         this->fields.friendshipInfo,
                                                                         0LL);
                                      if ( v78 )
                                      {
                                        v79 = UnityEngine_Component__get_gameObject(v78, 0LL);
                                        if ( v79 )
                                        {
                                          UnityEngine_GameObject__SetActive(v79, 0, 0LL);
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
    sub_B170D4();
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
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *npInfo; // x0
  UnityEngine_GameObject_o *npInfoAddRoot; // x0
  UnityEngine_GameObject_o *npInfoNormalRoot; // x0
  UnityEngine_GameObject_o *npInfoHeroineNpChangeRoot; // x0
  UnityEngine_GameObject_o *npInfoNpChangeRoot; // x0
  UnityEngine_GameObject_o *v22; // x0
  NpInfoAddResultComponent_o *npInfoAddResultComponent; // x0

  if ( (byte_40F9282 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, tdAddEntity);
    byte_40F9282 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v14);
  Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0LL);
  if ( !Parent )
    goto LABEL_17;
  v16 = UnityEngine_Component__get_gameObject(Parent, 0LL);
  if ( !v16 )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(v16, 1, 0LL);
  npInfo = this->fields.npInfo;
  if ( !npInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(npInfo, 1, 0LL);
  npInfoAddRoot = this->fields.npInfoAddRoot;
  if ( !npInfoAddRoot )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(npInfoAddRoot, 1, 0LL);
  npInfoNormalRoot = this->fields.npInfoNormalRoot;
  if ( !npInfoNormalRoot )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(npInfoNormalRoot, 0, 0LL);
  npInfoHeroineNpChangeRoot = this->fields.npInfoHeroineNpChangeRoot;
  if ( !npInfoHeroineNpChangeRoot
    || (UnityEngine_GameObject__SetActive(npInfoHeroineNpChangeRoot, 0, 0LL),
        (npInfoNpChangeRoot = this->fields.npInfoNpChangeRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(npInfoNpChangeRoot, 0, 0LL), (v22 = this->fields.npInfoNpChangeRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(v22, 0, 0LL),
        (npInfoAddResultComponent = this->fields.npInfoAddResultComponent) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  NpInfoAddResultComponent__SetDisplay(npInfoAddResultComponent, tdAddEntity, index, beforeLv, afterLv, 0LL);
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
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *npInfo; // x0
  UnityEngine_GameObject_o *npInfoNormalRoot; // x0
  UnityEngine_GameObject_o *npInfoHeroineNpChangeRoot; // x0
  UnityEngine_GameObject_o *npInfoNpChangeRoot; // x0
  UnityEngine_GameObject_o *npInfoAddRoot; // x0
  HeroineNpChangeInfoComponent_o *heroineNpChangeInfoOld; // x0
  HeroineNpChangeInfoComponent_o *heroineNpChangeInfoNow; // x0

  if ( (byte_40F9281 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&oldTargetId);
    byte_40F9281 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v14);
  Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0LL);
  if ( !Parent )
    goto LABEL_17;
  v16 = UnityEngine_Component__get_gameObject(Parent, 0LL);
  if ( !v16 )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(v16, 1, 0LL);
  npInfo = this->fields.npInfo;
  if ( !npInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(npInfo, 1, 0LL);
  npInfoNormalRoot = this->fields.npInfoNormalRoot;
  if ( !npInfoNormalRoot )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(npInfoNormalRoot, 0, 0LL);
  npInfoHeroineNpChangeRoot = this->fields.npInfoHeroineNpChangeRoot;
  if ( !npInfoHeroineNpChangeRoot )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(npInfoHeroineNpChangeRoot, 1, 0LL);
  npInfoNpChangeRoot = this->fields.npInfoNpChangeRoot;
  if ( !npInfoNpChangeRoot
    || (UnityEngine_GameObject__SetActive(npInfoNpChangeRoot, 0, 0LL),
        (npInfoAddRoot = this->fields.npInfoAddRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(npInfoAddRoot, 0, 0LL),
        (heroineNpChangeInfoOld = this->fields.heroineNpChangeInfoOld) == 0LL)
    || (HeroineNpChangeInfoComponent__Setup(heroineNpChangeInfoOld, oldTargetId, oldTargetLv, 0LL),
        (heroineNpChangeInfoNow = this->fields.heroineNpChangeInfoNow) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  HeroineNpChangeInfoComponent__Setup(heroineNpChangeInfoNow, nowTargetId, nowTargetLv, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__OpenNpUpResultInfo_23648372(
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
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *npInfo; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  ServantTreasureDeviceAddMaster_o *v35; // x26
  __int64 v36; // x27
  __int64 v37; // x28
  int32_t v38; // w27
  int32_t v39; // w0
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x0
  ServantTreasureDeviceAddEntity_o *v41; // x26
  int v42; // w27
  UnityEngine_GameObject_o *npInfoNormalRoot; // x0
  bool v44; // w1
  UnityEngine_GameObject_o *npInfoHeroineNpChangeRoot; // x0
  UnityEngine_GameObject_o *npInfoNpChangeRoot; // x0
  const MethodInfo *v47; // x7
  HeroineNpChangeInfoComponent_o *heroineNpChangeInfoOld; // x0
  HeroineNpChangeInfoComponent_o *heroineNpChangeInfoNow; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  HeroineNpChangeInfoComponent_o *npChangeInfoOld; // x0
  HeroineNpChangeInfoComponent_o *npChangeInfoNow; // x0
  UnityEngine_Component_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  UIWidget_o *Component_srcLineSprite; // x0
  NpInfoAddResultComponent_o *npInfoAddResultComponent; // x0
  System_Action_o *v60; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_40F9283 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, usrSvtData);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___, v17);
    sub_B16FFC(&DataManager_TypeInfo, v18);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B16FFC(&Method_SkillUpResultWindowComponent_EndOpen__, v21);
    sub_B16FFC(&SoundManager_TypeInfo, v22);
    byte_40F9283 = 1;
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
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v24);
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0LL);
      if ( Parent )
      {
        v26 = UnityEngine_Component__get_gameObject(Parent, 0LL);
        if ( v26 )
        {
          UnityEngine_GameObject__SetActive(v26, 1, 0LL);
          npInfo = this->fields.npInfo;
          if ( npInfo )
          {
            UnityEngine_GameObject__SetActive(npInfo, 1, 0LL);
            this->fields.openCallBack = callback;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.openCallBack,
              (System_Int32_array **)callback,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
            if ( usrSvtData )
            {
              v35 = (ServantTreasureDeviceAddMaster_o *)Master_WarQuestSelectionMaster;
              v37 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
              v36 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v61.fields.currentCryptoKey = v37;
              *(_QWORD *)&v61.fields.fakeValue = v36;
              v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v61, 0LL);
              v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                      usrSvtData->fields.limitCount,
                      0LL);
              if ( v35 )
              {
                EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v35, v38, v39, 0, 0LL);
                if ( this->fields.npInfoAddRoot )
                {
                  v41 = EnableEntity;
                  UnityEngine_GameObject__SetActive(this->fields.npInfoAddRoot, EnableEntity != 0LL, 0LL);
                  v42 = (targetLvOld != targetLv) & (UserServantEntity__IsHeroine(usrSvtData, 0LL)
                                                  && targetIdOld != targetId);
                  if ( targetIdOld == targetId && UserServantEntity__IsHeroine(usrSvtData, 0LL) )
                    targetIdOld = 0;
                  npInfoNormalRoot = this->fields.npInfoNormalRoot;
                  if ( (v42 & 1) != 0 )
                  {
                    v44 = 0;
                    if ( !npInfoNormalRoot )
                      goto LABEL_45;
                  }
                  else
                  {
                    v44 = kind != 18 && v41 == 0LL;
                    if ( !npInfoNormalRoot )
                      goto LABEL_45;
                  }
                  UnityEngine_GameObject__SetActive(npInfoNormalRoot, v44, 0LL);
                  npInfoHeroineNpChangeRoot = this->fields.npInfoHeroineNpChangeRoot;
                  if ( npInfoHeroineNpChangeRoot )
                  {
                    UnityEngine_GameObject__SetActive(npInfoHeroineNpChangeRoot, v42, 0LL);
                    npInfoNpChangeRoot = this->fields.npInfoNpChangeRoot;
                    if ( npInfoNpChangeRoot )
                    {
                      UnityEngine_GameObject__SetActive(npInfoNpChangeRoot, kind == 18, 0LL);
                      if ( v42 )
                      {
                        heroineNpChangeInfoOld = this->fields.heroineNpChangeInfoOld;
                        if ( heroineNpChangeInfoOld )
                        {
                          HeroineNpChangeInfoComponent__Setup(heroineNpChangeInfoOld, targetIdOld, targetLvOld, 0LL);
                          heroineNpChangeInfoNow = this->fields.heroineNpChangeInfoNow;
                          if ( heroineNpChangeInfoNow )
                          {
                            HeroineNpChangeInfoComponent__Setup(heroineNpChangeInfoNow, targetId, targetLv, 0LL);
LABEL_44:
                            v60 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v50, v51, v52, v53);
                            System_Action___ctor(
                              v60,
                              (Il2CppObject *)this,
                              Method_SkillUpResultWindowComponent_EndOpen__,
                              0LL);
                            BaseDialog__Open((BaseDialog_o *)this, v60, 0, 0LL);
                            return;
                          }
                        }
                      }
                      else if ( kind == 18 )
                      {
                        npChangeInfoOld = this->fields.npChangeInfoOld;
                        if ( npChangeInfoOld )
                        {
                          HeroineNpChangeInfoComponent__SetupForNpChange(npChangeInfoOld, targetIdOld, targetLvOld, 0LL);
                          npChangeInfoNow = this->fields.npChangeInfoNow;
                          if ( npChangeInfoNow )
                          {
                            HeroineNpChangeInfoComponent__SetupForNpChange(npChangeInfoNow, targetId, targetLv, 0LL);
                            goto LABEL_44;
                          }
                        }
                      }
                      else
                      {
                        if ( !v41 )
                        {
                          SkillUpResultWindowComponent__SetupNpUpResultInfoNormal(
                            this,
                            usrSvtData,
                            targetId,
                            targetLv,
                            targetIdOld,
                            targetLvOld,
                            kind,
                            v47);
                          goto LABEL_44;
                        }
                        v56 = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0LL);
                        if ( v56 )
                        {
                          v57 = UnityEngine_Component__get_gameObject(v56, 0LL);
                          if ( v57 )
                          {
                            Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      v57,
                                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                            if ( Component_srcLineSprite )
                            {
                              UIWidget__set_height(Component_srcLineSprite, 300, 0LL);
                              npInfoAddResultComponent = this->fields.npInfoAddResultComponent;
                              if ( npInfoAddResultComponent )
                              {
                                NpInfoAddResultComponent__SetDisplay(
                                  npInfoAddResultComponent,
                                  v41,
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
    sub_B170D4();
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
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *powerupInfo; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x21
  __int64 v29; // x20
  __int64 v30; // x22
  int32_t v31; // w0
  WarEntity_o *Entity; // x0
  UILabel_o *powerupLabel; // x20
  WarEntity_o *v34; // x21
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Action_o *v41; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_40F9286 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, usrSvtData);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SkillUpResultWindowComponent_EndOpen__, v12);
    sub_B16FFC(&SoundManager_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_11070, v14);
    byte_40F9286 = 1;
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
    SkillUpResultWindowComponent__SetChildrenActive(this, 0, v16);
    Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0LL);
    if ( !Parent )
      goto LABEL_23;
    v18 = UnityEngine_Component__get_gameObject(Parent, 0LL);
    if ( !v18 )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(v18, 1, 0LL);
    powerupInfo = this->fields.powerupInfo;
    if ( !powerupInfo )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(powerupInfo, 1, 0LL);
    this->fields.openCallBack = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.openCallBack,
      (System_Int32_array **)callback,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !usrSvtData )
      goto LABEL_23;
    v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v30 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v42.fields.currentCryptoKey = v30;
    *(_QWORD *)&v42.fields.fakeValue = v29;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v42, 0LL);
    if ( !v28 )
      goto LABEL_23;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v28,
               v31,
               (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    powerupLabel = this->fields.powerupLabel;
    v34 = Entity;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11070, 0LL);
    if ( !v34 || (v36 = System_String__Format(v35, (Il2CppObject *)v34->fields.emptyMessage, 0LL), !powerupLabel) )
LABEL_23:
      sub_B170D4();
    UILabel__set_text(powerupLabel, v36, 0LL);
    v41 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
    System_Action___ctor(v41, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
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
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *costumeChangeInfo; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x0
  System_String_o *BattleName; // x0
  UILabel_o *costumeChangeLabel; // x21
  Il2CppObject *v22; // x22
  System_String_o *v23; // x0
  System_String_o *v24; // x0

  if ( (byte_40F927F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_3381, v11);
    byte_40F927F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v13);
  Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.costumeChangeInfo, 0LL);
  if ( !Parent )
    goto LABEL_18;
  v15 = UnityEngine_Component__get_gameObject(Parent, 0LL);
  if ( !v15 )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(v15, 1, 0LL);
  costumeChangeInfo = this->fields.costumeChangeInfo;
  if ( !costumeChangeInfo )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(costumeChangeInfo, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                svtId,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_18;
  BattleName = ServantEntity__getBattleName(Entity, 0, -1, 0LL);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  v22 = (Il2CppObject *)BattleName;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3381, 0LL);
  v24 = System_String__Format(v23, v22, 0LL);
  if ( !costumeChangeLabel )
LABEL_18:
    sub_B170D4();
  UILabel__set_text(costumeChangeLabel, v24, 0LL);
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
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *skillChangeInfo; // x0
  UILabel_o *skillChangeInfoTitle; // x26
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  const MethodInfo *v25; // x5

  if ( (byte_40F9280 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId);
    sub_B16FFC(&SoundManager_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_3382, v16);
    byte_40F9280 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v18);
  Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.skillChangeInfo, 0LL);
  if ( !Parent )
    goto LABEL_15;
  v20 = UnityEngine_Component__get_gameObject(Parent, 0LL);
  if ( !v20 )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(v20, 1, 0LL);
  skillChangeInfo = this->fields.skillChangeInfo;
  if ( !skillChangeInfo )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(skillChangeInfo, 1, 0LL);
  skillChangeInfoTitle = this->fields.skillChangeInfoTitle;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3382, 0LL);
  v24 = System_String__Format(v23, (Il2CppObject *)costumeName, 0LL);
  if ( !skillChangeInfoTitle )
LABEL_15:
    sub_B170D4();
  UILabel__set_text(skillChangeInfoTitle, v24, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v34; // x2
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *skillInfo; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v46; // x22
  WarEntity_o *Entity; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  SkillEntity_o *v50; // x28
  int32_t v51; // w24
  il2cpp_array_size_t max_length; // w8
  int32_t v53; // w9
  WebViewManager_o *v54; // x0
  ServantSkillMaster_o *v55; // x0
  ServantSkillEntity_o *EntityFromSkillId; // x0
  const MethodInfo *v57; // x4
  ServantSkillEntity_o *v58; // x25
  UnityEngine_GameObject_o *skillAfter; // x0
  int32_t v60; // w21
  const MethodInfo *v61; // x5
  SkillIconComponent_o *skillIconBef; // x0
  UILabel_o *skillBefChargeTimeLb; // x20
  const MethodInfo *v64; // x2
  System_String_o *v65; // x0
  UnityEngine_GameObject_o *beforeChargeTimeInfo; // x20
  const MethodInfo *v67; // x2
  int32_t v68; // w0
  const MethodInfo *v69; // x5
  SkillIconComponent_o *skillIconAft; // x0
  UILabel_o *skillAftChargeTimeLb; // x20
  const MethodInfo *v72; // x2
  System_String_o *v73; // x0
  UnityEngine_GameObject_o *AfterChargeTimeInfo; // x20
  const MethodInfo *v75; // x2
  int32_t v76; // w0
  UILabel_o *skillAftTitleLb; // x0
  UILabel_o *v78; // x26
  System_String_o *v79; // x20
  System_String_o *v80; // x21
  Il2CppObject *v81; // x0
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  UILabel_o *v84; // x0
  UnityEngine_Component_o *v85; // x0
  System_String_o *PATH; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object_19257936; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UILabel_o *v90; // x20
  ServantSkillStrengthStatus_o *v91; // x26
  int32_t StrengthStatus; // w0
  struct UILabel_o *skillAftdetailLb; // x0
  int32_t mFontSize; // w26
  const MethodInfo *v95; // x4
  SkillEntity_o *v96; // x0
  const MethodInfo *v97; // x4
  const MethodInfo *v98; // x5
  SkillIconComponent_o *v99; // x0
  int32_t v100; // w1
  UILabel_o *v101; // x20
  const MethodInfo *v102; // x2
  System_String_o *v103; // x0
  const MethodInfo *v104; // x2
  UILabel_o *skillBefTitleLb; // x0
  UILabel_o *v106; // x21
  System_String_o *v107; // x22
  System_String_o *v108; // x20
  int32_t v109; // w8
  Il2CppObject *v110; // x0
  System_String_o *v111; // x0
  System_String_o *v112; // x0
  UILabel_o *v113; // x0
  int32_t v114; // w0
  ServantSkillEntity_o *v115; // x0
  int32_t v116; // w21
  int32_t skillNum; // w20
  UnityEngine_Component_o *v118; // x0
  System_String_o *v119; // x22
  UnityEngine_Transform_o *v120; // x0
  UnityEngine_GameObject_o *v121; // x0
  ServantSkillStrengthStatus_o *v122; // x0
  struct UILabel_o *skillBefdetailLb; // x0
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  System_Action_o *v128; // x20
  int32_t v129; // [xsp+0h] [xbp-90h]
  ServantSkillMaster_o *v130; // [xsp+8h] [xbp-88h]
  int32_t svtId; // [xsp+14h] [xbp-7Ch]
  int key; // [xsp+18h] [xbp-78h]
  int32_t v133; // [xsp+24h] [xbp-6Ch]
  int32_t v134; // [xsp+28h] [xbp-68h] BYREF
  int32_t EffectChargeTurn; // [xsp+2Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+30h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector2Int_o v138; // 0:x6.8
  UnityEngine_Vector2Int_o v139; // 0:x6.8

  if ( (byte_40F927E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&targetId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v21);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v22);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v23);
    sub_B16FFC(&int_TypeInfo, v24);
    sub_B16FFC(&LocalizationManager_TypeInfo, v25);
    sub_B16FFC(&ServantSkillStrengthStatus_TypeInfo, v26);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B16FFC(&Method_SkillUpResultWindowComponent_EndOpen__, v28);
    sub_B16FFC(&SoundManager_TypeInfo, v29);
    sub_B16FFC(&StringLiteral_1716, v30);
    sub_B16FFC(&StringLiteral_12194, v31);
    sub_B16FFC(&StringLiteral_1717, v32);
    byte_40F927E = 1;
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
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v34);
  Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.skillInfo, 0LL);
  if ( !Parent )
    goto LABEL_89;
  v36 = UnityEngine_Component__get_gameObject(Parent, 0LL);
  if ( !v36 )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive(v36, 1, 0LL);
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive(skillInfo, 1, 0LL);
  this->fields.openCallBack = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.openCallBack,
    (System_Int32_array **)callback,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_89;
  v133 = targetLvOld;
  v46 = MasterData_WarQuestSelectionMaster;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             targetId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillList )
    goto LABEL_89;
  v50 = (SkillEntity_o *)Entity;
  v51 = 0;
  max_length = skillList->max_length;
  while ( v51 < (int)max_length )
  {
    if ( v51 >= max_length )
    {
      sub_B17100(Entity, v48, v49);
      sub_B170A0();
    }
    v53 = skillList->m_Items[++v51];
    if ( v53 == targetId )
      goto LABEL_20;
  }
  v51 = 0;
LABEL_20:
  v54 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v54 )
    goto LABEL_89;
  v55 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v54,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  if ( !v55 )
    goto LABEL_89;
  v130 = v55;
  svtId = baseSvtId;
  EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v55, baseSvtId, v51, targetId, 0LL);
  if ( !v50 )
    goto LABEL_89;
  v58 = EntityFromSkillId;
  SkillEntity__getSkillMessageInfo(v50, &name, &detail, targetLv, v57);
  skillAfter = this->fields.skillAfter;
  v60 = targetIdOld >= 1 ? v133 : targetLv - 1;
  if ( !skillAfter )
    goto LABEL_89;
  if ( isOpen )
  {
    UnityEngine_GameObject__SetActive(skillAfter, 0, 0LL);
    skillIconBef = this->fields.skillIconBef;
    if ( !skillIconBef )
      goto LABEL_89;
    SkillIconComponent__Set_23612468(skillIconBef, targetId, targetLv, 0, 0, v61);
    skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v50, targetLv, v64);
    v65 = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !skillBefChargeTimeLb )
      goto LABEL_89;
    UILabel__set_text(skillBefChargeTimeLb, v65, 0LL);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    v68 = SkillEntity__getEffectChargeTurn(v50, v60, v67);
    if ( !beforeChargeTimeInfo )
      goto LABEL_89;
  }
  else
  {
    UnityEngine_GameObject__SetActive(skillAfter, 1, 0LL);
    skillIconAft = this->fields.skillIconAft;
    if ( !skillIconAft )
      goto LABEL_89;
    SkillIconComponent__Set_23612468(skillIconAft, targetId, targetLv, 0, 0, v69);
    skillAftChargeTimeLb = this->fields.skillAftChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v50, targetLv, v72);
    v73 = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !skillAftChargeTimeLb )
      goto LABEL_89;
    UILabel__set_text(skillAftChargeTimeLb, v73, 0LL);
    AfterChargeTimeInfo = this->fields.AfterChargeTimeInfo;
    v76 = SkillEntity__getEffectChargeTurn(v50, targetLv, v75);
    if ( !AfterChargeTimeInfo )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive(AfterChargeTimeInfo, v76 > 0, 0LL);
    skillAftTitleLb = this->fields.skillAftTitleLb;
    if ( !skillAftTitleLb )
      goto LABEL_89;
    UILabel__set_text(skillAftTitleLb, name, 0LL);
    key = targetIdOld;
    if ( isDispLv )
    {
      v129 = v60;
      v78 = this->fields.skillAftTitleLb;
      v79 = name;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v80 = LocalizationManager__Get((System_String_o *)StringLiteral_1716, 0LL);
      v134 = targetLv;
      v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v134);
      v82 = System_String__Format(v80, v81, 0LL);
      v83 = System_String__Concat_43743732(v79, v82, 0LL);
      if ( !v78 )
        goto LABEL_89;
      UILabel__set_text(v78, v83, 0LL);
      v60 = v129;
    }
    v84 = this->fields.skillAftTitleLb;
    if ( !v84 )
      goto LABEL_89;
    UILabel__SetCondensedScale(v84, 255, 0LL);
    if ( v58 )
    {
      if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
      }
      v85 = (UnityEngine_Component_o *)this->fields.skillAftTitleLb;
      if ( !v85 )
        goto LABEL_89;
      PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
      transform = UnityEngine_Component__get_transform(v85, 0LL);
      Object_19257936 = BaseMonoBehaviour__createObject_19257936((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
      if ( !Object_19257936 )
        goto LABEL_89;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  Object_19257936,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
      v90 = this->fields.skillAftTitleLb;
      v91 = (ServantSkillStrengthStatus_o *)Component_srcLineSprite;
      StrengthStatus = ServantSkillEntity__GetStrengthStatus(v58, 0LL);
      if ( !v91 )
        goto LABEL_89;
      v138 = (UnityEngine_Vector2Int_o)0x1200000014LL;
      ServantSkillStrengthStatus__Set(v91, v90, StrengthStatus, v58->fields.skillNum, 20, -9, v138, 0LL);
    }
    skillAftdetailLb = this->fields.skillAftdetailLb;
    if ( !skillAftdetailLb )
      goto LABEL_89;
    mFontSize = skillAftdetailLb->fields.mFontSize;
    WrapControlText__textBBCodeAdjust(skillAftdetailLb, detail, mFontSize, 0, 0, 0LL);
    if ( key < 1 )
    {
      SkillEntity__getSkillMessageInfo(v50, &name, &detail, v60, v95);
      v99 = this->fields.skillIconBef;
      if ( !v99 )
        goto LABEL_89;
      v100 = targetId;
    }
    else
    {
      v96 = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v46,
                               key,
                               (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !v96 )
        goto LABEL_89;
      v50 = v96;
      SkillEntity__getSkillMessageInfo(v96, &name, &detail, v60, v97);
      if ( !isRelease )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        detail = LocalizationManager__Get((System_String_o *)StringLiteral_12194, 0LL);
        WrapControlText__textBBCodeAdjust(this->fields.skillAftdetailLb, detail, mFontSize, 0, 0, 0LL);
      }
      v99 = this->fields.skillIconBef;
      if ( !v99 )
        goto LABEL_89;
      v100 = key;
    }
    SkillIconComponent__Set_23612468(v99, v100, v60, 0, 0, v98);
    v101 = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v50, v60, v102);
    v103 = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !v101 )
      goto LABEL_89;
    UILabel__set_text(v101, v103, 0LL);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    v68 = SkillEntity__getEffectChargeTurn(v50, v60, v104);
    targetIdOld = key;
    if ( !beforeChargeTimeInfo )
      goto LABEL_89;
  }
  UnityEngine_GameObject__SetActive(beforeChargeTimeInfo, v68 > 0, 0LL);
  skillBefTitleLb = this->fields.skillBefTitleLb;
  if ( !skillBefTitleLb )
    goto LABEL_89;
  UILabel__set_text(skillBefTitleLb, name, 0LL);
  if ( isDispLv )
  {
    v106 = this->fields.skillBefTitleLb;
    v107 = name;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v108 = LocalizationManager__Get((System_String_o *)StringLiteral_1717, 0LL);
    v109 = v133;
    if ( isOpen )
      v109 = targetLv;
    v134 = v109;
    v110 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v134);
    v111 = System_String__Format(v108, v110, 0LL);
    v112 = System_String__Concat_43743732(v107, v111, 0LL);
    if ( !v106 )
      goto LABEL_89;
    UILabel__set_text(v106, v112, 0LL);
  }
  v113 = this->fields.skillBefTitleLb;
  if ( !v113 )
    goto LABEL_89;
  UILabel__SetCondensedScale(v113, 255, 0LL);
  if ( !v58 )
    goto LABEL_86;
  v114 = ServantSkillEntity__GetStrengthStatus(v58, 0LL);
  if ( targetIdOld >= 1 )
  {
    v115 = ServantSkillMaster__getEntityFromSkillId(v130, svtId, v51, targetIdOld, 0LL);
    if ( !v115 )
      goto LABEL_89;
    v58 = v115;
    v114 = ServantSkillEntity__GetStrengthStatus(v115, 0LL);
  }
  v116 = v114;
  skillNum = v58->fields.skillNum;
  if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  }
  v118 = (UnityEngine_Component_o *)this->fields.skillBefTitleLb;
  if ( !v118
    || (v119 = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH,
        v120 = UnityEngine_Component__get_transform(v118, 0LL),
        (v121 = BaseMonoBehaviour__createObject_19257936((BaseMonoBehaviour_o *)this, v119, v120, 0LL, 0LL)) == 0LL)
    || (v122 = (ServantSkillStrengthStatus_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v121,
                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___)) == 0LL )
  {
LABEL_89:
    sub_B170D4();
  }
  v139 = (UnityEngine_Vector2Int_o)0x1200000014LL;
  ServantSkillStrengthStatus__Set(v122, this->fields.skillBefTitleLb, v116, skillNum, 20, -9, v139, 0LL);
LABEL_86:
  skillBefdetailLb = this->fields.skillBefdetailLb;
  if ( !skillBefdetailLb )
    goto LABEL_89;
  WrapControlText__textBBCodeAdjust(skillBefdetailLb, detail, skillBefdetailLb->fields.mFontSize, 0, 0, 0LL);
  v128 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v124, v125, v126, v127);
  System_Action___ctor(v128, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v128, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__SetChildrenActive(
        SkillUpResultWindowComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *skillInfo; // x0
  bool v5; // w21
  UnityEngine_GameObject_o *skillChangeInfo; // x0
  UnityEngine_GameObject_o *npInfo; // x0
  UnityEngine_GameObject_o *friendshipInfo; // x0
  UnityEngine_GameObject_o *powerupInfo; // x0
  bool v11; // w20
  UnityEngine_GameObject_o *costumeChangeInfo; // x0

  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_8;
  v5 = enable;
  UnityEngine_GameObject__SetActive(skillInfo, enable, 0LL);
  skillChangeInfo = this->fields.skillChangeInfo;
  if ( !skillChangeInfo )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(skillChangeInfo, v5, 0LL);
  npInfo = this->fields.npInfo;
  if ( !npInfo
    || (UnityEngine_GameObject__SetActive(npInfo, enable, 0LL), (friendshipInfo = this->fields.friendshipInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(friendshipInfo, enable, 0LL), (powerupInfo = this->fields.powerupInfo) == 0LL)
    || (v11 = enable,
        UnityEngine_GameObject__SetActive(powerupInfo, v11, 0LL),
        (costumeChangeInfo = this->fields.costumeChangeInfo) == 0LL) )
  {
LABEL_8:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(costumeChangeInfo, v11, 0LL);
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
  System_String_o *v15; // x0
  SkillUpResultWindowComponent_o *v16; // x0
  const MethodInfo *v17; // x2
  SkillEntity_o *SkillEntity; // x0
  const MethodInfo *v19; // x4
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  struct UILabel_o *skillChangeInfoDetailOld; // x0
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  System_String_o *v25; // x0
  SkillUpResultWindowComponent_o *v26; // x0
  const MethodInfo *v27; // x2
  SkillEntity_o *v28; // x0
  const MethodInfo *v29; // x4
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  struct UILabel_o *skillChangeInfoDetailNow; // x0
  System_String_o *text; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *v35; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40F928B & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId);
    sub_B16FFC(&StringLiteral_6848, v11);
    sub_B16FFC(&StringLiteral_1663, v12);
    sub_B16FFC(&StringLiteral_2533, v13);
    byte_40F928B = 1;
  }
  name = 0LL;
  v35 = 0LL;
  detail = 0LL;
  text = 0LL;
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2533, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoSubTitleOld, v15, 0LL);
  SkillEntity = SkillUpResultWindowComponent__GetSkillEntity(v16, oldSkillId, v17);
  if ( !SkillEntity )
    goto LABEL_15;
  SkillEntity__getSkillMessageInfo(SkillEntity, &name, &detail, oldSkillLv, v19);
  skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_6848, 0LL);
  v22 = System_String__Format(v21, (Il2CppObject *)name, 0LL);
  if ( !skillChangeInfoNameOld )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoNameOld, v22, 0LL);
  skillChangeInfoDetailOld = this->fields.skillChangeInfoDetailOld;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_15;
  WrapControlText__textBBCodeAdjust(
    skillChangeInfoDetailOld,
    detail,
    skillChangeInfoDetailOld->fields.mFontSize,
    0,
    0,
    0LL);
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_1663, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoSubTitleNow, v25, 0LL);
  v28 = SkillUpResultWindowComponent__GetSkillEntity(v26, nowSkillId, v27);
  if ( !v28
    || (SkillEntity__getSkillMessageInfo(v28, &v35, &text, nowSkillLv, v29),
        skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow,
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_6848, 0LL),
        v32 = System_String__Format(v31, (Il2CppObject *)v35, 0LL),
        !skillChangeInfoNameNow)
    || (UILabel__set_text(skillChangeInfoNameNow, v32, 0LL),
        (skillChangeInfoDetailNow = this->fields.skillChangeInfoDetailNow) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  WrapControlText__textBBCodeAdjust(
    skillChangeInfoDetailNow,
    text,
    skillChangeInfoDetailNow->fields.mFontSize,
    0,
    0,
    0LL);
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x27
  WarEntity_o *v24; // x25
  TreasureDvcLvMaster_o *v25; // x0
  TreasureDvcLvEntity_o *v26; // x21
  UILabel_o *npRubyNameLb; // x0
  UILabel_o *npNameLb; // x0
  bool v29; // w26
  UILabel_o *currentNpLvLb; // x24
  System_String_o *v31; // x0
  UILabel_o *resNpLvLb; // x24
  System_String_o *v33; // x0
  UnityEngine_Component_o *v34; // x0
  WebViewObject_o *v35; // x24
  SkillUpResultWindowComponent_c *v36; // x8
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UILabel_o *npBefDetailLb; // x0
  UILabel_o *npAftDetailLb; // x0
  System_String_o *v42; // x1
  UnityEngine_GameObject_o *npRankInfo; // x0
  UnityEngine_GameObject_o *npLvInfo; // x0
  UnityEngine_GameObject_o *npLvFirstInfo; // x0
  UnityEngine_GameObject_o *npChangeSp; // x0
  UILabel_o *npRankupBeforeLb; // x0
  System_String_o **v48; // x8
  UILabel_o *npRankupAfterLb; // x0
  UnityEngine_Component_o *v50; // x0
  WebViewObject_o *Component_WebViewObject; // x24
  UILabel_o *v52; // x20
  System_String_o *DetalShort_27990712; // x0
  struct UILabel_o *v54; // x8
  System_String_o *v55; // x22
  TreasureDvcLvMaster_o *v56; // x0
  TreasureDvcLvEntity_o *v57; // x0
  struct UILabel_o *v58; // x0
  int32_t mFontSize; // w2
  System_String_o *v60; // x1
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  UILabel_o *resNpLvFirstLb; // x24
  System_String_o *v66; // x0
  struct UILabel_o *v67; // x20
  System_String_o *v68; // x0
  struct UILabel_o *v69; // x8
  UILabel_o *v70; // x20
  System_String_o *v71; // x0
  struct UILabel_o *v72; // x8
  SkillUpResultWindowComponent_c *v73; // x8
  int32_t v74; // [xsp+Ch] [xbp-64h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-54h] BYREF

  lv = targetLv;
  if ( (byte_40F9284 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, usrSvtData);
    sub_B16FFC(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMaster_TreasureDvcMaster___, v16);
    sub_B16FFC(&DataManager_TypeInfo, v17);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v18);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v19);
    sub_B16FFC(&SkillUpResultWindowComponent_TypeInfo, v20);
    sub_B16FFC(&StringLiteral_1, v21);
    byte_40F9284 = 1;
  }
  entity = 0LL;
  v74 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_71;
  v23 = Master_WarQuestSelectionMaster;
  v24 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          Master_WarQuestSelectionMaster,
          targetId,
          (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  v25 = (TreasureDvcLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !v25 )
    goto LABEL_71;
  v26 = TreasureDvcLvMaster__GetEntity(v25, targetId, targetLv, 0LL);
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v23,
          &entity,
          targetIdOld,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
    targetIdOld = 0;
  if ( v24 )
  {
    npRubyNameLb = this->fields.npRubyNameLb;
    if ( !npRubyNameLb )
      goto LABEL_71;
    UILabel__set_text(npRubyNameLb, v24->fields.name, 0LL);
    npNameLb = this->fields.npNameLb;
    if ( !npNameLb )
      goto LABEL_71;
    v29 = kind != 5;
    UILabel__set_text(npNameLb, v24->fields.age, 0LL);
    NoblePhantasmNameOverwriter__SetOverwriteNpLabel(usrSvtData, this->fields.npNameLb, this->fields.npRubyNameLb, 0LL);
    v74 = targetLvOld;
    if ( targetIdOld > 0 || kind == 5 )
    {
      npRankInfo = this->fields.npRankInfo;
      if ( !npRankInfo )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive(npRankInfo, v29, 0LL);
      npLvInfo = this->fields.npLvInfo;
      if ( !npLvInfo )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive(npLvInfo, 0, 0LL);
      npLvFirstInfo = this->fields.npLvFirstInfo;
      if ( !npLvFirstInfo )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive(npLvFirstInfo, 0, 0LL);
      npChangeSp = this->fields.npChangeSp;
      if ( !npChangeSp )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive(npChangeSp, v29, 0LL);
      npRankupBeforeLb = this->fields.npRankupBeforeLb;
      if ( !npRankupBeforeLb )
        goto LABEL_71;
      v48 = entity ? &entity->fields.longName : (System_String_o **)&StringLiteral_1;
      UILabel__set_text(npRankupBeforeLb, *v48, 0LL);
      npRankupAfterLb = this->fields.npRankupAfterLb;
      if ( !npRankupAfterLb )
        goto LABEL_71;
      UILabel__set_text(npRankupAfterLb, v24->fields.longName, 0LL);
      v50 = (UnityEngine_Component_o *)this->fields.npRankupAfterLb;
      if ( !v50 )
        goto LABEL_71;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  v50,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      v73 = SkillUpResultWindowComponent_TypeInfo;
      if ( (BYTE3(SkillUpResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
        v73 = SkillUpResultWindowComponent_TypeInfo;
      }
      if ( !Component_WebViewObject )
        goto LABEL_71;
      UIWidget__set_color((UIWidget_o *)Component_WebViewObject, v73->static_fields->COLOR_VAL, 0LL);
      v74 = targetLvOld;
      if ( !v26 )
        goto LABEL_27;
    }
    else if ( targetLvOld <= 0 )
    {
      v61 = this->fields.npRankInfo;
      if ( !v61 )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive(v61, 0, 0LL);
      v62 = this->fields.npLvInfo;
      if ( !v62 )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive(v62, 0, 0LL);
      v63 = this->fields.npLvFirstInfo;
      if ( !v63 )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive(v63, 1, 0LL);
      v64 = this->fields.npChangeSp;
      if ( !v64 )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive(v64, 0, 0LL);
      resNpLvFirstLb = this->fields.resNpLvFirstLb;
      v66 = System_Int32__ToString((int32_t)&lv, 0LL);
      if ( !resNpLvFirstLb )
        goto LABEL_71;
      UILabel__set_text(resNpLvFirstLb, v66, 0LL);
      if ( !v26 )
      {
LABEL_27:
        npBefDetailLb = this->fields.npBefDetailLb;
        if ( npBefDetailLb )
        {
          UILabel__set_text(npBefDetailLb, (System_String_o *)StringLiteral_1, 0LL);
          npAftDetailLb = this->fields.npAftDetailLb;
          if ( npAftDetailLb )
          {
            v42 = (System_String_o *)StringLiteral_1;
LABEL_49:
            UILabel__set_text(npAftDetailLb, v42, 0LL);
            return;
          }
        }
        goto LABEL_71;
      }
    }
    else
    {
      currentNpLvLb = this->fields.currentNpLvLb;
      v31 = System_Int32__ToString((int32_t)&v74, 0LL);
      if ( !currentNpLvLb )
        goto LABEL_71;
      UILabel__set_text(currentNpLvLb, v31, 0LL);
      resNpLvLb = this->fields.resNpLvLb;
      v33 = System_Int32__ToString((int32_t)&lv, 0LL);
      if ( !resNpLvLb )
        goto LABEL_71;
      UILabel__set_text(resNpLvLb, v33, 0LL);
      v34 = (UnityEngine_Component_o *)this->fields.resNpLvLb;
      if ( !v34 )
        goto LABEL_71;
      v35 = UnityEngine_Component__GetComponent_WebViewObject_(
              v34,
              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      v36 = SkillUpResultWindowComponent_TypeInfo;
      if ( (BYTE3(SkillUpResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
        v36 = SkillUpResultWindowComponent_TypeInfo;
      }
      if ( !v35 )
        goto LABEL_71;
      UIWidget__set_color((UIWidget_o *)v35, v36->static_fields->COLOR_VAL, 0LL);
      v37 = this->fields.npRankInfo;
      if ( !v37 )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive(v37, 0, 0LL);
      v38 = this->fields.npLvInfo;
      if ( !v38 )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive(v38, 1, 0LL);
      v39 = this->fields.npLvFirstInfo;
      if ( !v39 )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive(v39, 0, 0LL);
      if ( !v26 )
        goto LABEL_27;
    }
    if ( kind == 5 )
    {
      v52 = this->fields.npBefDetailLb;
      DetalShort_27990712 = TreasureDvcLvEntity__getDetalShort_27990712(v26, lv, 0LL);
      v54 = this->fields.npBefDetailLb;
      if ( v54 )
      {
        WrapControlText__textAdjust(v52, DetalShort_27990712, v54->fields.mFontSize, 0, 0, 0LL);
        npAftDetailLb = this->fields.npAftDetailLb;
        if ( npAftDetailLb )
        {
          v42 = (System_String_o *)StringLiteral_1;
          goto LABEL_49;
        }
      }
LABEL_71:
      sub_B170D4();
    }
    if ( targetIdOld < 1 )
    {
      v67 = this->fields.npBefDetailLb;
      v68 = TreasureDvcLvEntity__getDetalShort_27990712(v26, v74, 0LL);
      v69 = this->fields.npBefDetailLb;
      if ( !v69 )
        goto LABEL_71;
      mFontSize = v69->fields.mFontSize;
      v60 = v68;
      v58 = v67;
    }
    else
    {
      v55 = (System_String_o *)StringLiteral_1;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v56 = (TreasureDvcLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
      if ( !v56 )
        goto LABEL_71;
      v57 = TreasureDvcLvMaster__GetEntity(v56, targetIdOld, targetLvOld, 0LL);
      if ( v57 )
        v55 = TreasureDvcLvEntity__getDetalShort_27990712(v57, v74, 0LL);
      v58 = this->fields.npBefDetailLb;
      if ( !v58 )
        goto LABEL_71;
      mFontSize = v58->fields.mFontSize;
      v60 = v55;
    }
    WrapControlText__textBBCodeAdjust(v58, v60, mFontSize, 0, 0, 0LL);
    v70 = this->fields.npAftDetailLb;
    v71 = TreasureDvcLvEntity__getDetalShort_27990712(v26, lv, 0LL);
    v72 = this->fields.npAftDetailLb;
    if ( !v72 )
      goto LABEL_71;
    WrapControlText__textBBCodeAdjust(v70, v71, v72->fields.mFontSize, 0, 0, 0LL);
  }
}