void __fastcall QuestResetConfirmDialog___cctor(const MethodInfo *method)
{
  if ( (byte_438FD39 & 1) == 0 )
  {
    sub_B775C4(&QuestResetConfirmDialog_TypeInfo);
    byte_438FD39 = 1;
  }
  QuestResetConfirmDialog_TypeInfo->static_fields->PARTY_OBJ_POSY_NORMAL = 35.0;
  QuestResetConfirmDialog_TypeInfo->static_fields->PARTY_OBJ_POSY_COND = 55.0;
  QuestResetConfirmDialog_TypeInfo->static_fields->QUEST_NAME_LABEL_MAX_WITDH = 700.0;
}


void __fastcall QuestResetConfirmDialog___ctor(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_438FD38 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438FD38 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__Close(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestResetConfirmDialog__Close_34439164(this, 0LL, v2);
}


void __fastcall QuestResetConfirmDialog__Close_34439164(
        QuestResetConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_438FD34 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_QuestResetConfirmDialog_EndClose__);
    byte_438FD34 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall QuestResetConfirmDialog__EndClose(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  QuestResetConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B77560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
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

  if ( (byte_438FD32 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438FD32 = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_17;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_17;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  *(_WORD *)&this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_17:
    sub_B7769C(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__OnClickCancel(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_438FD36 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438FD36 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      QuestResetConfirmDialog_ClickDelegate__Invoke(clickFunc, 0, 0LL);
  }
}


void __fastcall QuestResetConfirmDialog__OnClickDecide(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w0
  QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_438FD35 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438FD35 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( this->fields.isDecideBtnSe )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v3 = 8;
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v3 = 0;
    }
    SoundManager__playSystemSe(v3, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      QuestResetConfirmDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
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
  UserEventAlloutBattleMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *ClearDeckInfo; // x0
  __int64 v13; // x1
  WarBoardUiData_SaveData_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  WarBoardUiData_SaveData_array *v21; // x23
  struct System_Collections_Generic_List_ServantFaceIconComponent__o *servantFaceIconList; // x21
  ServantLimitImageMaster_o *v23; // x24
  __int64 v24; // x28
  unsigned __int64 v25; // x26
  unsigned __int64 max_length; // x8
  ServantFaceIconComponent_o *v27; // x25
  __int64 v28; // x21
  IconLabelInfo_o *v29; // x26
  __int64 v30; // x8
  __int64 v31; // x8
  int32_t v32; // w2
  int32_t v33; // w3
  QuestGroupMaster_o *v34; // x24
  QuestReleaseMaster_o *v35; // x23
  int32_t GroupId; // w0
  const MethodInfo *v37; // x3
  bool IsContainUnPlayableQuestByTargetId; // w0
  UnityEngine_Object_o *partyObject; // x24
  bool v40; // w23
  UnityEngine_GameObject_o *v41; // x24
  QuestResetConfirmDialog_c *v42; // x0
  float PARTY_OBJ_POSY_COND; // s0
  UnityEngine_Object_o *titleLabel; // x24
  UILabel_o *v45; // x24
  UnityEngine_Object_o *nameLabel; // x24
  QuestEntity_o *QuestEntity; // x0
  UILabel_o *v48; // x22
  QuestEntity_o *v49; // x24
  System_String_o *v50; // x25
  Il2CppObject *QuestName; // x0
  UILabel_o *v52; // x22
  UnityEngine_Object_o *main1Label; // x22
  UILabel_o *v54; // x22
  __int64 *v55; // x8
  UnityEngine_Object_o *buttonDecideLabel; // x22
  UILabel_o *v57; // x22
  UnityEngine_Object_o *buttonCancelLabel; // x22
  UILabel_o *v59; // x22
  System_Action_o *v60; // x21
  __int64 v61; // x0
  bool v62; // [xsp+48h] [xbp-58h]
  int32_t type; // [xsp+4Ch] [xbp-54h]

  if ( (byte_438FD33 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_QuestMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&IconLabelInfo_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_QuestResetConfirmDialog_EndOpen__);
    sub_B775C4(&QuestResetConfirmDialog_TypeInfo);
    sub_B775C4(&StringLiteral_11166/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/);
    sub_B775C4(&StringLiteral_11168/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/);
    sub_B775C4(&StringLiteral_11167/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/);
    sub_B775C4(&StringLiteral_11171/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/);
    sub_B775C4(&StringLiteral_11170/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/);
    sub_B775C4(&StringLiteral_11169/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/);
    byte_438FD33 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventAlloutBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_WarQuestSelectionMaster )
  {
    ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)UserEventAlloutBattleMaster__GetClearDeckInfo(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    questId,
                                                                                    0LL);
    if ( !ClearDeckInfo )
      goto LABEL_32;
    v14 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
            ClearDeckInfo,
            (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( v14 )
    {
      v21 = v14;
      this->fields.clickFunc = func;
      type = maskType;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.clickFunc,
        (System_Int32_array **)func,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v62 = canMaskTouchClose;
      ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      servantFaceIconList = this->fields.servantFaceIconList;
      if ( servantFaceIconList )
      {
        v23 = (ServantLimitImageMaster_o *)ClearDeckInfo;
        v24 = 4LL;
        while ( 1 )
        {
          v25 = v24 - 4;
          if ( v24 - 4 >= servantFaceIconList->fields._size )
            break;
          if ( v25 >= (unsigned int)servantFaceIconList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          max_length = v21->max_length;
          v27 = (ServantFaceIconComponent_o *)*((_QWORD *)&servantFaceIconList->fields._items->obj.klass + v24);
          if ( (__int64)v25 >= (int)max_length )
          {
            if ( !v27 )
              goto LABEL_32;
            ServantFaceIconComponent__NoMount(
              *((ServantFaceIconComponent_o **)&servantFaceIconList->fields._items->obj.klass + v24),
              0LL);
          }
          else
          {
            if ( v25 >= max_length )
            {
              v61 = sub_B776C8(ClearDeckInfo);
              sub_B77668(v61, 0LL);
            }
            v28 = *((_QWORD *)&v21->obj.klass + v24);
            v29 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
            IconLabelInfo___ctor(v29, 0LL);
            if ( !v28 )
              goto LABEL_32;
            if ( !v29 )
              goto LABEL_32;
            IconLabelInfo__Set_28141596(v29, 2, *(_DWORD *)(v28 + 24), *(_DWORD *)(v28 + 24), 0, 0, 1, 0, 0LL);
            if ( !v23 )
              goto LABEL_32;
            ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                                            v23,
                                                                                            *(_DWORD *)(v28 + 20),
                                                                                            *(_DWORD *)(v28 + 32),
                                                                                            0LL);
            if ( !v27 )
              goto LABEL_32;
            ServantFaceIconComponent__Set_31755472(
              v27,
              *(_DWORD *)(v28 + 20),
              *(_DWORD *)(v28 + 28),
              (_DWORD)ClearDeckInfo - ((int)ClearDeckInfo < 11),
              *(_DWORD *)(v28 + 36),
              v29,
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
            v30 = *(_QWORD *)(v28 + 40);
            if ( v30 && *(int *)(v30 + 24) >= 1 )
            {
              v31 = *(_QWORD *)(*(_QWORD *)(v30 + 16) + 32LL);
              if ( !v31 )
                goto LABEL_32;
              v32 = *(_DWORD *)(v31 + 16);
              v33 = *(_DWORD *)(v31 + 20);
            }
            else
            {
              v33 = 0;
              v32 = 0;
            }
            ServantFaceIconComponent__SetEquip_31759892(v27, *(_DWORD *)(v28 + 20), v32, v33, 0LL);
          }
          servantFaceIconList = this->fields.servantFaceIconList;
          ++v24;
          if ( !servantFaceIconList )
            goto LABEL_32;
        }
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v34 = (QuestGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestGroupMaster___);
        ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
        if ( v34 )
        {
          v35 = (QuestReleaseMaster_o *)ClearDeckInfo;
          GroupId = QuestGroupMaster__GetGroupId(v34, questId, 17, 0LL);
          ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                                                                          v34,
                                                                                          GroupId,
                                                                                          17,
                                                                                          0LL);
          if ( v35 )
          {
            IsContainUnPlayableQuestByTargetId = QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
                                                   v35,
                                                   (System_Int32_array *)ClearDeckInfo,
                                                   questId,
                                                   v37);
            partyObject = (UnityEngine_Object_o *)this->fields.partyObject;
            v40 = IsContainUnPlayableQuestByTargetId;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(partyObject, 0LL, 0LL) )
            {
              v41 = this->fields.partyObject;
              v42 = QuestResetConfirmDialog_TypeInfo;
              if ( v40 )
              {
                if ( (WORD1(QuestResetConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
                  v42 = QuestResetConfirmDialog_TypeInfo;
                }
                PARTY_OBJ_POSY_COND = v42->static_fields->PARTY_OBJ_POSY_COND;
              }
              else
              {
                if ( (WORD1(QuestResetConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
                  v42 = QuestResetConfirmDialog_TypeInfo;
                }
                PARTY_OBJ_POSY_COND = v42->static_fields->PARTY_OBJ_POSY_NORMAL;
              }
              GameObjectExtensions__SetLocalPositionY(v41, PARTY_OBJ_POSY_COND, 0LL);
            }
            titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
            {
              v45 = this->fields.titleLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_11171/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/,
                                                                                              0LL);
              if ( !v45 )
                goto LABEL_32;
              UILabel__set_text(v45, (System_String_o *)ClearDeckInfo, 0LL);
            }
            nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
            {
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestMaster___);
              if ( !ClearDeckInfo )
                goto LABEL_32;
              QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)ClearDeckInfo, questId, 0LL);
              v48 = this->fields.nameLabel;
              v49 = QuestEntity;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_11170/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/,
                                                                                              0LL);
              if ( !v49 )
                goto LABEL_32;
              v50 = (System_String_o *)ClearDeckInfo;
              QuestName = (Il2CppObject *)QuestEntity__getQuestName(v49, 0LL);
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_String__Format(
                                                                                              v50,
                                                                                              QuestName,
                                                                                              0LL);
              if ( !v48 )
                goto LABEL_32;
              UILabel__set_text(v48, (System_String_o *)ClearDeckInfo, 0LL);
              v52 = this->fields.nameLabel;
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)QuestResetConfirmDialog_TypeInfo;
              if ( (BYTE3(QuestResetConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
              }
              if ( !v52 )
                goto LABEL_32;
              UILabel__SetCondensedScale_41780892(
                v52,
                QuestResetConfirmDialog_TypeInfo->static_fields->QUEST_NAME_LABEL_MAX_WITDH,
                0LL);
            }
            main1Label = (UnityEngine_Object_o *)this->fields.main1Label;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(main1Label, 0LL, 0LL) )
            {
              v54 = this->fields.main1Label;
              if ( v40 )
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v55 = &StringLiteral_11169/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/;
              }
              else
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v55 = &StringLiteral_11168/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/;
              }
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)*v55,
                                                                                              0LL);
              if ( !v54 )
                goto LABEL_32;
              UILabel__set_text(v54, (System_String_o *)ClearDeckInfo, 0LL);
            }
            buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
            {
              v57 = this->fields.buttonDecideLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_11167/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/,
                                                                                              0LL);
              if ( !v57 )
                goto LABEL_32;
              UILabel__set_text(v57, (System_String_o *)ClearDeckInfo, 0LL);
            }
            buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
              goto LABEL_113;
            v59 = this->fields.buttonCancelLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                            (System_String_o *)StringLiteral_11166/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/,
                                                                                            0LL);
            if ( v59 )
            {
              UILabel__set_text(v59, (System_String_o *)ClearDeckInfo, 0LL);
LABEL_113:
              *(_WORD *)&this->fields.isButtonEnable = 256;
              BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v62, 0LL);
              v60 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
              System_Action___ctor(v60, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v60, type, 0LL);
              return;
            }
          }
        }
      }
LABEL_32:
      sub_B7769C(ClearDeckInfo, v13);
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

  if ( (byte_438FD37 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438FD37 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_B7769C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestResetConfirmDialog_ClickDelegate___ctor(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall QuestResetConfirmDialog_ClickDelegate__BeginInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isOk;
  if ( (byte_438B192 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_438B192 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall QuestResetConfirmDialog_ClickDelegate__EndInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestResetConfirmDialog_ClickDelegate__Invoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  QuestResetConfirmDialog_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  QuestResetConfirmDialog_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  QuestResetConfirmDialog_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (QuestResetConfirmDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isOk);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isOk, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, isOk, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isOk, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isOk,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isOk, v20);
    goto LABEL_37;
  }
}