void CombineCommandCodeListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x0
  System_String_o *v2; // x19
  ListViewSort_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D349CC & 1) == 0 )
  {
    sub_1C93AD4(&CombineCommandCodeListViewManager_TypeInfo);
    sub_1C93AD4(&ListViewSort_TypeInfo);
    sub_1C93AD4(&StringLiteral_4592/*"CombineCommandCode"*/);
    byte_4D349CC = 1;
  }
  v10 = 1;
  v1 = System_Int32__ToString((int32_t)&v10, 0);
  v2 = System_String__Concat_64425724((System_String_o *)StringLiteral_4592/*"CombineCommandCode"*/, v1, 0);
  v3 = (ListViewSort_o *)sub_1C93D20(ListViewSort_TypeInfo);
  ListViewSort___ctor_44521036(v3, v2, 2, 0, 0);
  CombineCommandCodeListViewManager_TypeInfo->static_fields->commandCodeSortInfo = v3;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)CombineCommandCodeListViewManager_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void CombineCommandCodeListViewManager___ctor(CombineCommandCodeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineCommandCodeListViewManager__CreateList(
        CombineCommandCodeListViewManager_o *this,
        int32_t baseSvtId,
        int64_t beforeSelectedUserCommandCodeId,
        int64_t nowEquipedUserCommandCodeId,
        int32_t modeKind,
        int32_t commandCardType,
        const MethodInfo *method)
{
  int64_t bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  CombineCommandCodeListViewManager_c *v31; // x0
  struct ListViewSort_o **p_commandCodeSortInfo; // x8
  struct ListViewSort_o *v33; // x1
  struct ListViewSort_o **p_sort; // x26
  const MethodInfo *v35; // x2
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  BalanceConfig_c *v42; // x8
  int64_t v43; // x24
  struct BalanceConfig_StaticFields *static_fields; // x10
  unsigned int iconScaleKind; // w8
  int CommandCodeFrameMax; // w26
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x20
  UserServantCommandCodeMaster_o *v49; // x27
  __int64 v50; // x19
  int v51; // w20
  System_Collections_Generic_List_long__o *v52; // x28
  int v53; // w19
  int v54; // w21
  __int64 v55; // x29
  __int128 v56; // q0
  __int128 v57; // q0
  int v58; // w27
  System_Collections_Generic_Dictionary_long__long__o *v59; // x25
  unsigned int v60; // w22
  __int64 v61; // x27
  __int128 v62; // q0
  _OWORD *v63; // x19
  bool v64; // w0
  __int128 v65; // q1
  bool v66; // w28
  int64_t v67; // x0
  __int128 v68; // q0
  int64_t v69; // x0
  int32_t Item; // w20
  __int128 v71; // q0
  int64_t v72; // x21
  bool v73; // w21
  CombineCommandCodeListViewItem_o *v74; // x29
  const MethodInfo *v75; // x7
  __int128 v76; // q0
  const MethodInfo *v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  __int64 v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  __int64 v86; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 *v88; // x8
  UILabel_o *commandCodeInfoLabel; // x21
  System_String_o *v90; // x20
  Il2CppObject *v91; // x22
  Il2CppObject *v92; // x0
  const MethodInfo *v93; // x2
  const MethodInfo *v94; // x1
  int32_t v95; // [xsp+8h] [xbp-198h]
  bool isMax; // [xsp+14h] [xbp-18Ch]
  int v97; // [xsp+18h] [xbp-188h]
  CombineCommandCodeListViewManager_o *v100; // [xsp+30h] [xbp-170h]
  int v101; // [xsp+3Ch] [xbp-164h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+40h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+60h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+80h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+A0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+C0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+E0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+100h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+120h] [xbp-80h] BYREF

  if ( (byte_4D349AF & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C93AD4(&CombineCommandCodeListViewManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Contains__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_20533/*"img_bg_arts"*/);
    sub_1C93AD4(&StringLiteral_3668/*"COMMAND_CODE_EMPTY"*/);
    sub_1C93AD4(&StringLiteral_20535/*"img_bg_buster"*/);
    sub_1C93AD4(&StringLiteral_20553/*"img_bg_quick"*/);
    sub_1C93AD4(&StringLiteral_12573/*"SUM_INFO"*/);
    byte_4D349AF = 1;
  }
  bgTxtSprite = (int64_t)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_92;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0);
  bgTxtSprite = BgTxtManager__IsActiveBgTxt(0);
  if ( !gameObject )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive(gameObject, bgTxtSprite & 1, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.selectShowStatusUserCmdCode = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.selectShowStatusUserCmdCode, 0, v13, v14, v15, v16, v17, v18);
  this->fields.selectItem = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.selectItem, 0, v19, v20, v21, v22, v23, v24);
  this->fields.nowEquipedUserCommandCodeId = nowEquipedUserCommandCodeId;
  v31 = CombineCommandCodeListViewManager_TypeInfo;
  if ( !CombineCommandCodeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineCommandCodeListViewManager_TypeInfo);
    v31 = CombineCommandCodeListViewManager_TypeInfo;
  }
  p_commandCodeSortInfo = &v31->static_fields->commandCodeSortInfo;
  v33 = *p_commandCodeSortInfo;
  this->fields.sort = *p_commandCodeSortInfo;
  p_sort = &this->fields.sort;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)v33, v25, v26, v27, v28, v29, v30);
  bgTxtSprite = (int64_t)this->fields.sort;
  if ( !bgTxtSprite )
    goto LABEL_92;
  *(_DWORD *)(bgTxtSprite + 128) = 3;
  ListViewSort__Load((ListViewSort_o *)bgTxtSprite, 0);
  CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0, v35);
  bgTxtSprite = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgTxtSprite )
    goto LABEL_92;
  bgTxtSprite = (int64_t)DataManager__GetMasterData_object_(
                           (DataManager_o *)bgTxtSprite,
                           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !bgTxtSprite )
    goto LABEL_92;
  bgTxtSprite = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)bgTxtSprite, 0);
  v42 = BalanceConfig_TypeInfo;
  v43 = bgTxtSprite;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v42 = BalanceConfig_TypeInfo;
  }
  if ( !*p_sort )
    goto LABEL_92;
  static_fields = v42->static_fields;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  CommandCodeFrameMax = static_fields->CommandCodeFrameMax;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_19;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_19;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_19:
    this->fields.seed = normalSizeSeed;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.seed,
      (int32_t)normalSizeSeed,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  bgTxtSprite = (int64_t)this->fields.sort;
  if ( !bgTxtSprite )
    goto LABEL_92;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  bgTxtSprite = (int64_t)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)bgTxtSprite, this->fields.scaleType, 0);
  if ( !scaleChangeButtonSprite )
    goto LABEL_92;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)bgTxtSprite, 0);
  v100 = this;
  if ( v43 && *(_QWORD *)(v43 + 24) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    bgTxtSprite = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    if ( bgTxtSprite )
    {
      v49 = (UserServantCommandCodeMaster_o *)bgTxtSprite;
      v95 = commandCardType;
      bgTxtSprite = (int64_t)UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                               (UserServantCommandCodeMaster_o *)bgTxtSprite,
                               0);
      v50 = *(_QWORD *)(v43 + 24);
      isMax = 0;
      v97 = v50;
      if ( CommandCodeFrameMax <= (int)v50 )
      {
        v51 = v50 - 1;
        if ( (int)v50 >= 1 )
        {
          v52 = (System_Collections_Generic_List_long__o *)bgTxtSprite;
          v53 = 0;
          v54 = 0;
          while ( 1 )
          {
            v55 = *(_QWORD *)(v43 + 8LL * v53 + 32);
            if ( !v55 )
              goto LABEL_92;
            v56 = *(_OWORD *)(v55 + 32);
            *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)(v55 + 16);
            *(_OWORD *)&v109.fields.fakeValue = v56;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v108 = v109;
            bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v108, 0);
            if ( bgTxtSprite != nowEquipedUserCommandCodeId )
            {
              v57 = *(_OWORD *)(v55 + 32);
              *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)(v55 + 16);
              *(_OWORD *)&v109.fields.fakeValue = v57;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v107 = v109;
              bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v107, 0);
              if ( !v52 )
                goto LABEL_92;
              bgTxtSprite = System_Collections_Generic_List_long___Contains(
                              v52,
                              bgTxtSprite,
                              (const MethodInfo_3861D48 *)Method_System_Collections_Generic_List_long__Contains__);
              if ( (bgTxtSprite & 1) != 0 && ++v54 >= CommandCodeFrameMax )
                break;
            }
            if ( v51 == v53 )
            {
              isMax = 0;
              goto LABEL_46;
            }
            if ( (unsigned int)++v53 >= *(_DWORD *)(v43 + 24) )
              goto LABEL_41;
          }
          isMax = 1;
