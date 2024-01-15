void __fastcall CombineCommandCodeListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *v4; // x0
  System_String_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  ListViewSort_o *v10; // x20
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int v18; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F9AD9 & 1) == 0 )
  {
    sub_B16FFC(&CombineCommandCodeListViewManager_TypeInfo, v1);
    sub_B16FFC(&ListViewSort_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_4137/*"CombineCommandCode"*/, v3);
    byte_40F9AD9 = 1;
  }
  v18 = 1;
  v4 = System_Int32__ToString((int32_t)&v18, 0LL);
  v5 = System_String__Concat_43743732((System_String_o *)StringLiteral_4137/*"CombineCommandCode"*/, v4, 0LL);
  v10 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v6, v7, v8, v9);
  ListViewSort___ctor_30208480(v10, v5, 2, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)CombineCommandCodeListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B16F98(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall CombineCommandCodeListViewManager___ctor(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__CreateList(
        CombineCommandCodeListViewManager_o *this,
        int32_t baseSvtId,
        int64_t beforeSelectedUserCommandCodeId,
        int64_t nowEquipedUserCommandCodeId,
        int32_t modeKind,
        int32_t commandCardType,
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
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsActiveBgTxt; // w0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  CombineCommandCodeListViewManager_c *v50; // x0
  struct ListViewSort_o **p_commandCodeSortInfo; // x8
  struct ListViewSort_o *v52; // x1
  ListViewSort_o **p_sort; // x26
  const MethodInfo *v54; // x2
  WebViewManager_o *Instance; // x0
  UserCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  BalanceConfig_c *v63; // x8
  struct BalanceConfig_StaticFields *static_fields; // x10
  unsigned int iconScaleKind; // w8
  int CommandCodeFrameMax; // w24
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *scaleChangeButtonSprite; // x20
  System_String_o *ScaleKindSpriteName; // x0
  UserServantCommandCodeMaster_o *Master_WarQuestSelectionMaster; // x0
  UserServantCommandCodeMaster_o *v72; // x27
  System_Collections_Generic_List_long__o *EquipedCommandCodeList; // x0
  UserCommandCodeEntity_array *v74; // x9
  __int64 v75; // x19
  System_Collections_Generic_List_long__o *v76; // x28
  il2cpp_array_size_t v77; // w19
  int v78; // w20
  UserCommandCodeEntity_o *v79; // x23
  __int128 v80; // q1
  int64_t EquippedCommandCodeDic; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  __int128 v84; // q1
  int64_t v85; // x0
  UnityEngine_GameObject_o *v86; // x0
  int v87; // w27
  UserCommandCodeEntity_array *v88; // x8
  System_Collections_Generic_Dictionary_long__long__o *v89; // x25
  __int64 v90; // x23
  UserCommandCodeEntity_o *v91; // x27
  __int128 v92; // q1
  int64_t v93; // x0
  UserCommandCodeEntity_Fields *p_fields; // x19
  bool v95; // w0
  __int128 v96; // q0
  bool v97; // w28
  int64_t v98; // x0
  __int128 v99; // q1
  int64_t v100; // x0
  int32_t Item; // w21
  __int128 v102; // q1
  int64_t v103; // x20
  bool v104; // w22
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  CombineCommandCodeListViewItem_o *v109; // x20
  const MethodInfo *v110; // x7
  __int128 v111; // q1
  int64_t v112; // x0
  const MethodInfo *v113; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  UnityEngine_GameObject_o *emptyMessageBase; // x0
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v117; // x0
  UISprite_o *commandCardTypeSprite; // x0
  __int64 *v119; // x8
  UILabel_o *commandCodeInfoLabel; // x20
  System_String_o *v121; // x21
  Il2CppObject *v122; // x22
  Il2CppObject *v123; // x0
  System_String_o *v124; // x0
  const MethodInfo *v125; // x2
  const MethodInfo *v126; // x1
  int32_t v127; // [xsp+10h] [xbp-1A0h]
  int32_t v128; // [xsp+14h] [xbp-19Ch]
  bool v129; // [xsp+20h] [xbp-190h]
  CombineCommandCodeListViewManager_o *v132; // [xsp+30h] [xbp-180h]
  int v133; // [xsp+38h] [xbp-178h]
  UserCommandCodeEntity_array *List; // [xsp+40h] [xbp-170h]
  int v135; // [xsp+4Ch] [xbp-164h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v138; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v139; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v140; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v141; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v142; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v143; // [xsp+130h] [xbp-80h] BYREF

  if ( (byte_40F9ABD & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&baseSvtId);
    sub_B16FFC(&CombineCommandCodeListViewItem_TypeInfo, v11);
    sub_B16FFC(&CombineCommandCodeListViewManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___, v14);
    sub_B16FFC(&DataManager_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__, v17);
    sub_B16FFC(&int_TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Contains__, v20);
    sub_B16FFC(&LocalizationManager_TypeInfo, v21);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B16FFC(&StringLiteral_19355/*"img_bg_arts"*/, v24);
    sub_B16FFC(&StringLiteral_3218/*"COMMAND_CODE_EMPTY"*/, v25);
    sub_B16FFC(&StringLiteral_19357/*"img_bg_buster"*/, v26);
    sub_B16FFC(&StringLiteral_19366/*"img_bg_quick"*/, v27);
    sub_B16FFC(&StringLiteral_12413/*"SUM_INFO"*/, v28);
    byte_40F9ABD = 1;
  }
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_101;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_101;
  UnityEngine_GameObject__SetActive(gameObject, IsActiveBgTxt, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.selectShowStatusUserCmdCode = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectShowStatusUserCmdCode,
    0LL,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.selectItem = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectItem, 0LL, v38, v39, v40, v41, v42, v43);
  this->fields.nowEquipedUserCommandCodeId = nowEquipedUserCommandCodeId;
  v50 = CombineCommandCodeListViewManager_TypeInfo;
  if ( (BYTE3(CombineCommandCodeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineCommandCodeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineCommandCodeListViewManager_TypeInfo);
    v50 = CombineCommandCodeListViewManager_TypeInfo;
  }
  p_commandCodeSortInfo = &v50->static_fields->commandCodeSortInfo;
  v52 = *p_commandCodeSortInfo;
  this->fields.sort = *p_commandCodeSortInfo;
  p_sort = &this->fields.sort;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v52,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  if ( !this->fields.sort )
    goto LABEL_101;
  this->fields.sort->fields.listViewKind = 3;
  if ( !*p_sort )
    goto LABEL_101;
  ListViewSort__Load(*p_sort, 0LL);
  CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0LL, v54);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  MasterData_WarQuestSelectionMaster = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_101;
  List = UserCommandCodeMaster__getList(MasterData_WarQuestSelectionMaster, 0LL);
  v63 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v63 = BalanceConfig_TypeInfo;
  }
  if ( !*p_sort )
    goto LABEL_101;
  static_fields = v63->static_fields;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  CommandCodeFrameMax = static_fields->CommandCodeFrameMax;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_22;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_22;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_22:
    this->fields.seed = normalSizeSeed;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_101;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  ScaleKindSpriteName = ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_101;
  UISprite__set_spriteName(scaleChangeButtonSprite, ScaleKindSpriteName, 0LL);
  v132 = this;
  if ( List && *(_QWORD *)&List->max_length )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      v72 = Master_WarQuestSelectionMaster;
      v127 = commandCardType;
      v128 = modeKind;
      EquipedCommandCodeList = UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                                 Master_WarQuestSelectionMaster,
                                 0LL);
      v74 = List;
      v129 = 0;
      v75 = *(_QWORD *)&List->max_length;
      v133 = v75;
      if ( CommandCodeFrameMax <= (int)v75 && (int)v75 >= 1 )
      {
        v76 = EquipedCommandCodeList;
        v77 = 0;
        v78 = 0;
        while ( 1 )
        {
          v79 = v74->m_Items[v77];
          if ( !v79 )
            goto LABEL_101;
          v80 = *(_OWORD *)&v79->fields.id.fields.fakeValue;
          *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)&v79->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v143.fields.fakeValue = v80;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v142 = v143;
          EquippedCommandCodeDic = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v142, 0LL);
          if ( EquippedCommandCodeDic == nowEquipedUserCommandCodeId )
            goto LABEL_46;
          v84 = *(_OWORD *)&v79->fields.id.fields.fakeValue;
          *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)&v79->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v143.fields.fakeValue = v84;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v141 = v143;
          v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v141, 0LL);
          if ( !v76 )
            goto LABEL_101;
          EquippedCommandCodeDic = System_Collections_Generic_List_long___Contains(
                                     v76,
                                     v85,
                                     (const MethodInfo_2F168F4 *)Method_System_Collections_Generic_List_long__Contains__);
          if ( (EquippedCommandCodeDic & 1) == 0 )
          {
LABEL_46:
            v74 = List;
          }
          else
          {
            v74 = List;
            if ( ++v78 >= CommandCodeFrameMax )
            {
              v129 = 1;
              goto LABEL_53;
            }
          }
          if ( (int)++v77 >= v133 )
            break;
          if ( v77 >= v74->max_length )
            goto LABEL_102;
        }
        v129 = 0;
