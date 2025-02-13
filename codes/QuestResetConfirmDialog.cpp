void __fastcall QuestResetConfirmDialog___cctor(const MethodInfo *method)
{
  struct QuestResetConfirmDialog_StaticFields *static_fields; // x8

  if ( (byte_4BD71C4 & 1) == 0 )
  {
    sub_1C21E38(&QuestResetConfirmDialog_TypeInfo);
    byte_4BD71C4 = 1;
  }
  static_fields = QuestResetConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->PARTY_OBJ_POSY_NORMAL = 0x425C0000420C0000LL;
  static_fields->QUEST_NAME_LABEL_MAX_WITDH = 700.0;
}


void __fastcall QuestResetConfirmDialog___ctor(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BD71C3 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BD71C3 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__Close(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestResetConfirmDialog__Close_31262284(this, 0LL, v2);
}


void __fastcall QuestResetConfirmDialog__Close_31262284(
        QuestResetConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4BD71BF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_QuestResetConfirmDialog_EndClose__);
    byte_4BD71BF = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C21DDC(&this->fields.closeCallbackFunc, callback);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall QuestResetConfirmDialog__EndClose(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  QuestResetConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1C21DDC(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
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

  if ( (byte_4BD71BD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD71BD = 1;
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
    sub_1C22094(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__OnClickCancel(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4BD71C1 & 1) == 0 )
  {
    sub_1C21E38(&Method_QuestResetConfirmDialog_OnClickCancel__);
    byte_4BD71C1 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_QuestResetConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50();
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
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

  if ( (byte_4BD71C0 & 1) == 0 )
  {
    sub_1C21E38(&Method_QuestResetConfirmDialog_OnClickDecide__);
    byte_4BD71C0 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v4 = Method_QuestResetConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C21E50();
    v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * isDecideBtnSe, 0, 0LL);
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
  __int64 ClearDeckInfo; // x0
  __int64 v13; // x1
  System_Object_array *v14; // x0
  System_Object_array *v15; // x23
  System_Collections_Generic_List_object__o *servantFaceIconList; // x8
  ServantLimitImageMaster_o *v17; // x24
  signed __int64 v18; // x25
  unsigned __int64 max_length; // x8
  ServantFaceIconComponent_o *v20; // x26
  Il2CppObject *v21; // x22
  IconLabelInfo_o *v22; // x27
  System_Collections_Generic_List_object__o *monitor; // x0
  __int64 v24; // x8
  int32_t v25; // w27
  int32_t v26; // w3
  Il2CppObject *v27; // x24
  QuestReleaseMaster_o *v28; // x23
  int32_t GroupId; // w0
  bool IsContainUnPlayableQuestByTargetId; // w0
  UnityEngine_Object_o *partyObject; // x24
  bool v32; // w23
  UnityEngine_GameObject_o *v33; // x24
  QuestResetConfirmDialog_c *v34; // x0
  float *p_PARTY_OBJ_POSY_NORMAL; // x8
  UnityEngine_Object_o *titleLabel; // x24
  UILabel_o *v37; // x24
  UnityEngine_Object_o *nameLabel; // x24
  QuestEntity_o *QuestEntity; // x0
  UILabel_o *v40; // x22
  QuestEntity_o *v41; // x24
  System_String_o *v42; // x25
  Il2CppObject *QuestName; // x0
  UILabel_o *v44; // x22
  UnityEngine_Object_o *main1Label; // x22
  UILabel_o *v46; // x22
  __int64 *v47; // x8
  UnityEngine_Object_o *buttonDecideLabel; // x22
  UILabel_o *v49; // x22
  UnityEngine_Object_o *buttonCancelLabel; // x22
  UILabel_o *v51; // x22
  System_Action_o *v52; // x21
  int32_t type; // [xsp+54h] [xbp-6Ch]
  int32_t v54; // [xsp+58h] [xbp-68h]
  bool v55; // [xsp+5Ch] [xbp-64h]

  if ( (byte_4BD71BE & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&IconLabelInfo_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_QuestResetConfirmDialog_EndOpen__);
    sub_1C21E38(&QuestResetConfirmDialog_TypeInfo);
    sub_1C21E38(&StringLiteral_11105/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/);
    sub_1C21E38(&StringLiteral_11107/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/);
    sub_1C21E38(&StringLiteral_11106/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/);
    sub_1C21E38(&StringLiteral_11110/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/);
    sub_1C21E38(&StringLiteral_11109/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/);
    sub_1C21E38(&StringLiteral_11108/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/);
    byte_4BD71BE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_object )
  {
    ClearDeckInfo = (__int64)UserEventAlloutBattleMaster__GetClearDeckInfo(
                               (UserEventAlloutBattleMaster_o *)Master_object,
                               questId,
                               0LL);
    if ( !ClearDeckInfo )
      goto LABEL_30;
    v14 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)ClearDeckInfo,
            (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( v14 )
    {
      v15 = v14;
      this->fields.clickFunc = func;
      v54 = questId;
      v55 = canMaskTouchClose;
      type = maskType;
      sub_1C21DDC(&this->fields.clickFunc, func);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ClearDeckInfo = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
      if ( !servantFaceIconList )
        goto LABEL_30;
      v17 = (ServantLimitImageMaster_o *)ClearDeckInfo;
      v18 = 0LL;
      while ( v18 < servantFaceIconList->fields._size )
      {
        ClearDeckInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                   servantFaceIconList,
                                   v18,
                                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
        max_length = v15->max_length;
        v20 = (ServantFaceIconComponent_o *)ClearDeckInfo;
        if ( v18 >= (int)max_length )
        {
          if ( !ClearDeckInfo )
            goto LABEL_30;
          ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)ClearDeckInfo, 0LL);
        }
        else
        {
          if ( v18 >= max_length )
            sub_1C2209C(ClearDeckInfo, v13);
          v21 = v15->m_Items[v18];
          v22 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
          IconLabelInfo___ctor(v22, 0LL);
          if ( !v21 )
            goto LABEL_30;
          if ( !v22 )
            goto LABEL_30;
          IconLabelInfo__Set_39381772(v22, 2, (int32_t)v21[1].monitor, (int32_t)v21[1].monitor, 0, 0, 1, 0, 0LL);
          if ( !v17 )
            goto LABEL_30;
          ClearDeckInfo = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                            v17,
                            HIDWORD(v21[1].klass),
                            (int32_t)v21[2].klass,
                            0LL);
          if ( !v20 )
            goto LABEL_30;
          ServantFaceIconComponent__Set_39461076(
            v20,
            HIDWORD(v21[1].klass),
            HIDWORD(v21[1].monitor),
            ClearDeckInfo - ((int)ClearDeckInfo < 11),
            HIDWORD(v21[2].klass),
            v22,
            0LL,
            2,
            0,
            0,
            0LL,
            0,
            0,
            0,
            0,
            0LL,
            0LL);
          monitor = (System_Collections_Generic_List_object__o *)v21[2].monitor;
          if ( monitor && monitor->fields._size >= 1 )
          {
            ClearDeckInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                       monitor,
                                       0,
                                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
            if ( !ClearDeckInfo )
              goto LABEL_30;
            v24 = ClearDeckInfo;
            ClearDeckInfo = (__int64)v21[2].monitor;
            if ( !ClearDeckInfo )
              goto LABEL_30;
            v25 = *(_DWORD *)(v24 + 16);
            ClearDeckInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)ClearDeckInfo,
                                       0,
                                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
            if ( !ClearDeckInfo )
              goto LABEL_30;
            v26 = *(_DWORD *)(ClearDeckInfo + 20);
          }
          else
          {
            v26 = 0;
            v25 = 0;
          }
          ServantFaceIconComponent__SetEquip_39466028(v20, HIDWORD(v21[1].klass), v25, v26, 0LL, 0LL);
        }
        servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
        ++v18;
        if ( !servantFaceIconList )
          goto LABEL_30;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v27 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
      ClearDeckInfo = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
      if ( !v27 )
        goto LABEL_30;
      v28 = (QuestReleaseMaster_o *)ClearDeckInfo;
      GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)v27, v54, 17, 0LL);
      ClearDeckInfo = (__int64)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)v27, GroupId, 17, 0LL);
      if ( !v28 )
        goto LABEL_30;
      IsContainUnPlayableQuestByTargetId = QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
                                             v28,
                                             (System_Int32_array *)ClearDeckInfo,
                                             v54,
                                             0LL);
      partyObject = (UnityEngine_Object_o *)this->fields.partyObject;
      v32 = IsContainUnPlayableQuestByTargetId;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(partyObject, 0LL, 0LL) )
      {
        v33 = this->fields.partyObject;
        v34 = QuestResetConfirmDialog_TypeInfo;
        if ( !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
          v34 = QuestResetConfirmDialog_TypeInfo;
        }
        p_PARTY_OBJ_POSY_NORMAL = &v34->static_fields->PARTY_OBJ_POSY_NORMAL;
        if ( v32 )
          ++p_PARTY_OBJ_POSY_NORMAL;
        GameObjectExtensions__SetLocalPositionY(v33, *p_PARTY_OBJ_POSY_NORMAL, 0LL);
      }
      titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
      {
        v37 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11110/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/, 0LL);
        if ( !v37 )
          goto LABEL_30;
        UILabel__set_text(v37, (System_String_o *)ClearDeckInfo, 0LL);
      }
      nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        ClearDeckInfo = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestMaster___);
        if ( !ClearDeckInfo )
          goto LABEL_30;
        QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)ClearDeckInfo, v54, 0LL);
        v40 = this->fields.nameLabel;
        v41 = QuestEntity;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11109/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/, 0LL);
        if ( !v41 )
          goto LABEL_30;
        v42 = (System_String_o *)ClearDeckInfo;
        QuestName = (Il2CppObject *)QuestEntity__getQuestName(v41, 0LL);
        ClearDeckInfo = (__int64)System_String__Format(v42, QuestName, 0LL);
        if ( !v40 )
          goto LABEL_30;
        UILabel__set_text(v40, (System_String_o *)ClearDeckInfo, 0LL);
        v44 = this->fields.nameLabel;
        ClearDeckInfo = (__int64)QuestResetConfirmDialog_TypeInfo;
        if ( !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
          ClearDeckInfo = j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
        if ( !v44 )
          goto LABEL_30;
        UILabel__SetCondensedScale_48213524(
          v44,
          QuestResetConfirmDialog_TypeInfo->static_fields->QUEST_NAME_LABEL_MAX_WITDH,
          0.0,
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
          v49 = this->fields.buttonDecideLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          ClearDeckInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11106/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/, 0LL);
          if ( !v49 )
            goto LABEL_30;
          UILabel__set_text(v49, (System_String_o *)ClearDeckInfo, 0LL);
        }
        buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
          goto LABEL_89;
        v51 = this->fields.buttonCancelLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11105/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, 0LL);
        if ( v51 )
        {
          UILabel__set_text(v51, (System_String_o *)ClearDeckInfo, 0LL);
LABEL_89:
          *(_WORD *)&this->fields.isButtonEnable = 256;
          BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v55, 0LL);
          v52 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(v52, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v52, type, 0LL);
          return;
        }
LABEL_30:
        sub_1C22094(ClearDeckInfo, v13);
      }
      v46 = this->fields.main1Label;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v32 )
        {
LABEL_70:
          v47 = &StringLiteral_11108/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/;
LABEL_73:
          ClearDeckInfo = (__int64)LocalizationManager__Get((System_String_o *)*v47, 0LL);
          if ( !v46 )
            goto LABEL_30;
          UILabel__set_text(v46, (System_String_o *)ClearDeckInfo, 0LL);
          goto LABEL_75;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v32 )
          goto LABEL_70;
      }
      v47 = &StringLiteral_11107/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/;
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

  if ( (byte_4BD71C2 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD71C2 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C22094(0LL, v4);
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
  sub_1C21DDC(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A5B234;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5B1EC;
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
  if ( (byte_4BD71C5 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    byte_4BD71C5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v9, callback, object);
}


void __fastcall QuestResetConfirmDialog_ClickDelegate__EndInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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