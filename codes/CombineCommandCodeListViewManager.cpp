void __fastcall CombineCommandCodeListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *v4; // x0
  System_String_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  ListViewSort_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  int v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FFACC & 1) == 0 )
  {
    sub_1B640C8(&CombineCommandCodeListViewManager_TypeInfo, v1);
    sub_1B640C8(&ListViewSort_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_4580/*"CombineCommandCode"*/, v3);
    byte_49FFACC = 1;
  }
  v11 = 1;
  v4 = System_Int32__ToString((int32_t)&v11, 0LL);
  v5 = System_String__Concat_61375396((System_String_o *)StringLiteral_4580/*"CombineCommandCode"*/, v4, 0LL);
  v8 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v6, v7);
  ListViewSort___ctor_40426136(v8, v5, 2, 0, 0LL);
  CombineCommandCodeListViewManager_TypeInfo->static_fields->commandCodeSortInfo = v8;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CombineCommandCodeListViewManager_TypeInfo->static_fields,
    (int32_t)v8,
    v9,
    v10);
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
  int64_t bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  CombineCommandCodeListViewManager_c *v37; // x0
  struct ListViewSort_o **p_commandCodeSortInfo; // x8
  struct ListViewSort_o *v39; // x1
  struct ListViewSort_o **p_sort; // x26
  const MethodInfo *v41; // x2
  int32_t v42; // w2
  int32_t v43; // w3
  BalanceConfig_c *v44; // x8
  int64_t v45; // x24
  struct BalanceConfig_StaticFields *static_fields; // x10
  unsigned int iconScaleKind; // w8
  int CommandCodeFrameMax; // w26
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x20
  UserServantCommandCodeMaster_o *v51; // x27
  __int64 v52; // x19
  int v53; // w20
  System_Collections_Generic_List_long__o *v54; // x28
  int v55; // w19
  int v56; // w21
  __int64 v57; // x29
  __int128 v58; // q0
  __int64 v59; // x1
  __int128 v60; // q0
  int v61; // w27
  System_Collections_Generic_Dictionary_long__long__o *v62; // x25
  unsigned int v63; // w22
  __int64 v64; // x27
  __int128 v65; // q0
  _OWORD *v66; // x19
  bool v67; // w0
  __int128 v68; // q1
  bool v69; // w28
  int64_t v70; // x0
  __int128 v71; // q0
  int64_t v72; // x0
  int32_t Item; // w20
  __int128 v74; // q0
  int64_t v75; // x21
  bool v76; // w21
  __int64 v77; // x1
  __int64 v78; // x2
  CombineCommandCodeListViewItem_o *v79; // x29
  const MethodInfo *v80; // x7
  __int128 v81; // q0
  const MethodInfo *v82; // x2
  int32_t v83; // w3
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 *v89; // x8
  UILabel_o *commandCodeInfoLabel; // x21
  System_String_o *v91; // x20
  Il2CppObject *v92; // x22
  Il2CppObject *v93; // x0
  const MethodInfo *v94; // x2
  const MethodInfo *v95; // x1
  int32_t v96; // [xsp+8h] [xbp-198h]
  char isMax; // [xsp+14h] [xbp-18Ch]
  int v98; // [xsp+18h] [xbp-188h]
  CombineCommandCodeListViewManager_o *v101; // [xsp+30h] [xbp-170h]
  int v102; // [xsp+3Ch] [xbp-164h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+40h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+60h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+80h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+A0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+C0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+E0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+100h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+120h] [xbp-80h] BYREF

  if ( (byte_49FFAB0 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&baseSvtId);
    sub_1B640C8(&CombineCommandCodeListViewItem_TypeInfo, v11);
    sub_1B640C8(&CombineCommandCodeListViewManager_TypeInfo, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___, v14);
    sub_1B640C8(&DataManager_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__, v17);
    sub_1B640C8(&int_TypeInfo, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Contains__, v20);
    sub_1B640C8(&LocalizationManager_TypeInfo, v21);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B640C8(&StringLiteral_20170/*"img_bg_arts"*/, v24);
    sub_1B640C8(&StringLiteral_3698/*"COMMAND_CODE_EMPTY"*/, v25);
    sub_1B640C8(&StringLiteral_20172/*"img_bg_buster"*/, v26);
    sub_1B640C8(&StringLiteral_20181/*"img_bg_quick"*/, v27);
    sub_1B640C8(&StringLiteral_12321/*"SUM_INFO"*/, v28);
    byte_49FFAB0 = 1;
  }
  bgTxtSprite = (int64_t)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_92;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0LL);
  bgTxtSprite = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive(gameObject, bgTxtSprite & 1, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.selectShowStatusUserCmdCode = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectShowStatusUserCmdCode, 0, v31, v32);
  this->fields.selectItem = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectItem, 0, v33, v34);
  this->fields.nowEquipedUserCommandCodeId = nowEquipedUserCommandCodeId;
  v37 = CombineCommandCodeListViewManager_TypeInfo;
  if ( !CombineCommandCodeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineCommandCodeListViewManager_TypeInfo);
    v37 = CombineCommandCodeListViewManager_TypeInfo;
  }
  p_commandCodeSortInfo = &v37->static_fields->commandCodeSortInfo;
  v39 = *p_commandCodeSortInfo;
  this->fields.sort = *p_commandCodeSortInfo;
  p_sort = &this->fields.sort;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v39, v35, v36);
  bgTxtSprite = (int64_t)this->fields.sort;
  if ( !bgTxtSprite )
    goto LABEL_92;
  *(_DWORD *)(bgTxtSprite + 128) = 3;
  ListViewSort__Load((ListViewSort_o *)bgTxtSprite, 0LL);
  CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0LL, v41);
  bgTxtSprite = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgTxtSprite )
    goto LABEL_92;
  bgTxtSprite = (int64_t)DataManager__GetMasterData_object_(
                           (DataManager_o *)bgTxtSprite,
                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !bgTxtSprite )
    goto LABEL_92;
  bgTxtSprite = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)bgTxtSprite, 0LL);
  v44 = BalanceConfig_TypeInfo;
  v45 = bgTxtSprite;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
  }
  if ( !*p_sort )
    goto LABEL_92;
  static_fields = v44->static_fields;
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v42, v43);
  }
  bgTxtSprite = (int64_t)this->fields.sort;
  if ( !bgTxtSprite )
    goto LABEL_92;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  bgTxtSprite = (int64_t)ListViewSort__GetScaleKindSpriteName(
                           (ListViewSort_o *)bgTxtSprite,
                           this->fields.scaleType,
                           0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_92;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)bgTxtSprite, 0LL);
  v101 = this;
  if ( v45 && *(_QWORD *)(v45 + 24) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    bgTxtSprite = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    if ( bgTxtSprite )
    {
      v51 = (UserServantCommandCodeMaster_o *)bgTxtSprite;
      v96 = commandCardType;
      bgTxtSprite = (int64_t)UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                               (UserServantCommandCodeMaster_o *)bgTxtSprite,
                               0LL);
      v52 = *(_QWORD *)(v45 + 24);
      isMax = 0;
      v98 = v52;
      if ( CommandCodeFrameMax <= (int)v52 )
      {
        v53 = v52 - 1;
        if ( (int)v52 >= 1 )
        {
          v54 = (System_Collections_Generic_List_long__o *)bgTxtSprite;
          v55 = 0;
          v56 = 0;
          while ( 1 )
          {
            v57 = *(_QWORD *)(v45 + 8LL * v55 + 32);
            if ( !v57 )
              goto LABEL_92;
            v58 = *(_OWORD *)(v57 + 32);
            *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)(v57 + 16);
            *(_OWORD *)&v110.fields.fakeValue = v58;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v109 = v110;
            bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v109, 0LL);
            if ( bgTxtSprite != nowEquipedUserCommandCodeId )
            {
              v60 = *(_OWORD *)(v57 + 32);
              *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)(v57 + 16);
              *(_OWORD *)&v110.fields.fakeValue = v60;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v108 = v110;
              bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v108, 0LL);
              if ( !v54 )
                goto LABEL_92;
              bgTxtSprite = System_Collections_Generic_List_long___Contains(
                              v54,
                              bgTxtSprite,
                              (const MethodInfo_34953EC *)Method_System_Collections_Generic_List_long__Contains__);
              if ( (bgTxtSprite & 1) != 0 && ++v56 >= CommandCodeFrameMax )
                break;
            }
            if ( v53 == v55 )
            {
              isMax = 0;
              goto LABEL_46;
            }
            if ( (unsigned int)++v55 >= *(_DWORD *)(v45 + 24) )
              goto LABEL_41;
          }
          isMax = 1;