LABEL_46:
          this = v100;
          LODWORD(v50) = v97;
        }
      }
      bgTxtSprite = (int64_t)UserServantCommandCodeMaster__GetEquippedCommandCodeDic(v49, 0);
      v58 = v50;
      if ( (int)v50 >= 1 )
      {
        v59 = (System_Collections_Generic_Dictionary_long__long__o *)bgTxtSprite;
        v60 = 0;
        while ( v60 < *(_DWORD *)(v43 + 24) )
        {
          v61 = *(_QWORD *)(v43 + 8LL * (int)v60 + 32);
          if ( !v61 )
            goto LABEL_92;
          v62 = *(_OWORD *)(v61 + 32);
          *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)(v61 + 16);
          *(_OWORD *)&v109.fields.fakeValue = v62;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v106 = v109;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v106, 0);
          if ( !v59 )
            goto LABEL_92;
          v63 = (_OWORD *)(v61 + 16);
          v64 = System_Collections_Generic_Dictionary_long__long___ContainsKey(
                  v59,
                  bgTxtSprite,
                  (const MethodInfo_3504E8C *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
          v65 = *(_OWORD *)(v61 + 32);
          v66 = v64;
          *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)(v61 + 16);
          *(_OWORD *)&v105.fields.fakeValue = v65;
          v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v105, 0);
          if ( System_Collections_Generic_Dictionary_long__long___ContainsKey(
                 v59,
                 v67,
                 (const MethodInfo_3504E8C *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__) )
          {
            v68 = *(_OWORD *)(v61 + 32);
            *(_OWORD *)&v109.fields.currentCryptoKey = *v63;
            *(_OWORD *)&v109.fields.fakeValue = v68;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v104 = v109;
            v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v104, 0);
            Item = System_Collections_Generic_Dictionary_long__long___get_Item(
                     v59,
                     v69,
                     (const MethodInfo_3504BF8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
          }
          else
          {
            Item = 0;
          }
          v71 = *(_OWORD *)(v61 + 32);
          v72 = this->fields.nowEquipedUserCommandCodeId;
          *(_OWORD *)&v109.fields.currentCryptoKey = *v63;
          *(_OWORD *)&v109.fields.fakeValue = v71;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v103 = v109;
          v73 = v72 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v103, 0);
          v74 = (CombineCommandCodeListViewItem_o *)sub_1C93D20(CombineCommandCodeListViewItem_TypeInfo);
          CombineCommandCodeListViewItem___ctor(
            v74,
            (UserCommandCodeEntity_o *)v61,
            v73,
            v66,
            Item,
            baseSvtId,
            isMax,
            v75);
          v76 = *(_OWORD *)(v61 + 32);
          *(_OWORD *)&v109.fields.currentCryptoKey = *v63;
          *(_OWORD *)&v109.fields.fakeValue = v76;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v102 = v109;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v102, 0);
          this = v100;
          v58 = v97;
          if ( !v74 )
            goto LABEL_92;
          if ( bgTxtSprite == beforeSelectedUserCommandCodeId )
          {
            v74->fields.isSelect = 1;
            CombineCommandCodeListViewManager__SetSelectedCommandCodeData(v100, v74, v77);
          }
          else
          {
            v74->fields.isSelect = 0;
          }
          bgTxtSprite = (int64_t)v100->fields.itemList;
          if ( !bgTxtSprite )
            goto LABEL_92;
          v83 = *(_QWORD *)(bgTxtSprite + 16);
          v84 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++*(_DWORD *)(bgTxtSprite + 28);
          if ( !v83 )
            goto LABEL_92;
          v85 = *(int *)(bgTxtSprite + 24);
          if ( (unsigned int)v85 >= *(_DWORD *)(v83 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)bgTxtSprite,
              (Il2CppObject *)v74,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
          }
          else
          {
            v86 = v83 + 8 * v85;
            *(_DWORD *)(bgTxtSprite + 24) = v85 + 1;
            *(_QWORD *)(v86 + 32) = v74;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v86 + 32), (int32_t)v74, (int32_t)v77, v78, v79, v80, v81, v82);
          }
          if ( v97 == ++v60 )
            goto LABEL_73;
        }
LABEL_41:
        sub_1C93D34(bgTxtSprite);
      }
LABEL_73:
      bgTxtSprite = (int64_t)this->fields.emptyMessageBase;
      if ( bgTxtSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 0, 0);
        commandCardType = v95;
        goto LABEL_75;
      }
    }
LABEL_92:
    sub_1C93D2C(bgTxtSprite, *(_QWORD *)&baseSvtId);
  }
  bgTxtSprite = (int64_t)this->fields.emptyMessageBase;
  if ( !bgTxtSprite )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 1, 0);
  v58 = 0;
LABEL_75:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  bgTxtSprite = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3668/*"COMMAND_CODE_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_92;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)bgTxtSprite, 0);
  switch ( commandCardType )
  {
    case 1:
      bgTxtSprite = (int64_t)v100->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_92;
      v88 = &StringLiteral_20533/*"img_bg_arts"*/;
      break;
    case 3:
      bgTxtSprite = (int64_t)v100->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_92;
      v88 = &StringLiteral_20553/*"img_bg_quick"*/;
      break;
    case 2:
      bgTxtSprite = (int64_t)v100->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_92;
      v88 = &StringLiteral_20535/*"img_bg_buster"*/;
      break;
    default:
      goto LABEL_88;
  }
  UISprite__set_spriteName((UISprite_o *)bgTxtSprite, (System_String_o *)*v88, 0);
