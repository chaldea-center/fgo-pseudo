void __fastcall QuestResetConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct QuestResetConfirmDialog_StaticFields *static_fields; // x8

  if ( (byte_4B19D32 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestResetConfirmDialog_TypeInfo, v1, v2);
    byte_4B19D32 = 1;
  }
  static_fields = QuestResetConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->PARTY_OBJ_POSY_NORMAL = 0x425C0000420C0000LL;
  static_fields->QUEST_NAME_LABEL_MAX_WITDH = 700.0;
}


void __fastcall QuestResetConfirmDialog___ctor(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19D31 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B19D31 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__Close(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestResetConfirmDialog__Close_45977576(this, 0LL, v2);
}


void __fastcall QuestResetConfirmDialog__Close_45977576(
        QuestResetConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B19D2D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_QuestResetConfirmDialog_EndClose__, v10, v11);
    byte_4B19D2D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall QuestResetConfirmDialog__EndClose(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  QuestResetConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


void __fastcall QuestResetConfirmDialog__EndOpen(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall QuestResetConfirmDialog__Init(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v7; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *buttonCancelLabel; // x20

  if ( (byte_4B19D2B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B19D2B = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_15;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_15;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  *(_WORD *)&this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_15:
    sub_1BCAA3C(gameObject, v7);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__OnClickCancel(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B19D2F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_QuestResetConfirmDialog_OnClickCancel__, method, v2);
    byte_4B19D2F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_QuestResetConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_QuestResetConfirmDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall QuestResetConfirmDialog__OnClickDecide(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isDecideBtnSe; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B19D2E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_QuestResetConfirmDialog_OnClickDecide__, method, v2);
    byte_4B19D2E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v5 = Method_QuestResetConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_QuestResetConfirmDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8 * isDecideBtnSe, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall QuestResetConfirmDialog__Open(
        QuestResetConfirmDialog_o *this,
        int32_t questId,
        QuestResetConfirmDialog_ClickDelegate_o *func,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  QuestResetConfirmDialog__Setup(this, questId, func, canMaskTouchClose, maskType, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestResetConfirmDialog__Setup(
        QuestResetConfirmDialog_o *this,
        int32_t questId,
        QuestResetConfirmDialog_ClickDelegate_o *func,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
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
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  Il2CppObject *Master_object; // x0
  void *ClearDeckInfo; // x0
  __int64 v57; // x1
  System_Object_array *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Object_array *v65; // x23
  __int64 v66; // x1
  System_Collections_Generic_List_object__o *servantFaceIconList; // x8
  ServantLimitImageMaster_o *v68; // x24
  signed __int64 v69; // x25
  __int64 v70; // x2
  __int64 v71; // x3
  unsigned __int64 max_length; // x8
  ServantFaceIconComponent_o *v73; // x26
  Il2CppObject *v74; // x22
  IconLabelInfo_o *v75; // x27
  System_Collections_Generic_List_object__o *monitor; // x0
  _DWORD *v77; // x8
  int32_t v78; // w27
  int32_t v79; // w3
  Il2CppObject *v80; // x24
  QuestReleaseMaster_o *v81; // x23
  int32_t GroupId; // w0
  bool IsContainUnPlayableQuestByTargetId; // w0
  __int64 v84; // x1
  UnityEngine_Object_o *partyObject; // x24
  bool v86; // w23
  __int64 v87; // x1
  UnityEngine_GameObject_o *v88; // x24
  QuestResetConfirmDialog_c *v89; // x0
  float *p_PARTY_OBJ_POSY_NORMAL; // x8
  UnityEngine_Object_o *titleLabel; // x24
  __int64 v92; // x1
  UILabel_o *v93; // x24
  UnityEngine_Object_o *nameLabel; // x24
  __int64 v95; // x1
  QuestEntity_o *QuestEntity; // x0
  __int64 v97; // x1
  UILabel_o *v98; // x22
  QuestEntity_o *v99; // x24
  System_String_o *v100; // x25
  Il2CppObject *QuestName; // x0
  UILabel_o *v102; // x22
  UnityEngine_Object_o *main1Label; // x22
  __int64 v104; // x1
  UILabel_o *v105; // x22
  __int64 *v106; // x8
  UnityEngine_Object_o *buttonDecideLabel; // x22
  __int64 v108; // x1
  UILabel_o *v109; // x22
  UnityEngine_Object_o *buttonCancelLabel; // x22
  __int64 v111; // x1
  UILabel_o *v112; // x22
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  System_Action_o *v116; // x21
  int32_t type; // [xsp+44h] [xbp-6Ch]
  int32_t v118; // [xsp+48h] [xbp-68h]
  bool v119; // [xsp+4Ch] [xbp-64h]

  if ( (byte_4B19D2C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&questId, func);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestGroupMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestReleaseMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, v19, v20);
    sub_1BCA7E0(&DataManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__, v27, v28);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Count__,
      v29,
      v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__, v31, v32);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__,
      v33,
      v34);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_QuestResetConfirmDialog_EndOpen__, v39, v40);
    sub_1BCA7E0(&QuestResetConfirmDialog_TypeInfo, v41, v42);
    sub_1BCA7E0(&StringLiteral_11030/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_11032/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_11031/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_11035/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_11034/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_11033/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/, v53, v54);
    byte_4B19D2C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_object )
  {
    ClearDeckInfo = UserEventAlloutBattleMaster__GetClearDeckInfo(
                      (UserEventAlloutBattleMaster_o *)Master_object,
                      questId,
                      0LL);
    if ( !ClearDeckInfo )
      goto LABEL_30;
    v58 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)ClearDeckInfo,
            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( v58 )
    {
      v65 = v58;
      this->fields.clickFunc = func;
      v118 = questId;
      v119 = canMaskTouchClose;
      type = maskType;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.clickFunc, (int64_t)func, v59, v60, v61, v62, v63, v64);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v66);
      ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
      if ( !servantFaceIconList )
        goto LABEL_30;
      v68 = (ServantLimitImageMaster_o *)ClearDeckInfo;
      v69 = 0LL;
      while ( v69 < servantFaceIconList->fields._size )
      {
        ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                          servantFaceIconList,
                          v69,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
        max_length = v65->max_length;
        v73 = (ServantFaceIconComponent_o *)ClearDeckInfo;
        if ( v69 >= (int)max_length )
        {
          if ( !ClearDeckInfo )
            goto LABEL_30;
          ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)ClearDeckInfo, 0LL);
        }
        else
        {
          if ( v69 >= max_length )
            sub_1BCAA44(ClearDeckInfo, v57);
          v74 = v65->m_Items[v69];
          v75 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v57, v70, v71);
          IconLabelInfo___ctor(v75, 0LL);
          if ( !v74 )
            goto LABEL_30;
          if ( !v75 )
            goto LABEL_30;
          IconLabelInfo__Set_38850420(v75, 2, (int32_t)v74[1].monitor, (int32_t)v74[1].monitor, 0, 0, 1, 0, 0LL);
          if ( !v68 )
            goto LABEL_30;
          ClearDeckInfo = (void *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                    v68,
                                    HIDWORD(v74[1].klass),
                                    (int32_t)v74[2].klass,
                                    0LL);
          if ( !v73 )
            goto LABEL_30;
          ServantFaceIconComponent__Set_38928428(
            v73,
            HIDWORD(v74[1].klass),
            HIDWORD(v74[1].monitor),
            (_DWORD)ClearDeckInfo - ((int)ClearDeckInfo < 11),
            HIDWORD(v74[2].klass),
            v75,
            0LL,
            2,
            0,
            0,
            0LL,
            0,
            0,
            0,
            0,
            0LL);
          monitor = (System_Collections_Generic_List_object__o *)v74[2].monitor;
          if ( monitor && monitor->fields._size >= 1 )
          {
            ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                              monitor,
                              0,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
            if ( !ClearDeckInfo )
              goto LABEL_30;
            v77 = ClearDeckInfo;
            ClearDeckInfo = v74[2].monitor;
            if ( !ClearDeckInfo )
              goto LABEL_30;
            v78 = v77[4];
            ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)ClearDeckInfo,
                              0,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
            if ( !ClearDeckInfo )
              goto LABEL_30;
            v79 = *((_DWORD *)ClearDeckInfo + 5);
          }
          else
          {
            v79 = 0;
            v78 = 0;
          }
          ServantFaceIconComponent__SetEquip_38933152(v73, HIDWORD(v74[1].klass), v78, v79, 0LL);
        }
        servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
        ++v69;
        if ( !servantFaceIconList )
          goto LABEL_30;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v57);
      v80 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestGroupMaster___);
      ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
      if ( !v80 )
        goto LABEL_30;
      v81 = (QuestReleaseMaster_o *)ClearDeckInfo;
      GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)v80, v118, 17, 0LL);
      ClearDeckInfo = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)v80, GroupId, 17, 0LL);
      if ( !v81 )
        goto LABEL_30;
      IsContainUnPlayableQuestByTargetId = QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
                                             v81,
                                             (System_Int32_array *)ClearDeckInfo,
                                             v118,
                                             0LL);
      partyObject = (UnityEngine_Object_o *)this->fields.partyObject;
      v86 = IsContainUnPlayableQuestByTargetId;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v84);
      if ( UnityEngine_Object__op_Inequality(partyObject, 0LL, 0LL) )
      {
        v88 = this->fields.partyObject;
        v89 = QuestResetConfirmDialog_TypeInfo;
        if ( !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo, v87);
          v89 = QuestResetConfirmDialog_TypeInfo;
        }
        p_PARTY_OBJ_POSY_NORMAL = &v89->static_fields->PARTY_OBJ_POSY_NORMAL;
        if ( v86 )
          ++p_PARTY_OBJ_POSY_NORMAL;
        GameObjectExtensions__SetLocalPositionY(v88, *p_PARTY_OBJ_POSY_NORMAL, 0LL);
      }
      titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v87);
      if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
      {
        v93 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v92);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_11035/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/, 0LL);
        if ( !v93 )
          goto LABEL_30;
        UILabel__set_text(v93, (System_String_o *)ClearDeckInfo, 0LL);
      }
      nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v92);
      if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v95);
        ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
        if ( !ClearDeckInfo )
          goto LABEL_30;
        QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)ClearDeckInfo, v118, 0LL);
        v98 = this->fields.nameLabel;
        v99 = QuestEntity;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v97);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_11034/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/, 0LL);
        if ( !v99 )
          goto LABEL_30;
        v100 = (System_String_o *)ClearDeckInfo;
        QuestName = (Il2CppObject *)QuestEntity__getQuestName(v99, 0LL);
        ClearDeckInfo = System_String__Format(v100, QuestName, 0LL);
        if ( !v98 )
          goto LABEL_30;
        UILabel__set_text(v98, (System_String_o *)ClearDeckInfo, 0LL);
        v102 = this->fields.nameLabel;
        ClearDeckInfo = QuestResetConfirmDialog_TypeInfo;
        if ( !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo, v57);
        if ( !v102 )
          goto LABEL_30;
        UILabel__SetCondensedScale_47600808(
          v102,
          QuestResetConfirmDialog_TypeInfo->static_fields->QUEST_NAME_LABEL_MAX_WITDH,
          0LL);
      }
      main1Label = (UnityEngine_Object_o *)this->fields.main1Label;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v95);
      if ( !UnityEngine_Object__op_Inequality(main1Label, 0LL, 0LL) )
      {
LABEL_75:
        buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v104);
        if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
        {
          v109 = this->fields.buttonDecideLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
          ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_11031/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/, 0LL);
          if ( !v109 )
            goto LABEL_30;
          UILabel__set_text(v109, (System_String_o *)ClearDeckInfo, 0LL);
        }
        buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v108);
        if ( !UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
          goto LABEL_89;
        v112 = this->fields.buttonCancelLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v111);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_11030/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, 0LL);
        if ( v112 )
        {
          UILabel__set_text(v112, (System_String_o *)ClearDeckInfo, 0LL);
LABEL_89:
          *(_WORD *)&this->fields.isButtonEnable = 256;
          BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v119, 0LL);
          v116 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v113, v114, v115);
          System_Action___ctor(v116, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v116, type, 0LL);
          return;
        }
