void PartyOrganizationConfirmMyServantMenu___cctor(const MethodInfo *method)
{
  if ( (byte_5933EB7 & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationConfirmMyServantMenu_TypeInfo);
    byte_5933EB7 = 1;
  }
  LODWORD(PartyOrganizationConfirmMyServantMenu_TypeInfo->static_fields->MESSAGE_POS_Y_DEFAULT) = (struct PartyOrganizationConfirmMyServantMenu_StaticFields)1118437376;
}


void PartyOrganizationConfirmMyServantMenu___ctor(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5933EB6 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5933EB6 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationConfirmMyServantMenu__Callback(
        PartyOrganizationConfirmMyServantMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *v9; // x20
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void PartyOrganizationConfirmMyServantMenu__Close(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmMyServantMenu__Close_40931300(this, 0, v2);
}


void PartyOrganizationConfirmMyServantMenu__Close_40931300(
        PartyOrganizationConfirmMyServantMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_5933EB2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PartyOrganizationConfirmMyServantMenu_EndClose__);
    byte_5933EB2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationConfirmMyServantMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void PartyOrganizationConfirmMyServantMenu__EndClose(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmMyServantMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void PartyOrganizationConfirmMyServantMenu__EndOpen(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void PartyOrganizationConfirmMyServantMenu__Init(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_5933EB0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933EB0 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0) )
  {
LABEL_9:
    sub_21FFECC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PartyOrganizationConfirmMyServantMenu__OnClickCancel(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5933EB4 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__);
    byte_5933EB4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 0, v5);
  }
}


void PartyOrganizationConfirmMyServantMenu__OnClickClose(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5933EB5 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    byte_5933EB5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 0, v5);
  }
}


void PartyOrganizationConfirmMyServantMenu__OnClickDecide(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5933EB3 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__);
    byte_5933EB3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 1, v5);
  }
}