LABEL_88:
  commandCodeInfoLabel = v100->fields.commandCodeInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v90 = LocalizationManager__Get((System_String_o *)StringLiteral_12573/*"SUM_INFO"*/, 0);
  LODWORD(v109.fields.currentCryptoKey) = v58;
  v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v109);
  v101 = CommandCodeFrameMax;
  v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101);
  bgTxtSprite = (int64_t)System_String__Format_64467032(v90, v91, v92, 0);
  if ( !commandCodeInfoLabel )
    goto LABEL_92;
  UILabel__set_text(commandCodeInfoLabel, (System_String_o *)bgTxtSprite, 0);
  CombineCommandCodeListViewManager__SetStatusKind(v100, modeKind, v93);
  ListViewManager__SortItem((ListViewManager_o *)v100, -1, 0, -1, 0);
  CombineCommandCodeListViewManager__SetFilterButtonImage(v100, v94);
}


void CombineCommandCodeListViewManager__DestroyList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  __int64 v9; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  this->fields.selectShowStatusUserCmdCode = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.selectShowStatusUserCmdCode, 0, v3, v4, v5, v6, v7, v8);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C93D2C(0, v9);
  ListViewSort__Save(sort, 0);
}


void CombineCommandCodeListViewManager__EndClickTabChoice(
        CombineCommandCodeListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  CombineCommandCodeListViewManager__SetStatusKind(this, 2, method);
  CombineCommandCodeListViewManager__ModifyList(this, 0, v4);
  CombineCommandCodeListViewManager__SetMode_49242780(this, 3, v5);
}


void CombineCommandCodeListViewManager__EndClickTabLock(
        CombineCommandCodeListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  CombineCommandCodeListViewManager__SetStatusKind(this, 1, method);
  CombineCommandCodeListViewManager__ModifyList(this, 0, v4);
  CombineCommandCodeListViewManager__SetMode_49242780(this, 3, v5);
}


void CombineCommandCodeListViewManager__EndClickTabStatus(
        CombineCommandCodeListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  CombineCommandCodeListViewManager__SetStatusKind(this, 0, method);
  CombineCommandCodeListViewManager__ModifyList(this, 0, v4);
  CombineCommandCodeListViewManager__SetMode_49242780(this, 3, v5);
}


void CombineCommandCodeListViewManager__EndCloseSelectFilterKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void CombineCommandCodeListViewManager__EndSelectFilterKind(
        CombineCommandCodeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4D349C4 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D349C4 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    CombineCommandCodeListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C93D2C(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void CombineCommandCodeListViewManager__EndSelectSortKind(
        CombineCommandCodeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4D349C7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D349C7 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


void CombineCommandCodeListViewManager__EndStatusSync(
        CombineCommandCodeListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct CombineCommandCodeListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  GrandQuestFolderBoardItem_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0;
    sub_1C93A78(p_requestCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))requestCallback->fields.invoke_impl)(
      requestCallback->fields.method_code,
      1,
      requestCallback->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t CombineCommandCodeListViewManager__GetCommandCodeAmountSortValue(
        CombineCommandCodeListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 naturalAligment; // x10

  if ( (byte_4D349CA & 1) == 0 )
  {
    sub_1C93AD4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D349CA = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CombineCommandCodeListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( CombineCommandCodeListViewItem__get_CommandCodeId(
             (CombineCommandCodeListViewItem_o *)itemList,
             *(const MethodInfo **)&commandCodeId) == commandCodeId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1C93D2C(itemList, *(_QWORD *)&commandCodeId);
  }
  return 0;
}


bool CombineCommandCodeListViewManager__GetFocusItemIndex(
        CombineCommandCodeListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  __int64 naturalAligment; // x10

  if ( (byte_4D349CB & 1) == 0 )
  {
    sub_1C93AD4(&CombineCommandCodeListViewItem_TypeInfo);
    this = (CombineCommandCodeListViewManager_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D349CB = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1C93D2C(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (CombineCommandCodeListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)list,
                                                      v8,
                                                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_14;
      naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CombineCommandCodeListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        goto LABEL_14;
      }
      if ( BYTE3(this->fields.dragParentObject) )
        break;
      if ( sum == ++v8 )
        return 1;
    }
    *index = v8;
  }
  return 1;
}


CombineCommandCodeListViewItem_o *CombineCommandCodeListViewManager__GetItem(
        CombineCommandCodeListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CombineCommandCodeListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4D349B5 & 1) == 0 )
  {
    sub_1C93AD4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D349B5 = 1;
  }
  result = (CombineCommandCodeListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineCommandCodeListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (CombineCommandCodeListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != CombineCommandCodeListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


CombineCommandCodeListViewItem_o *CombineCommandCodeListViewManager__GetSelectItem(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectItem;
}


UserCommandCodeEntity_o *CombineCommandCodeListViewManager__GetSelectMaterialUserCmdCode(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectShowStatusUserCmdCode;
}


bool CombineCommandCodeListViewManager__GetSwapChoiceList(
        CombineCommandCodeListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int64_t itemList; // x0
  int v17; // w25
  int32_t v18; // w24
  __int64 naturalAligment; // x10
  __int64 v20; // x8
  __int128 v21; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_long__o *v31; // x0
  int v32; // w21
  System_Int64_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  System_Int64_array **v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]

  if ( (byte_4D349BC & 1) == 0 )
  {
    sub_1C93AD4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D349BC = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v17 = *(_DWORD *)(itemList + 24);
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v18,
                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(CombineCommandCodeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != CombineCommandCodeListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v20 = *(_QWORD *)(itemList + 136);
      if ( v20 && *(_BYTE *)(itemList + 126) )
      {
        if ( *(_BYTE *)(itemList + 122) )
        {
          v21 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v51, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v30 = v23[4];
            v31 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v31,
              v9,
              *(const MethodInfo_38619D0 **)(*(_QWORD *)(v30 + 192) + 112LL));
            goto LABEL_28;
          }
          v25 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v26 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v50, 0);
          if ( !v7 )
            goto LABEL_37;
          v27 = v7->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v27 )
            goto LABEL_37;
          v29 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            v30 = v28[4];
            v31 = v7;
            goto LABEL_27;
          }
          v25 = &v27->obj.klass + v29;
          v7->fields._size = v29 + 1;
        }
        v25[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v17 == ++v18 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C93D2C(itemList, v9);
  v32 = v8->fields._size + v7->fields._size;
  if ( v32 < 1 )
  {
    *choiceList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)choiceList, 0, v10, v11, v12, v13, v14, v15);
    v48 = unchoiceList;
    v47 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v33 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v33;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)choiceList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
    v47 = (int)v40;
    *unchoiceList = v40;
    v48 = unchoiceList;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v48, v47, v41, v42, v43, v44, v45, v46);
  return v32 > 0;
}


