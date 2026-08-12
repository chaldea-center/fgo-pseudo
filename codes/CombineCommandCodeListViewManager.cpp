void CombineCommandCodeListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x0
  System_String_o *v2; // x19
  ListViewSort_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  int v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5974A3F & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewManager_TypeInfo);
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&StringLiteral_4746/*"CombineCommandCode"*/);
    byte_5974A3F = 1;
  }
  v10 = 1;
  v1 = System_Int32__ToString((int32_t)&v10, 0);
  v2 = System_String__Concat_75651716((System_String_o *)StringLiteral_4746/*"CombineCommandCode"*/, v1, 0);
  v3 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v3, v2, 2, 0, 0);
  CombineCommandCodeListViewManager_TypeInfo->static_fields->commandCodeSortInfo = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CombineCommandCodeListViewManager_TypeInfo->static_fields,
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  CombineCommandCodeListViewManager_c *v32; // x0
  struct ListViewSort_o **p_commandCodeSortInfo; // x8
  struct ListViewSort_o *v34; // x1
  struct ListViewSort_o **p_sort; // x26
  const MethodInfo *v36; // x2
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  BalanceConfig_c *v43; // x8
  int64_t v44; // x29
  struct BalanceConfig_StaticFields *static_fields; // x10
  unsigned int iconScaleKind; // w8
  int CommandCodeFrameMax; // w26
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x20
  UserServantCommandCodeMaster_o *v50; // x20
  __int64 v51; // x27
  int64_t v52; // x24
  System_Collections_Generic_List_long__o *v53; // x28
  __int64 v54; // x20
  int v55; // w21
  int64_t v56; // x29
  __int64 v57; // x27
  __int128 v58; // q1
  int v59; // w8
  __int128 v60; // q1
  int v61; // w8
  __int64 v62; // x1
  System_Collections_Generic_Dictionary_long__long__o *v63; // x25
  __int64 v64; // x26
  __int64 v65; // x27
  __int128 v66; // q1
  int v67; // w8
  bool v68; // w0
  __int128 v69; // q0
  bool v70; // w28
  int64_t v71; // x0
  __int64 v72; // x1
  __int128 v73; // q1
  int v74; // w8
  int64_t v75; // x0
  int32_t Item; // w20
  __int128 v77; // q1
  int64_t v78; // x21
  int v79; // w8
  bool v80; // w21
  CombineCommandCodeListViewItem_o *v81; // x29
  const MethodInfo *v82; // x7
  __int64 v83; // x1
  __int128 v84; // q1
  int v85; // w8
  MethodInfo *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  __int64 v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  __int64 v95; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 *v97; // x8
  UILabel_o *commandCodeInfoLabel; // x20
  System_String_o *v99; // x21
  Il2CppObject *v100; // x22
  Il2CppObject *v101; // x0
  const MethodInfo *v102; // x2
  const MethodInfo *v103; // x1
  int32_t modeKinda; // [xsp+10h] [xbp-190h]
  int v105; // [xsp+14h] [xbp-18Ch]
  UserServantCommandCodeMaster_o *v106; // [xsp+18h] [xbp-188h]
  int64_t v107; // [xsp+18h] [xbp-188h]
  bool v108; // [xsp+20h] [xbp-180h]
  int v111; // [xsp+30h] [xbp-170h]
  int v112; // [xsp+3Ch] [xbp-164h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+40h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+60h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+80h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+A0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+C0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+E0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+100h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+120h] [xbp-80h] BYREF

  if ( (byte_5974A22 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CombineCommandCodeListViewItem_TypeInfo);
    sub_2213A60(&CombineCommandCodeListViewManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Contains__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_21289/*"img_bg_arts"*/);
    sub_2213A60(&StringLiteral_3789/*"COMMAND_CODE_EMPTY"*/);
    sub_2213A60(&StringLiteral_21291/*"img_bg_buster"*/);
    sub_2213A60(&StringLiteral_21309/*"img_bg_quick"*/);
    sub_2213A60(&StringLiteral_13005/*"SUM_INFO"*/);
    byte_5974A22 = 1;
  }
  bgTxtSprite = (int64_t)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_93;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0);
  bgTxtSprite = BgTxtManager__IsActiveBgTxt(0);
  if ( !gameObject )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive(gameObject, bgTxtSprite & 1, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.selectShowStatusUserCmdCode = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectShowStatusUserCmdCode,
    0,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.selectItem = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectItem, 0, v19, v20, v21, v22, v23, v24);
  v32 = CombineCommandCodeListViewManager_TypeInfo;
  this->fields.nowEquipedUserCommandCodeId = nowEquipedUserCommandCodeId;
  if ( !*(&v32->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v32, v25);
    v32 = CombineCommandCodeListViewManager_TypeInfo;
  }
  p_commandCodeSortInfo = &v32->static_fields->commandCodeSortInfo;
  v34 = *p_commandCodeSortInfo;
  this->fields.sort = *p_commandCodeSortInfo;
  p_sort = &this->fields.sort;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v34, v26, v27, v28, v29, v30, v31);
  bgTxtSprite = (int64_t)this->fields.sort;
  if ( !bgTxtSprite )
    goto LABEL_93;
  *(_DWORD *)(bgTxtSprite + 128) = 3;
  ListViewSort__Load((ListViewSort_o *)bgTxtSprite, 0);
  CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0, v36);
  bgTxtSprite = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgTxtSprite )
    goto LABEL_93;
  bgTxtSprite = (int64_t)DataManager__GetMasterData_object_(
                           (DataManager_o *)bgTxtSprite,
                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !bgTxtSprite )
    goto LABEL_93;
  bgTxtSprite = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)bgTxtSprite, 0);
  v43 = BalanceConfig_TypeInfo;
  v44 = bgTxtSprite;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&baseSvtId);
    v43 = BalanceConfig_TypeInfo;
  }
  if ( !*p_sort )
    goto LABEL_93;
  static_fields = v43->static_fields;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  CommandCodeFrameMax = static_fields->CommandCodeFrameMax;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
  }
  else if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_20;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
    (int32_t)normalSizeSeed,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