void PartyOrganizationConfirmMyServantMenu__Open(
        PartyOrganizationConfirmMyServantMenu_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  bool v7; // w7
  QuestRestrictionInfo_o *v9; // x23
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  System_Text_StringBuilder_o *v15; // x24
  System_Int32_array *FixedMyServantSingleSvtIdList; // x0
  System_Int32_array *v17; // x29
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  PartyOrganizationConfirmMyServantMenu_c *v21; // x8
  UnityEngine_GameObject_o *v22; // x19
  __int64 v23; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v25; // x21
  int32_t v26; // w19
  System_Collections_Generic_List_object__o *v27; // x25
  __int64 v28; // x2
  const MethodInfo *v29; // x5
  il2cpp_array_size_t v30; // x19
  Il2CppObject *MasterData_object; // x20
  UnityEngine_GameObject_o *v32; // x27
  unsigned __int64 v33; // x28
  int32_t v34; // w21
  __int64 v35; // x1
  __int64 v36; // x2
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  int klass; // w8
  unsigned int v39; // w25
  FollowerInfo_o *v40; // x19
  __int64 v41; // x1
  __int64 v42; // x2
  ServantLeaderInfo_o *v43; // x26
  void *monitor; // x23
  UnityEngine_GameObject_c *v45; // x24
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v47; // x19
  __int64 v48; // x2
  System_String_o *SvtNameText; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x19
  UnityEngine_GameObject_o *supportMemberBase; // x21
  __int64 v63; // x2
  Il2CppObject *v64; // x21
  UILabel_o *titleLabel; // x19
  UILabel_o *messageLabel; // x19
  System_String_o *v67; // x0
  __int64 *v68; // x8
  UILabel_o *closeLabel; // x19
  UILabel_o *v70; // x19
  int v71; // w8
  __int64 v72; // x1
  __int64 v73; // x2
  UILabel_o *v74; // x19
  System_String_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  UILabel_o *v79; // x19
  System_String_o *v80; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  System_Action_o *v85; // x19
  unsigned int v86; // [xsp+10h] [xbp-B0h]
  int v87; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_List_object__o *v88; // [xsp+20h] [xbp-A0h]
  System_Text_StringBuilder_o *v89; // [xsp+28h] [xbp-98h]
  __int64 v90; // [xsp+30h] [xbp-90h]
  int maxLimitCount; // [xsp+44h] [xbp-7Ch]
  int32_t LimitCount; // [xsp+48h] [xbp-78h]
  bool IsGrandSvt; // [xsp+4Ch] [xbp-74h]
  QuestRestrictionInfo_o *v95; // [xsp+50h] [xbp-70h]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  v9 = questRestrictionInfo;
  if ( (byte_5933EB1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_21FFC50(&Method_PartyOrganizationConfirmMyServantMenu_EndOpen__);
    sub_21FFC50(&PartyOrganizationConfirmMyServantMenu_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewItem_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_10591/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/);
    sub_21FFC50(&StringLiteral_10539/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/);
    sub_21FFC50(&StringLiteral_10596/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_10589/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/);
    sub_21FFC50(&StringLiteral_10592/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/);
    sub_21FFC50(&StringLiteral_10595/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/);
    sub_21FFC50(&StringLiteral_10593/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_10597/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/);
    sub_21FFC50(&StringLiteral_10590/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_10540/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/);
    sub_21FFC50(&StringLiteral_10541/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/);
    sub_21FFC50(&StringLiteral_10594/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/);
    byte_5933EB1 = 1;
  }
  state = this->fields.state;
  entity = 0;
  if ( (state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)partyItem,
      (System_String_o *)setupInfo,
      (int32_t)questRestrictionInfo,
      (int32_t)callback,
      (bool)method,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_130;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    v15 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v15, 0);
    if ( kind )
    {
      if ( kind != 1 )
      {
        v17 = 0;
LABEL_13:
        gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
        if ( !gameObject )
          goto LABEL_130;
        v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        v21 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
        v22 = v18;
        if ( !*(&PartyOrganizationConfirmMyServantMenu_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMyServantMenu_TypeInfo, v19, v20);
          v21 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v22, v21->static_fields->MESSAGE_POS_Y_DEFAULT, 0);
        v95 = v9;
        v86 = kind;
        if ( v17 && (max_length = v17->max_length, (int)max_length >= 1) )
        {
          v25 = 0;
          while ( 1 )
          {
            if ( v25 >= (unsigned int)max_length )
              goto LABEL_131;
            v26 = v17->m_Items[v25];
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v23);
            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
            if ( !gameObject )
              goto LABEL_130;
            gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                       &entity,
                                                       v26,
                                                       (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)gameObject & 1) == 0 )
              break;
            LODWORD(max_length) = v17->max_length;
            if ( (__int64)++v25 >= (int)max_length )
              goto LABEL_25;
          }
          gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_130;
          v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          GameObjectExtensions__SetLocalPositionY(v76, 0.0, 0);
          v87 = 0;
        }
        else
        {
LABEL_25:
          v87 = 1;
        }
        v27 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v27,
          (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v17 && v87 )
        {
          v30 = v17->max_length;
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_130;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_130;
          gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)gameObject,
                                                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          if ( !v9 || !gameObject )
            goto LABEL_130;
          gameObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                     (NpcFollowerMaster_o *)gameObject,
                                                     v9->fields.questId,
                                                     v9->fields.questPhase,
                                                     0);
          if ( (int)v30 >= 1 )
          {
            v32 = gameObject;
            v33 = 0;
            v88 = v27;
            v89 = v15;
            v90 = (unsigned int)v30;
            while ( v33 < LODWORD(v17->max_length) )
            {
              v34 = v17->m_Items[v33];
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v28);
              if ( !byte_5931D52 )
              {
                sub_21FFC50(&NetworkManager_TypeInfo);
                byte_5931D52 = 1;
              }
              gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v28);
                gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
              }
              if ( !MasterData_object )
                goto LABEL_130;
              EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                   (UserServantCollectionMaster_o *)MasterData_object,
                                   *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 64),
                                   v34,
                                   0);
              if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v35, v36);
              gameObject = (UnityEngine_GameObject_o *)OptionManager__GetSpoilerSetting(0);
              if ( ((unsigned __int8)gameObject & 1) != 0 )
              {
                if ( !EntityDefinitely )
                  goto LABEL_130;
                gameObject = 0;
                maxLimitCount = -1;
              }
              else
              {
                if ( !EntityDefinitely )
                  goto LABEL_130;
                if ( UserServantCollectionEntity__IsGet(EntityDefinitely, 0) )
                {
                  maxLimitCount = EntityDefinitely->fields.maxLimitCount;
                  gameObject = (UnityEngine_GameObject_o *)UserServantCollectionEntity__IsGrandServant(
                                                             EntityDefinitely,
                                                             0);
                }
                else
                {
                  gameObject = 0;
                  maxLimitCount = 0;
                }
              }
              if ( !v32 )
                goto LABEL_130;
              klass = (int)v32[1].klass;
              LimitCount = EntityDefinitely->fields.maxLimitCount;
              IsGrandSvt = (char)gameObject;
              if ( klass >= 1 )
              {
                v39 = 0;
                while ( 1 )
                {
                  if ( v39 >= klass )
                    goto LABEL_131;
                  v40 = (FollowerInfo_o *)*((_QWORD *)&v32[1].monitor + (int)v39);
                  gameObject = (UnityEngine_GameObject_o *)FollowerInfo__GetReturnTypeByQuestId(v9->fields.questId, 0);
                  if ( !v40 )
                    goto LABEL_130;
                  gameObject = (UnityEngine_GameObject_o *)FollowerInfo__getServantLeaderInfo(
                                                             v40,
                                                             0,
                                                             (int32_t)gameObject,
                                                             0);
                  if ( gameObject )
                  {
                    v43 = (ServantLeaderInfo_o *)gameObject;
                    v45 = gameObject[2].klass;
                    monitor = gameObject[2].monitor;
                    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41, v42);
                    *(_QWORD *)&v97.fields.currentCryptoKey = v45;
                    *(_QWORD *)&v97.fields.fakeValue = monitor;
                    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                               v97,
                                                               0);
                    v9 = v95;
                    if ( (_DWORD)gameObject == v34 )
                      break;
                  }
                  klass = (int)v32[1].klass;
                  if ( (int)++v39 >= klass )
                    goto LABEL_63;
                }
                ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v95->fields.questId, 0);
                LimitCount = FollowerInfo__getLimitCount(v40, 0, ReturnTypeByQuestId, 0);
                IsGrandSvt = ServantLeaderInfo__get_IsGrandSvt(v43, 0);