bool CombineCommandCodeListViewManager__GetSwapLockList(
        CombineCommandCodeListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int64_t itemList; // x0
  int v17; // w25
  int32_t v18; // w24
  __int64 naturalAligment; // x10
  __int64 v20; // x8
  __int128 v21; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_long__o *v31; // x0
  int v32; // w21
  System_Int64_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  System_Int64_array **v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]

  if ( (byte_4D349BB & 1) == 0 )
  {
    sub_1C93AD4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D349BB = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v17 = *(_DWORD *)(itemList + 24);
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v18,
                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(CombineCommandCodeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != CombineCommandCodeListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v20 = *(_QWORD *)(itemList + 136);
      if ( v20 && *(_BYTE *)(itemList + 125) )
      {
        if ( *(_BYTE *)(itemList + 121) )
        {
          v21 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v51, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v30 = v23[4];
            v31 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v31,
              v9,
              *(const MethodInfo_38619D0 **)(*(_QWORD *)(v30 + 192) + 112LL));
            goto LABEL_28;
          }
          v25 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v26 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v50, 0);
          if ( !v7 )
            goto LABEL_37;
          v27 = v7->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v27 )
            goto LABEL_37;
          v29 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            v30 = v28[4];
            v31 = v7;
            goto LABEL_27;
          }
          v25 = &v27->obj.klass + v29;
          v7->fields._size = v29 + 1;
        }
        v25[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v17 == ++v18 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C93D2C(itemList, v9);
  v32 = v8->fields._size + v7->fields._size;
  if ( v32 < 1 )
  {
    *lockList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)lockList, 0, v10, v11, v12, v13, v14, v15);
    v48 = unlockList;
    v47 = 0;
    *unlockList = 0;
  }
  else
  {
    v33 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v33;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)lockList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
    v47 = (int)v40;
    *unlockList = v40;
    v48 = unlockList;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v48, v47, v41, v42, v43, v44, v45, v46);
  return v32 > 0;
}


void CombineCommandCodeListViewManager__InitBackListView(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  CombineCommandCodeListViewManager__StatusRequest(this, 0, v2);
  CombineCommandCodeListViewManager__SetStatusKind(this, 0, v4);
}


void CombineCommandCodeListViewManager__ModifyItem(
        CombineCommandCodeListViewManager_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x8
  DataManager_o *Instance; // x0
  CombineCommandCodeListViewItem_c *v7; // x1
  DataManager_o *v8; // x20
  int size; // w24
  int32_t v10; // w21
  CombineCommandCodeListViewItem_o *v11; // x22
  __int64 naturalAligment; // x9
  _OWORD *v13; // x8
  __int128 v14; // q0
  int64_t v15; // x0
  __int128 v16; // q1
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *viewObject; // x23
  CombineCommandCodeListViewManager_o *v19; // x0
  const MethodInfo *v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+40h] [xbp-80h]

  if ( (byte_4D349B3 & 1) == 0 )
  {
    sub_1C93AD4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D349B3 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( itemList )
  {
    if ( userCommandCodeId < 1 )
    {
      v8 = 0;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
        || (Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                          userCommandCodeId,
                                          (const MethodInfo_3465A24 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
      {
LABEL_28:
        sub_1C93D2C(Instance, v7);
      }
      v8 = Instance;
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      itemList,
                                      v10,
                                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Instance )
          goto LABEL_28;
        v7 = CombineCommandCodeListViewItem_TypeInfo;
        v11 = (CombineCommandCodeListViewItem_o *)Instance;
        naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
        if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (CombineCommandCodeListViewItem_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != CombineCommandCodeListViewItem_TypeInfo )
        {
          break;
        }
        if ( v8 )
        {
          v13 = *(_OWORD **)&Instance->fields.writeMasterDataThreadEnd;
          if ( !v13 )
            goto LABEL_28;
          v14 = v13[2];
          *(_OWORD *)&v23.fields.currentCryptoKey = v13[1];
          *(_OWORD *)&v23.fields.fakeValue = v14;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v22 = v23;
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v22, 0);
          v16 = *(_OWORD *)&v8->fields._DispLog;
          *(SingletonMonoBehaviour_DataManager__Fields *)&v21.fields.currentCryptoKey = v8->fields.SingletonMonoBehaviour_DataManager__Fields;
          *(_OWORD *)&v21.fields.fakeValue = v16;
          if ( v15 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v21, 0) )
            CombineCommandCodeListViewItem__Modify(v11, (UserCommandCodeEntity_o *)v8, v17);
        }
        viewObject = (UnityEngine_Object_o *)v11->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(viewObject, 0, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)v11->fields.viewObject;
          if ( !Instance )
            goto LABEL_28;
          Instance = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, CombineCommandCodeListViewItem_o *, const char *))Instance->klass[1]._1.name)(
                                        Instance,
                                        v11,
                                        Instance->klass[1]._1.namespaze);
        }
        if ( size == ++v10 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_28;
      }
      sub_1C940C8(Instance);
      CombineCommandCodeListViewManager__OnClickDecide(v19, v20);
    }
  }
}


void CombineCommandCodeListViewManager__ModifyList(
        CombineCommandCodeListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  CombineCommandCodeListViewItem_c *v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w26
  unsigned int v8; // w28
  int64_t v9; // x21
  __int64 v10; // x8
  ListViewItem_o *v11; // x21
  __int64 v12; // t1
  __int128 v13; // q0
  int64_t v14; // x0
  int64_t v15; // x22
  int32_t v16; // w24
  int64_t v17; // x23
  __int64 v18; // x9
  __int64 v19; // x8
  __int128 v20; // q0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  ListViewItem_c *v27; // x1
  const MethodInfo *v28; // x1
  int32_t v29; // w20
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *klass; // x22
  CombineCommandCodeListViewManager_o *v33; // x0
  int64_t v34; // x1
  const MethodInfo *v35; // x2
  __int64 v37; // [xsp+10h] [xbp-D0h]
  int64_t v38; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+60h] [xbp-80h]

  if ( (byte_4D349B2 & 1) == 0 )
  {
    sub_1C93AD4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D349B2 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Instance, 0);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_45;
  size = itemList->fields._size;
  if ( !Instance || (v37 = *(_QWORD *)(Instance + 24), (int)v37 < 1) )
  {
LABEL_31:
    if ( size < 1 || !isIconSizeChange )
      return;
    v29 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v29,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v11 = (ListViewItem_o *)Item;
        naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (CombineCommandCodeListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != CombineCommandCodeListViewItem_TypeInfo )
        {
          goto LABEL_47;
        }
        klass = (UnityEngine_Object_o *)Item[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
        {
          Instance = (int64_t)v11->fields.viewObject;
          if ( !Instance )
            break;
          ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v11, this->fields.seed, 0);
        }
      }
      if ( size == ++v29 )
        return;
    }
LABEL_45:
    sub_1C93D2C(Instance, v5);
  }
  if ( !(_DWORD)v37 )
    goto LABEL_30;
  v8 = 0;
  v38 = Instance;
  while ( 1 )
  {
    v9 = Instance + 8LL * (int)v8;
    v12 = *(_QWORD *)(v9 + 32);
    v11 = (ListViewItem_o *)(v9 + 32);
    v10 = v12;
    if ( !v12 )
      goto LABEL_45;
    v13 = *(_OWORD *)(v10 + 32);
    *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)(v10 + 16);
    *(_OWORD *)&v41.fields.fakeValue = v13;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v40 = v41;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v40, 0);
    if ( size >= 1 )
      break;
