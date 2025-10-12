void QuestResetConfirmDialog___cctor(const MethodInfo *method)
{
  struct QuestResetConfirmDialog_StaticFields *static_fields; // x8

  if ( (byte_4C31A01 & 1) == 0 )
  {
    sub_1C32C20(&QuestResetConfirmDialog_TypeInfo);
    byte_4C31A01 = 1;
  }
  static_fields = QuestResetConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->PARTY_OBJ_POSY_NORMAL = 0x425C0000420C0000LL;
  static_fields->QUEST_NAME_LABEL_MAX_WITDH = 700.0;
}


void QuestResetConfirmDialog___ctor(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C31A00 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C31A00 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void QuestResetConfirmDialog__Close(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestResetConfirmDialog__Close_31334700(this, 0, v2);
}


void QuestResetConfirmDialog__Close_31334700(
        QuestResetConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4C319FC & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_QuestResetConfirmDialog_EndClose__);
    byte_4C319FC = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C32BC4(&this->fields.closeCallbackFunc, callback);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void QuestResetConfirmDialog__EndClose(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v5; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  QuestResetConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v5 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C32BC4(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void QuestResetConfirmDialog__EndOpen(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void QuestResetConfirmDialog__Init(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *buttonCancelLabel; // x20

  if ( (byte_4C319FA & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C319FA = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_15;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_15;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  *(_WORD *)&this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_15:
    sub_1C32E7C(gameObject);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void QuestResetConfirmDialog__OnClickCancel(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C319FE & 1) == 0 )
  {
    sub_1C32C20(&Method_QuestResetConfirmDialog_OnClickCancel__);
    byte_4C319FE = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_QuestResetConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_QuestResetConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void QuestResetConfirmDialog__OnClickDecide(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  _BOOL4 isDecideBtnSe; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C319FD & 1) == 0 )
  {
    sub_1C32C20(&Method_QuestResetConfirmDialog_OnClickDecide__);
    byte_4C319FD = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v4 = Method_QuestResetConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C32C38(Method_QuestResetConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * isDecideBtnSe, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void QuestResetConfirmDialog__Open(
        QuestResetConfirmDialog_o *this,
        int32_t questId,
        QuestResetConfirmDialog_ClickDelegate_o *func,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  QuestResetConfirmDialog__Setup(this, questId, func, canMaskTouchClose, maskType, method);
}


void QuestResetConfirmDialog__Setup(
        QuestResetConfirmDialog_o *this,
        int32_t questId,
        QuestResetConfirmDialog_ClickDelegate_o *func,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  void *ClearDeckInfo; // x0
  System_Object_array *v13; // x0
  System_Object_array *v14; // x23
  System_Collections_Generic_List_object__o *servantFaceIconList; // x8
  signed __int64 v16; // x25
  QuestResetConfirmDialog_o *v17; // x20
  unsigned __int64 max_length_low; // x8
  ServantFaceIconComponent_o *v19; // x26
  Il2CppObject *v20; // x24
  IconLabelInfo_o *v21; // x27
  int32_t klass; // w19
  int ServantLimitCountSealAfter; // w29
  int32_t CardImageLimitCount; // w28
  int32_t monitor_high; // w19
  int32_t LimitCountByImageLimit_40332536; // w2
  int32_t klass_high; // w21
  int32_t v28; // w22
  ServantOverwriteStatus_o *v29; // x19
  System_Collections_Generic_List_object__o *monitor; // x0
  _DWORD *v31; // x8
  int32_t v32; // w27
  int32_t v33; // w3
  Il2CppObject *v34; // x24
  QuestReleaseMaster_o *v35; // x23
  int32_t GroupId; // w0
  bool IsContainUnPlayableQuestByTargetId; // w0
  UnityEngine_Object_o *partyObject; // x19
  bool v39; // w23
  UnityEngine_GameObject_o *v40; // x19
  QuestResetConfirmDialog_c *v41; // x0
  float *p_PARTY_OBJ_POSY_NORMAL; // x8
  UnityEngine_Object_o *titleLabel; // x19
  UILabel_o *v44; // x24
  UnityEngine_Object_o *nameLabel; // x19
  QuestEntity_o *QuestEntity; // x0
  UILabel_o *v47; // x22
  QuestEntity_o *v48; // x24
  System_String_o *v49; // x19
  Il2CppObject *QuestName; // x0
  UILabel_o *v51; // x19
  UnityEngine_Object_o *main1Label; // x19
  UILabel_o *v53; // x22
  __int64 *v54; // x8
  UnityEngine_Object_o *buttonDecideLabel; // x19
  UILabel_o *v56; // x22
  UnityEngine_Object_o *buttonCancelLabel; // x19
  UILabel_o *v58; // x22
  System_Action_o *v59; // x19
  bool v60; // [xsp+64h] [xbp-7Ch]
  int32_t v61; // [xsp+68h] [xbp-78h]
  int32_t questIda; // [xsp+6Ch] [xbp-74h]
  ServantLimitImageMaster_o *v63; // [xsp+70h] [xbp-70h]

  if ( (byte_4C319FB & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&IconLabelInfo_TypeInfo);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_QuestResetConfirmDialog_EndOpen__);
    sub_1C32C20(&QuestResetConfirmDialog_TypeInfo);
    sub_1C32C20(&ServantOverwriteStatus_TypeInfo);
    sub_1C32C20(&StringLiteral_10893/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/);
    sub_1C32C20(&StringLiteral_10895/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/);
    sub_1C32C20(&StringLiteral_10894/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/);
    sub_1C32C20(&StringLiteral_10898/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/);
    sub_1C32C20(&StringLiteral_10897/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/);
    sub_1C32C20(&StringLiteral_10896/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/);
    byte_4C319FB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_object )
  {
    ClearDeckInfo = UserEventAlloutBattleMaster__GetClearDeckInfo(
                      (UserEventAlloutBattleMaster_o *)Master_object,
                      questId,
                      0);
    if ( !ClearDeckInfo )
      goto LABEL_39;
    v13 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)ClearDeckInfo,
            (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( v13 )
    {
      v14 = v13;
      this->fields.clickFunc = func;
      v61 = maskType;
      questIda = questId;
      v60 = canMaskTouchClose;
      sub_1C32BC4(&this->fields.clickFunc, func);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
      v63 = (ServantLimitImageMaster_o *)ClearDeckInfo;
      if ( !servantFaceIconList )
        goto LABEL_39;
      v16 = 0;
      v17 = this;
      while ( v16 < servantFaceIconList->fields._size )
      {
        ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                          servantFaceIconList,
                          v16,
                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
        max_length_low = LODWORD(v14->max_length);
        v19 = (ServantFaceIconComponent_o *)ClearDeckInfo;
        if ( v16 >= (int)max_length_low )
        {
          if ( !ClearDeckInfo )
            goto LABEL_39;
          ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)ClearDeckInfo, 0);
        }
        else
        {
          if ( v16 >= max_length_low )
            sub_1C32E84(ClearDeckInfo);
          v20 = v14->m_Items[v16];
          v21 = (IconLabelInfo_o *)sub_1C32E6C(IconLabelInfo_TypeInfo);
          IconLabelInfo___ctor(v21, 0);
          if ( !v20 || !v21 )
            goto LABEL_39;
          IconLabelInfo__Set_40818388(v21, 2, (int32_t)v20[1].monitor, (int32_t)v20[1].monitor, 0, 0, 1, 0, 0, 0);
          klass = (int32_t)v20[2].klass;
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          ServantLimitCountSealAfter = ImageLimitCount__ConvertDispLimitCountForClient(klass, 0);
          if ( ServantLimitCountSealAfter <= 10 )
          {
            monitor_high = HIDWORD(v20[1].monitor);
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            LimitCountByImageLimit_40332536 = ImageLimitCount__GetLimitCountByImageLimit_40332536(
                                                ServantLimitCountSealAfter,
                                                monitor_high,
                                                0);
            ClearDeckInfo = v63;
            if ( !v63 )
              goto LABEL_39;
            ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           v63,
                                           HIDWORD(v20[1].klass),
                                           LimitCountByImageLimit_40332536,
                                           0);
            CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(
                                    HIDWORD(v20[1].klass),
                                    ServantLimitCountSealAfter,
                                    1,
                                    0,
                                    0);
          }
          else
          {
            CardImageLimitCount = (int32_t)v20[2].klass;
          }
          klass_high = HIDWORD(v20[1].klass);
          v28 = HIDWORD(v20[1].monitor);
          v29 = (ServantOverwriteStatus_o *)sub_1C32E6C(ServantOverwriteStatus_TypeInfo);
          ServantOverwriteStatus___ctor_33445156(v29, klass_high, v28, ServantLimitCountSealAfter, 0);
          if ( !v29 || !v19 )
            goto LABEL_39;
          ServantFaceIconComponent__SetIcon(
            v19,
            HIDWORD(v20[1].klass),
            v29->fields._Rarity_k__BackingField,
            HIDWORD(v20[1].monitor),
            CardImageLimitCount,
            HIDWORD(v20[2].klass),
            v21,
            0,
            2,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            v29->fields._ActualRarity_k__BackingField,
            0,
            0);
          monitor = (System_Collections_Generic_List_object__o *)v20[2].monitor;
          if ( monitor )
          {
            this = v17;
            if ( monitor->fields._size < 1 )
            {
              v33 = 0;
              v32 = 0;
            }
            else
            {
              ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                                monitor,
                                0,
                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
              if ( !ClearDeckInfo )
                goto LABEL_39;
              v31 = ClearDeckInfo;
              ClearDeckInfo = v20[2].monitor;
              if ( !ClearDeckInfo )
                goto LABEL_39;
              v32 = v31[4];
              ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)ClearDeckInfo,
                                0,
                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
              if ( !ClearDeckInfo )
                goto LABEL_39;
              v33 = *((_DWORD *)ClearDeckInfo + 5);
            }
          }
          else
          {
            v33 = 0;
            v32 = 0;
            this = v17;
          }
          ServantFaceIconComponent__SetEquip_40897556(v19, HIDWORD(v20[1].klass), v32, v33, 0, 0);
        }
        servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
        ++v16;
        if ( !servantFaceIconList )
          goto LABEL_39;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v34 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestGroupMaster___);
      ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
      if ( !v34 )
        goto LABEL_39;
      v35 = (QuestReleaseMaster_o *)ClearDeckInfo;
      GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)v34, questIda, 17, 0);
      ClearDeckInfo = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)v34, GroupId, 17, 0);
      if ( !v35 )
        goto LABEL_39;
      IsContainUnPlayableQuestByTargetId = QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
                                             v35,
                                             (System_Int32_array *)ClearDeckInfo,
                                             questIda,
                                             0);
      partyObject = (UnityEngine_Object_o *)this->fields.partyObject;
      v39 = IsContainUnPlayableQuestByTargetId;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(partyObject, 0, 0) )
      {
        v40 = this->fields.partyObject;
        v41 = QuestResetConfirmDialog_TypeInfo;
        if ( !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
          v41 = QuestResetConfirmDialog_TypeInfo;
        }
        p_PARTY_OBJ_POSY_NORMAL = &v41->static_fields->PARTY_OBJ_POSY_NORMAL;
        if ( v39 )
          ++p_PARTY_OBJ_POSY_NORMAL;
        GameObjectExtensions__SetLocalPositionY(v40, *p_PARTY_OBJ_POSY_NORMAL, 0);
      }
      titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
      {
        v44 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10898/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/, 0);
        if ( !v44 )
          goto LABEL_39;
        UILabel__set_text(v44, (System_String_o *)ClearDeckInfo, 0);
      }
      nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(nameLabel, 0, 0) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestMaster___);
        if ( !ClearDeckInfo )
          goto LABEL_39;
        QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)ClearDeckInfo, questIda, 0);
        v47 = this->fields.nameLabel;
        v48 = QuestEntity;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10897/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/, 0);
        if ( !v48 )
          goto LABEL_39;
        v49 = (System_String_o *)ClearDeckInfo;
        QuestName = (Il2CppObject *)QuestEntity__getQuestName(v48, 0);
        ClearDeckInfo = System_String__Format(v49, QuestName, 0);
        if ( !v47 )
          goto LABEL_39;
        UILabel__set_text(v47, (System_String_o *)ClearDeckInfo, 0);
        v51 = this->fields.nameLabel;
        ClearDeckInfo = QuestResetConfirmDialog_TypeInfo;
        if ( !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
          ClearDeckInfo = (void *)j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
        if ( !v51 )
          goto LABEL_39;
        UILabel__SetCondensedScale_49482884(
          v51,
          QuestResetConfirmDialog_TypeInfo->static_fields->QUEST_NAME_LABEL_MAX_WITDH,
          0.0,
          0);
      }
      main1Label = (UnityEngine_Object_o *)this->fields.main1Label;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(main1Label, 0, 0) )
      {
LABEL_84:
        buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
        {
          v56 = this->fields.buttonDecideLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10894/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/, 0);
          if ( !v56 )
            goto LABEL_39;
          UILabel__set_text(v56, (System_String_o *)ClearDeckInfo, 0);
        }
        buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
          goto LABEL_98;
        v58 = this->fields.buttonCancelLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10893/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, 0);
        if ( v58 )
        {
          UILabel__set_text(v58, (System_String_o *)ClearDeckInfo, 0);
LABEL_98:
          *(_WORD *)&this->fields.isButtonEnable = 256;
          BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v60, 0);
          v59 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(v59, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndOpen__, 0);
          BaseDialog__Open((BaseDialog_o *)this, v59, v61, 0, 0);
          return;
        }
