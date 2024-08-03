void __fastcall QuestResetConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct QuestResetConfirmDialog_StaticFields *static_fields; // x8

  if ( (byte_49FFF0F & 1) == 0 )
  {
    sub_1B640C8(&QuestResetConfirmDialog_TypeInfo, v1);
    byte_49FFF0F = 1;
  }
  static_fields = QuestResetConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->PARTY_OBJ_POSY_NORMAL = 0x425C0000420C0000LL;
  static_fields->QUEST_NAME_LABEL_MAX_WITDH = 700.0;
}


void __fastcall QuestResetConfirmDialog___ctor(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49FFF0E & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49FFF0E = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__Close(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestResetConfirmDialog__Close_44991012(this, 0LL, v2);
}


void __fastcall QuestResetConfirmDialog__Close_44991012(
        QuestResetConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49FFF0A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_QuestResetConfirmDialog_EndClose__, v6);
    byte_49FFF0A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.isButtonEnable = 0;
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall QuestResetConfirmDialog__EndClose(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v7; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  QuestResetConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v7 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B6406C(p_closeCallbackFunc, 0, v4, v5);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v7->fields.m_target)(
      v7->fields.original_method_info,
      *(_QWORD *)&v7->fields.extra_arg);
  }
}


void __fastcall QuestResetConfirmDialog__EndOpen(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall QuestResetConfirmDialog__Init(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *buttonCancelLabel; // x20

  if ( (byte_49FFF08 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49FFF08 = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_15;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1B64324(gameObject);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__OnClickCancel(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_49FFF0C & 1) == 0 )
  {
    sub_1B640C8(&Method_QuestResetConfirmDialog_OnClickCancel__, method);
    byte_49FFF0C = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_QuestResetConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_QuestResetConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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
  _BOOL4 isDecideBtnSe; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_49FFF0B & 1) == 0 )
  {
    sub_1B640C8(&Method_QuestResetConfirmDialog_OnClickDecide__, method);
    byte_49FFF0B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v4 = Method_QuestResetConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B640E0(Method_QuestResetConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * isDecideBtnSe, 0LL);
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
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  Il2CppObject *Master_object; // x0
  void *ClearDeckInfo; // x0
  System_Object_array *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Object_array *v38; // x23
  System_Collections_Generic_List_object__o *servantFaceIconList; // x8
  ServantLimitImageMaster_o *v40; // x24
  signed __int64 v41; // x25
  __int64 v42; // x1
  __int64 v43; // x2
  unsigned __int64 max_length; // x8
  ServantFaceIconComponent_o *v45; // x26
  Il2CppObject *v46; // x22
  IconLabelInfo_o *v47; // x27
  System_Collections_Generic_List_object__o *monitor; // x0
  _DWORD *v49; // x8
  int32_t v50; // w27
  int32_t v51; // w3
  Il2CppObject *v52; // x24
  QuestReleaseMaster_o *v53; // x23
  int32_t GroupId; // w0
  bool IsContainUnPlayableQuestByTargetId; // w0
  UnityEngine_Object_o *partyObject; // x24
  bool v57; // w23
  UnityEngine_GameObject_o *v58; // x24
  QuestResetConfirmDialog_c *v59; // x0
  float *p_PARTY_OBJ_POSY_NORMAL; // x8
  UnityEngine_Object_o *titleLabel; // x24
  UILabel_o *v62; // x24
  UnityEngine_Object_o *nameLabel; // x24
  QuestEntity_o *QuestEntity; // x0
  UILabel_o *v65; // x22
  QuestEntity_o *v66; // x24
  System_String_o *v67; // x25
  Il2CppObject *QuestName; // x0
  UILabel_o *v69; // x22
  UnityEngine_Object_o *main1Label; // x22
  UILabel_o *v71; // x22
  __int64 *v72; // x8
  UnityEngine_Object_o *buttonDecideLabel; // x22
  UILabel_o *v74; // x22
  UnityEngine_Object_o *buttonCancelLabel; // x22
  UILabel_o *v76; // x22
  __int64 v77; // x1
  __int64 v78; // x2
  System_Action_o *v79; // x21
  int32_t type; // [xsp+44h] [xbp-6Ch]
  int32_t v81; // [xsp+48h] [xbp-68h]
  bool v82; // [xsp+4Ch] [xbp-64h]

  if ( (byte_49FFF09 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestGroupMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestReleaseMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, v15);
    sub_1B640C8(&DataManager_TypeInfo, v16);
    sub_1B640C8(&IconLabelInfo_TypeInfo, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Count__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__, v22);
    sub_1B640C8(&LocalizationManager_TypeInfo, v23);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v24);
    sub_1B640C8(&Method_QuestResetConfirmDialog_EndOpen__, v25);
    sub_1B640C8(&QuestResetConfirmDialog_TypeInfo, v26);
    sub_1B640C8(&StringLiteral_10842/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, v27);
    sub_1B640C8(&StringLiteral_10844/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/, v28);
    sub_1B640C8(&StringLiteral_10843/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/, v29);
    sub_1B640C8(&StringLiteral_10847/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/, v30);
    sub_1B640C8(&StringLiteral_10846/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/, v31);
    sub_1B640C8(&StringLiteral_10845/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/, v32);
    byte_49FFF09 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_object )
  {
    ClearDeckInfo = UserEventAlloutBattleMaster__GetClearDeckInfo(
                      (UserEventAlloutBattleMaster_o *)Master_object,
                      questId,
                      0LL);
    if ( !ClearDeckInfo )
      goto LABEL_30;
    v35 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)ClearDeckInfo,
            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( v35 )
    {
      v38 = v35;
      this->fields.clickFunc = func;
      v81 = questId;
      v82 = canMaskTouchClose;
      type = maskType;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)func, v36, v37);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
      if ( !servantFaceIconList )
        goto LABEL_30;
      v40 = (ServantLimitImageMaster_o *)ClearDeckInfo;
      v41 = 0LL;
      while ( v41 < servantFaceIconList->fields._size )
      {
        ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                          servantFaceIconList,
                          v41,
                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
        max_length = v38->max_length;
        v45 = (ServantFaceIconComponent_o *)ClearDeckInfo;
        if ( v41 >= (int)max_length )
        {
          if ( !ClearDeckInfo )
            goto LABEL_30;
          ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)ClearDeckInfo, 0LL);
        }
        else
        {
          if ( v41 >= max_length )
            sub_1B6432C(ClearDeckInfo, v42);
          v46 = v38->m_Items[v41];
          v47 = (IconLabelInfo_o *)sub_1B64314(IconLabelInfo_TypeInfo, v42, v43);
          IconLabelInfo___ctor(v47, 0LL);
          if ( !v46 )
            goto LABEL_30;
          if ( !v47 )
            goto LABEL_30;
          IconLabelInfo__Set_37825360(v47, 2, (int32_t)v46[1].monitor, (int32_t)v46[1].monitor, 0, 0, 1, 0, 0LL);
          if ( !v40 )
            goto LABEL_30;
          ClearDeckInfo = (void *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                    v40,
                                    HIDWORD(v46[1].klass),
                                    (int32_t)v46[2].klass,
                                    0LL);
          if ( !v45 )
            goto LABEL_30;
          ServantFaceIconComponent__Set_37902064(
            v45,
            HIDWORD(v46[1].klass),
            HIDWORD(v46[1].monitor),
            (_DWORD)ClearDeckInfo - ((int)ClearDeckInfo < 11),
            HIDWORD(v46[2].klass),
            v47,
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
          monitor = (System_Collections_Generic_List_object__o *)v46[2].monitor;
          if ( monitor && monitor->fields._size >= 1 )
          {
            ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                              monitor,
                              0,
                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
            if ( !ClearDeckInfo )
              goto LABEL_30;
            v49 = ClearDeckInfo;
            ClearDeckInfo = v46[2].monitor;
            if ( !ClearDeckInfo )
              goto LABEL_30;
            v50 = v49[4];
            ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)ClearDeckInfo,
                              0,
                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
            if ( !ClearDeckInfo )
              goto LABEL_30;
            v51 = *((_DWORD *)ClearDeckInfo + 5);
          }
          else
          {
            v51 = 0;
            v50 = 0;
          }
          ServantFaceIconComponent__SetEquip_37906800(v45, HIDWORD(v46[1].klass), v50, v51, 0LL);
        }
        servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
        ++v41;
        if ( !servantFaceIconList )
          goto LABEL_30;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v52 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestGroupMaster___);
      ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
      if ( !v52 )
        goto LABEL_30;
      v53 = (QuestReleaseMaster_o *)ClearDeckInfo;
      GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)v52, v81, 17, 0LL);
      ClearDeckInfo = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)v52, GroupId, 17, 0LL);
      if ( !v53 )
        goto LABEL_30;
      IsContainUnPlayableQuestByTargetId = QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
                                             v53,
                                             (System_Int32_array *)ClearDeckInfo,
                                             v81,
                                             0LL);
      partyObject = (UnityEngine_Object_o *)this->fields.partyObject;
      v57 = IsContainUnPlayableQuestByTargetId;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(partyObject, 0LL, 0LL) )
      {
        v58 = this->fields.partyObject;
        v59 = QuestResetConfirmDialog_TypeInfo;
        if ( !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
          v59 = QuestResetConfirmDialog_TypeInfo;
        }
        p_PARTY_OBJ_POSY_NORMAL = &v59->static_fields->PARTY_OBJ_POSY_NORMAL;
        if ( v57 )
          ++p_PARTY_OBJ_POSY_NORMAL;
        GameObjectExtensions__SetLocalPositionY(v58, *p_PARTY_OBJ_POSY_NORMAL, 0LL);
      }
      titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
      {
        v62 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10847/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/, 0LL);
        if ( !v62 )
          goto LABEL_30;
        UILabel__set_text(v62, (System_String_o *)ClearDeckInfo, 0LL);
      }
      nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestMaster___);
        if ( !ClearDeckInfo )
          goto LABEL_30;
        QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)ClearDeckInfo, v81, 0LL);
        v65 = this->fields.nameLabel;
        v66 = QuestEntity;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10846/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/, 0LL);
        if ( !v66 )
          goto LABEL_30;
        v67 = (System_String_o *)ClearDeckInfo;
        QuestName = (Il2CppObject *)QuestEntity__getQuestName(v66, 0LL);
        ClearDeckInfo = System_String__Format(v67, QuestName, 0LL);
        if ( !v65 )
          goto LABEL_30;
        UILabel__set_text(v65, (System_String_o *)ClearDeckInfo, 0LL);
        v69 = this->fields.nameLabel;
        ClearDeckInfo = QuestResetConfirmDialog_TypeInfo;
        if ( !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
        if ( !v69 )
          goto LABEL_30;
        UILabel__SetCondensedScale_46760740(
          v69,
          QuestResetConfirmDialog_TypeInfo->static_fields->QUEST_NAME_LABEL_MAX_WITDH,
          0LL);
      }
      main1Label = (UnityEngine_Object_o *)this->fields.main1Label;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(main1Label, 0LL, 0LL) )
      {
LABEL_75:
        buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
        {
          v74 = this->fields.buttonDecideLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10843/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/, 0LL);
          if ( !v74 )
            goto LABEL_30;
          UILabel__set_text(v74, (System_String_o *)ClearDeckInfo, 0LL);
        }
        buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
          goto LABEL_89;
        v76 = this->fields.buttonCancelLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10842/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, 0LL);
        if ( v76 )
        {
          UILabel__set_text(v76, (System_String_o *)ClearDeckInfo, 0LL);
LABEL_89:
          *(_WORD *)&this->fields.isButtonEnable = 256;
          BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v82, 0LL);
          v79 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v77, v78);
          System_Action___ctor(v79, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v79, type, 0LL);
          return;
        }
LABEL_30:
        sub_1B64324(ClearDeckInfo);
      }
      v71 = this->fields.main1Label;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v57 )
        {
LABEL_70:
          v72 = &StringLiteral_10845/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/;
LABEL_73:
          ClearDeckInfo = LocalizationManager__Get((System_String_o *)*v72, 0LL);
          if ( !v71 )
            goto LABEL_30;
          UILabel__set_text(v71, (System_String_o *)ClearDeckInfo, 0LL);
          goto LABEL_75;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v57 )
          goto LABEL_70;
      }
      v72 = &StringLiteral_10844/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/;
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
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_49FFF0D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFF0D = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_1B64324(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestResetConfirmDialog_ClickDelegate___ctor(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19B0B5C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B0B14;
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
  if ( (byte_49FFF10 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isOk);
    byte_49FFF10 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall QuestResetConfirmDialog_ClickDelegate__EndInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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