LABEL_28:
    Instance = v38;
    if ( ++v8 == (_DWORD)v37 )
      goto LABEL_31;
    if ( v8 >= *(_DWORD *)(v38 + 24) )
      goto LABEL_30;
  }
  v15 = v14;
  v16 = 0;
  while ( 1 )
  {
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
      goto LABEL_45;
    Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)Instance,
                          v16,
                          (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !Instance )
      goto LABEL_45;
    v5 = CombineCommandCodeListViewItem_TypeInfo;
    v17 = Instance;
    v18 = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v18
      || *(CombineCommandCodeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v18 - 8) != CombineCommandCodeListViewItem_TypeInfo )
    {
      break;
    }
    v19 = *(_QWORD *)(Instance + 136);
    if ( v19 )
    {
      v20 = *(_OWORD *)(v19 + 32);
      *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)(v19 + 16);
      *(_OWORD *)&v41.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v39 = v41;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v39, 0);
      if ( Instance == v15 )
      {
        if ( v8 < *(_DWORD *)(v38 + 24) )
        {
          v27 = v11->klass;
          *(_QWORD *)(v17 + 136) = v11->klass;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 136), (int32_t)v27, v21, v22, v23, v24, v25, v26);
          if ( !isIconSizeChange )
          {
            CombineCommandCodeListViewItem__ModifyLockItem(
              (CombineCommandCodeListViewItem_o *)v17,
              (const MethodInfo *)v5);
            CombineCommandCodeListViewItem__ModifyChoiceItem((CombineCommandCodeListViewItem_o *)v17, v28);
          }
          goto LABEL_28;
        }
LABEL_30:
        sub_1C93D34(Instance);
      }
    }
    if ( size == ++v16 )
      goto LABEL_28;
  }
  sub_1C940C8(Instance);
LABEL_47:
  sub_1C940C8(v11);
  CombineCommandCodeListViewManager__ModifyItem(v33, v34, v35);
}


void CombineCommandCodeListViewManager__OnClickChoiceTab(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_4D349BF & 1) == 0 )
  {
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_EndClickTabChoice__);
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_OnClickChoiceTab__);
    sub_1C93AD4(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4D349BF = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_CombineCommandCodeListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_1C93D20(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
      CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndClickTabChoice__,
        v7);
      CombineCommandCodeListViewManager__StatusRequest(this, v6, v8);
    }
    else
    {
      CombineCommandCodeListViewManager__SetStatusKind(this, 2, v5);
      CombineCommandCodeListViewManager__ModifyList(this, 0, v9);
      CombineCommandCodeListViewManager__SetMode_49242780(this, 3, v10);
    }
  }
}


void CombineCommandCodeListViewManager__OnClickCollectLock(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_4D349BE & 1) == 0 )
  {
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_EndClickTabLock__);
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_OnClickCollectLock__);
    sub_1C93AD4(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4D349BE = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_CombineCommandCodeListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_1C93D20(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
      CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndClickTabLock__,
        v7);
      CombineCommandCodeListViewManager__StatusRequest(this, v6, v8);
    }
    else
    {
      CombineCommandCodeListViewManager__SetStatusKind(this, 1, v5);
      CombineCommandCodeListViewManager__ModifyList(this, 0, v9);
      CombineCommandCodeListViewManager__SetMode_49242780(this, 3, v10);
    }
  }
}


void CombineCommandCodeListViewManager__OnClickDecide(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v5; // q1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  if ( (byte_4D349B4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_OnClickDecide__);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D349B4 = 1;
  }
  selectItem = this->fields.selectItem;
  if ( selectItem )
  {
    userCommandCode = selectItem->fields.userCommandCode;
    if ( userCommandCode )
    {
      v5 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v13.fields.fakeValue = v5;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v12 = v13;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v12, 0) != this->fields.nowEquipedUserCommandCodeId )
      {
        v8 = Method_CombineCommandCodeListViewManager_OnClickDecide__;
        if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickDecide__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1C93AEC(Method_CombineCommandCodeListViewManager_OnClickDecide__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        if ( this->fields.nowEquipedUserCommandCodeId >= 1 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
          if ( !Master_object )
            goto LABEL_21;
          DataMasterBase_object__object__long___GetEntity(
            Master_object,
            this->fields.nowEquipedUserCommandCodeId,
            (const MethodInfo_3465A24 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.combineRootComponent;
        if ( Master_object )
        {
          CombineRootComponent__ShowSelectedCommandCode((CombineRootComponent_o *)Master_object, 0);
          return;
        }
LABEL_21:
        sub_1C93D2C(Master_object, v10);
      }
    }
  }
  v6 = Method_CombineCommandCodeListViewManager_OnClickDecide__;
  if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C93AEC(Method_CombineCommandCodeListViewManager_OnClickDecide__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
}


void CombineCommandCodeListViewManager__OnClickFilterKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4D349C3 & 1) == 0 )
  {
    sub_1C93AD4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_EndSelectFilterKind__);
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_OnClickFilterKind__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D349C3 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_CombineCommandCodeListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C93D20(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C93D2C(v9, v10);
    CommonUI__OpenServantFilterSelectMenu_31587716(v7, 6, sort, (ListViewManager_o *)this, v8, -1, 0);
  }
}


void CombineCommandCodeListViewManager__OnClickListView(
        CombineCommandCodeListViewManager_o *this,
        ListViewObject_o *listviewObject,
        const MethodInfo *method)
{
  ;
}


void CombineCommandCodeListViewManager__OnClickListView_49247144(
        CombineCommandCodeListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x9
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_Collections_Generic_List_object__o *itemList; // x0
  CombineCommandCodeListViewItem_c *v9; // x1
  __int64 v10; // x8
  __int128 v11; // q1
  int64_t v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x2
  int64_t v20; // x21
  const MethodInfo *v21; // x2
  int size; // w25
  System_Collections_Generic_List_object__o *v23; // x22
  __int64 v24; // x9
  struct System_Object_array *items; // x8
  __int128 v26; // q0
  int v27; // w22
  System_Collections_Generic_List_object__o *v28; // x20
  int32_t v29; // w21
  CombineCommandCodeListViewManager_o *v30; // x0
  ListViewItem_o *v31; // x1
  const MethodInfo *v32; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-70h]

  if ( (byte_4D349C1 & 1) == 0 )
  {
    sub_1C93AD4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_OnClickListView__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D349C1 = 1;
  }
  if ( item )
  {
    naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != CombineCommandCodeListViewItem_TypeInfo )
    {
LABEL_36:
      sub_1C940C8(item);
      CombineCommandCodeListViewManager__OnLongPushListView(v30, v31, v32);
      return;
    }
  }
  v6 = Method_CombineCommandCodeListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C93AEC(Method_CombineCommandCodeListViewManager_OnClickListView__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  if ( !item )
    goto LABEL_28;
  v10 = *(_QWORD *)&item[1].fields.selectNum;
  if ( !v10 )
    goto LABEL_28;
  v11 = *(_OWORD *)(v10 + 32);
  *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)(v10 + 16);
  *(_OWORD *)&v35.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v34 = v35;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v34, 0);
  if ( BYTE3(item[1].klass) )
  {
    BYTE3(item[1].klass) = 0;
    this->fields.selectItem = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.selectItem, 0, v13, v14, v15, v16, v17, v18);
    CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0, v19);
    v20 = 0;
  }
  else
  {
    v20 = v12;
    BYTE3(item[1].klass) = 1;
    this->fields.selectItem = (struct CombineCommandCodeListViewItem_o *)item;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.selectItem, (int32_t)item, v13, v14, v15, v16, v17, v18);
    CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, (CombineCommandCodeListViewItem_o *)item, v21);
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_28;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    item = 0;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                (int32_t)item,
                                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_28;
      v9 = CombineCommandCodeListViewItem_TypeInfo;
      v23 = itemList;
      v24 = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)v24
        || (CombineCommandCodeListViewItem_c *)itemList->klass->_2.typeHierarchy[v24 - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      items = itemList[3].fields._items;
      if ( !items )
        goto LABEL_28;
      v26 = *(_OWORD *)items->m_Items;
      *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&items->bounds;
      *(_OWORD *)&v35.fields.fakeValue = v26;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v33 = v35;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v33, 0) != v20 )
        BYTE3(v23[3].klass) = 0;
      item = (ListViewItem_o *)(unsigned int)((_DWORD)item + 1);
      if ( size == (_DWORD)item )
        goto LABEL_29;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_28;
    }
    sub_1C940C8(itemList);
    goto LABEL_36;
  }