LABEL_53:
        LODWORD(v75) = v133;
      }
      EquippedCommandCodeDic = (int64_t)UserServantCommandCodeMaster__GetEquippedCommandCodeDic(v72, 0LL);
      v88 = List;
      v87 = v75;
      if ( (int)v75 >= 1 )
      {
        v89 = (System_Collections_Generic_Dictionary_long__long__o *)EquippedCommandCodeDic;
        v90 = 0LL;
        while ( (unsigned int)v90 < v88->max_length )
        {
          v91 = List->m_Items[v90];
          if ( !v91 )
            goto LABEL_101;
          v92 = *(_OWORD *)&v91->fields.id.fields.fakeValue;
          *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)&v91->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v143.fields.fakeValue = v92;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v140 = v143;
          v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v140, 0LL);
          if ( !v89 )
            goto LABEL_101;
          p_fields = &v91->fields;
          v95 = System_Collections_Generic_Dictionary_long__long___ContainsKey(
                  v89,
                  v93,
                  (const MethodInfo_2E0F100 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
          v96 = *(_OWORD *)&v91->fields.id.fields.fakeValue;
          v97 = v95;
          *(_OWORD *)&v139.fields.currentCryptoKey = *(_OWORD *)&v91->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v139.fields.fakeValue = v96;
          v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v139, 0LL);
          if ( System_Collections_Generic_Dictionary_long__long___ContainsKey(
                 v89,
                 v98,
                 (const MethodInfo_2E0F100 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__) )
          {
            v99 = *(_OWORD *)&v91->fields.id.fields.fakeValue;
            *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v143.fields.fakeValue = v99;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v138 = v143;
            v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v138, 0LL);
            Item = System_Collections_Generic_Dictionary_long__long___get_Item(
                     v89,
                     v100,
                     (const MethodInfo_2E0EDC8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
          }
          else
          {
            Item = 0;
          }
          v102 = *(_OWORD *)&v91->fields.id.fields.fakeValue;
          v103 = this->fields.nowEquipedUserCommandCodeId;
          *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
          *(_OWORD *)&v143.fields.fakeValue = v102;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v137 = v143;
          v104 = v103 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v137, 0LL);
          v109 = (CombineCommandCodeListViewItem_o *)sub_B170CC(
                                                       CombineCommandCodeListViewItem_TypeInfo,
                                                       v105,
                                                       v106,
                                                       v107,
                                                       v108);
          CombineCommandCodeListViewItem___ctor(v109, v91, v104, v97, Item, baseSvtId, v129, v110);
          v111 = *(_OWORD *)&v91->fields.id.fields.fakeValue;
          *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
          *(_OWORD *)&v143.fields.fakeValue = v111;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v136 = v143;
          v112 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v136, 0LL);
          v87 = v133;
          if ( !v109 )
            goto LABEL_101;
          this = v132;
          if ( v112 == beforeSelectedUserCommandCodeId )
          {
            v109->fields.isSelect = 1;
            CombineCommandCodeListViewManager__SetSelectedCommandCodeData(v132, v109, v113);
          }
          else
          {
            v109->fields.isSelect = 0;
          }
          itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v132->fields.itemList;
          if ( !itemList )
            goto LABEL_101;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            itemList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v109,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          v88 = List;
          if ( (int)++v90 >= v133 )
            goto LABEL_80;
        }
LABEL_102:
        sub_B17100(EquippedCommandCodeDic, v82, v83);
        sub_B170A0();
      }
LABEL_80:
      emptyMessageBase = this->fields.emptyMessageBase;
      if ( emptyMessageBase )
      {
        UnityEngine_GameObject__SetActive(emptyMessageBase, 0, 0LL);
        commandCardType = v127;
        modeKind = v128;
        goto LABEL_82;
      }
    }
LABEL_101:
    sub_B170D4();
  }
  v86 = this->fields.emptyMessageBase;
  if ( !v86 )
    goto LABEL_101;
  UnityEngine_GameObject__SetActive(v86, 1, 0LL);
  v87 = 0;
LABEL_82:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v117 = LocalizationManager__Get((System_String_o *)StringLiteral_3218/*"COMMAND_CODE_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_101;
  UILabel__set_text(emptyMessageLabel, v117, 0LL);
  switch ( commandCardType )
  {
    case 1:
      commandCardTypeSprite = this->fields.commandCardTypeSprite;
      if ( !commandCardTypeSprite )
        goto LABEL_101;
      v119 = &StringLiteral_19355/*"img_bg_arts"*/;
      goto LABEL_95;
    case 3:
      commandCardTypeSprite = this->fields.commandCardTypeSprite;
      if ( !commandCardTypeSprite )
        goto LABEL_101;
      v119 = &StringLiteral_19366/*"img_bg_quick"*/;
      goto LABEL_95;
    case 2:
      commandCardTypeSprite = this->fields.commandCardTypeSprite;
      if ( !commandCardTypeSprite )
        goto LABEL_101;
      v119 = &StringLiteral_19357/*"img_bg_buster"*/;
LABEL_95:
      UISprite__set_spriteName(commandCardTypeSprite, (System_String_o *)*v119, 0LL);
      break;
  }
  commandCodeInfoLabel = this->fields.commandCodeInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v121 = LocalizationManager__Get((System_String_o *)StringLiteral_12413/*"SUM_INFO"*/, 0LL);
  LODWORD(v143.fields.currentCryptoKey) = v87;
  v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v143);
  v135 = CommandCodeFrameMax;
  v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v135);
  v124 = System_String__Format_43739268(v121, v122, v123, 0LL);
  if ( !commandCodeInfoLabel )
    goto LABEL_101;
  UILabel__set_text(commandCodeInfoLabel, v124, 0LL);
  CombineCommandCodeListViewManager__SetStatusKind(v132, modeKind, v125);
  ListViewManager__SortItem((ListViewManager_o *)v132, -1, 0, -1, 0LL);
  CombineCommandCodeListViewManager__SetFilterButtonImage(v132, v126);
}


