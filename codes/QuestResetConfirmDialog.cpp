void __fastcall QuestResetConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD581 & 1) == 0 )
  {
    sub_B16FFC(&QuestResetConfirmDialog_TypeInfo, v1);
    byte_40FD581 = 1;
  }
  QuestResetConfirmDialog_TypeInfo->static_fields->PARTY_OBJ_POSY_NORMAL = 35.0;
  QuestResetConfirmDialog_TypeInfo->static_fields->PARTY_OBJ_POSY_COND = 55.0;
  QuestResetConfirmDialog_TypeInfo->static_fields->QUEST_NAME_LABEL_MAX_WITDH = 700.0;
}


void __fastcall QuestResetConfirmDialog___ctor(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FD580 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FD580 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__Close(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestResetConfirmDialog__Close_31222540(this, 0LL, v2);
}


void __fastcall QuestResetConfirmDialog__Close_31222540(
        QuestResetConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FD57C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_QuestResetConfirmDialog_EndClose__, v10);
    byte_40FD57C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall QuestResetConfirmDialog__EndClose(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  QuestResetConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
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
  UILabel_o *v5; // x0
  UnityEngine_Object_o *buttonCancelLabel; // x20
  UILabel_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FD57A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40FD57A = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    v5 = this->fields.buttonDecideLabel;
    if ( !v5 )
      goto LABEL_17;
    UILabel__set_text(v5, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    v7 = this->fields.buttonCancelLabel;
    if ( !v7 )
      goto LABEL_17;
    UILabel__set_text(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  *(_WORD *)&this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_17:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__OnClickCancel(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_40FD57E & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD57E = 1;
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

  if ( (byte_40FD57D & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD57D = 1;
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
  UserEventAlloutBattleMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *ClearDeckInfo; // x0
  WarBoardUiData_SaveData_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  WarBoardUiData_SaveData_array *v42; // x23
  WarQuestSelectionMaster_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  struct System_Collections_Generic_List_ServantFaceIconComponent__o *servantFaceIconList; // x21
  ServantLimitImageMaster_o *v49; // x24
  __int64 v50; // x28
  unsigned __int64 v51; // x26
  unsigned __int64 max_length; // x8
  ServantFaceIconComponent_o *v53; // x25
  __int64 v54; // x21
  IconLabelInfo_o *v55; // x26
  int32_t ServantLimitCountSealAfter; // w0
  __int64 v57; // x8
  __int64 v58; // x8
  int32_t v59; // w2
  int32_t v60; // w3
  QuestGroupMaster_o *v61; // x24
  WarQuestSelectionMaster_o *v62; // x0
  QuestReleaseMaster_o *v63; // x23
  int32_t GroupId; // w0
  System_Int32_array *QuestIdListByGroupId; // x0
  const MethodInfo *v66; // x3
  bool IsContainUnPlayableQuestByTargetId; // w0
  UnityEngine_Object_o *partyObject; // x24
  bool v69; // w23
  UnityEngine_GameObject_o *v70; // x24
  QuestResetConfirmDialog_c *v71; // x0
  float PARTY_OBJ_POSY_COND; // s0
  UnityEngine_Object_o *titleLabel; // x24
  UILabel_o *v74; // x24
  System_String_o *v75; // x0
  UnityEngine_Object_o *nameLabel; // x24
  QuestMaster_o *v77; // x0
  QuestEntity_o *QuestEntity; // x0
  UILabel_o *v79; // x22
  QuestEntity_o *v80; // x24
  System_String_o *v81; // x0
  System_String_o *v82; // x25
  Il2CppObject *QuestName; // x0
  System_String_o *v84; // x0
  UILabel_o *v85; // x22
  UnityEngine_Object_o *main1Label; // x22
  UILabel_o *v87; // x22
  __int64 *v88; // x8
  System_String_o *v89; // x0
  UnityEngine_Object_o *buttonDecideLabel; // x22
  UILabel_o *v91; // x22
  System_String_o *v92; // x0
  UnityEngine_Object_o *buttonCancelLabel; // x22
  UILabel_o *v94; // x22
  System_String_o *v95; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  System_Action_o *v100; // x21
  bool v101; // [xsp+48h] [xbp-58h]
  int32_t type; // [xsp+4Ch] [xbp-54h]

  if ( (byte_40FD57B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestGroupMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestReleaseMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, v15);
    sub_B16FFC(&DataManager_TypeInfo, v16);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Count__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__, v22);
    sub_B16FFC(&LocalizationManager_TypeInfo, v23);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v24);
    sub_B16FFC(&Method_QuestResetConfirmDialog_EndOpen__, v25);
    sub_B16FFC(&QuestResetConfirmDialog_TypeInfo, v26);
    sub_B16FFC(&StringLiteral_10920/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, v27);
    sub_B16FFC(&StringLiteral_10922/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/, v28);
    sub_B16FFC(&StringLiteral_10921/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/, v29);
    sub_B16FFC(&StringLiteral_10925/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/, v30);
    sub_B16FFC(&StringLiteral_10924/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/, v31);
    sub_B16FFC(&StringLiteral_10923/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/, v32);
    byte_40FD57B = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventAlloutBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_WarQuestSelectionMaster )
  {
    ClearDeckInfo = UserEventAlloutBattleMaster__GetClearDeckInfo(Master_WarQuestSelectionMaster, questId, 0LL);
    if ( !ClearDeckInfo )
      goto LABEL_32;
    v35 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ClearDeckInfo,
            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( v35 )
    {
      v42 = v35;
      this->fields.clickFunc = func;
      type = maskType;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.clickFunc,
        (System_Int32_array **)func,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v101 = canMaskTouchClose;
      v43 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      servantFaceIconList = this->fields.servantFaceIconList;
      if ( servantFaceIconList )
      {
        v49 = (ServantLimitImageMaster_o *)v43;
        v50 = 4LL;
        while ( 1 )
        {
          v51 = v50 - 4;
          if ( v50 - 4 >= servantFaceIconList->fields._size )
            break;
          if ( v51 >= (unsigned int)servantFaceIconList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          max_length = v42->max_length;
          v53 = (ServantFaceIconComponent_o *)*((_QWORD *)&servantFaceIconList->fields._items->obj.klass + v50);
          if ( (__int64)v51 >= (int)max_length )
          {
            if ( !v53 )
              goto LABEL_32;
            ServantFaceIconComponent__NoMount(
              *((ServantFaceIconComponent_o **)&servantFaceIconList->fields._items->obj.klass + v50),
              0LL);
          }
          else
          {
            if ( v51 >= max_length )
            {
              sub_B17100(v43, v44, v45);
              sub_B170A0();
            }
            v54 = *((_QWORD *)&v42->obj.klass + v50);
            v55 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v44, v45, v46, v47);
            IconLabelInfo___ctor(v55, 0LL);
            if ( !v54 )
              goto LABEL_32;
            if ( !v55 )
              goto LABEL_32;
            IconLabelInfo__Set_28888132(v55, 2, *(_DWORD *)(v54 + 24), *(_DWORD *)(v54 + 24), 0, 0, 1, 0, 0LL);
            if ( !v49 )
              goto LABEL_32;
            ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           v49,
                                           *(_DWORD *)(v54 + 20),
                                           *(_DWORD *)(v54 + 32),
                                           0LL);
            if ( !v53 )
              goto LABEL_32;
            ServantFaceIconComponent__Set_30702780(
              v53,
              *(_DWORD *)(v54 + 20),
              *(_DWORD *)(v54 + 28),
              ServantLimitCountSealAfter - (ServantLimitCountSealAfter < 11),
              *(_DWORD *)(v54 + 36),
              v55,
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
            v57 = *(_QWORD *)(v54 + 40);
            if ( v57 && *(int *)(v57 + 24) >= 1 )
            {
              v58 = *(_QWORD *)(*(_QWORD *)(v57 + 16) + 32LL);
              if ( !v58 )
                goto LABEL_32;
              v59 = *(_DWORD *)(v58 + 16);
              v60 = *(_DWORD *)(v58 + 20);
            }
            else
            {
              v60 = 0;
              v59 = 0;
            }
            ServantFaceIconComponent__SetEquip_30707172(v53, *(_DWORD *)(v54 + 20), v59, v60, 0LL);
          }
          servantFaceIconList = this->fields.servantFaceIconList;
          ++v50;
          if ( !servantFaceIconList )
            goto LABEL_32;
        }
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v61 = (QuestGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestGroupMaster___);
        v62 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
        if ( v61 )
        {
          v63 = (QuestReleaseMaster_o *)v62;
          GroupId = QuestGroupMaster__GetGroupId(v61, questId, 17, 0LL);
          QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v61, GroupId, 17, 0LL);
          if ( v63 )
          {
            IsContainUnPlayableQuestByTargetId = QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
                                                   v63,
                                                   QuestIdListByGroupId,
                                                   questId,
                                                   v66);
            partyObject = (UnityEngine_Object_o *)this->fields.partyObject;
            v69 = IsContainUnPlayableQuestByTargetId;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(partyObject, 0LL, 0LL) )
            {
              v70 = this->fields.partyObject;
              v71 = QuestResetConfirmDialog_TypeInfo;
              if ( v69 )
              {
                if ( (WORD1(QuestResetConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
                  v71 = QuestResetConfirmDialog_TypeInfo;
                }
                PARTY_OBJ_POSY_COND = v71->static_fields->PARTY_OBJ_POSY_COND;
              }
              else
              {
                if ( (WORD1(QuestResetConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
                  v71 = QuestResetConfirmDialog_TypeInfo;
                }
                PARTY_OBJ_POSY_COND = v71->static_fields->PARTY_OBJ_POSY_NORMAL;
              }
              GameObjectExtensions__SetLocalPositionY(v70, PARTY_OBJ_POSY_COND, 0LL);
            }
            titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
            {
              v74 = this->fields.titleLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v75 = LocalizationManager__Get((System_String_o *)StringLiteral_10925/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/, 0LL);
              if ( !v74 )
                goto LABEL_32;
              UILabel__set_text(v74, v75, 0LL);
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
              v77 = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestMaster___);
              if ( !v77 )
                goto LABEL_32;
              QuestEntity = QuestMaster__getQuestEntity(v77, questId, 0LL);
              v79 = this->fields.nameLabel;
              v80 = QuestEntity;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v81 = LocalizationManager__Get((System_String_o *)StringLiteral_10924/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/, 0LL);
              if ( !v80 )
                goto LABEL_32;
              v82 = v81;
              QuestName = (Il2CppObject *)QuestEntity__getQuestName(v80, 0LL);
              v84 = System_String__Format(v82, QuestName, 0LL);
              if ( !v79 )
                goto LABEL_32;
              UILabel__set_text(v79, v84, 0LL);
              v85 = this->fields.nameLabel;
              if ( (BYTE3(QuestResetConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
              }
              if ( !v85 )
                goto LABEL_32;
              UILabel__SetCondensedScale_40440812(
                v85,
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
              v87 = this->fields.main1Label;
              if ( v69 )
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v88 = &StringLiteral_10923/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/;
              }
              else
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v88 = &StringLiteral_10922/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/;
              }
              v89 = LocalizationManager__Get((System_String_o *)*v88, 0LL);
              if ( !v87 )
                goto LABEL_32;
              UILabel__set_text(v87, v89, 0LL);
            }
            buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
            {
              v91 = this->fields.buttonDecideLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v92 = LocalizationManager__Get((System_String_o *)StringLiteral_10921/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/, 0LL);
              if ( !v91 )
                goto LABEL_32;
              UILabel__set_text(v91, v92, 0LL);
            }
            buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
              goto LABEL_113;
            v94 = this->fields.buttonCancelLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v95 = LocalizationManager__Get((System_String_o *)StringLiteral_10920/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, 0LL);
            if ( v94 )
            {
              UILabel__set_text(v94, v95, 0LL);
LABEL_113:
              *(_WORD *)&this->fields.isButtonEnable = 256;
              BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v101, 0LL);
              v100 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v96, v97, v98, v99);
              System_Action___ctor(v100, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v100, type, 0LL);
              return;
            }
          }
        }
      }
LABEL_32:
      sub_B170D4();
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

  if ( (byte_40FD57F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD57F = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_40FA31A & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isOk);
    byte_40FA31A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall QuestResetConfirmDialog_ClickDelegate__EndInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isOk, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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