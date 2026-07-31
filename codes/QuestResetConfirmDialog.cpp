void QuestResetConfirmDialog___cctor(const MethodInfo *method)
{
  struct QuestResetConfirmDialog_StaticFields *static_fields; // x8

  if ( (byte_593268E & 1) == 0 )
  {
    sub_21FFC50(&QuestResetConfirmDialog_TypeInfo);
    byte_593268E = 1;
  }
  static_fields = QuestResetConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->PARTY_OBJ_POSY_NORMAL = 0x425C0000420C0000LL;
  static_fields->QUEST_NAME_LABEL_MAX_WITDH = 700.0;
}


void QuestResetConfirmDialog___ctor(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593268D & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593268D = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void QuestResetConfirmDialog__Close(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestResetConfirmDialog__Close_38359680(this, 0, v2);
}


void QuestResetConfirmDialog__Close_38359680(
        QuestResetConfirmDialog_o *this,
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

  if ( (byte_5932689 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_QuestResetConfirmDialog_EndClose__);
    byte_5932689 = 1;
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
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void QuestResetConfirmDialog__EndClose(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  QuestResetConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void QuestResetConfirmDialog__EndOpen(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void QuestResetConfirmDialog__Init(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *buttonCancelLabel; // x20

  if ( (byte_5932687 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932687 = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_15;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
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
    sub_21FFECC(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void QuestResetConfirmDialog__OnClickCancel(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_593268B & 1) == 0 )
  {
    sub_21FFC50(&Method_QuestResetConfirmDialog_OnClickCancel__);
    byte_593268B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_QuestResetConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_QuestResetConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  _QWORD *v3; // x0
  int32_t v4; // w20
  System_Reflection_MethodBase_o *v5; // x0
  struct QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_593268A & 1) == 0 )
  {
    sub_21FFC50(&Method_QuestResetConfirmDialog_OnClickDecide__);
    byte_593268A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_QuestResetConfirmDialog_OnClickDecide__;
    v4 = 8 * this->fields.isDecideBtnSe;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_QuestResetConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, v4, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Object_array *v21; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *servantFaceIconList; // x8
  signed __int64 v26; // x25
  QuestResetConfirmDialog_o *v27; // x20
  unsigned __int64 max_length_low; // x8
  ServantFaceIconComponent_o *v29; // x26
  Il2CppObject *v30; // x24
  IconLabelInfo_o *v31; // x27
  __int64 v32; // x1
  __int64 v33; // x2
  int32_t klass; // w19
  __int64 v35; // x1
  __int64 v36; // x2
  int ServantLimitCountSealAfter; // w29
  int32_t CardImageLimitCount; // w28
  int32_t monitor_high; // w19
  int32_t LimitCountByImageLimit_47362432; // w2
  int32_t klass_high; // w21
  int32_t v42; // w22
  ServantOverwriteStatus_o *v43; // x19
  System_Collections_Generic_List_object__o *monitor; // x0
  _DWORD *v45; // x8
  int32_t v46; // w27
  int32_t v47; // w3
  Il2CppObject *v48; // x19
  QuestReleaseMaster_o *v49; // x23
  int32_t GroupId; // w0
  __int64 v51; // x1
  __int64 v52; // x2
  bool IsContainUnPlayableQuestByTargetId; // w23
  UnityEngine_Object_o *partyObject; // x19
  __int64 v55; // x1
  __int64 v56; // x2
  UnityEngine_GameObject_o *v57; // x24
  QuestResetConfirmDialog_c *v58; // x0
  int v59; // w8
  float *p_PARTY_OBJ_POSY_COND; // x8
  UnityEngine_Object_o *titleLabel; // x19
  __int64 v62; // x1
  __int64 v63; // x2
  UILabel_o *v64; // x24
  UnityEngine_Object_o *nameLabel; // x19
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  QuestEntity_o *QuestEntity; // x24
  UILabel_o *v71; // x22
  System_String_o *v72; // x19
  Il2CppObject *QuestName; // x0
  __int64 v74; // x2
  UILabel_o *v75; // x19
  UnityEngine_Object_o *main1Label; // x19
  __int64 v77; // x1
  __int64 v78; // x2
  UILabel_o *v79; // x22
  int v80; // w8
  __int64 *v81; // x8
  UnityEngine_Object_o *buttonDecideLabel; // x19
  __int64 v83; // x1
  __int64 v84; // x2
  UILabel_o *v85; // x22
  UnityEngine_Object_o *buttonCancelLabel; // x19
  __int64 v87; // x1
  __int64 v88; // x2
  UILabel_o *v89; // x22
  System_Action_o *v90; // x19
  bool v91; // [xsp+64h] [xbp-7Ch]
  int32_t v92; // [xsp+68h] [xbp-78h]
  int32_t questIda; // [xsp+6Ch] [xbp-74h]
  ServantLimitImageMaster_o *v94; // [xsp+70h] [xbp-70h]

  if ( (byte_5932688 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_QuestResetConfirmDialog_EndOpen__);
    sub_21FFC50(&QuestResetConfirmDialog_TypeInfo);
    sub_21FFC50(&ServantOverwriteStatus_TypeInfo);
    sub_21FFC50(&StringLiteral_11347/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/);
    sub_21FFC50(&StringLiteral_11349/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/);
    sub_21FFC50(&StringLiteral_11348/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/);
    sub_21FFC50(&StringLiteral_11352/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/);
    sub_21FFC50(&StringLiteral_11351/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/);
    sub_21FFC50(&StringLiteral_11350/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/);
    byte_5932688 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId, func);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
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
            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( v14 )
    {
      v21 = v14;
      v92 = maskType;
      questIda = questId;
      v91 = canMaskTouchClose;
      this->fields.clickFunc = func;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
        (int32_t)func,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22, v23);
      ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
      v94 = (ServantLimitImageMaster_o *)ClearDeckInfo;
      if ( servantFaceIconList )
      {
        v26 = 0;
        v27 = this;
        while ( v26 < servantFaceIconList->fields._size )
        {
          ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                            servantFaceIconList,
                            v26,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
          max_length_low = LODWORD(v21->max_length);
          v29 = (ServantFaceIconComponent_o *)ClearDeckInfo;
          if ( v26 >= (int)max_length_low )
          {
            if ( !ClearDeckInfo )
              goto LABEL_39;
            ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)ClearDeckInfo, 0);
          }
          else
          {
            if ( v26 >= max_length_low )
              sub_21FFED4(ClearDeckInfo);
            v30 = v21->m_Items[v26];
            v31 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
            IconLabelInfo___ctor(v31, 0);
            if ( !v30 || !v31 )
              goto LABEL_39;
            IconLabelInfo__Set_47932852(v31, 2, (int32_t)v30[1].monitor, (int32_t)v30[1].monitor, 0, 0, 1, 0, 0, 0);
            klass = (int32_t)v30[2].klass;
            if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v32, v33);
            ServantLimitCountSealAfter = ImageLimitCount__ConvertDispLimitCountForClient(klass, 0);
            if ( ServantLimitCountSealAfter <= 10 )
            {
              monitor_high = HIDWORD(v30[1].monitor);
              if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v35, v36);
              LimitCountByImageLimit_47362432 = ImageLimitCount__GetLimitCountByImageLimit_47362432(
                                                  ServantLimitCountSealAfter,
                                                  monitor_high,
                                                  0);
              ClearDeckInfo = v94;
              if ( !v94 )
                goto LABEL_39;
              ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                             v94,
                                             HIDWORD(v30[1].klass),
                                             LimitCountByImageLimit_47362432,
                                             0);
              CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(
                                      HIDWORD(v30[1].klass),
                                      ServantLimitCountSealAfter,
                                      1,
                                      0,
                                      0);
            }
            else
            {
              CardImageLimitCount = (int32_t)v30[2].klass;
            }
            klass_high = HIDWORD(v30[1].klass);
            v42 = HIDWORD(v30[1].monitor);
            v43 = (ServantOverwriteStatus_o *)sub_21FFEBC(ServantOverwriteStatus_TypeInfo);
            ServantOverwriteStatus___ctor_40387980(v43, klass_high, v42, ServantLimitCountSealAfter, 0);
            if ( !v43 || !v29 )
              goto LABEL_39;
            ServantFaceIconComponent__SetIcon(
              v29,
              HIDWORD(v30[1].klass),
              v43->fields._Rarity_k__BackingField,
              HIDWORD(v30[1].monitor),
              CardImageLimitCount,
              HIDWORD(v30[2].klass),
              v31,
              0,
              2,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              v43->fields._ActualRarity_k__BackingField,
              0,
              0,
              0);
            monitor = (System_Collections_Generic_List_object__o *)v30[2].monitor;
            if ( monitor )
            {
              this = v27;
              if ( monitor->fields._size < 1 )
              {
                v47 = 0;
                v46 = 0;
              }
              else
              {
                ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                                  monitor,
                                  0,
                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
                if ( !ClearDeckInfo )
                  goto LABEL_39;
                v45 = ClearDeckInfo;
                ClearDeckInfo = v30[2].monitor;
                if ( !ClearDeckInfo )
                  goto LABEL_39;
                v46 = v45[4];
                ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)ClearDeckInfo,
                                  0,
                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
                if ( !ClearDeckInfo )
                  goto LABEL_39;
                v47 = *((_DWORD *)ClearDeckInfo + 5);
              }
            }
            else
            {
              v47 = 0;
              v46 = 0;
              this = v27;
            }
            ServantFaceIconComponent__SetEquip_48009572(v29, HIDWORD(v30[1].klass), v46, v47, 0, 0);
          }
          servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
          ++v26;
          if ( !servantFaceIconList )
            goto LABEL_39;
        }
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v24);
        v48 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestGroupMaster___);
        ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
        if ( v48 )
        {
          v49 = (QuestReleaseMaster_o *)ClearDeckInfo;
          GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)v48, questIda, 17, 0);
          ClearDeckInfo = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)v48, GroupId, 17, 0);
          if ( v49 )
          {
            IsContainUnPlayableQuestByTargetId = QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
                                                   v49,
                                                   (System_Int32_array *)ClearDeckInfo,
                                                   questIda,
                                                   0);
            partyObject = (UnityEngine_Object_o *)this->fields.partyObject;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51, v52);
            if ( UnityEngine_Object__op_Inequality(partyObject, 0, 0) )
            {
              v57 = this->fields.partyObject;
              v58 = QuestResetConfirmDialog_TypeInfo;
              v59 = *(&QuestResetConfirmDialog_TypeInfo->_2.cctor_finished + 1);
              if ( IsContainUnPlayableQuestByTargetId )
              {
                if ( !v59 )
                {
                  j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo, v55, v56);
                  v58 = QuestResetConfirmDialog_TypeInfo;
                }
                p_PARTY_OBJ_POSY_COND = &v58->static_fields->PARTY_OBJ_POSY_COND;
              }
              else
              {
                if ( !v59 )
                {
                  j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo, v55, v56);
                  v58 = QuestResetConfirmDialog_TypeInfo;
                }
                p_PARTY_OBJ_POSY_COND = &v58->static_fields->PARTY_OBJ_POSY_NORMAL;
              }
              GameObjectExtensions__SetLocalPositionY(v57, *p_PARTY_OBJ_POSY_COND, 0);
            }
            titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55, v56);
            if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
            {
              v64 = this->fields.titleLabel;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62, v63);
              ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_11352/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/, 0);
              if ( !v64 )
                goto LABEL_39;
              UILabel__set_text(v64, (System_String_o *)ClearDeckInfo, 0);
            }
            nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62, v63);
            if ( UnityEngine_Object__op_Inequality(nameLabel, 0, 0) )
            {
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v66, v67);
              ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestMaster___);
              if ( !ClearDeckInfo )
                goto LABEL_39;
              QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)ClearDeckInfo, questIda, 0);
              v71 = this->fields.nameLabel;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68, v69);
              ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_11351/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/, 0);
              if ( !QuestEntity )
                goto LABEL_39;
              v72 = (System_String_o *)ClearDeckInfo;
              QuestName = (Il2CppObject *)QuestEntity__getQuestName(QuestEntity, 0);
              ClearDeckInfo = System_String__Format(v72, QuestName, 0);
              if ( !v71 )
                goto LABEL_39;
              UILabel__set_text(v71, (System_String_o *)ClearDeckInfo, 0);
              v75 = this->fields.nameLabel;
              ClearDeckInfo = QuestResetConfirmDialog_TypeInfo;
              if ( !*(&QuestResetConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo, v13, v74);
              if ( !v75 )
                goto LABEL_39;
              UILabel__SetCondensedScale_56386440(
                v75,
                QuestResetConfirmDialog_TypeInfo->static_fields->QUEST_NAME_LABEL_MAX_WITDH,
                0.0,
                0);
            }
            main1Label = (UnityEngine_Object_o *)this->fields.main1Label;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66, v67);
            if ( UnityEngine_Object__op_Inequality(main1Label, 0, 0) )
            {
              v79 = this->fields.main1Label;
              v80 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
              if ( IsContainUnPlayableQuestByTargetId )
              {
                if ( !v80 )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77, v78);
                v81 = &StringLiteral_11350/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/;
              }
              else
              {
                if ( !v80 )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77, v78);
                v81 = &StringLiteral_11349/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/;
              }
              ClearDeckInfo = LocalizationManager__Get((System_String_o *)*v81, 0);
              if ( !v79 )
                goto LABEL_39;
              UILabel__set_text(v79, (System_String_o *)ClearDeckInfo, 0);
            }
            buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77, v78);
            if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
            {
              v85 = this->fields.buttonDecideLabel;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v83, v84);
              ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_11348/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/, 0);
              if ( !v85 )
                goto LABEL_39;
              UILabel__set_text(v85, (System_String_o *)ClearDeckInfo, 0);
            }
            buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v83, v84);
            if ( !UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
              goto LABEL_103;
            v89 = this->fields.buttonCancelLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v87, v88);
            ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_11347/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, 0);
            if ( v89 )
            {
              UILabel__set_text(v89, (System_String_o *)ClearDeckInfo, 0);
LABEL_103:
              *(_WORD *)&this->fields.isButtonEnable = 256;
              BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v91, 0);
              v90 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
              System_Action___ctor(v90, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndOpen__, 0);
              BaseDialog__Open((BaseDialog_o *)this, v90, v92, 0, 0);
              return;
            }
          }
        }
      }
LABEL_39:
      sub_21FFECC(ClearDeckInfo, v13);
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
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_593268C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593268C = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void QuestResetConfirmDialog_ClickDelegate___ctor(
        QuestResetConfirmDialog_ClickDelegate_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1FECBF4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FECBAC;
}


System_IAsyncResult_o *QuestResetConfirmDialog_ClickDelegate__BeginInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isOk;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void QuestResetConfirmDialog_ClickDelegate__EndInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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