LABEL_63:
                v27 = v88;
                v15 = v89;
              }
              v47 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_40973500(
                v47,
                v33,
                v34,
                LimitCount,
                setupInfo,
                v9,
                0,
                0,
                IsGrandSvt,
                0);
              if ( !v47 )
                goto LABEL_130;
              v47->fields.nameLimitCount = maxLimitCount;
              if ( v33 )
              {
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v48);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_10540/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/,
                                                           0);
                if ( !v15 )
                  goto LABEL_130;
                System_Text_StringBuilder__Append_75521760(v15, (System_String_o *)gameObject, 0);
                System_Text_StringBuilder__Append_75521760(v15, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
              }
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v48);
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10541/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/,
                                                         0);
              if ( !v15 )
                goto LABEL_130;
              System_Text_StringBuilder__Append_75521760(v15, (System_String_o *)gameObject, 0);
              SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v47, 0);
              System_Text_StringBuilder__Append_75521760(v15, SvtNameText, 0);
              v50 = LocalizationManager__Get((System_String_o *)StringLiteral_10539/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, 0);
              gameObject = (UnityEngine_GameObject_o *)System_Text_StringBuilder__Append_75521760(v15, v50, 0);
              if ( !v27 )
                goto LABEL_130;
              items = v27->fields._items;
              v58 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v27->fields._version;
              if ( !items )
                goto LABEL_130;
              size = v27->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v27,
                  (Il2CppObject *)v47,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
              }
              else
              {
                v60 = &items->obj.klass + size;
                v27->fields._size = size + 1;
                v60[4] = (Il2CppClass *)v47;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v60 + 4), (int32_t)v47, v51, v52, v53, v54, v55, v56);
              }
              if ( ++v33 == v90 )
                goto LABEL_79;
            }
LABEL_131:
            sub_21FFED4(gameObject);
          }
        }