LABEL_39:
        sub_1C32E7C(ClearDeckInfo);
      }
      v53 = this->fields.main1Label;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v39 )
        {
LABEL_79:
          v54 = &StringLiteral_10896/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/;
LABEL_82:
          ClearDeckInfo = LocalizationManager__Get((System_String_o *)*v54, 0);
          if ( !v53 )
            goto LABEL_39;
          UILabel__set_text(v53, (System_String_o *)ClearDeckInfo, 0);
          goto LABEL_84;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v39 )
          goto LABEL_79;
      }
      v54 = &StringLiteral_10895/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/;
      goto LABEL_82;
    }
  }
}


UILabel_o *QuestResetConfirmDialog__get_ButtonCancelLabel(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  return this->fields.buttonCancelLabel;
}


UILabel_o *QuestResetConfirmDialog__get_ButtonDecideLabel(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  return this->fields.buttonDecideLabel;
}


UnityEngine_GameObject_o *QuestResetConfirmDialog__get_closeBtnObject(
        QuestResetConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C319FF & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C319FF = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_1C32E7C(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}


void QuestResetConfirmDialog_ClickDelegate___ctor(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6E4EC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6E4A4;
}


System_IAsyncResult_o *QuestResetConfirmDialog_ClickDelegate__BeginInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isOk;
  if ( (byte_4C31A02 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    byte_4C31A02 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void QuestResetConfirmDialog_ClickDelegate__EndInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void QuestResetConfirmDialog_ClickDelegate__Invoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isOk,
    this->fields.method);
}