LABEL_30:
        sub_1BCAA3C(ClearDeckInfo, v57);
      }
      v105 = this->fields.main1Label;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v86 )
        {
LABEL_70:
          v106 = &StringLiteral_11033/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/;
LABEL_73:
          ClearDeckInfo = LocalizationManager__Get((System_String_o *)*v106, 0LL);
          if ( !v105 )
            goto LABEL_30;
          UILabel__set_text(v105, (System_String_o *)ClearDeckInfo, 0LL);
          goto LABEL_75;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v104);
        if ( v86 )
          goto LABEL_70;
      }
      v106 = &StringLiteral_11032/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/;
      goto LABEL_73;
    }
  }
}


UILabel_o *__fastcall QuestResetConfirmDialog__get_ButtonCancelLabel(
        QuestResetConfirmDialog_o *this,
        const MethodInfo *method)
{
  return this->fields.buttonCancelLabel;
}


UILabel_o *__fastcall QuestResetConfirmDialog__get_ButtonDecideLabel(
        QuestResetConfirmDialog_o *this,
        const MethodInfo *method)
{
  return this->fields.buttonDecideLabel;
}


UnityEngine_GameObject_o *__fastcall QuestResetConfirmDialog__get_closeBtnObject(
        QuestResetConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B19D30 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19D30 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestResetConfirmDialog_ClickDelegate___ctor(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A117A8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11760;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall QuestResetConfirmDialog_ClickDelegate__BeginInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isOk;
  if ( (byte_4B19D33 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isOk, callback);
    byte_4B19D33 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall QuestResetConfirmDialog_ClickDelegate__EndInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall QuestResetConfirmDialog_ClickDelegate__Invoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isOk,
    *(_QWORD *)&this->fields.extra_arg);
}