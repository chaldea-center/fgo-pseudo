void QuestResetConfirmDialog___cctor(const MethodInfo *method)
{
  struct QuestResetConfirmDialog_StaticFields *static_fields; // x8

  if ( (byte_4C213CE & 1) == 0 )
  {
    sub_1C2D490(&QuestResetConfirmDialog_TypeInfo);
    byte_4C213CE = 1;
  }
  static_fields = QuestResetConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->PARTY_OBJ_POSY_NORMAL = 0x425C0000420C0000LL;
  static_fields->QUEST_NAME_LABEL_MAX_WITDH = 700.0;
}


void QuestResetConfirmDialog___ctor(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C213CD & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C213CD = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void QuestResetConfirmDialog__Close(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestResetConfirmDialog__Close_31310344(this, 0, v2);
}


void QuestResetConfirmDialog__Close_31310344(
        QuestResetConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4C213C9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_QuestResetConfirmDialog_EndClose__);
    byte_4C213C9 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434(&this->fields.closeCallbackFunc);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void QuestResetConfirmDialog__EndClose(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  QuestResetConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C2D434(p_closeCallbackFunc);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void QuestResetConfirmDialog__EndOpen(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void QuestResetConfirmDialog__Init(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v4; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *buttonCancelLabel; // x20

  if ( (byte_4C213C7 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C213C7 = 1;
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
    sub_1C2D6EC(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void QuestResetConfirmDialog__OnClickCancel(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C213CB & 1) == 0 )
  {
    sub_1C2D490(&Method_QuestResetConfirmDialog_OnClickCancel__);
    byte_4C213CB = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_QuestResetConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8();
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C213CA & 1) == 0 )
  {
    sub_1C2D490(&Method_QuestResetConfirmDialog_OnClickDecide__);
    byte_4C213CA = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v4 = Method_QuestResetConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2D4A8();
    v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
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
  __int64 v13; // x1
  System_Object_array *v14; // x0
  System_Object_array *v15; // x23
  System_Collections_Generic_List_object__o *servantFaceIconList; // x8
  signed __int64 v17; // x25
  QuestResetConfirmDialog_o *v18; // x20
  __int64 v19; // x2
  __int64 v20; // x3
  unsigned __int64 max_length_low; // x8
  ServantFaceIconComponent_o *v22; // x26
  Il2CppObject *v23; // x24
  IconLabelInfo_o *v24; // x27
  int32_t klass; // w19
  int ServantLimitCountSealAfter; // w29
  int32_t CardImageLimitCount; // w28
  int32_t monitor_high; // w19
  int32_t LimitCountByImageLimit_40210308; // w2
  int32_t klass_high; // w21
  int32_t v31; // w22
  ServantOverwriteStatus_o *v32; // x19
  System_Collections_Generic_List_object__o *monitor; // x0
  _DWORD *v34; // x8
  int32_t v35; // w27
  int32_t v36; // w3
  Il2CppObject *v37; // x24
  QuestReleaseMaster_o *v38; // x23
  int32_t GroupId; // w0
  bool IsContainUnPlayableQuestByTargetId; // w0
  UnityEngine_Object_o *partyObject; // x19
  bool v42; // w23
  UnityEngine_GameObject_o *v43; // x19
  QuestResetConfirmDialog_c *v44; // x0
  float *p_PARTY_OBJ_POSY_NORMAL; // x8
  UnityEngine_Object_o *titleLabel; // x19
  UILabel_o *v47; // x24
  UnityEngine_Object_o *nameLabel; // x19
  QuestEntity_o *QuestEntity; // x0
  UILabel_o *v50; // x22
  QuestEntity_o *v51; // x24
  System_String_o *v52; // x19
  Il2CppObject *QuestName; // x0
  UILabel_o *v54; // x19
  UnityEngine_Object_o *main1Label; // x19
  UILabel_o *v56; // x22
  __int64 *v57; // x8
  UnityEngine_Object_o *buttonDecideLabel; // x19
  UILabel_o *v59; // x22
  UnityEngine_Object_o *buttonCancelLabel; // x19
  UILabel_o *v61; // x22
  System_Action_o *v62; // x19
  bool v63; // [xsp+64h] [xbp-7Ch]
  int32_t v64; // [xsp+68h] [xbp-78h]
  int32_t questIda; // [xsp+6Ch] [xbp-74h]
  ServantLimitImageMaster_o *v66; // [xsp+70h] [xbp-70h]

  if ( (byte_4C213C8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&IconLabelInfo_TypeInfo);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_QuestResetConfirmDialog_EndOpen__);
    sub_1C2D490(&QuestResetConfirmDialog_TypeInfo);
    sub_1C2D490(&ServantOverwriteStatus_TypeInfo);
    sub_1C2D490(&StringLiteral_10887/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/);
    sub_1C2D490(&StringLiteral_10889/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/);
    sub_1C2D490(&StringLiteral_10888/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/);
    sub_1C2D490(&StringLiteral_10892/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/);
    sub_1C2D490(&StringLiteral_10891/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/);
    sub_1C2D490(&StringLiteral_10890/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/);
    byte_4C213C8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_object )
  {
    ClearDeckInfo = UserEventAlloutBattleMaster__GetClearDeckInfo(
                      (UserEventAlloutBattleMaster_o *)Master_object,
                      questId,
                      0);
    if ( !ClearDeckInfo )
      goto LABEL_39;
    v14 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)ClearDeckInfo,
            (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( v14 )
    {
      v15 = v14;
      this->fields.clickFunc = func;
      v64 = maskType;
      questIda = questId;
      v63 = canMaskTouchClose;
      sub_1C2D434(&this->fields.clickFunc);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
      v66 = (ServantLimitImageMaster_o *)ClearDeckInfo;
      if ( !servantFaceIconList )
        goto LABEL_39;
      v17 = 0;
      v18 = this;
      while ( v17 < servantFaceIconList->fields._size )
      {
        ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                          servantFaceIconList,
                          v17,
                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
        max_length_low = LODWORD(v15->max_length);
        v22 = (ServantFaceIconComponent_o *)ClearDeckInfo;
        if ( v17 >= (int)max_length_low )
        {
          if ( !ClearDeckInfo )
            goto LABEL_39;
          ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)ClearDeckInfo, 0);
        }
        else
        {
          if ( v17 >= max_length_low )
            sub_1C2D6F4(ClearDeckInfo, v13, v19, v20);
          v23 = v15->m_Items[v17];
          v24 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
          IconLabelInfo___ctor(v24, 0);
          if ( !v23 || !v24 )
            goto LABEL_39;
          IconLabelInfo__Set_40696284(v24, 2, (int32_t)v23[1].monitor, (int32_t)v23[1].monitor, 0, 0, 1, 0, 0, 0);
          klass = (int32_t)v23[2].klass;
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          ServantLimitCountSealAfter = ImageLimitCount__ConvertDispLimitCountForClient(klass, 0);
          if ( ServantLimitCountSealAfter <= 10 )
          {
            monitor_high = HIDWORD(v23[1].monitor);
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            LimitCountByImageLimit_40210308 = ImageLimitCount__GetLimitCountByImageLimit_40210308(
                                                ServantLimitCountSealAfter,
                                                monitor_high,
                                                0);
            ClearDeckInfo = v66;
            if ( !v66 )
              goto LABEL_39;
            ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           v66,
                                           HIDWORD(v23[1].klass),
                                           LimitCountByImageLimit_40210308,
                                           0);
            CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(
                                    HIDWORD(v23[1].klass),
                                    ServantLimitCountSealAfter,
                                    1,
                                    0,
                                    0);
          }
          else
          {
            CardImageLimitCount = (int32_t)v23[2].klass;
          }
          klass_high = HIDWORD(v23[1].klass);
          v31 = HIDWORD(v23[1].monitor);
          v32 = (ServantOverwriteStatus_o *)sub_1C2D6DC(ServantOverwriteStatus_TypeInfo);
          ServantOverwriteStatus___ctor_33445788(v32, klass_high, v31, ServantLimitCountSealAfter, 0);
          if ( !v32 || !v22 )
            goto LABEL_39;
          ServantFaceIconComponent__SetIcon(
            v22,
            HIDWORD(v23[1].klass),
            v32->fields._Rarity_k__BackingField,
            HIDWORD(v23[1].monitor),
            CardImageLimitCount,
            HIDWORD(v23[2].klass),
            v24,
            0,
            2,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            v32->fields._ActualRarity_k__BackingField,
            0,
            0);
          monitor = (System_Collections_Generic_List_object__o *)v23[2].monitor;
          if ( monitor )
          {
            this = v18;
            if ( monitor->fields._size < 1 )
            {
              v36 = 0;
              v35 = 0;
            }
            else
            {
              ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                                monitor,
                                0,
                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
              if ( !ClearDeckInfo )
                goto LABEL_39;
              v34 = ClearDeckInfo;
              ClearDeckInfo = v23[2].monitor;
              if ( !ClearDeckInfo )
                goto LABEL_39;
              v35 = v34[4];
              ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)ClearDeckInfo,
                                0,
                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
              if ( !ClearDeckInfo )
                goto LABEL_39;
              v36 = *((_DWORD *)ClearDeckInfo + 5);
            }
          }
          else
          {
            v36 = 0;
            v35 = 0;
            this = v18;
          }
          ServantFaceIconComponent__SetEquip_40775452(v22, HIDWORD(v23[1].klass), v35, v36, 0, 0);
        }
        servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
        ++v17;
        if ( !servantFaceIconList )
          goto LABEL_39;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v37 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestGroupMaster___);
      ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
      if ( !v37 )
        goto LABEL_39;
      v38 = (QuestReleaseMaster_o *)ClearDeckInfo;
      GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)v37, questIda, 17, 0);
      ClearDeckInfo = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)v37, GroupId, 17, 0);
      if ( !v38 )
        goto LABEL_39;
      IsContainUnPlayableQuestByTargetId = QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
                                             v38,
                                             (System_Int32_array *)ClearDeckInfo,
                                             questIda,
                                             0);
      partyObject = (UnityEngine_Object_o *)this->fields.partyObject;
      v42 = IsContainUnPlayableQuestByTargetId;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(partyObject, 0, 0) )
      {
        v43 = this->fields.partyObject;
        v44 = QuestResetConfirmDialog_TypeInfo;
        if ( !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
          v44 = QuestResetConfirmDialog_TypeInfo;
        }
        p_PARTY_OBJ_POSY_NORMAL = &v44->static_fields->PARTY_OBJ_POSY_NORMAL;
        if ( v42 )
          ++p_PARTY_OBJ_POSY_NORMAL;
        GameObjectExtensions__SetLocalPositionY(v43, *p_PARTY_OBJ_POSY_NORMAL, 0);
      }
      titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
      {
        v47 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10892/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/, 0);
        if ( !v47 )
          goto LABEL_39;
        UILabel__set_text(v47, (System_String_o *)ClearDeckInfo, 0);
      }
      nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(nameLabel, 0, 0) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestMaster___);
        if ( !ClearDeckInfo )
          goto LABEL_39;
        QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)ClearDeckInfo, questIda, 0);
        v50 = this->fields.nameLabel;
        v51 = QuestEntity;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10891/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/, 0);
        if ( !v51 )
          goto LABEL_39;
        v52 = (System_String_o *)ClearDeckInfo;
        QuestName = (Il2CppObject *)QuestEntity__getQuestName(v51, 0);
        ClearDeckInfo = System_String__Format(v52, QuestName, 0);
        if ( !v50 )
          goto LABEL_39;
        UILabel__set_text(v50, (System_String_o *)ClearDeckInfo, 0);
        v54 = this->fields.nameLabel;
        ClearDeckInfo = QuestResetConfirmDialog_TypeInfo;
        if ( !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
          ClearDeckInfo = (void *)j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
        if ( !v54 )
          goto LABEL_39;
        UILabel__SetCondensedScale_49422820(
          v54,
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
          v59 = this->fields.buttonDecideLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10888/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/, 0);
          if ( !v59 )
            goto LABEL_39;
          UILabel__set_text(v59, (System_String_o *)ClearDeckInfo, 0);
        }
        buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
          goto LABEL_98;
        v61 = this->fields.buttonCancelLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10887/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, 0);
        if ( v61 )
        {
          UILabel__set_text(v61, (System_String_o *)ClearDeckInfo, 0);
LABEL_98:
          *(_WORD *)&this->fields.isButtonEnable = 256;
          BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v63, 0);
          v62 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v62, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndOpen__, 0);
          BaseDialog__Open((BaseDialog_o *)this, v62, v64, 0);
          return;
        }
LABEL_39:
        sub_1C2D6EC(ClearDeckInfo, v13);
      }
      v56 = this->fields.main1Label;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v42 )
        {
LABEL_79:
          v57 = &StringLiteral_10890/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/;
LABEL_82:
          ClearDeckInfo = LocalizationManager__Get((System_String_o *)*v57, 0);
          if ( !v56 )
            goto LABEL_39;
          UILabel__set_text(v56, (System_String_o *)ClearDeckInfo, 0);
          goto LABEL_84;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v42 )
          goto LABEL_79;
      }
      v57 = &StringLiteral_10889/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/;
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
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C213CC & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C213CC = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
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
  sub_1C2D434(&this->fields.m_target);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A68F2C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A68EE4;
}


System_IAsyncResult_o *QuestResetConfirmDialog_ClickDelegate__BeginInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isOk;
  if ( (byte_4C213CF & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C213CF = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void QuestResetConfirmDialog_ClickDelegate__EndInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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