LABEL_46:
          this = v101;
          LODWORD(v52) = v98;
        }
      }
      bgTxtSprite = (int64_t)UserServantCommandCodeMaster__GetEquippedCommandCodeDic(v51, 0LL);
      v61 = v52;
      if ( (int)v52 >= 1 )
      {
        v62 = (System_Collections_Generic_Dictionary_long__long__o *)bgTxtSprite;
        v63 = 0;
        while ( v63 < *(_DWORD *)(v45 + 24) )
        {
          v64 = *(_QWORD *)(v45 + 8LL * (int)v63 + 32);
          if ( !v64 )
            goto LABEL_92;
          v65 = *(_OWORD *)(v64 + 32);
          *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)(v64 + 16);
          *(_OWORD *)&v110.fields.fakeValue = v65;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v107 = v110;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v107, 0LL);
          if ( !v62 )
            goto LABEL_92;
          v66 = (_OWORD *)(v64 + 16);
          v67 = System_Collections_Generic_Dictionary_long__long___ContainsKey(
                  v62,
                  bgTxtSprite,
                  (const MethodInfo_315EAF0 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
          v68 = *(_OWORD *)(v64 + 32);
          v69 = v67;
          *(_OWORD *)&v106.fields.currentCryptoKey = *(_OWORD *)(v64 + 16);
          *(_OWORD *)&v106.fields.fakeValue = v68;
          v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v106, 0LL);
          if ( System_Collections_Generic_Dictionary_long__long___ContainsKey(
                 v62,
                 v70,
                 (const MethodInfo_315EAF0 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__) )
          {
            v71 = *(_OWORD *)(v64 + 32);
            *(_OWORD *)&v110.fields.currentCryptoKey = *v66;
            *(_OWORD *)&v110.fields.fakeValue = v71;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v105 = v110;
            v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v105, 0LL);
            Item = System_Collections_Generic_Dictionary_long__long___get_Item(
                     v62,
                     v72,
                     (const MethodInfo_315E85C *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
          }
          else
          {
            Item = 0;
          }
          v74 = *(_OWORD *)(v64 + 32);
          v75 = this->fields.nowEquipedUserCommandCodeId;
          *(_OWORD *)&v110.fields.currentCryptoKey = *v66;
          *(_OWORD *)&v110.fields.fakeValue = v74;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v104 = v110;
          v76 = v75 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v104, 0LL);
          v79 = (CombineCommandCodeListViewItem_o *)sub_1B64314(CombineCommandCodeListViewItem_TypeInfo, v77, v78);
          CombineCommandCodeListViewItem___ctor(
            v79,
            (UserCommandCodeEntity_o *)v64,
            v76,
            v69,
            Item,
            baseSvtId,
            isMax,
            v80);
          v81 = *(_OWORD *)(v64 + 32);
          *(_OWORD *)&v110.fields.currentCryptoKey = *v66;
          *(_OWORD *)&v110.fields.fakeValue = v81;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v103 = v110;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v103, 0LL);
          this = v101;
          v61 = v98;
          if ( !v79 )
            goto LABEL_92;
          if ( bgTxtSprite == beforeSelectedUserCommandCodeId )
          {
            v79->fields.isSelect = 1;
            CombineCommandCodeListViewManager__SetSelectedCommandCodeData(v101, v79, v82);
          }
          else
          {
            v79->fields.isSelect = 0;
          }
          bgTxtSprite = (int64_t)v101->fields.itemList;
          if ( !bgTxtSprite )
            goto LABEL_92;
          v84 = *(_QWORD *)(bgTxtSprite + 16);
          v85 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++*(_DWORD *)(bgTxtSprite + 28);
          if ( !v84 )
            goto LABEL_92;
          v86 = *(int *)(bgTxtSprite + 24);
          if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)bgTxtSprite,
              (Il2CppObject *)v79,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
          }
          else
          {
            v87 = v84 + 8 * v86;
            *(_DWORD *)(bgTxtSprite + 24) = v86 + 1;
            *(_QWORD *)(v87 + 32) = v79;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 32), (int32_t)v79, (int32_t)v82, v83);
          }
          if ( v98 == ++v63 )
            goto LABEL_73;
        }
LABEL_41:
        sub_1B6432C(bgTxtSprite, v59);
      }
LABEL_73:
      bgTxtSprite = (int64_t)this->fields.emptyMessageBase;
      if ( bgTxtSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 0, 0LL);
        commandCardType = v96;
        goto LABEL_75;
      }
    }
LABEL_92:
    sub_1B64324(bgTxtSprite);
  }
  bgTxtSprite = (int64_t)this->fields.emptyMessageBase;
  if ( !bgTxtSprite )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 1, 0LL);
  v61 = 0;
