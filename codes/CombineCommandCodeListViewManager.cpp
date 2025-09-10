void CombineCommandCodeListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x0
  System_String_o *v2; // x19
  ListViewSort_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2B128 & 1) == 0 )
  {
    sub_1C2D490(&CombineCommandCodeListViewManager_TypeInfo);
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&StringLiteral_4564/*"CombineCommandCode"*/);
    byte_4C2B128 = 1;
  }
  v6 = 1;
  v1 = System_Int32__ToString((int32_t)&v6, 0);
  v2 = System_String__Concat_63457864((System_String_o *)StringLiteral_4564/*"CombineCommandCode"*/, v1, 0);
  v3 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43600724(v3, v2, 2, 0, 0);
  CombineCommandCodeListViewManager_TypeInfo->static_fields->commandCodeSortInfo = v3;
  sub_1C2D434((CGThumbnailListItem_o *)CombineCommandCodeListViewManager_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CombineCommandCodeListViewManager_c *v19; // x0
  struct ListViewSort_o **p_commandCodeSortInfo; // x8
  struct ListViewSort_o *v21; // x1
  struct ListViewSort_o **p_sort; // x26
  const MethodInfo *v23; // x2
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  BalanceConfig_c *v26; // x8
  int64_t v27; // x24
  struct BalanceConfig_StaticFields *static_fields; // x10
  unsigned int iconScaleKind; // w8
  int CommandCodeFrameMax; // w26
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x20
  UserServantCommandCodeMaster_o *v33; // x27
  __int64 v34; // x19
  int v35; // w20
  System_Collections_Generic_List_long__o *v36; // x28
  int v37; // w19
  int v38; // w21
  __int64 v39; // x29
  __int128 v40; // q0
  __int64 v41; // x2
  __int128 v42; // q0
  int v43; // w27
  System_Collections_Generic_Dictionary_long__long__o *v44; // x25
  unsigned int v45; // w22
  __int64 v46; // x27
  __int128 v47; // q0
  _OWORD *v48; // x19
  bool v49; // w0
  __int128 v50; // q1
  bool v51; // w28
  int64_t v52; // x0
  __int128 v53; // q0
  int64_t v54; // x0
  int32_t Item; // w20
  __int128 v56; // q0
  int64_t v57; // x21
  bool v58; // w21
  CombineCommandCodeListViewItem_o *v59; // x29
  const MethodInfo *v60; // x7
  __int128 v61; // q0
  const MethodInfo *v62; // x2
  const MethodInfo *v63; // x3
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  __int64 v67; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 *v69; // x8
  UILabel_o *commandCodeInfoLabel; // x21
  System_String_o *v71; // x20
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  Il2CppObject *v75; // x22
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  Il2CppObject *v79; // x0
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x1
  int32_t v82; // [xsp+8h] [xbp-198h]
  bool isMax; // [xsp+14h] [xbp-18Ch]
  int v84; // [xsp+18h] [xbp-188h]
  CombineCommandCodeListViewManager_o *v87; // [xsp+30h] [xbp-170h]
  int v88; // [xsp+3Ch] [xbp-164h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+40h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+60h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+80h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+A0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+C0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+E0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+100h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+120h] [xbp-80h] BYREF

  if ( (byte_4C2B10B & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C2D490(&CombineCommandCodeListViewManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Contains__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_20291/*"img_bg_arts"*/);
    sub_1C2D490(&StringLiteral_3640/*"COMMAND_CODE_EMPTY"*/);
    sub_1C2D490(&StringLiteral_20293/*"img_bg_buster"*/);
    sub_1C2D490(&StringLiteral_20311/*"img_bg_quick"*/);
    sub_1C2D490(&StringLiteral_12474/*"SUM_INFO"*/);
    byte_4C2B10B = 1;
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectShowStatusUserCmdCode, 0, v13, v14);
  this->fields.selectItem = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectItem, 0, v15, v16);
  this->fields.nowEquipedUserCommandCodeId = nowEquipedUserCommandCodeId;
  v19 = CombineCommandCodeListViewManager_TypeInfo;
  if ( !CombineCommandCodeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineCommandCodeListViewManager_TypeInfo);
    v19 = CombineCommandCodeListViewManager_TypeInfo;
  }
  p_commandCodeSortInfo = &v19->static_fields->commandCodeSortInfo;
  v21 = *p_commandCodeSortInfo;
  this->fields.sort = *p_commandCodeSortInfo;
  p_sort = &this->fields.sort;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v21, v17, v18);
  bgTxtSprite = (int64_t)this->fields.sort;
  if ( !bgTxtSprite )
    goto LABEL_92;
  *(_DWORD *)(bgTxtSprite + 128) = 3;
  ListViewSort__Load((ListViewSort_o *)bgTxtSprite, 0);
  CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0, v23);
  bgTxtSprite = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgTxtSprite )
    goto LABEL_92;
  bgTxtSprite = (int64_t)DataManager__GetMasterData_object_(
                           (DataManager_o *)bgTxtSprite,
                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !bgTxtSprite )
    goto LABEL_92;
  bgTxtSprite = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)bgTxtSprite, 0);
  v26 = BalanceConfig_TypeInfo;
  v27 = bgTxtSprite;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  if ( !*p_sort )
    goto LABEL_92;
  static_fields = v26->static_fields;
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v24, v25);
  }
  bgTxtSprite = (int64_t)this->fields.sort;
  if ( !bgTxtSprite )
    goto LABEL_92;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  bgTxtSprite = (int64_t)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)bgTxtSprite, this->fields.scaleType, 0);
  if ( !scaleChangeButtonSprite )
    goto LABEL_92;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)bgTxtSprite, 0);
  v87 = this;
  if ( v27 && *(_QWORD *)(v27 + 24) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    bgTxtSprite = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    if ( bgTxtSprite )
    {
      v33 = (UserServantCommandCodeMaster_o *)bgTxtSprite;
      v82 = commandCardType;
      bgTxtSprite = (int64_t)UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                               (UserServantCommandCodeMaster_o *)bgTxtSprite,
                               0);
      v34 = *(_QWORD *)(v27 + 24);
      isMax = 0;
      v84 = v34;
      if ( CommandCodeFrameMax <= (int)v34 )
      {
        v35 = v34 - 1;
        if ( (int)v34 >= 1 )
        {
          v36 = (System_Collections_Generic_List_long__o *)bgTxtSprite;
          v37 = 0;
          v38 = 0;
          while ( 1 )
          {
            v39 = *(_QWORD *)(v27 + 8LL * v37 + 32);
            if ( !v39 )
              goto LABEL_92;
            v40 = *(_OWORD *)(v39 + 32);
            *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
            *(_OWORD *)&v96.fields.fakeValue = v40;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v95 = v96;
            bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v95, 0);
            if ( bgTxtSprite != nowEquipedUserCommandCodeId )
            {
              v42 = *(_OWORD *)(v39 + 32);
              *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
              *(_OWORD *)&v96.fields.fakeValue = v42;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v94 = v96;
              bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v94, 0);
              if ( !v36 )
                goto LABEL_92;
              bgTxtSprite = System_Collections_Generic_List_long___Contains(
                              v36,
                              bgTxtSprite,
                              (const MethodInfo_3771F30 *)Method_System_Collections_Generic_List_long__Contains__);
              if ( (bgTxtSprite & 1) != 0 && ++v38 >= CommandCodeFrameMax )
                break;
            }
            if ( v35 == v37 )
            {
              isMax = 0;
              goto LABEL_46;
            }
            if ( (unsigned int)++v37 >= *(_DWORD *)(v27 + 24) )
              goto LABEL_41;
          }
          isMax = 1;
LABEL_46:
          this = v87;
          LODWORD(v34) = v84;
        }
      }
      bgTxtSprite = (int64_t)UserServantCommandCodeMaster__GetEquippedCommandCodeDic(v33, 0);
      v43 = v34;
      if ( (int)v34 >= 1 )
      {
        v44 = (System_Collections_Generic_Dictionary_long__long__o *)bgTxtSprite;
        v45 = 0;
        while ( v45 < *(_DWORD *)(v27 + 24) )
        {
          v46 = *(_QWORD *)(v27 + 8LL * (int)v45 + 32);
          if ( !v46 )
            goto LABEL_92;
          v47 = *(_OWORD *)(v46 + 32);
          *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)(v46 + 16);
          *(_OWORD *)&v96.fields.fakeValue = v47;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v93 = v96;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v93, 0);
          if ( !v44 )
            goto LABEL_92;
          v48 = (_OWORD *)(v46 + 16);
          v49 = System_Collections_Generic_Dictionary_long__long___ContainsKey(
                  v44,
                  bgTxtSprite,
                  (const MethodInfo_3423440 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
          v50 = *(_OWORD *)(v46 + 32);
          v51 = v49;
          *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)(v46 + 16);
          *(_OWORD *)&v92.fields.fakeValue = v50;
          v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v92, 0);
          if ( System_Collections_Generic_Dictionary_long__long___ContainsKey(
                 v44,
                 v52,
                 (const MethodInfo_3423440 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__) )
          {
            v53 = *(_OWORD *)(v46 + 32);
            *(_OWORD *)&v96.fields.currentCryptoKey = *v48;
            *(_OWORD *)&v96.fields.fakeValue = v53;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v91 = v96;
            v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v91, 0);
            Item = System_Collections_Generic_Dictionary_long__long___get_Item(
                     v44,
                     v54,
                     (const MethodInfo_34231AC *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
          }
          else
          {
            Item = 0;
          }
          v56 = *(_OWORD *)(v46 + 32);
          v57 = this->fields.nowEquipedUserCommandCodeId;
          *(_OWORD *)&v96.fields.currentCryptoKey = *v48;
          *(_OWORD *)&v96.fields.fakeValue = v56;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v90 = v96;
          v58 = v57 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v90, 0);
          v59 = (CombineCommandCodeListViewItem_o *)sub_1C2D6DC(CombineCommandCodeListViewItem_TypeInfo);
          CombineCommandCodeListViewItem___ctor(
            v59,
            (UserCommandCodeEntity_o *)v46,
            v58,
            v51,
            Item,
            baseSvtId,
            isMax,
            v60);
          v61 = *(_OWORD *)(v46 + 32);
          *(_OWORD *)&v96.fields.currentCryptoKey = *v48;
          *(_OWORD *)&v96.fields.fakeValue = v61;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v89 = v96;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v89, 0);
          this = v87;
          v43 = v84;
          if ( !v59 )
            goto LABEL_92;
          if ( bgTxtSprite == beforeSelectedUserCommandCodeId )
          {
            v59->fields.isSelect = 1;
            CombineCommandCodeListViewManager__SetSelectedCommandCodeData(v87, v59, v62);
          }
          else
          {
            v59->fields.isSelect = 0;
          }
          bgTxtSprite = (int64_t)v87->fields.itemList;
          if ( !bgTxtSprite )
            goto LABEL_92;
          v64 = *(_QWORD *)(bgTxtSprite + 16);
          v65 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++*(_DWORD *)(bgTxtSprite + 28);
          if ( !v64 )
            goto LABEL_92;
          v66 = *(int *)(bgTxtSprite + 24);
          if ( (unsigned int)v66 >= *(_DWORD *)(v64 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)bgTxtSprite,
              (Il2CppObject *)v59,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
          }
          else
          {
            v67 = v64 + 8 * v66;
            *(_DWORD *)(bgTxtSprite + 24) = v66 + 1;
            *(_QWORD *)(v67 + 32) = v59;
            sub_1C2D434((CGThumbnailListItem_o *)(v67 + 32), (int32_t)v59, (int32_t)v62, v63);
          }
          if ( v84 == ++v45 )
            goto LABEL_73;
        }