LABEL_20:
  bgTxtSprite = (int64_t)this->fields.sort;
  if ( !bgTxtSprite )
    goto LABEL_93;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  bgTxtSprite = (int64_t)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)bgTxtSprite, this->fields.scaleType, 0);
  if ( !scaleChangeButtonSprite )
    goto LABEL_93;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)bgTxtSprite, 0);
  modeKinda = modeKind;
  if ( !v44 || !*(_QWORD *)(v44 + 24) )
  {
    bgTxtSprite = (int64_t)this->fields.emptyMessageBase;
    if ( bgTxtSprite )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 1, 0);
      LODWORD(v51) = 0;
      goto LABEL_76;
    }
    goto LABEL_93;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&baseSvtId);
  bgTxtSprite = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
  if ( !bgTxtSprite )
    goto LABEL_93;
  v50 = (UserServantCommandCodeMaster_o *)bgTxtSprite;
  bgTxtSprite = (int64_t)UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                           (UserServantCommandCodeMaster_o *)bgTxtSprite,
                           0);
  v51 = *(_QWORD *)(v44 + 24);
  v52 = v44;
  v105 = CommandCodeFrameMax;
  v108 = 0;
  v111 = v51;
  if ( CommandCodeFrameMax > (int)v51 || (int)v51 < 1 )
    goto LABEL_47;
  v106 = v50;
  v53 = (System_Collections_Generic_List_long__o *)bgTxtSprite;
  v54 = 0;
  v55 = 0;
  v56 = v44 + 32;
  while ( 1 )
  {
    if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
      goto LABEL_94;
    v57 = *(_QWORD *)(v56 + 8 * v54);
    if ( !v57 )
      goto LABEL_93;
    v58 = *(_OWORD *)(v57 + 32);
    v59 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)(v57 + 16);
    *(_OWORD *)&v120.fields.fakeValue = v58;
    if ( !v59 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&baseSvtId);
    v119 = v120;
    bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v119, 0);
    if ( bgTxtSprite != nowEquipedUserCommandCodeId )
      break;
    LODWORD(v51) = v111;
LABEL_41:
    if ( (_DWORD)v51 == (_DWORD)++v54 )
    {
      v108 = 0;
      goto LABEL_46;
    }
  }
  v60 = *(_OWORD *)(v57 + 32);
  v61 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)(v57 + 16);
  *(_OWORD *)&v120.fields.fakeValue = v60;
  if ( !v61 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&baseSvtId);
  v118 = v120;
  bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v118, 0);
  if ( !v53 )
    goto LABEL_93;
  bgTxtSprite = System_Collections_Generic_List_long___Contains(
                  v53,
                  bgTxtSprite,
                  (const MethodInfo_446C61C *)Method_System_Collections_Generic_List_long__Contains__);
  LODWORD(v51) = v111;
  if ( (bgTxtSprite & 1) == 0 )
    goto LABEL_41;
  if ( ++v55 < CommandCodeFrameMax )
    goto LABEL_41;
  v108 = 1;
LABEL_46:
  v50 = v106;
  v44 = v52;
LABEL_47:
  bgTxtSprite = (int64_t)UserServantCommandCodeMaster__GetEquippedCommandCodeDic(v50, 0);
  if ( (int)v51 >= 1 )
  {
    v63 = (System_Collections_Generic_Dictionary_long__long__o *)bgTxtSprite;
    v64 = 0;
    v107 = v44 + 32;
    while ( (unsigned int)v64 < *(_DWORD *)(v44 + 24) )
    {
      v65 = *(_QWORD *)(v107 + 8 * v64);
      if ( !v65 )
        goto LABEL_93;
      v66 = *(_OWORD *)(v65 + 32);
      v67 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)(v65 + 16);
      *(_OWORD *)&v120.fields.fakeValue = v66;
      if ( !v67 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&baseSvtId);
      v117 = v120;
      bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v117, 0);
      if ( !v63 )
        goto LABEL_93;
      v68 = System_Collections_Generic_Dictionary_long__long___ContainsKey(
              v63,
              bgTxtSprite,
              (const MethodInfo_3FCC8F4 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
      v69 = *(_OWORD *)(v65 + 32);
      v70 = v68;
      *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)(v65 + 16);
      *(_OWORD *)&v116.fields.fakeValue = v69;
      v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v116, 0);
      if ( System_Collections_Generic_Dictionary_long__long___ContainsKey(
             v63,
             v71,
             (const MethodInfo_3FCC8F4 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__) )
      {
        v73 = *(_OWORD *)(v65 + 32);
        v74 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)(v65 + 16);
        *(_OWORD *)&v120.fields.fakeValue = v73;
        if ( !v74 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v72);
        v115 = v120;
        v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v115, 0);
        Item = System_Collections_Generic_Dictionary_long__long___get_Item(
                 v63,
                 v75,
                 (const MethodInfo_3FCC660 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
      }
      else
      {
        Item = 0;
      }
      v77 = *(_OWORD *)(v65 + 32);
      v78 = this->fields.nowEquipedUserCommandCodeId;
      v79 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)(v65 + 16);
      *(_OWORD *)&v120.fields.fakeValue = v77;
      if ( !v79 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v72);
      v114 = v120;
      v80 = v78 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v114, 0);
      v81 = (CombineCommandCodeListViewItem_o *)sub_2213CCC(CombineCommandCodeListViewItem_TypeInfo);
      CombineCommandCodeListViewItem___ctor(v81, (UserCommandCodeEntity_o *)v65, v80, v70, Item, baseSvtId, v108, v82);
      v84 = *(_OWORD *)(v65 + 32);
      v85 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)(v65 + 16);
      *(_OWORD *)&v120.fields.fakeValue = v84;
      if ( !v85 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v83);
      v113 = v120;
      bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v113, 0);
      LODWORD(v51) = v111;
      if ( bgTxtSprite == beforeSelectedUserCommandCodeId )
      {
        if ( !v81 )
          goto LABEL_93;
        v81->fields.isSelect = 1;
        CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, v81, v86);
      }
      else
      {
        if ( !v81 )
          goto LABEL_93;
        v81->fields.isSelect = 0;
      }
      bgTxtSprite = (int64_t)this->fields.itemList;
      if ( !bgTxtSprite )
        goto LABEL_93;
      v92 = *(_QWORD *)(bgTxtSprite + 16);
      v93 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(bgTxtSprite + 28);
      if ( !v92 )
        goto LABEL_93;
      v94 = *(int *)(bgTxtSprite + 24);
      if ( (unsigned int)v94 >= *(_DWORD *)(v92 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)bgTxtSprite,
          (Il2CppObject *)v81,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
      }
      else
      {
        v95 = v92 + 8 * v94;
        *(_DWORD *)(bgTxtSprite + 24) = v94 + 1;
        *(_QWORD *)(v95 + 32) = v81;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v95 + 32),
          (int32_t)v81,
          (System_String_o *)v86,
          v87,
          v88,
          v89,
          v90,
          v91);
      }
      ++v64;
      v44 = v52;
      if ( v111 == (_DWORD)v64 )
        goto LABEL_74;
    }