LABEL_75:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  bgTxtSprite = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3698/*"COMMAND_CODE_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_92;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)bgTxtSprite, 0LL);
  switch ( commandCardType )
  {
    case 1:
      bgTxtSprite = (int64_t)v101->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_92;
      v89 = &StringLiteral_20170/*"img_bg_arts"*/;
      break;
    case 3:
      bgTxtSprite = (int64_t)v101->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_92;
      v89 = &StringLiteral_20181/*"img_bg_quick"*/;
      break;
    case 2:
      bgTxtSprite = (int64_t)v101->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_92;
      v89 = &StringLiteral_20172/*"img_bg_buster"*/;
      break;
    default:
      goto LABEL_88;
  }
  UISprite__set_spriteName((UISprite_o *)bgTxtSprite, (System_String_o *)*v89, 0LL);
LABEL_88:
  commandCodeInfoLabel = v101->fields.commandCodeInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v91 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
  LODWORD(v110.fields.currentCryptoKey) = v61;
  v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v110);
  v102 = CommandCodeFrameMax;
  v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
  bgTxtSprite = (int64_t)System_String__Format_61389768(v91, v92, v93, 0LL);
  if ( !commandCodeInfoLabel )
    goto LABEL_92;
  UILabel__set_text(commandCodeInfoLabel, (System_String_o *)bgTxtSprite, 0LL);
  CombineCommandCodeListViewManager__SetStatusKind(v101, modeKind, v94);
  ListViewManager__SortItem((ListViewManager_o *)v101, -1, 0, -1, 0LL);
  CombineCommandCodeListViewManager__SetFilterButtonImage(v101, v95);
}


void __fastcall CombineCommandCodeListViewManager__DestroyList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  this->fields.selectShowStatusUserCmdCode = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectShowStatusUserCmdCode, 0, v3, v4);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B64324(0LL);
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
  CombineCommandCodeListViewManager__SetMode_44409988(this, 3, v5);
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
  CombineCommandCodeListViewManager__SetMode_44409988(this, 3, v5);
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
  CombineCommandCodeListViewManager__SetMode_44409988(this, 3, v5);
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
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_49FFAC5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49FFAC5 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    CombineCommandCodeListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__,
    0LL);
  if ( !Instance )
    sub_1B64324(v12);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__EndSelectSortKind(
        CombineCommandCodeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FFAC8 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49FFAC8 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__EndStatusSync(
        CombineCommandCodeListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct CombineCommandCodeListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  ServantStatusBattleListViewItem_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (ServantStatusBattleListViewItem_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0LL;
    sub_1B6406C(p_requestCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))requestCallback->fields.m_target)(
      requestCallback->fields.original_method_info,
      1LL,
      *(_QWORD *)&requestCallback->fields.extra_arg);
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v9; // w22
  int64_t v10; // x21
  const MethodInfo *v11; // x1
  __int64 methodPtr_low; // x10

  if ( (byte_49FFACB & 1) == 0 )
  {
    sub_1B640C8(&CombineCommandCodeListViewItem_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    byte_49FFACB = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    v10 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v9,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (CombineCommandCodeListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( CombineCommandCodeListViewItem__get_CommandCodeId((CombineCommandCodeListViewItem_o *)itemList, v11) == commandCodeId )
        ++v10;
      if ( size == v9 )
        return v10;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1B64324(itemList);
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
  CombineCommandCodeListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FFAB6 & 1) == 0 )
  {
    sub_1B640C8(&CombineCommandCodeListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_49FFAB6 = 1;
  }
  result = (CombineCommandCodeListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineCommandCodeListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (CombineCommandCodeListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineCommandCodeListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
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
  System_Collections_Generic_List_long__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int64_t itemList; // x0
  int v22; // w25
  int32_t v23; // w24
  __int64 methodPtr_low; // x10
  __int64 v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x8
  __int128 v32; // q0
  struct System_Int64_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  System_Collections_Generic_List_long__o *v37; // x0
  int v38; // w21
  System_Int64_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Int64_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  System_Int64_array **v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-80h]

  if ( (byte_49FFABD & 1) == 0 )
  {
    sub_1B640C8(&CombineCommandCodeListViewItem_TypeInfo, choiceList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_49FFABD = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v16, v17);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v22 = *(_DWORD *)(itemList + 24);
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v23,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(CombineCommandCodeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != CombineCommandCodeListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v25 = *(_QWORD *)(itemList + 128);
      if ( v25 && *(_BYTE *)(itemList + 118) )
      {
        if ( *(_BYTE *)(itemList + 114) )
        {
          v26 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v49 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v49, 0LL);
          if ( !v18 )
            goto LABEL_37;
          items = v18->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v18->fields._size;
          v30 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v36 = v28[4];
            v37 = v18;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v37,
              v30,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v36 + 192) + 112LL));
            goto LABEL_28;
          }
          v31 = &items->obj.klass + size;
          v18->fields._size = size + 1;
        }
        else
        {
          v32 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v48 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v48, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v33 = v15->fields._items;
          v34 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v33 )
            goto LABEL_37;
          v35 = v15->fields._size;
          v30 = itemList;
          if ( (unsigned int)v35 >= v33->max_length )
          {
            v36 = v34[4];
            v37 = v15;
            goto LABEL_27;
          }
          v31 = &v33->obj.klass + v35;
          v15->fields._size = v35 + 1;
        }
        v31[4] = (Il2CppClass *)v30;
      }
LABEL_28:
      if ( v22 == ++v23 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v18 )
LABEL_37:
    sub_1B64324(itemList);
  v38 = v18->fields._size + v15->fields._size;
  if ( v38 < 1 )
  {
    *choiceList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)choiceList, 0, v19, v20);
    v46 = unchoiceList;
    v45 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v39 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v18,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v45 = (int)v42;
    *unchoiceList = v42;
    v46 = unchoiceList;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v46, v45, v43, v44);
  return v38 > 0;
}


bool __fastcall CombineCommandCodeListViewManager__GetSwapLockList(
        CombineCommandCodeListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_long__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int64_t itemList; // x0
  int v22; // w25
  int32_t v23; // w24
  __int64 methodPtr_low; // x10
  __int64 v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x8
  __int128 v32; // q0
  struct System_Int64_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  System_Collections_Generic_List_long__o *v37; // x0
  int v38; // w21
  System_Int64_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Int64_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  System_Int64_array **v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-80h]

  if ( (byte_49FFABC & 1) == 0 )
  {
    sub_1B640C8(&CombineCommandCodeListViewItem_TypeInfo, lockList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_49FFABC = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v16, v17);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v22 = *(_DWORD *)(itemList + 24);
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v23,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(CombineCommandCodeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != CombineCommandCodeListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v25 = *(_QWORD *)(itemList + 128);
      if ( v25 && *(_BYTE *)(itemList + 117) )
      {
        if ( *(_BYTE *)(itemList + 113) )
        {
          v26 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v49 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v49, 0LL);
          if ( !v18 )
            goto LABEL_37;
          items = v18->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v18->fields._size;
          v30 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v36 = v28[4];
            v37 = v18;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v37,
              v30,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v36 + 192) + 112LL));
            goto LABEL_28;
          }
          v31 = &items->obj.klass + size;
          v18->fields._size = size + 1;
        }
        else
        {
          v32 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v48 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v48, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v33 = v15->fields._items;
          v34 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v33 )
            goto LABEL_37;
          v35 = v15->fields._size;
          v30 = itemList;
          if ( (unsigned int)v35 >= v33->max_length )
          {
            v36 = v34[4];
            v37 = v15;
            goto LABEL_27;
          }
          v31 = &v33->obj.klass + v35;
          v15->fields._size = v35 + 1;
        }
        v31[4] = (Il2CppClass *)v30;
      }