void __fastcall CombineCommandCodeListViewManager__DestroyList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  this->fields.selectShowStatusUserCmdCode = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectShowStatusUserCmdCode, 0LL, v3, v4, v5, v6, v7, v8);
  sort = this->fields.sort;
  if ( !sort )
    sub_B170D4();
  ListViewSort__Save(sort, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__EndClickTabChoice(
        CombineCommandCodeListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  CombineCommandCodeListViewManager__SetStatusKind(this, 2, method);
  CombineCommandCodeListViewManager__ModifyList(this, 0, v4);
  CombineCommandCodeListViewManager__SetMode_24433756(this, 3, v5);
}


void __fastcall CombineCommandCodeListViewManager__EndClickTabLock(
        CombineCommandCodeListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  CombineCommandCodeListViewManager__SetStatusKind(this, 1, method);
  CombineCommandCodeListViewManager__ModifyList(this, 0, v4);
  CombineCommandCodeListViewManager__SetMode_24433756(this, 3, v5);
}


void __fastcall CombineCommandCodeListViewManager__EndClickTabStatus(
        CombineCommandCodeListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  CombineCommandCodeListViewManager__SetStatusKind(this, 0, method);
  CombineCommandCodeListViewManager__ModifyList(this, 0, v4);
  CombineCommandCodeListViewManager__SetMode_24433756(this, 3, v5);
}


void __fastcall CombineCommandCodeListViewManager__EndCloseSelectFilterKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__EndSelectFilterKind(
        CombineCommandCodeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40F9AD2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40F9AD2 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    CombineCommandCodeListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__,
    0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantFilterSelectMenu(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__EndSelectSortKind(
        CombineCommandCodeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F9AD5 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40F9AD5 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__EndStatusSync(
        CombineCommandCodeListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  BattleServantConfConponent_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (BattleServantConfConponent_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0LL;
    sub_B16F98(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CombineCommandCodeListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CombineCommandCodeListViewManager__GetCommandCodeAmountSortValue(
        CombineCommandCodeListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v9; // x21
  unsigned __int64 v10; // x23
  ListViewItem_o *v11; // x8
  __int64 v12; // x11
  __int64 v13; // x11
  CombineCommandCodeListViewItem_o *v14; // x0

  if ( (byte_40F9AD8 & 1) == 0 )
  {
    sub_B16FFC(&CombineCommandCodeListViewItem_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    byte_40F9AD8 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = 0LL;
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v11 = itemList->fields._items->m_Items[v10];
      if ( !v11 )
        break;
      v12 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (CombineCommandCodeListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      v13 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v13 )
      {
        if ( (CombineCommandCodeListViewItem_c *)v11->klass->_2.typeHierarchy[v13 - 1] == CombineCommandCodeListViewItem_TypeInfo )
          v14 = (CombineCommandCodeListViewItem_o *)itemList->fields._items->m_Items[v10];
        else
          v14 = 0LL;
      }
      else
      {
        v14 = 0LL;
      }
      ++v10;
      if ( CombineCommandCodeListViewItem__get_CommandCodeId(v14, *(const MethodInfo **)&commandCodeId) == commandCodeId )
        ++v9;
      if ( (__int64)v10 >= size )
        return v9;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
CombineCommandCodeListViewItem_o *__fastcall CombineCommandCodeListViewManager__GetItem(
        CombineCommandCodeListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40F9AC3 & 1) == 0 )
  {
    sub_B16FFC(&CombineCommandCodeListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_40F9AC3 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (CombineCommandCodeListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == CombineCommandCodeListViewItem_TypeInfo )
    return (CombineCommandCodeListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


CombineCommandCodeListViewItem_o *__fastcall CombineCommandCodeListViewManager__GetSelectItem(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectItem;
}


UserCommandCodeEntity_o *__fastcall CombineCommandCodeListViewManager__GetSelectMaterialUserCmdCode(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectShowStatusUserCmdCode;
}


bool __fastcall CombineCommandCodeListViewManager__GetSwapChoiceList(
        CombineCommandCodeListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v29; // x25
  ListViewItem_o *v30; // x8
  __int64 v31; // x11
  __int64 v32; // x9
  __int128 v33; // q0
  int64_t v34; // x0
  const MethodInfo_2F164A0 *v35; // x2
  int64_t v36; // x1
  System_Collections_Generic_List_long__o *v37; // x0
  __int128 v38; // q0
  int64_t v39; // x0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-70h]

  if ( (byte_40F9ACA & 1) == 0 )
  {
    sub_B16FFC(&CombineCommandCodeListViewItem_TypeInfo, choiceList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_40F9ACA = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = itemList->fields._items->m_Items[v29];
      if ( !v30 )
        break;
      v31 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (CombineCommandCodeListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      v32 = *(_QWORD *)&v30[1].fields.selectNum;
      if ( v32 && BYTE6(v30[1].klass) )
      {
        if ( BYTE2(v30[1].klass) )
        {
          v33 = *(_OWORD *)(v32 + 32);
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)(v32 + 16);
          *(_OWORD *)&v64.fields.fakeValue = v33;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v63 = v64;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
          if ( !v20 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v34;
          v37 = v20;
        }
        else
        {
          v38 = *(_OWORD *)(v32 + 32);
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)(v32 + 16);
          *(_OWORD *)&v64.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v62 = v64;
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v62, 0LL);
          if ( !v15 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v39;
          v37 = v15;
        }
        System_Collections_Generic_List_long___Add(v37, v36, v35);
      }
      if ( (__int64)++v29 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B170D4();
  }
LABEL_28:
  if ( !v15 || !v20 )
    goto LABEL_33;
  if ( v20->fields._size + v15->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)choiceList, 0LL, v21, v22, v23, v24, v25, v26);
    *unchoiceList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)unchoiceList, 0LL, v55, v56, v57, v58, v59, v60);
    return 0;
  }
  else
  {
    v40 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v40;
    sub_B16F98((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v47;
    sub_B16F98((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    return 1;
  }
}


bool __fastcall CombineCommandCodeListViewManager__GetSwapLockList(
        CombineCommandCodeListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v29; // x25
  ListViewItem_o *v30; // x8
  __int64 v31; // x11
  __int64 v32; // x9
  __int128 v33; // q0
  int64_t v34; // x0
  const MethodInfo_2F164A0 *v35; // x2
  int64_t v36; // x1
  System_Collections_Generic_List_long__o *v37; // x0
  __int128 v38; // q0
  int64_t v39; // x0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-70h]

  if ( (byte_40F9AC9 & 1) == 0 )
  {
    sub_B16FFC(&CombineCommandCodeListViewItem_TypeInfo, lockList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_40F9AC9 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = itemList->fields._items->m_Items[v29];
      if ( !v30 )
        break;
      v31 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (CombineCommandCodeListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      v32 = *(_QWORD *)&v30[1].fields.selectNum;
      if ( v32 && BYTE5(v30[1].klass) )
      {
        if ( BYTE1(v30[1].klass) )
        {
          v33 = *(_OWORD *)(v32 + 32);
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)(v32 + 16);
          *(_OWORD *)&v64.fields.fakeValue = v33;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v63 = v64;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
          if ( !v20 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v34;
          v37 = v20;
        }
        else
        {
          v38 = *(_OWORD *)(v32 + 32);
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)(v32 + 16);
          *(_OWORD *)&v64.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v62 = v64;
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v62, 0LL);
          if ( !v15 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v39;
          v37 = v15;
        }
        System_Collections_Generic_List_long___Add(v37, v36, v35);
      }
      if ( (__int64)++v29 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B170D4();
  }
LABEL_28:
  if ( !v15 || !v20 )
    goto LABEL_33;
  if ( v20->fields._size + v15->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)lockList, 0LL, v21, v22, v23, v24, v25, v26);
    *unlockList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)unlockList, 0LL, v55, v56, v57, v58, v59, v60);
    return 0;
  }
  else
  {
    v40 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v40;
    sub_B16F98((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v47;
    sub_B16F98((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    return 1;
  }
}


void __fastcall CombineCommandCodeListViewManager__InitBackListView(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  CombineCommandCodeListViewManager__StatusRequest(this, 0LL, v2);
  CombineCommandCodeListViewManager__SetStatusKind(this, 0, v4);
}


void __fastcall CombineCommandCodeListViewManager__ModifyItem(
        CombineCommandCodeListViewManager_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  UserServantEntity_o *v16; // x20
  int size; // w23
  __int64 v18; // x24
  CombineCommandCodeListViewItem_o *v19; // x21
  __int64 v20; // x9
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v22; // q0
  int64_t v23; // x0
  __int128 v24; // q0
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *viewObject; // x22
  struct ListViewObject_o *v27; // x0
  CombineCommandCodeListViewManager_o *v28; // x0
  const MethodInfo *v29; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+40h] [xbp-70h]

  if ( (byte_40F9AC1 & 1) == 0 )
  {
    sub_B16FFC(&CombineCommandCodeListViewItem_TypeInfo, userCommandCodeId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F9AC1 = 1;
  }
  itemList = this->fields.itemList;
  if ( itemList )
  {
    if ( userCommandCodeId < 1 )
    {
      v16 = 0LL;
    }
    else
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
        || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       userCommandCodeId,
                       (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = this->fields.itemList) == 0LL) )
      {
LABEL_34:
        sub_B170D4();
      }
      v16 = Entity;
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v18 = 0LL;
      while ( 1 )
      {
        if ( itemList->fields._size <= (unsigned int)v18 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v19 = (CombineCommandCodeListViewItem_o *)itemList->fields._items->m_Items[v18];
        if ( v19 )
        {
          v20 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
            || (CombineCommandCodeListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != CombineCommandCodeListViewItem_TypeInfo )
          {
            break;
          }
        }
        if ( v16 )
        {
          if ( !v19 )
            goto LABEL_34;
          userCommandCode = v19->fields.userCommandCode;
          if ( !userCommandCode )
            goto LABEL_34;
          v22 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
          *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v32.fields.fakeValue = v22;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v31 = v32;
          v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v31, 0LL);
          v24 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
          *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v30.fields.fakeValue = v24;
          if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v30, 0LL) )
            CombineCommandCodeListViewItem__Modify(v19, (UserCommandCodeEntity_o *)v16, v25);
        }
        else if ( !v19 )
        {
          goto LABEL_34;
        }
        viewObject = (UnityEngine_Object_o *)v19->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v27 = v19->fields.viewObject;
          if ( !v27 )
            goto LABEL_34;
          ((void (__fastcall *)(struct ListViewObject_o *, CombineCommandCodeListViewItem_o *, Il2CppMethodPointer))v27->klass->vtable._5_SetItem.method)(
            v27,
            v19,
            v27->klass->vtable._6_SetItem.methodPtr);
        }
        if ( (int)++v18 >= size )
          return;
        itemList = this->fields.itemList;
        if ( !itemList )
          goto LABEL_34;
      }
      v28 = (CombineCommandCodeListViewManager_o *)sub_B173C8(v19);
      CombineCommandCodeListViewManager__OnClickDecide(v28, v29);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__ModifyList(
        CombineCommandCodeListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  UserCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t List; // x0
  CombineCommandCodeListViewItem_c *v13; // x1
  System_String_array **v14; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x25
  CombineCommandCodeListViewItem_c **v17; // x20
  unsigned int v18; // w27
  int64_t v19; // x26
  __int64 v20; // x8
  System_Int32_array ***v21; // x26
  __int64 v22; // t1
  __int128 v23; // q0
  int64_t v24; // x0
  int64_t v25; // x22
  __int64 v26; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v27; // x23
  CombineCommandCodeListViewItem_o *v28; // x23
  __int64 v29; // x9
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v31; // q0
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  const MethodInfo *v38; // x1
  unsigned __int64 v39; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v40; // x20
  __int64 v41; // x9
  UnityEngine_Object_o *v42; // x21
  ListViewObject_o *v43; // x0
  CombineCommandCodeListViewManager_o *v44; // x0
  int64_t v45; // x1
  const MethodInfo *v46; // x2
  __int64 v48; // [xsp+10h] [xbp-C0h]
  int64_t v49; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+60h] [xbp-70h]

  if ( (byte_40F9AC0 & 1) == 0 )
  {
    sub_B16FFC(&CombineCommandCodeListViewItem_TypeInfo, isIconSizeChange);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F9AC0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MasterData_WarQuestSelectionMaster = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_52;
  List = (int64_t)UserCommandCodeMaster__getList(MasterData_WarQuestSelectionMaster, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  size = itemList->fields._size;
  if ( !List || (v48 = *(_QWORD *)(List + 24), (int)v48 < 1) )
  {
LABEL_35:
    if ( (int)size < 1 || !isIconSizeChange )
      return;
    v39 = 0LL;
    while ( 1 )
    {
      v40 = this->fields.itemList;
      if ( !v40 )
        break;
      if ( v39 >= (unsigned int)v40->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v17 = (CombineCommandCodeListViewItem_c **)v40->fields._items->m_Items[v39];
      if ( v17 )
      {
        v41 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&(*v17)->_2.bitflags2 + 1) < (unsigned int)v41
          || (CombineCommandCodeListViewItem_c *)(*v17)->_2.typeHierarchy[v41 - 1] != CombineCommandCodeListViewItem_TypeInfo )
        {
          goto LABEL_54;
        }
        v42 = (UnityEngine_Object_o *)v17[13];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(v42, 0LL, 0LL) )
        {
          v43 = (ListViewObject_o *)v17[13];
          if ( !v43 )
            break;
          ListViewObject__SetItemSeed(v43, (ListViewItem_o *)v17, this->fields.seed, 0LL);
        }
      }
      if ( (__int64)++v39 >= size )
        return;
    }
LABEL_52:
    sub_B170D4();
  }
  if ( !(_DWORD)v48 )
    goto LABEL_34;
  v17 = &CombineCommandCodeListViewItem_TypeInfo;
  v18 = 0;
  v49 = List;
  while ( 1 )
  {
    v19 = List + 8LL * (int)v18;
    v22 = *(_QWORD *)(v19 + 32);
    v21 = (System_Int32_array ***)(v19 + 32);
    v20 = v22;
    if ( !v22 )
      goto LABEL_52;
    v23 = *(_OWORD *)(v20 + 32);
    *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
    *(_OWORD *)&v52.fields.fakeValue = v23;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v51 = v52;
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v51, 0LL);
    if ( (int)size >= 1 )
      break;
LABEL_32:
    List = v49;
    if ( (int)++v18 >= (int)v48 )
      goto LABEL_35;
    if ( v18 >= *(_DWORD *)(v49 + 24) )
      goto LABEL_34;
  }
  v25 = v24;
  v26 = 0LL;
  while ( 1 )
  {
    v27 = this->fields.itemList;
    if ( !v27 )
      goto LABEL_52;
    if ( v27->fields._size <= (unsigned int)v26 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v28 = (CombineCommandCodeListViewItem_o *)v27->fields._items->m_Items[v26];
    if ( !v28 )
      goto LABEL_52;
    v13 = CombineCommandCodeListViewItem_TypeInfo;
    v29 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (CombineCommandCodeListViewItem_c *)v28->klass->_2.typeHierarchy[v29 - 1] != CombineCommandCodeListViewItem_TypeInfo )
    {
      break;
    }
    userCommandCode = v28->fields.userCommandCode;
    if ( userCommandCode )
    {
      v31 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v52.fields.fakeValue = v31;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v50 = v52;
      List = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v50, 0LL);
      if ( List == v25 )
      {
        if ( v18 < *(_DWORD *)(v49 + 24) )
        {
          v37 = *v21;
          v28->fields.userCommandCode = (struct UserCommandCodeEntity_o *)*v21;
          sub_B16F98((BattleServantConfConponent_o *)&v28->fields.userCommandCode, v37, v14, v32, v33, v34, v35, v36);
          if ( !isIconSizeChange )
          {
            CombineCommandCodeListViewItem__ModifyLockItem(v28, (const MethodInfo *)v13);
            CombineCommandCodeListViewItem__ModifyChoiceItem(v28, v38);
          }
          goto LABEL_32;
        }
LABEL_34:
        sub_B17100(List, v13, v14);
        sub_B170A0();
      }
    }
    if ( (int)++v26 >= (int)size )
      goto LABEL_32;
  }
  sub_B173C8(v28);
LABEL_54:
  v44 = (CombineCommandCodeListViewManager_o *)sub_B173C8(v17);
  CombineCommandCodeListViewManager__ModifyItem(v44, v45, v46);
}


void __fastcall CombineCommandCodeListViewManager__OnClickChoiceTab(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  if ( (byte_40F9ACD & 1) == 0 )
  {
    sub_B16FFC(&Method_CombineCommandCodeListViewManager_EndClickTabChoice__, method);
    sub_B16FFC(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F9ACD = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.modeKind )
    {
      v9 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                        CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo,
                                                                        v5,
                                                                        v6,
                                                                        v7,
                                                                        v8);
      CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndClickTabChoice__,
        0LL);
      CombineCommandCodeListViewManager__StatusRequest(this, v9, v10);
    }
    else
    {
      CombineCommandCodeListViewManager__SetStatusKind(this, 2, v6);
      CombineCommandCodeListViewManager__ModifyList(this, 0, v11);
      CombineCommandCodeListViewManager__SetMode_24433756(this, 3, v12);
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickCollectLock(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  if ( (byte_40F9ACC & 1) == 0 )
  {
    sub_B16FFC(&Method_CombineCommandCodeListViewManager_EndClickTabLock__, method);
    sub_B16FFC(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F9ACC = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.modeKind )
    {
      v9 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                        CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo,
                                                                        v5,
                                                                        v6,
                                                                        v7,
                                                                        v8);
      CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndClickTabLock__,
        0LL);
      CombineCommandCodeListViewManager__StatusRequest(this, v9, v10);
    }
    else
    {
      CombineCommandCodeListViewManager__SetStatusKind(this, 1, v6);
      CombineCommandCodeListViewManager__ModifyList(this, 0, v11);
      CombineCommandCodeListViewManager__SetMode_24433756(this, 3, v12);
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickDecide(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v9; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  CombineRootComponent_o *combineRootComponent; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-30h]

  if ( (byte_40F9AC2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserCommandCodeMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40F9AC2 = 1;
  }
  selectItem = this->fields.selectItem;
  if ( selectItem )
  {
    userCommandCode = selectItem->fields.userCommandCode;
    if ( userCommandCode )
    {
      v9 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v13.fields.fakeValue = v9;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v12 = v13;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v12, 0LL) != this->fields.nowEquipedUserCommandCodeId )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        if ( this->fields.nowEquipedUserCommandCodeId >= 1 )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_25;
          DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            Master_WarQuestSelectionMaster,
            this->fields.nowEquipedUserCommandCodeId,
            (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        }
        combineRootComponent = this->fields.combineRootComponent;
        if ( combineRootComponent )
        {
          CombineRootComponent__ShowSelectedCommandCode(combineRootComponent, 0LL);
          return;
        }
LABEL_25:
        sub_B170D4();
      }
    }
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__OnClickFilterKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22

  if ( (byte_40F9AD1 & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_CombineCommandCodeListViewManager_EndSelectFilterKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40F9AD1 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v9,
                                                      v10,
                                                      v11,
                                                      v12);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B170D4();
    CommonUI__OpenServantFilterSelectMenu_18244592(v8, 6, sort, (ListViewManager_o *)this, v13, -1, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickListView(
        CombineCommandCodeListViewManager_o *this,
        ListViewObject_o *listviewObject,
        const MethodInfo *method)
{
  ;
}


void __fastcall CombineCommandCodeListViewManager__OnClickListView_24437868(
        CombineCommandCodeListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  struct CombineCommandCodeListViewItem_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x9
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v13; // q1
  int64_t v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  int64_t v23; // x21
  const MethodInfo *v24; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  int size; // w24
  unsigned int v27; // w25
  __int64 v28; // x9
  struct UserCommandCodeEntity_o *v29; // x8
  __int128 v30; // q0
  System_Collections_Generic_List_CombineCommandCodeListViewObject__o *ObjectList; // x0
  int v32; // w21
  System_Collections_Generic_List_CombineCommandCodeListViewObject__o *v33; // x20
  __int64 v34; // x22
  unsigned int v35; // w8
  CombineCommandCodeListViewObject_o *v36; // x0
  CombineCommandCodeListViewManager_o *v37; // x0
  ListViewItem_o *v38; // x1
  const MethodInfo *v39; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-60h]

  v3 = (struct CombineCommandCodeListViewItem_o *)item;
  if ( (byte_40F9ACF & 1) == 0 )
  {
    sub_B16FFC(&CombineCommandCodeListViewItem_TypeInfo, item);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    byte_40F9ACF = 1;
  }
  if ( v3
    && ((v11 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1),
         *(&v3->klass->_2.bitflags2 + 1) < (unsigned int)v11)
     || (CombineCommandCodeListViewItem_c *)v3->klass->_2.typeHierarchy[v11 - 1] != CombineCommandCodeListViewItem_TypeInfo) )
  {
LABEL_44:
    v37 = (CombineCommandCodeListViewManager_o *)sub_B173C8(v3);
    CombineCommandCodeListViewManager__OnLongPushListView(v37, v38, v39);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( !v3 )
      goto LABEL_43;
    userCommandCode = v3->fields.userCommandCode;
    if ( !userCommandCode )
      goto LABEL_43;
    v13 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v42.fields.fakeValue = v13;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v41 = v42;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v41, 0LL);
    if ( v3->fields.isSelect )
    {
      v3->fields.isSelect = 0;
      this->fields.selectItem = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectItem, 0LL, v15, v16, v17, v18, v19, v20);
      CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0LL, v21);
      v23 = 0LL;
    }
    else
    {
      v23 = v14;
      v3->fields.isSelect = 1;
      this->fields.selectItem = v3;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.selectItem,
        (System_Int32_array **)v3,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, v3, v24);
    }
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_43;
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v27 = 0;
      do
      {
        if ( itemList->fields._size <= v27 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v3 = (struct CombineCommandCodeListViewItem_o *)itemList->fields._items->m_Items[v27];
        if ( !v3 )
          break;
        v28 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v3->klass->_2.bitflags2 + 1) < (unsigned int)v28
          || (CombineCommandCodeListViewItem_c *)v3->klass->_2.typeHierarchy[v28 - 1] != CombineCommandCodeListViewItem_TypeInfo )
        {
          goto LABEL_44;
        }
        v29 = v3->fields.userCommandCode;
        if ( !v29 )
          break;
        v30 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
        *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v42.fields.fakeValue = v30;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v40 = v42;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v40, 0LL) != v23 )
          v3->fields.isSelect = 0;
        if ( (int)++v27 >= size )
          goto LABEL_34;
        itemList = this->fields.itemList;
      }
      while ( itemList );
LABEL_43:
      sub_B170D4();
    }
LABEL_34:
    ObjectList = CombineCommandCodeListViewManager__get_ObjectList(this, v22);
    if ( !ObjectList )
      goto LABEL_43;
    v32 = ObjectList->fields._size;
    v33 = ObjectList;
    if ( v32 >= 1 )
    {
      v34 = 0LL;
      v35 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v35 <= (unsigned int)v34 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v36 = v33->fields._items->m_Items[v34];
        if ( !v36 )
          break;
        ((void (__fastcall *)(CombineCommandCodeListViewObject_o *, bool, Il2CppMethodPointer))v36->klass->vtable._9_SetInput.method)(
          v36,
          this->fields.isInput,
          v36->klass->vtable._10_Invalidation.methodPtr);
        if ( (int)v34 + 1 >= v32 )
          return;
        v35 = v33->fields._size;
        ++v34;
      }
      goto LABEL_43;
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickNormalStatus(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40F9ACB & 1) == 0 )
  {
    sub_B16FFC(&Method_CombineCommandCodeListViewManager_EndClickTabStatus__, method);
    sub_B16FFC(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F9ACB = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v9 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                      CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo,
                                                                      v5,
                                                                      v6,
                                                                      v7,
                                                                      v8);
    CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndClickTabStatus__,
      0LL);
    CombineCommandCodeListViewManager__StatusRequest(this, v9, v10);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickScaleChange(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v11; // w8
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v13; // x0
  UISprite_o *scaleChangeButtonSprite; // x20
  System_String_o *ScaleKindSpriteName; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_40F9AC8 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9AC8 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v11 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v11 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v11 = 1;
LABEL_12:
    this->fields.scaleType = v11;
    this->fields.seed = smallSizeSeed;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType, (v13 = this->fields.sort) == 0LL)
    || (scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        ScaleKindSpriteName = ListViewSort__GetScaleKindSpriteName(v13, this->fields.scaleType, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_B170D4();
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, ScaleKindSpriteName, 0LL);
  CombineCommandCodeListViewManager__ModifyList(this, 1, v16);
  CombineCommandCodeListViewManager__SetMode_24433756(this, 3, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__OnClickSortAscendingOrder(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  if ( (byte_40F9AD6 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9AD6 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B170D4();
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickSortKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  ServantSortSelectMenu_CallbackFunc_o *v13; // x22

  if ( (byte_40F9AD4 & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_CombineCommandCodeListViewManager_EndSelectSortKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40F9AD4 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v13 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v9,
                                                    v10,
                                                    v11,
                                                    v12);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_B170D4();
    CommonUI__OpenServantSortSelectMenu(v8, 6, sort, 0, v13, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnLongPushListView(
        CombineCommandCodeListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x9
  UnityEngine_Behaviour_o *scrollView; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UserCommandCodeEntity_o *v14; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  CombineCommandCodeListViewManager_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_40F9AD0 & 1) == 0 )
  {
    sub_B16FFC(&CombineCommandCodeListViewItem_TypeInfo, item);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40F9AD0 = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( item
      && ((v6 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1),
           *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v6)
       || (CombineCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v6 - 1] != CombineCommandCodeListViewItem_TypeInfo) )
    {
      v16 = (CombineCommandCodeListViewManager_o *)sub_B173C8(item);
      CombineCommandCodeListViewManager__GetSelectItem(v16, v17);
    }
    else
    {
      scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !scrollView
        || (UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL), !item)
        || (v14 = *(struct UserCommandCodeEntity_o **)&item[1].fields.selectNum,
            this->fields.selectShowStatusUserCmdCode = v14,
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.selectShowStatusUserCmdCode,
              (System_Int32_array **)v14,
              v8,
              v9,
              v10,
              v11,
              v12,
              v13),
            (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
      {
        sub_B170D4();
      }
      CombineRootComponent__ShowCommandCodeStatus(combineRootComponent, 0LL);
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnMoveEnd(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v7; // x0
  UIScrollView_o *v8; // x0
  System_Action_o *callbackFunc2; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F9AC7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9AC7 = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v7 = this->fields.scrollView;
        if ( !v7
          || (((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
                v7,
                1LL,
                v7->klass->vtable._9_SetDragAmount.methodPtr),
              (v8 = this->fields.scrollView) == 0LL) )
        {
          sub_B170D4();
        }
        UIScrollView__UpdatePosition(v8, 0LL);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
        if ( callbackFunc2 )
          System_Action__Invoke(callbackFunc2, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__RequestListObject(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_CombineCommandCodeListViewObject__o *ObjectList; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  int32_t size; // w8
  System_Collections_Generic_List_CombineCommandCodeListViewObject__o *v17; // x21
  int v18; // w24
  __int64 v19; // x25
  unsigned int v20; // w8
  CombineCommandCodeListViewObject_o *v21; // x22
  System_Action_o *v22; // x23

  if ( (byte_40F9AC6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_CombineCommandCodeListViewManager_OnMoveEnd__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__, v9);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v10);
    byte_40F9AC6 = 1;
  }
  ObjectList = CombineCommandCodeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v17 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v18 = ObjectList->fields._size;
    if ( v18 >= 1 )
    {
      v19 = 0LL;
      v20 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v20 <= (unsigned int)v19 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v21 = v17->fields._items->m_Items[v19];
        v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
        System_Action___ctor(v22, (Il2CppObject *)this, Method_CombineCommandCodeListViewManager_OnMoveEnd__, 0LL);
        if ( !v21 )
          break;
        CombineCommandCodeListViewObject__Init_24219868(v21, mode, v22, 0LL);
        if ( (int)v19 + 1 >= v18 )
          return;
        v20 = v17->fields._size;
        ++v19;
      }
LABEL_14:
      sub_B170D4();
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__SetDecideButtonStatus(
        CombineCommandCodeListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_o *decideButton; // x0
  struct UICommonButton_o *v6; // x0
  __int64 v7; // x1

  decideButton = this->fields.decideButton;
  if ( !decideButton
    || (((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))decideButton->klass->vtable._5_set_isEnabled.method)(
          decideButton,
          isEnable,
          decideButton->klass->vtable._6_OnInit.methodPtr),
        (v6 = this->fields.decideButton) == 0LL) )
  {
    sub_B170D4();
  }
  if ( isEnable )
    v7 = 0LL;
  else
    v7 = 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v6->klass->vtable._14_SetState.method)(
    v6,
    v7,
    1LL,
    v6->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall CombineCommandCodeListViewManager__SetFilterButtonImage(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  bool v6; // w0
  System_String_o **v7; // x8

  if ( (byte_40F9AD3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16927/*"btn_filter_on"*/, method);
    sub_B16FFC(&StringLiteral_16926/*"btn_filter"*/, v3);
    byte_40F9AD3 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite, v6 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !filterSprite) )
  {
    sub_B170D4();
  }
  v7 = (System_String_o **)&StringLiteral_16926/*"btn_filter"*/;
  if ( !v6 )
    v7 = (System_String_o **)&StringLiteral_16927/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v7, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__SetMode(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CombineCommandCodeListViewManager__SetMode_24433756(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__SetMode_24433756(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v6; // x2
  UnityEngine_Behaviour_o *v7; // x0
  UnityEngine_Behaviour_o *v8; // x0
  UIScrollView_o *v9; // x0
  int32_t v10; // w1

  if ( (byte_40F9AC5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    byte_40F9AC5 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v7 )
      goto LABEL_18;
    if ( UnityEngine_Behaviour__get_enabled(v7, 0LL) )
      goto LABEL_12;
    v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v8 || (UnityEngine_Behaviour__set_enabled(v8, 1, 0LL), (v9 = this->fields.scrollView) == 0LL) )
LABEL_18:
      sub_B170D4();
    UIScrollView__UpdatePosition(v9, 0LL);
  }
LABEL_12:
  if ( mode == 2 )
  {
    v10 = 2;
LABEL_16:
    CombineCommandCodeListViewManager__RequestListObject(this, v10, 0.0, v6);
    return;
  }
  if ( mode == 3 )
  {
    v10 = 3;
    goto LABEL_16;
  }
}


void __fastcall CombineCommandCodeListViewManager__SetObjectItem(
        CombineCommandCodeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t v7; // w1

  if ( (byte_40F9AC4 & 1) == 0 )
  {
    sub_B16FFC(&CombineCommandCodeListViewObject_TypeInfo, obj);
    byte_40F9AC4 = 1;
  }
  if ( !obj
    || (v6 = *(&CombineCommandCodeListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (CombineCommandCodeListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CombineCommandCodeListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  if ( this->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  CombineCommandCodeListViewObject__Init_24219932((CombineCommandCodeListViewObject_o *)obj, v7, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__SetSelectedCommandCodeData(
        CombineCommandCodeListViewManager_o *this,
        CombineCommandCodeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x0
  ServantFaceIconComponent_o *v8; // x0
  UserCommandCodeEntity_o *userCommandCode; // x0
  System_String_o *MargeExplanation_23617588; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *v20; // x0
  const MethodInfo *v21; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *v23; // x8
  __int128 v24; // q1
  char v25; // w1
  UnityEngine_Component_o *selectedCommandCode; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *skillName; // x0
  UILabel_o *skillMessage; // x0
  const MethodInfo *v30; // x2
  UnityEngine_GameObject_o *equippedInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-50h]
  System_String_array *explanationList; // [xsp+40h] [xbp-30h] BYREF
  System_String_array *titleList; // [xsp+48h] [xbp-28h] BYREF
  System_Int32_array *idList; // [xsp+58h] [xbp-18h] BYREF

  if ( (byte_40F9ABF & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40F9ABF = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  if ( !item || !item->fields.userCommandCode )
  {
    selectedCommandCode = (UnityEngine_Component_o *)this->fields.selectedCommandCode;
    if ( selectedCommandCode )
    {
      gameObject = UnityEngine_Component__get_gameObject(selectedCommandCode, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        skillName = this->fields.skillName;
        if ( skillName )
        {
          UILabel__set_text(skillName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          skillMessage = this->fields.skillMessage;
          if ( skillMessage )
          {
            UILabel__set_text(skillMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            CombineCommandCodeListViewManager__SetDecideButtonStatus(this, 0, v30);
            equippedInfo = this->fields.equippedInfo;
            if ( equippedInfo )
              goto LABEL_23;
          }
        }
      }
    }
LABEL_29:
    sub_B170D4();
  }
  v6 = (UnityEngine_Component_o *)this->fields.selectedCommandCode;
  if ( !v6 )
    goto LABEL_29;
  v7 = UnityEngine_Component__get_gameObject(v6, 0LL);
  if ( !v7 )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(v7, 1, 0LL);
  v8 = this->fields.selectedCommandCode;
  if ( !v8 )
    goto LABEL_29;
  ServantFaceIconComponent__Set_30711528(v8, item->fields.userCommandCode, 0LL, 0LL, 0LL);
  userCommandCode = item->fields.userCommandCode;
  if ( !userCommandCode )
    goto LABEL_29;
  UserCommandCodeEntity__GetSkillInfo(userCommandCode, &idList, &titleList, &explanationList, 0LL);
  MargeExplanation_23617588 = SkillInfo__GetMargeExplanation_23617588(explanationList, 0LL);
  this->fields.selectItem = item;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectItem,
    (System_Int32_array **)item,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !titleList )
    goto LABEL_29;
  if ( !titleList->max_length )
  {
    sub_B17100(v17, v18, v19);
    sub_B170A0();
  }
  v20 = this->fields.skillName;
  if ( !v20 )
    goto LABEL_29;
  UILabel__set_text(v20, titleList->m_Items[0], 0LL);
  WrapControlText__textAdjust(this->fields.skillMessage, MargeExplanation_23617588, 22, 0, 0, 0LL);
  selectItem = this->fields.selectItem;
  if ( selectItem && (v23 = selectItem->fields.userCommandCode) != 0LL )
  {
    v24 = *(_OWORD *)&v23->fields.id.fields.fakeValue;
    *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&v23->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v33.fields.fakeValue = v24;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v32 = v33;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v32, 0LL) != this->fields.nowEquipedUserCommandCodeId;
  }
  else
  {
    v25 = 1;
  }
  CombineCommandCodeListViewManager__SetDecideButtonStatus(this, v25, v21);
  equippedInfo = this->fields.equippedInfo;
  if ( !equippedInfo )
    goto LABEL_29;
  if ( !item->fields.isEquiped )
  {
LABEL_23:
    UnityEngine_GameObject__SetActive(equippedInfo, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive(equippedInfo, 1, 0LL);
  CombineUtility__SetCommandCodeEquippedInfoLabel(
    this->fields.equippedLabel,
    this->fields.nameLabel,
    item->fields._EquipedSvtId_k__BackingField,
    item->fields._EquipedSvtId_k__BackingField != item->fields._BaseSvtId_k__BackingField,
    0LL);
}


void __fastcall CombineCommandCodeListViewManager__SetSortButtonImage(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  System_String_o *SortKindButtonText; // x0
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v17; // x8
  struct ListViewSort_o *v18; // x8
  UISprite_o *v19; // x0
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v21; // x9
  System_String_o **v22; // x10
  UISprite_o *v23; // x0
  System_String_o **v24; // x8
  struct ListViewSort_o *v25; // x8
  System_String_o **v26; // x8

  if ( (byte_40F9AD7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955/*"btn_sort_up"*/, v3);
    sub_B16FFC(&StringLiteral_17038/*"btn_txt_up"*/, v4);
    sub_B16FFC(&StringLiteral_16995/*"btn_txt_new"*/, v5);
    sub_B16FFC(&StringLiteral_16985/*"btn_txt_down"*/, v6);
    sub_B16FFC(&StringLiteral_17002/*"btn_txt_old"*/, v7);
    sub_B16FFC(&StringLiteral_16952/*"btn_sort_down"*/, v8);
    byte_40F9AD7 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_36;
    v11 = this->fields.sortKindLabel;
    SortKindButtonText = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_36;
    UILabel__set_text(v11, SortKindButtonText, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL) )
  {
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sortExplanationSprite = this->fields.sortExplanationSprite;
        if ( sortExplanationSprite )
        {
          v17 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17002/*"btn_txt_old"*/ : &StringLiteral_16995/*"btn_txt_new"*/);
          UISprite__set_spriteName(sortExplanationSprite, *v17, 0LL);
          v18 = this->fields.sort;
          if ( v18 )
          {
            v19 = this->fields.sortOrderSprite;
            if ( v19 )
            {
              isAscendingOrder = v18->fields.isAscendingOrder;
              v21 = (System_String_o **)&StringLiteral_16952/*"btn_sort_down"*/;
              v22 = (System_String_o **)&StringLiteral_16955/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v26 = v21;
              else
                v26 = v22;
              UISprite__set_spriteName(v19, *v26, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        v23 = this->fields.sortExplanationSprite;
        if ( v23 )
        {
          v24 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17038/*"btn_txt_up"*/ : &StringLiteral_16985/*"btn_txt_down"*/);
          UISprite__set_spriteName(v23, *v24, 0LL);
          v25 = this->fields.sort;
          if ( v25 )
          {
            v19 = this->fields.sortOrderSprite;
            if ( v19 )
            {
              isAscendingOrder = v25->fields.isAscendingOrder;
              v21 = (System_String_o **)&StringLiteral_16955/*"btn_sort_up"*/;
              v22 = (System_String_o **)&StringLiteral_16952/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__SetStatusKind(
        CombineCommandCodeListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct UICommonButton_o *statusTabButton; // x0
  UnityEngine_Behaviour_o *v16; // x0
  UISprite_o *statusTabSprite; // x0
  System_String_o **v18; // x8
  struct UICommonButton_o *v19; // x0
  struct UICommonButton_o *lockTabButton; // x0
  UnityEngine_Behaviour_o *v21; // x0
  UISprite_o *lockTabSprite; // x0
  System_String_o **v23; // x8
  struct UICommonButton_o *v24; // x0
  struct UICommonButton_o *choiceTabButton; // x0
  UnityEngine_Behaviour_o *v26; // x0
  UISprite_o *choiceTabSprite; // x0
  System_String_o **v28; // x8
  struct UICommonButton_o *v29; // x0
  int32_t v30; // w8
  UILabel_o *v31; // x20
  System_String_o *v32; // x0
  const MethodInfo *v33; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v36; // q1
  bool v37; // w1
  UILabel_o *combineInfoMsgLb; // x20
  __int64 *v39; // x8
  System_String_o *v40; // x0
  const MethodInfo *v41; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-40h]

  if ( (byte_40F9ABE & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_17057/*"button_allchoice_reg"*/, v6);
    sub_B16FFC(&StringLiteral_17060/*"button_alllock_unreg"*/, v7);
    sub_B16FFC(&StringLiteral_11699/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v8);
    sub_B16FFC(&StringLiteral_11700/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v9);
    sub_B16FFC(&StringLiteral_17073/*"button_select_reg"*/, v10);
    sub_B16FFC(&StringLiteral_3156/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, v11);
    sub_B16FFC(&StringLiteral_17074/*"button_select_unreg"*/, v12);
    sub_B16FFC(&StringLiteral_17059/*"button_alllock_reg"*/, v13);
    sub_B16FFC(&StringLiteral_17058/*"button_allchoice_unreg"*/, v14);
    byte_40F9ABE = 1;
  }
  statusTabButton = this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_47;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))statusTabButton->klass->vtable._5_set_isEnabled.method)(
    statusTabButton,
    1LL,
    statusTabButton->klass->vtable._6_OnInit.methodPtr);
  v16 = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !v16 )
    goto LABEL_47;
  UnityEngine_Behaviour__set_enabled(v16, modeKind != 0, 0LL);
  statusTabSprite = this->fields.statusTabSprite;
  if ( !statusTabSprite )
    goto LABEL_47;
  v18 = (System_String_o **)&StringLiteral_17073/*"button_select_reg"*/;
  if ( modeKind )
    v18 = (System_String_o **)&StringLiteral_17074/*"button_select_unreg"*/;
  UISprite__set_spriteName(statusTabSprite, *v18, 0LL);
  v19 = this->fields.statusTabButton;
  if ( !v19 )
    goto LABEL_47;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v19->klass->vtable._14_SetState.method)(
    v19,
    0LL,
    0LL,
    v19->klass->vtable._15_OnPress.methodPtr);
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_47;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))lockTabButton->klass->vtable._5_set_isEnabled.method)(
    lockTabButton,
    1LL,
    lockTabButton->klass->vtable._6_OnInit.methodPtr);
  v21 = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !v21 )
    goto LABEL_47;
  UnityEngine_Behaviour__set_enabled(v21, modeKind != 1, 0LL);
  lockTabSprite = this->fields.lockTabSprite;
  if ( !lockTabSprite )
    goto LABEL_47;
  v23 = (System_String_o **)&StringLiteral_17059/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v23 = (System_String_o **)&StringLiteral_17060/*"button_alllock_unreg"*/;
  UISprite__set_spriteName(lockTabSprite, *v23, 0LL);
  v24 = this->fields.lockTabButton;
  if ( !v24 )
    goto LABEL_47;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v24->klass->vtable._14_SetState.method)(
    v24,
    0LL,
    0LL,
    v24->klass->vtable._15_OnPress.methodPtr);
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_47;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))choiceTabButton->klass->vtable._5_set_isEnabled.method)(
    choiceTabButton,
    1LL,
    choiceTabButton->klass->vtable._6_OnInit.methodPtr);
  v26 = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !v26 )
    goto LABEL_47;
  UnityEngine_Behaviour__set_enabled(v26, modeKind != 2, 0LL);
  choiceTabSprite = this->fields.choiceTabSprite;
  if ( !choiceTabSprite )
    goto LABEL_47;
  v28 = (System_String_o **)&StringLiteral_17057/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v28 = (System_String_o **)&StringLiteral_17058/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName(choiceTabSprite, *v28, 0LL);
  v29 = this->fields.choiceTabButton;
  if ( !v29 )
    goto LABEL_47;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v29->klass->vtable._14_SetState.method)(
    v29,
    0LL,
    0LL,
    v29->klass->vtable._15_OnPress.methodPtr);
  v30 = this->fields.modeKind;
  if ( v30 == 2 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v39 = &StringLiteral_11699/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
LABEL_42:
    v40 = LocalizationManager__Get((System_String_o *)*v39, 0LL);
    if ( combineInfoMsgLb )
    {
      UILabel__set_text(combineInfoMsgLb, v40, 0LL);
      CombineCommandCodeListViewManager__SetDecideButtonStatus(this, 0, v41);
      return;
    }
    goto LABEL_47;
  }
  if ( v30 == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v39 = &StringLiteral_11700/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
    goto LABEL_42;
  }
  if ( v30 )
    return;
  v31 = this->fields.combineInfoMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3156/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, 0LL);
  if ( !v31 )
LABEL_47:
    sub_B170D4();
  UILabel__set_text(v31, v32, 0LL);
  selectItem = this->fields.selectItem;
  if ( selectItem && (userCommandCode = selectItem->fields.userCommandCode) != 0LL )
  {
    v36 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v43.fields.fakeValue = v36;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v42 = v43;
    v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v42, 0LL) != this->fields.nowEquipedUserCommandCodeId;
  }
  else
  {
    v37 = 0;
  }
  CombineCommandCodeListViewManager__SetDecideButtonStatus(this, v37, v33);
}


void __fastcall CombineCommandCodeListViewManager__StatusRequest(
        CombineCommandCodeListViewManager_o *this,
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t modeKind; // w8
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  CommandCodeStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Int64_array *v22; // x2
  System_Int64_array *v23; // x1
  bool v24; // w3
  bool v25; // w4
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  NetworkManager_ResultCallbackFunc_o *v36; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_40F9ACE & 1) == 0 )
  {
    sub_B16FFC(&Method_CombineCommandCodeListViewManager_EndStatusSync__, callback);
    sub_B16FFC(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_40F9ACE = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( CombineCommandCodeListViewManager__GetSwapChoiceList(this, &choiceList, &unchoiceList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      v36 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v32,
                                                     v33,
                                                     v34,
                                                     v35);
      NetworkManager_ResultCallbackFunc___ctor(
        v36,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CommandCodeStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                              v36,
                                                                              (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v22 = unchoiceList;
        v23 = choiceList;
        v25 = 1;
        v24 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B170D4();
    }
  }
  else if ( modeKind == 1 && CombineCommandCodeListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v20 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   v16,
                                                   v17,
                                                   v18,
                                                   v19);
    NetworkManager_ResultCallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CommandCodeStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v20,
                                                                            (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v22 = unlockList;
      v23 = lockList;
      v24 = 1;
      v25 = 0;
LABEL_17:
      CommandCodeStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v23, v22, v24, v25, 0LL);
      return;
    }
    goto LABEL_21;
  }
  if ( callback )
    CombineCommandCodeListViewManager_RequestCallbackFunc__Invoke(callback, 0, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__add_callbackFunc2(
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

  if ( (byte_40F9AB9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F9AB9 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CombineCommandCodeListViewManager_o *)sub_B173C8(v7);
  CombineCommandCodeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CombineCommandCodeListViewObject__o *__fastcall CombineCommandCodeListViewManager__get_ClippingObjectList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v15; // x23
  UnityEngine_GameObject_o *v16; // x21
  CombineCommandCodeListViewObject_o *Component_srcLineSprite; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0

  if ( (byte_40F9ABC & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F9ABC = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v16 = objectList->fields._items->m_Items[v15];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
      {
        if ( !v16 )
          break;
        Component_srcLineSprite = (CombineCommandCodeListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          v16,
                                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
        Item = (ListViewItem_o *)CombineCommandCodeListViewObject__GetItem(Component_srcLineSprite, 0LL);
        if ( !Item )
          break;
        if ( !Item->fields.isTermination || ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            v18,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__);
        }
      }
      if ( (__int64)++v15 >= size )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v12;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v12;
}


int32_t __fastcall CombineCommandCodeListViewManager__get_GetModeKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_Collections_Generic_List_CombineCommandCodeListViewObject__o *__fastcall CombineCommandCodeListViewManager__get_ObjectList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v15; // x23
  UnityEngine_GameObject_o *v16; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0

  if ( (byte_40F9ABB & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F9ABB = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v16 = objectList->fields._items->m_Items[v15];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
      {
        if ( !v16 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           v16,
                                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
        if ( !v12 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          Component_srcLineSprite,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__);
      }
      if ( (__int64)++v15 >= size )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v12;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v12;
}


void __fastcall CombineCommandCodeListViewManager__remove_callbackFunc2(
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

  if ( (byte_40F9ABA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F9ABA = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CombineCommandCodeListViewManager_o *)sub_B173C8(v7);
  CombineCommandCodeListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall CombineCommandCodeListViewManager_RequestCallbackFunc__BeginInvoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_40F710D & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isRequest);
    byte_40F710D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall CombineCommandCodeListViewManager_RequestCallbackFunc__EndInvoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager_RequestCallbackFunc__Invoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CombineCommandCodeListViewManager_RequestCallbackFunc_o **v7; // x25
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
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v18; // x8
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
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isRequest, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isRequest, v20);
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
        (*v17)(v19, isRequest, v17);
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
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isRequest, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isRequest,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isRequest, v20);
    goto LABEL_37;
  }
}