LABEL_94:
    sub_2213CE4(bgTxtSprite);
  }
LABEL_74:
  bgTxtSprite = (int64_t)this->fields.emptyMessageBase;
  if ( !bgTxtSprite )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 0, 0);
  CommandCodeFrameMax = v105;
LABEL_76:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62);
  bgTxtSprite = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3789/*"COMMAND_CODE_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_93;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)bgTxtSprite, 0);
  switch ( commandCardType )
  {
    case 1:
      bgTxtSprite = (int64_t)this->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_93;
      v97 = &StringLiteral_21289/*"img_bg_arts"*/;
      goto LABEL_88;
    case 3:
      bgTxtSprite = (int64_t)this->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_93;
      v97 = &StringLiteral_21309/*"img_bg_quick"*/;
LABEL_88:
      UISprite__set_spriteName((UISprite_o *)bgTxtSprite, (System_String_o *)*v97, 0);
      break;
    case 2:
      bgTxtSprite = (int64_t)this->fields.commandCardTypeSprite;
      if ( bgTxtSprite )
      {
        v97 = &StringLiteral_21291/*"img_bg_buster"*/;
        goto LABEL_88;
      }
LABEL_93:
      sub_2213CDC(bgTxtSprite, *(_QWORD *)&baseSvtId);
  }
  commandCodeInfoLabel = this->fields.commandCodeInfoLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&baseSvtId);
  v99 = LocalizationManager__Get((System_String_o *)StringLiteral_13005/*"SUM_INFO"*/, 0);
  LODWORD(v120.fields.currentCryptoKey) = v51;
  v100 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v120);
  v112 = CommandCodeFrameMax;
  v101 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v112);
  bgTxtSprite = (int64_t)System_String__Format_75697880(v99, v100, v101, 0);
  if ( !commandCodeInfoLabel )
    goto LABEL_93;
  UILabel__set_text(commandCodeInfoLabel, (System_String_o *)bgTxtSprite, 0);
  CombineCommandCodeListViewManager__SetStatusKind(this, modeKinda, v102);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  CombineCommandCodeListViewManager__SetFilterButtonImage(this, v103);
}