LABEL_28:
      if ( v22 == ++v23 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v18 )
LABEL_37:
    sub_1B64324(itemList);
  v38 = v18->fields._size + v15->fields._size;
  if ( v38 < 1 )
  {
    *lockList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lockList, 0, v19, v20);
    v46 = unlockList;
    v45 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v39 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v18,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v45 = (int)v42;
    *unlockList = v42;
    v46 = unlockList;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v46, v45, v43, v44);
  return v38 > 0;
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
  System_Collections_Generic_List_object__o *itemList; // x8
  DataManager_o *Instance; // x0
  DataManager_o *v14; // x20
  int size; // w24
  int32_t v16; // w21
  CombineCommandCodeListViewItem_o *v17; // x22
  __int64 methodPtr_low; // x9
  Il2CppClass *writeMasterDataThread; // x8
  Il2CppType byval_arg; // q0
  int64_t v21; // x0
  __int128 v22; // q1
  const MethodInfo *v23; // x2
  UnityEngine_Object_o *viewObject; // x23
  CombineCommandCodeListViewManager_o *v25; // x0
  const MethodInfo *v26; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-80h]

  if ( (byte_49FFAB4 & 1) == 0 )
  {
    sub_1B640C8(&CombineCommandCodeListViewItem_TypeInfo, userCommandCodeId);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FFAB4 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( itemList )
  {
    if ( userCommandCodeId < 1 )
    {
      v14 = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
        || (Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                          userCommandCodeId,
                                          (const MethodInfo_30D4050 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
      {
LABEL_28:
        sub_1B64324(Instance);
      }
      v14 = Instance;
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      itemList,
                                      v16,
                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Instance )
          goto LABEL_28;
        v17 = (CombineCommandCodeListViewItem_o *)Instance;
        methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (CombineCommandCodeListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineCommandCodeListViewItem_TypeInfo )
        {
          break;
        }
        if ( v14 )
        {
          writeMasterDataThread = (Il2CppClass *)Instance->fields.writeMasterDataThread;
          if ( !writeMasterDataThread )
            goto LABEL_28;
          byval_arg = writeMasterDataThread->_1.byval_arg;
          *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&writeMasterDataThread->_1.name;
          *(Il2CppType *)&v29.fields.fakeValue = byval_arg;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v28 = v29;
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v28, 0LL);
          v22 = *(_OWORD *)&v14->fields._DispLog;
          *(SingletonMonoBehaviour_DataManager__Fields *)&v27.fields.currentCryptoKey = v14->fields.SingletonMonoBehaviour_DataManager__Fields;
          *(_OWORD *)&v27.fields.fakeValue = v22;
          if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v27, 0LL) )
            CombineCommandCodeListViewItem__Modify(v17, (UserCommandCodeEntity_o *)v14, v23);
        }
        viewObject = (UnityEngine_Object_o *)v17->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)v17->fields.viewObject;
          if ( !Instance )
            goto LABEL_28;
          Instance = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, CombineCommandCodeListViewItem_o *, void *))Instance->klass[1]._1.namespaze)(
                                        Instance,
                                        v17,
                                        Instance->klass[1]._1.byval_arg.data);
        }
        if ( size == ++v16 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_28;
      }
      sub_1B645E4(Instance);
      CombineCommandCodeListViewManager__OnClickDecide(v25, v26);
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
  DataManager_o *Instance; // x0
  CombineCommandCodeListViewItem_c *v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w26
  unsigned int v14; // w28
  DataManager_c **v15; // x21
  DataManager_c *v16; // x8
  ListViewItem_o *v17; // x21
  DataManager_c *v18; // t1
  Il2CppType byval_arg; // q0
  int64_t v20; // x0
  DataManager_o *v21; // x22
  int32_t v22; // w24
  DataManager_o *v23; // x23
  __int64 v24; // x9
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
  __int128 v26; // q0
  int32_t v27; // w2
  int32_t v28; // w3
  ListViewItem_c *klass; // x1
  const MethodInfo *v30; // x1
  int32_t v31; // w20
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *monitor; // x22
  CombineCommandCodeListViewManager_o *v35; // x0
  int64_t v36; // x1
  const MethodInfo *v37; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+10h] [xbp-D0h]
  DataManager_o *v40; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+60h] [xbp-80h]

  if ( (byte_49FFAB3 & 1) == 0 )
  {
    sub_1B640C8(&CombineCommandCodeListViewItem_TypeInfo, isIconSizeChange);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FFAB3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Instance, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_45;
  size = itemList->fields._size;
  if ( !Instance
    || (m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource, (int)m_CancellationTokenSource < 1) )
  {
LABEL_31:
    if ( size < 1 || !isIconSizeChange )
      return;
    v31 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v31,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v17 = (ListViewItem_o *)Item;
        methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (CombineCommandCodeListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineCommandCodeListViewItem_TypeInfo )
        {
          goto LABEL_47;
        }
        monitor = (UnityEngine_Object_o *)Item[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          Instance = (DataManager_o *)v17->fields.viewObject;
          if ( !Instance )
            break;
          ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v17, this->fields.seed, 0LL);
        }
      }
      if ( size == ++v31 )
        return;
    }
LABEL_45:
    sub_1B64324(Instance);
  }
  if ( !(_DWORD)m_CancellationTokenSource )
    goto LABEL_30;
  v14 = 0;
  v40 = Instance;
  while ( 1 )
  {
    v15 = &Instance->klass + (int)v14;
    v18 = v15[4];
    v17 = (ListViewItem_o *)(v15 + 4);
    v16 = v18;
    if ( !v18 )
      goto LABEL_45;
    byval_arg = v16->_1.byval_arg;
    *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&v16->_1.name;
    *(Il2CppType *)&v43.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v42 = v43;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v42, 0LL);
    if ( size >= 1 )
      break;