LABEL_29:
  itemList = (System_Collections_Generic_List_object__o *)CombineCommandCodeListViewManager__get_ObjectList(
                                                            this,
                                                            (const MethodInfo *)v9);
  if ( !itemList )
LABEL_28:
    sub_1C93D2C(itemList, v9);
  v27 = itemList->fields._size;
  v28 = itemList;
  if ( v27 >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v28,
                                                                v29,
                                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
      if ( !itemList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))itemList->klass->vtable._9_unknown.methodPtr)(
        itemList,
        this->fields.isInput,
        itemList->klass->vtable._9_unknown.method);
      if ( v27 == ++v29 )
        return;
    }
    goto LABEL_28;
  }
}


void CombineCommandCodeListViewManager__OnClickNormalStatus(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4D349BD & 1) == 0 )
  {
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_EndClickTabStatus__);
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_OnClickNormalStatus__);
    sub_1C93AD4(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4D349BD = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_CombineCommandCodeListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_1C93D20(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
    CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndClickTabStatus__,
      v6);
    CombineCommandCodeListViewManager__StatusRequest(this, v5, v7);
  }
}


void CombineCommandCodeListViewManager__OnClickScaleChange(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  CombineCommandCodeListViewManager_o *v14; // x0
  int v15; // w8
  GrandQuestFolderBoardItem_o *p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v18; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  if ( (byte_4D349BA & 1) == 0 )
  {
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_OnClickScaleChange__);
    byte_4D349BA = 1;
  }
  v3 = Method_CombineCommandCodeListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_CombineCommandCodeListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v14 = this;
    v15 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v14 = this;
    v15 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v14 = this;
    v15 = 1;
LABEL_11:
    v14->fields.seed = smallSizeSeed;
    p_seed = (GrandQuestFolderBoardItem_o *)&v14->fields.seed;
    p_seed[2].fields._WarId_k__BackingField = v15;
    sub_1C93A78(p_seed, (int32_t)smallSizeSeed, v6, v7, v8, v9, v10, v11);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v18 = this->fields.scaleType,
        sort->fields.iconScaleKind = v18,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v18, 0),
        !scaleChangeButtonSprite) )
  {
    sub_1C93D2C(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  CombineCommandCodeListViewManager__ModifyList(this, 1, v20);
  CombineCommandCodeListViewManager__SetMode_49242780(this, 3, v21);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void CombineCommandCodeListViewManager__OnClickSortAscendingOrder(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4D349C8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__);
    byte_4D349C8 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C93D2C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void CombineCommandCodeListViewManager__OnClickSortKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantSortSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4D349C6 & 1) == 0 )
  {
    sub_1C93AD4(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_EndSelectSortKind__);
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_OnClickSortKind__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D349C6 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_CombineCommandCodeListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C93D20(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C93D2C(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 6, sort, 0, v8, 0);
  }
}


void CombineCommandCodeListViewManager__OnLongPushListView(
        CombineCommandCodeListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CombineCommandCodeListViewItem_c *v7; // x1
  __int64 naturalAligment; // x9
  UnityEngine_Behaviour_o *scrollView; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct UserCommandCodeEntity_o *v16; // x1
  CombineCommandCodeListViewManager_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_4D349C2 & 1) == 0 )
  {
    sub_1C93AD4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_OnLongPushListView__);
    byte_4D349C2 = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    v5 = Method_CombineCommandCodeListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C93AEC(Method_CombineCommandCodeListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( item
      && ((v7 = CombineCommandCodeListViewItem_TypeInfo,
           naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment,
           item->klass->_2.naturalAligment < (unsigned int)naturalAligment)
       || (CombineCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != CombineCommandCodeListViewItem_TypeInfo) )
    {
      sub_1C940C8(item);
      CombineCommandCodeListViewManager__GetSelectItem(v17, v18);
    }
    else
    {
      scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !scrollView
        || (UnityEngine_Behaviour__set_enabled(scrollView, 0, 0), !item)
        || (v16 = *(struct UserCommandCodeEntity_o **)&item[1].fields.selectNum,
            this->fields.selectShowStatusUserCmdCode = v16,
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&this->fields.selectShowStatusUserCmdCode,
              (int32_t)v16,
              v10,
              v11,
              v12,
              v13,
              v14,
              v15),
            (scrollView = (UnityEngine_Behaviour_o *)this->fields.combineRootComponent) == 0) )
      {
        sub_1C93D2C(scrollView, v7);
      }
      CombineRootComponent__ShowCommandCodeStatus((CombineRootComponent_o *)scrollView, 0);
    }
  }
}


void CombineCommandCodeListViewManager__OnMoveEnd(CombineCommandCodeListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc2; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D349B9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D349B9 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v8 = this->fields.scrollView;
        if ( !v8
          || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
                v8,
                1,
                v8->klass->vtable._8_UpdateScrollbars.method),
              (v8 = this->fields.scrollView) == 0) )
        {
          sub_1C93D2C(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v10, v11, v12, v13, v14, v15);
        if ( callbackFunc2 )
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
            callbackFunc2->fields.method_code,
            callbackFunc2->fields.method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineCommandCodeListViewManager__RequestListObject(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_CombineCommandCodeListViewObject__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v13; // x24
  const MethodInfo *v14; // x3

  if ( (byte_4D349B8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_OnMoveEnd__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D349B8 = 1;
  }
  ObjectList = CombineCommandCodeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v10 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v11 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v10,
               v11,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_CombineCommandCodeListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      CombineCommandCodeListViewObject__Init_49243404((CombineCommandCodeListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_1C93D2C(ObjectList, v8);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
    delay,
    0);
}


// local variable allocation has failed, the output may be wrong!
void CombineCommandCodeListViewManager__SetDecideButtonStatus(
        CombineCommandCodeListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_o *decideButton; // x0
  __int64 v6; // x1

  decideButton = this->fields.decideButton;
  if ( !decideButton
    || (((void (__fastcall *)(struct UICommonButton_o *, bool, const MethodInfo *))decideButton->klass->vtable._5_set_isEnabled.methodPtr)(
          decideButton,
          isEnable,
          decideButton->klass->vtable._5_set_isEnabled.method),
        (decideButton = this->fields.decideButton) == 0) )
  {
    sub_1C93D2C(decideButton, isEnable);
  }
  if ( isEnable )
    v6 = 0;
  else
    v6 = 3;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))decideButton->klass->vtable._14_SetState.methodPtr)(
    decideButton,
    v6,
    1,
    decideButton->klass->vtable._14_SetState.method);
}