void CombineCommandCodeListViewManager__DestroyList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  __int64 v9; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  this->fields.selectShowStatusUserCmdCode = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectShowStatusUserCmdCode, 0, v3, v4, v5, v6, v7, v8);
  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, v9);
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
  CombineCommandCodeListViewManager__SetMode_55727548(this, 3, v5);
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
  CombineCommandCodeListViewManager__SetMode_55727548(this, 3, v5);
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
  CombineCommandCodeListViewManager__SetMode_55727548(this, 3, v5);
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

  if ( (byte_5974A37 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974A37 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    CombineCommandCodeListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_2213CDC(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void CombineCommandCodeListViewManager__EndSelectSortKind(
        CombineCommandCodeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_5974A3A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974A3A = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


void CombineCommandCodeListViewManager__EndStatusSync(
        CombineCommandCodeListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct CombineCommandCodeListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  MissionNaviTransitionBoardItem_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0;
    sub_2213A04(p_requestCallback, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
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
  CombineCommandCodeListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w23
  int64_t v7; // x21
  int32_t v8; // w22
  __int64 naturalAligment; // x10

  v4 = this;
  if ( (byte_5974A3D & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (CombineCommandCodeListViewManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_5974A3D = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      this = (CombineCommandCodeListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      this = (CombineCommandCodeListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v8,
                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CombineCommandCodeListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      ++v8;
      if ( CombineCommandCodeListViewItem__get_CommandCodeId(
             (CombineCommandCodeListViewItem_o *)this,
             *(const MethodInfo **)&commandCodeId) == commandCodeId )
        ++v7;
      if ( size == v8 )
        return v7;
    }
LABEL_16:
    sub_2213CDC(this, *(_QWORD *)&commandCodeId);
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

  if ( (byte_5974A3E & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewItem_TypeInfo);
    this = (CombineCommandCodeListViewManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_5974A3E = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_2213CDC(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (CombineCommandCodeListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)list,
                                                      v8,
                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_5974A28 & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_5974A28 = 1;
  }
  result = (CombineCommandCodeListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineCommandCodeListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_5974A2F & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974A2F = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(CombineCommandCodeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != CombineCommandCodeListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 136);
      if ( v21 && *(_BYTE *)(Item + 126) )
      {
        if ( *(_BYTE *)(Item + 122) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *choiceList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unchoiceList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unchoiceList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


bool CombineCommandCodeListViewManager__GetSwapLockList(
        CombineCommandCodeListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_5974A2E & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974A2E = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(CombineCommandCodeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != CombineCommandCodeListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 136);
      if ( v21 && *(_BYTE *)(Item + 125) )
      {
        if ( *(_BYTE *)(Item + 121) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *lockList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unlockList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unlockList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
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
  __int64 v3; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  DataManager_o *Instance; // x0
  DataManager_o *v7; // x20
  int size; // w24
  int32_t v9; // w21
  __int64 v10; // x2
  CombineCommandCodeListViewItem_o *v11; // x22
  __int64 naturalAligment; // x9
  __int64 v13; // x8
  __int128 v14; // q0
  __int128 v15; // q1
  int v16; // w8
  int64_t v17; // x0
  __int128 v18; // q0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *viewObject; // x23
  CombineCommandCodeListViewManager_o *v21; // x0
  const MethodInfo *v22; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-80h]

  v3 = userCommandCodeId;
  if ( (byte_5974A26 & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewItem_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974A26 = 1;
  }
  itemList = this->fields.itemList;
  if ( itemList )
  {
    if ( v3 < 1 )
    {
      v7 = 0;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
        || (Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                          v3,
                                          (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = this->fields.itemList) == 0) )
      {
LABEL_29:
        sub_2213CDC(Instance, userCommandCodeId);
      }
      v7 = Instance;
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_29;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v9,
                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Instance )
          goto LABEL_29;
        userCommandCodeId = (int64_t)CombineCommandCodeListViewItem_TypeInfo;
        v11 = (CombineCommandCodeListViewItem_o *)Instance;
        naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
        if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (CombineCommandCodeListViewItem_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != CombineCommandCodeListViewItem_TypeInfo )
        {
          break;
        }
        if ( v7 )
        {
          v13 = *(_QWORD *)&Instance->fields.writeMasterDataThreadEnd;
          if ( !v13 )
            goto LABEL_29;
          v14 = *(_OWORD *)(v13 + 16);
          v15 = *(_OWORD *)(v13 + 32);
          v16 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v25.fields.currentCryptoKey = v14;
          *(_OWORD *)&v25.fields.fakeValue = v15;
          if ( !v16 )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              CombineCommandCodeListViewItem_TypeInfo);
          v24 = v25;
          v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v24, 0);
          v18 = *(_OWORD *)&v7->fields._DispLog;
          *(SingletonMonoBehaviour_DataManager__Fields *)&v23.fields.currentCryptoKey = v7->fields.SingletonMonoBehaviour_DataManager__Fields;
          *(_OWORD *)&v23.fields.fakeValue = v18;
          if ( v17 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v23, 0) )
            CombineCommandCodeListViewItem__Modify(v11, (UserCommandCodeEntity_o *)v7, v19);
        }
        viewObject = (UnityEngine_Object_o *)v11->fields.viewObject;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userCommandCodeId);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
        {
          Instance = (DataManager_o *)v11->fields.viewObject;
          if ( !Instance )
            goto LABEL_29;
          ((void (__fastcall *)(DataManager_o *, CombineCommandCodeListViewItem_o *, const char *))Instance->klass[1]._1.name)(
            Instance,
            v11,
            Instance->klass[1]._1.namespaze);
        }
        if ( size == ++v9 )
          return;
      }
      sub_221405C(Instance, CombineCommandCodeListViewItem_TypeInfo, v10);
      CombineCommandCodeListViewManager__OnClickDecide(v21, v22);
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
  int size; // w25
  ListViewItem_o *v8; // x21
  unsigned __int64 v9; // x20
  ListViewItem_c **v10; // x26
  ListViewItem_c *v11; // x8
  __int64 *v12; // x26
  ListViewItem_c *v13; // t1
  __int128 v14; // q0
  Il2CppType byval_arg; // q1
  int v16; // w8
  int64_t v17; // x22
  int32_t v18; // w24
  __int64 v19; // x2
  int64_t v20; // x23
  __int64 naturalAligment; // x9
  __int64 v22; // x8
  __int128 v23; // q0
  __int128 v24; // q1
  int v25; // w8
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  const MethodInfo *v33; // x1
  int32_t v34; // w20
  Il2CppObject *Item; // x0
  __int64 v36; // x2
  CombineCommandCodeListViewItem_c *v37; // x1
  __int64 v38; // x9
  UnityEngine_Object_o *klass; // x22
  __int64 v41; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+50h] [xbp-80h]

  if ( (byte_5974A25 & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewItem_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974A25 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_43;
  Instance = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Instance, 0);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_43;
  size = itemList->fields._size;
  v8 = (ListViewItem_o *)Instance;
  if ( Instance )
  {
    v41 = *(unsigned int *)(Instance + 24);
    if ( *(int *)(Instance + 24) >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)v8->fields.sortIndex )
          goto LABEL_46;
        v10 = &v8->klass + v9;
        v13 = v10[4];
        v12 = (__int64 *)(v10 + 4);
        v11 = v13;
        if ( !v13 )
          break;
        v14 = *(_OWORD *)&v11->_1.name;
        byval_arg = v11->_1.byval_arg;
        v16 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v44.fields.currentCryptoKey = v14;
        *(Il2CppType *)&v44.fields.fakeValue = byval_arg;
        if ( !v16 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
        v43 = v44;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v43, 0);
        if ( size >= 1 )
        {
          v17 = Instance;
          v18 = 0;
          while ( 1 )
          {
            Instance = (int64_t)this->fields.itemList;
            if ( !Instance )
              goto LABEL_43;
            Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v18,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            if ( !Instance )
              goto LABEL_43;
            v5 = CombineCommandCodeListViewItem_TypeInfo;
            v20 = Instance;
            naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)naturalAligment
              || *(CombineCommandCodeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL)
                                                      + 8 * naturalAligment
                                                      - 8) != CombineCommandCodeListViewItem_TypeInfo )
            {
              break;
            }
            v22 = *(_QWORD *)(Instance + 136);
            if ( v22 )
            {
              v23 = *(_OWORD *)(v22 + 16);
              v24 = *(_OWORD *)(v22 + 32);
              v25 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
              *(_OWORD *)&v44.fields.currentCryptoKey = v23;
              *(_OWORD *)&v44.fields.fakeValue = v24;
              if ( !v25 )
                j_il2cpp_runtime_class_init_0(
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                  CombineCommandCodeListViewItem_TypeInfo);
              v42 = v44;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v42, 0);
              if ( Instance == v17 )
              {
                if ( v9 < (unsigned int)v8->fields.sortIndex )
                {
                  v32 = *v12;
                  *(_QWORD *)(v20 + 136) = *v12;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 136), v32, v26, v27, v28, v29, v30, v31);
                  if ( !isIconSizeChange )
                  {
                    CombineCommandCodeListViewItem__ModifyLockItem(
                      (CombineCommandCodeListViewItem_o *)v20,
                      (const MethodInfo *)v5);
                    CombineCommandCodeListViewItem__ModifyChoiceItem((CombineCommandCodeListViewItem_o *)v20, v33);
                  }
                  goto LABEL_28;
                }
LABEL_46:
                sub_2213CE4(Instance);
              }
            }
            if ( size == ++v18 )
              goto LABEL_28;
          }
          sub_221405C(Instance, CombineCommandCodeListViewItem_TypeInfo, v19);
LABEL_45:
          sub_221405C(v8, v37, v36);
          goto LABEL_46;
        }
LABEL_28:
        if ( ++v9 == v41 )
          goto LABEL_29;
      }
LABEL_43:
      sub_2213CDC(Instance, v5);
    }
  }
LABEL_29:
  if ( isIconSizeChange && size >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_43;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v34,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v37 = CombineCommandCodeListViewItem_TypeInfo;
        v8 = (ListViewItem_o *)Item;
        v38 = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment < (unsigned int)v38
          || (CombineCommandCodeListViewItem_c *)Item->klass->_2.typeHierarchy[v38 - 1] != CombineCommandCodeListViewItem_TypeInfo )
        {
          goto LABEL_45;
        }
        klass = (UnityEngine_Object_o *)Item[7].klass;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, CombineCommandCodeListViewItem_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
        {
          Instance = (int64_t)v8->fields.viewObject;
          if ( !Instance )
            goto LABEL_43;
          ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v8, this->fields.seed, 0);
        }
      }
      if ( size == ++v34 )
        return;
    }
  }
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

  if ( (byte_5974A32 & 1) == 0 )
  {
    sub_2213A60(&Method_CombineCommandCodeListViewManager_EndClickTabChoice__);
    sub_2213A60(&Method_CombineCommandCodeListViewManager_OnClickChoiceTab__);
    sub_2213A60(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
    byte_5974A32 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CombineCommandCodeListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_2213CCC(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
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
      CombineCommandCodeListViewManager__SetMode_55727548(this, 3, v10);
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

  if ( (byte_5974A31 & 1) == 0 )
  {
    sub_2213A60(&Method_CombineCommandCodeListViewManager_EndClickTabLock__);
    sub_2213A60(&Method_CombineCommandCodeListViewManager_OnClickCollectLock__);
    sub_2213A60(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
    byte_5974A31 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CombineCommandCodeListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_2213CCC(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
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
      CombineCommandCodeListViewManager__SetMode_55727548(this, 3, v10);
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

  if ( (byte_5974A27 & 1) == 0 )
  {
    sub_2213A60(&Method_CombineCommandCodeListViewManager_OnClickDecide__);
    sub_2213A60(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974A27 = 1;
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
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
      v12 = v13;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v12, 0) != this->fields.nowEquipedUserCommandCodeId )
      {
        v8 = Method_CombineCommandCodeListViewManager_OnClickDecide__;
        if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickDecide__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_2213A78(Method_CombineCommandCodeListViewManager_OnClickDecide__);
        v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        if ( this->fields.nowEquipedUserCommandCodeId >= 1 )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
          if ( !Master_object )
            goto LABEL_21;
          DataMasterBase_object__object__long___GetEntity(
            Master_object,
            this->fields.nowEquipedUserCommandCodeId,
            (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.combineRootComponent;
        if ( Master_object )
        {
          CombineRootComponent__ShowSelectedCommandCode((CombineRootComponent_o *)Master_object, 0);
          return;
        }
LABEL_21:
        sub_2213CDC(Master_object, v10);
      }
    }
  }
  v6 = Method_CombineCommandCodeListViewManager_OnClickDecide__;
  if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_CombineCommandCodeListViewManager_OnClickDecide__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
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

  if ( (byte_5974A36 & 1) == 0 )
  {
    sub_2213A60(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_CombineCommandCodeListViewManager_EndSelectFilterKind__);
    sub_2213A60(&Method_CombineCommandCodeListViewManager_OnClickFilterKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974A36 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CombineCommandCodeListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
    CommonUI__OpenServantFilterSelectMenu_37380372(v7, 6, sort, (ListViewManager_o *)this, v8, -1, 0);
  }
}


void CombineCommandCodeListViewManager__OnClickListView(
        CombineCommandCodeListViewManager_o *this,
        ListViewObject_o *listviewObject,
        const MethodInfo *method)
{
  ;
}


void CombineCommandCodeListViewManager__OnClickListView_55731896(
        CombineCommandCodeListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CombineCommandCodeListViewItem_c *v5; // x1
  __int64 naturalAligment; // x9
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  System_Collections_Generic_List_object__o *ObjectList; // x0
  CombineCommandCodeListViewItem_c *v10; // x1
  __int64 v11; // x8
  __int128 v12; // q1
  int64_t v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x2
  int64_t v21; // x21
  const MethodInfo *v22; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x22
  __int64 v27; // x9
  struct System_Object_array *items; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  int v32; // w22
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w21
  CombineCommandCodeListViewManager_o *v35; // x0
  ListViewItem_o *v36; // x1
  const MethodInfo *v37; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-70h]

  if ( (byte_5974A34 & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewItem_TypeInfo);
    sub_2213A60(&Method_CombineCommandCodeListViewManager_OnClickListView__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974A34 = 1;
  }
  if ( item )
  {
    v5 = CombineCommandCodeListViewItem_TypeInfo;
    naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != CombineCommandCodeListViewItem_TypeInfo )
    {
LABEL_36:
      sub_221405C(item, v5, method);
      CombineCommandCodeListViewManager__OnLongPushListView(v35, v36, v37);
      return;
    }
  }
  v7 = Method_CombineCommandCodeListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_2213A78(Method_CombineCommandCodeListViewManager_OnClickListView__);
  v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
  if ( !item )
    goto LABEL_34;
  v11 = *(_QWORD *)&item[1].fields.selectNum;
  if ( !v11 )
    goto LABEL_34;
  v12 = *(_OWORD *)(v11 + 32);
  *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
  *(_OWORD *)&v40.fields.fakeValue = v12;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
  v39 = v40;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v39, 0);
  if ( BYTE3(item[1].klass) )
  {
    BYTE3(item[1].klass) = 0;
    this->fields.selectItem = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectItem, 0, v14, v15, v16, v17, v18, v19);
    CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0, v20);
    v21 = 0;
  }
  else
  {
    v21 = v13;
    BYTE3(item[1].klass) = 1;
    this->fields.selectItem = (struct CombineCommandCodeListViewItem_o *)item;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectItem,
      (int32_t)item,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, (CombineCommandCodeListViewItem_o *)item, v22);
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    item = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !ObjectList )
        goto LABEL_34;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  (int32_t)item,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !ObjectList )
        goto LABEL_34;
      v10 = CombineCommandCodeListViewItem_TypeInfo;
      v26 = ObjectList;
      v27 = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
      if ( ObjectList->klass->_2.naturalAligment < (unsigned int)v27
        || (CombineCommandCodeListViewItem_c *)ObjectList->klass->_2.typeHierarchy[v27 - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      items = ObjectList[3].fields._items;
      if ( !items )
        goto LABEL_34;
      v29 = *(_OWORD *)&items->bounds;
      v30 = *(_OWORD *)items->m_Items;
      v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v40.fields.currentCryptoKey = v29;
      *(_OWORD *)&v40.fields.fakeValue = v30;
      if ( !v31 )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          CombineCommandCodeListViewItem_TypeInfo);
      v38 = v40;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v38, 0) != v21 )
        BYTE3(v26[3].klass) = 0;
      item = (ListViewItem_o *)(unsigned int)((_DWORD)item + 1);
      if ( size == (_DWORD)item )
        goto LABEL_28;
    }
    sub_221405C(ObjectList, CombineCommandCodeListViewItem_TypeInfo, v25);
    goto LABEL_36;
  }