LABEL_28:
    Instance = v40;
    if ( ++v14 == (_DWORD)m_CancellationTokenSource )
      goto LABEL_31;
    if ( v14 >= LODWORD(v40->fields.m_CancellationTokenSource) )
      goto LABEL_30;
  }
  v21 = (DataManager_o *)v20;
  v22 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_45;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v22,
                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !Instance )
      goto LABEL_45;
    v11 = CombineCommandCodeListViewItem_TypeInfo;
    v23 = Instance;
    v24 = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)v24
      || (CombineCommandCodeListViewItem_c *)Instance->klass->_2.typeHierarchy[v24 - 1] != CombineCommandCodeListViewItem_TypeInfo )
    {
      break;
    }
    writeMasterDataThread = Instance->fields.writeMasterDataThread;
    if ( writeMasterDataThread )
    {
      v26 = *(_OWORD *)&writeMasterDataThread->fields.pending_exception;
      *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&writeMasterDataThread->fields.internal_thread;
      *(_OWORD *)&v43.fields.fakeValue = v26;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v41 = v43;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v41, 0LL);
      if ( Instance == v21 )
      {
        if ( v14 < LODWORD(v40->fields.m_CancellationTokenSource) )
        {
          klass = v17->klass;
          v23->fields.writeMasterDataThread = (struct System_Threading_Thread_o *)v17->klass;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->fields.writeMasterDataThread, (int32_t)klass, v27, v28);
          if ( !isIconSizeChange )
          {
            CombineCommandCodeListViewItem__ModifyLockItem(
              (CombineCommandCodeListViewItem_o *)v23,
              (const MethodInfo *)v11);
            CombineCommandCodeListViewItem__ModifyChoiceItem((CombineCommandCodeListViewItem_o *)v23, v30);
          }
          goto LABEL_28;
        }
LABEL_30:
        sub_1B6432C(Instance, v11);
      }
    }
    if ( size == ++v22 )
      goto LABEL_28;
  }
  sub_1B645E4(Instance);
LABEL_47:
  sub_1B645E4(v17);
  CombineCommandCodeListViewManager__ModifyItem(v35, v36, v37);
}


void __fastcall CombineCommandCodeListViewManager__OnClickChoiceTab(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_49FFAC0 & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_EndClickTabChoice__, method);
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_OnClickChoiceTab__, v3);
    sub_1B640C8(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_49FFAC0 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v5 = Method_CombineCommandCodeListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_CombineCommandCodeListViewManager_OnClickChoiceTab__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v9 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_1B64314(
                                                                        CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo,
                                                                        v7,
                                                                        v8);
      CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndClickTabChoice__,
        v10);
      CombineCommandCodeListViewManager__StatusRequest(this, v9, v11);
    }
    else
    {
      CombineCommandCodeListViewManager__SetStatusKind(this, 2, v8);
      CombineCommandCodeListViewManager__ModifyList(this, 0, v12);
      CombineCommandCodeListViewManager__SetMode_44409988(this, 3, v13);
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickCollectLock(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_49FFABF & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_EndClickTabLock__, method);
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_OnClickCollectLock__, v3);
    sub_1B640C8(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_49FFABF = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v5 = Method_CombineCommandCodeListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_CombineCommandCodeListViewManager_OnClickCollectLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v9 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_1B64314(
                                                                        CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo,
                                                                        v7,
                                                                        v8);
      CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndClickTabLock__,
        v10);
      CombineCommandCodeListViewManager__StatusRequest(this, v9, v11);
    }
    else
    {
      CombineCommandCodeListViewManager__SetStatusKind(this, 1, v8);
      CombineCommandCodeListViewManager__ModifyList(this, 0, v12);
      CombineCommandCodeListViewManager__SetMode_44409988(this, 3, v13);
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
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-40h]

  if ( (byte_49FFAB5 & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_OnClickDecide__, method);
    sub_1B640C8(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_49FFAB5 = 1;
  }
  selectItem = this->fields.selectItem;
  if ( selectItem )
  {
    userCommandCode = selectItem->fields.userCommandCode;
    if ( userCommandCode )
    {
      v9 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v9;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v15 = v16;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v15, 0LL) != this->fields.nowEquipedUserCommandCodeId )
      {
        v12 = Method_CombineCommandCodeListViewManager_OnClickDecide__;
        if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickDecide__ + 83) & 2) != 0 )
          v12 = (_QWORD *)sub_1B640E0(Method_CombineCommandCodeListViewManager_OnClickDecide__);
        v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
        OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
        if ( this->fields.nowEquipedUserCommandCodeId >= 1 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
          if ( !Master_object )
            goto LABEL_21;
          DataMasterBase_object__object__long___GetEntity(
            Master_object,
            this->fields.nowEquipedUserCommandCodeId,
            (const MethodInfo_30D4050 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.combineRootComponent;
        if ( Master_object )
        {
          CombineRootComponent__ShowSelectedCommandCode((CombineRootComponent_o *)Master_object, 0LL);
          return;
        }
LABEL_21:
        sub_1B64324(Master_object);
      }
    }
  }
  v10 = Method_CombineCommandCodeListViewManager_OnClickDecide__;
  if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B640E0(Method_CombineCommandCodeListViewManager_OnClickDecide__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__OnClickFilterKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22
  __int64 v14; // x0

  if ( (byte_49FFAC4 & 1) == 0 )
  {
    sub_1B640C8(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_EndSelectFilterKind__, v3);
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_OnClickFilterKind__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FFAC4 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_CombineCommandCodeListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_CombineCommandCodeListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B64314(ServantFilterSelectMenu_CallbackFunc_TypeInfo, v11, v12);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1B64324(v14);
    CommonUI__OpenServantFilterSelectMenu_30352028(v10, 6, sort, (ListViewManager_o *)this, v13, -1, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickListView(
        CombineCommandCodeListViewManager_o *this,
        ListViewObject_o *listviewObject,
        const MethodInfo *method)
{
  ;
}


void __fastcall CombineCommandCodeListViewManager__OnClickListView_44414336(
        CombineCommandCodeListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 methodPtr_low; // x9
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  System_Collections_Generic_List_object__o *itemList; // x0
  struct UserCommandCodeEntity_o *v15; // x8
  __int128 v16; // q1
  int64_t v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  int64_t v22; // x21
  const MethodInfo *v23; // x2
  int size; // w25
  System_Collections_Generic_List_object__o *v25; // x22
  __int64 v26; // x9
  _OWORD *monitor; // x8
  __int128 v28; // q0
  int v29; // w22
  System_Collections_Generic_List_object__o *v30; // x20
  int32_t v31; // w21
  CombineCommandCodeListViewManager_o *v32; // x0
  ListViewItem_o *v33; // x1
  const MethodInfo *v34; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+40h] [xbp-70h]

  v3 = item;
  if ( (byte_49FFAC2 & 1) == 0 )
  {
    sub_1B640C8(&CombineCommandCodeListViewItem_TypeInfo, item);
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_OnClickListView__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_49FFAC2 = 1;
  }
  if ( v3 )
  {
    methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (CombineCommandCodeListViewItem_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineCommandCodeListViewItem_TypeInfo )
    {
LABEL_36:
      sub_1B645E4(v3);
      CombineCommandCodeListViewManager__OnLongPushListView(v32, v33, v34);
      return;
    }
  }
  v12 = Method_CombineCommandCodeListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B640E0(Method_CombineCommandCodeListViewManager_OnClickListView__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
  if ( !v3 )
    goto LABEL_28;
  v15 = *(struct UserCommandCodeEntity_o **)&v3[1].fields.selectNum;
  if ( !v15 )
    goto LABEL_28;
  v16 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
  *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v37.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v36 = v37;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v36, 0LL);
  if ( BYTE3(v3[1].klass) )
  {
    BYTE3(v3[1].klass) = 0;
    this->fields.selectItem = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectItem, 0, v18, v19);
    CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0LL, v20);
    v22 = 0LL;
  }
  else
  {
    v22 = v17;
    BYTE3(v3[1].klass) = 1;
    this->fields.selectItem = (struct CombineCommandCodeListViewItem_o *)v3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectItem, (int32_t)v3, v18, v19);
    CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, (CombineCommandCodeListViewItem_o *)v3, v23);
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_28;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v3 = 0LL;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                (int32_t)v3,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_28;
      v25 = itemList;
      v26 = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v26
        || (CombineCommandCodeListViewItem_c *)itemList->klass->_2.typeHierarchy[v26 - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      monitor = itemList[3].monitor;
      if ( !monitor )
        goto LABEL_28;
      v28 = monitor[2];
      *(_OWORD *)&v37.fields.currentCryptoKey = monitor[1];
      *(_OWORD *)&v37.fields.fakeValue = v28;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v35 = v37;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v35, 0LL) != v22 )
        BYTE3(v25[2].fields._syncRoot) = 0;
      v3 = (ListViewItem_o *)(unsigned int)((_DWORD)v3 + 1);
      if ( size == (_DWORD)v3 )
        goto LABEL_29;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_28;
    }
    sub_1B645E4(itemList);
    goto LABEL_36;
  }