LABEL_79:
        supportMemberBase = this->fields.supportMemberBase;
        memberObjectList = this->fields.memberObjectList;
        if ( !*(&PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, v14, v28);
        PartyOrganizationConfirmItemDraw__SetPartyIcon(
          (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v27,
          memberObjectList,
          supportMemberBase,
          0,
          0,
          v29);
        if ( v86 <= 1 )
        {
          gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
          if ( !gameObject )
            goto LABEL_130;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_130;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
          if ( !gameObject )
            goto LABEL_130;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_130;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
          if ( !gameObject )
            goto LABEL_130;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_130;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
          if ( !gameObject )
            goto LABEL_130;
          gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                                                     gameObject,
                                                     0,
                                                     1,
                                                     gameObject->klass[1]._1.implementedInterfaces);
        }
        if ( !v15 )
          goto LABEL_130;
        gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v15->klass->vtable._3_ToString.methodPtr)(
                                                   v15,
                                                   v15->klass->vtable._3_ToString.method);
        v64 = (Il2CppObject *)gameObject;
        if ( v86 )
        {
          if ( v86 != 1 )
          {
LABEL_128:
            this->fields.state = 1;
            v85 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(v85, (Il2CppObject *)this, Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, 0);
            BaseDialog__Open((BaseDialog_o *)this, v85, 0, 0, 0);
            return;
          }
          titleLabel = this->fields.titleLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v63);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10594/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, 0);
          if ( !titleLabel
            || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0),
                messageLabel = this->fields.messageLabel,
                v67 = LocalizationManager__Get((System_String_o *)StringLiteral_10593/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, 0),
                gameObject = (UnityEngine_GameObject_o *)System_String__Format(v67, v64, 0),
                !messageLabel) )
          {
LABEL_130:
            sub_21FFECC(gameObject, v14);
          }
          UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
          v68 = &StringLiteral_10592/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/;
          closeLabel = this->fields.closeLabel;
        }
        else
        {
          if ( !v95 )
            goto LABEL_130;
          v70 = this->fields.titleLabel;
          v71 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
          if ( v95->fields.isFixedMyServantPosition )
          {
            if ( !v71 )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v63);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10591/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0);
            if ( !v70 )
              goto LABEL_130;
            UILabel__set_text(v70, (System_String_o *)gameObject, 0);
            v74 = this->fields.messageLabel;
            if ( v87 )
            {
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72, v73);
              v75 = LocalizationManager__Get((System_String_o *)StringLiteral_10590/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v75, v64, 0);
              if ( !v74 )
                goto LABEL_130;
            }
            else
            {
              gameObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__GetDialogMessageMySvtPos(v95, 0);
              if ( !v74 )
                goto LABEL_130;
            }
            UILabel__set_text(v74, (System_String_o *)gameObject, 0);
            closeLabel = this->fields.closeLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v81, v82);
            v68 = &StringLiteral_10589/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
          }
          else
          {
            if ( !v71 )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v63);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10597/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0);
            if ( !v70 )
              goto LABEL_130;
            UILabel__set_text(v70, (System_String_o *)gameObject, 0);
            v79 = this->fields.messageLabel;
            if ( v87 )
            {
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77, v78);
              v80 = LocalizationManager__Get((System_String_o *)StringLiteral_10596/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v80, v64, 0);
              if ( !v79 )
                goto LABEL_130;
            }
            else
            {
              gameObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__GetDialogMessageSvtPos(v95, 0);
              if ( !v79 )
                goto LABEL_130;
            }
            UILabel__set_text(v79, (System_String_o *)gameObject, 0);
            closeLabel = this->fields.closeLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v83, v84);
            v68 = &StringLiteral_10595/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
          }
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v68, 0);
        if ( closeLabel )
        {
          UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
          goto LABEL_128;
        }
        goto LABEL_130;
      }
      if ( !v9 )
        goto LABEL_130;
      FixedMyServantSingleSvtIdList = QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(v9, 0);
    }
    else
    {
      if ( !v9 )
        goto LABEL_130;
      FixedMyServantSingleSvtIdList = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(v9, 0);
    }
    v17 = FixedMyServantSingleSvtIdList;
    goto LABEL_13;
  }
}


void PartyOrganizationConfirmMyServantMenu__add_callbackFunc(
        PartyOrganizationConfirmMyServantMenu_o *this,
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationConfirmMyServantMenu_o *v13; // x0
  PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5933EAE & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
    byte_5933EAE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmMyServantMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationConfirmMyServantMenu_o *)sub_220024C(
                                                     v8,
                                                     PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo,
                                                     v9,
                                                     v10);
  PartyOrganizationConfirmMyServantMenu__remove_callbackFunc(v13, v14, v15);
}


void PartyOrganizationConfirmMyServantMenu__remove_callbackFunc(
        PartyOrganizationConfirmMyServantMenu_o *this,
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationConfirmMyServantMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5933EAF & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
    byte_5933EAF = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmMyServantMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationConfirmMyServantMenu_o *)sub_220024C(
                                                     v8,
                                                     PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo,
                                                     v9,
                                                     v10);
  PartyOrganizationConfirmMyServantMenu__Init(v13, v14);
}


void PartyOrganizationConfirmMyServantMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FF1634;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF15EC;
}


System_IAsyncResult_o *PartyOrganizationConfirmMyServantMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void PartyOrganizationConfirmMyServantMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void PartyOrganizationConfirmMyServantMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}