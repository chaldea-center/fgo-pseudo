void __fastcall QuestResetConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4217C80 & 1) == 0 )
  {
    sub_B0D8A4(&QuestResetConfirmDialog_TypeInfo, v1);
    byte_4217C80 = 1;
  }
  QuestResetConfirmDialog_TypeInfo->static_fields->PARTY_OBJ_POSY_NORMAL = 35.0;
  QuestResetConfirmDialog_TypeInfo->static_fields->PARTY_OBJ_POSY_COND = 55.0;
  QuestResetConfirmDialog_TypeInfo->static_fields->QUEST_NAME_LABEL_MAX_WITDH = 700.0;
}


void __fastcall QuestResetConfirmDialog___ctor(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4217C7F & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4217C7F = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__Close(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestResetConfirmDialog__Close_30589648(this, 0LL, v2);
}


void __fastcall QuestResetConfirmDialog__Close_30589648(
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
  System_Action_o *v13; // x20

  if ( (byte_4217C7B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_QuestResetConfirmDialog_EndClose__, v10);
    byte_4217C7B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B0D840(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *buttonCancelLabel; // x20

  if ( (byte_4217C79 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_4217C79 = 1;
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
    sub_B0D97C(gameObject);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__OnClickCancel(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_4217C7D & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4217C7D = 1;
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

  if ( (byte_4217C7C & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4217C7C = 1;
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
  WarBoardUiData_SaveData_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  WarBoardUiData_SaveData_array *v42; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  struct System_Collections_Generic_List_ServantFaceIconComponent__o *servantFaceIconList; // x21
  ServantLimitImageMaster_o *v46; // x24
  __int64 v47; // x28
  unsigned __int64 v48; // x26
  unsigned __int64 max_length; // x8
  ServantFaceIconComponent_o *v50; // x25
  __int64 v51; // x21
  IconLabelInfo_o *v52; // x26
  __int64 v53; // x8
  __int64 v54; // x8
  int32_t v55; // w2
  int32_t v56; // w3
  QuestGroupMaster_o *v57; // x24
  QuestReleaseMaster_o *v58; // x23
  int32_t GroupId; // w0
  const MethodInfo *v60; // x3
  bool IsContainUnPlayableQuestByTargetId; // w0
  UnityEngine_Object_o *partyObject; // x24
  bool v63; // w23
  UnityEngine_GameObject_o *v64; // x24
  QuestResetConfirmDialog_c *v65; // x0
  float PARTY_OBJ_POSY_COND; // s0
  UnityEngine_Object_o *titleLabel; // x24
  UILabel_o *v68; // x24
  UnityEngine_Object_o *nameLabel; // x24
  QuestEntity_o *QuestEntity; // x0
  UILabel_o *v71; // x22
  QuestEntity_o *v72; // x24
  System_String_o *v73; // x25
  Il2CppObject *QuestName; // x0
  UILabel_o *v75; // x22
  UnityEngine_Object_o *main1Label; // x22
  UILabel_o *v77; // x22
  __int64 *v78; // x8
  UnityEngine_Object_o *buttonDecideLabel; // x22
  UILabel_o *v80; // x22
  UnityEngine_Object_o *buttonCancelLabel; // x22
  UILabel_o *v82; // x22
  __int64 v83; // x1
  __int64 v84; // x2
  System_Action_o *v85; // x21
  __int64 v86; // x0
  bool v87; // [xsp+48h] [xbp-58h]
  int32_t type; // [xsp+4Ch] [xbp-54h]

  if ( (byte_4217C7A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestGroupMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestReleaseMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, v15);
    sub_B0D8A4(&DataManager_TypeInfo, v16);
    sub_B0D8A4(&IconLabelInfo_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Count__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__, v22);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v23);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v24);
    sub_B0D8A4(&Method_QuestResetConfirmDialog_EndOpen__, v25);
    sub_B0D8A4(&QuestResetConfirmDialog_TypeInfo, v26);
    sub_B0D8A4(&StringLiteral_10982/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, v27);
    sub_B0D8A4(&StringLiteral_10984/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/, v28);
    sub_B0D8A4(&StringLiteral_10983/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/, v29);
    sub_B0D8A4(&StringLiteral_10987/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/, v30);
    sub_B0D8A4(&StringLiteral_10986/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/, v31);
    sub_B0D8A4(&StringLiteral_10985/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/, v32);
    byte_4217C7A = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventAlloutBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_WarQuestSelectionMaster )
  {
    ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)UserEventAlloutBattleMaster__GetClearDeckInfo(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    questId,
                                                                                    0LL);
    if ( !ClearDeckInfo )
      goto LABEL_32;
    v35 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
            ClearDeckInfo,
            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( v35 )
    {
      v42 = v35;
      this->fields.clickFunc = func;
      type = maskType;
      sub_B0D840(
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
      v87 = canMaskTouchClose;
      ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      servantFaceIconList = this->fields.servantFaceIconList;
      if ( servantFaceIconList )
      {
        v46 = (ServantLimitImageMaster_o *)ClearDeckInfo;
        v47 = 4LL;
        while ( 1 )
        {
          v48 = v47 - 4;
          if ( v47 - 4 >= servantFaceIconList->fields._size )
            break;
          if ( v48 >= (unsigned int)servantFaceIconList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          max_length = v42->max_length;
          v50 = (ServantFaceIconComponent_o *)*((_QWORD *)&servantFaceIconList->fields._items->obj.klass + v47);
          if ( (__int64)v48 >= (int)max_length )
          {
            if ( !v50 )
              goto LABEL_32;
            ServantFaceIconComponent__NoMount(
              *((ServantFaceIconComponent_o **)&servantFaceIconList->fields._items->obj.klass + v47),
              0LL);
          }
          else
          {
            if ( v48 >= max_length )
            {
              v86 = sub_B0D9A8(ClearDeckInfo);
              sub_B0D948(v86, 0LL);
            }
            v51 = *((_QWORD *)&v42->obj.klass + v47);
            v52 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, v43, v44);
            IconLabelInfo___ctor(v52, 0LL);
            if ( !v51 )
              goto LABEL_32;
            if ( !v52 )
              goto LABEL_32;
            IconLabelInfo__Set_26821248(v52, 2, *(_DWORD *)(v51 + 24), *(_DWORD *)(v51 + 24), 0, 0, 1, 0, 0LL);
            if ( !v46 )
              goto LABEL_32;
            ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                                            v46,
                                                                                            *(_DWORD *)(v51 + 20),
                                                                                            *(_DWORD *)(v51 + 32),
                                                                                            0LL);
            if ( !v50 )
              goto LABEL_32;
            ServantFaceIconComponent__Set_29623744(
              v50,
              *(_DWORD *)(v51 + 20),
              *(_DWORD *)(v51 + 28),
              (_DWORD)ClearDeckInfo - ((int)ClearDeckInfo < 11),
              *(_DWORD *)(v51 + 36),
              v52,
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
            v53 = *(_QWORD *)(v51 + 40);
            if ( v53 && *(int *)(v53 + 24) >= 1 )
            {
              v54 = *(_QWORD *)(*(_QWORD *)(v53 + 16) + 32LL);
              if ( !v54 )
                goto LABEL_32;
              v55 = *(_DWORD *)(v54 + 16);
              v56 = *(_DWORD *)(v54 + 20);
            }
            else
            {
              v56 = 0;
              v55 = 0;
            }
            ServantFaceIconComponent__SetEquip_29628136(v50, *(_DWORD *)(v51 + 20), v55, v56, 0LL);
          }
          servantFaceIconList = this->fields.servantFaceIconList;
          ++v47;
          if ( !servantFaceIconList )
            goto LABEL_32;
        }
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v57 = (QuestGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestGroupMaster___);
        ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
        if ( v57 )
        {
          v58 = (QuestReleaseMaster_o *)ClearDeckInfo;
          GroupId = QuestGroupMaster__GetGroupId(v57, questId, 17, 0LL);
          ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                                                                          v57,
                                                                                          GroupId,
                                                                                          17,
                                                                                          0LL);
          if ( v58 )
          {
            IsContainUnPlayableQuestByTargetId = QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
                                                   v58,
                                                   (System_Int32_array *)ClearDeckInfo,
                                                   questId,
                                                   v60);
            partyObject = (UnityEngine_Object_o *)this->fields.partyObject;
            v63 = IsContainUnPlayableQuestByTargetId;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(partyObject, 0LL, 0LL) )
            {
              v64 = this->fields.partyObject;
              v65 = QuestResetConfirmDialog_TypeInfo;
              if ( v63 )
              {
                if ( (WORD1(QuestResetConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
                  v65 = QuestResetConfirmDialog_TypeInfo;
                }
                PARTY_OBJ_POSY_COND = v65->static_fields->PARTY_OBJ_POSY_COND;
              }
              else
              {
                if ( (WORD1(QuestResetConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
                  v65 = QuestResetConfirmDialog_TypeInfo;
                }
                PARTY_OBJ_POSY_COND = v65->static_fields->PARTY_OBJ_POSY_NORMAL;
              }
              GameObjectExtensions__SetLocalPositionY(v64, PARTY_OBJ_POSY_COND, 0LL);
            }
            titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
            {
              v68 = this->fields.titleLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_10987/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/,
                                                                                              0LL);
              if ( !v68 )
                goto LABEL_32;
              UILabel__set_text(v68, (System_String_o *)ClearDeckInfo, 0LL);
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
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestMaster___);
              if ( !ClearDeckInfo )
                goto LABEL_32;
              QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)ClearDeckInfo, questId, 0LL);
              v71 = this->fields.nameLabel;
              v72 = QuestEntity;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_10986/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/,
                                                                                              0LL);
              if ( !v72 )
                goto LABEL_32;
              v73 = (System_String_o *)ClearDeckInfo;
              QuestName = (Il2CppObject *)QuestEntity__getQuestName(v72, 0LL);
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_String__Format(
                                                                                              v73,
                                                                                              QuestName,
                                                                                              0LL);
              if ( !v71 )
                goto LABEL_32;
              UILabel__set_text(v71, (System_String_o *)ClearDeckInfo, 0LL);
              v75 = this->fields.nameLabel;
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)QuestResetConfirmDialog_TypeInfo;
              if ( (BYTE3(QuestResetConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
              }
              if ( !v75 )
                goto LABEL_32;
              UILabel__SetCondensedScale_41140248(
                v75,
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
              v77 = this->fields.main1Label;
              if ( v63 )
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v78 = &StringLiteral_10985/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/;
              }
              else
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v78 = &StringLiteral_10984/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/;
              }
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)*v78,
                                                                                              0LL);
              if ( !v77 )
                goto LABEL_32;
              UILabel__set_text(v77, (System_String_o *)ClearDeckInfo, 0LL);
            }
            buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
            {
              v80 = this->fields.buttonDecideLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_10983/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/,
                                                                                              0LL);
              if ( !v80 )
                goto LABEL_32;
              UILabel__set_text(v80, (System_String_o *)ClearDeckInfo, 0LL);
            }
            buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
              goto LABEL_113;
            v82 = this->fields.buttonCancelLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                            (System_String_o *)StringLiteral_10982/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/,
                                                                                            0LL);
            if ( v82 )
            {
              UILabel__set_text(v82, (System_String_o *)ClearDeckInfo, 0LL);
LABEL_113:
              *(_WORD *)&this->fields.isButtonEnable = 256;
              BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v87, 0LL);
              v85 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v83, v84);
              System_Action___ctor(v85, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v85, type, 0LL);
              return;
            }
          }
        }
      }
LABEL_32:
      sub_B0D97C(ClearDeckInfo);
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

  if ( (byte_4217C7E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217C7E = 1;
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
    sub_B0D97C(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_42124E6 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isOk);
    byte_42124E6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall QuestResetConfirmDialog_ClickDelegate__EndInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  QuestResetConfirmDialog_ClickDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  QuestResetConfirmDialog_ClickDelegate_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
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
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, isOk, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isOk, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, isOk, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isOk, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isOk,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isOk, v21);
    goto LABEL_37;
  }
}