void CombineCommandCodeListViewManager__SetFilterButtonImage(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4D349C5 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17618/*"btn_filter_on"*/);
    sub_1C93AD4(&StringLiteral_17617/*"btn_filter"*/);
    byte_4D349C5 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C93D2C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17617/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17618/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void CombineCommandCodeListViewManager__SetMode(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  CombineCommandCodeListViewManager__SetMode_49242780(this, mode, v10);
}


void CombineCommandCodeListViewManager__SetMode_49242780(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  UnityEngine_Behaviour_o *v8; // x0
  int32_t v9; // w1

  if ( (byte_4D349B7 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D349B7 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v8 )
      goto LABEL_17;
    if ( UnityEngine_Behaviour__get_enabled(v8, 0) )
      goto LABEL_11;
    v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v8
      || (UnityEngine_Behaviour__set_enabled(v8, 1, 0), (v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0) )
    {
LABEL_17:
      sub_1C93D2C(v8, v6);
    }
    UIScrollView__UpdatePosition((UIScrollView_o *)v8, 0);
  }
LABEL_11:
  if ( (mode & 0xFFFFFFFE) == 2 )
  {
    if ( mode == 2 )
      v9 = 2;
    else
      v9 = 3;
    CombineCommandCodeListViewManager__RequestListObject(this, v9, 0.0, v7);
  }
}


void CombineCommandCodeListViewManager__SetObjectItem(
        CombineCommandCodeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CombineCommandCodeListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4D349B6 & 1) == 0 )
  {
    this = (CombineCommandCodeListViewManager_o *)sub_1C93AD4(&CombineCommandCodeListViewObject_TypeInfo);
    byte_4D349B6 = 1;
  }
  if ( !obj
    || (naturalAligment = CombineCommandCodeListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (CombineCommandCodeListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineCommandCodeListViewObject_TypeInfo )
  {
    sub_1C93D2C(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  CombineCommandCodeListViewObject__Init_49242656(
    (CombineCommandCodeListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void CombineCommandCodeListViewManager__SetSelectedCommandCodeData(
        CombineCommandCodeListViewManager_o *this,
        CombineCommandCodeListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *selectedCommandCode; // x0
  System_String_o *MargeExplanation_44298984; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v16; // q1
  char v17; // w1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-60h]
  System_String_array *explanationList; // [xsp+48h] [xbp-38h] BYREF
  System_String_array *titleList; // [xsp+50h] [xbp-30h] BYREF
  System_Int32_array *idList; // [xsp+58h] [xbp-28h] BYREF

  if ( (byte_4D349B1 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D349B1 = 1;
  }
  titleList = 0;
  idList = 0;
  explanationList = 0;
  if ( !item || !item->fields.userCommandCode )
  {
    selectedCommandCode = (UnityEngine_Component_o *)this->fields.selectedCommandCode;
    if ( selectedCommandCode )
    {
      selectedCommandCode = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectedCommandCode, 0);
      if ( selectedCommandCode )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 0, 0);
        selectedCommandCode = (UnityEngine_Component_o *)this->fields.skillName;
        if ( selectedCommandCode )
        {
          UILabel__set_text((UILabel_o *)selectedCommandCode, (System_String_o *)StringLiteral_1/*""*/, 0);
          selectedCommandCode = (UnityEngine_Component_o *)this->fields.skillMessage;
          if ( selectedCommandCode )
          {
            UILabel__set_text((UILabel_o *)selectedCommandCode, (System_String_o *)StringLiteral_1/*""*/, 0);
            CombineCommandCodeListViewManager__SetDecideButtonStatus(this, 0, v18);
            selectedCommandCode = (UnityEngine_Component_o *)this->fields.equippedInfo;
            if ( selectedCommandCode )
              goto LABEL_22;
          }
        }
      }
    }
LABEL_28:
    sub_1C93D2C(selectedCommandCode, item);
  }
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.selectedCommandCode;
  if ( !selectedCommandCode )
    goto LABEL_28;
  selectedCommandCode = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectedCommandCode, 0);
  if ( !selectedCommandCode )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 1, 0);
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.selectedCommandCode;
  if ( !selectedCommandCode )
    goto LABEL_28;
  ServantFaceIconComponent__Set_41819388(
    (ServantFaceIconComponent_o *)selectedCommandCode,
    item->fields.userCommandCode,
    0,
    0,
    0);
  selectedCommandCode = (UnityEngine_Component_o *)item->fields.userCommandCode;
  if ( !selectedCommandCode )
    goto LABEL_28;
  UserCommandCodeEntity__GetSkillInfo(
    (UserCommandCodeEntity_o *)selectedCommandCode,
    &idList,
    &titleList,
    &explanationList,
    0);
  MargeExplanation_44298984 = SkillInfo__GetMargeExplanation_44298984(explanationList, 0);
  this->fields.selectItem = item;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.selectItem, (int32_t)item, v7, v8, v9, v10, v11, v12);
  if ( !titleList )
    goto LABEL_28;
  if ( !LODWORD(titleList->max_length) )
    sub_1C93D34(selectedCommandCode);
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.skillName;
  if ( !selectedCommandCode )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)selectedCommandCode, titleList->m_Items[0], 0);
  WrapControlText__textAdjust(this->fields.skillMessage, MargeExplanation_44298984, 22, 0, 0);
  selectItem = this->fields.selectItem;
  if ( selectItem && (userCommandCode = selectItem->fields.userCommandCode) != 0 )
  {
    v16 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v21.fields.fakeValue = v16;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v20 = v21;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v20, 0) != this->fields.nowEquipedUserCommandCodeId;
  }
  else
  {
    v17 = 1;
  }
  CombineCommandCodeListViewManager__SetDecideButtonStatus(this, v17, v13);
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.equippedInfo;
  if ( !selectedCommandCode )
    goto LABEL_28;
  if ( !item->fields.isEquiped )
  {
LABEL_22:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 0, 0);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 1, 0);
  CombineUtility__SetCommandCodeEquippedInfoLabel(
    this->fields.equippedLabel,
    this->fields.nameLabel,
    item->fields._EquipedSvtId_k__BackingField,
    item->fields._EquipedSvtId_k__BackingField != item->fields._BaseSvtId_k__BackingField,
    v19);
}


