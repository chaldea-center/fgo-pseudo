void __fastcall QuestResetConfirmDialog___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED28F & 1) == 0 )
  {
    sub_B5D5C4(&QuestResetConfirmDialog_TypeInfo, v1, v2, v3);
    byte_42ED28F = 1;
  }
  QuestResetConfirmDialog_TypeInfo->static_fields->PARTY_OBJ_POSY_NORMAL = 35.0;
  QuestResetConfirmDialog_TypeInfo->static_fields->PARTY_OBJ_POSY_COND = 55.0;
  QuestResetConfirmDialog_TypeInfo->static_fields->QUEST_NAME_LABEL_MAX_WITDH = 700.0;
}


void __fastcall QuestResetConfirmDialog___ctor(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED28E & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED28E = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__Close(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestResetConfirmDialog__Close_34242864(this, 0LL, v2);
}


void __fastcall QuestResetConfirmDialog__Close_34242864(
        QuestResetConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42ED28A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_QuestResetConfirmDialog_EndClose__, v10, v11, v12);
    byte_42ED28A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall QuestResetConfirmDialog__EndOpen(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall QuestResetConfirmDialog__Init(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v9; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *buttonCancelLabel; // x20

  if ( (byte_42ED288 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42ED288 = 1;
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
    sub_B5D69C(gameObject, v9);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestResetConfirmDialog__OnClickCancel(QuestResetConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_42ED28C & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED28C = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int32_t v5; // w0
  QuestResetConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_42ED28B & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED28B = 1;
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
      v5 = 8;
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v5 = 0;
    }
    SoundManager__playSystemSe(v5, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  UserEventAlloutBattleMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *ClearDeckInfo; // x0
  __int64 v79; // x1
  WarBoardUiData_SaveData_array *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  WarBoardUiData_SaveData_array *v87; // x23
  struct System_Collections_Generic_List_ServantFaceIconComponent__o *servantFaceIconList; // x21
  ServantLimitImageMaster_o *v89; // x24
  __int64 v90; // x28
  unsigned __int64 v91; // x26
  unsigned __int64 max_length; // x8
  ServantFaceIconComponent_o *v93; // x25
  __int64 v94; // x21
  IconLabelInfo_o *v95; // x26
  __int64 v96; // x8
  __int64 v97; // x8
  int32_t v98; // w2
  int32_t v99; // w3
  QuestGroupMaster_o *v100; // x24
  QuestReleaseMaster_o *v101; // x23
  int32_t GroupId; // w0
  const MethodInfo *v103; // x3
  bool IsContainUnPlayableQuestByTargetId; // w0
  UnityEngine_Object_o *partyObject; // x24
  bool v106; // w23
  UnityEngine_GameObject_o *v107; // x24
  QuestResetConfirmDialog_c *v108; // x0
  float PARTY_OBJ_POSY_COND; // s0
  UnityEngine_Object_o *titleLabel; // x24
  UILabel_o *v111; // x24
  UnityEngine_Object_o *nameLabel; // x24
  QuestEntity_o *QuestEntity; // x0
  UILabel_o *v114; // x22
  QuestEntity_o *v115; // x24
  System_String_o *v116; // x25
  Il2CppObject *QuestName; // x0
  UILabel_o *v118; // x22
  UnityEngine_Object_o *main1Label; // x22
  UILabel_o *v120; // x22
  __int64 *v121; // x8
  UnityEngine_Object_o *buttonDecideLabel; // x22
  UILabel_o *v123; // x22
  UnityEngine_Object_o *buttonCancelLabel; // x22
  UILabel_o *v125; // x22
  System_Action_o *v126; // x21
  __int64 v127; // x0
  bool v128; // [xsp+48h] [xbp-58h]
  int32_t type; // [xsp+4Ch] [xbp-54h]

  if ( (byte_42ED289 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, questId, (_DWORD)func, canMaskTouchClose);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestGroupMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestReleaseMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, v23, v24, v25);
    sub_B5D5C4(&DataManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v29, v30, v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__,
      v32,
      v33,
      v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Count__,
      v35,
      v36,
      v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__, v38, v39, v40);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__get_Item__,
      v41,
      v42,
      v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__, v44, v45, v46);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_QuestResetConfirmDialog_EndOpen__, v53, v54, v55);
    sub_B5D5C4(&QuestResetConfirmDialog_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_11086/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_11088/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_11087/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_11091/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_11090/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_11089/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/, v74, v75, v76);
    byte_42ED289 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventAlloutBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_WarQuestSelectionMaster )
  {
    ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)UserEventAlloutBattleMaster__GetClearDeckInfo(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    questId,
                                                                                    0LL);
    if ( !ClearDeckInfo )
      goto LABEL_32;
    v80 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
            ClearDeckInfo,
            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( v80 )
    {
      v87 = v80;
      this->fields.clickFunc = func;
      type = maskType;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.clickFunc,
        (System_Int32_array **)func,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v128 = canMaskTouchClose;
      ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      servantFaceIconList = this->fields.servantFaceIconList;
      if ( servantFaceIconList )
      {
        v89 = (ServantLimitImageMaster_o *)ClearDeckInfo;
        v90 = 4LL;
        while ( 1 )
        {
          v91 = v90 - 4;
          if ( v90 - 4 >= servantFaceIconList->fields._size )
            break;
          if ( v91 >= (unsigned int)servantFaceIconList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          max_length = v87->max_length;
          v93 = (ServantFaceIconComponent_o *)*((_QWORD *)&servantFaceIconList->fields._items->obj.klass + v90);
          if ( (__int64)v91 >= (int)max_length )
          {
            if ( !v93 )
              goto LABEL_32;
            ServantFaceIconComponent__NoMount(
              *((ServantFaceIconComponent_o **)&servantFaceIconList->fields._items->obj.klass + v90),
              0LL);
          }
          else
          {
            if ( v91 >= max_length )
            {
              v127 = sub_B5D6C8(ClearDeckInfo);
              sub_B5D668(v127, 0LL);
            }
            v94 = *((_QWORD *)&v87->obj.klass + v90);
            v95 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
            IconLabelInfo___ctor(v95, 0LL);
            if ( !v94 )
              goto LABEL_32;
            if ( !v95 )
              goto LABEL_32;
            IconLabelInfo__Set_28463004(v95, 2, *(_DWORD *)(v94 + 24), *(_DWORD *)(v94 + 24), 0, 0, 1, 0, 0LL);
            if ( !v89 )
              goto LABEL_32;
            ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                                            v89,
                                                                                            *(_DWORD *)(v94 + 20),
                                                                                            *(_DWORD *)(v94 + 32),
                                                                                            0LL);
            if ( !v93 )
              goto LABEL_32;
            ServantFaceIconComponent__Set_30846632(
              v93,
              *(_DWORD *)(v94 + 20),
              *(_DWORD *)(v94 + 28),
              (_DWORD)ClearDeckInfo - ((int)ClearDeckInfo < 11),
              *(_DWORD *)(v94 + 36),
              v95,
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
            v96 = *(_QWORD *)(v94 + 40);
            if ( v96 && *(int *)(v96 + 24) >= 1 )
            {
              v97 = *(_QWORD *)(*(_QWORD *)(v96 + 16) + 32LL);
              if ( !v97 )
                goto LABEL_32;
              v98 = *(_DWORD *)(v97 + 16);
              v99 = *(_DWORD *)(v97 + 20);
            }
            else
            {
              v99 = 0;
              v98 = 0;
            }
            ServantFaceIconComponent__SetEquip_30851052(v93, *(_DWORD *)(v94 + 20), v98, v99, 0LL);
          }
          servantFaceIconList = this->fields.servantFaceIconList;
          ++v90;
          if ( !servantFaceIconList )
            goto LABEL_32;
        }
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v100 = (QuestGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestGroupMaster___);
        ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
        if ( v100 )
        {
          v101 = (QuestReleaseMaster_o *)ClearDeckInfo;
          GroupId = QuestGroupMaster__GetGroupId(v100, questId, 17, 0LL);
          ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                                                                          v100,
                                                                                          GroupId,
                                                                                          17,
                                                                                          0LL);
          if ( v101 )
          {
            IsContainUnPlayableQuestByTargetId = QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
                                                   v101,
                                                   (System_Int32_array *)ClearDeckInfo,
                                                   questId,
                                                   v103);
            partyObject = (UnityEngine_Object_o *)this->fields.partyObject;
            v106 = IsContainUnPlayableQuestByTargetId;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(partyObject, 0LL, 0LL) )
            {
              v107 = this->fields.partyObject;
              v108 = QuestResetConfirmDialog_TypeInfo;
              if ( v106 )
              {
                if ( (WORD1(QuestResetConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
                  v108 = QuestResetConfirmDialog_TypeInfo;
                }
                PARTY_OBJ_POSY_COND = v108->static_fields->PARTY_OBJ_POSY_COND;
              }
              else
              {
                if ( (WORD1(QuestResetConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
                  v108 = QuestResetConfirmDialog_TypeInfo;
                }
                PARTY_OBJ_POSY_COND = v108->static_fields->PARTY_OBJ_POSY_NORMAL;
              }
              GameObjectExtensions__SetLocalPositionY(v107, PARTY_OBJ_POSY_COND, 0LL);
            }
            titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
            {
              v111 = this->fields.titleLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_11091/*"QUEST_MESSAGE_DLG_QUEST_RESET_TITLE"*/,
                                                                                              0LL);
              if ( !v111 )
                goto LABEL_32;
              UILabel__set_text(v111, (System_String_o *)ClearDeckInfo, 0LL);
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
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestMaster___);
              if ( !ClearDeckInfo )
                goto LABEL_32;
              QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)ClearDeckInfo, questId, 0LL);
              v114 = this->fields.nameLabel;
              v115 = QuestEntity;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_11090/*"QUEST_MESSAGE_DLG_QUEST_RESET_NAME"*/,
                                                                                              0LL);
              if ( !v115 )
                goto LABEL_32;
              v116 = (System_String_o *)ClearDeckInfo;
              QuestName = (Il2CppObject *)QuestEntity__getQuestName(v115, 0LL);
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_String__Format(
                                                                                              v116,
                                                                                              QuestName,
                                                                                              0LL);
              if ( !v114 )
                goto LABEL_32;
              UILabel__set_text(v114, (System_String_o *)ClearDeckInfo, 0LL);
              v118 = this->fields.nameLabel;
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)QuestResetConfirmDialog_TypeInfo;
              if ( (BYTE3(QuestResetConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestResetConfirmDialog_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestResetConfirmDialog_TypeInfo);
              }
              if ( !v118 )
                goto LABEL_32;
              UILabel__SetCondensedScale_41950620(
                v118,
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
              v120 = this->fields.main1Label;
              if ( v106 )
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v121 = &StringLiteral_11089/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG_COND"*/;
              }
              else
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v121 = &StringLiteral_11088/*"QUEST_MESSAGE_DLG_QUEST_RESET_MSG"*/;
              }
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)*v121,
                                                                                              0LL);
              if ( !v120 )
                goto LABEL_32;
              UILabel__set_text(v120, (System_String_o *)ClearDeckInfo, 0LL);
            }
            buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
            {
              v123 = this->fields.buttonDecideLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_11087/*"QUEST_MESSAGE_DLG_QUEST_RESET_DECIDE"*/,
                                                                                              0LL);
              if ( !v123 )
                goto LABEL_32;
              UILabel__set_text(v123, (System_String_o *)ClearDeckInfo, 0LL);
            }
            buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
              goto LABEL_113;
            v125 = this->fields.buttonCancelLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)LocalizationManager__Get(
                                                                                            (System_String_o *)StringLiteral_11086/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/,
                                                                                            0LL);
            if ( v125 )
            {
              UILabel__set_text(v125, (System_String_o *)ClearDeckInfo, 0LL);
LABEL_113:
              *(_WORD *)&this->fields.isButtonEnable = 256;
              BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v128, 0LL);
              v126 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(v126, (Il2CppObject *)this, Method_QuestResetConfirmDialog_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v126, type, 0LL);
              return;
            }
          }
        }
      }
LABEL_32:
      sub_B5D69C(ClearDeckInfo, v79);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42ED28D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED28D = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
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
  sub_B5D560(
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
  if ( (byte_42E7F09 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isOk, (_DWORD)callback, object);
    byte_42E7F09 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall QuestResetConfirmDialog_ClickDelegate__EndInvoke(
        QuestResetConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  QuestResetConfirmDialog_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isOk, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isOk, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isOk, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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