LABEL_29:
  itemList = (System_Collections_Generic_List_object__o *)CombineCommandCodeListViewManager__get_ObjectList(this, v21);
  if ( !itemList )
LABEL_28:
    sub_1B64324(itemList);
  v29 = itemList->fields._size;
  v30 = itemList;
  if ( v29 >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v30,
                                                                v31,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
      if ( !itemList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))itemList->klass->vtable._9_unknown.method)(
        itemList,
        this->fields.isInput,
        itemList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( v29 == ++v31 )
        return;
    }
    goto LABEL_28;
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickNormalStatus(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49FFABE & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_EndClickTabStatus__, method);
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_OnClickNormalStatus__, v3);
    sub_1B640C8(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_49FFABE = 1;
  }
  if ( this->fields.modeKind )
  {
    v5 = Method_CombineCommandCodeListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_CombineCommandCodeListViewManager_OnClickNormalStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_1B64314(
                                                                      CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo,
                                                                      v7,
                                                                      v8);
    CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndClickTabStatus__,
      v10);
    CombineCommandCodeListViewManager__StatusRequest(this, v9, v11);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickScaleChange(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  CombineCommandCodeListViewManager_o *v9; // x0
  int v10; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v13; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_49FFABB & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_OnClickScaleChange__, method);
    byte_49FFABB = 1;
  }
  v3 = Method_CombineCommandCodeListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_CombineCommandCodeListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v9 = this;
    v10 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v9 = this;
    v10 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v9 = this;
    v10 = 1;
LABEL_11:
    v9->fields.seed = smallSizeSeed;
    p_seed = &v9->fields.seed;
    *((_DWORD *)p_seed + 110) = v10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v5, v6);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v13 = this->fields.scaleType,
        sort->fields.iconScaleKind = v13,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v13, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1B64324(sort);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  CombineCommandCodeListViewManager__ModifyList(this, 1, v15);
  CombineCommandCodeListViewManager__SetMode_44409988(this, 3, v16);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__OnClickSortAscendingOrder(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_49FFAC9 & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__, method);
    byte_49FFAC9 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(v5);
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  ServantSortSelectMenu_CallbackFunc_o *v13; // x22
  __int64 v14; // x0

  if ( (byte_49FFAC7 & 1) == 0 )
  {
    sub_1B640C8(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_EndSelectSortKind__, v3);
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_OnClickSortKind__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FFAC7 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_CombineCommandCodeListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_CombineCommandCodeListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v13 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B64314(ServantSortSelectMenu_CallbackFunc_TypeInfo, v11, v12);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1B64324(v14);
    CommonUI__OpenServantSortSelectMenu(v10, 6, sort, 0, v13, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnLongPushListView(
        CombineCommandCodeListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Behaviour_o *scrollView; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct UserCommandCodeEntity_o *v12; // x1
  CombineCommandCodeListViewManager_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_49FFAC3 & 1) == 0 )
  {
    sub_1B640C8(&CombineCommandCodeListViewItem_TypeInfo, item);
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_OnLongPushListView__, v5);
    byte_49FFAC3 = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    v6 = Method_CombineCommandCodeListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_CombineCommandCodeListViewManager_OnLongPushListView__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    if ( item
      && ((methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
       || (CombineCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineCommandCodeListViewItem_TypeInfo) )
    {
      sub_1B645E4(item);
      CombineCommandCodeListViewManager__GetSelectItem(v13, v14);
    }
    else
    {
      scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !scrollView
        || (UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL), !item)
        || (v12 = *(struct UserCommandCodeEntity_o **)&item[1].fields.selectNum,
            this->fields.selectShowStatusUserCmdCode = v12,
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&this->fields.selectShowStatusUserCmdCode,
              (int32_t)v12,
              v10,
              v11),
            (scrollView = (UnityEngine_Behaviour_o *)this->fields.combineRootComponent) == 0LL) )
      {
        sub_1B64324(scrollView);
      }
      CombineRootComponent__ShowCommandCodeStatus((CombineRootComponent_o *)scrollView, 0LL);
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
  UIScrollView_o *v7; // x0
  struct System_Action_o *callbackFunc2; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FFABA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFABA = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v7 = this->fields.scrollView;
        if ( !v7
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
                v7,
                1LL,
                v7->klass->vtable._9_SetDragAmount.methodPtr),
              (v7 = this->fields.scrollView) == 0LL) )
        {
          sub_1B64324(v7);
        }
        UIScrollView__UpdatePosition(v7, 0LL);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v9, v10);
        if ( callbackFunc2 )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
            callbackFunc2->fields.original_method_info,
            *(_QWORD *)&callbackFunc2->fields.extra_arg);
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
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v13; // x21
  int32_t v14; // w22
  Il2CppObject *Item; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x24
  const MethodInfo *v19; // x3

  if ( (byte_49FFAB9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_OnMoveEnd__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__, v9);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v10);
    byte_49FFAB9 = 1;
  }
  ObjectList = CombineCommandCodeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v13 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v14 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v13,
               v14,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
      v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_CombineCommandCodeListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      CombineCommandCodeListViewObject__Init_44410612((CombineCommandCodeListViewObject_o *)Item, mode, v18, v19);
      if ( size == ++v14 )
        return;
    }
