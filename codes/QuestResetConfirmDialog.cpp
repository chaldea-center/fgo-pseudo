void __fastcall QuestResetConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418AF05 & 1) == 0 )
  {
    sub_B2C35C(&QuestResetConfirmDialog_TypeInfo, v1);
    byte_418AF05 = 1;
  }
  QuestResetConfirmDialog_TypeInfo->static_fields->PARTY_OBJ_POSY_NORMAL = 35.0;
  QuestResetConfirmDialog_TypeInfo->static_fields->PARTY_OBJ_POSY_COND = 55.0;
  QuestResetConfirmDialog_TypeInfo->static_fields->QUEST_NAME_LABEL_MAX_WITDH = 700.0;
}


void __fastcall QuestResetConfirmDialog___ctor(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_418AF04 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418AF04 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__Close(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestResetConfirmDialog__Close_31205252(this, 0LL, v2);
}


void __fastcall QuestResetConfirmDialog__Close_31205252(
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
  System_Action_o *v11; // x20

  if ( (byte_418AF00 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_QuestResetConfirmDialog_EndClose__, v10);
    byte_418AF00 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
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

  if ( (byte_418AEFE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_418AEFE = 1;
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
    sub_B2C434(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__OnClickCancel(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_418AF02 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AF02 = 1;
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

  if ( (byte_418AF01 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AF01 = 1;
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
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *ClearDeckInfo; // x0
  __int64 v35; // x1
  WarBoardUiData_SaveData_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  WarBoardUiData_SaveData_array *v43; // x23
  struct System_Collections_Generic_List_ServantFaceIconComponent__o *servantFaceIconList; // x21
  ServantLimitImageMaster_o *v45; // x24
  __int64 v46; // x28
  unsigned __int64 v47; // x26
  unsigned __int64 max_length; // x8
  ServantFaceIconComponent_o *v49; // x25
  __int64 v50; // x21
  IconLabelInfo_o *v51; // x26
  __int64 v52; // x8
  __int64 v53; // x8
  int32_t v54; // w2
  int32_t v55; // w3
  QuestGroupMaster_o *v56; // x24
  QuestReleaseMaster_o *v57; // x23
  int32_t GroupId; // w0
  const MethodInfo *v59; // x3
  bool IsContainUnPlayableQuestByTargetId; // w0
  UnityEngine_Object_o *partyObject; // x24
  bool v62; // w23
  UnityEngine_GameObject_o *v63; // x24
  QuestResetConfirmDialog_c *v64; // x0
  float PARTY_OBJ_POSY_COND; // s0
  UnityEngine_Object_o *titleLabel; // x24
  UILabel_o *v67; // x24
  UnityEngine_Object_o *nameLabel; // x24
  QuestEntity_o *QuestEntity; // x0
  UILabel_o *v70; // x22
  QuestEntity_o *v71; // x24
  System_String_o *v72; // x25
  Il2CppObject *QuestName; // x0
  UILabel_o *v74; // x22
  UnityEngine_Object_o *main1Label; // x22
  UILabel_o *v76; // x22
  __int64 *v77; // x8
  UnityEngine_Object_o *buttonDecideLabel; // x22
  UILabel_o *v79; // x22
  UnityEngine_Object_o *buttonCancelLabel; // x22
  UILabel_o *v81; // x22
  System_Action_o *v82; // x21
  __int64 v83; // x0
  bool v84; // [xsp+48h] [xbp-58h]
  int32_t type; // [xsp+4Ch] [xbp-54h]

  if ( (byte_418AEFF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestGroupMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestReleaseMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, v15);
    sub_B2C35C(&DataManager_TypeInfo, v16);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Count__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__, v22);
    sub_B2C35C(&LocalizationManager_TypeInfo, v23);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v24);
    sub_B2C35C(&Method_QuestResetConfirmDialog_EndOpen__, v25);
    sub_B2C35C(&QuestResetConfirmDialog_TypeInfo, v26);
    sub_B2C35C(&StringLiteral_10956/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, v27);
    sub_B2C35C(&StringLiteral_10958/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/, v28);
    sub_B2C35C(&StringLiteral_10957/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/, v29);
    sub_B2C35C(&StringLiteral_10961/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/, v30);
    sub_B2C35C(&StringLiteral_10960/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/, v31);
    sub_B2C35C(&StringLiteral_10959/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/, v32);
    byte_418AEFF = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventAlloutBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_WarQuestSelectionMaster )
  {
    ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)UserEventAlloutBattleMaster__GetClearDeckInfo(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    questId,
                                                                                    0LL);
    if ( !ClearDeckInfo )
      goto LABEL_32;
    v36 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
            ClearDeckInfo,
            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( v36 )
    {
      v43 = v36;
      this->fields.clickFunc = func;
      type = maskType;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.clickFunc,
        (System_Int32_array **)func,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v84 = canMaskTouchClose;
      ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      servantFaceIconList = this->fields.servantFaceIconList;
      if ( servantFaceIconList )
      {
        v45 = (ServantLimitImageMaster_o *)ClearDeckInfo;
        v46 = 4LL;
        while ( 1 )
        {
          v47 = v46 - 4;
          if ( v46 - 4 >= servantFaceIconList->fields._size )
            break;
          if ( v47 >= (unsigned int)servantFaceIconList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          max_length = v43->max_length;
          v49 = (ServantFaceIconComponent_o *)*((_QWORD *)&servantFaceIconList->fields._items->obj.klass + v46);
          if ( (__int64)v47 >= (int)max_length )
          {
            if ( !v49 )
              goto LABEL_32;
            ServantFaceIconComponent__NoMount(
              *((ServantFaceIconComponent_o **)&servantFaceIconList->fields._items->obj.klass + v46),
              0LL);
          }
          else
          {
            if ( v47 >= max_length )
            {
              v83 = sub_B2C460(ClearDeckInfo);
              sub_B2C400(v83, 0LL);
            }
            v50 = *((_QWORD *)&v43->obj.klass + v46);
            v51 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
            IconLabelInfo___ctor(v51, 0LL);
            if ( !v50 )
              goto LABEL_32;
            if ( !v51 )
              goto LABEL_32;
            IconLabelInfo__Set_27362128(v51, 2, *(_DWORD *)(v50 + 24), *(_DWORD *)(v50 + 24), 0, 0, 1, 0, 0LL);
            if ( !v45 )
              goto LABEL_32;
            ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                                            v45,
                                                                                            *(_DWORD *)(v50 + 20),
                                                                                            *(_DWORD *)(v50 + 32),
                                                                                            0LL);
            if ( !v49 )
              goto LABEL_32;
            ServantFaceIconComponent__Set_30790452(
              v49,
              *(_DWORD *)(v50 + 20),
              *(_DWORD *)(v50 + 28),
              (_DWORD)ClearDeckInfo - ((int)ClearDeckInfo < 11),
              *(_DWORD *)(v50 + 36),
              v51,
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
            v52 = *(_QWORD *)(v50 + 40);
            if ( v52 && *(int *)(v52 + 24) >= 1 )
            {
              v53 = *(_QWORD *)(*(_QWORD *)(v52 + 16) + 32LL);
              if ( !v53 )
                goto LABEL_32;
              v54 = *(_DWORD *)(v53 + 16);
              v55 = *(_DWORD *)(v53 + 20);
            }
            else
            {
              v55 = 0;
              v54 = 0;
            }
            ServantFaceIconComponent__SetEquip_30794844(v49, *(_DWORD *)(v50 + 20), v54, v55, 0LL);
          }
          servantFaceIconList = this->fields.servantFaceIconList;
          ++v46;
          if ( !servantFaceIconList )
            goto LABEL_32;
        }
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v56 = (QuestGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestGroupMaster___);
        ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
        if ( v56 )
        {
          v57 = (QuestReleaseMaster_o *)ClearDeckInfo;
          GroupId = QuestGroupMaster__GetGroupId(v56, questId, 17, 0LL);
          ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                                                                          v56,
                                                                                          GroupId,
                                                                                          17,
                                                                                          0LL);
          if ( v57 )
          {
            IsContainUnPlayableQuestByTargetId = QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
                                                   v57,
                                                   (System_Int32_array *)ClearDeckInfo,
                                                   questId,
                                                   v59);
            partyObject = (UnityEngine_Object_o *)this->fields.partyObject;
            v62 = IsContainUnPlayableQuestByTargetId;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(partyObject, 0LL, 0LL) )
            {
              v63 = this->fields.partyObject;
              v64 = QuestResetConfirmDialog_TypeInfo;
              if ( v62 )
              {
                if ( (WORD1(QuestResetConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
                  v64 = QuestResetConfirmDialog_TypeInfo;
                }
                PARTY_OBJ_POSY_COND = v64->static_fields->PARTY_OBJ_POSY_COND;
              }
              else
              {
                if ( (WORD1(QuestResetConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
                  v64 = QuestResetConfirmDialog_TypeInfo;
                }
                PARTY_OBJ_POSY_COND = v64->static_fields->PARTY_OBJ_POSY_NORMAL;
              }
              GameObjectExtensions__SetLocalPositionY(v63, PARTY_OBJ_POSY_COND, 0LL);
            }
            titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
            {
              v67 = this->fields.titleLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_10961/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/,
                                                                                              0LL);
              if ( !v67 )
                goto LABEL_32;
              UILabel__set_text(v67, (System_String_o *)ClearDeckInfo, 0LL);
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
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestMaster___);
              if ( !ClearDeckInfo )
                goto LABEL_32;
              QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)ClearDeckInfo, questId, 0LL);
              v70 = this->fields.nameLabel;
              v71 = QuestEntity;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_10960/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/,
                                                                                              0LL);
              if ( !v71 )
                goto LABEL_32;
              v72 = (System_String_o *)ClearDeckInfo;
              QuestName = (Il2CppObject *)QuestEntity__getQuestName(v71, 0LL);
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_String__Format(
                                                                                              v72,
                                                                                              QuestName,
                                                                                              0LL);
              if ( !v70 )
                goto LABEL_32;
              UILabel__set_text(v70, (System_String_o *)ClearDeckInfo, 0LL);
              v74 = this->fields.nameLabel;
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)QuestResetConfirmDialog_TypeInfo;
              if ( (BYTE3(QuestResetConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
              }
              if ( !v74 )
                goto LABEL_32;
              UILabel__SetCondensedScale_41673556(
                v74,
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
              v76 = this->fields.main1Label;
              if ( v62 )
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v77 = &StringLiteral_10959/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/;
              }
              else
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v77 = &StringLiteral_10958/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/;
              }
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)*v77,
                                                                                              0LL);
              if ( !v76 )
                goto LABEL_32;
              UILabel__set_text(v76, (System_String_o *)ClearDeckInfo, 0LL);
            }
            buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
            {
              v79 = this->fields.buttonDecideLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_10957/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/,
                                                                                              0LL);
              if ( !v79 )
                goto LABEL_32;
              UILabel__set_text(v79, (System_String_o *)ClearDeckInfo, 0LL);
            }
            buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
              goto LABEL_113;
            v81 = this->fields.buttonCancelLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                            (System_String_o *)StringLiteral_10956/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/,
                                                                                            0LL);
            if ( v81 )
            {
              UILabel__set_text(v81, (System_String_o *)ClearDeckInfo, 0LL);
LABEL_113:
              *(_WORD *)&this->fields.isButtonEnable = 256;
              BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v84, 0LL);
              v82 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(v82, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v82, type, 0LL);
              return;
            }
          }
        }
      }
LABEL_32:
      sub_B2C434(ClearDeckInfo, v35);
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

  if ( (byte_418AF03 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AF03 = 1;
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
    sub_B2C434(0LL, v4);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185615 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isOk);
    byte_4185615 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall QuestResetConfirmDialog_ClickDelegate__EndInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestResetConfirmDialog_ClickDelegate__Invoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  QuestResetConfirmDialog_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  QuestResetConfirmDialog_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  QuestResetConfirmDialog_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (QuestResetConfirmDialog_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isOk, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isOk, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isOk, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isOk, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isOk,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isOk, v22);
    goto LABEL_37;
  }
}