void CombineCommandCodeListViewManager__SetSortButtonImage(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8

  if ( (byte_4D349C9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_17654/*"btn_sort_up"*/);
    sub_1C93AD4(&StringLiteral_17756/*"btn_txt_up"*/);
    sub_1C93AD4(&StringLiteral_17707/*"btn_txt_new"*/);
    sub_1C93AD4(&StringLiteral_17697/*"btn_txt_down"*/);
    sub_1C93AD4(&StringLiteral_17714/*"btn_txt_old"*/);
    sub_1C93AD4(&StringLiteral_17651/*"btn_sort_down"*/);
    byte_4D349C9 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_34;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( v8 )
    {
      sortKind = v8->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17714/*"btn_txt_old"*/ : &StringLiteral_17707/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17651/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17654/*"btn_sort_up"*/;
LABEL_30:
              if ( v11->fields.isAscendingOrder )
                v15 = v12;
              else
                v15 = v13;
              UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
              return;
            }
          }
        }
      }
      else
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17756/*"btn_txt_up"*/ : &StringLiteral_17697/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17654/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17651/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C93D2C(sort, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineCommandCodeListViewManager__SetStatusKind(
        CombineCommandCodeListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v6; // x8
  __int64 *v7; // x8
  __int64 *v8; // x8
  int32_t v9; // w8
  UILabel_o *v10; // x20
  const MethodInfo *v11; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v14; // q1
  bool v15; // w1
  UILabel_o *combineInfoMsgLb; // x20
  __int64 *v17; // x8
  const MethodInfo *v18; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-40h]

  if ( (byte_4D349B0 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&StringLiteral_17778/*"button_allchoice_reg"*/);
    sub_1C93AD4(&StringLiteral_17781/*"button_alllock_unreg"*/);
    sub_1C93AD4(&StringLiteral_11743/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C93AD4(&StringLiteral_11744/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C93AD4(&StringLiteral_17794/*"button_select_reg"*/);
    sub_1C93AD4(&StringLiteral_3600/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/);
    sub_1C93AD4(&StringLiteral_17795/*"button_select_unreg"*/);
    sub_1C93AD4(&StringLiteral_17780/*"button_alllock_reg"*/);
    sub_1C93AD4(&StringLiteral_17779/*"button_allchoice_unreg"*/);
    byte_4D349B0 = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_43;
  v6 = &StringLiteral_17794/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_17795/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v6, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_43;
  v7 = &StringLiteral_17780/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v7 = &StringLiteral_17781/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v7, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
  if ( !statusTabButton )
    goto LABEL_43;
  v8 = &StringLiteral_17778/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v8 = &StringLiteral_17779/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v8, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  v9 = this->fields.modeKind;
  if ( v9 == 2 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = &StringLiteral_11743/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
LABEL_38:
    statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v17, 0);
    if ( combineInfoMsgLb )
    {
      UILabel__set_text(combineInfoMsgLb, (System_String_o *)statusTabButton, 0);
      CombineCommandCodeListViewManager__SetDecideButtonStatus(this, 0, v18);
      return;
    }
    goto LABEL_43;
  }
  if ( v9 == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = &StringLiteral_11744/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
    goto LABEL_38;
  }
  if ( v9 )
    return;
  v10 = this->fields.combineInfoMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3600/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, 0);
  if ( !v10 )
LABEL_43:
    sub_1C93D2C(statusTabButton, *(_QWORD *)&modeKind);
  UILabel__set_text(v10, (System_String_o *)statusTabButton, 0);
  selectItem = this->fields.selectItem;
  if ( selectItem && (userCommandCode = selectItem->fields.userCommandCode) != 0 )
  {
    v14 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v20.fields.fakeValue = v14;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v19 = v20;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v19, 0) != this->fields.nowEquipedUserCommandCodeId;
  }
  else
  {
    v15 = 0;
  }
  CombineCommandCodeListViewManager__SetDecideButtonStatus(this, v15, v11);
}


void CombineCommandCodeListViewManager__StatusRequest(
        CombineCommandCodeListViewManager_o *this,
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  Il2CppObject *Request_object; // x0
  __int64 v15; // x1
  System_Int64_array *v16; // x1
  System_Int64_array *v17; // x2
  bool v18; // w3
  bool v19; // w4
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  System_Int64_array *v27; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D349C0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CombineCommandCodeListViewManager_EndStatusSync__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D349C0 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v27 = 0;
  choiceList = 0;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( CombineCommandCodeListViewManager__GetSwapChoiceList(this, &choiceList, &v27, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v26,
                         (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
      if ( Request_object )
      {
        v17 = v27;
        v16 = choiceList;
        v19 = 1;
        v18 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1C93D2C(Request_object, v15);
    }
  }
  else if ( modeKind == 1 && CombineCommandCodeListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback,
      (int32_t)callback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndStatusSync__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    if ( Request_object )
    {
      v17 = unlockList;
      v16 = lockList;
      v18 = 1;
      v19 = 0;
LABEL_15:
      CommandCodeStatusSyncRequest__beginRequest(
        (CommandCodeStatusSyncRequest_o *)Request_object,
        v16,
        v17,
        v18,
        v19,
        0);
      return;
    }
    goto LABEL_19;
  }
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}


void CombineCommandCodeListViewManager__add_callbackFunc2(
        CombineCommandCodeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineCommandCodeListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D349AB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D349AB = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
  CombineCommandCodeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CombineCommandCodeListViewObject__o *CombineCommandCodeListViewManager__get_ClippingObjectList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4D349AE & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D349AE = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v7,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0,
                                                                  0);
      if ( ((unsigned __int8)objectList & 1) == 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
        if ( !objectList )
          break;
        v9 = (Il2CppObject *)objectList;
        objectList = (System_Collections_Generic_List_object__o *)CombineCommandCodeListViewObject__GetItem(
                                                                    (CombineCommandCodeListViewObject_o *)objectList,
                                                                    v4);
        if ( !objectList )
          break;
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].fields._items)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_44503492(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          v18 = v3->fields._size;
          if ( (unsigned int)v18 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v9,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + v18;
            v3->fields._size = v18 + 1;
            v19[4] = (Il2CppClass *)v9;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
          }
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1C93D2C(objectList, v4);
  }
  return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v3;
}


int32_t CombineCommandCodeListViewManager__get_GetModeKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_Collections_Generic_List_CombineCommandCodeListViewObject__o *CombineCommandCodeListViewManager__get_ObjectList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  System_Collections_Generic_List_object__o *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_4D349AD & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D349AD = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v7,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0,
                                                                  0);
      if ( ((unsigned __int8)objectList & 1) == 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v16 = Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v17 = v3->fields._size;
        v18 = objectList;
        if ( (unsigned int)v17 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)objectList,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + v17;
          v3->fields._size = v17 + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1C93D2C(objectList, v4);
  }
  return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v3;
}


void CombineCommandCodeListViewManager__remove_callbackFunc2(
        CombineCommandCodeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineCommandCodeListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4D349AC & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D349AC = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
  CombineCommandCodeListViewManager__get_ObjectList(v10, v11);
}


void CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1ACD6BC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACD674;
}


System_IAsyncResult_o *CombineCommandCodeListViewManager_RequestCallbackFunc__BeginInvoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4D349CD & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D349CD = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void CombineCommandCodeListViewManager_RequestCallbackFunc__EndInvoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void CombineCommandCodeListViewManager_RequestCallbackFunc__Invoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}