LABEL_41:
        sub_1C2D6F4(bgTxtSprite, *(_QWORD *)&baseSvtId, v41);
      }
LABEL_73:
      bgTxtSprite = (int64_t)this->fields.emptyMessageBase;
      if ( bgTxtSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 0, 0);
        commandCardType = v82;
        goto LABEL_75;
      }
    }
LABEL_92:
    sub_1C2D6EC(bgTxtSprite, *(_QWORD *)&baseSvtId);
  }
  bgTxtSprite = (int64_t)this->fields.emptyMessageBase;
  if ( !bgTxtSprite )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 1, 0);
  v43 = 0;
LABEL_75:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  bgTxtSprite = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3640/*"COMMAND_CODE_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_92;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)bgTxtSprite, 0);
  switch ( commandCardType )
  {
    case 1:
      bgTxtSprite = (int64_t)v87->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_92;
      v69 = &StringLiteral_20291/*"img_bg_arts"*/;
      break;
    case 3:
      bgTxtSprite = (int64_t)v87->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_92;
      v69 = &StringLiteral_20311/*"img_bg_quick"*/;
      break;
    case 2:
      bgTxtSprite = (int64_t)v87->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_92;
      v69 = &StringLiteral_20293/*"img_bg_buster"*/;
      break;
    default:
      goto LABEL_88;
  }
  UISprite__set_spriteName((UISprite_o *)bgTxtSprite, (System_String_o *)*v69, 0);
