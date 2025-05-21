void __fastcall QuestResetConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct QuestResetConfirmDialog_StaticFields *static_fields; // x8

  if ( (byte_4B3EF3A & 1) == 0 )
  {
    sub_1BDB878(&QuestResetConfirmDialog_TypeInfo, v1);
    byte_4B3EF3A = 1;
  }
  static_fields = QuestResetConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->PARTY_OBJ_POSY_NORMAL = 0x425C0000420C0000LL;
  static_fields->QUEST_NAME_LABEL_MAX_WITDH = 700.0;
}


void __fastcall QuestResetConfirmDialog___ctor(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B3EF39 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B3EF39 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__Close(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestResetConfirmDialog__Close_30973980(this, 0LL, v2);
}


void __fastcall QuestResetConfirmDialog__Close_30973980(
        QuestResetConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4B3EF35 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_QuestResetConfirmDialog_EndClose__, v5);
    byte_4B3EF35 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BDB81C(&this->fields.closeCallbackFunc);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1BDBAD4(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BDB81C(p_closeCallbackFunc);
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
  __int64 v3; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v5; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *buttonCancelLabel; // x20

  if ( (byte_4B3EF33 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&StringLiteral_1/*""*/, v3);
    byte_4B3EF33 = 1;
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
    sub_1BDBAD4(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__OnClickCancel(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B3EF37 & 1) == 0 )
  {
    sub_1BDB878(&Method_QuestResetConfirmDialog_OnClickCancel__, method);
    byte_4B3EF37 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_QuestResetConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890();
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
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

  if ( (byte_4B3EF36 & 1) == 0 )
  {
    sub_1BDB878(&Method_QuestResetConfirmDialog_OnClickDecide__, method);
    byte_4B3EF36 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v4 = Method_QuestResetConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_QuestResetConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BDB890();
    v5 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v4, v4[4]);
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
  __int64 v33; // x1
  __int64 v34; // x1
  Il2CppObject *Master_object; // x0
  void *ClearDeckInfo; // x0
  __int64 v37; // x1
  System_Object_array *v38; // x0
  System_Object_array *v39; // x23
  System_Collections_Generic_List_object__o *servantFaceIconList; // x8
  signed __int64 v41; // x25
  QuestResetConfirmDialog_o *v42; // x20
  __int64 v43; // x2
  __int64 v44; // x3
  unsigned __int64 max_length; // x8
  ServantFaceIconComponent_o *v46; // x26
  Il2CppObject *v47; // x24
  IconLabelInfo_o *v48; // x27
  int32_t klass; // w19
  int ServantLimitCountSealAfter; // w29
  int32_t CardImageLimitCount; // w28
  int32_t monitor_high; // w19
  int32_t LimitCountByImageLimit_39453608; // w2
  int32_t klass_high; // w21
  int32_t v55; // w22
  ServantOverwriteStatus_o *v56; // x19
  System_Collections_Generic_List_object__o *monitor; // x0
  _DWORD *v58; // x8
  int32_t v59; // w27
  int32_t v60; // w3
  Il2CppObject *v61; // x24
  QuestReleaseMaster_o *v62; // x23
  int32_t GroupId; // w0
  bool IsContainUnPlayableQuestByTargetId; // w0
  UnityEngine_Object_o *partyObject; // x19
  bool v66; // w23
  UnityEngine_GameObject_o *v67; // x19
  QuestResetConfirmDialog_c *v68; // x0
  float *p_PARTY_OBJ_POSY_NORMAL; // x8
  UnityEngine_Object_o *titleLabel; // x19
  UILabel_o *v71; // x24
  UnityEngine_Object_o *nameLabel; // x19
  QuestEntity_o *QuestEntity; // x0
  UILabel_o *v74; // x22
  QuestEntity_o *v75; // x24
  System_String_o *v76; // x19
  Il2CppObject *QuestName; // x0
  UILabel_o *v78; // x19
  UnityEngine_Object_o *main1Label; // x19
  UILabel_o *v80; // x22
  __int64 *v81; // x8
  UnityEngine_Object_o *buttonDecideLabel; // x19
  UILabel_o *v83; // x22
  UnityEngine_Object_o *buttonCancelLabel; // x19
  UILabel_o *v85; // x22
  System_Action_o *v86; // x19
  bool v87; // [xsp+64h] [xbp-7Ch]
  int32_t v88; // [xsp+68h] [xbp-78h]
  int32_t questIda; // [xsp+6Ch] [xbp-74h]
  ServantLimitImageMaster_o *v90; // [xsp+70h] [xbp-70h]

  if ( (byte_4B3EF34 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestGroupMaster___, v11);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestMaster___, v12);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestReleaseMaster___, v13);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v14);
    sub_1BDB878(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, v15);
    sub_1BDB878(&DataManager_TypeInfo, v16);
    sub_1BDB878(&IconLabelInfo_TypeInfo, v17);
    sub_1BDB878(&ImageLimitCount_TypeInfo, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__, v20);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Count__, v21);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__, v22);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__, v23);
    sub_1BDB878(&LocalizationManager_TypeInfo, v24);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v25);
    sub_1BDB878(&Method_QuestResetConfirmDialog_EndOpen__, v26);
    sub_1BDB878(&QuestResetConfirmDialog_TypeInfo, v27);
    sub_1BDB878(&ServantOverwriteStatus_TypeInfo, v28);
    sub_1BDB878(&StringLiteral_10890/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, v29);
    sub_1BDB878(&StringLiteral_10892/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/, v30);
    sub_1BDB878(&StringLiteral_10891/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/, v31);
    sub_1BDB878(&StringLiteral_10895/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/, v32);
    sub_1BDB878(&StringLiteral_10894/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/, v33);
    sub_1BDB878(&StringLiteral_10893/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/, v34);
    byte_4B3EF34 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_object )
  {
    ClearDeckInfo = UserEventAlloutBattleMaster__GetClearDeckInfo(
                      (UserEventAlloutBattleMaster_o *)Master_object,
                      questId,
                      0LL);
    if ( !ClearDeckInfo )
      goto LABEL_39;
    v38 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)ClearDeckInfo,
            (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( v38 )
    {
      v39 = v38;
      this->fields.clickFunc = func;
      v88 = maskType;
      questIda = questId;
      v87 = canMaskTouchClose;
      sub_1BDB81C(&this->fields.clickFunc);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
      v90 = (ServantLimitImageMaster_o *)ClearDeckInfo;
      if ( !servantFaceIconList )
        goto LABEL_39;
      v41 = 0LL;
      v42 = this;
      while ( v41 < servantFaceIconList->fields._size )
      {
        ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                          servantFaceIconList,
                          v41,
                          (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
        max_length = v39->max_length;
        v46 = (ServantFaceIconComponent_o *)ClearDeckInfo;
        if ( v41 >= (int)max_length )
        {
          if ( !ClearDeckInfo )
            goto LABEL_39;
          ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)ClearDeckInfo, 0LL);
        }
        else
        {
          if ( v41 >= max_length )
            sub_1BDBADC(ClearDeckInfo, v37, v43, v44);
          v47 = v39->m_Items[v41];
          v48 = (IconLabelInfo_o *)sub_1BDBAC4(IconLabelInfo_TypeInfo);
          IconLabelInfo___ctor(v48, 0LL);
          if ( !v47 || !v48 )
            goto LABEL_39;
          IconLabelInfo__Set_39930232(v48, 2, (int32_t)v47[1].monitor, (int32_t)v47[1].monitor, 0, 0, 1, 0, 0, 0LL);
          klass = (int32_t)v47[2].klass;
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          ServantLimitCountSealAfter = ImageLimitCount__ConvertDispLimitCountForClient(klass, 0LL);
          if ( ServantLimitCountSealAfter <= 10 )
          {
            monitor_high = HIDWORD(v47[1].monitor);
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            LimitCountByImageLimit_39453608 = ImageLimitCount__GetLimitCountByImageLimit_39453608(
                                                ServantLimitCountSealAfter,
                                                monitor_high,
                                                0LL);
            ClearDeckInfo = v90;
            if ( !v90 )
              goto LABEL_39;
            ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           v90,
                                           HIDWORD(v47[1].klass),
                                           LimitCountByImageLimit_39453608,
                                           0LL);
            CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(
                                    HIDWORD(v47[1].klass),
                                    ServantLimitCountSealAfter,
                                    1,
                                    0,
                                    0LL);
          }
          else
          {
            CardImageLimitCount = (int32_t)v47[2].klass;
          }
          klass_high = HIDWORD(v47[1].klass);
          v55 = HIDWORD(v47[1].monitor);
          v56 = (ServantOverwriteStatus_o *)sub_1BDBAC4(ServantOverwriteStatus_TypeInfo);
          ServantOverwriteStatus___ctor_33054568(v56, klass_high, v55, ServantLimitCountSealAfter, 0LL);
          if ( !v56 || !v46 )
            goto LABEL_39;
          ServantFaceIconComponent__SetIcon(
            v46,
            HIDWORD(v47[1].klass),
            v56->fields._Rarity_k__BackingField,
            HIDWORD(v47[1].monitor),
            CardImageLimitCount,
            HIDWORD(v47[2].klass),
            v48,
            0LL,
            2,
            0,
            0,
            0LL,
            0,
            0,
            0,
            0LL,
            v56->fields._ActualRarity_k__BackingField,
            0,
            0LL);
          monitor = (System_Collections_Generic_List_object__o *)v47[2].monitor;
          if ( monitor )
          {
            this = v42;
            if ( monitor->fields._size < 1 )
            {
              v60 = 0;
              v59 = 0;
            }
            else
            {
              ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                                monitor,
                                0,
                                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
              if ( !ClearDeckInfo )
                goto LABEL_39;
              v58 = ClearDeckInfo;
              ClearDeckInfo = v47[2].monitor;
              if ( !ClearDeckInfo )
                goto LABEL_39;
              v59 = v58[4];
              ClearDeckInfo = System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)ClearDeckInfo,
                                0,
                                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
              if ( !ClearDeckInfo )
                goto LABEL_39;
              v60 = *((_DWORD *)ClearDeckInfo + 5);
            }
          }
          else
          {
            v60 = 0;
            v59 = 0;
            this = v42;
          }
          ServantFaceIconComponent__SetEquip_40009656(v46, HIDWORD(v47[1].klass), v59, v60, 0LL, 0LL);
        }
        servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
        ++v41;
        if ( !servantFaceIconList )
          goto LABEL_39;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v61 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestGroupMaster___);
      ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
      if ( !v61 )
        goto LABEL_39;
      v62 = (QuestReleaseMaster_o *)ClearDeckInfo;
      GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)v61, questIda, 17, 0LL);
      ClearDeckInfo = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)v61, GroupId, 17, 0LL);
      if ( !v62 )
        goto LABEL_39;
      IsContainUnPlayableQuestByTargetId = QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
                                             v62,
                                             (System_Int32_array *)ClearDeckInfo,
                                             questIda,
                                             0LL);
      partyObject = (UnityEngine_Object_o *)this->fields.partyObject;
      v66 = IsContainUnPlayableQuestByTargetId;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(partyObject, 0LL, 0LL) )
      {
        v67 = this->fields.partyObject;
        v68 = QuestResetConfirmDialog_TypeInfo;
        if ( !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
          v68 = QuestResetConfirmDialog_TypeInfo;
        }
        p_PARTY_OBJ_POSY_NORMAL = &v68->static_fields->PARTY_OBJ_POSY_NORMAL;
        if ( v66 )
          ++p_PARTY_OBJ_POSY_NORMAL;
        GameObjectExtensions__SetLocalPositionY(v67, *p_PARTY_OBJ_POSY_NORMAL, 0LL);
      }
      titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
      {
        v71 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10895/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/, 0LL);
        if ( !v71 )
          goto LABEL_39;
        UILabel__set_text(v71, (System_String_o *)ClearDeckInfo, 0LL);
      }
      nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        ClearDeckInfo = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestMaster___);
        if ( !ClearDeckInfo )
          goto LABEL_39;
        QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)ClearDeckInfo, questIda, 0LL);
        v74 = this->fields.nameLabel;
        v75 = QuestEntity;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10894/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/, 0LL);
        if ( !v75 )
          goto LABEL_39;
        v76 = (System_String_o *)ClearDeckInfo;
        QuestName = (Il2CppObject *)QuestEntity__getQuestName(v75, 0LL);
        ClearDeckInfo = System_String__Format(v76, QuestName, 0LL);
        if ( !v74 )
          goto LABEL_39;
        UILabel__set_text(v74, (System_String_o *)ClearDeckInfo, 0LL);
        v78 = this->fields.nameLabel;
        ClearDeckInfo = QuestResetConfirmDialog_TypeInfo;
        if ( !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
          ClearDeckInfo = (void *)j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
        if ( !v78 )
          goto LABEL_39;
        UILabel__SetCondensedScale_48820552(
          v78,
          QuestResetConfirmDialog_TypeInfo->static_fields->QUEST_NAME_LABEL_MAX_WITDH,
          0.0,
          0LL);
      }
      main1Label = (UnityEngine_Object_o *)this->fields.main1Label;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(main1Label, 0LL, 0LL) )
      {
LABEL_84:
        buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
        {
          v83 = this->fields.buttonDecideLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10891/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/, 0LL);
          if ( !v83 )
            goto LABEL_39;
          UILabel__set_text(v83, (System_String_o *)ClearDeckInfo, 0LL);
        }
        buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
          goto LABEL_98;
        v85 = this->fields.buttonCancelLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ClearDeckInfo = LocalizationManager__Get((System_String_o *)StringLiteral_10890/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, 0LL);
        if ( v85 )
        {
          UILabel__set_text(v85, (System_String_o *)ClearDeckInfo, 0LL);
LABEL_98:
          *(_WORD *)&this->fields.isButtonEnable = 256;
          BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v87, 0LL);
          v86 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(v86, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v86, v88, 0LL);
          return;
        }
LABEL_39:
        sub_1BDBAD4(ClearDeckInfo, v37);
      }
      v80 = this->fields.main1Label;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v66 )
        {
LABEL_79:
          v81 = &StringLiteral_10893/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/;
LABEL_82:
          ClearDeckInfo = LocalizationManager__Get((System_String_o *)*v81, 0LL);
          if ( !v80 )
            goto LABEL_39;
          UILabel__set_text(v80, (System_String_o *)ClearDeckInfo, 0LL);
          goto LABEL_84;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v66 )
          goto LABEL_79;
      }
      v81 = &StringLiteral_10892/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/;
      goto LABEL_82;
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

  if ( (byte_4B3EF38 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B3EF38 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BDBAD4(0LL, v4);
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
  sub_1BDB81C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A1C474;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1C42C;
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
  if ( (byte_4B3EF3B & 1) == 0 )
  {
    sub_1BDB878(&bool_TypeInfo, isOk);
    byte_4B3EF3B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v9, callback, object);
}


void __fastcall QuestResetConfirmDialog_ClickDelegate__EndInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
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