LABEL_10:
    sub_1B64324(ObjectList);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
    delay,
    0LL);
}


void __fastcall CombineCommandCodeListViewManager__SetDecideButtonStatus(
        CombineCommandCodeListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_o *decideButton; // x0
  __int64 v6; // x1

  decideButton = this->fields.decideButton;
  if ( !decideButton
    || (((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))decideButton->klass->vtable._5_set_isEnabled.method)(
          decideButton,
          isEnable,
          decideButton->klass->vtable._6_OnInit.methodPtr),
        (decideButton = this->fields.decideButton) == 0LL) )
  {
    sub_1B64324(decideButton);
  }
  if ( isEnable )
    v6 = 0LL;
  else
    v6 = 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
    decideButton,
    v6,
    1LL,
    decideButton->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall CombineCommandCodeListViewManager__SetFilterButtonImage(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_49FFAC6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17441/*"btn_filter_on"*/, method);
    sub_1B640C8(&StringLiteral_17440/*"btn_filter"*/, v3);
    byte_49FFAC6 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B64324(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17440/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17441/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__SetMode(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  CombineCommandCodeListViewManager__SetMode_44409988(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__SetMode_44409988(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v6; // x2
  UnityEngine_Behaviour_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_49FFAB8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    byte_49FFAB8 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v7 )
      goto LABEL_17;
    if ( UnityEngine_Behaviour__get_enabled(v7, 0LL) )
      goto LABEL_11;
    v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v7
      || (UnityEngine_Behaviour__set_enabled(v7, 1, 0LL),
          (v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
    {
LABEL_17:
      sub_1B64324(v7);
    }
    UIScrollView__UpdatePosition((UIScrollView_o *)v7, 0LL);
  }
LABEL_11:
  if ( (mode & 0xFFFFFFFE) == 2 )
  {
    if ( mode == 2 )
      v8 = 2;
    else
      v8 = 3;
    CombineCommandCodeListViewManager__RequestListObject(this, v8, 0.0, v6);
  }
}


void __fastcall CombineCommandCodeListViewManager__SetObjectItem(
        CombineCommandCodeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CombineCommandCodeListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_49FFAB7 & 1) == 0 )
  {
    this = (CombineCommandCodeListViewManager_o *)sub_1B640C8(&CombineCommandCodeListViewObject_TypeInfo, obj);
    byte_49FFAB7 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(CombineCommandCodeListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CombineCommandCodeListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineCommandCodeListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  CombineCommandCodeListViewObject__Init_44409864(
    (CombineCommandCodeListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void __fastcall CombineCommandCodeListViewManager__SetSelectedCommandCodeData(
        CombineCommandCodeListViewManager_o *this,
        CombineCommandCodeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Component_o *selectedCommandCode; // x0
  System_String_o *MargeExplanation_40191376; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v14; // q1
  char v15; // w1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-60h]
  System_String_array *explanationList; // [xsp+48h] [xbp-38h] BYREF
  System_String_array *titleList; // [xsp+50h] [xbp-30h] BYREF
  System_Int32_array *idList; // [xsp+58h] [xbp-28h] BYREF

  if ( (byte_49FFAB2 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FFAB2 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  if ( !item || !item->fields.userCommandCode )
  {
    selectedCommandCode = (UnityEngine_Component_o *)this->fields.selectedCommandCode;
    if ( selectedCommandCode )
    {
      selectedCommandCode = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectedCommandCode, 0LL);
      if ( selectedCommandCode )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 0, 0LL);
        selectedCommandCode = (UnityEngine_Component_o *)this->fields.skillName;
        if ( selectedCommandCode )
        {
          UILabel__set_text((UILabel_o *)selectedCommandCode, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          selectedCommandCode = (UnityEngine_Component_o *)this->fields.skillMessage;
          if ( selectedCommandCode )
          {
            UILabel__set_text((UILabel_o *)selectedCommandCode, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            CombineCommandCodeListViewManager__SetDecideButtonStatus(this, 0, v16);
            selectedCommandCode = (UnityEngine_Component_o *)this->fields.equippedInfo;
            if ( selectedCommandCode )
              goto LABEL_22;
          }
        }
      }
    }
LABEL_28:
    sub_1B64324(selectedCommandCode);
  }
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.selectedCommandCode;
  if ( !selectedCommandCode )
    goto LABEL_28;
  selectedCommandCode = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectedCommandCode, 0LL);
  if ( !selectedCommandCode )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 1, 0LL);
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.selectedCommandCode;
  if ( !selectedCommandCode )
    goto LABEL_28;
  ServantFaceIconComponent__Set_37911612(
    (ServantFaceIconComponent_o *)selectedCommandCode,
    item->fields.userCommandCode,
    0LL,
    0LL,
    0LL);
  selectedCommandCode = (UnityEngine_Component_o *)item->fields.userCommandCode;
  if ( !selectedCommandCode )
    goto LABEL_28;
  UserCommandCodeEntity__GetSkillInfo(
    (UserCommandCodeEntity_o *)selectedCommandCode,
    &idList,
    &titleList,
    &explanationList,
    0LL);
  MargeExplanation_40191376 = SkillInfo__GetMargeExplanation_40191376(explanationList, 0LL);
  this->fields.selectItem = item;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectItem, (int32_t)item, v8, v9);
  if ( !titleList )
    goto LABEL_28;
  if ( !titleList->max_length )
    sub_1B6432C(selectedCommandCode, v10);
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.skillName;
  if ( !selectedCommandCode )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)selectedCommandCode, titleList->m_Items[0], 0LL);
  WrapControlText__textAdjust(this->fields.skillMessage, MargeExplanation_40191376, 22, 0, 0, 0LL);
  selectItem = this->fields.selectItem;
  if ( selectItem && (userCommandCode = selectItem->fields.userCommandCode) != 0LL )
  {
    v14 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v19.fields.fakeValue = v14;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v18 = v19;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v18, 0LL) != this->fields.nowEquipedUserCommandCodeId;
  }
  else
  {
    v15 = 1;
  }
  CombineCommandCodeListViewManager__SetDecideButtonStatus(this, v15, v11);
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.equippedInfo;
  if ( !selectedCommandCode )
    goto LABEL_28;
  if ( !item->fields.isEquiped )
  {
LABEL_22:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 1, 0LL);
  CombineUtility__SetCommandCodeEquippedInfoLabel(
    this->fields.equippedLabel,
    this->fields.nameLabel,
    item->fields._EquipedSvtId_k__BackingField,
    item->fields._EquipedSvtId_k__BackingField != item->fields._BaseSvtId_k__BackingField,
    v17);
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
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v13; // x8
  int32_t sortKind; // w9
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x9
  System_String_o **v18; // x10
  System_String_o **v19; // x8
  System_String_o **v20; // x8

  if ( (byte_49FFACA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17471/*"btn_sort_up"*/, v3);
    sub_1B640C8(&StringLiteral_17558/*"btn_txt_up"*/, v4);
    sub_1B640C8(&StringLiteral_17514/*"btn_txt_new"*/, v5);
    sub_1B640C8(&StringLiteral_17504/*"btn_txt_down"*/, v6);
    sub_1B640C8(&StringLiteral_17521/*"btn_txt_old"*/, v7);
    sub_1B640C8(&StringLiteral_17468/*"btn_sort_down"*/, v8);
    byte_49FFACA = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v11 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v11 )
      goto LABEL_34;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v13 = this->fields.sort;
    if ( v13 )
    {
      sortKind = v13->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17521/*"btn_txt_old"*/ : &StringLiteral_17514/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v17 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
              v18 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
LABEL_30:
              if ( v16->fields.isAscendingOrder )
                v20 = v17;
              else
                v20 = v18;
              UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
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
          v19 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17558/*"btn_txt_up"*/ : &StringLiteral_17504/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v19, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v17 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
              v18 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1B64324(sort);
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
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v16; // x8
  __int64 *v17; // x8
  __int64 *v18; // x8
  int32_t v19; // w8
  UILabel_o *v20; // x20
  const MethodInfo *v21; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v24; // q1
  bool v25; // w1
  UILabel_o *combineInfoMsgLb; // x20
  __int64 *v27; // x8
  const MethodInfo *v28; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-40h]

  if ( (byte_49FFAB1 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_17577/*"button_allchoice_reg"*/, v6);
    sub_1B640C8(&StringLiteral_17580/*"button_alllock_unreg"*/, v7);
    sub_1B640C8(&StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v8);
    sub_1B640C8(&StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v9);
    sub_1B640C8(&StringLiteral_17593/*"button_select_reg"*/, v10);
    sub_1B640C8(&StringLiteral_3636/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, v11);
    sub_1B640C8(&StringLiteral_17594/*"button_select_unreg"*/, v12);
    sub_1B640C8(&StringLiteral_17579/*"button_alllock_reg"*/, v13);
    sub_1B640C8(&StringLiteral_17578/*"button_allchoice_unreg"*/, v14);
    byte_49FFAB1 = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_43;
  v16 = &StringLiteral_17593/*"button_select_reg"*/;
  if ( modeKind )
    v16 = &StringLiteral_17594/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v16, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_43;
  v17 = &StringLiteral_17579/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v17 = &StringLiteral_17580/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v17, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
  if ( !statusTabButton )
    goto LABEL_43;
  v18 = &StringLiteral_17577/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v18 = &StringLiteral_17578/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v18, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  v19 = this->fields.modeKind;
  if ( v19 == 2 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = &StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
LABEL_38:
    statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v27, 0LL);
    if ( combineInfoMsgLb )
    {
      UILabel__set_text(combineInfoMsgLb, (System_String_o *)statusTabButton, 0LL);
      CombineCommandCodeListViewManager__SetDecideButtonStatus(this, 0, v28);
      return;
    }
    goto LABEL_43;
  }
  if ( v19 == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = &StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
    goto LABEL_38;
  }
  if ( v19 )
    return;
  v20 = this->fields.combineInfoMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3636/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, 0LL);
  if ( !v20 )
LABEL_43:
    sub_1B64324(statusTabButton);
  UILabel__set_text(v20, (System_String_o *)statusTabButton, 0LL);
  selectItem = this->fields.selectItem;
  if ( selectItem && (userCommandCode = selectItem->fields.userCommandCode) != 0LL )
  {
    v24 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v30.fields.fakeValue = v24;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v29 = v30;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v29, 0LL) != this->fields.nowEquipedUserCommandCodeId;
  }
  else
  {
    v25 = 0;
  }
  CombineCommandCodeListViewManager__SetDecideButtonStatus(this, v25, v21);
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
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  Il2CppObject *Request_object; // x0
  System_Int64_array *v16; // x1
  System_Int64_array *v17; // x2
  bool v18; // w3
  bool v19; // w4
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  System_Int64_array *v25; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FFAC1 & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineCommandCodeListViewManager_EndStatusSync__, callback);
    sub_1B640C8(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_49FFAC1 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v25 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( CombineCommandCodeListViewManager__GetSwapChoiceList(this, &choiceList, &v25, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v20, v21);
      v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v22, v23);
      NetworkManager_ResultCallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v24,
                         (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
      if ( Request_object )
      {
        v17 = v25;
        v16 = choiceList;
        v19 = 1;
        v18 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1B64324(Request_object);
    }
  }
  else if ( modeKind == 1 && CombineCommandCodeListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v10, v11);
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v14,
                       (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
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
        0LL);
      return;
    }
    goto LABEL_19;
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
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

  if ( (byte_49FFAAC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49FFAAC = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
  CombineCommandCodeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CombineCommandCodeListViewObject__o *__fastcall CombineCommandCodeListViewManager__get_ClippingObjectList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  const MethodInfo *v15; // x1
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49FFAAF & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1B640C8(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FFAAF = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v13,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)objectList & 1) == 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
        if ( !objectList )
          break;
        v16 = (Il2CppObject *)objectList;
        objectList = (System_Collections_Generic_List_object__o *)CombineCommandCodeListViewObject__GetItem(
                                                                    (CombineCommandCodeListViewObject_o *)objectList,
                                                                    v15);
        if ( !objectList )
          break;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40389508(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v20 = Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          v21 = v10->fields._size;
          if ( (unsigned int)v21 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              v16,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + v21;
            v10->fields._size = v21 + 1;
            v22[4] = (Il2CppClass *)v16;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v16, v17, v18);
          }
        }
      }
      if ( size == ++v13 )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v10;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1B64324(objectList);
  }
  return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v10;
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  System_Collections_Generic_List_object__o *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_49FFAAE & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1B640C8(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FFAAE = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v13,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)objectList & 1) == 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
        if ( !v10 )
          break;
        items = v10->fields._items;
        v18 = Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        v19 = v10->fields._size;
        v20 = objectList;
        if ( (unsigned int)v19 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)objectList,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + v19;
          v10->fields._size = v19 + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
        }
      }
      if ( size == ++v13 )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v10;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1B64324(objectList);
  }
  return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v10;
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

  if ( (byte_49FFAAD & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49FFAAD = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
  CombineCommandCodeListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B0308;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B02C0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CombineCommandCodeListViewManager_RequestCallbackFunc__BeginInvoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_49FFACD & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isRequest);
    byte_49FFACD = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall CombineCommandCodeListViewManager_RequestCallbackFunc__EndInvoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall CombineCommandCodeListViewManager_RequestCallbackFunc__Invoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}