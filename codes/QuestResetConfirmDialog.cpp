void QuestResetConfirmDialog___cctor(const MethodInfo *method)
{
  struct QuestResetConfirmDialog_StaticFields *static_fields; // x8

  if ( (byte_4CE84C0 & 1) == 0 )
  {
    sub_1C7BAE8(&QuestResetConfirmDialog_TypeInfo);
    byte_4CE84C0 = 1;
  }
  static_fields = QuestResetConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->PARTY_OBJ_POSY_NORMAL = 0x425C0000420C0000LL;
  static_fields->QUEST_NAME_LABEL_MAX_WITDH = 700.0;
}


void QuestResetConfirmDialog___ctor(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CE84BF & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CE84BF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void QuestResetConfirmDialog__Close(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestResetConfirmDialog__Close_31674688(this, 0, v2);
}


void QuestResetConfirmDialog__Close_31674688(
        QuestResetConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4CE84BB & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_QuestResetConfirmDialog_EndClose__);
    byte_4CE84BB = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C7BA8C(&this->fields.closeCallbackFunc, callback);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C7BA8C(p_closeCallbackFunc, 0);
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

  if ( (byte_4CE84B9 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE84B9 = 1;
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
    sub_1C7BD40(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void QuestResetConfirmDialog__OnClickCancel(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CE84BD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_QuestResetConfirmDialog_OnClickCancel__);
    byte_4CE84BD = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_QuestResetConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_QuestResetConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
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

  if ( (byte_4CE84BC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_QuestResetConfirmDialog_OnClickDecide__);
    byte_4CE84BC = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v4 = Method_QuestResetConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C7BB00(Method_QuestResetConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v4, v4[4]);
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
  unsigned __int64 max_length_low; // x8
  ServantFaceIconComponent_o *v20; // x26
  Il2CppObject *v21; // x24
  IconLabelInfo_o *v22; // x27
  int32_t klass; // w19
  int ServantLimitCountSealAfter; // w29
  int32_t CardImageLimitCount; // w28
  int32_t monitor_high; // w19
  int32_t LimitCountByImageLimit_40993488; // w2
  int32_t klass_high; // w21
  int32_t v29; // w22
  ServantOverwriteStatus_o *v30; // x19
  System_Collections_Generic_List_object__o *monitor; // x0
  _DWORD *v32; // x8
  int32_t v33; // w27
  int32_t v34; // w3
  Il2CppObject *v35; // x24
  QuestReleaseMaster_o *v36; // x23
  int32_t GroupId; // w0
  bool IsContainUnPlayableQuestByTargetId; // w0
  UnityEngine_Object_o *partyObject; // x19
  bool v40; // w23
  UnityEngine_GameObject_o *v41; // x19
  QuestResetConfirmDialog_c *v42; // x0
  float *p_PARTY_OBJ_POSY_NORMAL; // x8
  UnityEngine_Object_o *titleLabel; // x19
  UILabel_o *v45; // x24
  UnityEngine_Object_o *nameLabel; // x19
  QuestEntity_o *QuestEntity; // x0
  UILabel_o *v48; // x22
  QuestEntity_o *v49; // x24
  System_String_o *v50; // x19
  Il2CppObject *QuestName; // x0
  UILabel_o *v52; // x19
  UnityEngine_Object_o *main1Label; // x19
  UILabel_o *v54; // x22
  __int64 *v55; // x8
  UnityEngine_Object_o *buttonDecideLabel; // x19
  UILabel_o *v57; // x22
  UnityEngine_Object_o *buttonCancelLabel; // x19
  UILabel_o *v59; // x22
  System_Action_o *v60; // x19
  bool v61; // [xsp+64h] [xbp-7Ch]
  int32_t v62; // [xsp+68h] [xbp-78h]
  int32_t questIda; // [xsp+6Ch] [xbp-74h]
  ServantLimitImageMaster_o *v64; // [xsp+70h] [xbp-70h]

  if ( (byte_4CE84BA & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&IconLabelInfo_TypeInfo);
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_QuestResetConfirmDialog_EndOpen__);
    sub_1C7BAE8(&QuestResetConfirmDialog_TypeInfo);
    sub_1C7BAE8(&ServantOverwriteStatus_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10935/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_10937/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/);
    sub_1C7BAE8(&StringLiteral_10936/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_10940/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_10939/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/);
    sub_1C7BAE8(&StringLiteral_10938/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/);
    byte_4CE84BA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
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
            (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( v14 )
    {
      v15 = v14;
      this->fields.clickFunc = func;
      v62 = maskType;
      questIda = questId;
      v61 = canMaskTouchClose;
      sub_1C7BA8C(&this->fields.clickFunc, func);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
      v64 = (ServantLimitImageMaster_o *)ClearDeckInfo;
      if ( !servantFaceIconList )
        goto LABEL_39;
      v17 = 0;
      v18 = this;
      while ( v17 < servantFaceIconList->fields._size )
      {
        ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                          servantFaceIconList,
                          v17,
                          (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
        max_length_low = LODWORD(v15->max_length);
        v20 = (ServantFaceIconComponent_o *)ClearDeckInfo;
        if ( v17 >= (int)max_length_low )
        {
          if ( !ClearDeckInfo )
            goto LABEL_39;
          ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)ClearDeckInfo, 0);
        }
        else
        {
          if ( v17 >= max_length_low )
            sub_1C7BD48(ClearDeckInfo);
          v21 = v15->m_Items[v17];
          v22 = (IconLabelInfo_o *)sub_1C7BD34(IconLabelInfo_TypeInfo);
          IconLabelInfo___ctor(v22, 0);
          if ( !v21 || !v22 )
            goto LABEL_39;
          IconLabelInfo__Set_41483756(v22, 2, (int32_t)v21[1].monitor, (int32_t)v21[1].monitor, 0, 0, 1, 0, 0, 0);
          klass = (int32_t)v21[2].klass;
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          ServantLimitCountSealAfter = ImageLimitCount__ConvertDispLimitCountForClient(klass, 0);
          if ( ServantLimitCountSealAfter <= 10 )
          {
            monitor_high = HIDWORD(v21[1].monitor);
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            LimitCountByImageLimit_40993488 = ImageLimitCount__GetLimitCountByImageLimit_40993488(
                                                ServantLimitCountSealAfter,
                                                monitor_high,
                                                0);
            ClearDeckInfo = v64;
            if ( !v64 )
              goto LABEL_39;
            ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           v64,
                                           HIDWORD(v21[1].klass),
                                           LimitCountByImageLimit_40993488,
                                           0);
            CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(
                                    HIDWORD(v21[1].klass),
                                    ServantLimitCountSealAfter,
                                    1,
                                    0,
                                    0);
          }
          else
          {
            CardImageLimitCount = (int32_t)v21[2].klass;
          }
          klass_high = HIDWORD(v21[1].klass);
          v29 = HIDWORD(v21[1].monitor);
          v30 = (ServantOverwriteStatus_o *)sub_1C7BD34(ServantOverwriteStatus_TypeInfo);
          ServantOverwriteStatus___ctor_35656548(v30, klass_high, v29, ServantLimitCountSealAfter, 0);
          if ( !v30 || !v20 )
            goto LABEL_39;
          ServantFaceIconComponent__SetIcon(
            v20,
            HIDWORD(v21[1].klass),
            v30->fields._Rarity_k__BackingField,
            HIDWORD(v21[1].monitor),
            CardImageLimitCount,
            HIDWORD(v21[2].klass),
            v22,
            0,
            2,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            v30->fields._ActualRarity_k__BackingField,
            0,
            0);
          monitor = (System_Collections_Generic_List_object__o *)v21[2].monitor;
          if ( monitor )
          {
            this = v18;
            if ( monitor->fields._size < 1 )
            {
              v34 = 0;
              v33 = 0;
            }
            else
            {
              ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                                monitor,
                                0,
                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
              if ( !ClearDeckInfo )
                goto LABEL_39;
              v32 = ClearDeckInfo;
              ClearDeckInfo = v21[2].monitor;
              if ( !ClearDeckInfo )
                goto LABEL_39;
              v33 = v32[4];
              ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)ClearDeckInfo,
                                0,
                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
              if ( !ClearDeckInfo )
                goto LABEL_39;
              v34 = *((_DWORD *)ClearDeckInfo + 5);
            }
          }
          else
          {
            v34 = 0;
            v33 = 0;
            this = v18;
          }
          ServantFaceIconComponent__SetEquip_41650156(v20, HIDWORD(v21[1].klass), v33, v34, 0, 0);
        }
        servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
        ++v17;
        if ( !servantFaceIconList )
          goto LABEL_39;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v35 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
      ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
      if ( !v35 )
        goto LABEL_39;
      v36 = (QuestReleaseMaster_o *)ClearDeckInfo;
      GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)v35, questIda, 17, 0);
      ClearDeckInfo = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)v35, GroupId, 17, 0);
      if ( !v36 )
        goto LABEL_39;
      IsContainUnPlayableQuestByTargetId = QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
                                             v36,
                                             (System_Int32_array *)ClearDeckInfo,
                                             questIda,
                                             0);
      partyObject = (UnityEngine_Object_o *)this->fields.partyObject;
      v40 = IsContainUnPlayableQuestByTargetId;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(partyObject, 0, 0) )
      {
        v41 = this->fields.partyObject;
        v42 = QuestResetConfirmDialog_TypeInfo;
        if ( !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
          v42 = QuestResetConfirmDialog_TypeInfo;
        }
        p_PARTY_OBJ_POSY_NORMAL = &v42->static_fields->PARTY_OBJ_POSY_NORMAL;
        if ( v40 )
          ++p_PARTY_OBJ_POSY_NORMAL;
        GameObjectExtensions__SetLocalPositionY(v41, *p_PARTY_OBJ_POSY_NORMAL, 0);
      }
      titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
      {
        v45 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10940/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/, 0);
        if ( !v45 )
          goto LABEL_39;
        UILabel__set_text(v45, (System_String_o *)ClearDeckInfo, 0);
      }
      nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(nameLabel, 0, 0) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestMaster___);
        if ( !ClearDeckInfo )
          goto LABEL_39;
        QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)ClearDeckInfo, questIda, 0);
        v48 = this->fields.nameLabel;
        v49 = QuestEntity;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10939/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/, 0);
        if ( !v49 )
          goto LABEL_39;
        v50 = (System_String_o *)ClearDeckInfo;
        QuestName = (Il2CppObject *)QuestEntity__getQuestName(v49, 0);
        ClearDeckInfo = System_String__Format(v50, QuestName, 0);
        if ( !v48 )
          goto LABEL_39;
        UILabel__set_text(v48, (System_String_o *)ClearDeckInfo, 0);
        v52 = this->fields.nameLabel;
        ClearDeckInfo = QuestResetConfirmDialog_TypeInfo;
        if ( !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
        if ( !v52 )
          goto LABEL_39;
        UILabel__SetCondensedScale_50047964(
          v52,
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
          v57 = this->fields.buttonDecideLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10936/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/, 0);
          if ( !v57 )
            goto LABEL_39;
          UILabel__set_text(v57, (System_String_o *)ClearDeckInfo, 0);
        }
        buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
          goto LABEL_98;
        v59 = this->fields.buttonCancelLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10935/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, 0);
        if ( v59 )
        {
          UILabel__set_text(v59, (System_String_o *)ClearDeckInfo, 0);
LABEL_98:
          *(_WORD *)&this->fields.isButtonEnable = 256;
          BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v61, 0);
          v60 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
          System_Action___ctor(v60, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndOpen__, 0);
          BaseDialog__Open((BaseDialog_o *)this, v60, v62, 0, 0);
          return;
        }
LABEL_39:
        sub_1C7BD40(ClearDeckInfo, v13);
      }
      v54 = this->fields.main1Label;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v40 )
        {
LABEL_79:
          v55 = &StringLiteral_10938/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/;
LABEL_82:
          ClearDeckInfo = LocalizationManager__Get((System_String_o *)*v55, 0);
          if ( !v54 )
            goto LABEL_39;
          UILabel__set_text(v54, (System_String_o *)ClearDeckInfo, 0);
          goto LABEL_84;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v40 )
          goto LABEL_79;
      }
      v55 = &StringLiteral_10937/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/;
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

  if ( (byte_4CE84BE & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE84BE = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C7BD40(0, v4);
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
  sub_1C7BA8C(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA803C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA7FF4;
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
  if ( (byte_4CE84C1 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CE84C1 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void QuestResetConfirmDialog_ClickDelegate__EndInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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