LABEL_28:
  ObjectList = (System_Collections_Generic_List_object__o *)CombineCommandCodeListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)v10);
  if ( !ObjectList )
LABEL_34:
    sub_2213CDC(ObjectList, v10);
  v32 = ObjectList->fields._size;
  v33 = ObjectList;
  if ( v32 >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v33,
                                                                  v34,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))ObjectList->klass->vtable._9_unknown.methodPtr)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._9_unknown.method);
      if ( v32 == ++v34 )
        return;
    }
    goto LABEL_34;
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

  if ( (byte_5974A30 & 1) == 0 )
  {
    sub_2213A60(&Method_CombineCommandCodeListViewManager_EndClickTabStatus__);
    sub_2213A60(&Method_CombineCommandCodeListViewManager_OnClickNormalStatus__);
    sub_2213A60(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
    byte_5974A30 = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CombineCommandCodeListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_2213CCC(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  CombineCommandCodeListViewManager_o *v14; // x0
  int v15; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v18; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  if ( (byte_5974A2D & 1) == 0 )
  {
    sub_2213A60(&Method_CombineCommandCodeListViewManager_OnClickScaleChange__);
    byte_5974A2D = 1;
  }
  v3 = Method_CombineCommandCodeListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_CombineCommandCodeListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
    p_seed = &v14->fields.seed;
    *((_DWORD *)p_seed + 110) = v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v6, v7, v8, v9, v10, v11);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v18 = this->fields.scaleType,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort->fields.iconScaleKind = v18,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v18, 0),
        !scaleChangeButtonSprite) )
  {
    sub_2213CDC(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  CombineCommandCodeListViewManager__ModifyList(this, 1, v20);
  CombineCommandCodeListViewManager__SetMode_55727548(this, 3, v21);
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

  if ( (byte_5974A3B & 1) == 0 )
  {
    sub_2213A60(&Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__);
    byte_5974A3B = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(v5, v6);
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

  if ( (byte_5974A39 & 1) == 0 )
  {
    sub_2213A60(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_CombineCommandCodeListViewManager_EndSelectSortKind__);
    sub_2213A60(&Method_CombineCommandCodeListViewManager_OnClickSortKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974A39 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CombineCommandCodeListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
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
  __int64 v8; // x2
  __int64 naturalAligment; // x9
  UnityEngine_Behaviour_o *scrollView; // x0
  struct UserCommandCodeEntity_o *v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_5974A35 & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewItem_TypeInfo);
    sub_2213A60(&Method_CombineCommandCodeListViewManager_OnLongPushListView__);
    byte_5974A35 = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    v5 = Method_CombineCommandCodeListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_CombineCommandCodeListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( item )
    {
      v7 = CombineCommandCodeListViewItem_TypeInfo;
      naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
      if ( item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CombineCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == CombineCommandCodeListViewItem_TypeInfo )
      {
        scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
        if ( scrollView )
        {
          UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
          v11 = *(struct UserCommandCodeEntity_o **)&item[1].fields.selectNum;
          this->fields.selectShowStatusUserCmdCode = v11;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.selectShowStatusUserCmdCode,
            (int32_t)v11,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17);
          scrollView = (UnityEngine_Behaviour_o *)this->fields.combineRootComponent;
          if ( scrollView )
          {
            CombineRootComponent__ShowCommandCodeStatus((CombineRootComponent_o *)scrollView, 0);
            return;
          }
        }
LABEL_14:
        sub_2213CDC(scrollView, v7);
      }
      sub_221405C(item, CombineCommandCodeListViewItem_TypeInfo, v8);
    }
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
      sub_2213CDC(v18, v19);
    }
    goto LABEL_14;
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5974A2C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A2C = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
          sub_2213CDC(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v10, v11, v12, v13, v14, v15);
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
  System_String_o *v15; // x1

  if ( (byte_5974A2B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineCommandCodeListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_5974A2B = 1;
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
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_CombineCommandCodeListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      CombineCommandCodeListViewObject__Init_55728172((CombineCommandCodeListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_2213CDC(ObjectList, v8);
  }
  v15 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v15, delay, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineCommandCodeListViewManager__SetDecideButtonStatus(
        CombineCommandCodeListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_o *decideButton; // x0

  decideButton = this->fields.decideButton;
  if ( !decideButton
    || (((void (__fastcall *)(struct UICommonButton_o *, bool, const MethodInfo *))decideButton->klass->vtable._5_set_isEnabled.methodPtr)(
          decideButton,
          isEnable,
          decideButton->klass->vtable._5_set_isEnabled.method),
        (decideButton = this->fields.decideButton) == 0) )
  {
    sub_2213CDC(decideButton, isEnable);
  }
  decideButton->klass->vtable._14_SetState.methodPtr();
}


void CombineCommandCodeListViewManager__SetFilterButtonImage(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_5974A38 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18255/*"btn_filter_on"*/);
    sub_2213A60(&StringLiteral_18254/*"btn_filter"*/);
    byte_5974A38 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_2213CDC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_18254/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_18255/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void CombineCommandCodeListViewManager__SetMode(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  CombineCommandCodeListViewManager__SetMode_55727548(this, mode, v10);
}


void CombineCommandCodeListViewManager__SetMode_55727548(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *scrollView; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  UnityEngine_Behaviour_o *v9; // x0
  int32_t v10; // w1

  if ( (byte_5974A2A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A2A = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v9 )
      goto LABEL_17;
    if ( UnityEngine_Behaviour__get_enabled(v9, 0) )
      goto LABEL_11;
    v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v9
      || (UnityEngine_Behaviour__set_enabled(v9, 1, 0), (v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0) )
    {
LABEL_17:
      sub_2213CDC(v9, v7);
    }
    UIScrollView__UpdatePosition((UIScrollView_o *)v9, 0);
  }
LABEL_11:
  if ( (mode & 0xFFFFFFFE) == 2 )
  {
    if ( mode == 2 )
      v10 = 2;
    else
      v10 = 3;
    CombineCommandCodeListViewManager__RequestListObject(this, v10, 0.0, v8);
  }
}


void CombineCommandCodeListViewManager__SetObjectItem(
        CombineCommandCodeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_5974A29 & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewObject_TypeInfo);
    byte_5974A29 = 1;
  }
  if ( obj
    && (naturalAligment = CombineCommandCodeListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (CombineCommandCodeListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == CombineCommandCodeListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 3 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  CombineCommandCodeListViewObject__Init_55727424(
    (CombineCommandCodeListViewObject_o *)v7,
    v8,
    (const MethodInfo *)item);
}


void CombineCommandCodeListViewManager__SetSelectedCommandCodeData(
        CombineCommandCodeListViewManager_o *this,
        CombineCommandCodeListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *selectedCommandCode; // x0
  System_String_o *MargeExplanation_50621816; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v17; // q1
  char v18; // w1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-60h]
  System_String_array *explanationList; // [xsp+48h] [xbp-38h] BYREF
  System_String_array *titleList; // [xsp+50h] [xbp-30h] BYREF
  System_Int32_array *idList; // [xsp+58h] [xbp-28h] BYREF

  if ( (byte_5974A24 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974A24 = 1;
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
            CombineCommandCodeListViewManager__SetDecideButtonStatus(this, 0, v19);
            selectedCommandCode = (UnityEngine_Component_o *)this->fields.equippedInfo;
            if ( selectedCommandCode )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 0, 0);
              return;
            }
          }
        }
      }
    }
    goto LABEL_30;
  }
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.selectedCommandCode;
  if ( !selectedCommandCode )
    goto LABEL_30;
  selectedCommandCode = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectedCommandCode, 0);
  if ( !selectedCommandCode )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 1, 0);
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.selectedCommandCode;
  if ( !selectedCommandCode )
    goto LABEL_30;
  ServantFaceIconComponent__Set_48056984(
    (ServantFaceIconComponent_o *)selectedCommandCode,
    item->fields.userCommandCode,
    0,
    0,
    0);
  selectedCommandCode = (UnityEngine_Component_o *)item->fields.userCommandCode;
  if ( !selectedCommandCode )
    goto LABEL_30;
  UserCommandCodeEntity__GetSkillInfo(
    (UserCommandCodeEntity_o *)selectedCommandCode,
    &idList,
    &titleList,
    &explanationList,
    0);
  MargeExplanation_50621816 = SkillInfo__GetMargeExplanation_50621816(explanationList, 0);
  this->fields.selectItem = item;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectItem, (int32_t)item, v7, v8, v9, v10, v11, v12);
  if ( !titleList )
    goto LABEL_30;
  if ( !LODWORD(titleList->max_length) )
    sub_2213CE4(selectedCommandCode);
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.skillName;
  if ( !selectedCommandCode )
    goto LABEL_30;
  UILabel__set_text((UILabel_o *)selectedCommandCode, titleList->m_Items[0], 0);
  WrapControlText__textAdjust(this->fields.skillMessage, MargeExplanation_50621816, 22, 0, 0);
  selectItem = this->fields.selectItem;
  if ( selectItem && (userCommandCode = selectItem->fields.userCommandCode) != 0 )
  {
    v17 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v22.fields.fakeValue = v17;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    v21 = v22;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v21, 0) != this->fields.nowEquipedUserCommandCodeId;
  }
  else
  {
    v18 = 1;
  }
  CombineCommandCodeListViewManager__SetDecideButtonStatus(this, v18, v14);
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.equippedInfo;
  if ( item->fields.isEquiped )
  {
    if ( selectedCommandCode )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 1, 0);
      CombineUtility__SetCommandCodeEquippedInfoLabel(
        this->fields.equippedLabel,
        this->fields.nameLabel,
        item->fields._EquipedSvtId_k__BackingField,
        item->fields._EquipedSvtId_k__BackingField != item->fields._BaseSvtId_k__BackingField,
        v20);
      return;
    }
