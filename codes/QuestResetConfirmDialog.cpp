void __fastcall QuestResetConfirmDialog___cctor(const MethodInfo *method)
{
  struct QuestResetConfirmDialog_StaticFields *static_fields; // x8

  if ( (byte_4A5EC4B & 1) == 0 )
  {
    sub_1B885B0(&QuestResetConfirmDialog_TypeInfo);
    byte_4A5EC4B = 1;
  }
  static_fields = QuestResetConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->PARTY_OBJ_POSY_NORMAL = 0x425C0000420C0000LL;
  static_fields->QUEST_NAME_LABEL_MAX_WITDH = 700.0;
}


void __fastcall QuestResetConfirmDialog___ctor(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5EC4A & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5EC4A = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__Close(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestResetConfirmDialog__Close_45274264(this, 0LL, v2);
}


void __fastcall QuestResetConfirmDialog__Close_45274264(
        QuestResetConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A5EC46 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_QuestResetConfirmDialog_EndClose__);
    byte_4A5EC46 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall QuestResetConfirmDialog__EndClose(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  QuestResetConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
  }
}


void __fastcall QuestResetConfirmDialog__EndOpen(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall QuestResetConfirmDialog__Init(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v4; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *buttonCancelLabel; // x20

  if ( (byte_4A5EC44 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EC44 = 1;
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
    sub_1B8880C(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__OnClickCancel(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4A5EC48 & 1) == 0 )
  {
    sub_1B885B0(&Method_QuestResetConfirmDialog_OnClickCancel__);
    byte_4A5EC48 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_QuestResetConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_QuestResetConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A5EC47 & 1) == 0 )
  {
    sub_1B885B0(&Method_QuestResetConfirmDialog_OnClickDecide__);
    byte_4A5EC47 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v4 = Method_QuestResetConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_QuestResetConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
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


void __fastcall QuestResetConfirmDialog__Setup(
        QuestResetConfirmDialog_o *this,
        int32_t questId,
        QuestResetConfirmDialog_ClickDelegate_o *func,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  void *ClearDeckInfo; // x0
  __int64 v13; // x1
  System_Object_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Object_array *v17; // x23
  System_Collections_Generic_List_object__o *servantFaceIconList; // x8
  ServantLimitImageMaster_o *v19; // x24
  signed __int64 v20; // x25
  unsigned __int64 max_length; // x8
  ServantFaceIconComponent_o *v22; // x26
  Il2CppObject *v23; // x22
  IconLabelInfo_o *v24; // x27
  System_Collections_Generic_List_object__o *monitor; // x0
  _DWORD *v26; // x8
  int32_t v27; // w27
  int32_t v28; // w3
  Il2CppObject *v29; // x24
  QuestReleaseMaster_o *v30; // x23
  int32_t GroupId; // w0
  bool IsContainUnPlayableQuestByTargetId; // w0
  UnityEngine_Object_o *partyObject; // x24
  bool v34; // w23
  UnityEngine_GameObject_o *v35; // x24
  QuestResetConfirmDialog_c *v36; // x0
  float *p_PARTY_OBJ_POSY_NORMAL; // x8
  UnityEngine_Object_o *titleLabel; // x24
  UILabel_o *v39; // x24
  UnityEngine_Object_o *nameLabel; // x24
  QuestEntity_o *QuestEntity; // x0
  UILabel_o *v42; // x22
  QuestEntity_o *v43; // x24
  System_String_o *v44; // x25
  Il2CppObject *QuestName; // x0
  UILabel_o *v46; // x22
  UnityEngine_Object_o *main1Label; // x22
  UILabel_o *v48; // x22
  __int64 *v49; // x8
  UnityEngine_Object_o *buttonDecideLabel; // x22
  UILabel_o *v51; // x22
  UnityEngine_Object_o *buttonCancelLabel; // x22
  UILabel_o *v53; // x22
  System_Action_o *v54; // x21
  int32_t type; // [xsp+44h] [xbp-6Ch]
  int32_t v56; // [xsp+48h] [xbp-68h]
  bool v57; // [xsp+4Ch] [xbp-64h]

  if ( (byte_4A5EC45 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_QuestResetConfirmDialog_EndOpen__);
    sub_1B885B0(&QuestResetConfirmDialog_TypeInfo);
    sub_1B885B0(&StringLiteral_10894/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/);
    sub_1B885B0(&StringLiteral_10896/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/);
    sub_1B885B0(&StringLiteral_10895/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/);
    sub_1B885B0(&StringLiteral_10899/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/);
    sub_1B885B0(&StringLiteral_10898/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/);
    sub_1B885B0(&StringLiteral_10897/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/);
    byte_4A5EC45 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_object )
  {
    ClearDeckInfo = UserEventAlloutBattleMaster__GetClearDeckInfo(
                      (UserEventAlloutBattleMaster_o *)Master_object,
                      questId,
                      0LL);
    if ( !ClearDeckInfo )
      goto LABEL_30;
    v14 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)ClearDeckInfo,
            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( v14 )
    {
      v17 = v14;
      this->fields.clickFunc = func;
      v56 = questId;
      v57 = canMaskTouchClose;
      type = maskType;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)func, v15, v16);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
      if ( !servantFaceIconList )
        goto LABEL_30;
      v19 = (ServantLimitImageMaster_o *)ClearDeckInfo;
      v20 = 0LL;
      while ( v20 < servantFaceIconList->fields._size )
      {
        ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                          servantFaceIconList,
                          v20,
                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
        max_length = v17->max_length;
        v22 = (ServantFaceIconComponent_o *)ClearDeckInfo;
        if ( v20 >= (int)max_length )
        {
          if ( !ClearDeckInfo )
            goto LABEL_30;
          ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)ClearDeckInfo, 0LL);
        }
        else
        {
          if ( v20 >= max_length )
            sub_1B88814(ClearDeckInfo, v13);
          v23 = v17->m_Items[v20];
          v24 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
          IconLabelInfo___ctor(v24, 0LL);
          if ( !v23 )
            goto LABEL_30;
          if ( !v24 )
            goto LABEL_30;
          IconLabelInfo__Set_38140136(v24, 2, (int32_t)v23[1].monitor, (int32_t)v23[1].monitor, 0, 0, 1, 0, 0LL);
          if ( !v19 )
            goto LABEL_30;
          ClearDeckInfo = (void *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                    v19,
                                    HIDWORD(v23[1].klass),
                                    (int32_t)v23[2].klass,
                                    0LL);
          if ( !v22 )
            goto LABEL_30;
          ServantFaceIconComponent__Set_38217436(
            v22,
            HIDWORD(v23[1].klass),
            HIDWORD(v23[1].monitor),
            (_DWORD)ClearDeckInfo - ((int)ClearDeckInfo < 11),
            HIDWORD(v23[2].klass),
            v24,
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
          monitor = (System_Collections_Generic_List_object__o *)v23[2].monitor;
          if ( monitor && monitor->fields._size >= 1 )
          {
            ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                              monitor,
                              0,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
            if ( !ClearDeckInfo )
              goto LABEL_30;
            v26 = ClearDeckInfo;
            ClearDeckInfo = v23[2].monitor;
            if ( !ClearDeckInfo )
              goto LABEL_30;
            v27 = v26[4];
            ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)ClearDeckInfo,
                              0,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
            if ( !ClearDeckInfo )
              goto LABEL_30;
            v28 = *((_DWORD *)ClearDeckInfo + 5);
          }
          else
          {
            v28 = 0;
            v27 = 0;
          }
          ServantFaceIconComponent__SetEquip_38222160(v22, HIDWORD(v23[1].klass), v27, v28, 0LL);
        }
        servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
        ++v20;
        if ( !servantFaceIconList )
          goto LABEL_30;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v29 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestGroupMaster___);
      ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
      if ( !v29 )
        goto LABEL_30;
      v30 = (QuestReleaseMaster_o *)ClearDeckInfo;
      GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)v29, v56, 17, 0LL);
      ClearDeckInfo = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)v29, GroupId, 17, 0LL);
      if ( !v30 )
        goto LABEL_30;
      IsContainUnPlayableQuestByTargetId = QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
                                             v30,
                                             (System_Int32_array *)ClearDeckInfo,
                                             v56,
                                             0LL);
      partyObject = (UnityEngine_Object_o *)this->fields.partyObject;
      v34 = IsContainUnPlayableQuestByTargetId;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(partyObject, 0LL, 0LL) )
      {
        v35 = this->fields.partyObject;
        v36 = QuestResetConfirmDialog_TypeInfo;
        if ( !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
          v36 = QuestResetConfirmDialog_TypeInfo;
        }
        p_PARTY_OBJ_POSY_NORMAL = &v36->static_fields->PARTY_OBJ_POSY_NORMAL;
        if ( v34 )
          ++p_PARTY_OBJ_POSY_NORMAL;
        GameObjectExtensions__SetLocalPositionY(v35, *p_PARTY_OBJ_POSY_NORMAL, 0LL);
      }
      titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
      {
        v39 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10899/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/, 0LL);
        if ( !v39 )
          goto LABEL_30;
        UILabel__set_text(v39, (System_String_o *)ClearDeckInfo, 0LL);
      }
      nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestMaster___);
        if ( !ClearDeckInfo )
          goto LABEL_30;
        QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)ClearDeckInfo, v56, 0LL);
        v42 = this->fields.nameLabel;
        v43 = QuestEntity;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10898/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/, 0LL);
        if ( !v43 )
          goto LABEL_30;
        v44 = (System_String_o *)ClearDeckInfo;
        QuestName = (Il2CppObject *)QuestEntity__getQuestName(v43, 0LL);
        ClearDeckInfo = System_String__Format(v44, QuestName, 0LL);
        if ( !v42 )
          goto LABEL_30;
        UILabel__set_text(v42, (System_String_o *)ClearDeckInfo, 0LL);
        v46 = this->fields.nameLabel;
        ClearDeckInfo = QuestResetConfirmDialog_TypeInfo;
        if ( !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
        if ( !v46 )
          goto LABEL_30;
        UILabel__SetCondensedScale_47038932(
          v46,
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
          v51 = this->fields.buttonDecideLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10895/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/, 0LL);
          if ( !v51 )
            goto LABEL_30;
          UILabel__set_text(v51, (System_String_o *)ClearDeckInfo, 0LL);
        }
        buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
          goto LABEL_89;
        v53 = this->fields.buttonCancelLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10894/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, 0LL);
        if ( v53 )
        {
          UILabel__set_text(v53, (System_String_o *)ClearDeckInfo, 0LL);
LABEL_89:
          *(_WORD *)&this->fields.isButtonEnable = 256;
          BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v57, 0LL);
          v54 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v54, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v54, type, 0LL);
          return;
        }
LABEL_30:
        sub_1B8880C(ClearDeckInfo, v13);
      }
      v48 = this->fields.main1Label;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v34 )
        {
LABEL_70:
          v49 = &StringLiteral_10897/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/;
LABEL_73:
          ClearDeckInfo = LocalizationManager__Get((System_String_o *)*v49, 0LL);
          if ( !v48 )
            goto LABEL_30;
          UILabel__set_text(v48, (System_String_o *)ClearDeckInfo, 0LL);
          goto LABEL_75;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v34 )
          goto LABEL_70;
      }
      v49 = &StringLiteral_10896/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/;
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
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A5EC49 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EC49 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D30AC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D3064;
}


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
  if ( (byte_4A5EC4C & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A5EC4C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall QuestResetConfirmDialog_ClickDelegate__EndInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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