LABEL_88:
  commandCodeInfoLabel = v87->fields.commandCodeInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUM_INFO"*/, 0);
  LODWORD(v96.fields.currentCryptoKey) = v43;
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96, v72, v73, v74);
  v88 = CommandCodeFrameMax;
  v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v88, v76, v77, v78);
  bgTxtSprite = (int64_t)System_String__Format_63499156(v71, v75, v79, 0);
  if ( !commandCodeInfoLabel )
    goto LABEL_92;
  UILabel__set_text(commandCodeInfoLabel, (System_String_o *)bgTxtSprite, 0);
  CombineCommandCodeListViewManager__SetStatusKind(v87, modeKind, v80);
  ListViewManager__SortItem((ListViewManager_o *)v87, -1, 0, -1, 0);
  CombineCommandCodeListViewManager__SetFilterButtonImage(v87, v81);
}


void CombineCommandCodeListViewManager__DestroyList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  this->fields.selectShowStatusUserCmdCode = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectShowStatusUserCmdCode, 0, v3, v4);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C2D6EC(0, v5);
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
  CombineCommandCodeListViewManager__SetMode_48140640(this, 3, v5);
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
  CombineCommandCodeListViewManager__SetMode_48140640(this, 3, v5);
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
  CombineCommandCodeListViewManager__SetMode_48140640(this, 3, v5);
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

  if ( (byte_4C2B120 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B120 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    CombineCommandCodeListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C2D6EC(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void CombineCommandCodeListViewManager__EndSelectSortKind(
        CombineCommandCodeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C2B123 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B123 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


void CombineCommandCodeListViewManager__EndStatusSync(
        CombineCommandCodeListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct CombineCommandCodeListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  CGThumbnailListItem_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (CGThumbnailListItem_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0;
    sub_1C2D434(p_requestCallback, 0, (int32_t)method, v3);
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

  if ( (byte_4C2B126 & 1) == 0 )
  {
    sub_1C2D490(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C2B126 = 1;
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
                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C2D6EC(itemList, *(_QWORD *)&commandCodeId);
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

  if ( (byte_4C2B127 & 1) == 0 )
  {
    sub_1C2D490(&CombineCommandCodeListViewItem_TypeInfo);
    this = (CombineCommandCodeListViewManager_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C2B127 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1C2D6EC(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (CombineCommandCodeListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)list,
                                                      v8,
                                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4C2B111 & 1) == 0 )
  {
    sub_1C2D490(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C2B111 = 1;
  }
  result = (CombineCommandCodeListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineCommandCodeListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  const MethodInfo *v11; // x3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 naturalAligment; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4C2B118 & 1) == 0 )
  {
    sub_1C2D490(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B118 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(CombineCommandCodeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != CombineCommandCodeListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 136);
      if ( v16 && *(_BYTE *)(itemList + 126) )
      {
        if ( *(_BYTE *)(itemList + 122) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C2D6EC(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)choiceList, 0, v10, v11);
    v36 = unchoiceList;
    v35 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1C2D434((CGThumbnailListItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unchoiceList = v32;
    v36 = unchoiceList;
  }
  sub_1C2D434((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
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
  const MethodInfo *v11; // x3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 naturalAligment; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4C2B117 & 1) == 0 )
  {
    sub_1C2D490(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B117 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(CombineCommandCodeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != CombineCommandCodeListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 136);
      if ( v16 && *(_BYTE *)(itemList + 125) )
      {
        if ( *(_BYTE *)(itemList + 121) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C2D6EC(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)lockList, 0, v10, v11);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1C2D434((CGThumbnailListItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1C2D434((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
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

  if ( (byte_4C2B10F & 1) == 0 )
  {
    sub_1C2D490(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B10F = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
        || (Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                          userCommandCodeId,
                                          (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
      {
LABEL_28:
        sub_1C2D6EC(Instance, v7);
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
                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v22, 0);
          v16 = *(_OWORD *)&v8->fields._DispLog;
          *(SingletonMonoBehaviour_DataManager__Fields *)&v21.fields.currentCryptoKey = v8->fields.SingletonMonoBehaviour_DataManager__Fields;
          *(_OWORD *)&v21.fields.fakeValue = v16;
          if ( v15 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v21, 0) )
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
      sub_1C2D9AC(Instance);
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
  __int64 v6; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w26
  unsigned int v9; // w28
  int64_t v10; // x21
  __int64 v11; // x8
  ListViewItem_o *v12; // x21
  __int64 v13; // t1
  __int128 v14; // q0
  int64_t v15; // x0
  int64_t v16; // x22
  int32_t v17; // w24
  int64_t v18; // x23
  __int64 v19; // x9
  __int64 v20; // x8
  __int128 v21; // q0
  const MethodInfo *v22; // x3
  ListViewItem_c *v23; // x1
  const MethodInfo *v24; // x1
  int32_t v25; // w20
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *klass; // x22
  CombineCommandCodeListViewManager_o *v29; // x0
  int64_t v30; // x1
  const MethodInfo *v31; // x2
  __int64 v33; // [xsp+10h] [xbp-D0h]
  int64_t v34; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+60h] [xbp-80h]

  if ( (byte_4C2B10E & 1) == 0 )
  {
    sub_1C2D490(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B10E = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Instance, 0);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_45;
  size = itemList->fields._size;
  if ( !Instance || (v33 = *(_QWORD *)(Instance + 24), (int)v33 < 1) )
  {
LABEL_31:
    if ( size < 1 || !isIconSizeChange )
      return;
    v25 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v25,
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v12 = (ListViewItem_o *)Item;
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
          Instance = (int64_t)v12->fields.viewObject;
          if ( !Instance )
            break;
          ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v12, this->fields.seed, 0);
        }
      }
      if ( size == ++v25 )
        return;
    }
LABEL_45:
    sub_1C2D6EC(Instance, v5);
  }
  if ( !(_DWORD)v33 )
    goto LABEL_30;
  v9 = 0;
  v34 = Instance;
  while ( 1 )
  {
    v10 = Instance + 8LL * (int)v9;
    v13 = *(_QWORD *)(v10 + 32);
    v12 = (ListViewItem_o *)(v10 + 32);
    v11 = v13;
    if ( !v13 )
      goto LABEL_45;
    v14 = *(_OWORD *)(v11 + 32);
    *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
    *(_OWORD *)&v37.fields.fakeValue = v14;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v36 = v37;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v36, 0);
    if ( size >= 1 )
      break;
LABEL_28:
    Instance = v34;
    if ( ++v9 == (_DWORD)v33 )
      goto LABEL_31;
    if ( v9 >= *(_DWORD *)(v34 + 24) )
      goto LABEL_30;
  }
  v16 = v15;
  v17 = 0;
  while ( 1 )
  {
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
      goto LABEL_45;
    Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)Instance,
                          v17,
                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !Instance )
      goto LABEL_45;
    v5 = CombineCommandCodeListViewItem_TypeInfo;
    v18 = Instance;
    v19 = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v19
      || *(CombineCommandCodeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v19 - 8) != CombineCommandCodeListViewItem_TypeInfo )
    {
      break;
    }
    v20 = *(_QWORD *)(Instance + 136);
    if ( v20 )
    {
      v21 = *(_OWORD *)(v20 + 32);
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
      *(_OWORD *)&v37.fields.fakeValue = v21;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v35 = v37;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v35, 0);
      if ( Instance == v16 )
      {
        if ( v9 < *(_DWORD *)(v34 + 24) )
        {
          v23 = v12->klass;
          *(_QWORD *)(v18 + 136) = v12->klass;
          sub_1C2D434((CGThumbnailListItem_o *)(v18 + 136), (int32_t)v23, v6, v22);
          if ( !isIconSizeChange )
          {
            CombineCommandCodeListViewItem__ModifyLockItem(
              (CombineCommandCodeListViewItem_o *)v18,
              (const MethodInfo *)v5);
            CombineCommandCodeListViewItem__ModifyChoiceItem((CombineCommandCodeListViewItem_o *)v18, v24);
          }
          goto LABEL_28;
        }
LABEL_30:
        sub_1C2D6F4(Instance, v5, v6);
      }
    }
    if ( size == ++v17 )
      goto LABEL_28;
  }
  sub_1C2D9AC(Instance);
LABEL_47:
  sub_1C2D9AC(v12);
  CombineCommandCodeListViewManager__ModifyItem(v29, v30, v31);
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

  if ( (byte_4C2B11B & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_EndClickTabChoice__);
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_OnClickChoiceTab__);
    sub_1C2D490(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4C2B11B = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineCommandCodeListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_1C2D6DC(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
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
      CombineCommandCodeListViewManager__SetMode_48140640(this, 3, v10);
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

  if ( (byte_4C2B11A & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_EndClickTabLock__);
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_OnClickCollectLock__);
    sub_1C2D490(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4C2B11A = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineCommandCodeListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_1C2D6DC(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
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
      CombineCommandCodeListViewManager__SetMode_48140640(this, 3, v10);
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

  if ( (byte_4C2B110 & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_OnClickDecide__);
    sub_1C2D490(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B110 = 1;
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
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v12, 0) != this->fields.nowEquipedUserCommandCodeId )
      {
        v8 = Method_CombineCommandCodeListViewManager_OnClickDecide__;
        if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickDecide__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1C2D4A8(Method_CombineCommandCodeListViewManager_OnClickDecide__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        if ( this->fields.nowEquipedUserCommandCodeId >= 1 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
          if ( !Master_object )
            goto LABEL_21;
          DataMasterBase_object__object__long___GetEntity(
            Master_object,
            this->fields.nowEquipedUserCommandCodeId,
            (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.combineRootComponent;
        if ( Master_object )
        {
          CombineRootComponent__ShowSelectedCommandCode((CombineRootComponent_o *)Master_object, 0);
          return;
        }
LABEL_21:
        sub_1C2D6EC(Master_object, v10);
      }
    }
  }
  v6 = Method_CombineCommandCodeListViewManager_OnClickDecide__;
  if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C2D4A8(Method_CombineCommandCodeListViewManager_OnClickDecide__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
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

  if ( (byte_4C2B11F & 1) == 0 )
  {
    sub_1C2D490(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_EndSelectFilterKind__);
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_OnClickFilterKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B11F = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineCommandCodeListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C2D6DC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C2D6EC(v9, v10);
    CommonUI__OpenServantFilterSelectMenu_31174528(v7, 6, sort, (ListViewManager_o *)this, v8, -1, 0);
  }
}


void CombineCommandCodeListViewManager__OnClickListView(
        CombineCommandCodeListViewManager_o *this,
        ListViewObject_o *listviewObject,
        const MethodInfo *method)
{
  ;
}


void CombineCommandCodeListViewManager__OnClickListView_48145004(
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
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  int64_t v16; // x21
  const MethodInfo *v17; // x2
  int size; // w25
  System_Collections_Generic_List_object__o *v19; // x22
  __int64 v20; // x9
  struct System_Object_array *items; // x8
  __int128 v22; // q0
  int v23; // w22
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w21
  CombineCommandCodeListViewManager_o *v26; // x0
  ListViewItem_o *v27; // x1
  const MethodInfo *v28; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-70h]

  if ( (byte_4C2B11D & 1) == 0 )
  {
    sub_1C2D490(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_OnClickListView__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B11D = 1;
  }
  if ( item )
  {
    naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != CombineCommandCodeListViewItem_TypeInfo )
    {
LABEL_36:
      sub_1C2D9AC(item);
      CombineCommandCodeListViewManager__OnLongPushListView(v26, v27, v28);
      return;
    }
  }
  v6 = Method_CombineCommandCodeListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C2D4A8(Method_CombineCommandCodeListViewManager_OnClickListView__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  if ( !item )
    goto LABEL_28;
  v10 = *(_QWORD *)&item[1].fields.selectNum;
  if ( !v10 )
    goto LABEL_28;
  v11 = *(_OWORD *)(v10 + 32);
  *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v10 + 16);
  *(_OWORD *)&v31.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v30 = v31;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v30, 0);
  if ( BYTE3(item[1].klass) )
  {
    BYTE3(item[1].klass) = 0;
    this->fields.selectItem = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectItem, 0, v13, v14);
    CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0, v15);
    v16 = 0;
  }
  else
  {
    v16 = v12;
    BYTE3(item[1].klass) = 1;
    this->fields.selectItem = (struct CombineCommandCodeListViewItem_o *)item;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectItem, (int32_t)item, v13, v14);
    CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, (CombineCommandCodeListViewItem_o *)item, v17);
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
                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_28;
      v9 = CombineCommandCodeListViewItem_TypeInfo;
      v19 = itemList;
      v20 = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)v20
        || (CombineCommandCodeListViewItem_c *)itemList->klass->_2.typeHierarchy[v20 - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      items = itemList[3].fields._items;
      if ( !items )
        goto LABEL_28;
      v22 = *(_OWORD *)items->m_Items;
      *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&items->bounds;
      *(_OWORD *)&v31.fields.fakeValue = v22;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v29 = v31;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v29, 0) != v16 )
        BYTE3(v19[3].klass) = 0;
      item = (ListViewItem_o *)(unsigned int)((_DWORD)item + 1);
      if ( size == (_DWORD)item )
        goto LABEL_29;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_28;
    }
    sub_1C2D9AC(itemList);
    goto LABEL_36;
  }
LABEL_29:
  itemList = (System_Collections_Generic_List_object__o *)CombineCommandCodeListViewManager__get_ObjectList(
                                                            this,
                                                            (const MethodInfo *)v9);
  if ( !itemList )
LABEL_28:
    sub_1C2D6EC(itemList, v9);
  v23 = itemList->fields._size;
  v24 = itemList;
  if ( v23 >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v24,
                                                                v25,
                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
      if ( !itemList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))itemList->klass->vtable._9_unknown.methodPtr)(
        itemList,
        this->fields.isInput,
        itemList->klass->vtable._9_unknown.method);
      if ( v23 == ++v25 )
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

  if ( (byte_4C2B119 & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_EndClickTabStatus__);
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_OnClickNormalStatus__);
    sub_1C2D490(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4C2B119 = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineCommandCodeListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_1C2D6DC(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
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
  const MethodInfo *v7; // x3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  CombineCommandCodeListViewManager_o *v10; // x0
  int v11; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v14; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4C2B116 & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_OnClickScaleChange__);
    byte_4C2B116 = 1;
  }
  v3 = Method_CombineCommandCodeListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_CombineCommandCodeListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v10 = this;
    v11 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v10 = this;
    v11 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v10 = this;
    v11 = 1;
LABEL_11:
    v10->fields.seed = smallSizeSeed;
    p_seed = &v10->fields.seed;
    *((_DWORD *)p_seed + 110) = v11;
    sub_1C2D434((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v14 = this->fields.scaleType,
        sort->fields.iconScaleKind = v14,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v14, 0),
        !scaleChangeButtonSprite) )
  {
    sub_1C2D6EC(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  CombineCommandCodeListViewManager__ModifyList(this, 1, v16);
  CombineCommandCodeListViewManager__SetMode_48140640(this, 3, v17);
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

  if ( (byte_4C2B124 & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__);
    byte_4C2B124 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C2B122 & 1) == 0 )
  {
    sub_1C2D490(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_EndSelectSortKind__);
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_OnClickSortKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B122 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineCommandCodeListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C2D6DC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C2D6EC(v9, v10);
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
  const MethodInfo *v11; // x3
  struct UserCommandCodeEntity_o *v12; // x1
  CombineCommandCodeListViewManager_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4C2B11E & 1) == 0 )
  {
    sub_1C2D490(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_OnLongPushListView__);
    byte_4C2B11E = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    v5 = Method_CombineCommandCodeListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_CombineCommandCodeListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( item
      && ((v7 = CombineCommandCodeListViewItem_TypeInfo,
           naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment,
           item->klass->_2.naturalAligment < (unsigned int)naturalAligment)
       || (CombineCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != CombineCommandCodeListViewItem_TypeInfo) )
    {
      sub_1C2D9AC(item);
      CombineCommandCodeListViewManager__GetSelectItem(v13, v14);
    }
    else
    {
      scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !scrollView
        || (UnityEngine_Behaviour__set_enabled(scrollView, 0, 0), !item)
        || (v12 = *(struct UserCommandCodeEntity_o **)&item[1].fields.selectNum,
            this->fields.selectShowStatusUserCmdCode = v12,
            sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectShowStatusUserCmdCode, (int32_t)v12, v10, v11),
            (scrollView = (UnityEngine_Behaviour_o *)this->fields.combineRootComponent) == 0) )
      {
        sub_1C2D6EC(scrollView, v7);
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
  const MethodInfo *v11; // x3

  if ( (byte_4C2B115 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B115 = 1;
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
          sub_1C2D6EC(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v10, v11);
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

  if ( (byte_4C2B114 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C2B114 = 1;
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
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_CombineCommandCodeListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      CombineCommandCodeListViewObject__Init_48141264((CombineCommandCodeListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_1C2D6EC(ObjectList, v8);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
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
    sub_1C2D6EC(decideButton, isEnable);
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

  if ( (byte_4C2B121 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17481/*"btn_filter_on"*/);
    sub_1C2D490(&StringLiteral_17480/*"btn_filter"*/);
    byte_4C2B121 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C2D6EC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17480/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17481/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void CombineCommandCodeListViewManager__SetMode(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  CombineCommandCodeListViewManager__SetMode_48140640(this, mode, v6);
}


void CombineCommandCodeListViewManager__SetMode_48140640(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  UnityEngine_Behaviour_o *v8; // x0
  int32_t v9; // w1

  if ( (byte_4C2B113 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B113 = 1;
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
      sub_1C2D6EC(v8, v6);
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
  if ( (byte_4C2B112 & 1) == 0 )
  {
    this = (CombineCommandCodeListViewManager_o *)sub_1C2D490(&CombineCommandCodeListViewObject_TypeInfo);
    byte_4C2B112 = 1;
  }
  if ( !obj
    || (naturalAligment = CombineCommandCodeListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (CombineCommandCodeListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineCommandCodeListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  CombineCommandCodeListViewObject__Init_48140516(
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
  System_String_o *MargeExplanation_43284788; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x2
  const MethodInfo *v10; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v13; // q1
  char v14; // w1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-60h]
  System_String_array *explanationList; // [xsp+48h] [xbp-38h] BYREF
  System_String_array *titleList; // [xsp+50h] [xbp-30h] BYREF
  System_Int32_array *idList; // [xsp+58h] [xbp-28h] BYREF

  if ( (byte_4C2B10D & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B10D = 1;
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
            CombineCommandCodeListViewManager__SetDecideButtonStatus(this, 0, v15);
            selectedCommandCode = (UnityEngine_Component_o *)this->fields.equippedInfo;
            if ( selectedCommandCode )
              goto LABEL_22;
          }
        }
      }
    }
LABEL_28:
    sub_1C2D6EC(selectedCommandCode, item);
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
  ServantFaceIconComponent__Set_40791192(
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
  MargeExplanation_43284788 = SkillInfo__GetMargeExplanation_43284788(explanationList, 0);
  this->fields.selectItem = item;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectItem, (int32_t)item, v7, v8);
  if ( !titleList )
    goto LABEL_28;
  if ( !LODWORD(titleList->max_length) )
    sub_1C2D6F4(selectedCommandCode, item, v9);
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.skillName;
  if ( !selectedCommandCode )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)selectedCommandCode, titleList->m_Items[0], 0);
  WrapControlText__textAdjust(this->fields.skillMessage, MargeExplanation_43284788, 22, 0, 0);
  selectItem = this->fields.selectItem;
  if ( selectItem && (userCommandCode = selectItem->fields.userCommandCode) != 0 )
  {
    v13 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v18.fields.fakeValue = v13;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v17 = v18;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v17, 0) != this->fields.nowEquipedUserCommandCodeId;
  }
  else
  {
    v14 = 1;
  }
  CombineCommandCodeListViewManager__SetDecideButtonStatus(this, v14, v10);
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
    v16);
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

  if ( (byte_4C2B125 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17517/*"btn_sort_up"*/);
    sub_1C2D490(&StringLiteral_17615/*"btn_txt_up"*/);
    sub_1C2D490(&StringLiteral_17566/*"btn_txt_new"*/);
    sub_1C2D490(&StringLiteral_17556/*"btn_txt_down"*/);
    sub_1C2D490(&StringLiteral_17573/*"btn_txt_old"*/);
    sub_1C2D490(&StringLiteral_17514/*"btn_sort_down"*/);
    byte_4C2B125 = 1;
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17573/*"btn_txt_old"*/ : &StringLiteral_17566/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17615/*"btn_txt_up"*/ : &StringLiteral_17556/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C2D6EC(sort, v4);
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

  if ( (byte_4C2B10C & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&StringLiteral_17634/*"button_allchoice_reg"*/);
    sub_1C2D490(&StringLiteral_17637/*"button_alllock_unreg"*/);
    sub_1C2D490(&StringLiteral_11649/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C2D490(&StringLiteral_11650/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C2D490(&StringLiteral_17650/*"button_select_reg"*/);
    sub_1C2D490(&StringLiteral_3572/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/);
    sub_1C2D490(&StringLiteral_17651/*"button_select_unreg"*/);
    sub_1C2D490(&StringLiteral_17636/*"button_alllock_reg"*/);
    sub_1C2D490(&StringLiteral_17635/*"button_allchoice_unreg"*/);
    byte_4C2B10C = 1;
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
  v6 = &StringLiteral_17650/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_17651/*"button_select_unreg"*/;
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
  v7 = &StringLiteral_17636/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v7 = &StringLiteral_17637/*"button_alllock_unreg"*/;
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
  v8 = &StringLiteral_17634/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v8 = &StringLiteral_17635/*"button_allchoice_unreg"*/;
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
    v17 = &StringLiteral_11649/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
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
    v17 = &StringLiteral_11650/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
    goto LABEL_38;
  }
  if ( v9 )
    return;
  v10 = this->fields.combineInfoMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3572/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, 0);
  if ( !v10 )
LABEL_43:
    sub_1C2D6EC(statusTabButton, *(_QWORD *)&modeKind);
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
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v19, 0) != this->fields.nowEquipedUserCommandCodeId;
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
  const MethodInfo *v8; // x3
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1
  System_Int64_array *v12; // x1
  System_Int64_array *v13; // x2
  bool v14; // w3
  bool v15; // w4
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  System_Int64_array *v19; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C2B11C & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineCommandCodeListViewManager_EndStatusSync__);
    sub_1C2D490(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C2B11C = 1;
  }
  unlockList = 0;
  lockList = 0;
  v19 = 0;
  choiceList = 0;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( CombineCommandCodeListViewManager__GetSwapChoiceList(this, &choiceList, &v19, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v16, v17);
      v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v18,
                         (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
      if ( Request_object )
      {
        v13 = v19;
        v12 = choiceList;
        v15 = 1;
        v14 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1C2D6EC(Request_object, v11);
    }
  }
  else if ( modeKind == 1 && CombineCommandCodeListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v7, v8);
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndStatusSync__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v9,
                       (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    if ( Request_object )
    {
      v13 = unlockList;
      v12 = lockList;
      v14 = 1;
      v15 = 0;
LABEL_15:
      CommandCodeStatusSyncRequest__beginRequest(
        (CommandCodeStatusSyncRequest_o *)Request_object,
        v12,
        v13,
        v14,
        v15,
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

  if ( (byte_4C2B107 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C2B107 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
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
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C2B10A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B10A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
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
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
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
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_43582756(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v13 = Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          v14 = v3->fields._size;
          if ( (unsigned int)v14 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v9,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + v14;
            v3->fields._size = v14 + 1;
            v15[4] = (Il2CppClass *)v9;
            sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v9, v10, v11);
          }
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1C2D6EC(objectList, v4);
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
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 v13; // x10
  System_Collections_Generic_List_object__o *v14; // x1
  Il2CppClass **v15; // x0

  if ( (byte_4C2B109 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B109 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
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
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v12 = Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v13 = v3->fields._size;
        v14 = objectList;
        if ( (unsigned int)v13 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)objectList,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + v13;
          v3->fields._size = v13 + 1;
          v15[4] = (Il2CppClass *)v14;
          sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1C2D6EC(objectList, v4);
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

  if ( (byte_4C2B108 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C2B108 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  CombineCommandCodeListViewManager__get_ObjectList(v10, v11);
}


void CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
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
  this->fields.invoke_impl = (intptr_t)sub_1A763F8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A763B0;
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
  if ( (byte_4C2B129 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C2B129 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void CombineCommandCodeListViewManager_RequestCallbackFunc__EndInvoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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