LABEL_30:
    sub_2213CDC(selectedCommandCode, item);
  }
  if ( !selectedCommandCode )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 0, 0);
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

  if ( (byte_5974A3C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18395/*"btn_txt_up"*/);
    sub_2213A60(&StringLiteral_18344/*"btn_txt_new"*/);
    sub_2213A60(&StringLiteral_18334/*"btn_txt_down"*/);
    sub_2213A60(&StringLiteral_18352/*"btn_txt_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_5974A3C = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_18352/*"btn_txt_old"*/ : &StringLiteral_18344/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_18395/*"btn_txt_up"*/ : &StringLiteral_18334/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_2213CDC(sort, v4);
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
  __int64 v9; // x1
  int32_t v10; // w8
  UILabel_o *v11; // x20
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v16; // q1
  bool v17; // w1
  UILabel_o *combineInfoMsgLb; // x20
  __int64 *v19; // x8
  const MethodInfo *v20; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-40h]

  if ( (byte_5974A23 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&StringLiteral_18417/*"button_allchoice_reg"*/);
    sub_2213A60(&StringLiteral_18420/*"button_alllock_unreg"*/);
    sub_2213A60(&StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_2213A60(&StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_2213A60(&StringLiteral_18433/*"button_select_reg"*/);
    sub_2213A60(&StringLiteral_3721/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/);
    sub_2213A60(&StringLiteral_18434/*"button_select_unreg"*/);
    sub_2213A60(&StringLiteral_18419/*"button_alllock_reg"*/);
    sub_2213A60(&StringLiteral_18418/*"button_allchoice_unreg"*/);
    byte_5974A23 = 1;
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
  v6 = &StringLiteral_18433/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_18434/*"button_select_unreg"*/;
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
  v7 = &StringLiteral_18420/*"button_alllock_unreg"*/;
  if ( modeKind == 1 )
    v7 = &StringLiteral_18419/*"button_alllock_reg"*/;
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
  v8 = &StringLiteral_18418/*"button_allchoice_unreg"*/;
  if ( modeKind == 2 )
    v8 = &StringLiteral_18417/*"button_allchoice_reg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v8, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  v10 = this->fields.modeKind;
  if ( v10 == 2 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    v19 = &StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
LABEL_38:
    statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v19, 0);
    if ( combineInfoMsgLb )
    {
      UILabel__set_text(combineInfoMsgLb, (System_String_o *)statusTabButton, 0);
      CombineCommandCodeListViewManager__SetDecideButtonStatus(this, 0, v20);
      return;
    }
    goto LABEL_43;
  }
  if ( v10 == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    v19 = &StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
    goto LABEL_38;
  }
  if ( v10 )
    return;
  v11 = this->fields.combineInfoMsgLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3721/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, 0);
  if ( !v11 )
LABEL_43:
    sub_2213CDC(statusTabButton, *(_QWORD *)&modeKind);
  UILabel__set_text(v11, (System_String_o *)statusTabButton, 0);
  selectItem = this->fields.selectItem;
  if ( selectItem && (userCommandCode = selectItem->fields.userCommandCode) != 0 )
  {
    v16 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v22.fields.fakeValue = v16;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    v21 = v22;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v21, 0) != this->fields.nowEquipedUserCommandCodeId;
  }
  else
  {
    v17 = 0;
  }
  CombineCommandCodeListViewManager__SetDecideButtonStatus(this, v17, v13);
}


void CombineCommandCodeListViewManager__StatusRequest(
        CombineCommandCodeListViewManager_o *this,
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1
  System_Int64_array *v17; // x1
  System_Int64_array *v18; // x2
  bool v19; // w3
  bool v20; // w4
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  __int64 v28; // x1
  System_Int64_array *v29; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5974A33 & 1) == 0 )
  {
    sub_2213A60(&Method_CombineCommandCodeListViewManager_EndStatusSync__);
    sub_2213A60(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5974A33 = 1;
  }
  modeKind = this->fields.modeKind;
  unlockList = 0;
  lockList = 0;
  v29 = 0;
  choiceList = 0;
  if ( modeKind == 2 )
  {
    if ( CombineCommandCodeListViewManager__GetSwapChoiceList(this, &choiceList, &v29, v3) )
    {
      this->fields.requestCallback = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28);
      Request_object = NetworkManager__getRequest_object_(
                         v27,
                         (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
      if ( Request_object )
      {
        v18 = v29;
        v17 = choiceList;
        v19 = 0;
        v20 = 1;
        goto LABEL_15;
      }
LABEL_19:
      sub_2213CDC(Request_object, v16);
    }
  }
  else if ( modeKind == 1 && CombineCommandCodeListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
      (int32_t)callback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndStatusSync__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    if ( Request_object )
    {
      v18 = unlockList;
      v17 = lockList;
      v19 = 1;
      v20 = 0;
LABEL_15:
      CommandCodeStatusSyncRequest__beginRequest(
        (CommandCodeStatusSyncRequest_o *)Request_object,
        v17,
        v18,
        v19,
        v20,
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
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x0
  bool v9; // zf
  CombineCommandCodeListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_5974A1E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_5974A1E = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v9 = v8 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7);
  CombineCommandCodeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CombineCommandCodeListViewObject__o *CombineCommandCodeListViewManager__get_ClippingObjectList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *Component_object; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  int size; // w23
  int32_t v8; // w21
  __int64 v9; // x1
  Il2CppObject *Item; // x22
  Il2CppObject *v11; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0

  if ( (byte_5974A21 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A21 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_22;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Component_object = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !Component_object )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               Component_object,
               v8,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                        (UnityEngine_Object_o *)Item,
                                                                        0,
                                                                        0);
      if ( ((unsigned __int8)Component_object & 1) == 0 )
      {
        if ( !Item )
          break;
        Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          (UnityEngine_GameObject_o *)Item,
                                                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
        if ( !Component_object )
          break;
        v11 = (Il2CppObject *)Component_object;
        Component_object = (System_Collections_Generic_List_object__o *)CombineCommandCodeListViewObject__GetItem(
                                                                          (CombineCommandCodeListViewObject_o *)Component_object,
                                                                          v5);
        if ( !Component_object )
          break;
        v5 = (const MethodInfo *)Component_object;
        if ( !LOBYTE(Component_object[2].fields._items)
          || (Component_object = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_50835204(
                                                                                (ListViewManager_o *)this,
                                                                                (ListViewItem_o *)Component_object,
                                                                                0),
              ((unsigned __int8)Component_object & 1) != 0) )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          v20 = v3->fields._size;
          if ( (unsigned int)v20 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v11,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + v20;
            v3->fields._size = v20 + 1;
            v21[4] = (Il2CppClass *)v11;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v11, v12, v13, v14, v15, v16, v17);
          }
        }
      }
      if ( size == ++v8 )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v3;
    }
LABEL_22:
    sub_2213CDC(Component_object, v5);
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
  System_Collections_Generic_List_object__o *Component_object; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  int size; // w23
  int32_t v8; // w21
  __int64 v9; // x1
  Il2CppObject *Item; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  System_Collections_Generic_List_object__o *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_5974A20 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A20 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Component_object = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !Component_object )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               Component_object,
               v8,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                        (UnityEngine_Object_o *)Item,
                                                                        0,
                                                                        0);
      if ( ((unsigned __int8)Component_object & 1) == 0 )
      {
        if ( !Item )
          break;
        Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          (UnityEngine_GameObject_o *)Item,
                                                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v18 = Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v19 = v3->fields._size;
        v20 = Component_object;
        if ( (unsigned int)v19 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)Component_object,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + v19;
          v3->fields._size = v19 + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
        }
      }
      if ( size == ++v8 )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v3;
    }
LABEL_18:
    sub_2213CDC(Component_object, v5);
  }
  return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v3;
}


void CombineCommandCodeListViewManager__remove_callbackFunc2(
        CombineCommandCodeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x0
  bool v9; // zf
  CombineCommandCodeListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_5974A1F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_5974A1F = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v9 = v8 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7);
  CombineCommandCodeListViewManager__get_ObjectList(v10, v11);
}


void CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
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
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2014928;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20148E0;
}


System_IAsyncResult_o *CombineCommandCodeListViewManager_RequestCallbackFunc__BeginInvoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void CombineCommandCodeListViewManager_RequestCallbackFunc__EndInvoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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